from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
from CMGTools.TTHAnalysis.tools.mvaTool import *


def obtainIndex(event, selbranch, index):
    theval = getattr(event, selbranch)
    return int(theval[index])



class MVA_tWRun2(Module):
    def __init__(self):
        self.MVAs = {}
        self.vars_1j1t = [
            MVAVar("TnLooseCentral",        func = lambda ev : ev.nJetSel20_Recl),
            MVAVar("TnBTotal",              func = lambda ev : ev.nBJetSelMedium30_Recl),
            MVAVar("TDilepMETJetPt",        func = lambda ev : ev.Lep1Lep2Jet1MET_Pt),
            MVAVar("TTHTtot",               func = lambda ev : ev.HTtot),
            MVAVar("TTJet1_pt",             func = lambda ev : ev.Jet1_Pt),
            MVAVar("TTJetLooseCentralpt",   func = lambda ev : ev.JetLoose1_Pt),
            MVAVar("TDilepMETJetPt_THTtot", func = lambda ev : ev.Lep1Lep2Jet1MET_Pt / ev.HTtot),
            MVAVar("TMSys",                 func = lambda ev : ev.Lep1Lep2Jet1MET_M),
            MVAVar("TC_jll_v2",             func = lambda ev : ev.Lep1Lep2Jet1_C),
            MVAVar("THTLepOverHT",          func = lambda ev : (ev.LepGood_pt[0] + ev.LepGood_pt[1]) / ev.HTtot if ev.nLepGood >= 2 else 0),
            MVAVar("TDilepJetPt",           func = lambda ev : ev.Lep1Lep2Jet1_Pt),
        ]

        self.vars_2j1t = [
            #MVAVar("jetPtSubLeading_",      func = lambda ev : ev.Jet_pt[ev.iJetSel30_Recl[1]] if ev.nJetSel30_Recl >= 2 else 0),
            MVAVar("jetPtSubLeading_",      func = lambda ev : ev.Jet2_Pt),
            MVAVar("deltaRL1_J1_",          func = lambda ev : ev.Lep1Jet1_DR),
            MVAVar("deltaRL1L2_J1J2_",      func = lambda ev : ev.Lep12Jet12_DR),
            MVAVar("deltaRL1L2_metJ1J2_",   func = lambda ev : ev.Lep12Jet12MET_DR),
        ]

        mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas"

        path_SergioBDT_1j1b = mvas_path + "/2018_00_00_SergioBDT/bdt1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
        path_SergioBDT_2j1b = mvas_path + "/2018_00_00_SergioBDT/bdt2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"

        self.MVAs["SergioBDT_1j1b"]       = MVATool("BDT",         path_SergioBDT_1j1b, self.vars_1j1t)
        self.MVAs["SergioBDT_1j1b_JESUp"] = MVATool("BDT_JESUp",   path_SergioBDT_1j1b, self.vars_1j1t)
        self.MVAs["SergioBDT_1j1b_JESDn"] = MVATool("BDT_JESDown", path_SergioBDT_1j1b, self.vars_1j1t)
        self.MVAs["SergioBDT_1j1b_JER"]   = MVATool("BDT_JER",     path_SergioBDT_1j1b, self.vars_1j1t)
        self.MVAs["SergioBDT_2j1b"]       = MVATool("2j1b",        path_SergioBDT_2j1b, self.vars_2j1t)
        self.MVAs["SergioBDT_2j1b_JESUp"] = MVATool("2j1b",        path_SergioBDT_2j1b, self.vars_2j1t)
        self.MVAs["SergioBDT_2j1b_JESDn"] = MVATool("2j1b",        path_SergioBDT_2j1b, self.vars_2j1t)
        self.MVAs["SergioBDT_2j1b_JER"]   = MVATool("2j1b",        path_SergioBDT_2j1b, self.vars_2j1t)

        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        for out in self.MVAs.keys():
            self.wrappedOutputTree.branch(out, 'F')
        return


    def analyze(self, event):
        writeOutput(self, dict([ (name, mva(event)) for name, mva in self.MVAs.iteritems()]))
        return True
