import os, sys, enum
import ROOT as r

class ch(enum.IntEnum):
    NoChan = 0
    ElMu   = 1
    Muon   = 2
    Elec   = 3

# =========================================================================================================================
# ============================================================================================ TRIGGER
# =========================================================================================================================
def _fires(ev, path):
    if "/hasfiredtriggers_cc.so" not in r.gSystem.GetLibraries():
        r.gROOT.ProcessLine(".L %s/src/CMGTools/Production/src/hasfiredtriggers.cc+" % os.environ['CMSSW_BASE'])
    if not hasattr(ev, path): return False

    if ev.run == 1:  # is MC
        return getattr(ev, path)
    else : #if hasattr(ev,"year"):
        return getattr(r, 'fires_%s_%d'%(path, ev.year))( ev.run, getattr(ev, path) )

triggerGroups = dict(
    Trigger_1e = {
        2016 : lambda ev : _fires(ev,'HLT_Ele27_WPTight_Gsf'),
        2017 : lambda ev : _fires(ev,'HLT_Ele35_WPTight_Gsf'),
        2018 : lambda ev : _fires(ev,'HLT_Ele32_WPTight_Gsf'),
    },
    Trigger_1m = {
        2016 : lambda ev : _fires(ev,'HLT_IsoMu24')        or _fires(ev,'HLT_IsoTkMu24'),
        2017 : lambda ev : _fires(ev,'HLT_IsoMu24_eta2p1') or _fires(ev,'HLT_IsoMu27'),
        2018 : lambda ev : _fires(ev,'HLT_IsoMu24'),
    },
    Trigger_2e = {
        2016 : lambda ev : _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ'),
        2017 : lambda ev : _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ') or _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL'),
        2018 : lambda ev : _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ') or _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL'),
    },
    Trigger_2m = {
        2016 : lambda ev : (_fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL')    or _fires(ev, 'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL') or
                            _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ') or _fires(ev,'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ')),
        2017 : lambda ev : (_fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ') or _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8') or
                            _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8')),
        2018 : lambda ev : _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8'),
    },
    Trigger_em = {
        2016 : lambda ev : (_fires(ev, 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL')   or _fires(ev,"HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL") or
                             _fires(ev,'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ') or _fires(ev, "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ")),
        2017 :  lambda ev : (_fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL')    or _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ') or
                             _fires(ev,'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ') or _fires(ev,'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ')),
        2018 :  lambda ev : (_fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL')    or _fires(ev,'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ') or
                             _fires(ev,'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ') or _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ')),
    },
)


from CMGTools.TTHAnalysis.tools.evtTagger import EvtTagger
Trigger_1e_2016  = lambda : EvtTagger('Trigger_1e',  [ lambda ev : triggerGroups['Trigger_1e'][2016](ev) ])
Trigger_1m_2016  = lambda : EvtTagger('Trigger_1m',  [ lambda ev : triggerGroups['Trigger_1m'][2016](ev) ])
Trigger_2e_2016  = lambda : EvtTagger('Trigger_2e',  [ lambda ev : triggerGroups['Trigger_2e'][2016](ev) ])
Trigger_2m_2016  = lambda : EvtTagger('Trigger_2m',  [ lambda ev : triggerGroups['Trigger_2m'][2016](ev) ])
Trigger_em_2016  = lambda : EvtTagger('Trigger_em',  [ lambda ev : triggerGroups['Trigger_em'][2016](ev) ])

Trigger_1e_2017  = lambda : EvtTagger('Trigger_1e',  [ lambda ev : triggerGroups['Trigger_1e'][2017](ev) ])
Trigger_1m_2017  = lambda : EvtTagger('Trigger_1m',  [ lambda ev : triggerGroups['Trigger_1m'][2017](ev) ])
Trigger_2e_2017  = lambda : EvtTagger('Trigger_2e',  [ lambda ev : triggerGroups['Trigger_2e'][2017](ev) ])
Trigger_2m_2017  = lambda : EvtTagger('Trigger_2m',  [ lambda ev : triggerGroups['Trigger_2m'][2017](ev) ])
Trigger_em_2017  = lambda : EvtTagger('Trigger_em',  [ lambda ev : triggerGroups['Trigger_em'][2017](ev) ])

Trigger_1e_2018  = lambda : EvtTagger('Trigger_1e',  [ lambda ev : triggerGroups['Trigger_1e'][2018](ev) ])
Trigger_1m_2018  = lambda : EvtTagger('Trigger_1m',  [ lambda ev : triggerGroups['Trigger_1m'][2018](ev) ])
Trigger_2e_2018  = lambda : EvtTagger('Trigger_2e',  [ lambda ev : triggerGroups['Trigger_2e'][2018](ev) ])
Trigger_2m_2018  = lambda : EvtTagger('Trigger_2m',  [ lambda ev : triggerGroups['Trigger_2m'][2018](ev) ])
Trigger_em_2018  = lambda : EvtTagger('Trigger_em',  [ lambda ev : triggerGroups['Trigger_em'][2018](ev) ])




cond_singlemuon = [ lambda ev : (  (ev.channel == ch.ElMu and (not ev.Trigger_em) and ev.Trigger_1m)
                                or (ev.channel == ch.Muon and (not ev.Trigger_2m) and ev.Trigger_1m)) ]

cond_singleelec = [ lambda ev : ((   ev.channel == ch.ElMu and (not ev.Trigger_em) and (not ev.Trigger_1m) and ev.Trigger_1e)
                                 or (ev.channel == ch.Elec and (not ev.Trigger_2e) and ev.Trigger_1e)) ]
cond_doublemuon = [ lambda ev : (    ev.channel == ch.Muon and ev.Trigger_2m) ]
cond_doubleeg   = [ lambda ev : (    ev.channel == ch.Elec and ev.Trigger_2e) ]
cond_muoneg     = [ lambda ev : (    ev.channel == ch.ElMu and ev.Trigger_em) ]
cond_mc         = [ lambda ev : (   (ev.channel == ch.ElMu and (ev.Trigger_em or ev.Trigger_1m or ev.Trigger_1e))
                                  or (ev.channel == ch.Muon and (ev.Trigger_1m or ev.Trigger_2m))
                                  or (ev.channel == ch.Elec and (ev.Trigger_1e or ev.Trigger_2e)) )]

remove_overlap_singlemuon = lambda : EvtTagger('pass_trigger', cond_singlemuon)
remove_overlap_singleelec = lambda : EvtTagger('pass_trigger', cond_singleelec)
remove_overlap_doublemuon = lambda : EvtTagger('pass_trigger', cond_doublemuon)
remove_overlap_doubleeg   = lambda : EvtTagger('pass_trigger', cond_doubleeg)
remove_overlap_muoneg     = lambda : EvtTagger('pass_trigger', cond_muoneg)
remove_overlap_mc         = lambda : EvtTagger('pass_trigger', cond_mc)

triggerSeq_2016 = [Trigger_1e_2016, Trigger_1m_2016, Trigger_2e_2016, Trigger_2m_2016, Trigger_em_2016]
triggerSeq_2017 = [Trigger_1e_2017, Trigger_1m_2017, Trigger_2e_2017, Trigger_2m_2017, Trigger_em_2017]
triggerSeq_2018 = [Trigger_1e_2018, Trigger_1m_2018, Trigger_2e_2018, Trigger_2m_2018, Trigger_em_2018]

# =========================================================================================================================
# ============================================================================================ OTHER GENERAL MODULES
# =========================================================================================================================



# =========================================================================================================================
# ============================================================================================ ANALYSIS MODULES & SETTINGS
# =========================================================================================================================

# %%%%%%%%%%%%%%%%%%%%%%%%%% tW full Run 2 inclusive & differential
#### LEPTON TREATMENTS ###
IDDict = {}
IDDict["muons"] = {
    "pt"       : 20,
    "eta"      : 2.4,
    "isorelpf" : 0.15,
}

IDDict["elecs"] = {
    "pt"   : 20,
    "eta0" : 1.4442,
    "eta1" : 1.566,
    "eta2" : 2.4,
    "dxy"  : 0.05,
    "dz"   : 0.10,
}

IDDict["jets"] = {
    "pt"      : 30,
    "pt2"     : 20,
    "ptloose" : 20,
    "eta"     : 2.4,
    "jetid_2016" : 0,  # > X
    "jetid_2017" : 1,  # > X
    "jetid_2018" : 1,  # > X
}

muonID = lambda l : ( abs(l.eta) < IDDict["muons"]["eta"] and l.pt > IDDict["muons"]["pt"] and l.pfRelIso04_all < IDDict["muons"]["isorelpf"]
                      and l.tightId == 1 )

elecID = lambda l : ( (abs(l.eta) < IDDict["elecs"]["eta2"] and (abs(l.eta) < IDDict["elecs"]["eta0"] or abs(l.eta) > IDDict["elecs"]["eta1"]) )
                       and l.pt > IDDict["elecs"]["pt"] and l.cutBased >= 4 and l.lostHits <= 1 and abs(l.dxy) < IDDict["elecs"]["dxy"]
                       and abs(l.dz) < IDDict["elecs"]["dz"] )

partmuonID = lambda l : ( abs(l.eta) < IDDict["muons"]["eta"] and l.pt > IDDict["muons"]["pt"])
partelecID = lambda l : ( (abs(l.eta) < IDDict["elecs"]["eta2"] and (abs(l.eta) < IDDict["elecs"]["eta0"] or abs(l.eta) > IDDict["elecs"]["eta1"]) ) and l.pt > IDDict["elecs"]["pt"] )

# TODO: IMPLEMENTAR ID DE OBJETOS A NIVEL DE PARTICULA


from PhysicsTools.NanoAODTools.postprocessing.modules.common.collectionMerger import collectionMerger
lepMerge = lambda : collectionMerger(input = ["Electron","Muon"],
                                     output = "LepGood",
                                     selector = dict(Muon = muonID, Electron = elecID))

# Lepton SF
from CMGTools.TTHAnalysis.tools.nanoAOD.lepScaleFactors import lepScaleFactors
leptonSFs = lambda : lepScaleFactors()


#### JET TREATMENTS ###
#from CMGTools.TTHAnalysis.tools.nanoAOD.nBJetCounter  import nBJetCounter
from PhysicsTools.NanoAODTools.postprocessing.modules.btv.btagSFProducer import btagSFProducer
from CMGTools.TTHAnalysis.tools.nanoAOD.BtagSFs       import BtagSFs
from CMGTools.TTHAnalysis.tools.nanoAOD.jetmetGrouper import groups as jecGroups
from CMGTools.TTHAnalysis.tools.combinedObjectTaggerForCleaning     import CombinedObjectTaggerForCleaning
from CMGTools.TTHAnalysis.tools.nanoAOD.fastCombinedObjectRecleaner import fastCombinedObjectRecleaner

#ctrJetSel_2016      = lambda j : j.pt > IDDict["jets"]["pt"]                                       and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2016"]
#loosectrJetSel_2016 = lambda j : j.pt > IDDict["jets"]["ptloose"] and j.pt <= IDDict["jets"]["pt"] and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2016"]
#ctrJetSel_2017      = lambda j : j.pt > IDDict["jets"]["pt"]                                       and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2017"]
#loosectrJetSel_2017 = lambda j : j.pt > IDDict["jets"]["ptloose"] and j.pt <= IDDict["jets"]["pt"] and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2017"]
#ctrJetSel_2018      = lambda j : j.pt > IDDict["jets"]["pt"]                                       and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2018"]
#loosectrJetSel_2018 = lambda j : j.pt > IDDict["jets"]["ptloose"] and j.pt <= IDDict["jets"]["pt"] and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2018"]

## b-tagging
#nBJetNoRecl_2016      = lambda : nBJetCounter("DeepFlav", "btagDeepFlavB", ctrJetSel_2016)
#loosenBJetNoRecl_2016 = lambda : nBJetCounter("DeepFlav", "btagDeepFlavB", loosectrJetSel_2016)
#nBJetNoRecl_2017      = lambda : nBJetCounter("DeepFlav", "btagDeepFlavB", ctrJetSel_2017)
#loosenBJetNoRecl_2017 = lambda : nBJetCounter("DeepFlav", "btagDeepFlavB", loosectrJetSel_2017)
#nBJetNoRecl_2018      = lambda : nBJetCounter("DeepFlav", "btagDeepFlavB", ctrJetSel_2018)
#loosenBJetNoRecl_2018 = lambda : nBJetCounter("DeepFlav", "btagDeepFlavB", loosectrJetSel_2018)

# b-tagging SF
btagSF2016_dj = lambda : btagSFProducer("Legacy2016", 'deepjet', collName = "JetSel_Recl", storeOutput = False, perJesComponents = True)
btagSF2017_dj = lambda : btagSFProducer("2017",       'deepjet', collName = "JetSel_Recl", storeOutput = False, perJesComponents = True)
btagSF2018_dj = lambda : btagSFProducer("2018",       'deepjet', collName = "JetSel_Recl", storeOutput = False, perJesComponents = True)

bTagSFs = lambda : BtagSFs("JetSel_Recl",
                           corrs = {  "AbsoluteScale": 1., "AbsoluteStat":0., "FlavorQCD":1.,"Fragmentation":1.,"PileUpDataMC":0.5,"PileUpPtBB":0.5,"PileUpPtEC1":0.5,"PileUpPtEC2":0.5,"PileUpPtHF":0.5,"PileUpPtRef":0.5,"RelativeFSR":0.5,"RelativeJEREC1":0., "RelativeJEREC2":0., "RelativeJERHF":0.5,"RelativePtBB":0.5,"RelativePtEC1":0.,"RelativePtEC2":0.,"RelativePtHF":0.5, "RelativeBal":0.5, "RelativeStatEC":0., "RelativeStatFSR":0., "RelativeStatHF":0.,"SinglePionECAL":1., "SinglePionHCAL": 1., "TimePtEta":0., "AbsoluteMPFBias": 1.} # relative sample not there
                          )

bTagSFs_allvars = lambda : BtagSFs("JetSel_Recl", corrs = jecGroups)

scaleFactorSequence_2016 = [btagSF2016_dj,bTagSFs]
scaleFactorSequence_2017 = [btagSF2017_dj,bTagSFs]
scaleFactorSequence_2018 = [btagSF2018_dj,bTagSFs]

scaleFactorSequence_allVars_2016 = [btagSF2016_dj,bTagSFs_allvars]
scaleFactorSequence_allVars_2017 = [btagSF2017_dj,bTagSFs_allvars]
scaleFactorSequence_allVars_2018 = [btagSF2018_dj,bTagSFs_allvars]

# Cleaning
recleaner_step1_2016 = lambda : CombinedObjectTaggerForCleaning("InternalRecl",
                                                                looseLeptonSel    = lambda lep : True,
                                                                cleaningLeptonSel = lambda lep : True,
                                                                FOLeptonSel       = lambda lep : True,
                                                                tightLeptonSel    = lambda lep : True,
                                                                FOTauSel          = lambda tau : False,
                                                                tightTauSel       = lambda tau : False,
                                                                selectJet         = lambda jet: jet.jetId > IDDict["jets"]["jetid_2016"], # pt and eta cuts are (hard)coded in the step2,
                                                                tauCollection     = 'LepGood',
)

recleaner_step1_2017 = lambda : CombinedObjectTaggerForCleaning("InternalRecl",
                                                                looseLeptonSel    = lambda lep : True,
                                                                cleaningLeptonSel = lambda lep : True,
                                                                FOLeptonSel       = lambda lep : True,
                                                                tightLeptonSel    = lambda lep : True,
                                                                FOTauSel          = lambda tau : False,
                                                                tightTauSel       = lambda tau : False,
                                                                selectJet         = lambda jet: jet.jetId > IDDict["jets"]["jetid_2017"], # pt and eta cuts are (hard)coded in the step2
                                                                tauCollection     = 'LepGood',
)

recleaner_step1_2018 = lambda : CombinedObjectTaggerForCleaning("InternalRecl",
                                                                looseLeptonSel    = lambda lep : True,
                                                                cleaningLeptonSel = lambda lep : True,
                                                                FOLeptonSel       = lambda lep : True,
                                                                tightLeptonSel    = lambda lep : True,
                                                                FOTauSel          = lambda tau : False,
                                                                tightTauSel       = lambda tau : False,
                                                                selectJet         = lambda jet: jet.jetId > IDDict["jets"]["jetid_2018"], # pt and eta cuts are (hard)coded in the step2
                                                                tauCollection     = 'LepGood',
)

recleaner_step2_mc   = lambda : fastCombinedObjectRecleaner(label = "Recl", inlabel = "_InternalRecl",
                                                            cleanTausWithLooseLeptons = False,
                                                            cleanJetsWithFOTaus       = False,
                                                            doVetoZ = False, doVetoLMf = False, doVetoLMt = False,
                                                            jetPts     = [IDDict["jets"]["pt"], IDDict["jets"]["pt2"]], # this creates two collections
                                                            jetPtsFwd  = [IDDict["jets"]["pt"], IDDict["jets"]["pt"]],  # second number for 2.7 < abseta < 3, the first for the rest
                                                            btagL_thr  = 99, # they are set at runtime
                                                            btagM_thr  = 99,
                                                            tauCollection = 'LepGood',
                                                            isMC       = True,
                                                            #variations = ['jesTotal'] + ['jes%s'%v for v in jecGroups] + ['jer'],
                                                            variations = ['jesTotal'] + ['jer'],
                                                            cleanElectrons = -1,
)

recleaner_step2_data = lambda : fastCombinedObjectRecleaner(label = "Recl", inlabel = "_InternalRecl",
                                                            cleanTausWithLooseLeptons = False,
                                                            cleanJetsWithFOTaus       = False,
                                                            doVetoZ = False, doVetoLMf = False, doVetoLMt = False,
                                                            jetPts     = [IDDict["jets"]["pt"], IDDict["jets"]["pt2"]], # this creates two collections
                                                            jetPtsFwd  = [IDDict["jets"]["pt"], IDDict["jets"]["pt"]],  # second number for 2.7 < abseta < 3, the first for the rest
                                                            btagL_thr  = -99., # they are set at runtime
                                                            btagM_thr  = -99., # they are set at runtime
                                                            tauCollection = 'LepGood',
                                                            isMC       = False,
                                                            variations = [],
                                                            cleanElectrons = -1,
)


cleaning_mc_2016   = [recleaner_step1_2016, recleaner_step2_mc]
cleaning_mc_2017   = [recleaner_step1_2017, recleaner_step2_mc]
cleaning_mc_2018   = [recleaner_step1_2018, recleaner_step2_mc]
cleaning_data_2016 = [recleaner_step1_2016, recleaner_step2_data]
cleaning_data_2017 = [recleaner_step1_2017, recleaner_step2_data]
cleaning_data_2018 = [recleaner_step1_2018, recleaner_step2_data]

#### EVENT VARIABLES ###
from CMGTools.TTHAnalysis.tools.eventVars_tWRun2 import EventVars_tWRun2
eventVars = lambda : EventVars_tWRun2('', 'Recl')

varstrigger_2016_singlemuon = [eventVars] + triggerSeq_2016 + [remove_overlap_singlemuon]
varstrigger_2016_singleelec = [eventVars] + triggerSeq_2016 + [remove_overlap_singleelec]
varstrigger_2016_doublemuon = [eventVars] + triggerSeq_2016 + [remove_overlap_doublemuon]
varstrigger_2016_doubleeg   = [eventVars] + triggerSeq_2016 + [remove_overlap_doubleeg]
varstrigger_2016_muoneg     = [eventVars] + triggerSeq_2016 + [remove_overlap_muoneg]
varstrigger_2016_mc         = [eventVars] + triggerSeq_2016 + [remove_overlap_mc]

varstrigger_2017_singlemuon = [eventVars] + triggerSeq_2017 + [remove_overlap_singlemuon]
varstrigger_2017_singleelec = [eventVars] + triggerSeq_2017 + [remove_overlap_singleelec]
varstrigger_2017_doublemuon = [eventVars] + triggerSeq_2017 + [remove_overlap_doublemuon]
varstrigger_2017_doubleeg   = [eventVars] + triggerSeq_2017 + [remove_overlap_doubleeg]
varstrigger_2017_muoneg     = [eventVars] + triggerSeq_2017 + [remove_overlap_muoneg]
varstrigger_2017_mc         = [eventVars] + triggerSeq_2017 + [remove_overlap_mc]

varstrigger_2018_singlemuon = [eventVars] + triggerSeq_2018 + [remove_overlap_singlemuon]
varstrigger_2018_singleelec = [eventVars] + triggerSeq_2018 + [remove_overlap_singleelec]
varstrigger_2018_doublemuon = [eventVars] + triggerSeq_2018 + [remove_overlap_doublemuon]
varstrigger_2018_doubleeg   = [eventVars] + triggerSeq_2018 + [remove_overlap_doubleeg]
varstrigger_2018_muoneg     = [eventVars] + triggerSeq_2018 + [remove_overlap_muoneg]
varstrigger_2018_mc         = [eventVars] + triggerSeq_2018 + [remove_overlap_mc]
# %%%%%%%%%%%%%%%%%%%%%%%%%% WWbb
# TODO

# %%%%%%%%%%%%%%%%%%%%%%%%%% tW+/tW-
# TODO
