from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module 
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection 

from CMGTools.TTHAnalysis.treeReAnalyzer import EventLoop

import xgboost as xgb

from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput

from math import sqrt, cos
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaR
from PhysicsTools.Heppy.physicsobjects.Jet import _btagWPs

import numpy as np
import ROOT

# -- Librerias de ML
import pickle
import joblib
from sklearn.metrics import confusion_matrix
from sklearn.metrics import classification_report
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression, LogisticRegressionCV
from sklearn.decomposition import PCA
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score
from sklearn.metrics import roc_curve
from sklearn.metrics import roc_auc_score

class bdt_evaluator(Module):
    def __init__(self, mvapath, label="", sublabel='ttWMVA'):
        ''' Module to include MVA discriminant for ttW using sklearn'''
        self.mvapath = mvapath
        self.open_model()
        self.branches = ["ttwmva_prob", "ttwmva_cat"]   

        # Variables to be used:
        return

    def open_model(self):
        with open(self.mvapath) as modelfile:
            model = pickle.load(modelfile) 
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
        alljets = [j for j in Collection(event,"JetSel_Recl")]
        year = event.year


        """ A partir de aqui hay que modificar en funcion del modelo !!!!"""
        bjets = []
        nonbjets = []
        for jet in alljets:
            wp = jet.btagDeepFlavB
            is_btagged = (((wp >= 0.3093) and (year == 2016)) or 
                          ((wp >= 0.3033) and (year == 2017)) or 
                          ((wp >= 0.2770) and (year == 2018)))
            if is_btagged:
                bjets.append(jet)
            else:
                nonbjets.append(jet)


        htjet25 = event.htJet25j_Recl
        jet3_pt   = nonbjets[2].pt
        jet2_pt   = nonbjets[1].pt
        jet2_mass = nonbjets[2].mass
        nJet25_Recl = event.nJet25_Recl
        jet4_pt   = nonbjets[3].pt
        combipt   = leps[0].pt + leps[1].pt
        lep1_charge = np.sign(leps[0].pdgId)
        lep2_mass = leps[1].mass
        mlj12 = self.moo(
            (leps[0].pt, leps[0].eta, leps[0].eta, leps[0].mass),
            (nonbjets[1].pt, nonbjets[1].eta, nonbjets[1].eta, nonbjets[1].mass)
        )
        lep2_elec = (np.abs(leps[1].pdgId) == 11)
        lep2_pt = leps[1].pt
        Flav_muon = (np.abs(leps[0].pdgId) == np.abs(leps[1].pdgId)) and (np.abs(leps[0].pdgId) == 13)
        B2_pt = -99
        mlj11 = self.moo(
            (leps[0].pt, leps[0].eta, leps[0].eta, leps[0].mass),
            (nonbjets[0].pt, nonbjets[0].eta, nonbjets[0].eta, nonbjets[0].mass)
        )
        mlj21 = self.moo(
            (leps[1].pt, leps[1].eta, leps[1].eta, leps[1].mass),
            (nonbjets[0].pt, nonbjets[0].eta, nonbjets[0].eta, nonbjets[0].mass)
        )
        mlj22 = self.moo(
            (leps[1].pt, leps[1].eta, leps[1].eta, leps[1].mass),
            (nonbjets[1].pt, nonbjets[1].eta, nonbjets[1].eta, nonbjets[1].mass)
        )
        mll = self.moo(
            (leps[0].pt, leps[0].eta, leps[0].eta, leps[0].mass),
            (leps[1].pt, leps[1].eta, leps[1].eta, leps[1].mass)
        )
        Flav_elec = (np.abs(leps[0].pdgId) == np.abs(leps[1].pdgId)) and (np.abs(leps[0].pdgId) == 11)
        nBJetMedium25_Recl = event.nBJetMedium25_Recl
        deltarjb11 = deltaR(nonbjets[0].phi, nonbjets[0].eta, bjets[0].phi, bjets[0].eta)
        jet3_eta = nonbjets[2].eta
        deltarjet = deltaR(nonbjets[0].phi, nonbjets[0].eta, nonbjets[1].phi, nonbjets[1].eta)
        jet5_pt = nonbjets[4]


        # El orden de las variables es importante!!!
        inputVars = [
            year, 
            htjet25,
            jet2_pt,
            jet3_pt,
            jet2_mass,
            nJet25_Recl,
            leps[1].pt,
            mlj11,
            nonbjets[2].mass,
            nonbjets[1].pt,
            nonbjets[3].mass,
            lep1_charge, 
            leps[1].mass,
            jet4_pt, 
            jet3_eta,
            nonbjets[2].phi,
            nonbjets[0].pt,
            Flav_muon,
            nonbjets[3].phi,
            mll,
            abs(leps[1].pdgId) == 11,
            nonbjets[3].eta,
            mlj12,
            nonbjets[4].eta,
            Flav_elec,
            mlj21,
            mlj22,
            combipt,
            np.sign(leps[1].pdgId),
        ]
        
        # Esto te permite evaluar el modelo usando las inputVariables que nos hemos cocinado previamente
        score_, cat_ = self.model.predict(inputVars)
        ret["ttwmva_prob"] = score_ 
        ret["ttwmva_cat"]  = cat_
        return ret


        
