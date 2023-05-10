""" Run 3 dataset names for nanoAODv10 production (DATA) """
datasets = {"data" : {
  # ---------------- Muon 
  "Muon"       : [("Muon_Run2022F", ".*_Muon_Run2022F.*"),
                  ("Muon_Run2022G", ".*_Muon_Run2022G.*")],
  
  # ---------------- EGamma 
  "EGamma"     : [("EGamma_Run2022F", ".*EGamma_Run2022F.*"),
                  ("EGamma_Run2022G", ".*EGamma_Run2022G.*")],

  # ---------------- MuonEG 
  "MuonEG"     : [
                  ("MuonEG_Run2022F", ".*MuonEG_Run2022F.*"),
                  ("MuonEG_Run2022G", ".*MuonEG_Run2022G.*")
                  ],
 }
}