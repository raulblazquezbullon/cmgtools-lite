import os

base173l="python makeShapeCardsSusy.py RunII_SUSY_EWK/2017/3l2tau/mca_ewkino_v5.txt RunII_SUSY_EWK/2017/3l2tau/cuts_3l.txt '[VAR]' '[BINS]' RunII_SUSY_EWK/systs/systs_wz17.txt --tree treeProducerSusyMultilepton -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2017_estructure/ -P /pool/ciencias/HeppyTrees/RA7/nanoAODv5_2017_signals/ --FFasts {P}/puWeight/ --FMCs {P}/trigger_prefiring/ --FFulls {P}/leptonPtCorrections/ --Fs {P}/leptonJetReCleanerWZSM/ --Fs {P}/leptonBuilderEWK/ --FMCs {P}/leptonMatcher/ --FMCs {P}/bTagEventWeights/ -L RunII_SM_WZ/functionsWZ.cc -L RunII_SM_WZ/functionsSF.cc -L RunII_SM_WZ/functionsMCMatch.cc  --plotgroup data_fakes+=.*promptsub.* --neglist .*promptsub.* --neg -L RunII_SUSY_EWK/functionsEWKcorr.cc -W 'puWeight*bTagWeightDeepCSVT_nom*weight_PrefiringJets*weight_PrefiringPhotons*(getLeptonSF_v4(0,0,2017,LepSel_pt[0],LepSel_eta[0],LepSel_pdgId[0])*getLeptonSF_v4(0,0,2017,LepSel_pt[1],LepSel_eta[1],LepSel_pdgId[1])*getLeptonSF_v4(0,0,2017,LepSel_pt[2],LepSel_eta[2],LepSel_pdgId[2]))' --obj Events -j 32 -f  -l 41.5 --mcc RunII_SM_WZ/2017/mcc_triggerdefs.txt -E [SRCUT] [EXCLUDERS] -o [OCARD] --od [OD]"

allSignals = ['sig_TChiWZ.*', 'sig_TChiWH.*', 'sig_TChiZZ.*', 'sig_TChiHH.*', 'sig_TChiHZ.*', 'sig_TChiSlep.*', 'sig_TChiTESlep.*', 'sig_TChiStau.*']
vetoSignals = ['sig_TChiWZ.*', 'sig_TChiSlep.*']
varsandbins = {'SR3lF(mT2L_3l, mt2davis(LepGood_pt[iL_Mini[0]], LepGood_eta[iL_Mini[0]], LepGood_phi[iL_Mini[0]], TauSel_Mini_pt[0], TauSel_Mini_eta[0], TauSel_Mini_phi[0], METFixEE2017_pt_nom,METFixEE2017_phi_nom), mass_2(LepGood_pt[iL_Mini[0]], LepGood_eta[iL_Mini[0]], LepGood_phi[iL_Mini[0]], LepGood_mass[iL_Mini[0]], TauSel_Mini_pt[0], TauSel_Mini_eta[0], TauSel_Mini_phi[0], TauSel_Mini_mass[0]), -1, METFixEE2017_pt_nom)' :'12,0.5,12.5'} 
oCARD = 'SR3lF_2017'
oDir  = {'SR3lF(mT2L_3l, mt2davis(LepGood_pt[iL_Mini[0]], LepGood_eta[iL_Mini[0]], LepGood_phi[iL_Mini[0]], TauSel_Mini_pt[0], TauSel_Mini_eta[0], TauSel_Mini_phi[0], METFixEE2017_pt_nom,METFixEE2017_phi_nom), mass_2(LepGood_pt[iL_Mini[0]], LepGood_eta[iL_Mini[0]], LepGood_phi[iL_Mini[0]], LepGood_mass[iL_Mini[0]], TauSel_Mini_pt[0], TauSel_Mini_eta[0], TauSel_Mini_phi[0], TauSel_Mini_mass[0]), -1, METFixEE2017_pt_nom)':'cards_3lF17_SRnew'}

for sigs in allSignals:
  if sigs in vetoSignals: continue
  for vb in varsandbins:
     excluders = ""
     for v in allSignals:
       if v != sigs:
          excluders = excluders + " --xp " + v
     command = base173l.replace("[VAR]", vb).replace("[BINS]",varsandbins[vb]).replace("[SRCUT]","SR3lF").replace("[OCARD]",oCARD).replace("[OD]", oDir[vb]+ sigs.replace("sig_","").replace(".*","")).replace("[EXCLUDERS]", excluders)
     print command
     os.system("sbatch -c 32 -p short -J" + sigs + " --wrap \"" + command.replace("$","\$") + "\"")

