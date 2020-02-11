import os

base163l = "python makeShapeCardsSusy.py RunII_SUSY_EWK/2016/2lss/mca_ewkino_v5.txt RunII_SUSY_EWK/2016/2lss/cuts_2lss.txt '[VAR]' '[BINS]' RunII_SUSY_EWK/systs/systs_wz16.txt --tree treeProducerSusyMultilepton -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2016_estructure/ -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2016_signals/ --FFulls {P}/leptonPtCorrections/ --FMCs {P}/trigger_prefiring/ --Fs {P}/leptonJetReCleanerWZSM/ --Fs {P}/leptonBuilderEWK/ --Fs {P}/trigger_2016/  --FMCs {P}/leptonMatcher/ --FMCs {P}/bTagEventWeights/ -L RunII_SM_WZ/functionsWZ.cc -L RunII_SM_WZ/functionsSF.cc -L RunII_SM_WZ/functionsMCMatch.cc  --plotgroup data_fakes+=.*promptsub.* --neglist .*promptsub.* -L RunII_SUSY_EWK/functionsEWKcorr.cc --neg -W 'puWeight*($MC{bTagWeightDeepCSVT_nom} $FASTSIM{bTagWeightDeepCSVT})*weight_PrefiringJets*weight_PrefiringPhotons*(getLeptonSF_v4(0,0,2016,LepSel_pt[0],LepSel_eta[0],LepSel_pdgId[0])*getLeptonSF_v4(0,0,2016,LepSel_pt[1],LepSel_eta[1],LepSel_pdgId[1]))' --obj Events -j 32 -f  -l 35.9  -E [SRCUT] [EXCLUDERS] -o [OCARD]  -o [OCARD] --od [OD]"

allSignals = ['sig_TChiWZ.*', 'sig_TChiWH.*', 'sig_TChiZZ.*', 'sig_TChiHH.*', 'sig_TChiHZ.*', 'sig_TChiSlep.*', 'sig_TChiTESlep.*', 'sig_TChiStau.*']
vetoSignals = [ 'sig_TChiWZ.*',  'sig_TChiSlep.*', 'sig_TChiZZ.*', 'sig_TChiHH.*', 'sig_TChiHZ.*', 'sig_TChiTESlep.*', 'sig_TChiStau.*']
varsandbins = {'SR_ewk_ss2l_v6_plot(mt2davis(LepGood_pt[0], LepGood_eta[0],LepGood_phi[0], LepGood_pt[1], LepGood_eta[1],LepGood_phi[1], MET_pt_nom, MET_phi_nom), MET_pt, LepGood_pt[0]+LepGood_pt[1], pt_2(LepGood_conePt[0], LepGood_phi[0], LepGood_conePt[1], LepGood_phi[1]), min(mt_2(LepGood_conePt[0],LepGood_phi[0],MET_pt_nom,MET_phi_nom),mt_2(LepGood_conePt[1],LepGood_phi[1],MET_pt_nom,MET_phi_nom)),LepGood_charge[0])':'20,0.5,20.5'} 
oCARD = 'SR2lss_2016'
oDir  = {'SR_ewk_ss2l_v6_plot(mt2davis(LepGood_pt[0], LepGood_eta[0],LepGood_phi[0], LepGood_pt[1], LepGood_eta[1],LepGood_phi[1], MET_pt_nom, MET_phi_nom), MET_pt, LepGood_pt[0]+LepGood_pt[1], pt_2(LepGood_conePt[0], LepGood_phi[0], LepGood_conePt[1], LepGood_phi[1]), min(mt_2(LepGood_conePt[0],LepGood_phi[0],MET_pt_nom,MET_phi_nom),mt_2(LepGood_conePt[1],LepGood_phi[1],MET_pt_nom,MET_phi_nom)),LepGood_charge[0])':'cards_2lss16_SRnew'}
SRCUT = "SR2lss"

for sigs in allSignals:
  if sigs in vetoSignals: continue
  for vb in varsandbins:
     excluders = ""
     for v in allSignals:
       if v != sigs:
          excluders = excluders + " --xp " + v
     command = base163l.replace("[VAR]", vb).replace("[BINS]",varsandbins[vb]).replace("[SRCUT]",SRCUT).replace("[OCARD]",oCARD).replace("[OD]", oDir[vb]+ sigs.replace("sig_","").replace(".*","")).replace("[EXCLUDERS]", excluders)
     print command
     os.system("sbatch -c 32 -p short -J" + sigs + " --wrap \"" + command.replace("$","\$") + "\"")

