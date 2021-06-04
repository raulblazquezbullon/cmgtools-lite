import os
import ROOT 
conf = dict(
        muPt = 10, 
        elePt = 10, 
        miniRelIso = 0.4, 
        sip3d = 8, 
        dxy =  0.05, 
        dz = 0.1, 
)

ttH_skim_cut = ("nMuon + nElectron >= 2 &&" + 
       "Sum$(Muon_pt > {muPt} && Muon_miniPFRelIso_all < {miniRelIso} && Muon_sip3d < {sip3d}) +"
       "Sum$(Electron_pt > {muPt} && Electron_miniPFRelIso_all < {miniRelIso} && Electron_sip3d < {sip3d})").format(**conf)


muonSelection     = lambda l : abs(l.eta) < 2.4 and l.pt > conf["muPt" ] and l.miniPFRelIso_all < conf["miniRelIso"] and l.sip3d < conf["sip3d"] and abs(l.dxy) < conf["dxy"] and abs(l.dz) < conf["dz"] 
electronSelection = lambda l : abs(l.eta) < 2.5 and l.pt > conf["elePt"] and l.miniPFRelIso_all < conf["miniRelIso"] and l.sip3d < conf["sip3d"] and abs(l.dxy) < conf["dxy"] and abs(l.dz) < conf["dz"] 

#and (l.isGlobal or l.isTracker) and l.mediumId 
#and l.lostHits<2
from CMGTools.TTHAnalysis.tools.nanoAOD.ttHPrescalingLepSkimmer import ttHPrescalingLepSkimmer
# NB: do not wrap lepSkim a lambda, as we modify the configuration in the cfg itself 
lepSkim = ttHPrescalingLepSkimmer(5, 
                muonSel = muonSelection, electronSel = electronSelection,
                minLeptonsNoPrescale = 2, # things with less than 2 leptons are rejected irrespectively of the prescale
                minLeptons = 2, requireSameSignPair = True,
                jetSel = lambda j : j.pt > 25 and abs(j.eta) < 2.4 and j.jetId >=2 , 
                minJets = 4, minMET = 70)
from PhysicsTools.NanoAODTools.postprocessing.modules.common.collectionMerger import collectionMerger
lepMerge = collectionMerger(input = ["Electron","Muon"], 
                            output = "LepGood", 
                            selector = dict(Muon = muonSelection, Electron = electronSelection))

from CMGTools.TTHAnalysis.tools.nanoAOD.ttHLeptonCombMasses import ttHLeptonCombMasses
lepMasses = ttHLeptonCombMasses( [ ("Muon",muonSelection), ("Electron",electronSelection) ], maxLeps = 4)

from CMGTools.TTHAnalysis.tools.nanoAOD.autoPuWeight import autoPuWeight
from CMGTools.TTHAnalysis.tools.nanoAOD.yearTagger import yearTag
from CMGTools.TTHAnalysis.tools.nanoAOD.xsecTagger import xsecTag
from CMGTools.TTHAnalysis.tools.nanoAOD.lepJetBTagAdder import lepJetBTagCSV, lepJetBTagDeepCSV, lepJetBTagDeepFlav, lepJetBTagDeepFlavC

ttH_sequence_step1 = [lepSkim, lepMerge, autoPuWeight, yearTag, xsecTag, lepJetBTagCSV, lepJetBTagDeepCSV, lepJetBTagDeepFlav, lepMasses]

#==== 
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaR
from CMGTools.TTHAnalysis.tools.nanoAOD.ttHLepQCDFakeRateAnalyzer import ttHLepQCDFakeRateAnalyzer
centralJetSel = lambda j : j.pt > 25 and abs(j.eta) < 2.4 and j.jetId >= 2
lepFR = ttHLepQCDFakeRateAnalyzer(jetSel = centralJetSel,
                                  pairSel = lambda pair : deltaR(pair[0].eta, pair[0].phi, pair[1].eta, pair[1].phi) > 0.7,
                                  maxLeptons = 1, requirePair = True)
from CMGTools.TTHAnalysis.tools.nanoAOD.nBJetCounter import nBJetCounter
nBJetDeepCSV25NoRecl = lambda : nBJetCounter("DeepCSV25", "btagDeepB", centralJetSel)
nBJetDeepFlav25NoRecl = lambda : nBJetCounter("DeepFlav25", "btagDeepFlavB", centralJetSel)

