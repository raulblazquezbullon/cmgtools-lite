from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
from CMGTools.TTHAnalysis.tools.mvaTool import *


class MVA_tWRun2(Module):
    def __init__(self):
        self.MVAs = {}
        self.vars_1j1t = [
            MVAVar("TnLooseCentral",        func = lambda ev : max([ev.nJet20_Recl - ev.nJet30_Recl, 0])),
            MVAVar("TnBTotal",              func = lambda ev : ev.nBJetMedium30_Recl),
            MVAVar("TDilepMETJetPt",        func = lambda ev : ev.Lep1Lep2Jet1MET_Pt),
            MVAVar("TTHTtot",               func = lambda ev : ev.HTtot),
            MVAVar("TTJet1_pt",             func = lambda ev : ev.JetSel_Recl_pt[0]),
            MVAVar("TTJetLooseCentralpt",   func = lambda ev : ev.JetSel_ReclLoose_pt[0]),
            MVAVar("TDilepMETJetPt_THTtot", func = lambda ev : ev.Lep1Lep2Jet1MET_Pt / ev.HTtot),
            MVAVar("TMSys",                 func = lambda ev : ev.Lep1Lep2Jet1MET_M),
            MVAVar("TC_jll_v2",             func = lambda ev : ev.Lep1Lep2Jet1_C),
            MVAVar("THTLepOverHT",          func = lambda ev : ev.hasOSSF4l),
            MVAVar("TDilepJetPt",           func = lambda ev : (ev.LepGood_pt[0] + ev.LepGood_pt[1]) / ev.HTtot),
        ]

        self.vars_2j1t = [
            MVAVar("jetPtSubLeading_",      func = lambda ev : ev.JetSel_Recl_pt[1] if nJet30_Recl > 1 else 0),
            MVAVar("deltaRL1_J1_",          func = lambda ev : ev.Lep1Jet1_DR),
            MVAVar("deltaRL1L2_J1J2_",      func = lambda ev : ev.Lep12Jet12_DR),
            MVAVar("deltaRL1L2_metJ1J2_",   func = lambda ev : ev.Lep12Jet12MET_DR),
        ]

        path_SergioBDT_1j1b = "/nfs/fanae/user/sscruz/TW_train/AnalysisPAF/plotter/TW/StableWeights/bdtForTWv4/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
        path_SergioBDT_2j1b = "/nfs/fanae/user/sscruz/TW_jun4/AnalysisPAF/plotter/TW/StableWeights/jul8/bdtForTWv5/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"

        self.MVAs["SergioBDT_1j1b"]       = MVATool("BDT",         path_SergioBDT_1j1b, self.vars_1j1t)
        self.MVAs["SergioBDT_1j1b_JESUp"] = MVATool("BDT_JESUp",   path_SergioBDT_1j1b, self.vars_1j1t)
        self.MVAs["SergioBDT_1j1b_JESDn"] = MVATool("BDT_JESDown", path_SergioBDT_1j1b, self.vars_1j1t)
        self.MVAs["SergioBDT_1j1b_JER"]   = MVATool("BDT_JER",     path_SergioBDT_1j1b, self.vars_1j1t)
        self.MVAs["SergioBDT_2j1b"]       = MVATool("2j1b",        path_SergioBDT_2j1b, self.vars_2j1b)
        self.MVAs["SergioBDT_2j1b_JESUp"] = MVATool("2j1b",        path_SergioBDT_2j1b, self.vars_2j1b)
        self.MVAs["SergioBDT_2j1b_JESDn"] = MVATool("2j1b",        path_SergioBDT_2j1b, self.vars_2j1b)
        self.MVAs["SergioBDT_2j1b_JER"]   = MVATool("2j1b",        path_SergioBDT_2j1b, self.vars_2j1b)

        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        for out in self.MVAs.keys():
            self.wrappedOutputTree.branch(out, 'F')
        return


    def analyze(self, event):
        writeOutput(self, dict([ (name, mva(event)) for name, mva in self.MVAs.iteritems()]))
        return True
