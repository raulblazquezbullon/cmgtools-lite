from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
from CMGTools.TTHAnalysis.tools.mvaTool import *


def obtainIndex(event, selbranch, index):
    theval = getattr(event, selbranch)
    return int(theval[index])



class MVA_tWRun2(Module):
    def __init__(self, isData = False, jecvars = ["jer", "jesTotal"], lepvars = ["mu"]):
        self.MVAs = {}


        self.systsJEC   = {0: ""}
        self.systsLepEn = {}
        if isData:
            jecvars = []
            lepvars = []

        if   len(jecvars):
            for i, var in enumerate(jecvars):
                self.systsJEC[i+1]    = "_%sUp"%var
                self.systsJEC[-(i+1)] = "_%sDown"%var
        if   len(lepvars):
            for i, var in enumerate(lepvars):
                self.systsLepEn[i+1]    = "_%sUp"%var
                self.systsLepEn[-(i+1)] = "_%sDown"%var


        for delta,sys in self.systsJEC.iteritems():
            setattr(self, "vars_1j1t" + sys, [
                MVAVar("train_nloosejets",                  func = lambda ev : getattr(ev, "nJetSel20{v}_Recl".format(v = sys))),
                #MVAVar("train_nbloosejets",                 func = lambda ev : getattr(ev, "nBJetSelMedium20{v}_Recl".format(v = sys))),
                #MVAVar("train_lep1lep2jet1met_pt",          func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_Pt" + sys)),
                #MVAVar("train_httot",                       func = lambda ev : getattr(ev, "HTtot" + sys)),
                MVAVar("train_jet1_pt",                     func = lambda ev : getattr(ev, "Jet1_Pt" + sys)),
                MVAVar("train_loosejet1_pt",                func = lambda ev : getattr(ev, "JetLoose1_Pt" + sys) if (getattr(ev, "nJetSel20{v}_Recl".format(v = sys)) > 0) else 0.0),
                #MVAVar("train_lep1lep2jet1met_ptOVERhttot", func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_PtOverHTtot" + sys)),
                MVAVar("train_lep1lep2jet1met_m",           func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_M" + sys)),
                MVAVar("train_lep1lep2jet1_c",              func = lambda ev : getattr(ev, "Lep1Lep2Jet1_C" + sys)),
                #MVAVar("train_htlepOVERhttot",              func = lambda ev : getattr(ev, "Lep1_PtLep2_PtOverHTtot" + sys)),
                MVAVar("train_lep1lep2jet1_pt",             func = lambda ev : getattr(ev, "Lep1Lep2Jet1_Pt" + sys)),
                ])

            setattr(self, "vars_2j1t" + sys, [
                MVAVar("train_jet2_pt",          func = lambda ev : getattr(ev, "Jet2_Pt" + sys)),
                MVAVar("train_lep1jet1_dr",      func = lambda ev : getattr(ev, "Lep1Jet1_DR" + sys)),
                MVAVar("train_lep12jet12_dr",    func = lambda ev : getattr(ev, "Lep12Jet12_DR" + sys)),
                #MVAVar("train_lep12jet12met_dr", func = lambda ev : getattr(ev, "Lep12Jet12MET_DR" + sys)),
            ])

        for delta,sys in self.systsLepEn.iteritems():
            setattr(self, "vars_1j1t" + sys, [
                MVAVar("train_nloosejets",                  func = lambda ev : getattr(ev, "nJetSel20{v}_Recl".format(v = sys))),
                #MVAVar("train_nbloosejets",                 func = lambda ev : getattr(ev, "nBJetSelMedium20{v}_Recl".format(v = sys))),
                #MVAVar("train_lep1lep2jet1met_pt",          func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_Pt" + sys)),
                #MVAVar("train_httot",                       func = lambda ev : getattr(ev, "HTtot" + sys)),
                MVAVar("train_jet1_pt",                     func = lambda ev : getattr(ev, "Jet1_Pt" + sys)),
                MVAVar("train_loosejet1_pt",                func = lambda ev : getattr(ev, "JetLoose1_Pt" + sys) if (getattr(ev, "nJetSel20{v}_Recl".format(v = sys)) > 0) else 0.0),
                #MVAVar("train_lep1lep2jet1met_ptOVERhttot", func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_PtOverHTtot" + sys)),
                MVAVar("train_lep1lep2jet1met_m",           func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_M" + sys)),
                MVAVar("train_lep1lep2jet1_c",              func = lambda ev : getattr(ev, "Lep1Lep2Jet1_C" + sys)),
                #MVAVar("train_htlepOVERhttot",              func = lambda ev : getattr(ev, "Lep1_PtLep2_PtOverHTtot" + sys)),
                MVAVar("train_lep1lep2jet1_pt",             func = lambda ev : getattr(ev, "Lep1Lep2Jet1_Pt" + sys)),
                ])

            setattr(self, "vars_2j1t" + sys, [
                MVAVar("train_jet2_pt",          func = lambda ev : getattr(ev, "Jet2_Pt" + sys)),
                MVAVar("train_lep1jet1_dr",      func = lambda ev : getattr(ev, "Lep1Jet1_DR" + sys)),
                MVAVar("train_lep12jet12_dr",    func = lambda ev : getattr(ev, "Lep12Jet12_DR" + sys)),
                #MVAVar("train_lep12jet12met_dr", func = lambda ev : getattr(ev, "Lep12Jet12MET_DR" + sys)),
            ])

        mvas_path = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/tw_MVAS_asoto"

        #path_SergioBDT_1j1b = mvas_path + "/2018_00_00_SergioBDT/bdt1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
        #path_SergioBDT_2j1b = mvas_path + "/2018_00_00_SergioBDT/bdt2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"

        #path_tmvaBDT_1j1b = mvas_path + "/2020_07_13_run2/tmvaBDT_1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
        #path_tmvaBDT_2j1b = mvas_path + "/2020_07_13_run2/tmvaBDT_2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"

        path_tmvaBDT_1j1b = mvas_path + "/tmvaBDT_1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
        path_tmvaBDT_2j1b = mvas_path + "/tmvaBDT_2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"


        for delta,sys in self.systsJEC.iteritems():
            self.MVAs["tmvaBDT_1j1b" + sys] = MVATool("BDT",  path_tmvaBDT_1j1b, getattr(self, "vars_1j1t" + sys))
            self.MVAs["tmvaBDT_2j1b" + sys] = MVATool("2j1b", path_tmvaBDT_2j1b, getattr(self, "vars_2j1t" + sys))
        for delta,sys in self.systsLepEn.iteritems():
            self.MVAs["tmvaBDT_1j1b" + sys] = MVATool("BDT",  path_tmvaBDT_1j1b, getattr(self, "vars_1j1t" + sys))
            self.MVAs["tmvaBDT_2j1b" + sys] = MVATool("2j1b", path_tmvaBDT_2j1b, getattr(self, "vars_2j1t" + sys))

        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        for out in self.MVAs.keys():
            self.wrappedOutputTree.branch(out, 'F')
        return


    def analyze(self, event):
        writeOutput(self, dict([ (name, mva(event)) for name, mva in self.MVAs.iteritems()]))
        return True
