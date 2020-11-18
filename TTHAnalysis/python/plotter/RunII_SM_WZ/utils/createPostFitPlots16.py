import ROOT
import os

base = "python  makeShapeCardsSusy.py RunII_SM_WZ/2016/mca_wz_v5.txt RunII_SM_WZ/2016/cuts_wzsm.txt --tree treeProducerSusyMultilepton -P /pool/cienciasrw/HeppyTrees/RA7/nanoAODv5_2016_skimWZ/ --Fs {P}/leptonPtCorrections/ --FMCs {P}/trigger_prefiring/ --Fs {P}/leptonJetReCleanerWZSM/ --Fs {P}/leptonBuilderWZSM/ --Fs {P}/trigger_2016/ --FMCs {P}/leptonMatcher/ --FMCs {P}/bTagEventWeights/ --Fs {P}/bosonPolarization/ -L RunII_SM_WZ/functionsWZ.cc -L RunII_SM_WZ/functionsSF.cc -L RunII_SM_WZ/functionsMCMatch.cc  -W 'puWeight*bTagWeightDeepCSVT_nom*weight_PrefiringJets*weight_PrefiringPhotons*(getLeptonSF_v4(0,0,2016,LepSel_pt[0],LepSel_eta[0],LepSel_pdgId[0])*getLeptonSF_v4(0,0,2016,LepSel_pt[1],LepSel_eta[1],LepSel_pdgId[1])*getLeptonSF_v4(0,0,2016,LepSel_pt[2],LepSel_eta[2],LepSel_pdgId[2]))' --obj Events -j 88 -f -E SRWZ -l 35.9 --od cards_forposfit -o 2016_[OVAR] '[VAR]' '[BINS]' RunII_SM_WZ/2016/systs_wz.txt --ms"

plotfile = open("RunII_SM_WZ/2016/plots_wz.txt","r")

for line in plotfile.readlines():
  if line[0] == "#" or len(line.split(":")) < 3: continue
  words = line.split(":")
  name = words[0].replace(" ","")
  var  = words[1]
  bins = words[2].split(";")[0]
  if os.path.exists("cards_forposfit/common/2016_%s.input.root"%name): continue
  print base.replace("[OVAR]", name).replace("[VAR]", var).replace("[BINS]",bins) 