ttH_sequence_step1_FR = [m for m in ttH_sequence_step1 if m != lepSkim] + [ lepFR, nBJetDeepCSV25NoRecl, nBJetDeepFlav25NoRecl ]
ttH_skim_cut_FR = ("nMuon + nElectron >= 1 && nJet >= 1 && Sum$(Jet_pt > 25 && abs(Jet_eta)<2.4) >= 1 &&" + 
       "Sum$(Muon_pt > {muPt} && Muon_miniPFRelIso_all < {miniRelIso} && Muon_sip3d < {sip3d}) +"
       "Sum$(Electron_pt > {muPt} && Electron_miniPFRelIso_all < {miniRelIso} && Electron_sip3d < {sip3d}").format(**conf)


#==== items below are normally run as friends ====

def ttH_idEmu_cuts_E3(lep):
    if (abs(lep.pdgId)!=11): return True
    if (lep.hoe>=(0.10-0.00*(abs(lep.eta+lep.deltaEtaSC)>1.479))): return False
    if (lep.eInvMinusPInv<=-0.04): return False
    if (lep.sieie>=(0.011+0.019*(abs(lep.eta+lep.deltaEtaSC)>1.479))): return False
    return True

def interp_deepJet(lep_flav, year, minPt, maxPt, pt ):
#### deepFlavour_cut_high at minPt and deepFlavour_cut_low at maxPt
   if abs(lep_flav) == 13:
      deepFlavour_H_values = (0.02,0.025,0.025)
      deepFlavour_L_values = (0.015,0.015,0.015)
   elif abs(lep_flav) == 11:
      deepFlavour_H_values = (0.5,0.5,0.4)
      deepFlavour_L_values = (0.05,0.08,0.05)
   
   if deepFlavour_H_values[year-2016] == deepFlavour_L_values[year-2016]:
      return deepFlavour_H_values[year-2016]
   elif pt < minPt:
      return deepFlavour_H_values[year-2016]
   elif pt > maxPt:
      return deepFlavour_L_values[year-2016]
   else:
      return ( deepFlavour_H_values[year-2016] - ( deepFlavour_H_values[year-2016] - deepFlavour_L_values[year-2016] ) / ( maxPt - minPt ) * ( pt - minPt ) )

def conept_TTH(lep):
    if (abs(lep.pdgId)!=11 and abs(lep.pdgId)!=13): return lep.pt
    if (abs(lep.pdgId)==13 and lep.mediumId>0 and lep.mvaTTH > 0.90) or (abs(lep.pdgId) == 11 and lep.mvaTTH > 0.90): return lep.pt
    else: return 0.90 * lep.pt * (1 + lep.jetRelIso)

def conept_TTW(lep):
    if (abs(lep.pdgId)!=11 and abs(lep.pdgId)!=13): return lep.pt
    if (abs(lep.pdgId)==13 and lep.mvaTOP > 0.40) or (abs(lep.pdgId) == 11 and lep.mvaTOP > 0.40): return lep.pt
    else: return 0.67 * lep.pt * (1 + lep.jetRelIso)

def smoothBFlav(jetpt,ptmin,ptmax,year,scale_loose=1.0):
    wploose = (0.0614, 0.0521, 0.0494)
    wpmedium = (0.3093, 0.3033, 0.2770)
    x = min(max(0.0, jetpt - ptmin)/(ptmax-ptmin), 1.0)
    return x*wploose[year-2016]*scale_loose + (1-x)*wpmedium[year-2016]


def clean_and_FO_selection_TTH(lep,year):
    bTagCut = 0.3093 if year==2016 else 0.3033 if year==2017 else 0.2770
    return lep.conept>10 and lep.jetBTagDeepFlav<bTagCut and (abs(lep.pdgId)!=11 or (ttH_idEmu_cuts_E3(lep) and lep.convVeto and lep.lostHits == 0)) \
        and (lep.mvaTOP>(0.90 if abs(lep.pdgId)==13 else 0.90) or \
             (abs(lep.pdgId)==13 and lep.jetBTagDeepFlav< smoothBFlav(0.9*lep.pt*(1+lep.jetRelIso), 20, 45, year) and lep.jetRelIso < 0.50) or \
             (abs(lep.pdgId)==11 and lep.mvaFall17V2noIso_WP80 and lep.jetRelIso < 0.70))

def clean_and_FO_selection_TTW(lep,year):
    return lep.conept>10 and (abs(lep.pdgId)!=11 or (ttH_idEmu_cuts_E3(lep) and lep.convVeto and lep.tightCharge>=2 and lep.lostHits <= 1)) \
        and  (abs(lep.pdgId)!=13 or lep.mediumId) and (lep.mvaTOP>0.4 or (abs(lep.pdgId)==13 and lep.jetBTagDeepFlav< interp_deepJet(lep.pdgId,year,20,40,lep.pt) and lep.jetRelIso < 1.2222) or \
             (abs(lep.pdgId)==11 and lep.mvaFall17V2noIso_WPL and lep.jetRelIso < 1 and lep.jetBTagDeepFlav < interp_deepJet(lep.pdgId,year,25,50,lep.pt) ))

