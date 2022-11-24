from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop   import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel   import Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
import ROOT as r
from copy import deepcopy

# Mainly based on https://github.com/cericeci/cmgtools-lite/blob/RunII_SUSY_EWK_fromWZ/TTHAnalysis/python/tools/bTagWeightAnalyzer.py


class btag_weighterUL(Module):
    def __init__(self, csv, eff, algo = 'deepjet', wp = 1, branchbtag = 'btagDeepFlavB', branchflavour = 'hadronFlavour',
                 label = "", isFastSim = False, year = "2017", SFmeasReg = "mujets",
                 minptlow = 20, minpthigh = 30, maxeta = 2.4,
                 jecvars = ["jesTotal", "jer"], lepenvars = ["mu"],
                 splitCorrelations = False, debug = False):

        self.algo      = algo
        self.wp        = wp
        self.isFastSim = isFastSim
        self.label     = label
        self.year      = year
        self.minptlow  = minptlow
        self.minpthigh = minpthigh
        self.maxeta    = maxeta
        self.branchflavour = branchflavour
        self.splitCorr     = splitCorrelations
        self.branchbtag    = branchbtag
        self.debug         = debug

        self.systsJEC   = {0: ""}
        self.systsLepEn = {}
        self.systsCorr  = {}
        self.nominaljecscaff = "_nom"

        if SFmeasReg != "mujets" and splitCorrelations:
            raise RuntimeError("FATAL: splitting corrs. for a b-tag. SF non-mujets measurement! This is not implemented :(.")

        if   len(jecvars):
            for i, var in enumerate(jecvars):
                self.systsJEC[i+1]    = "_%sUp"%var
                self.systsJEC[-(i+1)] = "_%sDown"%var
        if   len(lepenvars):
            for i, var in enumerate(lepenvars):
                self.systsLepEn[i+1]    = "_%sUp"%var
                self.systsLepEn[-(i+1)] = "_%sDown"%var
        if self.splitCorr:
            for i, var in enumerate(['btag_correlated', 'mistag_correlated', 'btag_uncorrelated', 'mistag_uncorrelated', "btag_jes", "btag_pileup", "btag_type3", "btag_stat"]):
                self.systsCorr[i+1]    = "_%sUp"%var
                self.systsCorr[-(i+1)] = "_%sDown"%var

        ### WP extracted on 2022-04-27 from:
        # https://twiki.cern.ch/twiki/bin/viewauth/CMS/BtagRecommendation106XUL16preVFP  # APV
        # https://twiki.cern.ch/twiki/bin/viewauth/CMS/BtagRecommendation106XUL16postVFP
        # https://twiki.cern.ch/twiki/bin/viewauth/CMS/BtagRecommendation106XUL17
        # https://twiki.cern.ch/twiki/bin/viewauth/CMS/BtagRecommendation106XUL18
        self.btagWPs   = {"DeepCSV_2016apv_L" : 0.2027,
                          "DeepCSV_2016apv_M" : 0.6001,
                          "DeepCSV_2016apv_T" : 0.8819,
                          "DeepCSV_2016_L"    : 0.1918,
                          "DeepCSV_2016_M"    : 0.5847,
                          "DeepCSV_2016_T"    : 0.8767,
                          "DeepCSV_2017_L"    : 0.1355,
                          "DeepCSV_2017_M"    : 0.4506,
                          "DeepCSV_2017_T"    : 0.7738,
                          "DeepCSV_2018_L"    : 0.1208,
                          "DeepCSV_2018_M"    : 0.4168,
                          "DeepCSV_2018_T"    : 0.7665,
                          "DeepFlav_2016apv_L": 0.0508,
                          "DeepFlav_2016apv_M": 0.2598,
                          "DeepFlav_2016apv_T": 0.6502,
                          "DeepFlav_2016_L"   : 0.0480,
                          "DeepFlav_2016_M"   : 0.2489,
                          "DeepFlav_2016_T"   : 0.6377,
                          "DeepFlav_2017_L"   : 0.0532,
                          "DeepFlav_2017_M"   : 0.3040,
                          "DeepFlav_2017_T"   : 0.7476,
                          "DeepFlav_2018_L"   : 0.0490,
                          "DeepFlav_2018_M"   : 0.2783,
                          "DeepFlav_2018_T"   : 0.7100,
                          "DeepFlav_2022_L"   : 0.0490, #copied from 2018
                          "DeepFlav_2022_M"   : 0.2783,
                          "DeepFlav_2022_T"   : 0.7100,
                          "DeepCSV_2022_L"    : 0.1208,
                          "DeepCSV_2022_M"    : 0.4168,
                          "DeepCSV_2022_T"    : 0.7665,
                         }
        self.xuandict = {"deepcsv" : "DeepCSV",
                         "deepjet" : "DeepFlav"}

        self.cutVal = self.btagWPs[ self.xuandict[self.algo] + "_" + self.year + "_" + ["L", "M", "T"][self.wp] ]
        self.ret = {}

        vectorbc = r.vector('string')()
        vectorbc.push_back("up")
        vectorbc.push_back("down")

        if self.splitCorr:
            vectorbc.push_back("up_correlated")
            vectorbc.push_back("down_correlated")
            vectorbc.push_back("up_uncorrelated")
            vectorbc.push_back("down_uncorrelated")
            #if   SFmeasReg == "mujets":
            
            vectorbc.push_back("up_jes")
            vectorbc.push_back("down_jes")
            vectorbc.push_back("up_pileup")
            vectorbc.push_back("down_pileup")
            vectorbc.push_back("up_type3")
            vectorbc.push_back("down_type3")
            vectorbc.push_back("up_statistic")
            vectorbc.push_back("down_statistic")

            #### Aqui me emocione. No implemente el resto pa comb tmb porque es una lata (en vez de extender, mereceria la pena reescribir y automatizar, pero no me apetece)
            #elif SFmeasReg == "comb":
                #vectorbc.push_back("up_jes")
                #vectorbc.push_back("down_jes")
                #vectorbc.push_back("up_jer")
                #vectorbc.push_back("down_jer")
                #vectorbc.push_back("up_isr")
                #vectorbc.push_back("down_isr")
                #vectorbc.push_back("up_fsr")
                #vectorbc.push_back("down_fsr")
                #vectorbc.push_back("up_hdamp")
                #vectorbc.push_back("down_hdamp")
                #vectorbc.push_back("up_qcdscale")
                #vectorbc.push_back("down_qcdscale")
                #vectorbc.push_back("up_pileup")
                #vectorbc.push_back("down_pileup")
                #vectorbc.push_back("up_topmass")
                #vectorbc.push_back("down_topmass")
                #vectorbc.push_back("up_type3")
                #vectorbc.push_back("down_type3")
                #vectorbc.push_back("up_statistic")
                #vectorbc.push_back("down_statistic")


        vectorl = r.vector('string')()
        vectorl.push_back("up")
        vectorl.push_back("down")

        if self.splitCorr:
            vectorl.push_back("up_correlated")
            vectorl.push_back("down_correlated")
            vectorl.push_back("up_uncorrelated")
            vectorl.push_back("down_uncorrelated")

        ## load POG stuff
        ## in reader instance: 1 = medium wp
        ## in loading: 0,1,2 = b-jets, c-jets, light-jets
        self.calib    = r.BTagCalibration(self.algo, csv)

        self.reader_b = r.BTagCalibrationReader(self.wp, "central", vectorbc)
        self.reader_b.load(self.calib, 0, SFmeasReg if not isFastSim else "fastsim")

        self.reader_c = r.BTagCalibrationReader(self.wp, "central", vectorbc)
        self.reader_c.load(self.calib, 1, SFmeasReg if not isFastSim else "fastsim")

        self.reader_l = r.BTagCalibrationReader(self.wp, "central", vectorl)
        self.reader_l.load(self.calib, 2, "incl" if not isFastSim else "fastsim")

        #### Eficiencias ### FORZADAS A DEEPFLAVOUR
        f_eff        = r.TFile.Open(eff, "read")
        self.h_eff_b = deepcopy(f_eff.Get("BtagSFB_{}{}_{}".format(self.xuandict[self.algo], ["L", "M", "T"][self.wp], self.year)).Clone())
        self.h_eff_c = deepcopy(f_eff.Get("BtagSFC_{}{}_{}".format(self.xuandict[self.algo], ["L", "M", "T"][self.wp], self.year)).Clone())
        self.h_eff_l = deepcopy(f_eff.Get("BtagSFL_{}{}_{}".format(self.xuandict[self.algo], ["L", "M", "T"][self.wp], self.year)).Clone())
        f_eff.Close()

        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree

        self.wrappedOutputTree.branch("bTagWeight" + self.label + "_btag_Up"  , "F")
        self.wrappedOutputTree.branch("bTagWeight" + self.label + "_btag_Dn"  , "F")
        self.wrappedOutputTree.branch("bTagWeight" + self.label + "_mistag_Up", "F")
        self.wrappedOutputTree.branch("bTagWeight" + self.label + "_mistag_Dn", "F")

        for delta,corrVar in self.systsCorr.iteritems():
            self.wrappedOutputTree.branch("bTagWeight" + self.label + corrVar , "F")

        for delta,jecVar in self.systsJEC.iteritems():
            self.wrappedOutputTree.branch("bTagWeight" + self.label + jecVar , "F")

        for delta,lepVar in self.systsLepEn.iteritems():
            self.wrappedOutputTree.branch("bTagWeight" + self.label + lepVar , "F")

        return


    def analyze(self, event):
        self.event = event
        self.ret.clear()
        self.all_jets  = [j for j in Collection(event, "Jet")]
        self.jets = []
        self.computeWeights(event)

        writeOutput(self, self.ret)
        return True


    def computeWeights(self, event):
        for delta,jecVar in self.systsJEC.iteritems():
            mcTag     = 1.
            mcNoTag   = 1.
            dataTag   = 1.
            dataNoTag = 1.
            sysHFup   = 1.
            sysHFdn   = 1.
            sysLFup   = 1.
            sysLFdn   = 1.

            sysHFupCorr   = 1.
            sysHFdnCorr   = 1.
            sysLFupCorr   = 1.
            sysLFdnCorr   = 1.
            sysHFupUncorr = 1.
            sysHFdnUncorr = 1.
            sysLFupUncorr = 1.
            sysLFdnUncorr = 1.

            sysHFupJes    = 1.
            sysHFdnJes    = 1.
            sysHFupPileup = 1.
            sysHFdnPileup = 1.
            sysHFupType3  = 1.
            sysHFdnType3  = 1.
            sysHFupStat   = 1.
            sysHFdnStat   = 1.

            self.jets = [self.all_jets[getattr(event, 'iJetSel30{v}_Recl'.format(v = jecVar))[j]]
                         #for j in xrange(min([getattr(event, 'nJetSel30{v}_Recl'.format(v = jecVar)), 5]))] #### WARNING: this is only valid when ignoring events with nJet>5!!!!!!!!!!
                         for j in xrange(getattr(event, 'nJetSel30{v}_Recl'.format(v = jecVar)))] #### WARNING: this is only valid when ignoring events with nJet>5!!!!!!!!!!

            jetjecsysscaff = (jecVar if jecVar != "" else self.nominaljecscaff)

            for jet in self.jets:
                flavour = getattr(jet, self.branchflavour) if hasattr(jet, self.branchflavour) else jet.mcFlavour
                jet.pt = getattr(jet, "pt" + jetjecsysscaff)

                if abs(jet.eta) >= self.maxeta:    continue
                if abs(jet.pt)  <= self.minptlow : continue

                eff = self.getEffFromHisto(jet.pt, jet.eta, flavour) # WARNING: do not use later without changing it back!
                SF  = self.getSF (jet.pt, jet.eta, flavour)

                #istag = (getattr(jet, self.branchbtag) > self.cutVal) and (abs(jet.eta) < self.maxeta and jet.pt > self.minptlow)
                istag = (getattr(jet, self.branchbtag) > self.cutVal) and (abs(jet.eta) < self.maxeta and jet.pt > self.minptlow) # AT THIS MOMENT ONLY ONE JET COLLECTION IS ADMITTED

                if self.debug and jecVar == "":
                    print "[btag_weighter::computeWeights] -", jet.pt, jet.eta, getattr(jet, self.branchbtag), eff, SF

                if eff == 0:
                    print "[btag_weighter::computeWeights] - WARNING: jet b-tagging is zero. To prevent a ZeroDivision error, we will fix its value to 10^-5."
                    eff = 1e-5

                if istag:
                    mcTag   *= eff
                    dataTag *= eff*SF[0]

                    if (flavour in [4, 5]) and (jecVar == ""):
                        sysHFup *= eff*SF[1]
                        sysHFdn *= eff*SF[2]
                        sysLFup *= eff*SF[0]
                        sysLFdn *= eff*SF[0]

                        if self.splitCorr:
                            sysHFupCorr   *= eff*SF[3]
                            sysHFdnCorr   *= eff*SF[4]
                            sysHFupUncorr *= eff*SF[5]
                            sysHFdnUncorr *= eff*SF[6]
                            sysLFupCorr   *= eff*SF[0]
                            sysLFdnCorr   *= eff*SF[0]
                            sysLFupUncorr *= eff*SF[0]
                            sysLFdnUncorr *= eff*SF[0]

                            sysHFupJes    *= eff*SF[7]
                            sysHFdnJes    *= eff*SF[8]
                            sysHFupPileup *= eff*SF[9]
                            sysHFdnPileup *= eff*SF[10]
                            sysHFupType3  *= eff*SF[11]
                            sysHFdnType3  *= eff*SF[12]
                            sysHFupStat   *= eff*SF[13]
                            sysHFdnStat   *= eff*SF[14]

                    elif jecVar == "":
                        sysHFup *= eff*SF[0]
                        sysHFdn *= eff*SF[0]
                        sysLFup *= eff*SF[1]
                        sysLFdn *= eff*SF[2]

                        if self.splitCorr:
                            sysHFupCorr   *= eff*SF[0]
                            sysHFdnCorr   *= eff*SF[0]
                            sysHFupUncorr *= eff*SF[0]
                            sysHFdnUncorr *= eff*SF[0]
                            sysLFupCorr   *= eff*SF[3]
                            sysLFdnCorr   *= eff*SF[4]
                            sysLFupUncorr *= eff*SF[5]
                            sysLFdnUncorr *= eff*SF[6]

                            sysHFupJes    *= eff*SF[0]
                            sysHFdnJes    *= eff*SF[0]
                            sysHFupPileup *= eff*SF[0]
                            sysHFdnPileup *= eff*SF[0]
                            sysHFupType3  *= eff*SF[0]
                            sysHFdnType3  *= eff*SF[0]
                            sysHFupStat   *= eff*SF[0]
                            sysHFdnStat   *= eff*SF[0]

                else:
                    mcNoTag   *= (1 - eff      )
                    dataNoTag *= (1 - eff*SF[0])

                    if (flavour in [4, 5]) and (jecVar == ""):
                        sysHFup *= (1 - eff*SF[1])
                        sysHFdn *= (1 - eff*SF[2])
                        sysLFup *= (1 - eff*SF[0])
                        sysLFdn *= (1 - eff*SF[0])

                        if self.splitCorr:
                            sysHFupCorr   *= (1 - eff*SF[3])
                            sysHFdnCorr   *= (1 - eff*SF[4])
                            sysHFupUncorr *= (1 - eff*SF[5])
                            sysHFdnUncorr *= (1 - eff*SF[6])
                            sysLFupCorr   *= (1 - eff*SF[0])
                            sysLFdnCorr   *= (1 - eff*SF[0])
                            sysLFupUncorr *= (1 - eff*SF[0])
                            sysLFdnUncorr *= (1 - eff*SF[0])

                            sysHFupJes    *= (1 - eff*SF[7] )
                            sysHFdnJes    *= (1 - eff*SF[8] )
                            sysHFupPileup *= (1 - eff*SF[9] )
                            sysHFdnPileup *= (1 - eff*SF[10])
                            sysHFupType3  *= (1 - eff*SF[11])
                            sysHFdnType3  *= (1 - eff*SF[12])
                            sysHFupStat   *= (1 - eff*SF[13])
                            sysHFdnStat   *= (1 - eff*SF[14])

                    elif jecVar == "":
                        sysHFup *= (1 - eff*SF[0])
                        sysHFdn *= (1 - eff*SF[0])
                        sysLFup *= (1 - eff*SF[1])
                        sysLFdn *= (1 - eff*SF[2])

                        if self.splitCorr:
                            sysHFupCorr   *= (1 - eff*SF[0])
                            sysHFdnCorr   *= (1 - eff*SF[0])
                            sysHFupUncorr *= (1 - eff*SF[0])
                            sysHFdnUncorr *= (1 - eff*SF[0])
                            sysLFupCorr   *= (1 - eff*SF[3])
                            sysLFdnCorr   *= (1 - eff*SF[4])
                            sysLFupUncorr *= (1 - eff*SF[5])
                            sysLFdnUncorr *= (1 - eff*SF[6])

                            sysHFupJes    *= (1 - eff*SF[0])
                            sysHFdnJes    *= (1 - eff*SF[0])
                            sysHFupPileup *= (1 - eff*SF[0])
                            sysHFdnPileup *= (1 - eff*SF[0])
                            sysHFupType3  *= (1 - eff*SF[0])
                            sysHFdnType3  *= (1 - eff*SF[0])
                            sysHFupStat   *= (1 - eff*SF[0])
                            sysHFdnStat   *= (1 - eff*SF[0])

            central = (dataNoTag * dataTag ) / ( mcNoTag * mcTag )

            self.ret["bTagWeight" + self.label + jecVar] = central


            # b-tagging & mistagging eff. unc. varied weights
            if jecVar == "":
                self.ret["bTagWeight" + self.label + "_btag_Up"]   = sysHFup / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_btag_Dn"]   = sysHFdn / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_Up"] = sysLFup / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_Dn"] = sysLFdn / ( mcNoTag * mcTag )

                if self.splitCorr:
                    self.ret["bTagWeight" + self.label + "_btag_correlatedUp"]       = sysHFupCorr   / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_correlatedDown"]     = sysHFdnCorr   / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_mistag_correlatedUp"]     = sysLFupCorr   / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_mistag_correlatedDown"]   = sysLFdnCorr   / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_uncorrelatedUp"]     = sysHFupUncorr / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_uncorrelatedDown"]   = sysHFdnUncorr / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_mistag_uncorrelatedUp"]   = sysLFupUncorr / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_mistag_uncorrelatedDown"] = sysLFdnUncorr / ( mcNoTag * mcTag )

                    self.ret["bTagWeight" + self.label + "_btag_jesUp"]              = sysHFupJes    / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_jesDown"]            = sysHFdnJes    / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_pileupUp"]           = sysHFupPileup / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_pileupDown"]         = sysHFdnPileup / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_type3Up"]            = sysHFupType3  / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_type3Down"]          = sysHFdnType3  / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_statUp"]             = sysHFupStat   / ( mcNoTag * mcTag )
                    self.ret["bTagWeight" + self.label + "_btag_statDown"]           = sysHFdnStat   / ( mcNoTag * mcTag )


                for ldelta,lepVar in self.systsLepEn.iteritems():
                    mcTag     = 1.
                    mcNoTag   = 1.
                    dataTag   = 1.
                    dataNoTag = 1.

                    self.jets    = [self.all_jets[getattr(event, 'iJetSel30{v}_Recl'.format(v = lepVar))[j]]
                                for j in xrange(min([getattr(event, 'nJetSel30{v}_Recl'.format(v = lepVar)), 5]))]

                    jetjecsysscaff = self.nominaljecscaff

                    for jet in self.jets:
                        flavour = getattr(jet, self.branchflavour) if hasattr(jet, self.branchflavour) else jet.mcFlavour
                        jet.pt = getattr(jet, "pt" + jetjecsysscaff)

                        if abs(jet.eta) >= self.maxeta:    continue
                        if abs(jet.pt)  <= self.minptlow : continue

                        eff = self.getEffFromHisto(jet.pt, jet.eta, flavour) # WARNING: do not use later without changing it back!
                        SF  = self.getSF (jet.pt, jet.eta, flavour)

                        istag = (getattr(jet, self.branchbtag) > self.cutVal) and (abs(jet.eta) < self.maxeta and jet.pt > self.minptlow)

                        if eff == 0:
                            print "[btag_weighter::computeWeights] - WARNING: jet b-tagging is zero. To prevent a ZeroDivision error, we will fix its value to 10^-5."
                            eff = 1e-5

                        if istag:
                            mcTag   *= eff
                            dataTag *= eff*SF[0]
                        else:
                            mcNoTag   *= (1 - eff      )
                            dataNoTag *= (1 - eff*SF[0])

                    central = (dataNoTag * dataTag ) / ( mcNoTag * mcTag )

                    self.ret["bTagWeight" + self.label + lepVar] = central

        return


    def getEffFromHisto(self, pt, eta, mcFlavour):
        histo = [self.h_eff_b, self.h_eff_c, self.h_eff_l][self.pogFlavor(mcFlavour)]

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

        return histo.GetBinContent(xbin, ybin)


    def getSF(self, pt, eta, mcFlavour):
        flavour    = self.pogFlavor(mcFlavour)
        pt_cutoff  = max(20. , min(999., pt))
        eta_cutoff = min(2.49, abs(eta))

        theReader  = [self.reader_b, self.reader_c, self.reader_l][flavour]

        SF   = theReader.eval_auto_bounds("central", flavour, eta_cutoff, pt_cutoff)
        SFup = theReader.eval_auto_bounds("up",      flavour, eta_cutoff, pt_cutoff)
        SFdn = theReader.eval_auto_bounds("down",    flavour, eta_cutoff, pt_cutoff)

        if not self.splitCorr:
            return [SF, SFup, SFdn]
        else:
            SFupCorr   = theReader.eval_auto_bounds("up_correlated",     flavour, eta_cutoff, pt_cutoff)
            SFdnCorr   = theReader.eval_auto_bounds("down_correlated",   flavour, eta_cutoff, pt_cutoff)
            SFupUncorr = theReader.eval_auto_bounds("up_uncorrelated",   flavour, eta_cutoff, pt_cutoff)
            SFdnUncorr = theReader.eval_auto_bounds("down_uncorrelated", flavour, eta_cutoff, pt_cutoff)
            if flavour in [4, 5]:
                SFupjes    = theReader.eval_auto_bounds("up_jes",            flavour, eta_cutoff, pt_cutoff)
                SFdnjes    = theReader.eval_auto_bounds("down_jes",          flavour, eta_cutoff, pt_cutoff)
                SFuppileup = theReader.eval_auto_bounds("up_pileup",         flavour, eta_cutoff, pt_cutoff)
                SFdnpileup = theReader.eval_auto_bounds("down_pileup",       flavour, eta_cutoff, pt_cutoff)
                SFuptype3  = theReader.eval_auto_bounds("up_type3",          flavour, eta_cutoff, pt_cutoff)
                SFdntype3  = theReader.eval_auto_bounds("down_type3",        flavour, eta_cutoff, pt_cutoff)
                SFupstat   = theReader.eval_auto_bounds("up_statistic",      flavour, eta_cutoff, pt_cutoff)
                SFdnstat   = theReader.eval_auto_bounds("down_statistic",    flavour, eta_cutoff, pt_cutoff)
            else:
                SFupjes    = 1.
                SFdnjes    = 1.
                SFuppileup = 1.
                SFdnpileup = 1.
                SFuptype3  = 1.
                SFdntype3  = 1.
                SFupstat   = 1.
                SFdnstat   = 1.


            return [SF, SFup, SFdn,
                    SFupCorr, SFdnCorr, SFupUncorr, SFdnUncorr,
                    SFupjes, SFdnjes, SFuppileup, SFdnpileup, SFuptype3, SFdntype3, SFupstat, SFdnstat]


    def pogFlavor(self, hadronFlavor):
        match = {5:0, # b
                 4:1, # c
                 0:2, # l
                 1:2, # l
                 2:2, # l
                 3:2, # l
        }
        if hadronFlavor in match.keys(): return match[hadronFlavor]
        return 2

