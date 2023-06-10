from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module 
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection 

from CMGTools.TTHAnalysis.treeReAnalyzer import EventLoop


from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput

from math import sqrt, cos
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaR
from PhysicsTools.Heppy.physicsobjects.Jet import _btagWPs

import numpy as np
import ROOT
import onnxruntime as rt


import sys
import CMGTools.TTHAnalysis.tools.nanoAOD.functions as functions


# -- Librerias de ML
import pickle


class bdt_evaluator(Module):
    def __init__(self, mvapath, isMC = True, jecvars = ["Total"], lepvars = ["mu"]):
        ''' Module to include MVA discriminant for ttW using sklearn'''
        # -- Set ONNX options to be single threaded
        self.sess_options = rt.SessionOptions()
        self.sess_options.intra_op_num_threads = 1
        self.sess_options.inter_op_num_threads = 1
        self.sess_options.execution_mode = rt.ExecutionMode.ORT_SEQUENTIAL
        
        self.mvapath = mvapath
        self.open_model()
        if self.mvapath=="/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/tools/nanoAOD/models/onnxConverter/RF_ttw-ttbar_35.onnx":
            self.branches = ["ttW_signalProb_rf_binary"]
        # OLD INTERFACE
        if self.mvapath=="/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/tools/nanoAOD/models/onnxConverter/BDT_ttw-ttbar_35.pkl":
            self.branches = ["ttW_signalProb_bdt_binary"]

        self.systsJEC   = {0: ""} # 0 is nominal
        self.systsLepEn = {} # we don't include the nominal in this case
        self.isMC       = isMC


        if not self.isMC: # Do not run jecVars for data
            jecvars = []

        if len(jecvars):
            for i, var in enumerate(jecvars):
                self.systsJEC[i+1]    = "_%sUp"%var
                self.systsJEC[-(i+1)] = "_%sDown"%var

		#mod1: BDT multiple 40	mod2: RF multiple 40
		#mod3: BDT tt 35        mod4: RF tt 35
		#mod5: NN tt			mod6: NN multiple
        # Extend the branches for systematic variations
        newbranches = []
        mainbrname = self.branches[0]
        for delta,var in self.systsJEC.items():
            self.branches.append(mainbrname + var)
        self.branches.extend(newbranches)
        print(self.systsJEC)
        return

	
    def open_model(self):
        print("Reading model: %s"%self.mvapath)
        if ".pkl" in self.mvapath:
          self.model = pickle.load(open(self.mvapath, "rb"))			
        else:
          self.model = rt.InferenceSession(self.mvapath, providers = ["CPUExecutionProvider"], sess_options=self.sess_options)
          self.input_name = self.model.get_inputs()[0].name
        return
    
    # new interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        declareOutput(self, wrappedOutputTree, self.branches)
        return
    
    def analyze(self, event):
        writeOutput(self, self.run(event, NanoAODCollection))
        return True
    
    # logic of the algorithm
    def run(self, event, Collection):
        """ Declare variables for controlling I/O """
        ret = {}
        inputVars = []
        score_ = -99 
        cat_   = -99 

        """ Get lepton and jet objects """
        # Get the list of leptons
        all_leps = [j for j in Collection(event,"LepGood")]
        nFO = getattr(event,"nLepFO_Recl")
        chosen = getattr(event,"iLepFO_Recl")
        
        # These are the objects we have to use
        leps = [all_leps[chosen[i]] for i in range(nFO)]
        jets = [j for j in Collection(event,"JetSel_Recl")]
        year = event.year

        
        """ A partir de aqui hay que modificar en funcion del modelo !!!!"""
        
        # lepton things


        # ============================ Calculations
        lep1_pt,lep1_eta,lep1_phi,lep1_mass,lep2_pt,lep2_eta,lep2_phi,lep2_mass,lep1_charge,lep1_elec,lep2_charge,lep2_elec=functions.lepstuff(event, leps, var = "")
    
        # These objects will have the variated information as well
        l1 = functions.create4vec(lep1_pt, lep1_eta, lep1_phi , lep1_mass)
        l2 = functions.create4vec(lep2_pt, lep2_eta, lep2_phi , lep2_mass)        
        for delta, var in self.systsJEC.items():
            jet1_pt,jet1_eta,jet1_phi,jet1_mass,jet1_btagDeepFlavB,jet2_pt,jet2_eta,jet2_phi,jet2_mass,jet2_btagDeepFlavB,jet3_pt,jet3_eta,jet3_phi,jet3_mass,jet3_btagDeepFlavB,jet4_pt,jet4_eta,jet4_phi,jet4_mass,jet4_btagDeepFlavB,jet5_pt,jet5_eta,jet5_phi,jet5_mass,jet5_btagDeepFlavB,jet6_pt,jet6_eta,jet6_phi,jet6_mass,jet6_btagDeepFlavB,jet7_pt,jet7_eta,jet7_phi,jet7_mass,jet7_btagDeepFlavB = functions.jetstuff(event, jets, var)
            j1 = functions.create4vec(jet1_pt , jet1_eta, jet1_phi , jet1_mass)
            j2 = functions.create4vec(jet2_pt , jet2_eta, jet2_phi , jet2_mass)
            
            #bjet things

            """ COMENTARIO CARLOS VICO:
            -----------------------------------
            He cambiado esta parte un poco. Antes te guardabas directamente los jets que pasaban el corte de btag,
            que esta bien hecho, pero para poder evaluar bien las incertidumbres es mas facil si nos quedamos con
            el indice que ocupa el bjet en la lista de jets, y luego accedemos a las variaciones utilizando ese indice.
            El codigo saca lo mismo, simplemente sacas ese numero de otra forma.
            """

            bjetindices = []
            for ijet, jet in enumerate(jets):    #OJO, esta hecho SOLO para loose wp (pero habiamos quedado en que era el mas informativo asi que tira palante)
                wp = jet.btagDeepFlavB
                is_btagged = (((wp >= 0.0614) and (year == 2016)) or 
                            ((wp >= 0.0521) and (year == 2017)) or 
                            ((wp >= 0.0494) and (year == 2018)))
                if is_btagged:
                    bjetindices.append(ijet)
              
            
            
            B1_pt,B1_eta,B1_phi,B1_mass,B2_pt,B2_eta,B2_phi,B2_mass=functions.bstuff(event, bjetindices, var)
            #print("nbjets:",len(bjets))
            #print(B1_pt,B1_eta,B1_phi,B1_mass,B2_pt,B2_eta,B2_phi,B2_mass)
                
            
            b1 = functions.create4vec(B1_pt , B1_eta, B1_phi , B1_mass)
            b2 = functions.create4vec(B2_pt , B2_eta, B2_phi , B2_mass)
            
            
            #others
            htJet25j_Recl      = getattr(event, "htJet25j_Recl"     )
            nJet25_Recl        = getattr(event, "nJet25_Recl"       )
            nBJetLoose25_Recl  = getattr(event, "nBJetLoose25_Recl" )
            nBJetMedium25_Recl = getattr(event, "nBJetMedium25_Recl")
            nBJetMedium40_Recl = getattr(event, "nBJetMedium40_Recl")
            notBjets           = len(jets)-len(bjetindices)
            MET_pt             = getattr(event, "MET_pt")
        
        
            combipt   = functions.combipt(l1,l2)
            
            mll   = functions.mll(l1,l2)
            mlj11 = functions.mll(l1,j1)
            mlj12 = functions.mll(l1,j2)
            mlj21 = functions.mll(l2,j1)
            
            deltarlj11 = functions.deltar(l1,j1)
            
            deltarjet = functions.deltar(j1,j2)    #dejar para mejor modelo (40)
            
            deltarlb11 = functions.deltar(l1,b1)   #dejar para mejor modelo (40)
        
            deltarjb11 = functions.deltar(j1,b1)   #dejar para mejor modelo (40)
            deltarjb21 = functions.deltar(j2,b1)
            deltarjb22 = functions.deltar(j2,b2)   #dejar para mejor modelo (40)

            if self.mvapath=="/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/tools/nanoAOD/models/onnxConverter/RF_ttw-ttbar_35.onnx":
                brname = "ttW_signalProb_rf_binary"
                brname += "{v}".format( v = var )

                inputVars4= np.array([htJet25j_Recl, jet3_pt, jet4_pt, nJet25_Recl, notBjets, jet5_pt, 
                jet3_mass, jet1_pt, jet4_mass, deltarjet, MET_pt, jet2_pt, mlj12, mlj11, jet1_mass, 
                jet1_btagDeepFlavB, lep1_pt, B1_mass, jet5_mass, jet4_btagDeepFlavB, jet2_mass, jet2_btagDeepFlavB, 
                B1_pt, jet5_btagDeepFlavB, jet5_phi, jet1_eta, jet5_eta, combipt, jet2_eta, B1_eta, lep1_eta, deltarlb11, 
                jet3_btagDeepFlavB, deltarjb21, mlj21], dtype=np.float32).reshape(1, -1)         
                         
                # Old interface
                score4 = self.model.run(None, {self.input_name: inputVars4})[1][0][1]
                ret[brname] = score4
            if self.mvapath=="/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/tools/nanoAOD/models/onnxConverter/BDT_ttw-ttbar_35.pkl":
                brname = "ttW_signalProb_bdt_binary"
                brname += "{v}".format(v = var) if var != "" else ""
                inputVars3= np.array([[htJet25j_Recl, notBjets ,jet3_pt ,jet4_pt ,jet6_pt ,jet5_pt,
                deltarjet, nBJetMedium40_Recl, MET_pt, lep1_pt ,mlj11 ,deltarjb21,
                jet1_btagDeepFlavB, mlj12, deltarjb22 ,nBJetMedium25_Recl, mlj21,
                B1_mass, jet2_eta ,jet3_eta, lep2_eta, lep1_eta, nBJetLoose25_Recl,
                B1_eta, jet1_eta, jet2_btagDeepFlavB ,jet5_eta, mll, deltarlj11,
                deltarlb11 ,jet1_mass, jet3_btagDeepFlavB, jet4_eta ,deltarjb11,jet7_pt]])
                
                score_3= self.model.predict_proba(inputVars3)  
                score3=score_3[:,0]
                cat3=score_3[:,1]
                ret[brname] = cat3
                #print(" >> val: ", score3, cat3, brname)        
            #print('model4')   
        return ret
##########################################################################################################################


