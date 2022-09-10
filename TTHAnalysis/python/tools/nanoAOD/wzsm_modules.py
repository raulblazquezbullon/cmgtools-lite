'''
Modules used for the WZ-Run3 Analysis.
'''
import os
import ROOT 
# ---------------------------------------------------- LEPTON MERGER+SKIM  ---------------------------------------------------- # 
from PhysicsTools.NanoAODTools.postprocessing.modules.common.collectionMerger import collectionMerger
from CMGTools.TTHAnalysis.tools.nanoAOD.skimNRecoLeps import SkimRecoLeps
### Lepton definitions 
# Muons 
min_mu_pt = 0.5
max_mu_eta = 2.4

# Electrons  
min_el_pt = 5
max_el_eta = 2.5

# Common
relIso = 0.4
dxy = 0.05
dz = 0.1
sip3d = 8

### Lambda selectors
isoAndIPCuts  = lambda  l : l.miniPFRelIso_all < relIso  and abs(l.dxy) < dxy and abs(l.dz) < dz and l.sip3d < sip3d 
muonSelection = lambda l : ((abs(l.eta) < max_mu_eta) and (l.pt > min_mu_pt)
                             and isoAndIPCuts(l) and l.looseId)
elecSelection = lambda l : (( abs(l.eta) < max_el_eta) and (l.pt > min_mu_pt)
                              and isoAndIPCuts(l) and l.lostHits < 2)

lepMerge = collectionMerger(input = ["Electron", "Muon"], 
                            output = "LepGood",
                            selector = dict(Muon = muonSelection, Electron = elecSelection))

lepSkim = SkimRecoLeps() # Skim configuration: at least 2 leptons
lepCollector = [lepMerge, lepSkim]
# ---------------------------------------------------------------------------------------------------------------------------- #

# ---------------------------------------------------- LEPTON RECLEANER  ---------------------------------------------------- # 
from CMGTools.TTHAnalysis.tools.nanoAOD.leptonJetRecleanerWZSM import LeptonJetRecleanerWZSM
from CMGTools.TTHAnalysis.tools.functionsWZ_v5 import _loose_muon, _loose_electron, _loose_lepton, _fO_muon, _fO_electron, _fO_lepton,_tight_muon,_tight_electron,_tight_lepton,conept


recleaner_2022 = lambda : LeptonJetRecleanerWZSM("Mini",
                                        lambda lep :        _loose_lepton(lep, 0.0494, 0.2770),         #Loose selection 
                                        lambda lep,jetlist: _fO_lepton(lep, 0.0494, 0.2770,jetlist),    #Clean on FO
                                        lambda lep,jetlist: _fO_lepton(lep, 0.0494, 0.2770,jetlist),    #FO selection
                                        lambda lep,jetlist: _tight_lepton(lep, 0.0494, 0.2770,jetlist), #Tight selection
                                        cleanJet  = lambda lep,jet,dr : dr<0.4,
                                        selectJet = lambda jet: abs(jet.eta)<4.7 and (jet.jetId & 2), 
                                        cleanTau  = lambda lep,tau,dr: True, 
                                        looseTau  = lambda tau: True, # Used in cleaning
                                        tightTau  = lambda tau: True, # On top of loose
                                        cleanJetsWithTaus = False,
                                        cleanTausWithLoose = False,
                                        doVetoZ = False,
                                        doVetoLMf = False,
                                        doVetoLMt = True,
                                        jetPt = 30,
                                        bJetPt = 25,
                                        coneptdef = lambda lep: conept(lep),
                                        year = 2022,
                                        bAlgo = "DeepCSV")
leptonJetRecleaning = [recleaner_2022]

# ---------------------------------------------------------------------------------------------------------------------------- #

# ---------------------------------------------------- TRIGGERS -------------------------------------------------------------- # 
import triggers_13p6TeV_DATA2022 as triggers2022
### Keywords to designate different groups of trigger paths 
triggerlist = ["triggers_mumu_iso", "triggers_mumu_noniso", "triggers_mumu_ss", "triggers_mumu", "triggers_mumu_ht",# DIMUON
               "triggers_ee", "triggers_ee_noniso", "triggers_ee_ht",   # DIELECTRON
               "triggers_mue", "triggers_mue_noiso", "triggers_mue_ht", # SEMILEPTONIC (MUON + ELECTRON)
               "triggers_3e", # TRIELECTRON
               "triggers_3mu", "triggers_3mu_alt", # TRIMUON 
               "triggers_2mu1e", "triggers_2e1mu", # MIXED
               "triggers_1mu_iso", "triggers_1mu_noniso", # SINGLE MUON 
               "triggers_1e_iso", "triggers_1e_noniso", # SINGLE ELECTRON
               "triggers_FR_1mu_noiso",  "triggers_FR_1mu_iso", 
               "triggers_FR_1mu_noiso_highpt", "triggers_FR_1e_noiso", "triggers_FR_1e_iso", 
               "triggers_pfht1050", "triggers_pfht800_mass50", "triggers_pfjet500",# JET TRIGGERS 
               "triggers_pfjet400_mass30", 
               "triggers_mutau", "triggers_etau", "triggers_leptau", "triggers_htmet", # MIXED
               "triggers_metNoMu100_mhtNoMu100", "triggers_met", "triggers_pfht"]
### Dictionary to use in CMGTools modules
triggerGroups_dict = { trig : {2022 : eval("triggers2022.%s"%trig)} for trig in triggerlist }
# ---------------------------------------------------------------------------------------------------------------------------- #

# ---------------------------------------------------- LEPTON BUILDER  -------------------------------------------------------------- # 
from CMGTools.TTHAnalysis.tools.nanoAOD.leptonBuilderWZSM import leptonBuilderWZSM
leptonBuilderWZSM_2022 =  lambda : leptonBuilderWZSM("Mini", metbranch="MET")
leptonBuilder_2022 = [leptonBuilderWZSM_2022]
# ---------------------------------------------------------------------------------------------------------------------------- #


### To be implemented
if __name__ == "__main__":
  pass
