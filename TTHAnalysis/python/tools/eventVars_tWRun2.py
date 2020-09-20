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
    def __init__(self, label = "", recllabel = 'Recl', jecvars = ["jesTotal", "jer"], lepvars = ["mu"], isMC = True):
        self.jecbranches = ["Lep1Lep2Jet1MET_Pz",
                            "Lep1Lep2Jet1MET_Pt",
                            "Lep1Lep2Jet1MET_M",
                            "Lep1Lep2Jet1MET_Mt",
                            "Lep1Lep2Jet1MET_PtOverHTtot",
                            "Lep1_PtLep2_PtOverHTtot",
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
                            "LepJet11Lep2_DR",
                            "LepJet11Lep2_DPhi",
                            "LepJet11Lep2_DEta",
                            "Lep1LepJet21_DR",
                            "Lep1LepJet21_DPhi",
                            "Lep1LepJet21_DEta",
                            "Lep1Lep2Jet1_C",
                            "HTtot",

                            "minimax",
                            "Lep1Jet2_M",
                            "Lep2Jet2_M",

                            "METgood_pt",
                            "METgood_phi",]

        self.lepenergyvars = [("isSS", "I"),
                              ("channel", "I"),
                              "Lep1Lep2_Pt",
                              "Lep1Lep2_PtSum",
                              "Lep1Lep2_DR",
                              "Lep1Lep2_DPhi",
                              "Lep1Lep2_DEta",

                              "Lep1Lep2Jet1MET_Pz",
                              "Lep1Lep2Jet1MET_Pt",
                              "Lep1Lep2Jet1MET_M",
                              "Lep1Lep2Jet1MET_Mt",
                              "Lep1Lep2Jet1MET_PtOverHTtot",
                              "Lep1_PtLep2_PtOverHTtot",
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
                              "LepJet11Lep2_DR",
                              "LepJet11Lep2_DPhi",
                              "LepJet11Lep2_DEta",
                              "Lep1LepJet21_DR",
                              "Lep1LepJet21_DPhi",
                              "Lep1LepJet21_DEta",
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

                              #### Variables that are not susceptible to JEC variations that need a nominal value
                              # (note that being in the lepenergyvars list does not give this!)
                              "Lep1Lep2_Pt",
                              "Lep1Lep2_PtSum",
                              "Lep1Lep2_DR",
                              "Lep1Lep2_DPhi",
                              "Lep1Lep2_DEta",
                              "Mll",
                              "minMllAFAS",
                             ]

        self.label    = "" if (label in ["", None]) else ("_" + label)

        self.systsJEC   = {0: ""}
        self.systsLepEn = {}
        self.isMC       = isMC
        self.nominaljecscaff = "_nom"
        if not self.isMC:
            jecvars = []
            lepvars = []
            self.nominaljecscaff = ""

        if   len(jecvars):
            for i, var in enumerate(jecvars):
                self.systsJEC[i+1]    = "_%sUp"%var
                self.systsJEC[-(i+1)] = "_%sDown"%var
        if   len(lepvars):
            for i, var in enumerate(lepvars):
                self.systsLepEn[i+1]    = "_%sUp"%var
                self.systsLepEn[-(i+1)] = "_%sDown"%var

        self.inputlabel = '_' + recllabel
        self.branches   = []

        for delta,var in self.systsJEC.iteritems():   self.branches.extend([br + self.label + var for br in self.jecbranches])
        for delta,var in self.systsLepEn.iteritems():
            self.branches.extend([el    + self.label + var for el in self.lepenergyvars if type(el) != tuple])
            self.branches.extend([(el[0] + self.label + var, el[1]) for el in self.lepenergyvars if type(el) == tuple])

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

        # ============================ Definitions and declarations
        allret = {}

        leps    = [l for l in Collection(event, "LepGood")]
        leps_4m = [l.p4() for l in leps]

        for i in range(len(leps_4m)):
            leps_4m[i].SetPtEtaPhiM(leps[i].pt_corrAll, leps_4m[i].Eta(),
                                    leps_4m[i].Phi(),   leps_4m[i].M())

        coldirs    = {} #### NOTE: the keys begin always with "_"!
        coldirs_4m = {}
        for delta,var in self.systsLepEn.iteritems():
            coldirs[var]    = [l      for l in Collection(event, "LepGood" + var[1:])]
            coldirs_4m[var] = [l.p4() for l in coldirs[var]]
            for i in range(len(coldirs_4m[var])):
                coldirs_4m[var][i].SetPtEtaPhiM(getattr(coldirs[var][i], "pt" + var), coldirs_4m[var][i].Eta(),
                                                coldirs_4m[var][i].Phi(), coldirs_4m[var][i].M())

        all_jets = [j for j in Collection(event, "Jet")]
        jets     = []
        jets_4m  = []


        # ============================ Initialisations
        for var in self.jecbranches:
            for delta,sys in self.systsJEC.iteritems():
                allret[var + sys] = -99
                allret[var + sys] = -99

        for prevar in self.lepenergyvars:
            var = prevar
            if type(prevar) ==  tuple:
                var = prevar[0]
            for delta,sys in self.systsLepEn.iteritems():
                allret[var + sys] = -99
                allret[var + sys] = -99

        for var in self.otherbranches:
            if type(var) == tuple:
                if var[0] == "channel":
                    allret["channel"] = ch.NoChan
                else:
                    allret[var[0]] = -99
            else:
                allret[var] = -99
                allret[var] = -99


        # Nominal variables and those susceptible to JEC enter in this if-statement.
        if event.nLepGood >= 2:
            # ============================ Nominal variables
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

            allret["Lep1Lep2_Pt"]    = (leps_4m[0] + leps_4m[1]).Pt()
            allret["Lep1Lep2_PtSum"] = leps_4m[0].Pt() + leps_4m[1].Pt()
            allret["Lep1Lep2_DR"]    = leps_4m[0].DeltaR(leps_4m[1])
            allret["Lep1Lep2_DPhi"]  = abs(deltaPhi(leps[0], leps[1]))/r.TMath.Pi()
            allret["Lep1Lep2_DEta"]  = abs(leps_4m[0].Eta() - leps_4m[1].Eta())
            allret["Mll"]            = (leps_4m[0] + leps_4m[1]).M()
            for iL in range(len(leps)):
                for jL in range(iL + 1, len(leps)):
                    tmpM = (leps_4m[iL] + leps_4m[jL]).M()
                    if tmpM < allret["minMllAFAS"]: allret["minMllAFAS"] = tmpM


            # ============================ Variables susceptible to JEC (nominal and their variations)
            met_4m = r.TLorentzVector()
            for delta,sys in self.systsJEC.iteritems():
                allret["METgood_pt"  + sys] = -99
                allret["METgood_phi" + sys] = -99
                if event.datatag != tags.mc:
                    allret["METgood_pt"  + sys] = event.MET_pt
                    allret["METgood_phi" + sys] = event.MET_phi
                elif event.datatag != tags.NoTag:
                    if event.year == 2017:
                        allret["METgood_pt"  + sys] = getattr(event, 'METFixEE2017_pt{v}'.format( v = sys if sys != "" else "_nom"))
                        allret["METgood_phi" + sys] = getattr(event, 'METFixEE2017_phi{v}'.format(v = sys if sys != "" else "_nom"))
                    else:
                        allret["METgood_pt"  + sys] = getattr(event, 'MET_pt{v}'.format( v = sys if sys != "" else "_nom"))
                        allret["METgood_phi" + sys] = getattr(event, 'MET_phi{v}'.format(v = sys if sys != "" else "_nom"))

                met_4m.SetPtEtaPhiM(allret["METgood_pt" + sys], 0, allret["METgood_phi" + sys], 0)

                ### jets
                jets    = [all_jets[getattr(event, 'iJetSel30{v}_Recl'.format(v = sys))[j]]
                           for j in xrange(min([getattr(event, 'nJetSel30{v}_Recl'.format(v = sys)), 5]))]
                #jets    = [all_jets[getattr(event, 'iJetSel30_Recl')[j]]
                           #for j in xrange(min([getattr(event, 'nJetSel30_Recl'), 5]))]
                jets_4m = [j.p4() for j in jets]

                jetjecsysscaff = (sys if sys != "" else self.nominaljecscaff)
                if event.datatag != tags.mc: jetjecsysscaff = ""

                for i in range(len(jets_4m)):
                    jets_4m[i].SetPtEtaPhiM(getattr(jets[i], "pt" + jetjecsysscaff), jets_4m[i].Eta(),
                                            jets_4m[i].Phi(), getattr(jets[i], "mass" + jetjecsysscaff))

                ### loose jets
                loosejets = [all_jets[getattr(event, 'iJetSel20{v}_Recl'.format(v = sys))[j]]
                           for j in xrange(min([getattr(event, 'nJetSel20{v}_Recl'.format(v = sys)), 5]))]
                loosejets_4m = [j.p4() for j in loosejets]

                for i in range(len(loosejets_4m)):
                    loosejets_4m[i].SetPtEtaPhiM(getattr(loosejets[i], "pt" + jetjecsysscaff), loosejets_4m[i].Eta(),
                                            loosejets_4m[i].Phi(), getattr(loosejets[i], "mass" + jetjecsysscaff))


                if getattr(event, 'nJetSel20{v}_Recl'.format(v = sys)) > 0:
                    allret["JetLoose1_Pt" + sys] = loosejets_4m[0].Pt()

                #if getattr(event, 'nJetSel20_Recl') > 0:
                    #allret["JetLoose1_Pt" + sys] = getattr(event,
                                                           #("Jet_" + jetjecsysscaff) if sys == "" else "Jet_pt" + sys)[event.iJetSel20_Recl[0]]


                if getattr(event, 'nJetSel30{v}_Recl'.format(v = sys)) > 0:
                    allret["Lep1Lep2Jet1MET_Pz"          + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Pz()
                    allret["Lep1Lep2Jet1MET_Pt"          + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Pt()
                    allret["Lep1Lep2Jet1MET_M"           + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).M()
                    allret["Lep1Lep2Jet1MET_Mt"          + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Mt()
                    allret["Lep1Lep2Jet1_Pt"             + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0]).Pt()
                    allret["Lep1Lep2Jet1_M"              + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0]).M()
                    allret["Lep1Lep2Jet1_E"              + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0]).E()
                    allret["Lep1Jet1_Pt"                 + sys] = (leps_4m[0] + jets_4m[0]).Pt()
                    allret["Lep1Jet1_M"                  + sys] = (leps_4m[0] + jets_4m[0]).M()
                    allret["Lep2Jet1_Pt"                 + sys] = (leps_4m[1] + jets_4m[0]).Pt()
                    allret["Lep2Jet1_M"                  + sys] = (leps_4m[1] + jets_4m[0]).M()
                    allret["Jet1_Pt"                     + sys] = jets_4m[0].Pt()
                    allret["Jet1_E"                      + sys] = jets_4m[0].E()

                    allret["Lep1Jet1_DR"                 + sys] = leps_4m[0].DeltaR(jets_4m[0])
                    allret["Lep1Lep2Jet1_C"              + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0]).Et() / (leps_4m[0] + leps_4m[1] + jets_4m[0]).E()
                    allret["HTtot"                       + sys] = leps_4m[0].Pt() + leps_4m[1].Pt() + jets_4m[0].Pt() + met_4m.Pt()
                    allret["Lep1Lep2Jet1MET_PtOverHTtot" + sys] = allret["Lep1Lep2Jet1MET_Pt" + sys] / allret["HTtot" + sys]
                    allret["Lep1_PtLep2_PtOverHTtot"     + sys] = (leps_4m[0].Pt() + leps_4m[1].Pt()) / allret["HTtot" + sys]


                    allret["LepJet11Lep2_DR"            + sys] = (leps_4m[0] + jets_4m[0]).DeltaR(leps_4m[1])
                    allret["LepJet11Lep2_DPhi"          + sys] = abs((leps_4m[0] + jets_4m[0]).Phi() - leps_4m[1].Phi()) / r.TMath.Pi()
                    allret["LepJet11Lep2_DEta"          + sys] = abs((leps_4m[0] + jets_4m[0]).Eta() - leps_4m[1].Eta())
                    allret["Lep1LepJet21_DR"            + sys] = leps_4m[0].DeltaR(leps_4m[1] + jets_4m[0])
                    allret["Lep1LepJet21_DPhi"          + sys] = abs(leps_4m[0].Phi() - (jets_4m[0] + leps_4m[1]).Phi()) / r.TMath.Pi()
                    allret["Lep1LepJet21_DEta"          + sys] = abs(leps_4m[0].Phi() - (jets_4m[0] + leps_4m[1]).Eta())


                    if getattr(event, 'nJetSel30{v}_Recl'.format(v = sys)) > 1:
                        allret["Lep12Jet12_DR"    + sys] = (leps_4m[0] + leps_4m[1]).DeltaR(jets_4m[0] + jets_4m[1])
                        allret["Lep12Jet12MET_DR" + sys] = (leps_4m[0] + leps_4m[1]).DeltaR(jets_4m[0] + jets_4m[1] + met_4m)
                        allret["Lep1Jet2_M"       + sys] = (leps_4m[0] + jets_4m[1]).M()
                        allret["Lep2Jet2_M"       + sys] = (leps_4m[1] + jets_4m[1]).M()
                        allret["Jet2_Pt"          + sys] = jets_4m[1].Pt()
                        #### WARNING: this minimax variable is only equal to that of ATLAS' PRL when the signal region is njets == 2, nbjets == 2.
                        allret["minimax"          + sys] = min([max([allret["Lep1Jet1_M" + sys],
                                                                     allret["Lep2Jet2_M" + sys]]),
                                                                max( allret["Lep2Jet1_M" + sys],
                                                                     allret["Lep1Jet2_M" + sys])])



        # ============================ Variations of lepton energy corrections
        for delta,sys in self.systsLepEn.iteritems():
            if getattr(event, "nLepGood" + sys[1:]) >= 2:
                leps    = [l for l in Collection(event, "LepGood" + sys[1:])]
                leps_4m = [l.p4() for l in leps]

                for i in range(len(leps_4m)):
                    leps_4m[i].SetPtEtaPhiM(getattr(leps[i], "pt" + sys), leps_4m[i].Eta(),
                                            leps_4m[i].Phi(),             leps_4m[i].M())

                jets    = [all_jets[getattr(event, 'iJetSel30{v}_Recl'.format(v = sys))[j]]
                           for j in xrange(min([getattr(event, 'nJetSel30{v}_Recl'.format(v = sys)), 5]))]
                jets_4m = [j.p4() for j in jets]

                jetjecsysscaff = self.nominaljecscaff
                if event.datatag != tags.mc: jetjecsysscaff = ""

                for i in range(len(jets_4m)):
                    jets_4m[i].SetPtEtaPhiM(getattr(jets[i], "pt" + jetjecsysscaff), jets_4m[i].Eta(),
                                            jets_4m[i].Phi(), getattr(jets[i], "mass" + jetjecsysscaff))

                ### loose jets
                loosejets = [all_jets[getattr(event, 'iJetSel20{v}_Recl'.format(v = sys))[j]]
                           for j in xrange(min([getattr(event, 'nJetSel20{v}_Recl'.format(v = sys)), 5]))]
                loosejets_4m = [j.p4() for j in loosejets]

                for i in range(len(loosejets_4m)):
                    loosejets_4m[i].SetPtEtaPhiM(getattr(loosejets[i], "pt" + jetjecsysscaff), loosejets_4m[i].Eta(),
                                            loosejets_4m[i].Phi(), getattr(loosejets[i], "mass" + jetjecsysscaff))

                # ============================ Nominal variables
                allret["isSS" + sys] = int(leps[0].charge == leps[1].charge)
                if   ((abs(leps[0].pdgId) == 13 and abs(leps[1].pdgId) == 11) or
                    (abs(leps[0].pdgId) == 11 and abs(leps[1].pdgId) == 13)):
                    allret["channel" + sys] = ch.ElMu
                elif (abs(leps[0].pdgId) == 13 and abs(leps[1].pdgId) == 13):
                    allret["channel" + sys] = ch.Muon
                elif (abs(leps[0].pdgId) == 11 and abs(leps[1].pdgId) == 11):
                    allret["channel" + sys] = ch.Elec
                else:
                    allret["channel" + sys] = ch.NoChan

                allret["Lep1Lep2_Pt"    + sys] = (leps_4m[0] + leps_4m[1]).Pt()
                allret["Lep1Lep2_PtSum" + sys] = leps_4m[0].Pt() + leps_4m[1].Pt()
                allret["Lep1Lep2_DR"    + sys] = leps_4m[0].DeltaR(leps_4m[1])
                allret["Lep1Lep2_DPhi"  + sys] = abs(deltaPhi(leps[0], leps[1]))/r.TMath.Pi()
                allret["Lep1Lep2_DEta"  + sys] = abs(leps_4m[0].Eta() - leps_4m[1].Eta())


                # ============================ Variables susceptible also to JEC
                met_4m = r.TLorentzVector()
                met_4m.SetPtEtaPhiM(allret["METgood_pt"],  0,
                                    allret["METgood_phi"], 0)


                #### FIXME: las variaciones de la met estan mal calculadas, hay que mirar en el posprocesado como se calcula
                allret["METgood_pt"  + sys] = met_4m.Pt()
                allret["METgood_phi" + sys] = met_4m.Phi()


                if getattr(event, 'nJetSel20{v}_Recl'.format(v = sys)) > 0:
                    allret["JetLoose1_Pt" + sys] = loosejets_4m[0].Pt()

                if getattr(event, 'nJetSel30{v}_Recl'.format(v = sys)) > 0:
                    allret["Lep1Lep2Jet1MET_Pz"          + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Pz()
                    allret["Lep1Lep2Jet1MET_Pt"          + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Pt()
                    allret["Lep1Lep2Jet1MET_M"           + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).M()
                    allret["Lep1Lep2Jet1MET_Mt"          + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0] + met_4m).Mt()
                    allret["Lep1Lep2Jet1_Pt"             + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0]).Pt()
                    allret["Lep1Lep2Jet1_M"              + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0]).M()
                    allret["Lep1Lep2Jet1_E"              + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0]).E()
                    allret["Lep1Jet1_Pt"                 + sys] = (leps_4m[0] + jets_4m[0]).Pt()
                    allret["Lep1Jet1_M"                  + sys] = (leps_4m[0] + jets_4m[0]).M()
                    allret["Lep2Jet1_Pt"                 + sys] = (leps_4m[1] + jets_4m[0]).Pt()
                    allret["Lep2Jet1_M"                  + sys] = (leps_4m[1] + jets_4m[0]).M()
                    allret["Jet1_Pt"                     + sys] = jets_4m[0].Pt()
                    allret["Jet1_E"                      + sys] = jets_4m[0].E()

                    allret["Lep1Jet1_DR"                 + sys] = leps_4m[0].DeltaR(jets_4m[0])
                    allret["Lep1Lep2Jet1_C"              + sys] = (leps_4m[0] + leps_4m[1] + jets_4m[0]).Et() / (leps_4m[0] + leps_4m[1] + jets_4m[0]).E()

                    allret["LepJet11Lep2_DR"             + sys] = (leps_4m[0] + jets_4m[0]).DeltaR(leps_4m[1])
                    allret["LepJet11Lep2_DPhi"           + sys] = abs((leps_4m[0] + jets_4m[0]).Phi() - leps_4m[1].Phi()) / r.TMath.Pi()
                    allret["LepJet11Lep2_DEta"           + sys] = abs((leps_4m[0] + jets_4m[0]).Eta() - leps_4m[1].Eta())
                    allret["Lep1LepJet21_DR"             + sys] = leps_4m[0].DeltaR(leps_4m[1] + jets_4m[0])
                    allret["Lep1LepJet21_DPhi"           + sys] = abs(leps_4m[0].Phi() - (jets_4m[0] + leps_4m[1]).Phi()) / r.TMath.Pi()
                    allret["Lep1LepJet21_DEta"           + sys] = abs(leps_4m[0].Phi() - (jets_4m[0] + leps_4m[1]).Eta())

                    allret["HTtot"                       + sys] = leps_4m[0].Pt() + leps_4m[1].Pt() + jets_4m[0].Pt() + met_4m.Pt()
                    allret["Lep1Lep2Jet1MET_PtOverHTtot" + sys] = allret["Lep1Lep2Jet1MET_Pt" + sys] / allret["HTtot" + sys]
                    allret["Lep1_PtLep2_PtOverHTtot"     + sys] = (leps_4m[0].Pt() + leps_4m[1].Pt()) / allret["HTtot" + sys]

                    if getattr(event, 'nJetSel30{v}_Recl'.format(v = sys)) > 1:
                        allret["Lep12Jet12_DR"    + sys] = (leps_4m[0] + leps_4m[1]).DeltaR(jets_4m[0] + jets_4m[1])
                        allret["Lep12Jet12MET_DR" + sys] = (leps_4m[0] + leps_4m[1]).DeltaR(jets_4m[0] + jets_4m[1] + met_4m)
                        allret["Lep1Jet2_M"       + sys] = (leps_4m[0] + jets_4m[1]).M()
                        allret["Lep2Jet2_M"       + sys] = (leps_4m[1] + jets_4m[1]).M()
                        allret["Jet2_Pt"          + sys] = jets_4m[1].Pt()
                        #### WARNING: this minimax variable is only equal to that of ATLAS' PRL when the signal region is njets == 2, nbjets == 2.
                        allret["minimax"          + sys] = min([max([allret["Lep1Jet1_M" + sys],
                                                                     allret["Lep2Jet2_M" + sys]]),
                                                                max( allret["Lep2Jet1_M" + sys],
                                                                     allret["Lep1Jet2_M" + sys])])

        return allret
