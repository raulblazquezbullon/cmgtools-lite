datasets_wz = {
 "mc" : {
  # ----------------- Single boson
  "WJets"     : [("WJets_inc", ".*WJetsToLNu.*", 63199.9)
                ],
  # ----------------- Drell Yan
  "DY_M10to50" : [("DYJetsToLL_M10to50", ".*DYJetsToLL_M-10to50.*", 19317.5)
                 ],
  "DY_M50"     : [("DYJetsToLL_M-50", ".*DYJetsToLL_M-50", 6221.3),
                  ("DYJetsToLL_M50_ext1", ".*DYJetsToLL_M-50_.*pythia8ext1", 6221.3),
                  ("DYJetsToLL_M50_ext2", ".*DYJetsToLL_M-50_.*pythia8ext2", 6221.3),
                 ],
  # ----------------- ttbar 
  "TT"        : [("TTTo2L2Nu", ".*TTo2L2Nu_CP5.*", 97.9140), 
                 ("TTTo2J1L1Nu", ".*TTo2J1L1Nu_CP5.*", 405.2403)
                ],
  # ----------------- Single top & tW
  "SingleTop" : [("tbarBQ_t", ".*TbarBQ_t.*", 87.2),
                 ("tBbarQ_t", ".*TBbarQ_t.*", 145.0),
                 ("TbarWplus", ".*TbarWplus.*", 24.2),
                 ("TWminus", ".*TWminus.*", 24.2)
                ],
  # ----------------- Dibosons
  "WZ"        : [("WZ", ".*WZ.*", 54.2776)
                ],
  "ZZ"        : [("ZZ", ".*ZZ.*", 16.7)
                ],
  "WW"        : [("WW", ".*WW.*", 116.8)
                ]
  },
 "data" : {
  # ---------------- Muon 
  "Muon"       : [("Muon_Run2022C", ".*_Muon_Run2022C.*"),
                  ("Muon_Run2022D", ".*_Muon_Run2022D.*"),
                  ("Muon_Run2022E", ".*_Muon_Run2022E.*"),
                  ("Muon_Run2022F", ".*_Muon_Run2022F.*"),
                  ("Muon_Run2022G", ".*_Muon_Run2022G.*")],
  # ---------------- EGamma 
  "EGamma"     : [("EGamma_Run2022C", ".*EGamma_Run2022C.*"), 
                  ("EGamma_Run2022D", ".*EGamma_Run2022D.*"),
                  ("EGamma_Run2022E", ".*EGamma_Run2022E.*"),
                  ("EGamma_Run2022F", ".*EGamma_Run2022F.*"),
                  ("EGamma_Run2022G", ".*EGamma_Run2022G.*")],

  # ---------------- MuonEG 
  "MuonEG"     : [("MuonEG_Run2022C", ".*MuonEG_Run2022C.*"), 
                  ("MuonEG_Run2022D", ".*MuonEG_Run2022D.*"),
                  ("MuonEG_Run2022E", ".*MuonEG_Run2022E.*"),
                  ("MuonEG_Run2022F", ".*MuonEG_Run2022F.*"),
                  ("MuonEG_Run2022G", ".*MuonEG_Run2022G.*")],
  
  # ---------------- SingleMuon
  "SingleMuon" : [("SingleMuon_Run2022C", ".*SingleMuon.*")],
  # ---------------- DoubleMuon
  "DoubleMuon" : [("DoubleMuon_Run2022C", ".*DoubleMuon.*")],
 # # ---------------- JetHT
  "JetHT"      : [("JetHT_Run2022C", ".*JetHT.*")],
  # ---------------- MET 
  "MET"        : [("MET_Run2022C", ".*_MET.*")],
  # ---------------- JetMET 
  "JetMET"     : [("JetMET_Run2022C", ".*JetMET_Run2022C.*"), 
                  ("JetMET_Run2022D", ".*JetMET_Run2022D.*"),
                  ("JetMET_Run2022E", ".*JetMET_Run2022E.*"),
                  ("JetMET_Run2022F", ".*JetMET_Run2022F.*"),
                  ("JetMET_Run2022G", ".*JetMET_Run2022G.*")]
 }
}
