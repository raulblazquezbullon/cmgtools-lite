""" Run 3 dataset names for nanoAODv10 production (MC) """
datasets = {
  # ----------------- Single boson
  "WJets"     : [("W2JetsToLNu", ".*WtoLNu-2Jets.*", 63199.9)],
  # ----------------- Drell Yan (LO)
  "DY_M10to50" : [("DYJetsToLL_M10to50", ".*DYto2L-2Jets_MLL-10to50.*", 20950.)],
  "DY_M50"     : [("DYJetsToLL_M-50", ".*DYto2L-2Jets_MLL-50", 6688.)],
  # ----------------- ttbar 
  "TT"        : [#("TTTo2L2Nu", ".*TTo2L2Nu_CP5.*", 97.9140), 
                 #("TTTo2J1L1Nu", ".*TTo2J1L1Nu_CP5.*", 405.2403)
                ],
  # ----------------- Single top & tW
  "SingleTop" : [#("tbarBQ_t", ".*TbarBQ_t.*", 87.2),
                 #("tBbarQ_t", ".*TBbarQ_t.*", 145.0),
                 ("TbarWplus", ".*TbarWplus.*", 24.2),
                 ("TWminus", ".*TWminus.*", 24.2)],
  # ----------------- Dibosons
  #"WZ"        : [("WZ", ".*WZ.*", 54.2776)],
  "ZZ"        : [("ZZ", ".*ZZ.*", 16.7)],
  #"WW"        : [("WW", ".*WW.*", 116.8)]
}