tightLeptonSel = lambda lep,year : clean_and_FO_selection_TTW(lep,year) and lep.mvaTOP > 0.40 

foTauSel = lambda tau: tau.pt > 20 and abs(tau.eta)<2.3 and abs(tau.dxy) < 1000 and abs(tau.dz) < 0.2 and tau.idDecayModeNewDMs and (int(tau.idDeepTau2017v2p1VSjet)>>1 & 1) # VVLoose WP
tightTauSel = lambda tau: (int(tau.idDeepTau2017v2p1VSjet)>>2 & 1) # VLoose WP

from CMGTools.TTHAnalysis.tools.nanoAOD.jetmetGrouper import groups as jecGroups
from CMGTools.TTHAnalysis.tools.combinedObjectTaggerForCleaning import CombinedObjectTaggerForCleaning
from CMGTools.TTHAnalysis.tools.nanoAOD.fastCombinedObjectRecleaner import fastCombinedObjectRecleaner


recleaner_step1 = lambda : CombinedObjectTaggerForCleaning("InternalRecl",
                                                           looseLeptonSel = lambda lep: lep.miniPFRelIso_all < 0.4 and lep.sip3d < 8 and abs(lep.dxy) < 0.05 and abs(lep.dz) < 0.1 and (abs(lep.pdgId)!=11 or (abs(lep.eta)<2.5 and lep.lostHits<=1)) and (abs(lep.pdgId)!=13 or (abs(lep.eta)<2.4 and lep.mediumId) ),
                                                           cleaningLeptonSel = clean_and_FO_selection_TTW,
                                                           FOLeptonSel = clean_and_FO_selection_TTW,
                                                           tightLeptonSel = tightLeptonSel,
                                                           FOTauSel = foTauSel,
                                                           tightTauSel = tightTauSel,
                                                           selectJet = lambda jet: jet.jetId >= 2, # pt and eta cuts are (hard)coded in the step2 
                                                           coneptdef = lambda lep: conept_TTW(lep),
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
                                                                        variations= [ 'jes%s'%v for v in jecGroups] + ['jer%s'%x for x in ['barrel','endcap1','endcap2highpt','endcap2lowpt' ,'forwardhighpt','forwardlowpt']  ]  + ['HEM']
)
recleaner_step2_mc = lambda : fastCombinedObjectRecleaner(label="Recl", inlabel="_InternalRecl",
                                                          cleanTausWithLooseLeptons=True,
                                                          cleanJetsWithFOTaus=True,
                                                          doVetoZ=False, doVetoLMf=False, doVetoLMt=False,
                                                          jetPts=[25,40],
                                                          jetPtsFwd=[25,60], # second number for 2.7 < abseta < 3, the first for the rest
                                                          btagL_thr=99, # they are set at runtime 
                                                          btagM_thr=99,
                                                          isMC = True,
                                                          
)
recleaner_step2_data = lambda : fastCombinedObjectRecleaner(label="Recl", inlabel="_InternalRecl",
                                         cleanTausWithLooseLeptons=True,
                                         cleanJetsWithFOTaus=True,
                                         doVetoZ=False, doVetoLMf=False, doVetoLMt=False,
                                         jetPts=[25,40],
                                         jetPtsFwd=[25,60], # second number for 2.7 < abseta < 3, the first for the rest
                                         btagL_thr=-99., # they are set at runtime  
                                         btagM_thr=-99., # they are set at runtime  
                                         isMC = False,
                                         variations = []

)



from CMGTools.TTHAnalysis.tools.eventVars_2lss import EventVars2LSS
eventVars = lambda : EventVars2LSS('','Recl')
eventVars_allvariations = lambda : EventVars2LSS('','Recl',variations = [ 'jes%s'%v for v in jecGroups] + ['jer%s'%x for x in ['barrel','endcap1','endcap2highpt','endcap2lowpt' ,'forwardhighpt','forwardlowpt']  ]  + ['HEM'])

from CMGTools.TTHAnalysis.tools.hjDummCalc import HjDummyCalc
hjDummy = lambda : HjDummyCalc(variations  = [ 'jes%s'%v for v in jecGroups] + ['jer%s'%x for x in ['barrel','endcap1','endcap2highpt','endcap2lowpt' ,'forwardhighpt','forwardlowpt']  ]  + ['HEM'])

