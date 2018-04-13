import os

base = "#!/bin/bash \n\ncd /nfs/fanae/user/carlosec/CMSSW_8_0_19/src/CMGTools/TTHAnalysis/python/plotter/\nsource /cms/cmsset_default.sh\npython mcPlots.py susy-ewkino/3lfor2017Tests/mca_3l_Test2017.txt susy-ewkino/3lfor2017Tests/cuts_Test2017.txt susy-ewkino/3lfor2017Tests/plots_pt.txt -P /pool/ciencias/userstorage/carlosec/ewkTreesfor2017Test/bkg2017 -P /pool/ciencias/userstorage/carlosec/ewkTreesfor2017Test/sig --s2v --tree treeProducerSusyMultilepton --mcc susy-ewkino/3lfor2017Tests/mcc_ewkino.txt --mcc susy-ewkino/mcc_triggerdefs.txt --load-macro susy-ewkino/3l/functionsEWK.cc --load-macro susy-ewkino/functionsSF.cc --load-macro susy-ewkino/functionsPUW.cc -l 35.9 -F sf/t {P}/leptonJetReCleanerSusyEWK3L/evVarFriend_{cname}.root -F sf/t {P}/leptonBuilderEWK/evVarFriend_{cname}.root -W 'puw_nInt_Moriond(nTrueInt) * leptonSF(getLepSF(LepGood_pt[0], LepGood_eta[0], LepGood_pdgId[0], 0), getLepSF(LepGood_pt[1], LepGood_eta[1], LepGood_pdgId[1], 0), getLepSF(LepGood_pt[2], LepGood_eta[2], LepGood_pdgId[2], 0))' -j [NJOBS] --load-macro susy-ewkino/3lfor2017Tests/functionsIdealTrigger.cc  --pdir [OUTDIR] --print root -E [TRIGGERCUT] [FLAVORCUT] [EXTRACUT]"

nJobs = 8

triggerlist = ["trigger_ALLOLD", "threeLeptons_trigger_allOld", "newthreeLeptons_trigger_allNew","newthreeLeptons_trigger_mmm_5_3_3", "newthreeLeptons_trigger_mmm_10_5_5", "newthreeLeptons_trigger_eee_16_12_8", "newthreeLeptons_trigger_mmm_12_10_5", "newthreeLeptons_trigger_mee_8_12_12", "newthreeLeptons_trigger_mm_4_4", "newthreeLeptons_trigger_mm_8_8", "newthreeLeptons_trigger_mm_17_8", "newthreeLeptons_trigger_me_8_23", "newthreeLeptons_trigger_me_23_12", "newthreeLeptons_trigger_ee_8_8", "newthreeLeptons_trigger_ee_25_25"]

flavorlist = ["", "-E eee","-E mmm","-E mme","-E mee"]

extraList = ["", "-E threeLeptonsAreTight"]

for t in triggerlist:
  for f in flavorlist:
    for e in extraList:
      if not(f == ""):
        fprint = t[-3:]
      else: fprint = "all"
      if not(e == ""):
        eprint = "3tight"
      else: eprint = ""
      output = "./test2017/"+ t + "_" + fprint + "_" + eprint + "/"
      theRealBase = base.replace("[NJOBS]",nJobs).replace("[TRIGGERCUT]",t).replace("[FLAVORCUT]",f).replace("[EXTRACUT]",e).replace("[OUTDIR]",output)
      print theRealBase



