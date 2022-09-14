# Triggers for 2022 DATA
triggers_mumu_iso    = [ "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8",
                         "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8",
                         "HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8", 
                         "HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8",
                         "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ",
                         "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL",
                         ] # Note: Mass3p8 and 19/9 missing in early data 
triggers_mumu_noniso = [ "HLT_Mu37_TkMu27" ] # Only in late data
triggers_mumu_ss = [ "HLT_Mu18_Mu9_SameSign", # Only in late data
                     "HLT_Mu18_Mu9_SameSign_DZ", 
                     "HLT_Mu20_Mu10_SameSign", 
                     "HLT_Mu20_Mu10_SameSign_DZ" ]
triggers_mumu = triggers_mumu_iso

triggers_ee = [ "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", # Note: no-dz version missing in 2017B
                "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", ] 
triggers_ee_noniso = ["HLT_DoubleEle25_CaloIdL_MW", # 25 and 27 missing in early part of 2017
                      "HLT_DoubleEle27_CaloIdL_MW", 
                      "HLT_DoubleEle33_CaloIdL_MW",
                      "HLT_DiEle27_WPTightCaloOnly_L1DoubleEG"]

triggers_mue   = [ "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL",  # NoDZ version only from 2017C
                   "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", 
                   "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", 
                   "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL",
                   "HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ",
                   "HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL"] # Mu8/Ele23 w/o DZ is always prescaled

triggers_mue_noiso = [ 'HLT_Mu27_Ele37_CaloIdL_MW',
                       'HLT_Mu37_Ele27_CaloIdL_MW']

# note: all dilepton+HT are missing in the early part of the data taking (2017B)
#triggers_mumu_ht =  [ "HLT_DoubleMu8_Mass8_PFHT350",
#                      "HLT_DoubleMu4_Mass8_DZ_PFHT350" ]
#triggers_ee_ht =  [ "HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300", 
#                    "HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT300", ]
triggers_mue_ht = [ "HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ" ]

triggers_3e = [ "HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL" ] 
triggers_3mu = [ "HLT_TripleMu_10_5_5_DZ", 
                 "HLT_TripleMu_12_10_5"] 
                 #"HLT_TripleMu_5_3_3_Mass3p8to60_DCA", # 5_3_3 only in late part of the data (esp. DCA one)
                 #"HLT_TripleMu_5_3_3_Mass3p8to60_DZ" ]

triggers_3mu_alt=["HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx"]

triggers_2mu1e = [ "HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ" ]
triggers_2e1mu = [ "HLT_Mu8_DiEle12_CaloIdL_TrackIdL" ,
                   "HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ" ]

triggers_1mu_iso = [ 'HLT_IsoMu24', 'HLT_IsoMu24_eta2p1', # Prescaled at high lumi
                     'HLT_IsoMu27']                          # Always unprescaled
triggers_1mu_noniso = [ 'HLT_Mu50', 'HLT_Mu55']#, "HLT_TkMu100" ] # 55 only in late part of the data

triggers_1e_iso = [ "HLT_Ele32_WPTight_Gsf", # Ele32 missing in Run2017B
                    "HLT_Ele35_WPTight_Gsf" ]
triggers_1e_noniso = [ "HLT_Ele115_CaloIdVT_GsfTrkIdT","HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165"] # Not 2017B

# Prescaled lepton triggers
triggers_FR_1mu_noiso = [ "HLT_Mu%d" % pt for pt in (8,17) ] # DoubleMu PD
triggers_FR_1mu_iso = [ "HLT_Mu%d_TrkIsoVVL" % pt for pt in (8,17) ] # DoubleMu PD
triggers_FR_1mu_noiso_highpt = [ "HLT_Mu%d" % pt for pt in (20,27,50) ] + ["HLT_Mu3_PFJet40"] # SingleMu PD
triggers_FR_1e_noiso = [ "HLT_Ele%d_CaloIdM_TrackIdM_PFJet30" % pt for pt in (8,17,23) ] # SingleElectron
triggers_FR_1e_iso   = [ "HLT_Ele%d_CaloIdL_TrackIdL_IsoVL_PFJet30" % pt for pt in (8,12,23) ] # SingleElectron