from CMGTools.TTHAnalysis.tools.objTagger import ObjTagger
isMatchRightCharge = lambda : ObjTagger('isMatchRightCharge','LepGood', [lambda l,g : (l.genPartFlav==1 or l.genPartFlav == 15) and (g.pdgId*l.pdgId > 0) ], linkColl='GenPart',linkVar='genPartIdx')
mcMatchId     = lambda : ObjTagger('mcMatchId','LepGood', [lambda l : (l.genPartFlav==1 or l.genPartFlav == 15) ])
mcPromptGamma = lambda : ObjTagger('mcPromptGamma','LepGood', [lambda l : (l.genPartFlav==22)])
mcMatch_seq   = [ isMatchRightCharge, mcMatchId ,mcPromptGamma]

countTaus = lambda : ObjTagger('Tight','TauSel_Recl', [lambda t : t.idDeepTau2017v2p1VSjet&4])

from CMGTools.TTHAnalysis.tools.nanoAOD.jetmetGrouper import jetMetCorrelate2016,jetMetCorrelate2017,jetMetCorrelate2018
from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jetmetHelperRun2 import createJMECorrector


jetmetUncertainties2016All = createJMECorrector(dataYear=2016, jesUncert="All")
jetmetUncertainties2017All = createJMECorrector(dataYear=2017, jesUncert="All", metBranchName="METFixEE2017")
jetmetUncertainties2018All = createJMECorrector(dataYear=2018, jesUncert="All")

jme2016_allvariations = [jetmetUncertainties2016All,jetMetCorrelate2016] 
jme2017_allvariations = [jetmetUncertainties2017All,jetMetCorrelate2017]
jme2018_allvariations = [jetmetUncertainties2018All,jetMetCorrelate2018]
def _fires(ev, path):
    if "/hasfiredtriggers_cc.so" not in ROOT.gSystem.GetLibraries():
        ROOT.gROOT.ProcessLine(".L %s/src/CMGTools/Production/src/hasfiredtriggers.cc+O" % os.environ['CMSSW_BASE'])
    if not hasattr(ev,path): return False 
    if ev.run == 1:  # is MC
        return getattr( ev,path ) 
    return getattr(ROOT, 'fires_%s_%d'%(path,ev.year))( ev.run, getattr(ev,path))


