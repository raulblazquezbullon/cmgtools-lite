from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop   import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel   import Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
import ROOT as r
from copy import deepcopy

# Mainly based on https://github.com/cericeci/cmgtools-lite/blob/RunII_SUSY_EWK_fromWZ/TTHAnalysis/python/tools/bTagWeightAnalyzer.py


class btag_weighter(Module):
    def __init__(self, csv, eff, algo = 'deepjet', wp = 1, branchbtag = 'btagDeepFlavB', branchflavour = 'hadronFlavour', label = "", isFastSim = False, year = 2017, SFmeasReg = "mujets", minptlow = 20, minpthigh = 30, maxeta = 2.4, debug = False):

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
        self.jecs = ["", "_jesTotalUp", "_jesTotalDown", "_jerUp", "_jerDown"]

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

        for jecVar in self.jecs:
            self.wrappedOutputTree.branch("bTagWeight" + self.label + jecVar , "F")
        return


    def analyze(self, event):
        self.event = event
        self.ret.clear()
        all_jets  = [j for j in Collection(event, "Jet")]
        self.jets = []
        if event.nJetSel30_Recl >= 5:
            self.jets    = [all_jets[event.iJetSel30_Recl[j]] for j in xrange(5)]
        else:
            self.jets    = [all_jets[event.iJetSel30_Recl[j]] for j in xrange(event.nJetSel30_Recl)]

        self.computeWeights()

        writeOutput(self, self.ret)
        return True


    def computeWeights(self):
        for jecVar in self.jecs:
            mcTag     = 1
            mcNoTag   = 1
            dataTag   = 1
            dataNoTag = 1
            sysHFup   = 1
            sysHFdn   = 1
            sysLFup   = 1
            sysLFdn   = 1

            for jet in self.jets:
                flavour = getattr(jet, self.branchflavour) if hasattr(jet, self.branchflavour) else jet.mcFlavour
                jet.pt = getattr(jet, "pt" + jecVar)

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

                    elif jecVar == "":
                        sysHFup *= eff*SF[0]
                        sysHFdn *= eff*SF[0]
                        sysLFup *= eff*SF[1]
                        sysLFdn *= eff*SF[2]
                else:
                    mcNoTag   *= (1 - eff      )
                    dataNoTag *= (1 - eff*SF[0])

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

            central = (dataNoTag * dataTag ) / ( mcNoTag * mcTag )

            self.ret["bTagWeight" + self.label + jecVar] = central


            # b-tagging & mistagging eff. unc. varied weights
            if jecVar == "":
                self.ret["bTagWeight" + self.label + "_btag_Up"]   = sysHFup / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_btag_Dn"]   = sysHFdn / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_Up"] = sysLFup / ( mcNoTag * mcTag )
                self.ret["bTagWeight" + self.label + "_mistag_Dn"] = sysLFdn / ( mcNoTag * mcTag )
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
        eta_cutoff = min(2.39, abs(eta))

        theReader  = [self.reader_b, self.reader_c, self.reader_l][flavour]

        SF   = theReader.eval_auto_bounds("central", flavour, eta_cutoff, pt_cutoff)
        SFup = theReader.eval_auto_bounds("up",      flavour, eta_cutoff, pt_cutoff)
        SFdn = theReader.eval_auto_bounds("down",    flavour, eta_cutoff, pt_cutoff)
        return [SF, SFup, SFdn]


    def pogFlavor(self, hadronFlavor):
        match = {5:0, 4:1, 0:2}
        if hadronFlavor in match.keys(): return match[hadronFlavor]
        return 2

