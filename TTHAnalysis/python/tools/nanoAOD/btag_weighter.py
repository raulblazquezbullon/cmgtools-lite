from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop   import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel   import Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
import ROOT as r
from copy import deepcopy

# Mainly based on https://github.com/cericeci/cmgtools-lite/blob/RunII_SUSY_EWK_fromWZ/TTHAnalysis/python/tools/bTagWeightAnalyzer.py


class btag_weighter(Module):
    def __init__(self, csv, eff, algo = 'deepjet', wp = 1, branchbtag = 'btagDeepFlavB', branchflavour = 'hadronFlavour',
                 label = "", isFastSim = False, year = 2017, SFmeasReg = "mujets",
                 minptlow = 20, minpthigh = 30, maxeta = 2.4,
                 jecvars = ["jesTotal", "jer"], lepenvars = ["mu"],correlations = False,
                 debug = False):

        self.algo      = algo
        self.wp        = wp
        self.isFastSim = isFastSim
        self.label     = label
        self.year      = year
        self.minptlow  = minptlow
        self.minpthigh = minpthigh
        self.maxeta    = maxeta
        self.branchflavour = branchflavour
        self.branchbtag   = branchbtag
        self.debug     = debug

        self.systsJEC   = {0: ""}
        self.systsLepEn = {}
        self.systsCorr = {}
        self.nominaljecscaff = ""
        self.correlations =correlations
        if   len(jecvars):
            for i, var in enumerate(jecvars):
                self.systsJEC[i+1]    = "_%sUp"%var
                self.systsJEC[-(i+1)] = "_%sDown"%var
        if   len(lepenvars):
            for i, var in enumerate(lepenvars):
                self.systsLepEn[i+1]    = "_%sUp"%var
                self.systsLepEn[-(i+1)] = "_%sDown"%var
        if self.correlations:
            for i, var in enumerate(['correlated', 'uncorrelated']):
                self.systsCorr[i+1]    = "up_%s"%var
                self.systsCorr[-(i+1)] = "down_%s"%var

        self.cutdict = {}
        self.cutdict["csvv2"] = {}; self.cutdict["deepcsv"] = {}; self.cutdict["deepjet"] = {}
        self.cutdict["csvv2"][2016]   = {"L" : 0.5803, "M" : 0.8838, "T": 0.9693}
        self.cutdict["deepcsv"][2016] = {"L" : 0.2217, "M" : 0.6321, "T": 0.8953}
        self.cutdict["deepcsv"][2017] = {"L" : 0.1522, "M" : 0.4941, "T": 0.8001}
        self.cutdict["deepcsv"][2018] = {"L" : 0.1241, "M" : 0.4184, "T": 0.7527}
        self.cutdict["deepjet"][2016] = {"L" : 0.0614, "M" : 0.3093, "T": 0.7221}
        self.cutdict["deepjet"][2017] = {"L" : 0.0521, "M" : 0.3033, "T": 0.7489}
        self.cutdict["deepjet"][2018] = {"L" : 0.0494, "M" : 0.2770, "T": 0.7264}

        self.xuandict = {"csvv2"   : "CSVv2",
                         "deepcsv" : "DeepCSV",
                         "deepjet" : "DFlav"}

        self.cutVal = self.cutdict[self.algo][self.year][ ["L", "M", "T"][self.wp] ]
        self.ret = {}

        vector = r.vector('string')()
        vector.push_back("up")
        vector.push_back("down")
         

        if self.correlations:
           for delta,corr in self.systsCorr.items():
               print(corr)
               vector.push_back(corr)
        ## load POG stuff
        ## in reader instance: 1 = medium wp
        ## in loading: 0,1,2 = b-jets, c-jets, light-jets
        self.calib    = r.BTagCalibration(self.algo, csv)
        
        self.reader_b = r.BTagCalibrationReader(self.wp, "central", vector)
        self.reader_b.load(self.calib, 0, SFmeasReg if not isFastSim else "fastsim")

        self.reader_c = r.BTagCalibrationReader(self.wp, "central", vector)
        self.reader_c.load(self.calib, 1, SFmeasReg if not isFastSim else "fastsim")

        self.reader_l = r.BTagCalibrationReader(self.wp, "central", vector)
        self.reader_l.load(self.calib, 2, "incl" if not isFastSim else "fastsim")

        f_eff        = r.TFile.Open(eff+str(year)+".root", "read")
        #self.h_eff_b = deepcopy(f_eff.Get("BtagSFB_{}{}_{}".format(self.xuandict[self.algo], ["L", "M", "T"][self.wp], self.year)).Clone())
        #self.h_eff_c = deepcopy(f_eff.Get("BtagSFC_{}{}_{}".format(self.xuandict[self.algo], ["L", "M", "T"][self.wp], self.year)).Clone())
        #self.h_eff_l = deepcopy(f_eff.Get("BtagSFL_{}{}_{}".format(self.xuandict[self.algo], ["L", "M", "T"][self.wp], self.year)).Clone())
        print((eff+str(year)+".root"))
        print(("eff_b_{}".format(["loose", "medium", "tight"][self.wp])))
        self.h_eff_b = deepcopy( f_eff.Get("eff_b_{}".format(["loose", "medium", "tight"][self.wp])).Clone())
        self.h_eff_c = deepcopy(f_eff.Get("eff_c_{}".format(["loose", "medium", "tight"][self.wp])).Clone())
        self.h_eff_l = deepcopy(f_eff.Get("eff_other_{}".format(["loose", "medium", "tight"][self.wp])).Clone())
        f_eff.Close()
        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree

        self.wrappedOutputTree.branch("bTagWeight" + self.label + "_btag_Up"  , "F")
        self.wrappedOutputTree.branch("bTagWeight" + self.label + "_btag_Dn"  , "F")
        self.wrappedOutputTree.branch("bTagWeight" + self.label + "_mistag_Up", "F")
        self.wrappedOutputTree.branch("bTagWeight" + self.label + "_mistag_Dn", "F")

        for delta,jecVar in self.systsJEC.items():
            self.wrappedOutputTree.branch("bTagWeight" + self.label + jecVar , "F")

        for delta,lepVar in self.systsLepEn.items():
            self.wrappedOutputTree.branch("bTagWeight" + self.label + lepVar , "F")
        if self.correlations:
            self.wrappedOutputTree.branch("bTagWeight" + self.label + "_btag_CorrelatedUp"  , "F")
            self.wrappedOutputTree.branch("bTagWeight" + self.label + "_btag_CorrelatedDn"  , "F")
            self.wrappedOutputTree.branch("bTagWeight" + self.label + "_btag_UncorrelatedUp"  , "F")
            self.wrappedOutputTree.branch("bTagWeight" + self.label + "_btag_UncorrelatedDn"  , "F")
            self.wrappedOutputTree.branch("bTagWeight" + self.label + "_mistag_CorrelatedUp", "F")
            self.wrappedOutputTree.branch("bTagWeight" + self.label + "_mistag_CorrelatedDn", "F")
            self.wrappedOutputTree.branch("bTagWeight" + self.label + "_mistag_UncorrelatedUp", "F")
            self.wrappedOutputTree.branch("bTagWeight" + self.label + "_mistag_UncorrelatedDn", "F")
        return


    def analyze(self, event):
        self.event = event
        self.ret.clear()
        self.all_jets  = [j for j in Collection(event, "JetSel_Recl")]
        self.jets = []
        self.computeWeights(event)

        writeOutput(self, self.ret)
        return True


    def computeWeights(self, event):
        for delta,jecVar in self.systsJEC.items():
            mcTag     = 1
            mcNoTag   = 1
            dataTag   = 1
            dataNoTag = 1
            sysHFup   = 1
            sysHFdn   = 1
            sysLFup   = 1
            sysLFdn   = 1
            sysHFupCorr   = 1
            sysHFdnCorr   = 1
            sysLFupCorr   = 1
            sysLFdnCorr   = 1
            sysHFupUncorr   = 1
            sysHFdnUncorr   = 1
            sysLFupUncorr   = 1
            sysLFdnUncorr   = 1
            self.jets    = self.all_jets
            #self.jets    = [self.all_jets[getattr(event, 'iJetSel30{v}_Recl'.format(v = jecVar))[j]]
            #            for j in xrange(min([getattr(event, 'nJetSel30{v}_Recl'.format(v = jecVar)), 5]))]

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
                    print("[btag_weighter::computeWeights] -", jet.pt, jet.eta, getattr(jet, self.branchbtag), eff, SF)

                if eff == 0:
                    print("[btag_weighter::computeWeights] - WARNING: jet b-tagging is zero. To prevent a ZeroDivision error, we will fix its value to 10^-5.")
                    eff = 1e-5

                if istag:
                    mcTag   *= eff
                    dataTag *= eff*SF[0]
                    if self.correlations == False:
                       if (flavour in [4, 5]) and (jecVar == ""):
                          sysHFup *= eff*SF[1]
                          sysHFdn *= eff*SF[2]
                          sysLFup *= eff*SF[0]
                          sysLFdn *= eff*SF[0]

                       elif jecVar == "":
                          sysHFup *= eff*SF[0]
                          sysHFdn *= eff*SF[0]
                          sysLFup *= eff*SF[1]
                          sysLFdn *= eff*SF[2]

                    else: #do correaltions 
                        if (flavour in [4, 5]) and (jecVar == ""):
                           sysHFupCorr *= eff*SF[1]
                           sysHFdnCorr *= eff*SF[2]
                           sysHFupUncorr *= eff*SF[3]
                           sysHFdnUncorr *= eff*SF[4]
                           sysLFupCorr *= eff*SF[0]
                           sysLFdnCorr *= eff*SF[0]
                           sysLFupUncorr *= eff*SF[0]
                           sysLFdnUncorr *= eff*SF[0]

                        elif jecVar == "":
                           sysHFupCorr *= eff*SF[0]
                           sysHFdnCorr *= eff*SF[0]
                           sysHFupUncorr *= eff*SF[0]
                           sysHFdnUncorr *= eff*SF[0]
                           sysLFupCorr *= eff*SF[1]
                           sysLFdnCorr *= eff*SF[2]
                           sysLFupUncorr *= eff*SF[3]
                           sysLFdnUncorr *= eff*SF[4]
                else:
                    mcNoTag   *= (1 - eff      )
                    dataNoTag *= (1 - eff*SF[0])
                    if self.correlations == False:
                       if (flavour in [4, 5]) and (jecVar == ""):
                          sysHFup *= (1 - eff*SF[1])
                          sysHFdn *= (1 - eff*SF[2])
                          sysLFup *= (1 - eff*SF[0])
                          sysLFdn *= (1 - eff*SF[0])

                       elif jecVar == "":
                          sysHFup *= (1 - eff*SF[0])
                          sysHFdn *= (1 - eff*SF[0])
                          sysLFup *= (1 - eff*SF[1])
                          sysLFdn *= (1 - eff*SF[2])
                    else:#do correaltions
                       if (flavour in [4, 5]) and (jecVar == ""):
                          sysHFupCorr *= (1 - eff*SF[1])
                          sysHFdnCorr *= (1 - eff*SF[2])
                          sysHFupUncorr *= (1 - eff*SF[3])
                          sysHFdnUncorr *= (1 - eff*SF[4])
                          sysLFupCorr *= (1 - eff*SF[0])
                          sysLFdnCorr *= (1 - eff*SF[0])
                          sysLFupUncorr *= (1 - eff*SF[0])
                          sysLFdnUncorr *= (1 - eff*SF[0])

                       elif jecVar == "":
                          sysHFupCorr *= (1 - eff*SF[0])
                          sysHFdnCorr *= (1 - eff*SF[0])
                          sysHFupUncorr *= (1 - eff*SF[0])
                          sysHFdnUncorr *= (1 - eff*SF[0])
                          sysLFupCorr *= (1 - eff*SF[1])
                          sysLFdnCorr *= (1 - eff*SF[2])
                          sysLFupUncorr *= (1 - eff*SF[3])
                          sysLFdnUncorr *= (1 - eff*SF[4])

            central = (dataNoTag * dataTag ) / ( mcNoTag * mcTag )

            self.ret["bTagWeight" + self.label + jecVar] = central


            # b-tagging & mistagging eff. unc. varied weights
            if jecVar == "" and self.correlations:
                self.ret["bTagWeight" + self.label + "_btag_CorrelatedUp"]   = sysHFupCorr / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_btag_CorrelatedDn"]   = sysHFdnCorr / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_CorrelatedUp"] = sysLFupCorr / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_CorrelatedDn"] = sysLFdnCorr / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_btag_UncorrelatedUp"]   = sysHFupUncorr / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_btag_UncorrelatedDn"]   = sysHFdnUncorr / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_UncorrelatedUp"] = sysLFupUncorr / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_UncorrelatedDn"] = sysLFdnUncorr / ( mcNoTag * mcTag )

            elif jecVar == "" and not self.correlations:
                self.ret["bTagWeight" + self.label + "_btag_Up"]   = sysHFup / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_btag_Dn"]   = sysHFdn / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_Up"] = sysLFup / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_Dn"] = sysLFdn / ( mcNoTag * mcTag )

                for ldelta,lepVar in self.systsLepEn.items():
                    mcTag     = 1
                    mcNoTag   = 1
                    dataTag   = 1
                    dataNoTag = 1

                    self.jets    = [self.all_jets[getattr(event, 'iJetSel30{v}_Recl'.format(v = lepVar))[j]]
                                for j in range(min([getattr(event, 'nJetSel30{v}_Recl'.format(v = lepVar)), 5]))]

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
                            print("[btag_weighter::computeWeights] - WARNING: jet b-tagging is zero. To prevent a ZeroDivision error, we will fix its value to 10^-5.")
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
        if flavour==2:
           eta_cutoff = min(2.39, eta)
        else:
           eta_cutoff = min(2.49, eta)

        theReader  = [self.reader_b, self.reader_c, self.reader_l][flavour]
        if not self.correlations:
           SF   = theReader.eval_auto_bounds("central", flavour, abs(eta_cutoff), pt_cutoff)
           SFup = theReader.eval_auto_bounds("up",      flavour, abs(eta_cutoff), pt_cutoff)
           SFdn = theReader.eval_auto_bounds("down",    flavour, abs(eta_cutoff), pt_cutoff)
           return [SF, SFup, SFdn]
        else:
           SF   = theReader.eval_auto_bounds("central", flavour, abs(eta_cutoff) if flavour !=2 else eta_cutoff, pt_cutoff)
           SFupCorr = theReader.eval_auto_bounds("up_correlated",      flavour, abs(eta_cutoff) if flavour !=2 else eta_cutoff, pt_cutoff)
           SFdnCorr = theReader.eval_auto_bounds("down_correlated",    flavour, abs(eta_cutoff) if flavour !=2 else eta_cutoff, pt_cutoff)
           SFupUncorr = theReader.eval_auto_bounds("up_uncorrelated",      flavour, abs(eta_cutoff) if flavour !=2 else eta_cutoff, pt_cutoff)
           SFdnUncorr = theReader.eval_auto_bounds("down_uncorrelated",    flavour, abs(eta_cutoff) if flavour !=2 else eta_cutoff, pt_cutoff)
           return [SF, SFupCorr, SFdnCorr,SFupUncorr,SFdnUncorr]


    def pogFlavor(self, hadronFlavor):
        match = {5:0, 4:1, 0:2}
        if hadronFlavor in list(match.keys()): return match[hadronFlavor]
        return 2
