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


class EventVars_tWRun2(Module):
    def __init__(self, label = "", recllabel = 'Recl', doSystJEC = True, variations = []):
        self.jecbranches = ["Lep1Lep2Jet1MET_Pz",
                            "Lep1Lep2Jet1MET_Pt",
                            "Lep1Lep2Jet1MET_M",
                            "Lep1Lep2Jet1MET_Mt",
                            "Lep1Lep2Jet1_Pt",
                            "Lep1Lep2Jet1_M",
                            "Lep1Lep2Jet1_E",
                            "Lep1Jet1_Pt",
                            "Lep1Jet1_M",
                            "Lep2Jet1_Pt",
                            "Lep2Jet1_M",
                            "Jet1_E",
                            "Jet1_Pt",
                            "Jet2_Pt",
                            "JetLoose1_Pt",

                            "Lep1Jet1_DR",
                            "Lep12Jet12_DR",
                            "Lep12Jet12MET_DR",
                            "Lep1Lep2Jet1_C",
                            "HTtot",

                            "minimax",
                            "Lep1Jet2_M",
                            "Lep2Jet2_M",

                            "METgood_pt",
                            "METgood_phi",]

        self.otherbranches = [("isSS", "I"),
                              #("isSS", "O"),
                              #("channel", "B"),
                              ("channel", "I"),
                              "Lep1Lep2_Pt",
                              "Lep1Lep2_DPhi",
                              "Mll",
                             ]

        self.label    = "" if (label in ["", None]) else ("_" + label)

        self.systsJEC = {0: ""}
        if   len(variations):
            for i, var in enumerate(variations):
                self.systsJEC[i+1]    = "_%sUp"%var
                self.systsJEC[-(i+1)] = "_%sDown"%var
        elif doSystJEC:
            self.systsJEC = {0: "",
                             1: "_jesTotalUp", -1: "_jesTotalDown",
                             2: "_jerUp",      -2: "_jerDown",
                            }

        self.inputlabel = '_' + recllabel
        self.branches   = []

        for var in self.systsJEC: self.branches.extend([br + self.label + self.systsJEC[var] for br in self.jecbranches])
        self.branches.extend(self.otherbranches)
        return


    # Old interface (CMG)
    def listBranches(self):
        return self.branches[:]


    def __call__(self, event):
        return self.run(event, CMGCollection, "met")


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
        leps    = [l for l in Collection(event, "LepGood")]
        leps_4m = [l.p4() for l in leps]
        for i in range(len(leps_4m)):
            leps_4m[i].SetPtEtaPhiM(leps[i].pt_corrAll, leps_4m[i].Eta(), leps_4m[i].Phi(), leps_4m[i].M())

        #chosenjets = getattr(event, "iJetSel30_Recl")
        #nJets      = getattr(event, "nJetSel30_Recl")
        all_jets   = [j for j in Collection(event, "Jet")]
        jets    = []
        jets_4m = []

        #print "ijet30", chosenjets
        #print "njetsel30", event.nJetSel30_Recl

        #### VEYO
        #if event.nJetSel30_Recl >= 5:
            ##jets    = [all_jets[chosenjets[j]] for j in xrange(5)]
            #jets    = [all_jets[event.iJetSel30_Recl[j]] for j in xrange(5)]
        #else:
            ##jets    = [all_jets[chosenjets[j]] for j in xrange(nJets)]
            #jets    = [all_jets[event.iJetSel30_Recl[j]] for j in xrange(event.nJetSel30_Recl)]

        #### NOVO
        #jets    = [all_jets[event.iJetSel30_Recl[j]] for j in xrange(min([event.nJetSel30_Recl, 5]))]

        #jets_4m = [j.p4() for j in jets]

        if len(leps) != event.nLepGood: wr.warn("WARNING: different collection size from nLepGood!!!!!!!")

        allret["channel"]            = ch.NoChan
        allret["isSS"]               = -99
        allret["Lep1Lep2_Pt"]        = -99
        allret["Lep1Lep2_DPhi"]      = -99
        allret["Mll"]                = -99
        allret["Lep1Lep2Jet1MET_Pz"] = -99
        allret["Lep1Lep2Jet1MET_Pt"] = -99
        allret["Lep1Lep2Jet1MET_M"]  = -99
        allret["Lep1Lep2Jet1MET_Mt"] = -99
        allret["Lep1Lep2Jet1_Pt"]    = -99
        allret["Lep1Lep2Jet1_E"]     = -99
        allret["Lep1Jet1_Pt"]        = -99
        allret["Lep1Jet1_M"]         = -99
        allret["Lep2Jet1_Pt"]        = -99
        allret["Lep2Jet1_M"]         = -99
        allret["Jet1_Pt"]            = -99
        allret["Jet1_E"]             = -99
        allret["Jet2_Pt"]            = -99
        allret["JetLoose1_Pt"]       = -99
        allret["Lep1Jet1_DR"]        = -99
        allret["Lep12Jet12_DR"]      = -99
        allret["Lep12Jet12MET_DR"]   = -99
        allret["Lep1Lep2Jet1_C"]     = -99
        allret["HTtot"]              = -99
        allret["Lep1Jet2_M"]         = -99
        allret["Lep2Jet2_M"]         = -99
        allret["minimax"]            = -99


        if event.nLepGood >= 2:
            allret["isSS"] = int(leps[0].charge == leps[1].charge)
            if   ((abs(leps[0].pdgId) == 13 and abs(leps[1].pdgId) == 11) or
                 (abs(leps[0].pdgId) == 11 and abs(leps[1].pdgId) == 13)):
                allret["channel"] = ch.ElMu
            elif (abs(leps[0].pdgId) == 13 and abs(leps[1].pdgId) == 13):
                allret["channel"] = ch.Muon
            elif (abs(leps[0].pdgId) == 11 and abs(leps[1].pdgId) == 11):
                allret["channel"] = ch.Elec
            else:
                allret["channel"] = ch.NoChan

            allret["Lep1Lep2_Pt"]   = (leps_4m[0] + leps_4m[1]).Pt()
            allret["Lep1Lep2_DPhi"] = abs(deltaPhi(leps[0], leps[1]))/r.TMath.Pi()
            allret["Mll"]           = (leps_4m[0] + leps_4m[1]).M()


            # ============================ Variables susceptible to JEC
            met_4m = r.TLorentzVector()
            for var in self.systsJEC:
                allret["METgood_pt" + self.systsJEC[var]]  = -99
                allret["METgood_phi" + self.systsJEC[var]] = -99
                if event.datatag != tags.mc:
                    allret["METgood_pt"  + self.systsJEC[var]] = event.MET_pt
                    allret["METgood_phi" + self.systsJEC[var]] = event.MET_phi
                elif event.datatag != tags.NoTag:
                    if event.year == 2017:
                        allret["METgood_pt"  + self.systsJEC[var]] = getattr(event, 'METFixEE2017_pt{v}'.format( v = self.systsJEC[var] if self.systsJEC[var] != "" else "_nom"))
                        allret["METgood_phi" + self.systsJEC[var]] = getattr(event, 'METFixEE2017_phi{v}'.format(v = self.systsJEC[var] if self.systsJEC[var] != "" else "_nom"))
                    else:
                        allret["METgood_pt"  + self.systsJEC[var]] = getattr(event, 'MET_pt{v}'.format( v = self.systsJEC[var] if self.systsJEC[var] != "" else "_nom"))
                        allret["METgood_phi" + self.systsJEC[var]] = getattr(event, 'MET_phi{v}'.format(v = self.systsJEC[var] if self.systsJEC[var] != "" else "_nom"))

                met_4m.SetPtEtaPhiM(allret["METgood_pt" + self.systsJEC[var]], 0, allret["METgood_phi" + self.systsJEC[var]], 0)

                jets    = [all_jets[getattr(event, 'iJetSel30{v}_Recl'.format(v = self.systsJEC[var]))[j]]
                           for j in xrange(min([getattr(event, 'nJetSel30{v}_Recl'.format(v = self.systsJEC[var])), 5]))]
                jets_4m = [j.p4() for j in jets]


                if getattr(event, 'nJetSel20{v}_Recl'.format(v = self.systsJEC[var])) > 0:
                    allret["JetLoose1_Pt" + self.systsJEC[var]] = all_jets[event.iJetSel20_Recl[0]].p4().Pt()


                if event.nJetSel30_Recl > 0:
                    allret["Lep1Lep2Jet1MET_Pz" + self.systsJEC[var]] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Pz()
                    allret["Lep1Lep2Jet1MET_Pt" + self.systsJEC[var]] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Pt()
                    allret["Lep1Lep2Jet1MET_M" + self.systsJEC[var]]  = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).M()
                    allret["Lep1Lep2Jet1MET_Mt" + self.systsJEC[var]] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Mt()
                    allret["Lep1Lep2Jet1_Pt" + self.systsJEC[var]]    = (leps_4m[0] + leps_4m[1] + jets_4m[0]).Pt()
                    allret["Lep1Lep2Jet1_M" + self.systsJEC[var]]     = (leps_4m[0] + leps_4m[1] + jets_4m[0]).M()
                    allret["Lep1Lep2Jet1_E" + self.systsJEC[var]]     = (leps_4m[0] + leps_4m[1] + jets_4m[0]).E()
                    allret["Lep1Jet1_Pt" + self.systsJEC[var]]        = (leps_4m[0] + jets_4m[0]).Pt()
                    allret["Lep1Jet1_M" + self.systsJEC[var]]         = (leps_4m[0] + jets_4m[0]).M()
                    allret["Lep2Jet1_Pt" + self.systsJEC[var]]        = (leps_4m[1] + jets_4m[0]).Pt()
                    allret["Lep2Jet1_M" + self.systsJEC[var]]         = (leps_4m[1] + jets_4m[0]).M()
                    allret["Jet1_Pt" + self.systsJEC[var]]            = jets_4m[0].Pt()
                    allret["Jet1_E" + self.systsJEC[var]]             = jets_4m[0].E()
                    allret["Lep1Jet1_DR" + self.systsJEC[var]]        = leps_4m[0].DeltaR(jets_4m[0])
                    allret["Lep1Lep2Jet1_C" + self.systsJEC[var]]     = (leps_4m[0] + leps_4m[1] + jets_4m[0]).Et() / (leps_4m[0] + leps_4m[1] + jets_4m[0]).E()
                    allret["HTtot" + self.systsJEC[var]]              = leps_4m[0].Pt() + leps_4m[1].Pt() + jets_4m[0].Pt() + met_4m.Pt()
                    if event.nJetSel30_Recl > 1:
                        allret["Lep12Jet12_DR" + self.systsJEC[var]]    = (leps_4m[0] + leps_4m[1]).DeltaR(jets_4m[0] + jets_4m[1])
                        allret["Lep12Jet12MET_DR" + self.systsJEC[var]] = (leps_4m[0] + leps_4m[1]).DeltaR(jets_4m[0] + jets_4m[1] + met_4m)
                        allret["Lep1Jet2_M" + self.systsJEC[var]]       = (leps_4m[0] + jets_4m[1]).M()
                        allret["Lep2Jet2_M" + self.systsJEC[var]]       = (leps_4m[1] + jets_4m[1]).M()
                        allret["Jet2_Pt" + self.systsJEC[var]]          = jets_4m[1].Pt()
                        #### WARNING: this minimax variable is only equal to that of ATLAS' PRL when the signal region is njets == 2, nbjets == 2.
                        allret["minimax" + self.systsJEC[var]] = min([max([allret["Lep1Jet1_M" + self.systsJEC[var]],
                                                                           allret["Lep2Jet2_M" + self.systsJEC[var]]]),
                                                                      max(allret["Lep2Jet1_M" + self.systsJEC[var]],
                                                                          allret["Lep1Jet2_M" + self.systsJEC[var]])])

        return allret
