import os
iDir = " /pool/ciencias/userstorage/carlosec/ewkTreesfor2017Test/bkg2017/"
module = "leptonBuilderEWK"
extraModule = "leptonJetReCleanerSusyEWK3L"

extrafTree = " -F sf/t /pool/ciencias/userstorage/carlosec/ewkTreesfor2017Test/bkg2017/leptonJetReCleanerSusyEWK3L/evVarFriend_[SAMPLE].root "

base = " python prepareEventVariablesFriendTree.py [INDIR] [INDIR]/[MODULE] --tra2 --tree treeProducerSusyMultilepton --vector -T sf -d [SAMPLE] -m [MODULE] [EXTRAFTREE]  -N 1000000 -I CMGTools.TTHAnalysis.tools.multilepFriendTreeProducersToCleanup "

samples = ["MuonEG_Run2017A","MuonEG_Run2017C","MuonEG_Run2017D","MuonEG_Run2017E"]


for s in samples:
  #Generate leptonJetRecleaner
  print s, "recleaner"
  recleaner_command = base.replace("[INDIR]", iDir).replace("[MODULE]", extraModule).replace("[SAMPLE]", s).replace("[EXTRAFTREE]", "")
  os.system(recleaner_command)
  #Generate leptonBuilderEWK
  print s, "builder"
  builder_command = base.replace("[INDIR]", iDir).replace("[EXTRAFTREE]", extrafTree).replace("[MODULE]", module).replace("[SAMPLE]", s)
  os.system(builder_command)
