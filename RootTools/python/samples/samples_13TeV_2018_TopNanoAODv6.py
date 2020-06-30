# COMPONENT CREATOR
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

# QCD_Pt
'''
QCD_Pt80to120 = kreator.makeMyPrivateMCComponent("QCD_Pt80to120", "/QCD_Pt_80to120_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 2.345e+06*1.17805, useAAA=True)
QCD_Pt120to170 = kreator.makeMyPrivateMCComponent("QCD_Pt120to170", "/QCD_Pt_120to170_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 407800*1.15522, useAAA=True)
QCD_Pt170to300 = kreator.makeMyPrivateMCComponent("QCD_Pt170to300", "/QCD_Pt_170to300_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 103400*1.1342, useAAA=True)
QCD_Pt300to470 = kreator.makeMyPrivateMCComponent("QCD_Pt300to470",  "/QCD_Pt_300to470_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 6838*1.14405, useAAA=True)
QCD_Pt470to600 = kreator.makeMyPrivateMCComponent("QCD_Pt470to600",  "/QCD_Pt_470to600_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 551.1*1.17619, useAAA=True)
QCD_Pt470to600_ext1 = kreator.makeMyPrivateMCComponent("QCD_Pt470to600_ext1",  "/QCD_Pt_470to600_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 551.1*1.17619, useAAA=True)
QCD_Pt600to800 = kreator.makeMyPrivateMCComponent("QCD_Pt600to800", "/QCD_Pt_600to800_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 156.4*1.19501, useAAA=True)
QCD_Pt800to1000 = kreator.makeMyPrivateMCComponent("QCD_Pt800to1000", "/QCD_Pt_800to1000_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 32.293, useAAA=True)
QCD_Pt1000to1400 = kreator.makeMyPrivateMCComponent("QCD_Pt1000to1400", "/QCD_Pt_1000to1400_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 7.466*1.26149, useAAA=True)
QCD_Pt1400to1800 = kreator.makeMyPrivateMCComponent("QCD_Pt1400to1800", "/QCD_Pt_1400to1800_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.6481*1.30019, useAAA=True)
QCD_Pt1400to1800_ext1 = kreator.makeMyPrivateMCComponent("QCD_Pt1400to1800_ext1", "/QCD_Pt_1400to1800_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.6481*1.30019, useAAA=True)
QCD_Pt1800to2400 = kreator.makeMyPrivateMCComponent("QCD_Pt1800to2400", "/QCD_Pt_1800to2400_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.08741*1.31499, useAAA=True)
QCD_Pt1800to2400_ext1 = kreator.makeMyPrivateMCComponent("QCD_Pt1800to2400_ext1", "/QCD_Pt_1800to2400_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.08741*1.31499, useAAA=True)
QCD_Pt2400to3200 = kreator.makeMyPrivateMCComponent("QCD_Pt2400to3200", "/QCD_Pt_2400to3200_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.00522*1.30839, useAAA=True)
QCD_Pt2400to3200_ext1 = kreator.makeMyPrivateMCComponent("QCD_Pt2400to3200_ext1", "/QCD_Pt_2400to3200_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.00522*1.30839, useAAA=True)
QCD_Pt3200toInf = kreator.makeMyPrivateMCComponent("QCD_Pt3200toInf", "/QCD_Pt_3200toInf_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.0001349*1.22643, useAAA=True)
QCD_Pt3200toInf_ext2 = kreator.makeMyPrivateMCComponent("QCD_Pt3200toInf_ext2", "/QCD_Pt_3200toInf_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext2-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.0001349*1.22643, useAAA=True)

QCDPt = [
    QCD_Pt80to120,
    QCD_Pt120to170,
    QCD_Pt170to300,
    QCD_Pt300to470,
    QCD_Pt470to600,
    QCD_Pt470to600_ext1,
    QCD_Pt600to800,
    QCD_Pt800to1000,
    QCD_Pt1000to1400,
    QCD_Pt1400to1800,
    QCD_Pt1400to1800_ext1,
    QCD_Pt1800to2400,
    QCD_Pt1800to2400_ext1,
    QCD_Pt2400to3200,
    QCD_Pt2400to3200_ext1,
    QCD_Pt3200toInf,
    QCD_Pt3200toInf_ext2
]


# QCD HT bins (cross sections from McM)
QCD_HT100to200 = kreator.makeMyPrivateMCComponent("QCD_HT100to200", "/QCD_HT100to200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 2.463e+07*1.13073, useAAA=True)
QCD_HT200to300 = kreator.makeMyPrivateMCComponent("QCD_HT200to300", "/QCD_HT200to300_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 1.553e+06*1.1056, useAAA=True)
QCD_HT300to500 = kreator.makeMyPrivateMCComponent("QCD_HT300to500", "/QCD_HT300to500_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 347500*1.01094, useAAA=True)
QCD_HT500to700 = kreator.makeMyPrivateMCComponent("QCD_HT500to700", "/QCD_HT500to700_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 29930*1.0568, useAAA=True)
QCD_HT700to1000 = kreator.makeMyPrivateMCComponent("QCD_HT700to1000", "/QCD_HT700to1000_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 6370*1.06782, useAAA=True)
QCD_HT1000to1500 = kreator.makeMyPrivateMCComponent("QCD_HT1000to1500", "/QCD_HT1000to1500_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 1100*1.09636, useAAA=True)
QCD_HT1500to2000 = kreator.makeMyPrivateMCComponent("QCD_HT1500to2000", "/QCD_HT1500to2000_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 98.71, useAAA=True)
QCD_HT2000toInf = kreator.makeMyPrivateMCComponent("QCD_HT2000toInf", "/QCD_HT2000toInf_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 20.2, useAAA=True)

QCDHT = [
    QCD_HT100to200,
    QCD_HT200to300,
    QCD_HT300to500,
    QCD_HT500to700,
    QCD_HT700to1000,
    QCD_HT1000to1500,
    QCD_HT1500to2000,
    QCD_HT2000toInf,
]
'''
# QCD enriched (cross sections form genXSecAna)
#QCD_Mu15 = kreator.makeMyPrivateMCComponent("QCD_Mu15", "/QCD_Pt-20toInf_MuEnrichedPt15_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 237800, useAAA=True)
QCD_Pt15to20_Mu5    = kreator.makeMyPrivateMCComponent("QCD_Pt15to20_Mu5"    , "/QCD_Pt-15to20_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 2.785e+06, useAAA=True)
QCD_Pt20to30_Mu5    = kreator.makeMyPrivateMCComponent("QCD_Pt20to30_Mu5"    , "/QCD_Pt-20to30_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 2.49e+06, useAAA=True)
QCD_Pt30to50_Mu5    = kreator.makeMyPrivateMCComponent("QCD_Pt30to50_Mu5", "/QCD_Pt-30to50_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 1.364e+06, useAAA=True)
QCD_Pt50to80_Mu5    = kreator.makeMyPrivateMCComponent("QCD_Pt50to80_Mu5"    , "/QCD_Pt-50to80_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER" ,  "PRIVATE", ".*root", 'phys03', 377400, useAAA=True)
QCD_Pt80to120_Mu5   = kreator.makeMyPrivateMCComponent("QCD_Pt80to120_Mu5"   , "/QCD_Pt-80to120_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 88350, useAAA=True)
#QCD_Pt80to120_Mu5_ext1   = kreator.makeMyPrivateMCComponent("QCD_Pt80to120_Mu5_ext1"   , "/QCD_Pt-80to120_MuEnrichedPt5_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 88350, useAAA=True)
QCD_Pt120to170_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt120to170_Mu5"  , "/QCD_Pt-120to170_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 21250, useAAA=True)
#QCD_Pt120to170_Mu5_ext1  = kreator.makeMyPrivateMCComponent("QCD_Pt120to170_Mu5_ext1"  , "/QCD_Pt-120to170_MuEnrichedPt5_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v2/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 21250, useAAA=True)
QCD_Pt170to300_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt170to300_Mu5", "/QCD_Pt-170to300_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 6969, useAAA=True)
QCD_Pt300to470_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt300to470_Mu5"  , "/QCD_Pt-300to470_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 619.5, useAAA=True)
#QCD_Pt300to470_Mu5_ext3  = kreator.makeMyPrivateMCComponent("QCD_Pt300to470_Mu5_ext3"  , "/QCD_Pt-300to470_MuEnrichedPt5_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext3-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 619.5, useAAA=True)
QCD_Pt470to600_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt470to600_Mu5"  , "/QCD_Pt-470to600_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 58.9, useAAA=True)
#QCD_Pt470to600_Mu5_ext1  = kreator.makeMyPrivateMCComponent("QCD_Pt470to600_Mu5_ext1"  , "/QCD_Pt-470to600_MuEnrichedPt5_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 58.9, useAAA=True)
QCD_Pt600to800_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt600to800_Mu5", "/QCD_Pt-600to800_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 18.36, useAAA=True)
QCD_Pt800to1000_Mu5 = kreator.makeMyPrivateMCComponent("QCD_Pt800to1000_Mu5" , "/QCD_Pt-800to1000_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 3.253, useAAA=True)
QCD_Pt1000toInf_Mu5 = kreator.makeMyPrivateMCComponent("QCD_Pt1000toInf_Mu5" , "/QCD_Pt-1000toInf_MuEnrichedPt5_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 1.075, useAAA=True)

QCD_Mu5s = [
    #QCD_Pt15to20_Mu5,
    QCD_Pt20to30_Mu5,
    QCD_Pt30to50_Mu5,
    QCD_Pt50to80_Mu5,
    QCD_Pt80to120_Mu5,
    #QCD_Pt80to120_Mu5_ext1,
    QCD_Pt120to170_Mu5,
    #QCD_Pt120to170_Mu5_ext1,
    QCD_Pt170to300_Mu5,
    QCD_Pt300to470_Mu5,
    #QCD_Pt300to470_Mu5_ext3,
    QCD_Pt470to600_Mu5,
    #QCD_Pt470to600_Mu5_ext1,
    QCD_Pt600to800_Mu5,
    QCD_Pt800to1000_Mu5,
    QCD_Pt1000toInf_Mu5,
]
QCD_Mus = [ QCD_Mu15 ] + QCD_Mu5s

# QCD EMEnr  (cross sections form genXSecAna)
#QCD_Pt15to20_EMEnriched   = kreator.makeMyPrivateMCComponent("QCD_Pt15to20_EMEnriched"  ,"/QCD_Pt-15to20_EMEnriched_TuneCP5_13TeV_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM"  ,  "PRIVATE", ".*root", 'phys03',  1.33e+06, useAAA=True)
QCD_Pt20to30_EMEnriched   = kreator.makeMyPrivateMCComponent("QCD_Pt20to30_EMEnriched"  ,"/QCD_Pt-20to30_EMEnriched_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER"  ,  "PRIVATE", ".*root", 'phys03',  4.928e+06, useAAA=True)
QCD_Pt30to50_EMEnriched   = kreator.makeMyPrivateMCComponent("QCD_Pt30to50_EMEnriched"  ,"/QCD_Pt-30to50_EMEnriched_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER"  ,  "PRIVATE", ".*root", 'phys03',  6.41e+06, useAAA=True)
QCD_Pt50to80_EMEnriched   = kreator.makeMyPrivateMCComponent("QCD_Pt50to80_EMEnriched", "/QCD_Pt-50to80_EMEnriched_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03',  1.986e+06, useAAA=True)
QCD_Pt80to120_EMEnriched  = kreator.makeMyPrivateMCComponent("QCD_Pt80to120_EMEnriched" ,"/QCD_Pt-80to120_EMEnriched_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER" ,  "PRIVATE", ".*root", 'phys03',  370900, useAAA=True)
QCD_Pt120to170_EMEnriched = kreator.makeMyPrivateMCComponent("QCD_Pt120to170_EMEnriched","/QCD_Pt-120to170_EMEnriched_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03',  66760, useAAA=True)
QCD_Pt170to300_EMEnriched = kreator.makeMyPrivateMCComponent("QCD_Pt170to300_EMEnriched","/QCD_Pt-170to300_EMEnriched_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03',  16430, useAAA=True)
QCD_Pt300toInf_EMEnriched = kreator.makeMyPrivateMCComponent("QCD_Pt300toInf_EMEnriched","/QCD_Pt-300toInf_EMEnriched_TuneCP5_13TeV_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03',  1101, useAAA=True)

QCD_EMs = [
    #QCD_Pt15to20_EMEnriched,
    QCD_Pt20to30_EMEnriched,
    QCD_Pt30to50_EMEnriched,
    QCD_Pt50to80_EMEnriched,
    QCD_Pt80to120_EMEnriched,
    QCD_Pt120to170_EMEnriched,
    QCD_Pt170to300_EMEnriched,
    QCD_Pt300toInf_EMEnriched
]

#QCD_Pt15to20_bcToE   = kreator.makeMyPrivateMCComponent("QCD_Pt15to20_bcToE",   "/QCD_Pt_15to20_bcToE_TuneCP5_13TeV_pythia8/RunIIFall17MiniAOD-94X_mc2017_realistic_v11-v1/MINIAODSIM"  ,  "PRIVATE", ".*root", 'phys03', 187000, useAAA=True)
#QCD_Pt20to30_bcToE   = kreator.makeMyPrivateMCComponent("QCD_Pt20to30_bcToE",   "/QCD_Pt_20to30_bcToE_TuneCP5_13TeV_pythia8/RunIIFall17MiniAOD-94X_mc2017_realistic_v11-v1/MINIAODSIM"  ,  "PRIVATE", ".*root", 'phys03', 313500, useAAA=True)
#QCD_Pt30to80_bcToE   = kreator.makeMyPrivateMCComponent("QCD_Pt30to80_bcToE",   "/QCD_Pt_30to80_bcToE_TuneCP5_13TeV_pythia8/RunIIFall17MiniAOD-94X_mc2017_realistic_v11-v1/MINIAODSIM"  ,  "PRIVATE", ".*root", 'phys03', 361500, useAAA=True)
#QCD_Pt80to170_bcToE  = kreator.makeMyPrivateMCComponent("QCD_Pt80to170_bcToE",  "/QCD_Pt_80to170_bcToE_TuneCP5_13TeV_pythia8/RunIIFall17MiniAOD-94X_mc2017_realistic_v11-v1/MINIAODSIM" ,  "PRIVATE", ".*root", 'phys03', 33770, useAAA=True)
#QCD_Pt170to250_bcToE = kreator.makeMyPrivateMCComponent("QCD_Pt170to250_bcToE", "/QCD_Pt_170to250_bcToE_TuneCP5_13TeV_pythia8/RunIIFall17MiniAOD-94X_mc2017_realistic_v11-v1/MINIAODSIM",  "PRIVATE", ".*root", 'phys03', 2126, useAAA=True)
#QCD_Pt250toInf_bcToE = kreator.makeMyPrivateMCComponent("QCD_Pt250toInf_bcToE", "/QCD_Pt_250toInf_bcToE_TuneCP5_13TeV_pythia8/RunIIFall17MiniAOD-94X_mc2017_realistic_v11-v1/MINIAODSIM",  "PRIVATE", ".*root", 'phys03', 563.1, useAAA=True)

QCD_bcToE = [
#   QCD_Pt15to20_bcToE,
#   QCD_Pt20to30_bcToE,
#   QCD_Pt30to80_bcToE,
#   QCD_Pt80to170_bcToE,
#   QCD_Pt170to250_bcToE,
#   QCD_Pt250toInf_bcToE,
]

# ====== W + Jets ======
WJetsToLNu_LO = kreator.makeMyPrivateMCComponent("WJetsToLNu_LO","/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 3* 20508.9, useAAA=True)

## LO XSec from genXSecAna times NNLO/LO XSec for inclusive W+jets
W1JetsToLNu_LO = kreator.makeMyPrivateMCComponent("W1JetsToLNu_LO","/W1JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 8123*1.17, useAAA=True)
W2JetsToLNu_LO = kreator.makeMyPrivateMCComponent("W2JetsToLNu_LO","/W2JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 2785*1.17, useAAA=True)
W3JetsToLNu_LO = kreator.makeMyPrivateMCComponent("W3JetsToLNu_LO","/W3JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 993.4*1.17, useAAA=True)
W4JetsToLNu_LO = kreator.makeMyPrivateMCComponent("W4JetsToLNu_LO","/W4JetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 542.4*1.17, useAAA=True)

### W+jets HT-binned
'''
WJetsToLNu_HT100to200 = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT100to200", "/WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03',1395*1.17, useAAA=True) # miniAOD v2
WJetsToLNu_HT200to400 = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT200to400", "/WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03',408.7*1.17, useAAA=True) # miniAOD v2
WJetsToLNu_HT400to600      = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT400to600", "/WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03',57.52*1.17, useAAA=True) # miniAOD v2
WJetsToLNu_HT600to800      = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT600to800",     "/WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03',12.78*1.17, useAAA=True) # miniAOD v2
WJetsToLNu_HT800to1200     = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT800to1200",    "/WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03',5.246*1.17, useAAA=True) # miniAOD v2
WJetsToLNu_HT1200to2500    = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT1200to2500",   "/WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03',1.071*1.17, useAAA=True) # miniAOD v2
WJetsToLNu_HT2500toInf = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT2500toInf", "/WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03',0.00819*1.17, useAAA=True) # miniAOD v2
'''
WJetsToLNuHT = [
#WJetsToLNu_HT100to200,
#WJetsToLNu_HT200to400,
#WJetsToLNu_HT400to600,
#WJetsToLNu_HT600to800,
#WJetsToLNu_HT800to1200,
#WJetsToLNu_HT1200to2500,
#WJetsToLNu_HT2500toInf,
]

Ws = [ 
    WJetsToLNu_LO,
    W1JetsToLNu_LO,
    W2JetsToLNu_LO,
    W3JetsToLNu_LO,
    W4JetsToLNu_LO
]+WJetsToLNuHT



# ====== Z + Jets ======
## New FEWZ cross section 1921.8 from https://twiki.cern.ch/twiki/bin/viewauth/CMS/StandardModelCrossSectionsat13TeV
DYJetsToLL_M50 = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50", "/DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 1921.8*3, fracNegWeights=0.16, useAAA=True)
DYJetsToLL_M50_LO =  kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_LO", "/DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v2/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 1921.8*3, useAAA=True)

DYJetsToLL_M10to50_LO =  kreator.makeMyPrivateMCComponent("DYJetsToLL_M10to50_LO", "/DYJetsToLL_M-10to50_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 15810, useAAA=True)

DYJets = [
    DYJetsToLL_M50,
    DYJetsToLL_M50_LO,

    DYJetsToLL_M10to50_LO,
]



## cross sections from genXS analyzer
'''
DY1JetsToLL_M50_LO     = kreator.makeMyPrivateMCComponent("DY1JetsToLL_M50_LO",     "/DY1JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",       "PRIVATE", ".*root", 'phys03', 878, useAAA=True)
DY2JetsToLL_M50_LO     = kreator.makeMyPrivateMCComponent("DY2JetsToLL_M50_LO",     "/DY2JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",       "PRIVATE", ".*root", 'phys03', 307, useAAA=True)
DY3JetsToLL_M50_LO     = kreator.makeMyPrivateMCComponent("DY3JetsToLL_M50_LO",     "/DY3JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",       "PRIVATE", ".*root", 'phys03', 112, useAAA=True)
DY4JetsToLL_M50_LO     = kreator.makeMyPrivateMCComponent("DY4JetsToLL_M50_LO",     "/DY4JetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",       "PRIVATE", ".*root", 'phys03', 44.2, useAAA=True)
'''
DYNJetsToLL = [ 
    #DY1JetsToLL_M50_LO,
    #DY2JetsToLL_M50_LO,
    #DY3JetsToLL_M50_LO,
    #DY4JetsToLL_M50_LO,
]

## Cross sections from getXSecAnalyzer
DYJetsToLL_M4to50_HT70to100  = kreator.makeMyPrivateMCComponent("DYJetsToLL_M4to50_HT70to100",      "/DYJetsToLL_M-4to50_HT-70to100_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",         "PRIVATE", ".*root", 'phys03', 145.4, useAAA=True)
DYJetsToLL_M4to50_HT100to200 = kreator.makeMyPrivateMCComponent("DYJetsToLL_M4to50_HT100to200",      "/DYJetsToLL_M-4to50_HT-100to200_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",       "PRIVATE", ".*root", 'phys03', 202.8, useAAA=True)
DYJetsToLL_M4to50_HT200to400 = kreator.makeMyPrivateMCComponent("DYJetsToLL_M4to50_HT200to400",      "/DYJetsToLL_M-4to50_HT-200to400_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",       "PRIVATE", ".*root", 'phys03', 53.7, useAAA=True)
DYJetsToLL_M4to50_HT400to600 = kreator.makeMyPrivateMCComponent("DYJetsToLL_M4to50_HT400to600",      "/DYJetsToLL_M-4to50_HT-400to600_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",       "PRIVATE", ".*root", 'phys03', 5.66, useAAA=True)
DYJetsToLL_M4to50_HT600toInf = kreator.makeMyPrivateMCComponent("DYJetsToLL_M4to50_HT600toInf",      "/DYJetsToLL_M-4to50_HT-600toInf_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",       "PRIVATE", ".*root", 'phys03', 1.852, useAAA=True)
DYJetsToLLM4to50HT = [
    DYJetsToLL_M4to50_HT70to100,
    DYJetsToLL_M4to50_HT100to200,
    DYJetsToLL_M4to50_HT200to400,
    DYJetsToLL_M4to50_HT400to600,
    DYJetsToLL_M4to50_HT600toInf,
]

## Cross sections from getXSecAnalyzer times k-factor 1.08 from ratio of FEWZ to inclusive DYJetsToLL_M50_LO
DYJetsToLL_M50_HT100to200      = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT100to200",      "/DYJetsToLL_M-50_HT-100to200_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",        "PRIVATE", ".*root", 'phys03', 161.1*1.08, useAAA=True)
DYJetsToLL_M50_HT200to400      = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT200to400",      "/DYJetsToLL_M-50_HT-200to400_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",        "PRIVATE", ".*root", 'phys03', 49.32*1.08, useAAA=True)
DYJetsToLL_M50_HT400to600      = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT400to600",      "/DYJetsToLL_M-50_HT-400to600_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",        "PRIVATE", ".*root", 'phys03', 7.021*1.08, useAAA=True)
#DYJetsToLL_M50_HT400to600_ext2 = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT400to600_ext2", "/DYJetsToLL_M-50_HT-400to600_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext2-v1/NANOAODSIM",   "PRIVATE", ".*root", 'phys03', 7.021*1.08, useAAA=True)
DYJetsToLL_M50_HT600to800      = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT600to800",      "/DYJetsToLL_M-50_HT-600to800_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",        "PRIVATE", ".*root", 'phys03', 1.743*1.08 , useAAA=True)
DYJetsToLL_M50_HT800to1200     = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT800to1200",     "/DYJetsToLL_M-50_HT-800to1200_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",       "PRIVATE", ".*root", 'phys03', 0.8082*1.08 , useAAA=True)
DYJetsToLL_M50_HT1200to2500    = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT1200to2500",    "/DYJetsToLL_M-50_HT-1200to2500_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",      "PRIVATE", ".*root", 'phys03', 0.1925*1.08 , useAAA=True)
DYJetsToLL_M50_HT2500toInf     = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT2500toInf",     "/DYJetsToLL_M-50_HT-2500toInf_TuneCP5_PSweights_13TeV-madgraphMLM-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",       "PRIVATE", ".*root", 'phys03', 0.003486*1.08 , useAAA=True)

DYJetsToLLM50HT = [
    DYJetsToLL_M50_HT100to200,
    DYJetsToLL_M50_HT200to400,
    DYJetsToLL_M50_HT400to600,   #  DYJetsToLL_M50_HT400to600_ext2,
    DYJetsToLL_M50_HT600to800,
    DYJetsToLL_M50_HT800to1200,
    DYJetsToLL_M50_HT1200to2500,
    DYJetsToLL_M50_HT2500toInf,
]

DYs = DYJets + DYNJetsToLL + DYJetsToLLM4to50HT + DYJetsToLLM50HT


# VJetsQQ HT-binned. Cross sections form genXSAnalyzer (on the corresponding miniAOD)
#WJetsToQQ_HT400to600 = kreator.makeMyPrivateMCComponent("WJetsToQQ_HT400to600", "/WJetsToQQ_HT400to600_qc19_3j_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 315., useAAA=True)  
#WJetsToQQ_HT600to800 = kreator.makeMyPrivateMCComponent("WJetsToQQ_HT600to800", "/WJetsToQQ_HT600to800_qc19_3j_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 61.6, useAAA=True) 
#WJetsToQQ_HT800toInf = kreator.makeMyPrivateMCComponent("WJetsToQQ_HT800toInf", "/WJetsToQQ_HT-800toInf_qc19_3j_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM", "PRIVATE", ".*root", 'phys03', 34.97, useAAA=True)
#ZJetsToQQ_HT400to600 = kreator.makeMyPrivateMCComponent("ZJetsToQQ_HT400to600", "/ZJetsToQQ_HT400to600_qc19_4j_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 145.5, useAAA=True)
#ZJetsToQQ_HT600to800 = kreator.makeMyPrivateMCComponent("ZJetsToQQ_HT600to800", "/ZJetsToQQ_HT600to800_qc19_4j_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 34.15, useAAA=True) 
#ZJetsToQQ_HT800toInf = kreator.makeMyPrivateMCComponent("ZJetsToQQ_HT800toInf", "/ZJetsToQQ_HT-800toInf_qc19_4j_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM", "PRIVATE", ".*root", 'phys03', 18.6, useAAA=True) 

VJetsQQHT = [
    #WJetsToQQ_HT400to600,
    #WJetsToQQ_HT600to800,
    #WJetsToQQ_HT800toInf,
    #ZJetsToQQ_HT400to600,
    #ZJetsToQQ_HT600to800,
    #ZJetsToQQ_HT800toInf
]


# ====== TT INCLUSIVE =====

# TTbar cross section: NNLO, https://twiki.cern.ch/twiki/bin/view/LHCPhysics/TtbarNNLO (172.5)
#TTJets = kreator.makeMyPrivateMCComponent("TTJets", "/TTJets_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 831.76, fracNegWeights=0.319, useAAA=True)

TTLep_pow  = kreator.makeMyPrivateMCComponent("TTLep_pow", "/TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8/palencia-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 831.76*((3*0.108)**2) , useAAA=True)
TTHad_pow  = kreator.makeMyPrivateMCComponent("TTHad_pow", "/TTToHadronic_TuneCP5_13TeV-powheg-pythia8/swertz-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 831.76*((1-3*0.108)**2), useAAA=True )
TTSemi_pow = kreator.makeMyPrivateMCComponent("TTSemi_pow", "/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/swertz-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 831.76*2*(3*0.108)*(1-3*0.108), useAAA=True )

#TTJets_SingleLeptonFromT = kreator.makeMyPrivateMCComponent("TTJets_SingleLeptonFromT", "/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 831.76*(3*0.108)*(1-3*0.108), useAAA=True)
#TTJets_SingleLeptonFromTbar = kreator.makeMyPrivateMCComponent("TTJets_SingleLeptonFromTbar", "/TTJets_SingleLeptFromTbar_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 831.76*(3*0.108)*(1-3*0.108), useAAA=True )
#TTJets_DiLepton = kreator.makeMyPrivateMCComponent("TTJets_DiLepton", "/TTJets_DiLept_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 831.76*((3*0.108)**2), useAAA=True )


TTs = [ #TTJets, 
TTLep_pow, TTHad_pow, TTSemi_pow, #TTJets_SingleLeptonFromT, TTJets_SingleLeptonFromTbar, TTJets_DiLepton
]

# ====== SINGLE TOP ======
# Single top cross sections: https://twiki.cern.ch/twiki/bin/viewauth/CMS/SingleTopSigma
T_sch_lep = kreator.makeMyPrivateMCComponent("T_sch_lep", "/ST_s-channel_4f_leptonDecays_TuneCP5_13TeV-madgraph-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', (7.20+4.16)*0.108*3, fracNegWeights=0.188, useAAA=True)

#T_tch = kreator.makeMyPrivateMCComponent("T_tch", "/ST_t-channel_top_4f_InclusiveDecays_TuneCP5_13TeV-powheg-madspin-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",            "PRIVATE", ".*root", 'phys03', 136.02, useAAA=True) # inclusive sample
TBar_tch = kreator.makeMyPrivateMCComponent("TBar_tch", "/ST_t-channel_antitop_4f_InclusiveDecays_TuneCP5_13TeV-powheg-madspin-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 80.95, useAAA=True) # inclusive sample

T_tWch_noFullyHad    = kreator.makeMyPrivateMCComponent("T_tWch_noFullyHad",    "/ST_tW_top_5f_NoFullyHadronicDecays_TuneCP5_13TeV-powheg-pythia8/palencia-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",      "PRIVATE", ".*root", 'phys03',19.55, useAAA=True)
TBar_tWch_noFullyHad = kreator.makeMyPrivateMCComponent("TBar_tWch_noFullyHad", "/ST_tW_antitop_5f_NoFullyHadronicDecays_TuneCP5_13TeV-powheg-pythia8/palencia-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03',19.55, useAAA=True)

Ts = [
    T_sch_lep,
    #T_tch, 
    TBar_tch,
    T_tWch_noFullyHad, TBar_tWch_noFullyHad
]

# ====== T(T) + BOSON =====

#TTGJets = kreator.makeMyPrivateMCComponent("TTGJets", "/TTGJets_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 4.09, fracNegWeights=0.306, useAAA=True)

TGJets_lep = kreator.makeMyPrivateMCComponent("TGJets_lep", "/TGJets_leptonDecays_TuneCP5_13TeV-madgraph-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 1.018, fracNegWeights=0.411, useAAA=True) # leptonic top decays only

TTWToLNu_fxfx = kreator.makeMyPrivateMCComponent("TTWToLNu_fxfx", "/TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.2043, fracNegWeights=0.227, useAAA=True)
TTW_LO = kreator.makeMyPrivateMCComponent("TTW_LO", "/ttWJets_TuneCP5_13TeV_madgraphMLM_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03',  0.6105 , useAAA=True)

TTZToLLNuNu_amc = kreator.makeMyPrivateMCComponent("TTZToLLNuNu_amc", "/TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.2529, fracNegWeights=0.264, useAAA=True)
TTZ_LO = kreator.makeMyPrivateMCComponent("TTZ_LO", "/ttZJets_TuneCP5_13TeV_madgraphMLM_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03',  0.5297/0.692, useAAA=True)

#TTZToLLNuNu_m1to10  = kreator.makeMyPrivateMCComponent("TTZToLLNuNu_m1to10","/TTZToLL_M-1to10_TuneCP5_13TeV-amcatnlo-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.05324, fracNegWeights=0.236, useAAA=True)

TTHnobb_pow = kreator.makeMyPrivateMCComponent("TTHnobb_pow", "/ttHToNonbb_M125_TuneCP5_13TeV-powheg-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.5071*(1-0.582), useAAA=True)

TZQToLL  = kreator.makeMyPrivateMCComponent("TZQToLL","/tZq_ll_4f_ckm_NLO_TuneCP5_13TeV-madgraph-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.07358, fracNegWeights=0.367, useAAA=True)
tWll  = kreator.makeMyPrivateMCComponent("tWll","/ST_tWll_5f_LO_TuneCP5_PSweights_13TeV-madgraph-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.01123, useAAA=True) 

#-- OLD
# These are the inverted coupling cross sections, i.e. cf = -1.0, cv = 1.0 (see https://twiki.cern.ch/twiki/bin/viewauth/CMS/SingleTopHiggsGeneration13TeV), which is the default weight configuration. Apply LHE event weights to recover other cases including the SM.
#THQ = kreator.makeMyPrivateMCComponent("THQ", "/THQ_4f_Hincl_13TeV_madgraph_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03',  0.7927, useAAA=True) # bug in LHE weights
#THW = kreator.makeMyPrivateMCComponent("THW", "/THW_5f_Hincl_13TeV_madgraph_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03',  0.1472, useAAA=True) # bug in LHE weights
#THQ = kreator.makeMyPrivateMCComponentFromEOS("THQ", "THQ_4f_Hincl_13TeV_madgraph_pythia8_Fall17", "/store/cmst3/group/tthlep/peruzzi/%s/MINIAODSIM_merged", ".*root", 0.7927, useAAA=True)
#THW = kreator.makeMyPrivateMCComponentFromEOS("THW", "THW_5f_Hincl_13TeV_madgraph_pythia8_Fall17", "/store/cmst3/group/tthlep/peruzzi/%s/MINIAODSIM_merged", ".*root", 0.1472, useAAA=True)
THQ = kreator.makeMyPrivateMCComponent("THQ", "/THQ_4f_Hincl_13TeV_madgraph_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USE", "PRIVATE", ".*root", 'phys03',  0.7927, useAAA=True) 
THW = kreator.makeMyPrivateMCComponent("THW", "/THW_5f_Hincl_13TeV_madgraph_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER", "PRIVATE", ".*root", 'phys03',  0.1472, useAAA=True) 
#-- AVAILABLE:
#/THQ_4f_Hincl_13TeV_madgraph_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM
#/THQ_ctcvcp_4f_Hincl_13TeV_madgraph_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM
#/THW_5f_Hincl_13TeV_madgraph_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM
#/THW_ctcvcp_5f_Hincl_13TeV_madgraph_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM

TTXs = [ #TTGJets, 
         TGJets_lep,
         TTWToLNu_fxfx, TTW_LO, 
         TTZToLLNuNu_amc, TTZ_LO, #TTZToLLNuNu_m1to10, 
         TZQToLL, tWll, THQ, THW,
         TTHnobb_pow, ]

# ====== TT + DIBOSON, 4-top =====

TTTT = kreator.makeMyPrivateMCComponent("TTTT", "/TTTT_TuneCP5_13TeV-amcatnlo-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.009103, fracNegWeights=0.311, useAAA=True)
#TTWH = kreator.makeMyPrivateMCComponent("TTWH", "/TTWH_TuneCP5_13TeV-madgraph-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.00114, useAAA=True)
#TTZH = kreator.makeMyPrivateMCComponent("TTZH", "/TTZH_TuneCP5_13TeV-madgraph-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.001138, useAAA=True)
TTWW = kreator.makeMyPrivateMCComponent("TTWW", "/TTWW_TuneCP5_13TeV-madgraph-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.011500, useAAA=True) # NLO xsec from YR4
#TTWW_ext2 = kreator.makeMyPrivateMCComponent("TTWW_ext2", "/TTWW_TuneCP5_13TeV-madgraph-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext2-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.011500, useAAA=True) # NLO xsec from YR4
#TTHH = kreator.makeMyPrivateMCComponent("TTHH", "/TTHH_TuneCP5_13TeV-madgraph-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.0006666, useAAA=True)

#TTTJ = kreator.makeMyPrivateMCComponent("TTTJ", "/TTTJ_TuneCP5_13TeV-madgraph-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.0003987, useAAA=True)
#TTTW = kreator.makeMyPrivateMCComponent("TTTW", "/TTTW_TuneCP5_13TeV-madgraph-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.0007273, useAAA=True)

TTXXs = [ TTTT, #TTWH, TTZH,
     TTWW,# TTWW_ext2, TTHH, TTTJ, TTTW ]

# ===  DI-BOSONS

# cross section from https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#Diboson
WW = kreator.makeMyPrivateMCComponent("WW", "/WW_TuneCP5_13TeV-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 63.21 * 1.82, useAAA=True)
WZ = kreator.makeMyPrivateMCComponent("WZ", "/WZ_TuneCP5_13TeV-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 47.13, useAAA=True)
ZZ = kreator.makeMyPrivateMCComponent("ZZ", "/ZZ_TuneCP5_13TeV-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER,  "PRIVATE", ".*root", 'phys03', 16.523, useAAA=True)

WWTo2L2Nu = kreator.makeMyPrivateMCComponent("WWTo2L2Nu", "/WWTo2L2Nu_NNPDF31_TuneCP5_13TeV-powheg-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 10.481 , useAAA=True)
WWToLNuQQ = kreator.makeMyPrivateMCComponent("WWToLNuQQ", "/WWToLNuQQ_NNPDF31_TuneCP5_13TeV-powheg-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 43.53 , useAAA=True)
#WW_DPS = kreator.makeMyPrivateMCComponent("WW_DPS", "/WW_DoubleScattering_13TeV-pythia8_TuneCP5/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 1.921, useAAA=True)
#WpWpJJ = kreator.makeMyPrivateMCComponent("WpWpJJ", "/WpWpJJ_EWK-QCD_TuneCP5_13TeV-madgraph-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.04914, useAAA=True) # XS from genXSecAna 

WZTo3LNu_fxfx = kreator.makeMyPrivateMCComponent("WZTo3LNu_fxfx", "/WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 5.063, fracNegWeights=0.189, useAAA=True )
#WZTo3LNu_fxfx_ext1 = kreator.makeMyPrivateMCComponent("WZTo3LNu_fxfx_ext1", "/WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 5.063, fracNegWeights=0.189 , useAAA=True)
WZTo1L1Nu2Q = kreator.makeMyPrivateMCComponent("WZTo1L1Nu2Q", "/WZTo1L1Nu2Q_13TeV_amcatnloFXFX_madspin_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03',  10.71, fracNegWeights=0.204, useAAA=True )

ZZTo4L = kreator.makeMyPrivateMCComponent("ZZTo4L", "/ZZTo4L_TuneCP5_13TeV_powheg_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 1.256, useAAA=True)
#NLO /ZZTo4L_TuneCP5_13TeV-amcatnloFXFX-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER
#ZZTo4L_ext2 = kreator.makeMyPrivateMCComponent("ZZTo4L_ext2", "/ZZTo4L_TuneCP5_13TeV_powheg_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext2-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 1.256, useAAA=True)
ZZTo2L2Nu = kreator.makeMyPrivateMCComponent("ZZTo2L2Nu", "/ZZTo2L2Nu_TuneCP5_13TeV_powheg_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USE",  "PRIVATE", ".*root", 'phys03', 0.564, useAAA=True)
#ZZTo2L2Nu_ext2 = kreator.makeMyPrivateMCComponent("ZZTo2L2Nu_ext2", "/ZZTo2L2Nu_TuneCP5_13TeV_powheg_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext2-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.564, useAAA=True)


DiBosons = [
    WW,
    WWTo2L2Nu,
    WWToLNuQQ,
    WW_DPS,
    WpWpJJ,
    WZ,
    WZTo3LNu_fxfx, WZTo3LNu_fxfx_ext1,
    WZTo1L1Nu2Q,
    ZZ,
    ZZTo4L, #ZZTo4L_ext2,
    ZZTo2L2Nu,#ZZTo2L2Nu_ext2
]

# ===  TRI-BOSONS

# xsec from GenXSecAnalyzer
WWW    = kreator.makeMyPrivateMCComponent("WWW",    "/WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.2086, fracNegWeights=0.063, useAAA=True)
#WWW_ll = kreator.makeMyPrivateMCComponent("WWW_ll", "/WWW_4F_DiLeptonFilter_TuneCP5_13TeV-amcatnlo-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.007201, fracNegWeights=0.063, useAAA=True) # xs from genXSecAna
WWZ    = kreator.makeMyPrivateMCComponent("WWZ",    "/WWZ_TuneCP5_13TeV-amcatnlo-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03',  0.1651, fracNegWeights=0.06, useAAA=True ) 
#WZG    = kreator.makeMyPrivateMCComponent("WZG",    "/WZG_TuneCP5_13TeV-amcatnlo-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.04345, fracNegWeights=0.078, useAAA=True)
WZZ    = kreator.makeMyPrivateMCComponent("WZZ",    "/WZZ_TuneCP5_13TeV-amcatnlo-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.05565, fracNegWeights=0.060, useAAA=True)
ZZZ    = kreator.makeMyPrivateMCComponent("ZZZ",    "/ZZZ_TuneCP5_13TeV-amcatnlo-pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.01398, fracNegWeights=0.060, useAAA=True)



TriBosons = [
    WWW,
    #WWW_ll,
    WWZ,
    #WZG,
    WZZ,
    ZZZ,

]

# other Higgs processes

GGHZZ4L = kreator.makeMyPrivateMCComponent("GGHZZ4L", "/GluGluHToZZTo4L_M125_13TeV_powheg2_JHUGenV7011_pythia8/balvarez-TopNanoAODv6-1-1_2018-0d1d4920f08f56d048ece029b873a2cc/USER",  "PRIVATE", ".*root", 'phys03', 0.01212, useAAA=True)
# note: genXSecAna is incorrect because it doesn't know of the forced decay in pythia8. for the DiLeptonFilter sample, we take the filter efficiency from the ratio of the genXSecAna reports for the two samples
#VHToNonbb = kreator.makeMyPrivateMCComponent("VHToNonbb", "/VHToNonbb_M125_13TeV_amcatnloFXFX_madspin_pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.9561, fracNegWeights=0.26, useAAA=True) 
#VHToNonbb_ll = kreator.makeMyPrivateMCComponent("VHToNonbb_ll", "/VHToNonbb_M125_DiLeptonFilter_TuneCP5_13TeV_amcatnloFXFX_madspin_pythia8/-FIXME-MISSING-/NANOAODSIM",  "PRIVATE", ".*root", 'phys03', 0.9561*0.08878/2.509, fracNegWeights=0.26, useAAA=True) 

Higgs = [
GGHZZ4L,
#VHToNonbb, #VHToNonbb_ll,
]

# ----------------------------- summary ----------------------------------------


mcSamples = QCDPt + QCDHT + QCD_Mus + QCD_EMs + QCD_bcToE + Ws + DYs + VJetsQQHT + TTs + Ts + TTXs + TTXXs + DiBosons + TriBosons + Higgs


samples = mcSamples

# ---------------------------------------------------------------------

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
