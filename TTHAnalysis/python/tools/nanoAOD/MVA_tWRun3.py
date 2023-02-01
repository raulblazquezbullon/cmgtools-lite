from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
from CMGTools.TTHAnalysis.tools.mvaTool import *
from copy import deepcopy
from CMGTools.TTHAnalysis.tools.nanoAOD.TopRun3_modules import jecGroupsFull

scaffconst = """def initCustom{var}(self):
    self.MVAs  = {{}}

    setattr(self, "vars_1j1t" + "{var}", ([
        MVAVar("min(train_nloosejets,1)",           func = lambda ev : min(getattr(ev, "nJetSel20{varjet}_Recl"), 1)),
        MVAVar("train_jet1_pt",                     func = lambda ev : getattr(ev, "Jet1_Pt"      + "{var}")),
        MVAVar("train_loosejet1_pt",                func = lambda ev : getattr(ev, "JetLoose1_Pt" + "{var}") if (getattr(ev, "nJetSel20{varjet}_Recl") > 0) else 0.0),
        MVAVar("train_lep1lep2jet1met_m",           func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_M"       + "{var}")),
        MVAVar("train_lep1lep2jet1_c",              func = lambda ev : getattr(ev, "Lep1Lep2Jet1_C"          + "{var}")),
        MVAVar("train_lep1lep2jet1_pt",             func = lambda ev : getattr(ev, "Lep1Lep2Jet1_Pt"         + "{var}")),
        #MVAVar("train_nbloosejets",                 func = lambda ev : getattr(ev, "nBJetSelMedium20{var}_Recl")),
        #MVAVar("train_lep1lep2jet1met_pt",          func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_Pt" + {var})),
        #MVAVar("train_httot",                       func = lambda ev : getattr(ev, "HTtot"        + {var})),
        #MVAVar("train_lep1lep2jet1met_ptOVERhttot", func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_PtOverHTtot" + "{var}")),
        #MVAVar("train_htlepOVERhttot",              func = lambda ev : getattr(ev, "Lep1_PtLep2_PtOverHTtot" + "{var}")),
        #MVAVar("train_nfwdjet",                     func = lambda ev : getattr(ev, "nFwdJetSel30{varjet}_Recl")),
        #MVAVar("train_nloosejets",                  func = lambda ev : getattr(ev, "nJetSel20{varjet}_Recl")),
        #MVAVar("min(train_nloosejets,2)",           func = lambda ev : min(getattr(ev, "nJetSel20{varjet}_Recl"), 2)),
        ]))

    setattr(self, "vars_2j1t" + "{var}", ([
        MVAVar("train_jet2_pt",          func = lambda ev : getattr(ev, "Jet2_Pt"          + "{var}")),
        MVAVar("train_lep1jet1_dr",      func = lambda ev : getattr(ev, "Lep1Jet1_DR"      + "{var}")),
        MVAVar("train_lep12jet12_dr",    func = lambda ev : getattr(ev, "Lep12Jet12_DR"    + "{var}")),
        #MVAVar("train_lep12jet12met_dr", func = lambda ev : getattr(ev, "Lep12Jet12MET_DR" + "{var}")),
    ]))


    #mvas_path1 = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_tW_MVAs/tw_MVAS_Pruebas_1j1t/2021-10-15_DYTrainDiv2"
    #mvas_path2 = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_tW_MVAs/tw_MVAS_Pruebas_2j1t/2021-10-15_DYTrainDiv2"

    #path_tmvaBDT_1j1b = mvas_path1 + "/tmvaBDT_1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
    #path_tmvaBDT_2j1b = mvas_path2 + "/tmvaBDT_2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"

    #mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_05_nuevopostproc/"
    #mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_09_03_DYbueno/"
    #mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_09_20_DYweight5/"
    #mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_09_20_DYweight50/"
    #mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_11_29_sinnloosejets/"
    #mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_11_29_sinnloosejetsniloosejetpt/"
    #mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_12_01_nloosejetBin01geq2/"
    mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_12_01_nloosejetBin0geq1/"
    #mvas_path = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_12_01_nloosejetBin0geq1SinLooseJet1/"

    path_tmvaBDT_1j1b = mvas_path + "/tmvaBDT_1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
    path_tmvaBDT_2j1b = mvas_path + "/tmvaBDT_2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"
    #path_tmvaBDT_1j1b = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_09_20_DYweight5NjetFWD/tmvaBDT_1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
    #path_tmvaBDT_2j1b = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_05_nuevopostproc/tmvaBDT_2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"


    self.MVAs["tmvaBDT_1j1b" + "{var}"] = MVATool("BDT", path_tmvaBDT_1j1b, getattr(self, "vars_1j1t" + "{var}"))
    self.MVAs["tmvaBDT_2j1b" + "{var}"] = MVATool("BDT", path_tmvaBDT_2j1b, getattr(self, "vars_2j1t" + "{var}"))"""

scaffbegin = """def beginCustomFile{var}(self, inputFile, outputFile, inputTree, wrappedOutputTree):
    self.wrappedOutputTree = wrappedOutputTree
    for out in self.MVAs.keys():
        self.wrappedOutputTree.branch(out, 'F')
    return"""

scaffan = """def analyzeCustom{var}(self, event):
    outdict = dict([ (name, mva(event)) for name, mva in self.MVAs.items()])
    writeOutput(self, outdict)
    return True"""



exec(scaffconst.format(var = "", varjet = ""))
exec(scaffbegin.format(var = ""))
exec(scaffan.format(var = ""))

globals()['MVA_tWRun3_'] = type('MVA_tWRun3_', (Module,), {'__init__'  : globals()['initCustom'],
                                                                   "beginFile" : globals()['beginCustomFile'],
                                                                   "analyze"   : globals()['analyzeCustom'],})
#tmpstr = "MVA_tWRun2_new_{v}{sv} = lambda : type('MVA_tWRun2_new_{v}{sv}', (Module,), {{'__init__'  : initCustom_{v}{sv}, 'beginFile' : beginCustomFile_{v}{sv}, 'analyze' : analyzeCustom_{v}{sv},}})()"
#eval(tmpstr.format(v = "", sv = ""))

for var in (['jesTotal', 'jer'] + ['jes' + v for v in jecGroupsFull] + ["jer%i"%i for i in range(6)] + ["mu"] + ["unclustEn"]):
    for subvar in ["Up", "Down"]:
        #print var + subvar
        exec(scaffconst.format(var =  "_" + var + subvar, varjet = ("_" + var + subvar) if "unclustEn" not in var else ""))
        exec(scaffbegin.format(var =  "_" + var + subvar))
        exec(scaffan.format(var    =  "_" + var + subvar))

        globals()['MVA_tWRun3_' + var + subvar] = type('MVA_tWRun3_' + var + subvar, (Module,), {'__init__'  : globals()['initCustom_' + var + subvar],
                                                                                                         "beginFile" : globals()['beginCustomFile_' + var + subvar],
                                                                                                         "analyze"   : globals()['analyzeCustom_' + var + subvar],})
        #eval(tmpstr.format(v = var, sv = subvar))

del var, subvar
#print dir()
