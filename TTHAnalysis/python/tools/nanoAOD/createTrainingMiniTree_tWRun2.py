from math import sqrt, cos
from copy import deepcopy
import struct as st
import warnings as wr
import ROOT as r

from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection 
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaR,deltaPhi

from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput
from CMGTools.TTHAnalysis.tools.nanoAOD.TopRun2_modules import ch, tags


class createTrainingMiniTree_tWRun2(Module):
    def __init__(self):
        self.branches = [("njets",  "I"),
                         ("nbjets", "I"),
                         ("train_nloosejets",  "I"),
                         ("train_nbloosejets", "I"),
                         "train_jet1_pt",
                         "train_loosejet1_pt",
                         "train_lep1lep2jet1_pt",
                         "train_lep1lep2jet1met_pt",
                         "train_lep1lep2jet1met_ptOVERhttot",
                         "train_lep1lep2jet1met_m",
                         "train_htlepOVERhttot",
                         "train_lep1lep2jet1_c",
                         "train_httot",

                         "train_jet2_pt",
                         "train_lep1jet1_dr",
                         "train_lep12jet12_dr",
                         "train_lep12jet12met_dr",

                         "allweights"]
        return


    # New interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        declareOutput(self, wrappedOutputTree, self.branches)
        return


    def analyze(self, event):
        if event.pass_trigger:
            if event.Flag_goodVertices and event.Flag_globalSuperTightHalo2016Filter and event.Flag_HBHENoiseFilter and event.Flag_HBHENoiseIsoFilter and event.Flag_EcalDeadCellTriggerPrimitiveFilter and event.Flag_BadPFMuonFilter:
                if event.nLepGood >= 2 and event.isSS == 0:
                    if event.LepGood_pt_corrAll[0] > 25 and event.LepGood_pt_corrAll[1] > 20 and event.minMllAFAS_Recl > 20:
                        writeOutput(self, self.run(event, NanoAODCollection))
                        return True

        return False


    # Common processing
    def run(self, event, Collection):
        allret = {}

        allret["njets"]  = event.nJetSel30_Recl
        allret["nbjets"] = event.nBJetSelMedium30_Recl


        allret["train_nloosejets"                 ] = event.nJetSel20_Recl              if event.nJetSel20_Recl              >= 0 else 0
        allret["train_nbloosejets"                ] = event.nBJetSelMedium20_Recl       if event.nBJetSelMedium20_Recl       >= 0 else 0
        allret["train_jet1_pt"                    ] = event.Jet1_Pt                     if event.Jet1_Pt                     >= 0 else 0
        allret["train_loosejet1_pt"               ] = event.JetLoose1_Pt                if event.JetLoose1_Pt                >= 0 else 0
        allret["train_lep1lep2jet1_pt"            ] = event.Lep1Lep2Jet1_Pt             if event.Lep1Lep2Jet1_Pt             >= 0 else 0
        allret["train_lep1lep2jet1met_pt"         ] = event.Lep1Lep2Jet1MET_Pt          if event.Lep1Lep2Jet1MET_Pt          >= 0 else 0
        allret["train_lep1lep2jet1met_ptOVERhttot"] = event.Lep1Lep2Jet1MET_PtOverHTtot if event.Lep1Lep2Jet1MET_PtOverHTtot >= 0 else 0
        allret["train_lep1lep2jet1met_m"          ] = event.Lep1Lep2Jet1MET_M           if event.Lep1Lep2Jet1MET_M           >= 0 else 0
        allret["train_htlepOVERhttot"             ] = event.Lep1_PtLep2_PtOverHTtot     if event.Lep1_PtLep2_PtOverHTtot     >= 0 else 0
        allret["train_lep1lep2jet1_c"             ] = event.Lep1Lep2Jet1_C              if event.Lep1Lep2Jet1_C              >= 0 else 0
        allret["train_httot"                      ] = event.HTtot                       if event.HTtot                       >= 0 else 0

        allret["train_jet2_pt"                    ] = event.Jet2_Pt                     if event.Jet2_Pt                     >= 0 else 0
        allret["train_lep1jet1_dr"                ] = event.Lep1Jet1_DR                 if event.Lep1Jet1_DR                 >= 0 else 0
        allret["train_lep12jet12_dr"              ] = event.Lep12Jet12_DR               if event.Lep12Jet12_DR               >= 0 else 0
        allret["train_lep12jet12met_dr"           ] = event.Lep12Jet12MET_DR            if event.Lep12Jet12MET_DR            >= 0 else 0

        allret["allweights"]                        = event.genWeight * event.MuonSF * event.ElecSF * event.TrigSF * event.puWeight * event.bTagWeight * event.PrefireWeight

        return allret
