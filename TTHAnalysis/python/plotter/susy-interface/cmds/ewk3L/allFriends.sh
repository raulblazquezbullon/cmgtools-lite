#T="/mnt/t3nfs01/data01/shome/cheidegg/o/2016-11-06_ewk80X_signalssplit/DONE"
#T="/mnt/t3nfs01/data01/shome/cheidegg/o/2016-07-13_ewkskims80X"
## NEW DATA
#T="/afs/cern.ch/work/p/peruzzi/ra5trees/TREES_80X_011216_Spring16MVA_skim_2lep_OR_1lep_2tau"
#T="/afs/cern.ch/work/m/mmarionn/public/SUSYSamples/ProdNov28"
#T="/afs/cern.ch/work/c/cheidegg/scratch/newDataFriends"
T="/mnt/t3nfs01/data01/shome/cheidegg/o/2015-11-29_ewktrees80X_M17"
F=" -q all.q --direct" #"-F" 
#F="--accept DoubleEG_Run2016C_23Sep2016_v1_runs_271036_284044_part2 --exclude MET --exclude Tau --exclude JetHT -q 8nh --direct" #"-F" 

#python susy-interface/friendmaker.py 3l 3lA $T $T --bk --log $F --modules leptonJetReCleanerSusyEWK3L
#python susy-interface/friendmaker.py 3l 3lA $T $T --bk --log $F --modules leptonBuilderEWK
#python susy-interface/friendmaker.py 3l 3lA $T $T --bk --log $F --modules eventBTagWeight             --pretend

python susy-interface/friendmaker.py 3l 3lA $T $T --bk --log $F --modules leptonJetReCleanerSusyEWK2L

#T="/mnt/t3nfs01/data01/shome/cheidegg/o/2016-10-04_leptonMVAtraining/trees_80X/"
#F="-q all.q --direct" #"-F" 
#python susy-interface/friendmaker.py 3l 3lA $T $T --bk --log $F --modules mvaSUSY_80X_TTZ_decoupleAndBTagCut