triggerGroups=dict(
    Trigger_1e={
        2016 : lambda ev : _fires(ev,'HLT_Ele27_WPTight_Gsf') or _fires(ev,'HLT_Ele105_CaloIdVT_GsfTrkIdT') or _fires(ev,'HLT_Ele115_CaloIdVT_GsfTrkIdT'),
        2017 : lambda ev : _fires(ev,'HLT_Ele32_WPTight_Gsf') or _fires(ev,'HLT_Ele35_WPTight_Gsf') or _fires(ev,'HLT_Ele115_CaloIdVT_GsfTrkIdT'),
        2018 : lambda ev : _fires(ev,'HLT_Ele32_WPTight_Gsf') or _fires(ev, 'HLT_Ele115_CaloIdVT_GsfTrkIdT'), #or _fires(ev, 'HLT_Photon200')
    },
    Trigger_1m={
        2016 : lambda ev : _fires(ev,'HLT_IsoMu24') or _fires(ev,'HLT_IsoTkMu24') or _fires(ev,'HLT_Mu50') or _fires(ev,'HLT_TkMu50') or _fires(ev,'HLT_Mu45_eta2p1'),
        2017 : lambda ev : _fires(ev,'HLT_IsoMu24') or _fires(ev,'HLT_IsoMu27') or _fires(ev,'HLT_IsoMu24_eta2p1') or _fires(ev,'HLT_Mu50') or  _fires(ev,'HLT_OldMu100') or   _fires(ev,'HLT_TkMu100'),
        2018 : lambda ev : _fires(ev,'HLT_IsoMu24') or _fires(ev, 'HLT_IsoMu27') or _fires(ev, 'HLT_Mu50') or _fires(ev, 'HLT_OldMu100') or _fires(ev, 'HLT_TkMu100'),
    },
    Trigger_2e={
        2016 : lambda ev : _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ') or _fires(ev,'HLT_DoubleEle33_CaloIdL_GsfTrkIdVL') or _fires(ev,'HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW'),
        2017 : lambda ev : _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL') or _fires(ev,'HLT_DoubleEle33_CaloIdL_MW'),
        2018 : lambda ev : _fires(ev,'HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL') or _fires(ev, 'HLT_DoubleEle25_CaloIdL_MW'),
    },
    Trigger_2m={
        2016 : lambda ev : _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL') or _fires(ev,'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL') or  _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ') or _fires(ev,'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ') or _fires(ev,'HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL') or _fires(ev,'HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ') or _fires(ev,'HLT_Mu30_TkMu11'),
        2017 : lambda ev : _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8') or _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8') or _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL') or _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ') or _fires(ev,'HLT_Mu37_TkMu27'),
        2018 : lambda ev : _fires(ev,'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8') or _fires(ev, 'HLT_Mu37_TkMu27'),
    },
    Trigger_em={
        2016 :  lambda ev : _fires(ev, 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL') or _fires(ev,'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ') \
        or _fires(ev, 'HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL') or _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ') or _fires(ev,'HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL') or _fires(ev,'HLT_Mu33_Ele33_CaloIdL_GsfTrkIdVL'),
        2017 :  lambda ev : _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL')\
        or _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ')\
        or _fires(ev,'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ')\
        or _fires(ev,'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ')\
        or  _fires(ev,'HLT_Mu27_Ele37_CaloIdL_MW')\
        or  _fires(ev,'HLT_Mu37_Ele27_CaloIdL_MW'),\
        2018 :  lambda ev : _fires(ev,'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL')\
        or _fires(ev,'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ')\
        or _fires(ev, 'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ')\
        or _fires(ev, 'HLT_Mu27_Ele37_CaloIdL_MW')\
        or _fires(ev, 'HLT_Mu37_Ele27_CaloIdL_MW')\
        or _fires(ev,'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ'),
    },
    Trigger_3e={
        2016 : lambda ev : _fires(ev,'HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'),
        2017 : lambda ev : _fires(ev,'HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'),
        2018 : lambda ev : _fires(ev,'HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'), # prescaled in the two years according to https://twiki.cern.ch/twiki/bin/view/CMS/EgHLTRunIISummary#2018
    },
    Trigger_3m={
        2016 : lambda ev : _fires(ev,'HLT_TripleMu_12_10_5'),
        2017 : lambda ev : _fires(ev,'HLT_TripleMu_10_5_5_DZ') or _fires(ev,'HLT_TripleMu_5_3_3_Mass3p8to60_DZ') or _fires(ev,'HLT_TripleMu_12_10_5'),
        2018 : lambda ev : _fires(ev,'HLT_TripleMu_12_10_5') or _fires(ev, 'HLT_TripleMu_5_3_3_Mass3p8to60_DZ'),
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
        2016 : lambda ev : _fires(ev,'HLT_MET200') or _fires(ev,'HLT_PFMET300') or _fires(ev,'HLT_PFMET170_HBHECleaned') or _fires(ev,'HLT_PFMET120_PFMHT120_IDTight'), 
        2017 : lambda ev : _fires(ev,'HLT_PFMET140_PFMHT140_IDTight'),
        2018 : lambda ev : _fires(ev,'HLT_PFMET120_PFMHT120_IDTight') or _fires(ev,'HLT_DiJet110_35_Mjj650_PFMET110') or   _fires(ev,'HLT_PFMET120_PFMHT120_IDTight') or _fires(ev,'HLT_PFMET250_HBHECleaned') or _fires(ev,'HLT_PFMET200_HBHE_BeamHaloCleaned') or _fires(ev,'HLT_PFMETTypeOne140_PFMHT140_IDTight') or _fires(ev,'HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned') or _fires(ev,'HLT_TripleJet110_35_35_Mjj650_PFMET110') or _fires(ev,'HLT_CaloMET350_HBHECleaned'),
    },
     Trigger_JetHT={
       2016: lambda ev : _fires(ev,'HLT_PFHT400_SixJet30_DoubleBTagCSV_p056') or _fires(ev,'HLT_PFHT900') or _fires(ev,'HLT_PFHT650_WideJetMJJ900DEtaJJ1p5') or  _fires(ev,'HLT_CaloJet500_NoJetID'),
       2017: lambda ev : _fires(ev,'HLT_PF_Jet500') or _fires(ev,'HLT_CaloJet500_NoJetID') or _fires(ev,'HLT_AK8PFJet500'),
       2018: lambda ev : _fires(ev,'HLT_CaloJet500_NoJetID') or _fires(ev,'HLT_AK8PFJet400_TrimMass30') or _fires(ev,'HLT_AK8PFJet_500') or _fires(ev,'HLT_PFJet500') or _fires(ev,'HLT_PFHT1050'),
    }
)


