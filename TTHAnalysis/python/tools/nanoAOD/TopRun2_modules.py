import os, sys, enum
import ROOT as r

class ch(enum.IntEnum):
    NoChan = 0
    ElMu   = 1
    Muon   = 2
    Elec   = 3


class tags(enum.IntEnum):
    NoTag      = 0
    mc         = 1
    singlemuon = 2
    singleelec = 3
    doublemuon = 4
    doubleeg   = 5
    muoneg     = 6

# =========================================================================================================================
# ============================================================================================ TRIGGER
# =========================================================================================================================
def _fires(ev, path):
    if "/hasfiredtriggers_cc.so" not in r.gSystem.GetLibraries():
        r.gROOT.ProcessLine(".L %s/src/CMGTools/Production/src/hasfiredtriggers.cc+" % os.environ['CMSSW_BASE'])
    if not hasattr(ev, path): return False

    if ev.run == 1:  # is MC
        return getattr(ev, path)
    else :
        return getattr(r, 'fires_%s_%d'%(path, ev.year))( ev.run, getattr(ev, path) )

triggerGroups = dict(
    Trigger_1e = {
        2016 : lambda ev : _fires(ev, 'HLT_Ele27_WPTight_Gsf'),
        2017 : lambda ev : _fires(ev, 'HLT_Ele35_WPTight_Gsf'),
        2018 : lambda ev : _fires(ev, 'HLT_Ele32_WPTight_Gsf'),
    },
    Trigger_1m = {
        2016 : lambda ev : (   _fires(ev, 'HLT_IsoMu24')
                            or _fires(ev, 'HLT_IsoTkMu24')),
        2017 : lambda ev :     _fires(ev, 'HLT_IsoMu27'),
        2018 : lambda ev :     _fires(ev, 'HLT_IsoMu24'),
    },
    Trigger_2e = {
        2016 : lambda ev : _fires(ev, 'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ'),
        2017 : lambda ev : _fires(ev, 'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL'),
        2018 : lambda ev : _fires(ev, 'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL'),
    },
    Trigger_2m = {
        2016 : lambda ev : ((   _fires(ev, 'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL')
                             or _fires(ev, 'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL'))
                            if (ev.datatag == tags.mc or ev.run <= 280385) else

                            (  _fires(ev, 'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ')
                            or _fires(ev, 'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ'))),
        2017 : lambda ev :     _fires(ev, 'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8'),
        2018 : lambda ev :     _fires(ev, 'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8'),
    },
    Trigger_em = {
        2016 : lambda ev : ((  _fires(ev, 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL')
                            or _fires(ev, "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL"))
                            if (ev.datatag == tags.mc or ev.run <= 280385) else

                            (  _fires(ev, 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ')
                            or _fires(ev, "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ"))),
        2017 : lambda ev : (   _fires(ev, 'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL')
                            or _fires(ev, 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ')),
        2018 : lambda ev : (   _fires(ev, 'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL')
                            or _fires(ev, 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ')),
    },
)


from CMGTools.TTHAnalysis.tools.evtTagger import EvtTagger
Trigger_1e = lambda : EvtTagger('Trigger_1e',  [ lambda ev : triggerGroups['Trigger_1e'][ev.year](ev) ])
Trigger_1m = lambda : EvtTagger('Trigger_1m',  [ lambda ev : triggerGroups['Trigger_1m'][ev.year](ev) ])
Trigger_2e = lambda : EvtTagger('Trigger_2e',  [ lambda ev : triggerGroups['Trigger_2e'][ev.year](ev) ])
Trigger_2m = lambda : EvtTagger('Trigger_2m',  [ lambda ev : triggerGroups['Trigger_2m'][ev.year](ev) ])
Trigger_em = lambda : EvtTagger('Trigger_em',  [ lambda ev : triggerGroups['Trigger_em'][ev.year](ev) ])

#Trigger_1e = lambda : EvtTagger('Trigger_1e',  [ lambda ev : (ev.HLT_Ele27_WPTight_Gsf == 1) ])
#Trigger_1m = lambda : EvtTagger('Trigger_1m',  [ lambda ev : (ev.HLT_IsoTkMu24 == 1 or ev.HLT_IsoMu24 == 1) ])
#Trigger_2e = lambda : EvtTagger('Trigger_2e',  [ lambda ev : (ev.HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ == 1) ])
#Trigger_2m = lambda : EvtTagger('Trigger_2m',  [ lambda ev : (ev.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL == 1 or ev.HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL == 1) ])
#Trigger_em = lambda : EvtTagger('Trigger_em',  [ lambda ev : (ev.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL == 1 or ev.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL == 1) ])
#Trigger_em_data = lambda : EvtTagger('Trigger_em_data',  [ lambda ev : ((ev.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL == 1 or ev.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL == 1) if (ev.run <= 280385) else (ev.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ == 1 or ev.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ == 1)) ])



cond_singlemuon = [ lambda ev : (  (ev.channel == ch.ElMu and (not ev.Trigger_em) and ev.Trigger_1m)
                                or (ev.channel == ch.Muon and (not ev.Trigger_2m) and ev.Trigger_1m)) ]

cond_singleelec = [ lambda ev : ((   ev.channel == ch.ElMu and (not ev.Trigger_em) and (not ev.Trigger_1m) and ev.Trigger_1e)
                                 or (ev.channel == ch.Elec and (not ev.Trigger_2e) and ev.Trigger_1e)) ]
cond_doublemuon = [ lambda ev : (    ev.channel == ch.Muon and ev.Trigger_2m) ]
cond_doubleeg   = [ lambda ev : (    ev.channel == ch.Elec and ev.Trigger_2e) ]
cond_muoneg     = [ lambda ev : (    ev.channel == ch.ElMu and ev.Trigger_em) ]
#cond_muoneg     = [ lambda ev : (    ev.channel == ch.ElMu and ev.Trigger_em_data) ]

cond_mc         = [ lambda ev : (   (ev.channel == ch.ElMu and (ev.Trigger_em or ev.Trigger_1m or ev.Trigger_1e))
                                 or (ev.channel == ch.Muon and (ev.Trigger_1m or ev.Trigger_2m))
                                 or (ev.channel == ch.Elec and (ev.Trigger_1e or ev.Trigger_2e)) )]

remove_overlap_booleans = [ lambda ev : (
                            (  (ev.channel == ch.ElMu and (ev.Trigger_em or ev.Trigger_1m or ev.Trigger_1e))
                            or (ev.channel == ch.Muon and (ev.Trigger_1m or ev.Trigger_2m))
                            or (ev.channel == ch.Elec and (ev.Trigger_1e or ev.Trigger_2e)) )
                            if ev.datatag == tags.mc else

                            (  (ev.channel == ch.ElMu and (not ev.Trigger_em) and ev.Trigger_1m)
                            or (ev.channel == ch.Muon and (not ev.Trigger_2m) and ev.Trigger_1m))
                            if ev.datatag == tags.singlemuon else

                            ((  ev.channel == ch.ElMu and (not ev.Trigger_em) and (not ev.Trigger_1m) and ev.Trigger_1e)
                            or (ev.channel == ch.Elec and (not ev.Trigger_2e) and ev.Trigger_1e))
                            if ev.datatag == tags.singleelec else

                            (   ev.channel == ch.Muon and ev.Trigger_2m)
                            if ev.datatag == tags.doublemuon else

                            (  ev.channel == ch.Elec and ev.Trigger_2e)
                            if ev.datatag == tags.doubleeg else

                            (  ev.channel == ch.ElMu and ev.Trigger_em)
                            if ev.datatag == tags.muoneg else

                            (False)
                        )]


#remove_overlap_singlemuon = lambda : EvtTagger('pass_trigger', cond_singlemuon)
#remove_overlap_singleelec = lambda : EvtTagger('pass_trigger', cond_singleelec)
#remove_overlap_doublemuon = lambda : EvtTagger('pass_trigger', cond_doublemuon)
#remove_overlap_doubleeg   = lambda : EvtTagger('pass_trigger', cond_doubleeg)
#remove_overlap_muoneg     = lambda : EvtTagger('pass_trigger', cond_muoneg)
#remove_overlap_mc         = lambda : EvtTagger('pass_trigger', cond_mc)


remove_overlap = lambda : EvtTagger('pass_trigger', remove_overlap_booleans)


#triggerSeq = [Trigger_1e, Trigger_1m, Trigger_2e, Trigger_2m, Trigger_em, Trigger_em_data]
triggerSeq = [Trigger_1e, Trigger_1m, Trigger_2e, Trigger_2m, Trigger_em, remove_overlap]

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
    #"pt"       : 18, # Lo del stop
    "eta"      : 2.4,
    "isorelpf" : 0.15,
}

IDDict["elecs"] = {
    "pt"   : 20,
    #"pt"   : 18, # Lo del stop
    "eta0" : 1.4442,
    "eta1" : 1.566,
    "eta2" : 2.4,
    "dxy_b" : 0.05,
    "dz_b"  : 0.10,
    "dxy_e" : 0.10,
    "dz_e"  : 0.20,
    "etasc_be" : 1.479,
}

IDDict["jets"] = {
    "pt"      : 30,
    "pt2"     : 20,
    "ptloose" : 20,
    "eta"     : 2.4,
    "jetid_2016" : 0,  # > X
    #"jetid_2016" : 1,  # > X Lo del stop
    "jetid_2017" : 1,  # > X
    "jetid_2018" : 1,  # > X
}

#muonID = lambda l : ( abs(l.eta) < IDDict["muons"]["eta"] and l.pt > IDDict["muons"]["pt"] and l.pfRelIso04_all < IDDict["muons"]["isorelpf"]
                      #and l.tightId == 1 )
muonID = lambda l : ( abs(l.eta) < IDDict["muons"]["eta"] and l.corrected_pt > IDDict["muons"]["pt"] and l.pfRelIso04_all < IDDict["muons"]["isorelpf"]
                      and l.tightId == 1 )

elecID = lambda l : ( (abs(l.eta) < IDDict["elecs"]["eta2"] and (abs(l.eta) < IDDict["elecs"]["eta0"] or abs(l.eta) > IDDict["elecs"]["eta1"]) )
                       and l.pt > IDDict["elecs"]["pt"] and l.cutBased >= 4 and l.lostHits <= 1
                       #and ((abs(l.dxy) < IDDict["elecs"]["dxy_b"] and abs(l.dz) < IDDict["elecs"]["dz_b"]) if (l.eta <= IDDict["elecs"]["etasc_be"])   #### COMOL STOP
                       #else (abs(l.dxy) < IDDict["elecs"]["dxy_e"] and abs(l.dz) < IDDict["elecs"]["dz_e"])) )
                       and ((abs(l.dxy) < IDDict["elecs"]["dxy_b"] and abs(l.dz) < IDDict["elecs"]["dz_b"]) if (abs(l.eta) <= IDDict["elecs"]["etasc_be"])     ### COMO CREIA QUE ERA
                       else (abs(l.dxy) < IDDict["elecs"]["dxy_e"] and abs(l.dz) < IDDict["elecs"]["dz_e"])) )
                       #and ((abs(l.dxy) < IDDict["elecs"]["dxy_b"] and abs(l.dz) < IDDict["elecs"]["dz_b"]) if (abs(l.deltaEtaSC - l.eta) <= IDDict["elecs"]["etasc_be"]) ### COMO IGUAL ES
                       #else (abs(l.dxy) < IDDict["elecs"]["dxy_e"] and abs(l.dz) < IDDict["elecs"]["dz_e"])) )

partmuonID = lambda l : ( abs(l.eta) < IDDict["muons"]["eta"] and l.pt > IDDict["muons"]["pt"])
partelecID = lambda l : ( (abs(l.eta) < IDDict["elecs"]["eta2"] and (abs(l.eta) < IDDict["elecs"]["eta0"] or abs(l.eta) > IDDict["elecs"]["eta1"]) ) and l.pt > IDDict["elecs"]["pt"] )

# TODO: IMPLEMENTAR ID DE OBJETOS A NIVEL DE PARTICULA


from PhysicsTools.NanoAODTools.postprocessing.modules.common.collectionMerger import collectionMerger
lepMerge = lambda : collectionMerger(input = ["Electron", "Muon"],
                                     output = "LepGood",
                                     selector = dict(Muon = muonID, Electron = elecID))

# Lepton & trigger SF
from CMGTools.TTHAnalysis.tools.nanoAOD.lepScaleFactors_TopRun2 import lepScaleFactors_TopRun2
leptrigSFs = lambda : lepScaleFactors_TopRun2()


#### JET TREATMENTS ###
from CMGTools.TTHAnalysis.tools.nanoAOD.btag_weighter               import btag_weighter
from CMGTools.TTHAnalysis.tools.nanoAOD.jetmetGrouper               import groups as jecGroups
from CMGTools.TTHAnalysis.tools.combinedObjectTaggerForCleaning     import CombinedObjectTaggerForCleaning
from CMGTools.TTHAnalysis.tools.nanoAOD.fastCombinedObjectRecleaner import fastCombinedObjectRecleaner

#ctrJetSel_2016      = lambda j : j.pt > IDDict["jets"]["pt"]                                       and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2016"]
#loosectrJetSel_2016 = lambda j : j.pt > IDDict["jets"]["ptloose"] and j.pt <= IDDict["jets"]["pt"] and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2016"]
#ctrJetSel_2017      = lambda j : j.pt > IDDict["jets"]["pt"]                                       and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2017"]
#loosectrJetSel_2017 = lambda j : j.pt > IDDict["jets"]["ptloose"] and j.pt <= IDDict["jets"]["pt"] and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2017"]
#ctrJetSel_2018      = lambda j : j.pt > IDDict["jets"]["pt"]                                       and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2018"]
#loosectrJetSel_2018 = lambda j : j.pt > IDDict["jets"]["ptloose"] and j.pt <= IDDict["jets"]["pt"] and abs(j.eta) <  IDDict["jets"]["eta"] and j.jetid > IDDict["jets"]["jetid_2018"]

## b-tagging
btagEffpath = os.environ['CMSSW_BASE'] + "/src/CMGTools/TTHAnalysis/data/TopRun2/btagging/"
btagSFpath  = os.environ['CMSSW_BASE'] + "/src/PhysicsTools/NanoAODTools/data/btagSF/"

btagWeights_2016 = lambda : btag_weighter(btagSFpath + "DeepJet_2016LegacySF_V1.csv",  btagEffpath + "BtagMCSF.root", 'deepjet', year = 2016)
btagWeights_2017 = lambda : btag_weighter(btagSFpath + "DeepFlavour_94XSF_V3_B_F.csv", btagEffpath + "BtagMCSF.root", 'deepjet', year = 2017)
btagWeights_2018 = lambda : btag_weighter(btagSFpath + "DeepJet_102XSF_V1.csv",        btagEffpath + "BtagMCSF.root", 'deepjet', year = 2018)


# Cleaning
recleaner_step1_2016 = lambda : CombinedObjectTaggerForCleaning("InternalRecl",
                                                                looseLeptonSel    = lambda lep : True,
                                                                cleaningLeptonSel = lambda lep : True,
                                                                FOLeptonSel       = lambda lep : True,
                                                                tightLeptonSel    = lambda lep : True,
                                                                FOTauSel          = lambda tau : False,
                                                                tightTauSel       = lambda tau : False,
                                                                selectJet         = lambda jet: jet.jetId > IDDict["jets"]["jetid_2016"],  # pt and eta cuts are (hard)coded in the step2
                                                                tauCollection     = 'LepGood',
)

recleaner_step1_2017 = lambda : CombinedObjectTaggerForCleaning("InternalRecl",
                                                                looseLeptonSel    = lambda lep : True,
                                                                cleaningLeptonSel = lambda lep : True,
                                                                FOLeptonSel       = lambda lep : True,
                                                                tightLeptonSel    = lambda lep : True,
                                                                FOTauSel          = lambda tau : False,
                                                                tightTauSel       = lambda tau : False,
                                                                selectJet         = lambda jet: jet.jetId > IDDict["jets"]["jetid_2017"],
                                                                tauCollection     = 'LepGood',
)

recleaner_step1_2018 = lambda : CombinedObjectTaggerForCleaning("InternalRecl",
                                                                looseLeptonSel    = lambda lep : True,
                                                                cleaningLeptonSel = lambda lep : True,
                                                                FOLeptonSel       = lambda lep : True,
                                                                tightLeptonSel    = lambda lep : True,
                                                                FOTauSel          = lambda tau : False,
                                                                tightTauSel       = lambda tau : False,
                                                                selectJet         = lambda jet: jet.jetId > IDDict["jets"]["jetid_2018"],
                                                                tauCollection     = 'LepGood',
)


recleaner_step2_mc = lambda : fastCombinedObjectRecleaner(label = "Recl", inlabel = "_InternalRecl",
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


#### Add year
from CMGTools.TTHAnalysis.tools.addYear import addYear
addYear_2016 = lambda : addYear(2016)
addYear_2017 = lambda : addYear(2017)
addYear_2018 = lambda : addYear(2018)

#### Add data tag
from CMGTools.TTHAnalysis.tools.addDataTag import addDataTag
addMuonEG     = lambda : addDataTag(tags.muoneg)
addDoubleMuon = lambda : addDataTag(tags.doublemuon)
addDoubleEG   = lambda : addDataTag(tags.doubleeg)
addSingleMuon = lambda : addDataTag(tags.singlemuon)
addSingleElec = lambda : addDataTag(tags.singleelec)
addMC         = lambda : addDataTag(tags.mc)

addYearTag_2016_mc         = [addYear_2016, addMC]
addYearTag_2016_singlemuon = [addYear_2016, addSingleMuon]
addYearTag_2016_singleelec = [addYear_2016, addSingleElec]
addYearTag_2016_doublemuon = [addYear_2016, addDoubleMuon]
addYearTag_2016_doubleeg   = [addYear_2016, addDoubleEG]
addYearTag_2016_muoneg     = [addYear_2016, addMuonEG]

addYearTag_2017_mc         = [addYear_2017, addMC]
addYearTag_2017_singlemuon = [addYear_2017, addSingleMuon]
addYearTag_2017_singleelec = [addYear_2017, addSingleElec]
addYearTag_2017_doublemuon = [addYear_2017, addDoubleMuon]
addYearTag_2017_doubleeg   = [addYear_2017, addDoubleEG]
addYearTag_2017_muoneg     = [addYear_2017, addMuonEG]

addYearTag_2018_mc         = [addYear_2018, addMC]
addYearTag_2018_singlemuon = [addYear_2018, addSingleMuon]
addYearTag_2018_singleelec = [addYear_2018, addSingleElec]
addYearTag_2018_doublemuon = [addYear_2018, addDoubleMuon]
addYearTag_2018_doubleeg   = [addYear_2018, addDoubleEG]
addYearTag_2018_muoneg     = [addYear_2018, addMuonEG]

#### Add Rochester corrections
from CMGTools.TTHAnalysis.tools.addRochester import addRochester
addRoch = lambda : addRochester()

lepMerge_roch = [lepMerge, addRoch]


#### BDT
from CMGTools.TTHAnalysis.tools.nanoAOD.MVA_tWRun2 import MVA_tWRun2
SergioBDT = lambda : MVA_tWRun2()

mvas = [SergioBDT]

varstrigger = [eventVars] + triggerSeq

sfSeq_2016 = [leptrigSFs, btagWeights_2016]
sfSeq_2017 = [leptrigSFs, btagWeights_2017]
sfSeq_2018 = [leptrigSFs, btagWeights_2018]


# %%%%%%%%%%%%%%%%%%%%%%%%%% WWbb
# TODO

# %%%%%%%%%%%%%%%%%%%%%%%%%% tW+/tW-
# TODO