# HT:
triggers_pfht1050 = ['HLT_PFHT1050']

# AK8 HT:
triggers_pfht800_mass50 = ['HLT_AK8PFHT800_TrimMass50']

# PF Jet
triggers_pfjet500 = ['HLT_AK8PFJet500']

# AK8 PF Jet
triggers_pfjet400_mass30 = ['HLT_AK8PFJet400_TrimMass30']


#lepton tau


#triggers_mutau = ["HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1",
#                   "HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1",
#                   "HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1",
#                   "HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1",
#                   "HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1",
#                   "HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1"]
#
#triggers_etau = ["HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1",
#                 "HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1",
#                 "HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1",
#                 "HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1",
#                 " HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1",
#                 "HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1"]

#triggers_leptau = triggers_mutau + triggers_etau

triggers_htmet = ['HLT_PFHT500_PFMET100_PFMHT100_IDTight']

triggers_metNoMu100_mhtNoMu100=["HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60"]

triggers_met = [ 'HLT_PFMET120_PFMHT120_IDTight',
                 'HLT_PFMET120_PFMHT120_IDTight_PFHT60']

triggers_pfht = ["HLT_PFHT180",
                 "HLT_PFHT250",
                 "HLT_PFHT350",
                 "HLT_PFHT370",
                 "HLT_PFHT430",
                 "HLT_PFHT510",
                 "HLT_PFHT590",
                 "HLT_PFHT680",
                 "HLT_PFHT780",
                 "HLT_PFHT890"]

triggerlist = ["triggers_mumu_iso", "triggers_mumu_noniso", "triggers_mumu_ss", "triggers_mumu",# "triggers_mumu_ht",# DIMUON
               "triggers_ee", "triggers_ee_noniso",# "triggers_ee_ht",   # DIELECTRON
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
               #"triggers_mutau", #"triggers_etau", #"triggers_leptau", 
               "triggers_htmet", # MIXED
               "triggers_metNoMu100_mhtNoMu100", "triggers_met", "triggers_pfht"]


### Dictionary to use in CMGTools modules
triggerGroups_dict = { trig : {2022 : eval("%s"%trig)} for trig in triggerlist }

