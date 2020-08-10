import os
import sys
import enum

# Low Pile-Up modules used for friend-trees

# ===========================================================
# ======================== Particle parameters configuration
muons = {
    "pt"            : 5,
    "miniRelIso"    : 0.4,
    "sip3d"         : 8,
    "dxy"           : 0.05,
    "dz"            :0.1
    }
electrons = {
    "pt"            : 7,
    "miniRelIso"    : 0.4,
    "sip3d"         : 8,
    "dxy"           : 0.05,
    "dz"            :0.1
    }



# ===========================================================
# ======================== Step 0 modules


##                        Tags and channels modules, for MC and DATA differentiation
class ch(enum.IntEnum):
    '''
     Considered channels
    '''
    NoChan = 0
    ElMu   = 1
    Muon   = 2
    Elec   = 3
    
class tags(enum.IntEnum):
    '''
      Tags for identifying different samples
    '''
    NoTag      = 0
    MC         = 1
    SingleMuon = 2
    DoubleMuon = 3
    HighEGJet  = 4
    LowEGJet   = 5


##                        Lepton Identification

muonID = lambda l: abs(l.eta) < 2.4 and l.pt > muons["pt"] and l.miniPFRelIso_all < muons["miniRelIso"] \
    and l.sip3d < muons["sip3d"] and abs(l.dxy) < muons["dxy"] and abs(l.dz) < muons["dz"]

electronID = lambda l: abs(l.eta) < 2.4 and l.pt > electrons["pt"] and l.miniPFRelIso_all < electrons["miniRelIso"] \
    and l.sip3d < electrons["sip3d"] and abs(l.dxy) < electrons["dxy"] and abs(l.dz) < electrons["dz"]


##                         Basic lepton modules
from PhysicsTools.NanoAODTools.postprocessing.modules.common.collectionMerger import collectionMerger
from CMGTools.TTHAnalysis.tools.nanoAOD.ttHLeptonCombMasses import ttHLeptonCombMasses

lepMerge = lambda: collectionMerger(input = ["Electron", "Muon"],
                                    output = "LepGood",
                                    selector = dict(Muon = muonID, Electron = electronID))

lepMasses = lambda: ttHLeptonCombMasses( ["Muon", muonID], ("Electron", electronID)], maxleps = 4)

##                          Some useful branches
from CMGTools.TTHAnalysis.tools.nanoAOD.yearTagger import yearTag, yearTag2017
from CMGTools.TTHAnalysis.tools.nanoAOD.xsecTagger import xsecTag
from CMGTools.TTHAnalysis.tools.nanoAOD.lepJetBTagAdder import lepJetBTagCSV, lepJetBTagDeepCSV, lepJetBTagDeepFlav, lepJetBTagDeepFlavC

##                           This ones will come after the new post-proc
#from PhysicsTools.NanoAODTools.postprocessing.modules.common.puWeightProducer import puWeight_2017, puAutoWeight_2017
#from PhysicsTools.NanoAODTools.postprocessing.modules.common.PrefireCorr import prefCorr_2017
#from PhysicsTools.NanoAODTools.postprocessing.modules.common.muonScaleResProducer import muonScaleRes2017

# MC and data tagging

from CMGTools.TTHAnalysis.tools.addDataTag import addDataTag
addDoubleMuon = lambda : addDataTag(tags.DoubleMuon)
addSingleMuon = lambda : addDataTag(tags.SingleMuon)
addHighEGJet  = lambda : addDataTag(tags.HighEGJet )
addLowEGJet   = lambda : addDataTag(tags.LowEGJet  )
addMC         = lambda : addDataTag(tags.MC        )

# Lepton stuff
WZ_lowPu_13TeV = [lepMerge, 
            xsecTag, 
            lepJetBTagCSV,
            lepJetBTagDeepCSV,
            lepJetBTagDeepFlav,
            lepMasses #,
            #puWeight_2017,
            #prefCorr_2017,
            #muonScaleRes2017
        ]

# ===========================================================
# ======================== Step 1 modules: Triggers
triggerGroups = dict(
    
    Trigger_1e = {
        2017 : lambda ev : bool(getattr(ev, 'HLT_Ele35_WPTight_Gsf'))
               if (ev.datatag == tags.mc) else
               bool(getattr(ev, 'HLT_HIEle20_WPLoose_Gsf')) or 
               bool(getattr(ev, 'HLT_HIEle40_WPLoose_Gsf'))
        }
    Trigger_1m = {
        2017 : lambda ev : bool(getattr(ev, 'HLT_IsoMu27'))
               if (ev.datatag == tags.mc) else 
               bool(getattr(ev, 'HLT_HIMu17'))
        }
    Trigger_2e = {
        2017 : lambda ev : bool(getattr(ev, 'HLT_Ele23_Ele12_CaloIdl_TrackIdL_IsoVL_DZ')) 
               or bool(getattr(getattr(ev, 'HLT_Ele23_Ele12_CaloIdl_TrackIdL_IsoVL'))) 
               if (ev.datatag == tags.mc) else 
               bool(getattr(ev, 'HLT_HIEle20_Ele12_CaloIdL_TrackIdL_IsoVL_DZ')) 
               or bool(getattr(ev, 'HLT_HIEle20_Ele12_CaloIdL_TrackIdL_IsoVL'))
        }
    
    )
    
    
