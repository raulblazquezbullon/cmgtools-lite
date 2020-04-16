import os, sys
import ROOT as r


# =========================================================================================================================
# ============================================================================================ TRIGGER
# =========================================================================================================================

def _fires(ev, path):
    if "/hasfiredtriggers_cc.so" not in r.gSystem.GetLibraries():
        r.gROOT.ProcessLine(".L %s/src/CMGTools/Production/src/hasfiredtriggers.cc+" % os.environ['CMSSW_BASE'])
    if not hasattr(ev,path): return False

    if ev.run == 1:  # is MC
        return getattr( ev,path )
    else : #if hasattr(ev,"year"):
        return getattr(r, 'fires_%s_%d'%(path,ev.year))( ev.run, getattr(ev,path))
##    else:
##        return getattr(r, 'fires_%s'%(path))( ev.run, getattr(ev,path))


triggerGroups=dict(
    Trigger_5TeV_1e={
        2017 : lambda ev : _fires(ev,'HLT_HIEle20_WPLoose_Gsf') or _fires(ev,'HLT_HIEle17_WPLoose_Gsf')
    },
    Trigger_5TeV_1m={
        2017 : lambda ev : _fires(ev,'HLT_HIL3Mu20') or _fires(ev,'HLT_HIMu17') or _fires(ev,'HLT_HIL3Mu12')
    },
    Trigger_5TeV_2e={
        2017 : lambda ev : _fires(ev,'HLT_HIEle20_Ele12_CaloIdL_TrackIdL_IsoVL_DZ') or _fires(ev,'HLT_HIEle15_Ele8_CaloIdL_TrackIdL_IsoVL')
    },
    Trigger_5TeV_2m={
        2017 : lambda ev : _fires(ev,'HLT_HIL3DoubleMu10')
    },
    Trigger_1e={
        2016 : lambda ev : _fires(ev,'HLT_Ele27_WPTight_Gsf') or _fires(ev,'HLT_Ele25_eta2p1_WPTight_Gsf') or _fires(ev,'HLT_Ele27_eta2p1_WPLoose_Gsf'),
        2017 : lambda ev : _fires(ev,'HLT_Ele32_WPTight_Gsf') or _fires(ev,'HLT_Ele35_WPTight_Gsf'),
        2018 : lambda ev : _fires(ev,'HLT_Ele32_WPTight_Gsf'),
    },
    Trigger_1m={
        2016 : lambda ev : _fires(ev,'HLT_IsoMu24') or _fires(ev,'HLT_IsoTkMu24') or _fires(ev,'HLT_IsoMu22_eta2p1') or _fires(ev,'HLT_IsoTkMu22_eta2p1') or _fires(ev,'HLT_IsoMu22') or _fires(ev,'HLT_IsoTkMu22'),
        2017 : lambda ev : _fires(ev,'HLT_IsoMu24') or _fires(ev,'HLT_IsoMu27'),
        2018 : lambda ev : _fires(ev,'HLT_IsoMu24'),
    },
    Trigger_2e={
        2016 : lambda ev : _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ'),
        2017 : lambda ev : _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL'),
        2018 : lambda ev : _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL'),
    },
    Trigger_2m={
        2016 : lambda ev : _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL') or _fires(ev,'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL') or  _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ') or _fires(ev,'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ'),
        2017 : lambda ev : _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8') or _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8'),
        2018 : lambda ev : _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8'),
    },
    Trigger_em={
        2016 :  lambda ev : _fires(ev, 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL') or _fires(ev,'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ') \
        or _fires(ev, 'HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL') or _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ'),
        2017 :  lambda ev : _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL')\
        or _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ')\
        or _fires(ev,'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ')\
        or _fires(ev,'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ'),
        2018 :  lambda ev : _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL')\
        or _fires(ev,'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ')\
        or _fires(ev,'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ'),
    },
    Trigger_3e={
        2016 : lambda ev : _fires(ev,'HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'),
        2017 : lambda ev : _fires(ev,'HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'),
        2018 : lambda ev : _fires(ev,'HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'), # prescaled in the two years according to https://twiki.cern.ch/twiki/bin/view/CMS/EgHLTRunIISummary#2018
    },
    Trigger_3m={
        2016 : lambda ev : _fires(ev,'HLT_TripleMu_12_10_5'),
        2017 : lambda ev : _fires(ev,'HLT_TripleMu_12_10_5'),
        2018 : lambda ev : _fires(ev,'HLT_TripleMu_12_10_5'),
    },
    Trigger_mee={
        2016 : lambda ev : _fires(ev,'HLT_Mu8_DiEle12_CaloIdL_TrackIdL'),
        2017 : lambda ev : _fires(ev,'HLT_Mu8_DiEle12_CaloIdL_TrackIdL'),
        2018 : lambda ev : _fires(ev,'HLT_Mu8_DiEle12_CaloIdL_TrackIdL'),
    },
    Trigger_mme={
        2016 : lambda ev : _fires(ev,'HLT_DiMu9_Ele9_CaloIdL_TrackIdL'),
        2017 : lambda ev : _fires(ev,'HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ'),
        2018 : lambda ev : _fires(ev,'HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ'),
    },
    Trigger_2lss={
        2016 : lambda ev : ev.Trigger_1e or ev.Trigger_1m or ev.Trigger_2e or ev.Trigger_2m or ev.Trigger_em,
        2017 : lambda ev : ev.Trigger_1e or ev.Trigger_1m or ev.Trigger_2e or ev.Trigger_2m or ev.Trigger_em,
        2018 : lambda ev : ev.Trigger_1e or ev.Trigger_1m or ev.Trigger_2e or ev.Trigger_2m or ev.Trigger_em,
    },
    Trigger_3l={
        2016 : lambda ev : ev.Trigger_2lss or ev.Trigger_3e or ev.Trigger_3m or ev.Trigger_mee or ev.Trigger_mme,
        2017 : lambda ev : ev.Trigger_2lss or ev.Trigger_3e or ev.Trigger_3m or ev.Trigger_mee or ev.Trigger_mme,
        2018 : lambda ev : ev.Trigger_2lss or ev.Trigger_3e or ev.Trigger_3m or ev.Trigger_mee or ev.Trigger_mme,
    },
    Trigger_MET={
        2016 : lambda ev : _fires(ev,'HLT_PFMET120_PFMHT120_IDTight'),
        2017 : lambda ev : _fires(ev,'HLT_PFMET120_PFMHT120_IDTight'),
        2018 : lambda ev : _fires(ev,'HLT_PFMET120_PFMHT120_IDTight'),
    }
)