triggerGroups_dict=dict(
    Trigger_1e={
        2016 :  ['HLT_Ele27_WPTight_Gsf' , 'HLT_Ele105_CaloIdVT_GsfTrkIdT' , 'HLT_Ele115_CaloIdVT_GsfTrkIdT'],
        2017 :  ['HLT_Ele32_WPTight_Gsf' , 'HLT_Ele35_WPTight_Gsf','HLT_Ele115_CaloIdVT_GsfTrkIdT'],
        2018 :  ['HLT_Ele32_WPTight_Gsf','HLT_Ele115_CaloIdVT_GsfTrkIdT'],
    },
    Trigger_1m={
        2016 :  ['HLT_IsoMu24' , 'HLT_IsoTkMu24' ,'HLT_IsoTkMu24', 'HLT_Mu50','HLT_TkMu50','HLT_TkMu50'],
        2017 :  ['HLT_IsoMu24' , 'HLT_IsoMu27','HLT_IsoMu24_eta2p1','HLT_Mu50','HLT_OldMu100','HLT_TkMu100'],
        2018 :  ['HLT_IsoMu24','HLT_IsoMu27','HLT_Mu50','HLT_OldMu100','HLT_TkMu100'],
    },
    Trigger_2e={
        2016 :  ['HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ','HLT_DoubleEle33_CaloIdL_GsfTrkIdVL','HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW'],
        2017 :  ['HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL','HLT_DoubleEle33_CaloIdL_MW'],
        2018 :  ['HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL','HLT_DoubleEle25_CaloIdL_MW'],
    },
    Trigger_2m={
        2016 :  ['HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL' , 'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL' ,  'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ' , 'HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ','HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL','HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ','HLT_Mu30_TkMu11'],
        2017 :  ['HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8' , 'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8','HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL'],
        2018 :  ['HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8','HLT_Mu37_TkMu27'],
    },
    Trigger_em={
        2016 :   ['HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL' , 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ', 'HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL' , 'HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ','HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL','HLT_Mu33_Ele33_CaloIdL_GsfTrkIdVL'],
        2017 :   ['HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL', 'HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ'        , 'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ'        , 'HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ','HLT_Mu27_Ele37_CaloIdL_MW','HLT_Mu37_Ele27_CaloIdL_MW'],
        2018 :   ['HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL','HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ','HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ','HLT_Mu27_Ele37_CaloIdL_MW','HLT_Mu37_Ele27_CaloIdL_MW','HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ'],
    },
    Trigger_3e={
        2016 :  ['HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'],
        2017 :  ['HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'],
        2018 :  ['HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL'], # prescaled in the two years according to https://twiki.cern.ch/twiki/bin/view/CMS/EgHLTRunIISummary#2018
    },
    Trigger_3m={
        2016 :  ['HLT_TripleMu_12_10_5'],
        2017 :  ['HLT_TripleMu_10_5_5_DZ','HLT_TripleMu_5_3_3_Mass3p8to60_DZ','HLT_TripleMu_12_10_5'],
        2018 :  ['HLT_TripleMu_12_10_5','HLT_TripleMu_5_3_3_Mass3p8to60_DZ'],
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
    Trigger_MET={
        2016 : ['HLT_MET200','HLT_PFMET300','HLT_PFMET170_HBHECleaned','HLT_PFMET120_PFMHT120_IDTight'],
        2017 : ['HLT_PFMET140_PFMHT140_IDTight'],
        2018 : ['HLT_DiJet110_35_Mjj650_PFMET110','HLT_PFMET120_PFMHT120_IDTight','HLT_PFMET250_HBHECleaned','HLT_PFMET200_HBHE_BeamHaloCleaned','HLT_PFMETTypeOne140_PFMHT140_IDTight','HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned','HLT_TripleJet110_35_35_Mjj650_PFMET110','HLT_CaloMET350_HBHECleaned']
    },
   Trigger_JetHT={
        2016 : ['HLT_PFHT400_SixJet30_DoubleBTagCSV_p056','HLT_PFHT900','HLT_PFHT650_WideJetMJJ900DEtaJJ1p5','HLT_CaloJet500_NoJetID'],
        2017 : ['HLT_PF_Jet500','HLT_CaloJet500_NoJetID','HLT_AK8PFJet500'],
        2018 : ['HLT_CaloJet500_NoJetID','HLT_AK8PFJet400_TrimMass30','HLT_AK8PFJet500','HLT_PFJet500','HLT_PFHT1050'],
},
)


from CMGTools.TTHAnalysis.tools.evtTagger import EvtTagger

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
Trigger_JetHT  = lambda : EvtTagger('Trigger_JetHT',[ lambda ev : triggerGroups['Trigger_JetHT'][ev.year](ev) ])

triggerSequence = [Trigger_1e,Trigger_1m,Trigger_2e,Trigger_2m,Trigger_em,Trigger_3e,Trigger_3m,Trigger_mee,Trigger_mme,Trigger_2lss,Trigger_3l,Trigger_MET,Trigger_JetHT]


from CMGTools.TTHAnalysis.tools.BDT_eventReco_cpp import BDT_eventReco

BDThttTT_Hj = lambda : BDT_eventReco(os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/TMVAClassification_bloose_BDTG.weights.xml',
                                     os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/TMVAClassification_btight_BDTG.weights.xml',
                                     os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/Hjtagger_legacy_xgboost_v1.weights.xml',
                                     os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/Hjj_csv_BDTG.weights.xml',
                                     os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/resTop_xgb_csv_order_deepCTag.xml.gz',
                                     os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/HTT_HadTopTagger_2017_nomasscut_nvar17_resolved.xml',
                                     os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/TF_jets_kinfit_httTT.root',
                                     algostring = 'k_httTT_Hj',
                                     csv_looseWP = 0.5426, 
                                     csv_mediumWP = 0.8484,
                                     selection = [
                                         lambda leps,jets,event : len(leps)>=2,
                                         lambda leps,jets,event : leps[0].conePt>20 and leps[1].conePt>10,
                                     ]
)

BDThttTT_allvariations = lambda : BDT_eventReco(os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/TMVAClassification_bloose_BDTG.weights.xml',
                                                os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/TMVAClassification_btight_BDTG.weights.xml',
                                                os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/Hjtagger_legacy_xgboost_v1.weights.xml',
                                                os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/Hjj_csv_BDTG.weights.xml',
                                                os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/resTop_xgb_csv_order_deepCTag.xml.gz',
                                                os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/HTT_HadTopTagger_2017_nomasscut_nvar17_resolved.xml',
                                                os.environ["CMSSW_BASE"]+'/src/CMGTools/TTHAnalysis/data/kinMVA/tth/TF_jets_kinfit_httTT.root',
                                                algostring = 'k_httTT_Hj',
                                                csv_looseWP = 0.5426, 
                                                csv_mediumWP = 0.8484,
                                                selection = [
                                                    lambda leps,jets,event : len(leps)>=2,
                                                    lambda leps,jets,event : leps[0].conePt>20 and leps[1].conePt>10,
                                                ],
                                                variations = [ 'jes%s'%v for v in jecGroups] + ['jer%s'%x for x in ['barrel','endcap1','endcap2highpt','endcap2lowpt' ,'forwardhighpt','forwardlowpt']  ]  + ['HEM'] ,
)



from CMGTools.TTHAnalysis.tools.finalMVA_DNN import finalMVA_DNN
finalMVA = lambda : finalMVA_DNN() # use this for data
finalMVA_allVars = lambda : finalMVA_DNN( variations = [ 'jes%s'%v for v in jecGroups] + ['jer%s'%x for x in ['barrel','endcap1','endcap2highpt','endcap2lowpt' ,'forwardhighpt','forwardlowpt']  ]  + ['HEM'])

from CMGTools.TTHAnalysis.tools.finalMVA_DNN_3l import finalMVA_DNN_3l
finalMVA3L = lambda : finalMVA_DNN_3l() # use this for data
finalMVA3L_allVars = lambda : finalMVA_DNN_3l(variations = [ 'jes%s'%v for v in jecGroups] + ['jer%s'%x for x in ['barrel','endcap1','endcap2highpt','endcap2lowpt' ,'forwardhighpt','forwardlowpt']  ]  + ['HEM'])

from CMGTools.TTHAnalysis.tools.nanoAOD.finalMVA_4l import FinalMVA_4L
finalMVA_4l = lambda : FinalMVA_4L()

#from CMGTools.TTHAnalysis.tools.LepMVAFriend import LepMVAFriend
#lepMVA_mu_2016 = lambda : LepMVAFriend((os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/data/leptonMVA/ttw/TMVA_BDTG_TOP%s.weights.xml",
#                                                   os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/data/leptonMVA/ttw/TMVA_BDTG_TOP%s.weights.xml"),"2016",training="Ghent_MVA_2016", label="FriendTTW")

from PhysicsTools.NanoAODTools.postprocessing.modules.btv.btagSFProducer import btagSFProducer
from PhysicsTools.NanoAODTools.postprocessing.modules.btv.btagSFProducer_nojes import btagSFProducer_nojes


btagSF2016_dj_allVars = lambda : btagSFProducer("Legacy2016",'deepjet',collName="JetSel_Recl",storeOutput=True,perJesComponents=False)
btagSF2017_dj_allVars = lambda : btagSFProducer("2017",'deepjet',collName="JetSel_Recl",storeOutput=False,perJesComponents=True)
btagSF2018_dj_allVars = lambda : btagSFProducer("2018",'deepjet',collName="JetSel_Recl",storeOutput=False,perJesComponents=True)

btagSF2016_dj = lambda : btagSFProducer_nojes("Legacy2016",'deepjet',verbose=2,collName="JetSel_Recl",storeOutput=False)
btagSF2017_dj = lambda : btagSFProducer_nojes("2017",'deepjet',collName="JetSel_Recl",storeOutput=False)
btagSF2018_dj = lambda : btagSFProducer_nojes("2018",'deepjet',collName="JetSel_Recl",storeOutput=False)

#from CMGTools.TTHAnalysis.tools.nanoAOD.BtagSFs_new import BtagSFs_new
#from CMGTools.TTHAnalysis.tools.nanoAOD.BtagSFs import BtagSFs
from CMGTools.TTHAnalysis.tools.nanoAOD.btag_weighter  import btag_weighter 
#bTagSFs = lambda : BtagSFs_new("JetSel_Recl",
#                           corrs = {"" : 1.},
#                       )

#bTagSFs_allvars = lambda : BtagSFs("JetSel_Recl",
#                                   corrs=jecGroups,
#                       )

from CMGTools.TTHAnalysis.tools.nanoAOD.lepScaleFactors import lepScaleFactors
leptonSFs = lambda : lepScaleFactors()

#scaleFactorSequence_2016 = [btagSF2016_dj,bTagSFs] 
#scaleFactorSequence_2017 = [btagSF2017_dj,bTagSFs] 
#scaleFactorSequence_2018 = [btagSF2018_dj,bTagSFs]

btagSFpath = os.environ['CMSSW_BASE'] + "/src/PhysicsTools/NanoAODTools/data/btagSF/"
btagEffpath =  os.environ['CMSSW_BASE'] + "/src/CMGTools/TTHAnalysis/data/btag/ttW/"

btagWeights_2016 = lambda : btag_weighter(btagSFpath + "DeepJet_2016LegacySF_V1_YearCorrelation-V1.csv",  btagEffpath+"bTag_Eff_" , 'deepjet', year = 2016,SFmeasReg = "comb",
                 minptlow = 20, minpthigh = 999., maxeta = 2.5,
                 jecvars = "", lepenvars = "",correlations = True,
                 debug = False)
btagWeights_2017 = lambda : btag_weighter(btagSFpath + "DeepFlavour_94XSF_V3_B_F_comb_YearCorrelation-V1.csv",  btagEffpath+"bTag_Eff_" , 'deepjet', year = 2017,SFmeasReg = "comb",
                 minptlow = 20, minpthigh = 999., maxeta = 2.5,
                 jecvars = "", lepenvars = "",correlations = True)

btagWeights_2018 = lambda : btag_weighter(btagSFpath + "DeepJet_102XSF_V1_YearCorrelation-V1.csv",  btagEffpath+"bTag_Eff_" , 'deepjet', year = 2018,SFmeasReg = "comb",
                 minptlow = 20, minpthigh = 999., maxeta = 2.5,
                 jecvars = "", lepenvars = "",correlations = True)

#scaleFactorSequence_allVars_2016 = [btagSF2016_dj_allVars] 
#scaleFactorSequence_allVars_2017 = [btagSF2017_dj_allVars,bTagSFs_allvars] 
#scaleFactorSequence_allVars_2018 = [btagSF2018_dj_allVars,bTagSFs_allvars]


from CMGTools.TTHAnalysis.tools.nanoAOD.higgsDecayFinder import higgsDecayFinder
higgsDecay = lambda : higgsDecayFinder()

from CMGTools.TTHAnalysis.tools.nanoAOD.VHsplitter import VHsplitter
vhsplitter = lambda : VHsplitter()

# from CMGTools.TTHAnalysis.tools.synchTools import SynchTuples
# synchTuples = lambda : SynchTuples()


# instructions to friend trees  code 

# 0_jmeUnc_v1
# mc only (per year) 
# jetmetUncertainties2016 
# jetmetUncertainties2017
# jetmetUncertainties2018

# 3_recleaner_v0 (recleaner, also containing mc matching and trigger bits) 
# recleaner_step1,recleaner_step2_mc,mcMatch_seq,higgsDecay,triggerSequence (MC)
# recleaner_step1,recleaner_step2_data,triggerSequence (data)

# 4_leptonSFs_v0 (lepton, trigger and btag scale factors, to run after recleaning) 
# mc only (per year)
# scaleFactorSequence_2016
# scaleFactorSequence_2017
# scaleFactorSequence_2018

# 5_evtVars_v0
from CMGTools.TTHAnalysis.tools.nanoAOD.ttH_gen_reco import ttH_gen_reco
#
#from CMGTools.TTHAnalysis.tools.topRecoSemiLept import TopRecoSemiLept
#topRecoModule = lambda : TopRecoSemiLept(constraints=['kWHadMass','kWLepMass','kTopLepMass','kTopHadMass'])
