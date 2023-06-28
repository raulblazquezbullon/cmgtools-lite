""" Run 3 dataset names for nanoAODv10 production (MC) """
datasets = {"mc" : {
  # ----------------- Single boson
  "WJets"     : [("WJets_inc", ".*WJetsToLNu.*", 63199.9)],
  # ----------------- Drell Yan (LO)
  "DY_M10to50" : [("DYJetsToLL_M10to50", ".*DYJetsToLL_M-10to50.*", 19317.5)],
  "DY_M50"     : [("DYJetsToLL_M-50", ".*DYJetsToLL_M-50", 6221.3),
                  ("DYJetsToLL_M50_ext1", ".*DYJetsToLL_M-50_.*pythia8ext1", 6221.3),
                  ("DYJetsToLL_M50_ext2", ".*DYJetsToLL_M-50_.*pythia8ext2", 6221.3)],
  # ----------------- ttbar 
  "TT"        : [("TTTo2L2Nu", ".*TTo2L2Nu_CP5.*", 97.9140), 
                 ("TTTo2J1L1Nu", ".*TTo2J1L1Nu_CP5.*", 405.2403)],
  # ----------------- Single top & tW
  "SingleTop" : [("tbarBQ_t", ".*TbarBQ_t.*", 87.2),
                 ("tBbarQ_t", ".*TBbarQ_t.*", 145.0),
                 ("TbarWplus", ".*TbarWplus.*", 24.2),
                 ("TWminus", ".*TWminus.*", 24.2)],
  # ----------------- Dibosons
  "WZ"        : [("WZ", ".*WZ.*", 54.2776)],
  "ZZ"        : [("ZZ", ".*ZZ.*", 16.7)],
  "WW"        : [("WW", ".*WW.*", 116.8)]
  }
}