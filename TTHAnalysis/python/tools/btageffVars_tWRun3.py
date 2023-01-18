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
from CMGTools.TTHAnalysis.tools.nanoAOD.TopRun3_modules import ch, tags, emass


class btageffVars_tWRun2(Module):
    def __init__(self, year_ = 2016, lepCollection = "LepGood", algo_ = 'deepjet', wp_ = 1, csv_ = None, SFmeasReg = "mujets", isFastSim = False):
        self.selecsdict = {}
        self.selecsdict[2016] = lambda jet: jet.jetId > 0 and jet.eta < 2.4
        self.selecsdict[2017] = lambda jet: jet.jetId > 1 and jet.eta < 2.4
        self.selecsdict[2018] = lambda jet: jet.jetId > 1 and jet.eta < 2.4
        self.selecsdict[2022] = lambda jet: jet.jetId > 1 and jet.eta < 2.4
        self.lc        = lepCollection
        self.isSet     = False
        self.year      = year_
        self.selection = lambda j : True
        self.deltaRcut = 0.4
        self.nominaljecscaff = "_nom"
        self.debug = False
        
        if isinstance(algo_, list):
            self.algo = algo_
        else:
            self.algo = [algo_]
            
        self.algodict   = {"deepjet" : "btagDeepFlavB",
                           "deepcsv" : "btagDeepB",}
        
        self.branchbtag = [self.algodict[alg] for alg in self.algo]
        self.wp         = {0 : "L", 1 : "M", 2 : "T"}[wp_]
        
        self.cutdict = {}
        self.cutdict["csvv2"] = {}; self.cutdict["deepcsv"] = {}; self.cutdict["deepjet"] = {}
        self.cutdict["csvv2"][2016]   = {"L" : 0.5803, "M" : 0.8838, "T": 0.9693}
        self.cutdict["deepcsv"][2016] = {"L" : 0.2217, "M" : 0.6321, "T": 0.8953}
        self.cutdict["deepcsv"][2017] = {"L" : 0.1522, "M" : 0.4941, "T": 0.8001}
        self.cutdict["deepcsv"][2018] = {"L" : 0.1241, "M" : 0.4184, "T": 0.7527}
        self.cutdict["deepcsv"][2022] = {"L" : 0.1208, "M" : 0.4168, "T": 0.7665}
        self.cutdict["deepjet"][2016] = {"L" : 0.0614, "M" : 0.3093, "T": 0.7221}
        self.cutdict["deepjet"][2017] = {"L" : 0.0521, "M" : 0.3033, "T": 0.7489}
        self.cutdict["deepjet"][2018] = {"L" : 0.0494, "M" : 0.2770, "T": 0.7264}
        self.cutdict["deepjet"][2022] = {"L" : 0.0490, "M" : 0.2783, "T": 0.7100}
        
        self.flavdict = {5 : "B",
                         4 : "C",
                         0 : "L"}
        
        self.calib    = []
        self.reader_b = []
        self.reader_c = []
        self.reader_l = []
        vector = r.vector('string')()
        vector.push_back("up")
        vector.push_back("down")
        
        if csv_ == None: raise RuntimeError("FATAL: no csv given.")
        
        for iA in range(len(self.algo)):
            self.calib.append(r.BTagCalibration(self.algo[iA], csv_[iA]))

            self.reader_b.append(r.BTagCalibrationReader(wp_, "central", vector))
            self.reader_b[-1].load(self.calib[-1], 0, SFmeasReg if not isFastSim else "fastsim")

            self.reader_c.append(r.BTagCalibrationReader(wp_, "central", vector))
            self.reader_c[-1].load(self.calib[-1], 1, SFmeasReg if not isFastSim else "fastsim")

            self.reader_l.append(r.BTagCalibrationReader(wp_, "central", vector))
            self.reader_l[-1].load(self.calib[-1], 2, "incl" if not isFastSim else "fastsim")
        return


    # New interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        
        for el in ["B", "C", "L"]:
            self.wrappedOutputTree.branch("nEffSFJet{f}".format(   f = el), 'I')
            self.wrappedOutputTree.branch("EffSFJet{f}_Pt".format( f = el), 'F', lenVar = "nEffSFJet{f}".format(f = el))
            self.wrappedOutputTree.branch("EffSFJet{f}_Eta".format(f = el), 'F', lenVar = "nEffSFJet{f}".format(f = el))
            for alg in self.algo:
                self.wrappedOutputTree.branch("EffSFJet{f}_{a}Istag".format(f = el, a = alg), 'F', lenVar = "nEffSFJet{f}".format(f = el))
                self.wrappedOutputTree.branch("EffSFJet{f}_{a}SF".format(   f = el, a = alg), 'F', lenVar = "nEffSFJet{f}".format(f = el))
                self.wrappedOutputTree.branch("EffSFJet{f}_{a}SFup".format( f = el, a = alg), 'F', lenVar = "nEffSFJet{f}".format(f = el))
                self.wrappedOutputTree.branch("EffSFJet{f}_{a}SFdn".format( f = el, a = alg), 'F', lenVar = "nEffSFJet{f}".format(f = el))
        return

    def areMyJetsCleanAndGood(self, thejets, theleps):
        clist = [self.selection(jet) for jet in thejets]
        if self.debug: print("[pythonCleaningTopRun2::areMyJetsCleanAndGood] bad/good clist:", clist)

        for iL in range(len(theleps)):
            mindr = -1; best = -1;
            for iJ in range(len(thejets)):
                tmpdr = abs(theleps[iL].p4().DeltaR(thejets[iJ].p4()))
                if (mindr < 0 or tmpdr < mindr):
                    mindr = tmpdr
                    best = iJ
            if (best > -1 and mindr < self.deltaRcut):
                clist[best] = False
        if self.debug: print("[pythonCleaningTopRun2::areMyJetsCleanAndGood] final clist:", clist)
        return clist

    def configureCleaning(self, ev):
        if   hasattr(ev, "year"):
            self.selection = self.selecsdict[ev.year]
            self.year_     = ev.year
        elif self.year != None:
            self.selection = self.selecsdict[self.year]
        return


    def analyze(self, event):
        if not self.isSet:
            if self.debug: print("[pythonCleaningTopRun2::analyze] Configuring settings")
            self.configureCleaning(event)
            self.isSet = True
        
        self.jets    = [j for j in NanoAODCollection(event, "Jet")]
        self.jets_4m = [j.p4() for j in self.jets]
        self.leps    = [l for l in NanoAODCollection(event, self.lc)]
        writeOutput(self, self.run(event, NanoAODCollection))
        return True


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
    
    
    def getSF(self, pt, eta, mcFlavour, iR):
        flavour    = self.pogFlavor(mcFlavour)
        pt_cutoff  = max(20. , min(999., pt))
        eta_cutoff = min(2.39 if flavour == 2 else 2.49, abs(eta))

        theReader  = [self.reader_b[iR], self.reader_c[iR], self.reader_l[iR]][flavour]

        SF   = theReader.eval_auto_bounds("central", flavour, eta_cutoff, pt_cutoff)
        SFup = theReader.eval_auto_bounds("up",      flavour, eta_cutoff, pt_cutoff)
        SFdn = theReader.eval_auto_bounds("down",    flavour, eta_cutoff, pt_cutoff)
        return [SF, SFup, SFdn]


    # Common processing
    def run(self, event, Collection):
        # ============================ Definitions and declarations
        allret  = {}

        # ============================ Initialisations
        for el in ["B", "C", "L"]:
            allret["nEffSFJet{f}".format(   f = el)] = 0
            allret["EffSFJet{f}_Pt".format( f = el)] = []
            allret["EffSFJet{f}_Eta".format(f = el)] = []
            for alg in self.algo:
                allret["EffSFJet{f}_{a}Istag".format(f = el, a = alg)] = []
                allret["EffSFJet{f}_{a}SF".format(   f = el, a = alg)] = []
                allret["EffSFJet{f}_{a}SFup".format( f = el, a = alg)] = []
                allret["EffSFJet{f}_{a}SFdn".format( f = el, a = alg)] = []

        
        # ============================ Execution
        cleanedandgoodjets = {}
        cleanedandgoodjets[""] = self.areMyJetsCleanAndGood(self.jets, self.leps)
            
        for iJ in range(len(self.jets)):
            if cleanedandgoodjets[""][iJ]:
                thept = getattr(self.jets[iJ], "pt" + self.nominaljecscaff)
                if thept <= 20: continue
                thefl = self.jets[iJ].hadronFlavour
                allret["nEffSFJet{f}".format(   f = self.flavdict[thefl])] += 1
                allret["EffSFJet{f}_Pt".format( f = self.flavdict[thefl])].append(thept)
                allret["EffSFJet{f}_Eta".format(f = self.flavdict[thefl])].append(self.jets[iJ].eta)
                
                for iA in range(len(self.algo)):
                    SF = self.getSF(thept, self.jets[iJ].eta, thefl, iA)
                    allret["EffSFJet{f}_{a}Istag".format(f = self.flavdict[thefl], a = self.algo[iA])].append(int(getattr(self.jets[iJ], self.branchbtag[iA]) > self.cutdict[self.algo[iA]][self.year][self.wp]))
                    allret["EffSFJet{f}_{a}SF".format(   f = self.flavdict[thefl], a = self.algo[iA])].append(SF[0])
                    allret["EffSFJet{f}_{a}SFup".format( f = self.flavdict[thefl], a = self.algo[iA])].append(SF[1])
                    allret["EffSFJet{f}_{a}SFdn".format( f = self.flavdict[thefl], a = self.algo[iA])].append(SF[2])
                
        return allret