### HERE I SAVE A DICTIONARY THAT MAY BE USEFUL IN THE FUTURE
'''
triggerGroups = dict(
  ### DiMuon triggers 
  triggers_mumu_iso     = { 2022 :  lambda ev: ev.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8 \
                                    or ev.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 \
                                    or ev.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8 \
                                    or ev.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8 \
                                    or ev.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ \
                                    or ev.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL},
  triggers_mumu_noniso  = { 2022 :  lambda ev: ev.HLT_Mu37_TkMu27},
  triggers_mumu_ss      = { 2022 :  lambda ev: ev.HLT_Mu18_Mu9_SameSign \
                                    or ev.HLT_Mu18_Mu9_SameSign_DZ \
                                    or ev.HLT_Mu20_Mu10_SameSign \
                                    or ev.HLT_Mu20_Mu10_SameSign_DZ},
  triggers_mumu         = { 2022 :  lambda ev: ev.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8 \
                                    or ev.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 \
                                    or ev.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8 \
                                    or ev.HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8 \
                                    or ev.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ \
                                    or ev.HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL},
  ### DiElectron triggers
  triggers_ee           = { 2022 :  lambda ev: ev.HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ \
                                    or ev.HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL},
  triggers_ee_noniso    = { 2022 :  lambda ev: ev.HLT_DoubleEle25_CaloIdL_MW \
                                    or ev.HLT_DoubleEle27_CaloIdL_MW \
                                    or ev.HLT_DoubleEle33_CaloIdL_MW \
                                    or ev.HLT_DiEle27_WPTightCaloOnly_L1DoubleEG},
  ### Mu+El triggers
  triggers_mue          = { 2022 :  lambda ev: ev.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL \
                                    or ev.HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ \
                                    or ev.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ \
                                    or ev.HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL \
                                    or ev.HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ \
                                    or ev.HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL},
  triggers_mue_noiso    = { 2022 :  lambda ev: ev.HLT_Mu27_Ele37_CaloIdL_MW \
                                    or ev.HLT_Mu37_Ele27_CaloIdL_MW},
  triggers_mue_ht       = { 2022 :  lambda ev: ev.HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ},
  ### TriLepton triggers
  triggers_3e           = { 2022 :  lambda ev: ev.HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL},
  triggers_3mu          = { 2022 :  lambda ev: ev.HLT_TripleMu_10_5_5_DZ \
                                    or ev.HLT_TripleMu_12_10_5},
  triggers_3mu_alt      = { 2022 :  lambda ev: ev.HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx},
  triggers_2mu1e        = { 2022 :  lambda ev: ev.HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ},
  triggers_2e1mu        = { 2022 :  lambda ev: ev.HLT_Mu8_DiEle12_CaloIdL_TrackIdL \
                                    or ev.HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ},
  ### SingleMuon triggers
  triggers_1mu_iso      = { 2022 :  lambda ev: ev.HLT_IsoMu24 \
                                    or ev.HLT_IsoMu24_eta2p1 \
                                    or ev.HLT_IsoMu27},
  triggers_1mu_noniso   = { 2022 :  lambda ev: ev.HLT_Mu50 \
                                    or ev.HLT_Mu55},
  ### SingleElectron triggers
  triggers_1e_iso       = { 2022 :  lambda ev: ev.HLT_Ele32_WPTight_Gsf \
                                    or ev.HLT_Ele35_WPTight_Gsf},
  triggers_1e_noniso    = { 2022 :  lambda ev: ev.HLT_Ele115_CaloIdVT_GsfTrkIdT \
                                    or ev.HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165},
  triggers_FR_1mu_noiso = { 2022 :  lambda ev: ev.HLT_Mu8 \
                                    or ev.HLT_Mu17},
  triggers_FR_1mu_iso   = { 2022 :  lambda ev: ev.HLT_Mu8_TrkIsoVVL \
                                    or ev.HLT_Mu17_TrkIsoVVL},
  triggers_FR_1mu_noiso_highpt = { 2022 :  lambda ev: ev.HLT_Mu20 \
                                           or ev.HLT_Mu27 \
                                           or ev.HLT_Mu50 \
                                           or ev.HLT_Mu3_PFJet40},
  triggers_FR_1e_noiso  = { 2022 :  lambda ev: ev.HLT_Ele8_CaloIdM_TrackIdM_PFJet30 \
                                    or ev.HLT_Ele17_CaloIdM_TrackIdM_PFJet30 \
                                    or ev.HLT_Ele23_CaloIdM_TrackIdM_PFJet30},
  triggers_FR_1e_iso    = { 2022 :  lambda ev: ev.HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30 \
                                    or ev.HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30 \
                                    or ev.HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30},
  ### Jet-met triggers
  triggers_pfht1050     = { 2022 :  lambda ev: ev.HLT_PFHT1050},
  triggers_pfht800_mass50 = { 2022: lambda ev: ev.HLT_AK8PFHT800_TrimMass50},
  triggers_pfjet500     = { 2022 :  lambda ev: ev.HLT_AK8PFJet500},
  triggers_pfjet400_mass30 = { 2022 :  lambda ev: ev.HLT_AK8PFJet400_TrimMass30},
  triggers_htmet        = { 2022 :  lambda ev: ev.HLT_PFHT500_PFMET100_PFMHT100_IDTight},
  triggers_metNoMu100_mhtNoMu100 = { 2022 :  lambda ev: ev.HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60},
  triggers_met          = { 2022 :  lambda ev: ev.HLT_PFMET120_PFMHT120_IDTight \
                                    or ev.HLT_PFMET120_PFMHT120_IDTight_PFHT60},
  triggers_pfht         = { 2022 :  lambda ev: ev.HLT_PFHT180 \
                                    or ev.HLT_PFHT250 \
                                    or ev.HLT_PFHT350 \
                                    or ev.HLT_PFHT370 \
                                    or ev.HLT_PFHT430 \
                                    or ev.HLT_PFHT510 \
                                    or ev.HLT_PFHT590 \
                                    or ev.HLT_PFHT680 \
                                    or ev.HLT_PFHT780 \
                                    or ev.HLT_PFHT890},
)
'''
