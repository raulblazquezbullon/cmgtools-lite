from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
from CMGTools.TTHAnalysis.tools.mvaTool import *


def obtainIndex(event, selbranch, index):
    theval = getattr(event, selbranch)
    return int(theval[index])



class MVA_tWRun2_pruebas(Module):
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


        for delta,sys in self.systsJEC.items():
            print(sys)
            setattr(self, "vars_1j1t" + sys, [
                MVAVar("train_nloosejets",                  func = lambda ev : getattr(ev, "nJetSel20_jesAbsoluteUp_Recl")),
                #MVAVar("train_nbloosejets",                 func = lambda ev : getattr(ev, "nBJetSelMedium20{v}_Recl".format(v = sys))),
                #MVAVar("train_lep1lep2jet1met_pt",          func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_Pt" + sys)),
                #MVAVar("train_httot",                       func = lambda ev : getattr(ev, "HTtot" + sys)),
                MVAVar("train_jet1_pt",                     func = lambda ev : getattr(ev, "Jet1_Pt_jesAbsoluteUp")),
                MVAVar("train_loosejet1_pt",                func = lambda ev : getattr(ev, "JetLoose1_Pt_jesAbsoluteUp") if (getattr(ev, "nJetSel20_jesAbsoluteUp_Recl") > 0) else 0.0),
                #MVAVar("train_lep1lep2jet1met_ptOVERhttot", func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_PtOverHTtot" + sys)),
                MVAVar("train_lep1lep2jet1met_m",           func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_M_jesAbsoluteUp")),
                MVAVar("train_lep1lep2jet1_c",              func = lambda ev : getattr(ev, "Lep1Lep2Jet1_C_jesAbsoluteUp")),
                #MVAVar("train_htlepOVERhttot",              func = lambda ev : getattr(ev, "Lep1_PtLep2_PtOverHTtot" + sys)),
                MVAVar("train_lep1lep2jet1_pt",             func = lambda ev : getattr(ev, "Lep1Lep2Jet1_Pt_jesAbsoluteUp")),
                ])

            setattr(self, "vars_2j1t" + sys, [
                MVAVar("train_jet2_pt",          func = lambda ev : getattr(ev, "Jet2_Pt_jesAbsoluteUp" + sys)),
                MVAVar("train_lep1jet1_dr",      func = lambda ev : getattr(ev, "Lep1Jet1_DR_jesAbsoluteUp" + sys)),
                MVAVar("train_lep12jet12_dr",    func = lambda ev : getattr(ev, "Lep12Jet12_DR_jesAbsoluteUp" + sys)),
                #MVAVar("train_lep12jet12met_dr", func = lambda ev : getattr(ev, "Lep12Jet12MET_DR" + sys)),
            ])

        for delta,sys in self.systsLepEn.items():
            setattr(self, "vars_1j1t" + sys, [
                MVAVar("train_nloosejets",                  func = lambda ev : getattr(ev, "nJetSel20_jesAbsoluteUp_Recl")),
                #MVAVar("train_nbloosejets",                 func = lambda ev : getattr(ev, "nBJetSelMedium20{v}_Recl".format(v = sys))),
                #MVAVar("train_lep1lep2jet1met_pt",          func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_Pt" + sys)),
                #MVAVar("train_httot",                       func = lambda ev : getattr(ev, "HTtot" + sys)),
                MVAVar("train_jet1_pt",                     func = lambda ev : getattr(ev, "Jet1_Pt_jesAbsoluteUp")),
                MVAVar("train_loosejet1_pt",                func = lambda ev : getattr(ev, "JetLoose1_Pt_jesAbsoluteUp") if (getattr(ev, "nJetSel20_jesAbsoluteUp_Recl") > 0) else 0.0),
                #MVAVar("train_lep1lep2jet1met_ptOVERhttot", func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_PtOverHTtot" + sys)),
                MVAVar("train_lep1lep2jet1met_m",           func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_M_jesAbsoluteUp")),
                MVAVar("train_lep1lep2jet1_c",              func = lambda ev : getattr(ev, "Lep1Lep2Jet1_C_jesAbsoluteUp")),
                #MVAVar("train_htlepOVERhttot",              func = lambda ev : getattr(ev, "Lep1_PtLep2_PtOverHTtot" + sys)),
                MVAVar("train_lep1lep2jet1_pt",             func = lambda ev : getattr(ev, "Lep1Lep2Jet1_Pt_jesAbsoluteUp")),
                ])

            setattr(self, "vars_2j1t" + sys, [
                MVAVar("train_jet2_pt",          func = lambda ev : getattr(ev, "Jet2_Pt_jesAbsoluteUp")),
                MVAVar("train_lep1jet1_dr",      func = lambda ev : getattr(ev, "Lep1Jet1_DR_jesAbsoluteUp")),
                MVAVar("train_lep12jet12_dr",    func = lambda ev : getattr(ev, "Lep12Jet12_DR_jesAbsoluteUp")),
                #MVAVar("train_lep12jet12met_dr", func = lambda ev : getattr(ev, "Lep12Jet12MET_DR" + sys)),
            ])

        print("")
        print(dir(self))
        for el in dir(self):
            if "vars" in el:
                print(getattr(self, el))


        #mvas_path1 = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_tW_MVAs/tw_MVAS_Pruebas_1j1t/2021-10-15_DYTrainDiv2"
        #mvas_path2 = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_tW_MVAs/tw_MVAS_Pruebas_2j1t/2021-10-15_DYTrainDiv2"

        mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_05_nuevopostproc/"
        #mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_09_03_DYbueno/"
#        mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_09_20_DYweight5/"


        #path_SergioBDT_1j1b = mvas_path + "/2018_00_00_SergioBDT/bdt1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
        #path_SergioBDT_2j1b = mvas_path + "/2018_00_00_SergioBDT/bdt2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"

        #path_tmvaBDT_1j1b = mvas_path + "/2020_07_13_run2/tmvaBDT_1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
        #path_tmvaBDT_2j1b = mvas_path + "/2020_07_13_run2/tmvaBDT_2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"

        path_tmvaBDT_1j1b = mvas_path + "/tmvaBDT_1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
        path_tmvaBDT_2j1b = mvas_path + "/tmvaBDT_2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"


        for delta,sys in self.systsJEC.items():
            self.MVAs["tmvaBDT_1j1b" + sys] = MVATool("BDT", path_tmvaBDT_1j1b, getattr(self, "vars_1j1t" + sys))
            self.MVAs["tmvaBDT_2j1b" + sys] = MVATool("BDT", path_tmvaBDT_2j1b, getattr(self, "vars_2j1t" + sys))
        for delta,sys in self.systsLepEn.items():
            self.MVAs["tmvaBDT_1j1b" + sys] = MVATool("BDT", path_tmvaBDT_1j1b, getattr(self, "vars_1j1t" + sys))
            self.MVAs["tmvaBDT_2j1b" + sys] = MVATool("BDT", path_tmvaBDT_2j1b, getattr(self, "vars_2j1t" + sys))

        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        for out in list(self.MVAs.keys()):
            self.wrappedOutputTree.branch(out, 'F')
        return


    def analyze(self, event):
        outdict = dict([ (name, mva(event)) for name, mva in self.MVAs.items()])
        print("B", outdict)
        writeOutput(self, outdict)
        return True
