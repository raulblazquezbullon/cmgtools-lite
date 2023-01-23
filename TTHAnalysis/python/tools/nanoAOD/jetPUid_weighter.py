from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop   import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel   import Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
import ROOT as r
from copy import deepcopy


class jetPUid_weighter(Module):
    def __init__(self, sf, eff, wp = "T", label = "", year = 2017, lepCollection = "LepGood",
                 jecvars = ["jesTotal", "jer"], lepenvars = ["mu"], debug = False):

        self.wp    = wp
        self.label = label
        self.year  = year
        self.debug = debug

        #### HERE W/O JETPUID AND ALL OTHER CUTS except pt
        self.selecsdict = {}
        self.selecsdict[2016] = lambda jet: jet.jetId > 0 and jet.eta < 2.4
        self.selecsdict[2017] = lambda jet: jet.jetId > 1 and jet.eta < 2.4
        self.selecsdict[2018] = lambda jet: jet.jetId > 1 and jet.eta < 2.4
        self.lc     = lepCollection
        self.isSet     = False
        self.selection = lambda j : True
        self.deltaRcut = 0.4

        self.systsJEC   = {0: ""}
        self.systsLepEn = {}
        self.nominaljecscaff = "_nom"

        if   len(jecvars):
            for i, var in enumerate(jecvars):
                self.systsJEC[i+1]    = "_%sUp"%var
                self.systsJEC[-(i+1)] = "_%sDown"%var
        if   len(lepenvars):
            for i, var in enumerate(lepenvars):
                self.systsLepEn[i+1]    = "_%sUp"%var
                self.systsLepEn[-(i+1)] = "_%sDown"%var

        self.ret = {}

        #### Get effs.
        f_eff = r.TFile.Open(eff, "read")
        self.h_eff_tag    = deepcopy(f_eff.Get("h2_eff_mc{y}_{w}".format(y = self.year, w = self.wp)).Clone())
        self.h_eff_mistag = deepcopy(f_eff.Get("h2_mistag_mc{y}_{w}".format(y = self.year, w = self.wp)).Clone())
        f_eff.Close()

        #### Get SF
        f_sf = r.TFile.Open(sf, "read")
        self.h_sf_tag    = deepcopy(f_sf.Get("h2_eff_sf{y}_{w}".format(y = self.year, w = self.wp)).Clone())
        self.h_sf_mistag = deepcopy(f_sf.Get("h2_mistag_sf{y}_{w}".format(y = self.year, w = self.wp)).Clone())

        # and their systematic uncertainties...
        self.h_sf_tag_syst    = deepcopy(f_sf.Get("h2_eff_sf{y}_{w}_Systuncty".format(y = self.year, w = self.wp)).Clone())
        self.h_sf_mistag_syst = deepcopy(f_sf.Get("h2_mistag_sf{y}_{w}_Systuncty".format(y = self.year, w = self.wp)).Clone())
        f_sf.Close()
        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree

        self.wrappedOutputTree.branch("jetPUidWeight" + self.label + "_tag_statUp"   , "F")
        self.wrappedOutputTree.branch("jetPUidWeight" + self.label + "_tag_statDn"   , "F")
        self.wrappedOutputTree.branch("jetPUidWeight" + self.label + "_mistag_statUp", "F")
        self.wrappedOutputTree.branch("jetPUidWeight" + self.label + "_mistag_statDn", "F")
        self.wrappedOutputTree.branch("jetPUidWeight" + self.label + "_tag_systUp"   , "F")
        self.wrappedOutputTree.branch("jetPUidWeight" + self.label + "_tag_systDn"   , "F")
        self.wrappedOutputTree.branch("jetPUidWeight" + self.label + "_mistag_systUp", "F")
        self.wrappedOutputTree.branch("jetPUidWeight" + self.label + "_mistag_systDn", "F")


        for delta,jecVar in self.systsJEC.items():
            self.wrappedOutputTree.branch("jetPUidWeight" + self.label + jecVar , "F")

        for delta,lepVar in self.systsLepEn.items():
            self.wrappedOutputTree.branch("jetPUidWeight" + self.label + lepVar , "F")

        return


    def analyze(self, event):
        if not self.isSet:
            if self.debug: print("[pythonCleaningTopRun2::analyze] Configuring settings")
            self.configureCleaning(event)
            self.isSet = True
        self.event = event
        self.ret.clear()
        self.all_jets  = [j for j in Collection(event, "Jet")]
        self.jets = []
        self.leps = [l for l in Collection(event, self.lc)]
        self.computeWeights(event)

        writeOutput(self, self.ret)
        return True


    def areMyJetsCleanAndGood(self, thejets, theleps):
        clist = [self.selection(jet) for jet in thejets]
        if self.debug: print(("[pythonCleaningTopRun2::areMyJetsCleanAndGood] bad/good clist:", clist))

        for iL in range(len(theleps)):
            mindr = -1; best = -1;
            for iJ in range(len(thejets)):
                tmpdr = abs(theleps[iL].p4().DeltaR(thejets[iJ].p4()))
                if (mindr < 0 or tmpdr < mindr):
                    mindr = tmpdr
                    best = iJ
            if (best > -1 and mindr < self.deltaRcut):
                clist[best] = False
        if self.debug: print(("[pythonCleaningTopRun2::areMyJetsCleanAndGood] final clist:", clist))
        return clist

    def configureCleaning(self, ev):
        if   hasattr(ev, "year"):
            self.selection = self.selecsdict[ev.year]
        elif self.year != None:
            self.selection = self.selecsdict[self.year]
        return

    def computeWeights(self, event):
        cleanedandgoodjets = {}
        cleanedandgoodjets[""] = self.areMyJetsCleanAndGood(self.all_jets, self.leps)

        for delta,lvar in self.systsLepEn.items():
            tmpleps = [l for l in Collection(event, self.lc + lvar[1:])]
            cleanedandgoodjets[lvar] = self.areMyJetsCleanAndGood(self.all_jets, tmpleps)

        for delta,jecVar in self.systsJEC.items():
            mcTag        = 1.
            mcNoTag      = 1.
            dataTag      = 1.
            dataNoTag    = 1.
            stattagup    = 1.
            stattagdn    = 1.
            systagup     = 1.
            systagdn     = 1.
            statmistagup = 1.
            statmistagdn = 1.
            sysmistagup  = 1.
            sysmistagdn  = 1.

            jetjecsysscaff = (jecVar if jecVar != "" else self.nominaljecscaff)

            for iJ in range(len(self.all_jets)):
                if cleanedandgoodjets[""][iJ]:
                    thept   = getattr(self.all_jets[iJ], "pt" + jetjecsysscaff)
                    if thept <= 20 or thept >= 50: continue
                    isPUjet = getattr(self.all_jets[iJ], "genJetIdx") == -1

                    eff = self.getEffFromHisto(thept, self.all_jets[iJ].eta, isPUjet) # WARNING: do not use later without changing it back!
                    SF  = self.getSF (thept, self.all_jets[iJ].eta, isPUjet)

                    istag = self.all_jets[iJ].puId == 7

                    if self.debug and jecVar == "":
                        print("[jetPUid_weighter::computeWeights] -", thept, self.all_jets[iJ].eta, eff, SF)

                    if eff == 0:
                        print("[jetPUid_weighter::computeWeights] - WARNING: event efficiency is zero. To prevent a ZeroDivision error, we will fix its value to 10^-5.")
                        eff = 1e-5

                    if istag:
                        mcTag   *= eff
                        dataTag *= eff*SF[0]

                        if (isPUjet and jecVar == ""): #### PU jet
                            stattagup *= eff*SF[1]
                            stattagdn *= eff*SF[2]
                            systagup  *= eff*SF[3]
                            systagdn  *= eff*SF[4]
                            statmistagup *= eff*SF[0]
                            statmistagdn *= eff*SF[0]
                            sysmistagup  *= eff*SF[0]
                            sysmistagdn  *= eff*SF[0]

                        elif jecVar == "":                                                     #### non-PU jet
                            stattagup *= eff*SF[0]
                            stattagdn *= eff*SF[0]
                            systagup  *= eff*SF[0]
                            systagdn  *= eff*SF[0]
                            statmistagup *= eff*SF[1]
                            statmistagdn *= eff*SF[2]
                            sysmistagup  *= eff*SF[3]
                            sysmistagdn  *= eff*SF[4]

                    else:
                        mcNoTag   *= (1 - eff      )
                        dataNoTag *= (1 - eff*SF[0])

                        if (isPUjet and jecVar == ""):
                            stattagup *= (1 - eff*SF[1])
                            stattagdn *= (1 - eff*SF[2])
                            systagup  *= (1 - eff*SF[3])
                            systagdn  *= (1 - eff*SF[4])
                            statmistagup *= (1 - eff*SF[0])
                            statmistagdn *= (1 - eff*SF[0])
                            sysmistagup  *= (1 - eff*SF[0])
                            sysmistagdn  *= (1 - eff*SF[0])

                        elif jecVar == "":
                            stattagup *= (1 - eff*SF[0])
                            stattagdn *= (1 - eff*SF[0])
                            systagup  *= (1 - eff*SF[0])
                            systagdn  *= (1 - eff*SF[0])
                            statmistagup *= (1 - eff*SF[1])
                            statmistagdn *= (1 - eff*SF[2])
                            sysmistagup  *= (1 - eff*SF[3])
                            sysmistagdn  *= (1 - eff*SF[4])


            central = (dataNoTag * dataTag ) / ( mcNoTag * mcTag )

            self.ret["jetPUidWeight" + self.label + jecVar] = central


            # b-tagging & mistagging eff. unc. varied weights
            if jecVar == "":
                self.ret["jetPUidWeight" + self.label + "_tag_statUp"]    = stattagup / ( mcNoTag * mcTag )
                self.ret["jetPUidWeight" + self.label + "_tag_statDn"]    = stattagdn / ( mcNoTag * mcTag )
                self.ret["jetPUidWeight" + self.label + "_mistag_statUp"] = statmistagup / ( mcNoTag * mcTag )
                self.ret["jetPUidWeight" + self.label + "_mistag_statDn"] = statmistagdn / ( mcNoTag * mcTag )
                self.ret["jetPUidWeight" + self.label + "_tag_systUp"]    = systagup / ( mcNoTag * mcTag )
                self.ret["jetPUidWeight" + self.label + "_tag_systDn"]    = systagdn / ( mcNoTag * mcTag )
                self.ret["jetPUidWeight" + self.label + "_mistag_systUp"] = sysmistagup / ( mcNoTag * mcTag )
                self.ret["jetPUidWeight" + self.label + "_mistag_systDn"] = sysmistagdn / ( mcNoTag * mcTag )

                for ldelta,lepVar in self.systsLepEn.items():
                    mcTag     = 1.
                    mcNoTag   = 1.
                    dataTag   = 1.
                    dataNoTag = 1.

                    self.jets    = [self.all_jets[getattr(event, 'iJetSel30{v}_Recl'.format(v = lepVar))[j]]
                                for j in range(min([getattr(event, 'nJetSel30{v}_Recl'.format(v = lepVar)), 5]))]

                    jetjecsysscaff = self.nominaljecscaff

                    for iJ in range(len(self.all_jets)):
                        if cleanedandgoodjets[lepVar][iJ]:
                            thept   = getattr(self.all_jets[iJ],  "pt" + jetjecsysscaff)
                            if thept <= 20 or thept >= 50: continue
                            isPUjet = getattr(self.all_jets[iJ], "genJetIdx") == -1

                            eff = self.getEffFromHisto(thept, self.all_jets[iJ].eta, isPUjet) # WARNING: do not use later without changing it back!
                            SF  = self.getSF (thept, self.all_jets[iJ].eta, isPUjet)

                            istag = self.all_jets[iJ].puId == 7

                            if eff == 0:
                                print("[jetPUid_weighter::computeWeights] - WARNING: jet eff is zero. To prevent a ZeroDivision error, we will fix its value to 10^-5.")
                                eff = 1e-5

                            if istag:
                                mcTag   *= eff
                                dataTag *= eff*SF[0]
                            else:
                                mcNoTag   *= (1 - eff      )
                                dataNoTag *= (1 - eff*SF[0])

                    central = (dataNoTag * dataTag ) / ( mcNoTag * mcTag )

                    self.ret["jetPUidWeight" + self.label + lepVar] = central

        return


    def getEffFromHisto(self, pt, eta, ispujet):
        if ispujet:
            histo = self.h_eff_tag
        else:
            histo = self.h_eff_mistag


        normal = True # normal := {x: pt, y: eta}
        if (histo.GetXaxis().GetBinUpEdge(histo.GetNbinsX())) < 10: normal = False

        tmpeta = eta

        if    ((normal     and histo.GetYaxis().GetBinLowEdge(1) >= 0)
            or (not normal and histo.GetXaxis().GetBinLowEdge(1) >= 0)):
            tmpeta = abs(tmpeta)

        if normal:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(pt)))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(tmpeta)))
        else:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(tmpeta)))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(pt)))

        print("pt:", pt, "eta:", eta, xbin, ybin)
        return histo.GetBinContent(xbin, ybin)


    def getSF(self, pt, eta, ispujet):
        if ispujet:
            histo    = self.h_sf_tag
            histosys = self.h_sf_tag_syst
        else:
            histo    = self.h_sf_mistag
            histosys = self.h_sf_mistag_syst

        normal = True # normal := {x: pt, y: eta}
        if (histo.GetXaxis().GetBinUpEdge(histo.GetNbinsX())) < 10: normal = False

        tmpeta = eta

        if    ((normal     and histo.GetYaxis().GetBinLowEdge(1) >= 0)
            or (not normal and histo.GetXaxis().GetBinLowEdge(1) >= 0)):
            tmpeta = abs(tmpeta)

        if normal:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(pt)))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(tmpeta)))
        else:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(tmpeta)))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(pt)))

        SF   = histo.GetBinContent(xbin, ybin)
        SFup = SF + histo.GetBinError(xbin, ybin)
        SFdn = SF - histo.GetBinError(xbin, ybin)

        #### WARNING: we assume the unc. histos have the same axis (as one would expect...)
        SFsysup = SF + histosys.GetBinContent(xbin, ybin)
        SFsysdn = SF - histosys.GetBinContent(xbin, ybin)
        return [SF, SFup, SFdn, SFsysup, SFsysdn]

