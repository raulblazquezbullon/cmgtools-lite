from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
from CMGTools.TTHAnalysis.tools.mvaTool import *
from copy import deepcopy
from CMGTools.TTHAnalysis.tools.nanoAOD.TopRun2_modules import jecGroups

scaffconst = """def initCustom{var}(self):
    self.MVAs  = {{}}

    setattr(self, "vars_1j1t" + "{var}", ([
        MVAVar("train_nloosejets",                  func = lambda ev : getattr(ev, "nJetSel20{var}_Recl")),
        #MVAVar("train_nbloosejets",                 func = lambda ev : getattr(ev, "nBJetSelMedium20{var}_Recl")),
        #MVAVar("train_lep1lep2jet1met_pt",          func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_Pt" + {var})),
        #MVAVar("train_httot",                       func = lambda ev : getattr(ev, "HTtot"        + {var})),
        MVAVar("train_jet1_pt",                     func = lambda ev : getattr(ev, "Jet1_Pt"      + "{var}")),
        MVAVar("train_loosejet1_pt",                func = lambda ev : getattr(ev, "JetLoose1_Pt" + "{var}") if (getattr(ev, "nJetSel20{var}_Recl") > 0) else 0.0),
        #MVAVar("train_lep1lep2jet1met_ptOVERhttot", func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_PtOverHTtot" + "{var}")),
        MVAVar("train_lep1lep2jet1met_m",           func = lambda ev : getattr(ev, "Lep1Lep2Jet1MET_M"       + "{var}")),
        MVAVar("train_lep1lep2jet1_c",              func = lambda ev : getattr(ev, "Lep1Lep2Jet1_C"          + "{var}")),
        #MVAVar("train_htlepOVERhttot",              func = lambda ev : getattr(ev, "Lep1_PtLep2_PtOverHTtot" + "{var}")),
        MVAVar("train_lep1lep2jet1_pt",             func = lambda ev : getattr(ev, "Lep1Lep2Jet1_Pt"         + "{var}")),
        ]))

    setattr(self, "vars_2j1t" + "{var}", ([
        MVAVar("train_jet2_pt",          func = lambda ev : getattr(ev, "Jet2_Pt"          + "{var}")),
        MVAVar("train_lep1jet1_dr",      func = lambda ev : getattr(ev, "Lep1Jet1_DR"      + "{var}")),
        MVAVar("train_lep12jet12_dr",    func = lambda ev : getattr(ev, "Lep12Jet12_DR"    + "{var}")),
        #MVAVar("train_lep12jet12met_dr", func = lambda ev : getattr(ev, "Lep12Jet12MET_DR" + "{var}")),
    ]))


    mvas_path_1j1t = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_05_nuevopostproc/"
    mvas_path_2j1t = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/2021_05_nuevopostproc/"
    path_tmvaBDT_1j1b = mvas_path_1j1t + "/tmvaBDT_1j1t/weights/TMVAClassification_GradBoost_2000_0.01.weights.xml"
    path_tmvaBDT_2j1b = mvas_path_2j1t + "/tmvaBDT_2j1t/weights/TMVAClassification_GradBoost_200_005_4.weights.xml"

    self.MVAs["tmvaBDT_1j1b" + "{var}"] = MVATool("BDT", path_tmvaBDT_1j1b, getattr(self, "vars_1j1t" + "{var}"))
    self.MVAs["tmvaBDT_2j1b" + "{var}"] = MVATool("BDT", path_tmvaBDT_2j1b, getattr(self, "vars_2j1t" + "{var}"))"""

scaffbegin = """def beginCustomFile{var}(self, inputFile, outputFile, inputTree, wrappedOutputTree):
    self.wrappedOutputTree = wrappedOutputTree
    for out in self.MVAs.keys():
        self.wrappedOutputTree.branch(out, 'F')
    return"""

scaffan = """def analyzeCustom{var}(self, event):
    outdict = dict([ (name, mva(event)) for name, mva in self.MVAs.iteritems()])
    writeOutput(self, outdict)
    return True"""



exec(scaffconst.format(var = ""))
exec(scaffbegin.format(var = ""))
exec(scaffan.format(var = ""))

globals()['MVA_tWRun2_new_'] = type('MVA_tWRun2_new_', (Module,), {'__init__'  : globals()['initCustom'],
                                                                   "beginFile" : globals()['beginCustomFile'],
                                                                   "analyze"   : globals()['analyzeCustom'],})
#tmpstr = "MVA_tWRun2_new_{v}{sv} = lambda : type('MVA_tWRun2_new_{v}{sv}', (Module,), {{'__init__'  : initCustom_{v}{sv}, 'beginFile' : beginCustomFile_{v}{sv}, 'analyze' : analyzeCustom_{v}{sv},}})()"
#eval(tmpstr.format(v = "", sv = ""))

for var in (['jesTotal', 'jer'] + ['jes%s'%v for v in jecGroups] + ["jer%i"%i for i in range(6)] + ["mu"]):
    for subvar in ["Up", "Down"]:
        #print var + subvar
        exec(scaffconst.format(var =  "_" + var + subvar))
        exec(scaffbegin.format(var =  "_" + var + subvar))
        exec(scaffan.format(var    =  "_" + var + subvar))

        globals()['MVA_tWRun2_new_' + var + subvar] = type('MVA_tWRun2_new_' + var + subvar, (Module,), {'__init__'  : globals()['initCustom_' + var + subvar],
                                                                                                         "beginFile" : globals()['beginCustomFile_' + var + subvar],
                                                                                                         "analyze"   : globals()['analyzeCustom_' + var + subvar],})
        #eval(tmpstr.format(v = var, sv = subvar))

del var, subvar
#print dir()
