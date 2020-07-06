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


class particleAndPartonVars_tWRun2(Module):
    def __init__(self):
        self.branches = [("DressisSS", "I"),
                         #("isSS", "O"),
                         #("channel", "B"),
                         ("Dresschannel", "I"),
                         "DressLep1Lep2_Pt",
                         "DressLep1Lep2_DPhi",
                         "DressMll",
                         "DressLep1Lep2Jet1MET_Pz",
                         "DressLep1Lep2Jet1MET_Pt",
                         "DressLep1Lep2Jet1MET_M",
                         "DressLep1Lep2Jet1MET_Mt",
                         "DressLep1Lep2Jet1_Pt",
                         "DressLep1Lep2Jet1_M",
                         "DressLep1Lep2Jet1_E",
                         "DressLep1Jet1_Pt",
                         "DressLep1Jet1_M",
                         "DressLep2Jet1_Pt",
                         "DressLep2Jet1_M",
                         "DressJet1_E",
                         "DressJet1_Pt",
                         "DressJet2_Pt",
                         "DressJetLoose1_Pt",

                         "DressLep1Jet1_DR",
                         "DressLep12Jet12_DR",
                         "DressLep12Jet12MET_DR",
                         "DressLep1Lep2Jet1_C",
                         "DressHTtot",

                         "Dressminimax",
                         "DressLep1Jet2_M",
                         "DressLep2Jet2_M",]

        return


    # New interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        declareOutput(self, wrappedOutputTree, self.branches)


    def analyze(self, event):
        writeOutput(self, self.run(event, NanoAODCollection))
        return True


    # Common processing
    def run(self, event, Collection):
        allret = {}

        # ============================ Variables not susceptible to JEC
        all_leps = [l for l in Collection(event, "GenDressedLepton")]

        leps     = [all_leps[getattr(event, 'iDressSelLep')[l]]
                    for l in xrange(min([getattr(event, 'nDressSelLep'), 5]))]
        leps_4m  = [l.p4() for l in leps]

        met_4m = r.TLorentzVector()
        met_4m.SetPtEtaPhiM(allret["MET_fiducialGenPt", 0, "MET_fiducialGenPhi", 0)


        all_jets = [j for j in Collection(event, "GenJet")]

        jets     = [all_jets[getattr(event, 'iDressSelJet')[j]]
                    for j in xrange(min([getattr(event, 'nDressSelJet'), 5]))]
        jets_4m  = [j.p4() for j in jets]

        loosejets    = [all_jets[getattr(event, 'iDressSelLooseJet')[j]]
                        for j in xrange(min([getattr(event, 'nDressSelLooseJet'), 5]))]
        loosejets_4m = [j.p4() for j in jets]


        allret["Dresschannel"]            = ch.NoChan
        allret["DressisSS"]               = -99
        allret["DressLep1Lep2_Pt"]        = -99
        allret["DressLep1Lep2_DPhi"]      = -99
        allret["DressMll"]                = -99
        allret["DressLep1Lep2Jet1MET_Pz"] = -99
        allret["DressLep1Lep2Jet1MET_Pt"] = -99
        allret["DressLep1Lep2Jet1MET_M"]  = -99
        allret["DressLep1Lep2Jet1MET_Mt"] = -99
        allret["DressLep1Lep2Jet1_Pt"]    = -99
        allret["DressLep1Lep2Jet1_E"]     = -99
        allret["DressLep1Jet1_Pt"]        = -99
        allret["DressLep1Jet1_M"]         = -99
        allret["DressLep2Jet1_Pt"]        = -99
        allret["DressLep2Jet1_M"]         = -99
        allret["DressJet1_Pt"]            = -99
        allret["DressJet1_E"]             = -99
        allret["DressJet2_Pt"]            = -99
        allret["DressJetLoose1_Pt"]       = -99
        allret["DressLep1Jet1_DR"]        = -99
        allret["DressLep12Jet12_DR"]      = -99
        allret["DressLep12Jet12MET_DR"]   = -99
        allret["DressLep1Lep2Jet1_C"]     = -99
        allret["DressHTtot"]              = -99
        allret["DressLep1Jet2_M"]         = -99
        allret["DressLep2Jet2_M"]         = -99
        allret["Dressminimax"]            = -99


        if event.nDressSelLep >= 2:
            allret["DressisSS"] = int(leps[0].charge == leps[1].charge)
            if   ((abs(leps[0].pdgId) == 13 and abs(leps[1].pdgId) == 11) or
                 (abs(leps[0].pdgId) == 11 and abs(leps[1].pdgId) == 13)):
                allret["Dresschannel"] = ch.ElMu
            elif (abs(leps[0].pdgId) == 13 and abs(leps[1].pdgId) == 13):
                allret["Dresschannel"] = ch.Muon
            elif (abs(leps[0].pdgId) == 11 and abs(leps[1].pdgId) == 11):
                allret["Dresschannel"] = ch.Elec
            else:
                allret["Dresschannel"] = ch.NoChan

            allret["DressLep1Lep2_Pt"]   = (leps_4m[0] + leps_4m[1]).Pt()
            allret["DressLep1Lep2_DPhi"] = abs(deltaPhi(leps[0], leps[1]))/r.TMath.Pi()
            allret["DressMll"]           = (leps_4m[0] + leps_4m[1]).M()

            if event.nDressSelLooseJet > 0:
                allret["DressJetLoose1_Pt"] = loosejets_4[0].Pt()


            if event.nDressSelJet > 0:
                allret["DressLep1Lep2Jet1MET_Pz"] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Pz()
                allret["DressLep1Lep2Jet1MET_Pt"] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Pt()
                allret["DressLep1Lep2Jet1MET_M"]  = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).M()
                allret["DressLep1Lep2Jet1MET_Mt"] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Mt()
                allret["DressLep1Lep2Jet1_Pt"]    = (leps_4m[0] + leps_4m[1] + jets_4m[0]).Pt()
                allret["DressLep1Lep2Jet1_M"]     = (leps_4m[0] + leps_4m[1] + jets_4m[0]).M()
                allret["DressLep1Lep2Jet1_E"]     = (leps_4m[0] + leps_4m[1] + jets_4m[0]).E()
                allret["DressLep1Jet1_Pt"]        = (leps_4m[0] + jets_4m[0]).Pt()
                allret["DressLep1Jet1_M"]         = (leps_4m[0] + jets_4m[0]).M()
                allret["DressLep2Jet1_Pt"]        = (leps_4m[1] + jets_4m[0]).Pt()
                allret["DressLep2Jet1_M"]         = (leps_4m[1] + jets_4m[0]).M()
                allret["DressJet1_Pt"]            = jets_4m[0].Pt()
                allret["DressJet1_E"]             = jets_4m[0].E()
                allret["DressLep1Jet1_DR"]        = leps_4m[0].DeltaR(jets_4m[0])
                allret["DressLep1Lep2Jet1_C"]     = (leps_4m[0] + leps_4m[1] + jets_4m[0]).Et() / (leps_4m[0] + leps_4m[1] + jets_4m[0]).E()
                allret["DressHTtot"]              = leps_4m[0].Pt() + leps_4m[1].Pt() + jets_4m[0].Pt() + met_4m.Pt()

                if event.nDressSelJet > 1:
                    allret["DressLep12Jet12_DR"]    = (leps_4m[0] + leps_4m[1]).DeltaR(jets_4m[0] + jets_4m[1])
                    allret["DressLep12Jet12MET_DR"] = (leps_4m[0] + leps_4m[1]).DeltaR(jets_4m[0] + jets_4m[1] + met_4m)
                    allret["DressLep1Jet2_M"]       = (leps_4m[0] + jets_4m[1]).M()
                    allret["DressLep2Jet2_M"]       = (leps_4m[1] + jets_4m[1]).M()
                    allret["DressJet2_Pt"]          = jets_4m[1].Pt()
                    #### WARNING: this minimax variable is only equal to that of ATLAS' PRL when the signal region is njets == 2, nbjets == 2.
                    allret["Dressminimax"] = min([max([allret["DressLep1Jet1_M"],
                                                       allret["DressLep2Jet2_M"]]),
                                                  max(allret["DressLep2Jet1_M"],
                                                      allret["DressLep1Jet2_M"])])

        return allret
