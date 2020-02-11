import os

base173l = "python makeShapeCardsSusy.py  RunII_SUSY_EWK/2017/4l/mca_ewkino_v5.txt RunII_SUSY_EWK/2017/4l/cuts_4l.txt --FFasts {P}/puWeight/  '[VAR]' '[BINS]' RunII_SUSY_EWK/systs/systs_wz17.txt --tree treeProducerSusyMultilepton -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2017_skimWZ/ -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2017_signals/ --FFulls {P}/leptonPtCorrections/ --FMCs {P}/trigger_prefiring/ --Fs {P}/leptonJetReCleanerWZSM/ --Fs {P}/leptonBuilderEWK/ -L RunII_SUSY_EWK/functionsEWKcorr.cc --FMCs {P}/leptonMatcher/ --FMCs {P}/bTagEventWeights/ -L RunII_SM_WZ/functionsWZ.cc -L RunII_SM_WZ/functionsSF.cc -L RunII_SM_WZ/functionsMCMatch.cc --plotgroup data_fakes+=.*promptsub.* --neglist .*promptsub.* --mcc RunII_SM_WZ/2017/mcc_triggerdefs.txt --neg -W 'puWeight*($MC{bTagWeightDeepCSVT_nom} $FASTSIM{bTagWeightDeepCSVT})*weight_PrefiringJets*weight_PrefiringPhotons*(getLeptonSF_v4(0,0,2017,LepSel_pt[0],LepSel_eta[0],LepSel_pdgId[0])*getLeptonSF_v4(0,0,2017,LepSel_pt[1],LepSel_eta[1],LepSel_pdgId[1])*getLeptonSF_v4(0,0,2017,LepSel_pt[2],LepSel_eta[2],LepSel_pdgId[2])*getLeptonSF_v4(0,0,2017,LepSel_pt[3],LepSel_eta[3],LepSel_pdgId[3]))' --obj Events -j 80 -f  -l 41.5  -E [SRCUT]  [EXCLUDERS] -o [OCARD] --od [OD] "

allSignals = ['sig_TChiWZ.*', 'sig_TChiWH.*', 'sig_TChiZZ.*', 'sig_TChiHH.*', 'sig_TChiHZ.*', 'sig_TChiSlep.*', 'sig_TChiTESlep.*', 'sig_TChiStau.*']
vetoSignals = ['sig_TChiWZ.*', 'sig_TChiSlep.*',  'sig_TChiTESlep.*', 'sig_TChiWH.*', 'sig_TChiStau.*']
varsandbins = {'SR4lHplot(deltaR(LepSel_eta[unused4(mll_i1[0], mll_i2[0], 1)], LepSel_phi[unused4(mll_i1[0], mll_i2[0], 1)], LepSel_eta[unused4(mll_i1[0], mll_i2[0], 2)], LepSel_phi[unused4(mll_i1[0], mll_i2[0], 2)]),mllL_4l)' :  '3,0.5,3.5'}
oCARD = 'SR4lH_2017'
oDir = {'SR4lHplot(deltaR(LepSel_eta[unused4(mll_i1[0], mll_i2[0], 1)], LepSel_phi[unused4(mll_i1[0], mll_i2[0], 1)], LepSel_eta[unused4(mll_i1[0], mll_i2[0], 2)], LepSel_phi[unused4(mll_i1[0], mll_i2[0], 2)]),mllL_4l)': 'cards_4lH17_SRnew'}
SRCUT = "SR4lH"

for sigs in allSignals:
  if sigs in vetoSignals: continue
  for vb in varsandbins:
     excluders = ""
     for v in allSignals:
       if v != sigs:
          excluders = excluders + " --xp " + v
     command = base173l.replace("[VAR]", vb).replace("[BINS]",varsandbins[vb]).replace("[SRCUT]",SRCUT).replace("[OCARD]",oCARD).replace("[OD]", oDir[vb]+ sigs.replace("sig_","").replace(".*","")).replace("[EXCLUDERS]", excluders)
     print command
     #os.system("sbatch -c 80 -p short -J" + sigs + " --wrap \"" + command.replace("$","\$") + "\"")

