import os
base183l = "python makeShapeCardsSusy.py RunII_SUSY_EWK/2018/3l/mca_ewkino_v5.txt RunII_SUSY_EWK/2018/3l/cuts_3l.txt --FFasts {P}/puWeight/  '[VAR]' '[BINS]' RunII_SUSY_EWK/systs/systs_wz18.txt --tree treeProducerSusyMultilepton -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_skimWZ/ -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_signals/ --FFulls {P}/leptonPtCorrections/  --Fs {P}/leptonJetReCleanerWZSM/ --Fs {P}/leptonBuilderEWK/  --FMCs {P}/leptonMatcher/ --FMCs {P}/bTagEventWeights/ -L RunII_SM_WZ/functionsWZ.cc -L RunII_SM_WZ/functionsSF.cc -L RunII_SM_WZ/functionsMCMatch.cc -L RunII_SUSY_EWK/functionsEWKcorr.cc   --plotgroup data_fakes+=.*promptsub.* --neglist .*promptsub.* --neg  --mcc RunII_SM_WZ/2017/mcc_triggerdefs.txt  -W 'puWeight*($MC{bTagWeightDeepCSVT_nom} $FASTSIM{bTagWeightDeepCSVT})*(getLeptonSF_v4(0,0,2018,LepSel_pt[0],LepSel_eta[0],LepSel_pdgId[0])*getLeptonSF_v4(0,0,2018,LepSel_pt[1],LepSel_eta[1],LepSel_pdgId[1])*getLeptonSF_v4(0,0,2018,LepSel_pt[2],LepSel_eta[2],LepSel_pdgId[2]))' --obj Events -j 88 -f  -l 59.8  -E [SRCUT] [EXCLUDERS] -o [OCARD] --od [OD]"

allSignals = ['sig_TChiWZ.*', 'sig_TChiWH.*', 'sig_TChiZZ.*', 'sig_TChiHH.*', 'sig_TChiHZ.*', 'sig_TChiSlep.*', 'sig_TChiTESlep.*', 'sig_TChiStau.*']
vetoSignals = ['sig_TChiWZ.*', 'sig_TChiSlep.*',  'sig_TChiTESlep.*', 'sig_TChiStau.*']
varsandbins = {'minDeltaR_3l':'[0.,0.4, 1., 2.]'} 
oCARD = 'SR3lB_2018'
oDir  = {'minDeltaR_3l':'cards_3lB18_SRnew'}
SRCUT = "SR3lB  -X convVeto"

for sigs in allSignals:
  if sigs in vetoSignals: continue
  for vb in varsandbins:
     excluders = ""
     for v in allSignals:
       if v != sigs:
          excluders = excluders + " --xp " + v
     command = base183l.replace("[VAR]", vb).replace("[BINS]",varsandbins[vb]).replace("[SRCUT]",SRCUT).replace("[OCARD]",oCARD).replace("[OD]", oDir[vb]+ sigs.replace("sig_","").replace(".*","")).replace("[EXCLUDERS]", excluders)
     print command
     #os.system("sbatch -c 88 -p short -J" + sigs + " --wrap \"" + command.replace("$","\$") + "\"")