from CMGTools.TTHAnalysis.tools.evtTagger import EvtTagger
Trigger_1e = lambda : EvtTagger('Trigger_1e', [lambda ev : triggerGroups['Trigger1e'][ev.year](ev) ])
Trigger_1m = lambda : EvtTagger('Trigger_1m', [lambda ev : triggerGroups['Trigger1m'][ev.year](ev) ])
Trigger_2e = lambda : EvtTagger('Trigger_2e', [lambda ev : triggerGroups['Trigger2e'][ev.year](ev) ])


triggerSequence = [Trigger_1e, Trigger_1m, Trigger_2e]


# ===========================================================
# ======================== Step 2 modules: Recleaning
# == Imports
from CMGTools.TTHAnalysis.tools.nanoAOD.jetmetGrouper import groups as jecGroups
from CMGTools.TTHAnalysis.tools.combinedObjectTaggerForCleaning import combinedObjectTaggerForCleaning
from CMGTools.TTHAnalysis.tools.nanoAOD.fastCombinedObjectRecleaner import fastCombinedObjectRecleaner

# == Function definition

def conePt_13TeV(lep):  # This function is just a copy of the one for 5 TeV !!!!!!
    if (abs(lep.pdgId) != 11 and abs(lep.pdgId) != 13): return lep.pt
    if ((abs(lep.pdgId) == 13 and lep.mvaTTH > 0.55 and lep.miniPFRelIso_all < 0.325) or (abs(lep.pdgId) == 11 and lep.mvaTTH > 0.125 and lep.miniPFRelIso_all < 0.085 )) and lep.lepJetBTagDeepCSV < 0.1522:
        return lep.pt
    else: return 0.90 * lep.pt * ( 1 + lep.jetRelIso )


def clean_and_FO_selection_13TeV(lep): # This function is just a copy of the one for 5 TeV !!!!!!
    if (lep.pt < 8): return False
    if (abs(lep.eta) > (2.4 if abs(lep.pdgId) == 13 else 2.5)): return False
    if (abs(lep.dxy) > 0.05 or abs(lep.dz) > 0.1): return False
    if (lep.sip3d > 8): return False
    return (abs(lep.pdgId) != 11 or (lep.convVeto and lep.lostHits == 0 and lep.mvaFall17V2Iso_WPL)) and (abs(lep.pdgId) != 13 or lep.mediumPromptId > 0)


# == Modules definition
recleaner_step1 = lambda : combinedObjectTaggerForCleaning("InternalRecl",
                                                           looseLeptonSel       = lambda lep : lep.miniPFRelIso_all < 0.4 and lep.sip3d < 8 and (abs(lep.pdgId)!=11 or lep.lostHits <=1) and (abs(lep.pdgId)!=13 or lep.looseId),
                                                           cleaningLeptonSel    = clean_and_FO_selection_13TeV,
                                                           FOLeptonSel          = clean_and_FO_selection_13TeV,
                                                           tightLeptonSel       = tightLeptonSel,
                                                           FOTauSel             = lambda tau : False,
                                                           tightTauSel          = lambda tau : False,
                                                           selectJet            = lambda jet : jet.jetId > 0 and abs(jet.eta) < 2.4,
                                                           tauCollection        = "LepGood",
                                                           )

recleaner_step2_mc = lambda : fastCombinedObjectRecleaner(label = "Recl", 
                                                            inlabel = "_InternalRecl",
                                                            cleanTausWithLooseLeptons = False,
                                                            doVetoZ = False,
                                                            doVetoLMf = False,
                                                            doVetoLMt = False,
                                                            jetPts = [25, 40]
                                                            jetPtsFwd = [25, 60]
                                                            btagL_thre = 99,
                                                            btagM_thr = 99,
                                                            year_ = 2017,
                                                            tauCollection = "LepGood",
                                                            #jetCollection = "Jet"
                                                            jetBTag = "btagDeepB",
                                                            isMC = True,
                                                            #variations = ["jesTotal"] + ["jer"]
                                                            variations = []
                                                            )

recleaner_step2_data = lambda : fastCombinedObjectRecleaner(label = "Recl", 
                                                            inlabel = "_InternalRecl",
                                                            cleanTausWithLooseLeptons = False,
                                                            doVetoZ = False,
                                                            doVetoLMf = False,
                                                            doVetoLMt = False,
                                                            jetPts = [25, 40]
                                                            jetPtsFwd = [25, 60]
                                                            btagL_thre = 99,
                                                            btagM_thr = 99,
                                                            year_ = 2017,
                                                            tauCollection = "LepGood",
                                                            #jetCollection = "Jet"
                                                            jetBTag = "btagDeepB",
                                                            isMC = False,
                                                            #variations = ["jesTotal"] + ["jer"]
                                                            variations = []
                                                            )


from CMGTools.TTHAnalysis.tools.objTagger import ObjTagger

isMatchRightCharge = lambda : ObjTagger('isMatchRightCharge', 'LepGood', [lambda l,g : (l.genPartFlav == 1 or l.genPartFlav == 15) and (g.pdgId*l.pdgId > 0)], linkColl = 'GenPart', linkVar = 'genPartIdx')
mcMatchId          = lambda : ObjTagger('mcMatchId', 'LepGood', [lambda l : (l.genPartFlav == 1 or l.genPartFlav == 15) ])
mcPromptGamma      = lambda : ObjTagger('mcPromptGamma', 'LepGood', [lambda l : (l.genPartFlav == 22)] )

WZ_lowPu_recl_data = [recleaner_step1, recleaner_step2_mc, isMatchRightCharge, mcMatchId, mcPromptGamma]
WZ_lowPu_recl_mc = [recleaner_step1, recleaner_step2_data]

