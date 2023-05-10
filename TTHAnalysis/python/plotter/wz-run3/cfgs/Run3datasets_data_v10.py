""" Run 3 dataset names for nanoAODv10 production (DATA) """
datasets = {"data" : {
  # ---------------- SingleMuon
  "SingleMuon" : [("SingleMuon_Run2022C", ".*SingleMuon.*")],
  # ---------------- DoubleMuon
  "DoubleMuon" : [("DoubleMuon_Run2022C", ".*DoubleMuon.*")],
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
                  ("MuonEG_Run2022G", ".*MuonEG_Run2022G.*")
                  ],
  # ---------------- JetHT
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