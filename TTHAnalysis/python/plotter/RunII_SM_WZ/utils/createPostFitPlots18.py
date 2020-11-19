import ROOT
import os

base = "python makeShapeCardsSusy.py RunII_SM_WZ/2018/mca_wz_v5.txt RunII_SM_WZ/2018/cuts_wzsm.txt --tree treeProducerSusyMultilepton -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_skimWZ/ -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2016_skimWZ/ --Fs {P}/leptonPtCorrections/ --Fs {P}/leptonJetReCleanerWZSM/ --Fs {P}/leptonBuilderWZSM/ --FMCs {P}/leptonMatcher/ --FMCs {P}/bTagEventWeights/ --Fs /pool/cienciasrw/HeppyTrees/RA7/nanoAODv5_2018_skimWZ/bosonPolarization/ -L RunII_SM_WZ/functionsSF.cc -L RunII_SM_WZ/functionsMCMatch.cc -L RunII_SM_WZ/functionsWZ.cc --mcc RunII_SM_WZ/2018/mcc_triggerdefs.txt -W '(getLeptonSF_v4(0,0,2018,LepSel_pt[0],LepSel_eta[0],LepSel_pdgId[0])*getLeptonSF_v4(0,0,2018,LepSel_pt[1],LepSel_eta[1],LepSel_pdgId[1])*getLeptonSF_v4(0,0,2018,LepSel_pt[2],LepSel_eta[2],LepSel_pdgId[2]))*puWeight*bTagWeightDeepCSVT_nom' --obj Events -j 88 -f -E SRWZ -l 59.8 --sp prompt_WZ --ms --od cards_forpostfit  -o 2018_[OVAR] '[VAR]' '[BINS]' RunII_SM_WZ/2018/systs_wz.txt "
plotfile = open("RunII_SM_WZ/2016/plots_wz.txt","r")

for line in plotfile.readlines():
  if line[0] == "#" or len(line.split(":")) < 3: continue
  words = line.split(":")
  name = words[0].replace(" ","")
  var  = words[1]
  bins = words[2].split(";")[0]
  if os.path.exists("cards_forpostfit/common/2018_%s.input.root"%name): continue
  print base.replace("[OVAR]", name).replace("[VAR]", var).replace("[BINS]",bins) 
