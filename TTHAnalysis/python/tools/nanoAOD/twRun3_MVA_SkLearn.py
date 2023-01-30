from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module 
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection 
from CMGTools.TTHAnalysis.treeReAnalyzer import EventLoop

from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput

from CMGTools.TTHAnalysis.tools.nanoAOD.TopRun3_modules import ch

import numpy as np
import ROOT

# -- Librerias de ML
import pickle
from sklearn.metrics import confusion_matrix
from sklearn.metrics import classification_report
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression, LogisticRegressionCV
from sklearn.decomposition import PCA
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score
from sklearn.metrics import roc_curve
from sklearn.metrics import roc_auc_score

class tW_MVA(Module):
    def __init__(self, label = "", MVApath1j1b = "", MVApath2j1b = "", isMC = True, jecvars = ["jesTotal", "jer"], lepvars = ["mu"]):
        ''' 
        Module to compute the MVA for tW analysis.
        '''
        if (MVApath1j1b == ""):
            raise RuntimeError("No model was provided.")

        self.vars1j1b = ["nJetSel20{v}_Recl", 
                         "Jet1_Pt{v}",
                         "JetLoose1_Pt{v}",
                         "Lep1Lep2Jet1MET_M{v}",
                         "Lep1Lep2Jet1_C{v}",
                         "Lep1Lep2Jet1_Pt{v}"]

        self.vars2j1b = ["Jet2_Pt{v}",
                         "Lep1Jet1_DR{v}",
                         "Lep12Jet12_DR{v}"]

        # -- Load the model and save it into an attribute. We need to set the njobs to 1 to avoid problems with the multiprocessing. We also set the verbosity to 0 to avoid printing the training information.
        self.MVApath1j1b = MVApath1j1b
        with open(self.MVApath1j1b) as model_pkl_1j1b:
            self.model_1j1b = pickle.load(model_pkl_1j1b).set_params(n_jobs=1, verbose=0)
        
        self.MVApath2j1b = MVApath2j1b
        with open(self.MVApath2j1b) as model_pkl_2j1b:
            self.model_2j1b = pickle.load(model_pkl_2j1b).set_params(n_jobs=1, verbose=0)

        # -- Nominal variables (MVA outputs)
        self.MVAbranches = ["mvaRF_1j1b", "mvaRF_2j1b"]
        self.branches = []
        
        # -- Variations
        self.label    = "" if (label in ["", None]) else ("_" + label)

        self.systsJEC   = {0: ""} # 0 is nominal
        self.systsLepEn = {} # we don't include the nominal in this case
        self.isMC       = isMC
        if not self.isMC:
            jecvars = []
            if "elscale" in lepvars:
                lepvars = ["elscale"]
            else:
                lepvars = []

        if len(jecvars):
            for i, var in enumerate(jecvars):
                self.systsJEC[i+1]    = "_%sUp"%var
                self.systsJEC[-(i+1)] = "_%sDown"%var

        if len(lepvars):
            for i, var in enumerate(lepvars):
                self.systsLepEn[i+1]    = "_%sUp"%var
                self.systsLepEn[-(i+1)] = "_%sDown"%var
        
        # Extend the branches for systematic variations
        for delta,var in self.systsJEC.iteritems():
            self.branches.extend([br + self.label + var for br in self.MVAbranches])
        for delta,var in self.systsLepEn.iteritems():
            self.branches.extend([br + self.label + var for br in self.MVAbranches])

        return 

    # old interface (CMG)
    def listBranches(self):
        return self.branches[:]
    def __call__(self,event):
        return self.run(event, CMGCollection, "met")

    # new interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        declareOutput(self, wrappedOutputTree, self.branches)
    def analyze(self, event):
        writeOutput(self, self.run(event, NanoAODCollection))
        return True

    # Common processing
    def run(self, event, Collection):
        # ============================ Definitions and declarations
        allret = {}
        
        # -- Get the object collections used during the training -- #
        #leps = [l for l in Collection(event, "LepGood")]
        #nLepGood = len(leps)

        # ============================ Initialisations
        for var in self.MVAbranches:
            for delta,sys in self.systsJEC.iteritems(): # Remember that the nominal is included in the systsJEC
                allret[var + sys] = -99

        for var in self.MVAbranches:
            for delta,sys in self.systsLepEn.iteritems():
                allret[var + sys] = -99
        
        # ============================ Calculations
        # JECs variations
        if (event.nLepGood >= 2 and event.channel == ch.ElMu):
            for delta,sys in self.systsJEC.iteritems():
                # -- 1j1b -- #
                if getattr(event, 'nJetSel30{v}_Recl'.format(v = sys if "unclustEn" not in sys else "")) > 0 and getattr(event, 'nBJetSelMedium30{v}_Recl'.format(v = sys if "unclustEn" not in sys else "")) > 0: # we require 1j1b, the bjet requirement helps to improve the process time
                    allret["mvaRF_1j1b" + sys] = self.model_1j1b.predict_proba(np.array([getattr(event, var.format(v = sys if "unclustEn" not in sys else "")) for var in self.vars1j1b]).reshape(1, -1))[0][1]
                # -- 2j1b -- #
                if getattr(event, 'nJetSel30{v}_Recl'.format(v = sys if "unclustEn" not in sys else "")) > 1 and getattr(event, 'nBJetSelMedium30{v}_Recl'.format(v = sys if "unclustEn" not in sys else "")) > 0: # we require 2j1b
                    allret["mvaRF_2j1b" + sys] = self.model_2j1b.predict_proba(np.array([getattr(event, var.format(v = sys if "unclustEn" not in sys else "")) for var in self.vars2j1b]).reshape(1, -1))[0][1]

        # Lepton energy scale variations
        for delta,sys in self.systsLepEn.iteritems():
            if (getattr(event, "nLepGood" + sys[1:]) >= 2 and getattr(event, "channel" + sys) == ch.ElMu):
                # -- 1j1b -- #
                if getattr(event, 'nJetSel30{v}_Recl'.format(v = sys)) > 0 and getattr(event, 'nBJetSelMedium30{v}_Recl'.format(v = sys)) > 0:
                    allret["mvaRF_1j1b" + sys] = self.model_1j1b.predict_proba(np.array([getattr(event, var.format(v = sys)) for var in self.vars1j1b]).reshape(1, -1))[0][1]
                # -- 2j1b -- #
                if getattr(event, 'nJetSel30{v}_Recl'.format(v = sys)) > 1 and getattr(event, 'nBJetSelMedium30{v}_Recl'.format(v = sys)) > 0:
                    allret["mvaRF_2j1b" + sys] = self.model_2j1b.predict_proba(np.array([getattr(event, var.format(v = sys)) for var in self.vars2j1b]).reshape(1, -1))[0][1]
        
        # ============================ Return
        return allret

        