triggerGroups_dict=dict(
    Trigger_5TeV_1e={
        2017 : ['HLT_HIEle20_WPLoose_Gsf','HLT_HIEle17_WPLoose_Gsf']
    },
    Trigger_5TeV_1m={
        2017 : ['HLT_HIL3Mu20','HLT_HIMu17','HLT_HIL3Mu12']
    },
    Trigger_5TeV_2e={
        2017 : ['HLT_HIEle20_Ele12_CaloIdL_TrackIdL_IsoVL_DZ','HLT_HIEle15_Ele8_CaloIdL_TrackIdL_IsoVL']
    },
    Trigger_5TeV_2m={
        2017 : ['HLT_HIL3DoubleMu10']
    },
    Trigger_1e={
        2016 :  ['HLT_Ele27_WPTight_Gsf' , 'HLT_Ele25_eta2p1_WPTight_Gsf' , 'HLT_Ele27_eta2p1_WPLoose_Gsf'],
        2017 :  ['HLT_Ele32_WPTight_Gsf' , 'HLT_Ele35_WPTight_Gsf'],
        2018 :  ['HLT_Ele32_WPTight_Gsf'],
    },
    Trigger_1m={
        2016 :  ['HLT_IsoMu24' , 'HLT_IsoTkMu24' , 'HLT_IsoMu22_eta2p1' , 'HLT_IsoTkMu22_eta2p1' , 'HLT_IsoMu22' , 'HLT_IsoTkMu22'],
        2017 :  ['HLT_IsoMu24' , 'HLT_IsoMu27'],
        2018 :  ['HLT_IsoMu24'],
    },
    Trigger_2e={
        2016 :  ['HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ'],
        2017 :  ['HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL'],
        2018 :  ['HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL'],
    },
    Trigger_2m={
        2016 :  ['HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL' , 'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL' ,  'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ' , 'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ'],
        2017 :  ['HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8' , 'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8'],
        2018 :  ['HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8'],
    },
    Trigger_em={
        2016 :   ['HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL' , 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ', 'HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL' , 'HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ'],
        2017 :   ['HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL', 'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ'        , 'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ'        , 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ'],
        2018 :   ['HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL', 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ'        , 'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ'],
    },
    Trigger_3e={
        2016 :  ['HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'],
        2017 :  ['HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'],
        2018 :  ['HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'], # prescaled in the two years according to https://twiki.cern.ch/twiki/bin/view/CMS/EgHLTRunIISummary#2018
    },
    Trigger_3m={
        2016 :  ['HLT_TripleMu_12_10_5'],
        2017 :  ['HLT_TripleMu_12_10_5'],
        2018 :  ['HLT_TripleMu_12_10_5'],
    },
    Trigger_mee={
        2016 :  ['HLT_Mu8_DiEle12_CaloIdL_TrackIdL'],
        2017 :  ['HLT_Mu8_DiEle12_CaloIdL_TrackIdL'],
        2018 :  ['HLT_Mu8_DiEle12_CaloIdL_TrackIdL'],
    },
    Trigger_mme={
        2016 :  ['HLT_DiMu9_Ele9_CaloIdL_TrackIdL'   ],
        2017 :  ['HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ'],
        2018 :  ['HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ'],
    },
)


from CMGTools.TTHAnalysis.tools.evtTagger import EvtTagger
Trigger_5TeV_1e = lambda : EvtTagger('Trigger_5TeV_1e',[ lambda ev : triggerGroups['Trigger_5TeV_1e'][2017](ev) ])
Trigger_5TeV_1m = lambda : EvtTagger('Trigger_5TeV_1m',[ lambda ev : triggerGroups['Trigger_5TeV_1m'][2017](ev) ])
Trigger_5TeV_2e = lambda : EvtTagger('Trigger_5TeV_2e',[ lambda ev : triggerGroups['Trigger_5TeV_2e'][2017](ev) ])
Trigger_5TeV_2m = lambda : EvtTagger('Trigger_5TeV_2m',[ lambda ev : triggerGroups['Trigger_5TeV_2m'][2017](ev) ])

Trigger_1e   = lambda : EvtTagger('Trigger_1e',[ lambda ev : triggerGroups['Trigger_1e'][ev.year](ev) ])
Trigger_1m   = lambda : EvtTagger('Trigger_1m',[ lambda ev : triggerGroups['Trigger_1m'][ev.year](ev) ])
Trigger_2e   = lambda : EvtTagger('Trigger_2e',[ lambda ev : triggerGroups['Trigger_2e'][ev.year](ev) ])
Trigger_2m   = lambda : EvtTagger('Trigger_2m',[ lambda ev : triggerGroups['Trigger_2m'][ev.year](ev) ])
Trigger_em   = lambda : EvtTagger('Trigger_em',[ lambda ev : triggerGroups['Trigger_em'][ev.year](ev) ])
Trigger_3e   = lambda : EvtTagger('Trigger_3e',[ lambda ev : triggerGroups['Trigger_3e'][ev.year](ev) ])
Trigger_3m   = lambda : EvtTagger('Trigger_3m',[ lambda ev : triggerGroups['Trigger_3m'][ev.year](ev) ])
Trigger_mee  = lambda : EvtTagger('Trigger_mee',[ lambda ev : triggerGroups['Trigger_mee'][ev.year](ev) ])
Trigger_mme  = lambda : EvtTagger('Trigger_mme',[ lambda ev : triggerGroups['Trigger_mme'][ev.year](ev) ])
Trigger_2lss = lambda : EvtTagger('Trigger_2lss',[ lambda ev : triggerGroups['Trigger_2lss'][ev.year](ev) ])
Trigger_3l   = lambda : EvtTagger('Trigger_3l',[ lambda ev : triggerGroups['Trigger_3l'][ev.year](ev) ])
Trigger_MET  = lambda : EvtTagger('Trigger_MET',[ lambda ev : triggerGroups['Trigger_MET'][ev.year](ev) ])

triggerSequence = [Trigger_5TeV_1e,Trigger_5TeV_1m,Trigger_5TeV_2e,Trigger_5TeV_2m] #,Trigger_em,Trigger_3e,Trigger_3m,Trigger_mee,Trigger_mme,Trigger_2lss,Trigger_3l ,Trigger_MET]



# =========================================================================================================================
# ============================================================================================ CLEANING
# =========================================================================================================================
from CMGTools.TTHAnalysis.tools.nanoAOD.jetmetGrouper import groups as jecGroups
from CMGTools.TTHAnalysis.tools.combinedObjectTaggerForCleaning import CombinedObjectTaggerForCleaning
from CMGTools.TTHAnalysis.tools.nanoAOD.fastCombinedObjectRecleaner import fastCombinedObjectRecleaner

#==== items below are normally run as friends ====
def clean_and_FO_selection_WZ5TeV(lep):
    if (lep.pt < 8): return False
    if (abs(lep.eta) > (2.4 if abs(lep.pdgId)==13 else 2.5)): return False
    if (abs(lep.dxy)>0.05 or abs(lep.dz)>0.1): return False
    if (lep.sip3d > 8): return False
    return (abs(lep.pdgId)!=11 or (lep.convVeto and lep.lostHits==0 and lep.mvaFall17V2Iso_WPL)) and (abs(lep.pdgId)!=13 or lep.mediumPromptId>0)

def tight_selection_WZ5TeV(lep):
    if not clean_and_FO_selection_WZ5TeV(lep): return False
    if not lep.mvaTTH > (0.55 if abs(lep.pdgId)==13 else 0.125): return False
    if not lep.miniPFRelIso_all < (0.325 if abs(lep.pdgId)==13 else 0.085): return False
    if lep.jetBTagDeepCSV>0.1522: return False

    return True

tightLeptonSel = lambda lep,jet : clean_and_FO_selection_WZ5TeV(lep) and lep.mvaTTH > (0.55 if abs(lep.pdgId)==13 else 0.125) and lep.miniPFRelIso_all < (0.325 if abs(lep.pdgId)==13 else 0.085) and lep.jetBTagDeepCSV<0.1522


recleaner_step1 = lambda : CombinedObjectTaggerForCleaning("InternalRecl",
                                                        looseLeptonSel = lambda lep : lep.miniPFRelIso_all < 0.4 and lep.sip3d < 8 and (abs(lep.pdgId)!=11 or lep.lostHits<=1) and (abs(lep.pdgId)!=13 or lep.looseId),
                                                        cleaningLeptonSel = clean_and_FO_selection_WZ5TeV,
                                                        FOLeptonSel = clean_and_FO_selection_WZ5TeV,
                                                        tightLeptonSel = tightLeptonSel,
                                                        FOTauSel = lambda tau : False,
                                                        tightTauSel = lambda tau : False,
                                                        selectJet = lambda jet: jet.jetId > 0 and abs(jet.eta)<2.4  # pt and eta cuts are (hard)coded in the step2

)
recleaner_step2_mc_allvariations = lambda : fastCombinedObjectRecleaner(label="Recl", inlabel="_InternalRecl",
                                                                        cleanTausWithLooseLeptons=True,
                                                                        cleanJetsWithFOTaus=True,
                                                                        doVetoZ=False, doVetoLMf=False, doVetoLMt=False,
                                                                        jetPts=[25,40],
                                                                        jetPtsFwd=[25,60], # second number for 2.7 < abseta < 3, the first for the rest
                                                                        btagL_thr=99, # they are set at runtime
                                                                        btagM_thr=99,
                                                                        isMC = True,
                                                                        variations= ['jes%s'%v for v in jecGroups] + ['jer']
)

recleaner_step2_mc = lambda : fastCombinedObjectRecleaner(label="Recl", inlabel="_InternalRecl",
                                                        cleanTausWithLooseLeptons=False,
                                                        cleanJetsWithFOTaus=False,
                                                        doVetoZ=False, doVetoLMf=False, doVetoLMt=False,
                                                        jetPts=[25,40],
                                                        jetPtsFwd=[25,60], # second number for 2.7 < abseta < 3, the first for the rest
                                                        btagL_thr=99, # they are set at runtime
                                                        btagM_thr=99,
                                                        isMC = True,
                                                        variations=['jesTotal'] + ["jer"]
)

recleaner_step2_data = lambda : fastCombinedObjectRecleaner(label="Recl", inlabel="_InternalRecl",
                                        cleanTausWithLooseLeptons=False,
                                        cleanJetsWithFOTaus=False,
                                        doVetoZ=False, doVetoLMf=False, doVetoLMt=False,
                                        jetPts=[25,40],
                                        jetPtsFwd=[25,60], # second number for 2.7 < abseta < 3, the first for the rest
                                        btagL_thr=-99., # they are set at runtime
                                        btagM_thr=-99., # they are set at runtime
                                        isMC = False,
                                        variations = []
)


# =========================================================================================================================
# ============================================================================================ OTHER GENERAL MODULES
# =========================================================================================================================



# =========================================================================================================================
# ============================================================================================ ANALYSIS MODULES & SETTINGS
# =========================================================================================================================

# %%%%%%%%%%%%%%%%%%%%%%%%%% tW full Run 2 inclusive & differential
# Lepton treatments
LeptonDict = {}
LeptonDict["muons"] = {
    "pt"       = 20,
    "eta"      = 2.4,
    "isorelpf" = 0.15,
}

LeptonDict["elecs"] = {
    "pt"   = 20,
    "eta0" = 1.4442,
    "eta1" = 1.566,
    "eta2" = 2.4,
    "dxy"  = 0.05,
    "dz"   = 0.10,
}

muonID = lambda l : ( abs(l.eta) < LeptonDict["muons"]["eta"] and l.pt > LeptonDict["muons"]["pt"] and l.pfRelIso04_all < LeptonDict["muons"]["isorelpf"]
                      and l.tightId == 1 )

elecID = lambda l : ( (abs(l.eta) < LeptonDict["elecs"]["eta2"] and (abs(l.eta) < LeptonDict["elecs"]["eta0"] or abs(l.eta) > LeptonDict["elecs"]["eta1"]) )
                       and l.pt > LeptonDict["elecs"]["pt"] and l.tightId >= 4 and l.lostHits <= 1 and abs(l.dxy) < LeptonDict["elecs"]["dxy"]
                       and abs(l.dz) < LeptonDict["elecs"]["dz"] )

partmuonID = lambda l : ( abs(l.eta) < LeptonDict["muons"]["eta"] and l.pt > LeptonDict["muons"]["pt"])
partelecID = lambda l : ( (abs(l.eta) < LeptonDict["elecs"]["eta2"] and (abs(l.eta) < LeptonDict["elecs"]["eta0"] or abs(l.eta) > LeptonDict["elecs"]["eta1"]) ) and l.pt > LeptonDict["elecs"]["pt"] )

#### IMPLEMENTAR SELECCION NIVEL PARTICULA


from PhysicsTools.NanoAODTools.postprocessing.modules.common.collectionMerger import collectionMerger
lepMerge = lambda : collectionMerger(input = ["Electron","Muon"],
                                    output = "LepGood",
                                    selector = dict(Muon = muonID, Electron = elecID))

# Jet treatments
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaR

ctrJetSel = lambda j : j.pt > 30 and abs(j.eta) <  2.4 and j.jetId > 1
fwdJetSel = lambda j : j.pt > 30 and abs(j.eta) >= 2.4 and j.jetId > 1

loosectrJetSel = lambda j : j.pt > 20 and j.pt <= 30 and abs(j.eta) <  2.4 and j.jetId > 1
loosefwdJetSel = lambda j : j.pt > 20 and j.pt <= 30 and abs(j.eta) >= 2.4 and j.jetId > 1

from CMGTools.TTHAnalysis.tools.nanoAOD.nBJetCounter import nBJetCounter
#nBJetDeepCSVNoRecl  = lambda : nBJetCounter("DeepCSV",  "btagDeepB",     ctrJetSel)

nBJetDeepFlavNoRecl = lambda : nBJetCounter("DeepFlav", "btagDeepFlavB", ctrJetSel)
nBJetDeepFlavNoRecl = lambda : nBJetCounter("DeepFlav", "btagDeepFlavB", loosectrJetSel)


from CMGTools.TTHAnalysis.tools.eventVars_tWRun2 import EventVars_tWRun2
eventVars = lambda : EventVarstWRun2('', 'Recl')


from CMGTools.TTHAnalysis.tools.objTagger import ObjTagger
isMatchRightCharge = lambda : ObjTagger('isMatchRightCharge', 'LepGood', [lambda l,g : (l.genPartFlav==1 or l.genPartFlav == 15) and (g.pdgId*l.pdgId > 0) ], linkColl='GenPart',linkVar='genPartIdx')
mcMatchId          = lambda : ObjTagger('mcMatchId',          'LepGood', [lambda l : (l.genPartFlav==1 or l.genPartFlav == 15) ])
mcPromptGamma      = lambda : ObjTagger('mcPromptGamma',      'LepGood', [lambda l : (l.genPartFlav==22)])
mcMatch_seq        = [ isMatchRightCharge, mcMatchId ,mcPromptGamma]

# %%%%%%%%%%%%%%%%%%%%%%%%%% WWbb
# TODO

# %%%%%%%%%%%%%%%%%%%%%%%%%% tW+/tW-
# TODO
