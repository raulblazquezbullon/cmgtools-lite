from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module 
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection 
from CMGTools.TTHAnalysis.treeReAnalyzer import EventLoop

from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput

from math import sqrt, cos
import numpy as np
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaR
from PhysicsTools.Heppy.physicsobjects.Jet import _btagWPs

class mva_vars(Module):
    def __init__(self, label="", recllabel='Recl'):
        self.branches = ["year", 
                         "nLepGood", 
                         "lep1_pt", "lep1_eta","lep1_phi","lep1_mass", "lep1_pdgId",
                         "lep2_pt", "lep2_eta","lep2_phi","lep2_mass", "lep2_pdgId",
                         "nJet25_Recl", 
                         "htJet25j_Recl", 
                         "MET_pt", "MET_phi",
                         "nBJetLoose25_Recl",
                         "nBJetMedium25_Recl",
                         "nBJetLoose40_Recl",
                         "nBJetMedium40_Recl",
                         "jet1_pt", "jet1_eta","jet1_phi","jet1_mass","jet1_btagDeepFlavB", 
                         "jet2_pt", "jet2_eta","jet2_phi","jet2_mass","jet2_btagDeepFlavB",
                         "jet3_pt", "jet3_eta","jet3_phi","jet3_mass","jet3_btagDeepFlavB",
                         "jet4_pt", "jet4_eta","jet4_phi","jet4_mass","jet4_btagDeepFlavB",
                         "jet5_pt", "jet5_eta","jet5_phi","jet5_mass","jet5_btagDeepFlavB",
                         "jet6_pt", "jet6_eta","jet6_phi","jet6_mass","jet6_btagDeepFlavB",
                         "jet7_pt", "jet7_eta","jet7_phi","jet7_mass","jet7_btagDeepFlavB",
                         "eventNumber"
                         ]

    # new interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        declareOutput(self, wrappedOutputTree, self.branches)
    def analyze(self, event):
        #if int(event.event)%2!=0:
            writeOutput(self, self.run(event, NanoAODCollection))
            print(event.event)
            
            return True
        #else:
        #   return False

    # logic of the algorithm
    def run(self,event, Collection):
        # Initialize all values to -99
        allret = { var : -99 for var in self.branches }
        
        allret["eventNumber"]=getattr(event,"event")
        
        

        # Get the list of leptons
        all_leps = [j for j in Collection(event,"LepGood")]
        nFO = getattr(event,"nLepFO_Recl")
        chosen = getattr(event,"iLepFO_Recl")
        
        # Get the list of cleaned leptons
        leps = [all_leps[chosen[i]] for i in range(nFO)]
        nlep_cleaned = len(leps)
 
        for var in ["pt", "eta", "phi", "mass", "pdgId"]:
          for ilep, lep in enumerate(leps): 
            if ilep >= 2: break # hardcoded -- cutre pero bueno
            allret["lep%d_%s"%(ilep+1, var)] = getattr(lep, var) 

         #Get the jets
        jets = [j for j in Collection(event,"JetSel_Recl")]
        for var in ["pt", "eta", "phi", "mass", "btagDeepFlavB"]:
          # Stop at the 7th jet
          for ijet, jet in enumerate(jets): 
            if ijet >= 7: break # harcoded -- cutre pero bueno
            allret["jet%d_%s"%(ijet+1, var)] = getattr(jet, var)
            
        

        remvars = ["nLepGood", 
                   "year", 
                   "nJet25_Recl", 
                   "htJet25j_Recl", 
                   "MET_pt", 
                   "nBJetLoose25_Recl", 
                   "nBJetMedium25_Recl", 
                   "nBJetLoose40_Recl", 
                   "nBJetMedium40_Recl"]
       

        # Now the remaining variables 
        for remvar in remvars:
          allret[remvar] = getattr(event, remvar) 
       

        return allret




if __name__ == '__main__':
    from sys import argv
    file = ROOT.TFile(argv[1])
    tree = file.Get("tree")
    tree.vectorTree = True
    tree.AddFriend("sf/t",argv[2])
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf = EventVars2LSS('','Recl')
        def analyze(self,ev):
            print("\nrun %6d lumi %4d event %d: leps %d" % (ev.run, ev.lumi, ev.evt, ev.nLepGood))
            print(self.sf(ev))
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 50)

        
