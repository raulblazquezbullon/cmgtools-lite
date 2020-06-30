# COMPONENT CREATOR
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()



# ====== T(T) + BOSON =====


#TGJets_lep = kreator.makeMyPrivateMCComponent("TGJets_lep", "/TGJets_leptonDecays_TuneCP5_13TeV-madgraph-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 1.018, fracNegWeights=0.411, useAAA=True) # leptonic top decays only
# TTbar cross section: NNLO, https://twiki.cern.ch/twiki/bin/view/LHCPhysics/TtbarNNLO (172.5)
#TTJets = kreator.makeMyPrivateMCComponent("TTJets", "/TTJets_TuneCUETP8M2T4_13TeV-amcatnloFXFX-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 831.76, fracNegWeights=0.319, useAAA=True)

TT_pow = kreator.makeMyPrivateMCComponent("TT_pow", "/TT_TuneCUETP8M2T4_13TeV-powheg-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 831.762, useAAA=True)

#TTJets_SingleLeptonFromTbar     = kreator.makeMyPrivateMCComponent("TTJets_SingleLeptonFromTbar"    , "/TTJets_SingleLeptFromTbar_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 831.76*(3*0.108)*(1-3*0.108) , useAAA=True)
#TTJets_SingleLeptonFromTbar_ext = kreator.makeMyPrivateMCComponent("TTJets_SingleLeptonFromTbar_ext", "/TTJets_SingleLeptFromTbar_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 831.76*(3*0.108)*(1-3*0.108) , useAAA=True)
#TTJets_SingleLeptonFromT        = kreator.makeMyPrivateMCComponent("TTJets_SingleLeptonFromT"       , "/TTJets_SingleLeptFromT_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 831.76*(3*0.108)*(1-3*0.108), useAAA=True)
#TTJets_SingleLeptonFromT_ext    = kreator.makeMyPrivateMCComponent("TTJets_SingleLeptonFromT_ext"   , "/TTJets_SingleLeptFromT_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 831.76*(3*0.108)*(1-3*0.108), useAAA=True)
#TTJets_DiLepton                 = kreator.makeMyPrivateMCComponent("TTJets_DiLepton"                , "/TTJets_DiLept_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM"     , "PRIVATE", ".*root",'phys03', 831.76*((3*0.108)**2) , useAAA=True)
#TTJets_DiLepton_ext             = kreator.makeMyPrivateMCComponent("TTJets_DiLepton_ext"            , "/TTJets_DiLept_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 831.76*((3*0.108)**2) , useAAA=True)

TTLep_pow = kreator.makeMyPrivateMCComponent("TTLep_pow", "/TTTo2L2Nu_TuneCUETP8M2_ttHtranche3_13TeV-powheg-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 831.76*((3*0.108)**2) , useAAA=True)
TTSemi_pow = kreator.makeMyPrivateMCComponent("TTSemi_pow", "/TTToSemilepton_TuneCUETP8M2_ttHtranche3_13TeV-powheg-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 2*831.76*(3*0.108)*(1-3*0.108) , useAAA=True)

#TTJets_LO_HT600to800   = kreator.makeMyPrivateMCComponent("TTJets_LO_HT600to800", "/TTJets_HT-600to800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 1.610*831.76/502.2, useAAA=True)
#TTJets_LO_HT800to1200  = kreator.makeMyPrivateMCComponent("TTJets_LO_HT800to1200", "/TTJets_HT-800to1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root",'phys03', 0.663*831.76/502.2, useAAA=True)
#TTJets_LO_HT1200to2500 = kreator.makeMyPrivateMCComponent("TTJets_LO_HT1200to2500", "/TTJets_HT-1200to2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.12*831.76/502.2, useAAA=True)
#TTJets_LO_HT2500toInf  = kreator.makeMyPrivateMCComponent("TTJets_LO_HT2500toInf", "/TTJets_HT-2500toInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM",  "PRIVATE", ".*root",'phys03', 0.001430*831.76/502.2, useAAA=True)


TTs = [
#TTJets,
TT_pow,
#TTJets_SingleLeptonFromTbar,
#TTJets_SingleLeptonFromTbar_ext,
#TTJets_SingleLeptonFromT,
#TTJets_SingleLeptonFromT_ext,
#TTJets_DiLepton,
#TTJets_DiLepton_ext,
TTLep_pow,
TTSemi_pow,
#TTJets_LO_HT600to800,
#TTJets_LO_HT800to1200,
#TTJets_LO_HT1200to2500,
#TTJets_LO_HT2500toInf
]

TTHnobb_pow = kreator.makeMyPrivateMCComponent("TTHnobb_pow", "/ttHToNonbb_M125_TuneCUETP8M2_ttHtranche3_13TeV-powheg-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.5071*(1-0.582), useAAA=True)


# These are the SM cross sections, i.e. cf = cv = 1.0 (see https://twiki.cern.ch/twiki/bin/viewauth/CMS/SingleTopHiggsGeneration13TeV, useAAA=True)
THQ = kreator.makeMyPrivateMCComponent("THQ", "/THW_Hincl_13TeV-madgraph-pythia8_TuneCUETP8M1/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',  0.7927, useAAA=True)
THW = kreator.makeMyPrivateMCComponent("THW", "/THQ_Hincl_13TeV-madgraph-pythia8_TuneCUETP8M1/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',  0.1472, useAAA=True)
# GGH cross section from LHC Higgs XS WG: https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt1314TeV?rev=15
GGHZZ4L = kreator.makeMyPrivateMCComponent("GGHZZ4L", "/GluGluHToZZTo4L_M125_13TeV_powheg2_JHUgenV6_pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.01212, useAAA=True) #43.92*2.76E-04)
GGHZZ4L_ext = kreator.makeMyPrivateMCComponent("GGHZZ4L", "/GluGluHToZZTo4L_M125_13TeV_powheg2_JHUgenV6_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.01212, useAAA=True) #43.92*2.76E-04)

#VHToNonbb = kreator.makeMyPrivateMCComponent("VHToNonbb", "/VHToNonbb_M125_13TeV_amcatnloFXFX_madspin_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.9561, fracNegWeights=0.26, useAAA=True)

Higgs = [
TTHnobb_pow,
GGHZZ4L,
GGHZZ4L_ext,
THQ, 
THW,
#VHToNonbb,
]



TGJets_lep = kreator.makeMyPrivateMCComponent("TGJets_lep", "/TGJets_leptonDecays_13TeV_amcatnlo_madspin_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 1.018, fracNegWeights=0.4, useAAA=True)

tZq_ll_1 = kreator.makeMyPrivateMCComponent("tZq_ll_1", "/tZq_ll_4f_13TeV-amcatnlo-pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.0758, fracNegWeights=0.367 , useAAA=True)
tZq_ll_2 = kreator.makeMyPrivateMCComponent("tZq_ll_2", "/tZq_ll_4f_13TeV-amcatnlo-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.0758, fracNegWeights=0.367 , useAAA=True)

tWll = kreator.makeMyPrivateMCComponent("tWll", "/ST_tWll_5f_LO_13TeV-MadGraph-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.01123, useAAA=True)
tWnunu = kreator.makeMyPrivateMCComponent("tWnunu", "/ST_tWnunu_5f_LO_13TeV-MadGraph-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.01123*1.9822 , useAAA=True)


SingleTop = [
#T_sch_lep,
#T_sch,

#T_tch,
#TBar_tch,

#T_tWch_noFullyHad,
#T_tWch_noFullyHad_ext,
#T_tWch_noFullyHad_ext2,
#TBar_tWch_noFullyHad,
#TBar_tWch_noFullyHad_ext,
#TBar_tWch_noFullyHad_ext2,

#T_tWch,
#TBar_tWch,

TGJets_lep,
tZq_ll_1,
tZq_ll_2,
tWll,
tWnunu
]

### V+jets inclusive (from https://twiki.cern.ch/twiki/bin/viewauth/CMS/StandardModelCrossSectionsat13TeV)

WJetsToLNu_LO = kreator.makeMyPrivateMCComponent("WJetsToLNu_LO","/WJetsToLNu_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 3* 20508.9, useAAA=True)
DYJetsToLL_M10to50 = kreator.makeMyPrivateMCComponent("DYJetsToLL_M10to50", "/DYJetsToLL_M-10to50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 18610, fracNegWeights=0.135, useAAA=True)
DYJetsToLL_M10to50_LO = kreator.makeMyPrivateMCComponent("DYJetsToLL_M10to50_LO", "/DYJetsToLL_M-10to50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 18610, useAAA=True)
DYJetsToLL_M50 = kreator.makeMyPrivateMCComponent("DYJetsToLL_M50", "/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 2008.*3, fracNegWeights=0.16, useAAA=True)
DYJetsToLL_M50_LO =  kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_LO", "/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 2008.*3, useAAA=True)
VJets = [
#WJetsToLNu,
#WJetsToLNu_ext,
#WJetsToLNu_LO,
#WJetsToLNu_LO_ext,
DYJetsToLL_M10to50,
DYJetsToLL_M10to50_LO,
DYJetsToLL_M50,
DYJetsToLL_M50_LO,
]

# DY njet bins


# DY HT bins:
#https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#DY_Z
DYJetsToLL_M50_HT70to100      =   kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT70to100"    , '/DYJetsToLL_M-50_HT-70to100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER'        ,    "PRIVATE", ".*root",'phys03', 170.4*1.23, useAAA=True)
DYJetsToLL_M50_HT100to200     =   kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT100to200", "/DYJetsToLL_M-50_HT-100to200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"             , "PRIVATE", ".*root",'phys03', 147.4*1.23, useAAA=True)
DYJetsToLL_M50_HT200to400     =   kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT200to400", "/DYJetsToLL_M-50_HT-200to400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"             , "PRIVATE", ".*root",'phys03',40.99*1.23, useAAA=True)
DYJetsToLL_M50_HT400to600     =   kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT400to600", "/DYJetsToLL_M-50_HT-400to600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"             , "PRIVATE", ".*root",'phys03',5.678*1.23, useAAA=True)
DYJetsToLL_M50_HT600to800     =   kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT600to800"   , '/DYJetsToLL_M-50_HT-600to800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER',           "PRIVATE", ".*root",'phys03', 1.367*1.23 , useAAA=True)
#DYJetsToLL_M50_HT800to1200    =   kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT800to1200"  , 'Missing',          "PRIVATE", ".*root",'phys03', 0.6304*1.23 , useAAA=True)
#DYJetsToLL_M50_HT1200to2500   =   kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT1200to2500" , '/missing',         "PRIVATE", ".*root",'phys03', 0.1514*1.23 , useAAA=True)
DYJetsToLL_M50_HT2500toInf    =   kreator.makeMyPrivateMCComponent("DYJetsToLL_M50_HT2500toInf"  , '/DYJetsToLL_M-50_HT-2500toInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER',          "PRIVATE", ".*root",'phys03', 0.003565*1.23 , useAAA=True)

DYJetsM50HT = [
DYJetsToLL_M50_HT70to100   , 
DYJetsToLL_M50_HT100to200,
DYJetsToLL_M50_HT200to400,
DYJetsToLL_M50_HT400to600,
DYJetsToLL_M50_HT600to800  ,
#DYJetsToLL_M50_HT800to1200 ,
#DYJetsToLL_M50_HT1200to2500,
DYJetsToLL_M50_HT2500toInf ,

]


DYJetsToLL_M5to50_HT70to100     = kreator.makeMyPrivateMCComponent("DYJetsToLL_M5to50_HT70to100"    , "/DYJetsToLL_M-5to50_HT-70to100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 301.2, useAAA=True) #LO
DYJetsToLL_M5to50_HT100to200     = kreator.makeMyPrivateMCComponent("DYJetsToLL_M5to50_HT100to200"    , "/DYJetsToLL_M-5to50_HT-100to200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 224.2, useAAA=True) #LO
DYJetsToLL_M5to50_HT200to400     = kreator.makeMyPrivateMCComponent("DYJetsToLL_M5to50_HT200to400"    , "/DYJetsToLL_M-5to50_HT-200to400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 37.2, useAAA=True) #LO
DYJetsToLL_M5to50_HT400to600     = kreator.makeMyPrivateMCComponent("DYJetsToLL_M5to50_HT400to600"    , "/DYJetsToLL_M-5to50_HT-400to600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 3.581, useAAA=True) #LO
#DYJetsToLL_M5to50_HT600toInf_ext = kreator.makeMyPrivateMCComponent("DYJetsToLL_M5to50_HT600toInf_ext", "/DYJetsToLL_M-5to50_HT-600toInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 1.124, useAAA=True) #LO

DYJetsM5to50HT = [
    DYJetsToLL_M5to50_HT70to100 ,
    DYJetsToLL_M5to50_HT100to200,
    DYJetsToLL_M5to50_HT200to400,
    DYJetsToLL_M5to50_HT400to600,
    #DYJetsToLL_M5to50_HT600toInf,
]

### W+jets
WJetsToLNu_HT70to100 = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT70to100", "/WJetsToLNu_HT-70To100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',1319*1.21, useAAA=True)
WJetsToLNu_HT100to200 = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT100to200", "/WJetsToLNu_HT-100To200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',1345*1.21, useAAA=True)
WJetsToLNu_HT200to400 = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT200to400", "/WJetsToLNu_HT-200To400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',359.7*1.21, useAAA=True)
WJetsToLNu_HT400to600      = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT400to600", "/WJetsToLNu_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',48.91*1.21, useAAA=True)
WJetsToLNu_HT600to800      = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT600to800",     "/WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',12.05*1.21, useAAA=True)
WJetsToLNu_HT600to800_ext  = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT600to800_ext", '/WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER', "PRIVATE", ".*root",'phys03',12.05*1.21, useAAA=True)
WJetsToLNu_HT800to1200 = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT800to1200_ext","/WJetsToLNu_HT-800To1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',5.501*1.21, useAAA=True)
WJetsToLNu_HT1200to2500 = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT1200to2500_ext", "/WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',1.329*1.21, useAAA=True)
WJetsToLNu_HT2500toInf = kreator.makeMyPrivateMCComponent("WJetsToLNu_HT2500toInf", "/WJetsToLNu_HT-2500ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',0.03216*1.21, useAAA=True)

WJetsToLNuHT = [
WJetsToLNu_HT70to100,
WJetsToLNu_HT100to200,
WJetsToLNu_HT200to400,
WJetsToLNu_HT400to600,
WJetsToLNu_HT600to800,
WJetsToLNu_HT600to800_ext,
WJetsToLNu_HT800to1200,
WJetsToLNu_HT1200to2500,
WJetsToLNu_HT2500toInf,
]

# W+Jets NLO in Pt bins, cross sections are determined from GenXSecAnalyzer running over 10 files each


### GJets (cross sections from McM)
GJets_HT40to100      = kreator.makeMyPrivateMCComponent("GJets_HT40to100"    , "/GJets_HT-40To100_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',20730, useAAA=True)
GJets_HT100to200     = kreator.makeMyPrivateMCComponent("GJets_HT100to200",    "/GJets_HT-100To200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',9226, useAAA=True)
GJets_HT200to400     = kreator.makeMyPrivateMCComponent("GJets_HT200to400",    "/GJets_HT-200To400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',2300, useAAA=True)
GJets_HT200to400_ext = kreator.makeMyPrivateMCComponent("GJets_HT200to400_ext","/GJets_HT-200To400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',2300, useAAA=True)
GJets_HT400to600     = kreator.makeMyPrivateMCComponent("GJets_HT400to600"    , "/GJets_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',274.4, useAAA=True)
GJets_HT600toInf     = kreator.makeMyPrivateMCComponent("GJets_HT600toInf"    , "/GJets_HT-600ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',93.38, useAAA=True)

GJetsHT = [
GJets_HT40to100,
GJets_HT100to200,
GJets_HT200to400,
GJets_HT200to400_ext,
GJets_HT400to600,
GJets_HT600toInf,
]

### Zinv
ZJetsToNuNu_HT100to200 = kreator.makeMyPrivateMCComponent("ZJetsToNuNu_HT100to200", "/ZJetsToNuNu_HT-100To200_13TeV-madgraph/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',280.47*1.23, useAAA=True)
ZJetsToNuNu_HT200to400 = kreator.makeMyPrivateMCComponent("ZJetsToNuNu_HT200to400", "/ZJetsToNuNu_HT-200To400_13TeV-madgraph/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',78.36*1.23, useAAA=True) 
ZJetsToNuNu_HT400to600 = kreator.makeMyPrivateMCComponent("ZJetsToNuNu_HT400to600", "/ZJetsToNuNu_HT-400To600_13TeV-madgraph/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',10.94*1.23, useAAA=True) 
#ZJetsToNuNu_HT600to800 = kreator.makeMyPrivateMCComponent("ZJetsToNuNu_HT600to800", "/ZJetsToNuNu_HT-600To800_13TeV-madgraph/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03',3.221*1.23, useAAA=True)
ZJetsToNuNu_HT800to1200 = kreator.makeMyPrivateMCComponent("ZJetsToNuNu_HT800to1200", "/ZJetsToNuNu_HT-800To1200_13TeV-madgraph/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',3.221*1.23, useAAA=True)  # FIXME
ZJetsToNuNu_HT1200to2500 = kreator.makeMyPrivateMCComponent("ZJetsToNuNu_HT1200to2500", "/ZJetsToNuNu_HT-1200To2500_13TeV-madgraph/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',0.3586*1.23 , useAAA=True)
#ZJetsToNuNu_HT2500toInf = kreator.makeMyPrivateMCComponent("ZJetsToNuNu_HT2500toInf", "/ZJetsToNuNu_HT-2500ToInf_13TeV-madgraph/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03',0.008203*1.23, useAAA=True)
ZJetsToNuNuHT = [
ZJetsToNuNu_HT100to200,
#ZJetsToNuNu_HT100to200_ext,
ZJetsToNuNu_HT200to400,
#ZJetsToNuNu_HT200to400_ext,
ZJetsToNuNu_HT400to600,
#ZJetsToNuNu_HT400to600_ext,
#ZJetsToNuNu_HT600to800,
ZJetsToNuNu_HT800to1200,
ZJetsToNuNu_HT1200to2500,
#ZJetsToNuNu_HT1200to2500_ext,
#ZJetsToNuNu_HT2500toInf,
]



### QCD
#missing no enriched


# qcd muenr
QCD_Pt15to20_Mu5    = kreator.makeMyPrivateMCComponent("QCD_Pt15to20_Mu5"    , "/QCD_Pt-15to20_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER"       , "PRIVATE" , ".*root",'phys03' , 1273190000*0.003, useAAA=True)















#QCD_Mu15 = kreator.makeMyPrivateMCComponent("QCD_Mu15", "/QCD_Pt-20toInf_MuEnrichedPt15_TuneCUETP8M1_13TeV_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 720.65e6*0.00042, useAAA=True)
#QCD_Pt15to20_Mu5    = kreator.makeMyPrivateMCComponent("QCD_Pt15to20_Mu5"    , "/QCD_Pt-15to20_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM"       , "PRIVATE" , ".*root",'phys03' , 1273190000*0.003, useAAA=True)
QCD_Pt20to30_Mu5    = kreator.makeMyPrivateMCComponent("QCD_Pt20to30_Mu5"    , "/QCD_Pt-20to30_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"      , "PRIVATE" , ".*root",'phys03' , 558528000*0.0053, useAAA=True)
QCD_Pt30to50_Mu5    = kreator.makeMyPrivateMCComponent("QCD_Pt30to50_Mu5", "/QCD_Pt-30to50_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 139803000*0.01182, useAAA=True)
QCD_Pt50to80_Mu5    = kreator.makeMyPrivateMCComponent("QCD_Pt50to80_Mu5"    , "/QCD_Pt-50to80_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER" , "PRIVATE" , ".*root",'phys03' , 19222500*0.02276, useAAA=True)
QCD_Pt80to120_Mu5   = kreator.makeMyPrivateMCComponent("QCD_Pt80to120_Mu5"   , "/QCD_Pt-80to120_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER"     , "PRIVATE" , ".*root",'phys03' , 2758420*0.03844, useAAA=True)
QCD_Pt80to120_Mu5_ext   = kreator.makeMyPrivateMCComponent("QCD_Pt80to120_Mu5_ext"   , "/QCD_Pt-80to120_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"     , "PRIVATE" , ".*root",'phys03' , 2758420*0.03844, useAAA=True)
QCD_Pt120to170_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt120to170_Mu5"  , "/QCD_Pt-120to170_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE" , ".*root",'phys03' , 469797*0.05362, useAAA=True)
QCD_Pt170to300_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt170to300_Mu5", "/QCD_Pt-170to300_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 117989*0.07335, useAAA=True)
QCD_Pt170to300_Mu5_ext  = kreator.makeMyPrivateMCComponent("QCD_Pt170to300_Mu5_ext", "/QCD_Pt-170to300_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 117989*0.07335, useAAA=True)
QCD_Pt300to470_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt300to470_Mu5"  , "/QCD_Pt-300to470_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"    , "PRIVATE" , ".*root",'phys03' , 7820.25*0.10196, useAAA=True)
#QCD_Pt300to470_Mu5_ext  = kreator.makeMyPrivateMCComponent("QCD_Pt300to470_Mu5_ext"  , "/QCD_Pt-300to470_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM"    , "PRIVATE" , ".*root",'phys03' , 7820.25*0.10196, useAAA=True)
#QCD_Pt300to470_Mu5_ext2  = kreator.makeMyPrivateMCComponent("QCD_Pt300to470_Mu5_ext2"  , "/QCD_Pt-300to470_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext2-v1/NANOAODSIM"    , "PRIVATE" , ".*root",'phys03' , 7820.25*0.10196, useAAA=True)
QCD_Pt470to600_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt470to600_Mu5"  , "/QCD_Pt-470to600_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"    , "PRIVATE" , ".*root",'phys03' , 645.528*0.12242, useAAA=True)
QCD_Pt470to600_Mu5_ext  = kreator.makeMyPrivateMCComponent("QCD_Pt470to600_Mu5_ext"  , "/QCD_Pt-470to600_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"    , "PRIVATE" , ".*root",'phys03' , 645.528*0.12242, useAAA=True)
#QCD_Pt470to600_Mu5_ext2  = kreator.makeMyPrivateMCComponent("QCD_Pt470to600_Mu5_ext2"  , "/QCD_Pt-470to600_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext2-v1/NANOAODSIM"    , "PRIVATE" , ".*root",'phys03' , 645.528*0.12242, useAAA=True)
QCD_Pt600to800_Mu5  = kreator.makeMyPrivateMCComponent("QCD_Pt600to800_Mu5", "/QCD_Pt-600to800_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 187.109*0.13412, useAAA=True)
#QCD_Pt600to800_Mu5_ext  = kreator.makeMyPrivateMCComponent("QCD_Pt600to800_Mu5_ext", "/QCD_Pt-600to800_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 187.109*0.13412, useAAA=True)
QCD_Pt800to1000_Mu5 = kreator.makeMyPrivateMCComponent("QCD_Pt800to1000_Mu5" , "/QCD_Pt-800to1000_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"   , "PRIVATE" , ".*root",'phys03' , 32.3486*0.14552, useAAA=True)
#QCD_Pt800to1000_Mu5_ext = kreator.makeMyPrivateMCComponent("QCD_Pt800to1000_Mu5_ext" , "/QCD_Pt-800to1000_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM"   , "PRIVATE" , ".*root",'phys03' , 32.3486*0.14552, useAAA=True)
#QCD_Pt800to1000_Mu5_ext2 = kreator.makeMyPrivateMCComponent("QCD_Pt800to1000_Mu5_ext2" , "/QCD_Pt-800to1000_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext2-v1/NANOAODSIM"   , "PRIVATE" , ".*root",'phys03' , 32.3486*0.14552, useAAA=True)
QCD_Pt1000toInf_Mu5 = kreator.makeMyPrivateMCComponent("QCD_Pt1000toInf_Mu5" , "/QCD_Pt-1000toInf_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"   , "PRIVATE" , ".*root",'phys03' , 10.4305*0.15544, useAAA=True)
#QCD_Pt1000toInf_Mu5_ext = kreator.makeMyPrivateMCComponent("QCD_Pt1000toInf_Mu5_ext" , "/QCD_Pt-1000toInf_MuEnrichedPt5_TuneCUETP8M1_13TeV_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM"   , "PRIVATE" , ".*root",'phys03' , 10.4305*0.15544, useAAA=True)

QCD_Mu5 = [
#QCD_Pt15to20_Mu5,
QCD_Pt20to30_Mu5,
QCD_Pt30to50_Mu5,
QCD_Pt50to80_Mu5,
QCD_Pt80to120_Mu5,
QCD_Pt80to120_Mu5_ext,
QCD_Pt120to170_Mu5,
QCD_Pt170to300_Mu5,
QCD_Pt170to300_Mu5_ext,
QCD_Pt300to470_Mu5,
#QCD_Pt300to470_Mu5_ext,
#QCD_Pt300to470_Mu5_ext2,
QCD_Pt470to600_Mu5,
QCD_Pt470to600_Mu5_ext,
#QCD_Pt470to600_Mu5_ext2,
QCD_Pt600to800_Mu5,
#QCD_Pt600to800_Mu5_ext,
QCD_Pt800to1000_Mu5,
#QCD_Pt800to1000_Mu5_ext,
#QCD_Pt800to1000_Mu5_ext2,
QCD_Pt1000toInf_Mu5,
#QCD_Pt1000toInf_Mu5_ext,
]


# qcd emenr
##QCD_Pt15to20_EMEnriched   = kreator.makeMyPrivateMCComponent("QCD_Pt15to20_EMEnriched"  ,"/QCD_Pt-15to20_EMEnriched_TuneCUETP8M1_13TeV_pythia8/RunIIFall15MiniAODv2-PU25nsData2015v1_76X_mcRun2_asymptotic_v12-v1/MINIAODSIM"  , "PRIVATE", ".*root",'phys03', 1273000000*0.0002, useAAA=True)
QCD_Pt20to30_EMEnriched   = kreator.makeMyPrivateMCComponent("QCD_Pt20to30_EMEnriched"  ,"/QCD_Pt-20to30_EMEnriched_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"  , "PRIVATE", ".*root",'phys03', 557600000*0.0096, useAAA=True)
QCD_Pt30to50_EMEnriched   = kreator.makeMyPrivateMCComponent("QCD_Pt30to50_EMEnriched"  ,"/QCD_Pt-30to50_EMEnriched_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER"  , "PRIVATE", ".*root",'phys03', 136000000*0.073, useAAA=True)
#QCD_Pt30to50_EMEnriched_ext   = kreator.makeMyPrivateMCComponent("QCD_Pt30to50_EMEnriched_ext"  ,"/QCD_Pt-30to50_EMEnriched_TuneCUETP8M1_13TeV_pythia8/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6_ext1-v1/MINIAODSIM"  , "PRIVATE", ".*root",'phys03', 136000000*0.073, useAAA=True)
QCD_Pt50to80_EMEnriched   = kreator.makeMyPrivateMCComponent("QCD_Pt50to80_EMEnriched", "/QCD_Pt-50to80_EMEnriched_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 19800000*0.146, useAAA=True)
QCD_Pt80to120_EMEnriched_ext  = kreator.makeMyPrivateMCComponent("QCD_Pt80to120_EMEnriched_ext" ,"/QCD_Pt-80to120_EMEnriched_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER" , "PRIVATE", ".*root",'phys03', 2800000*0.125, useAAA=True)
QCD_Pt120to170_EMEnriched = kreator.makeMyPrivateMCComponent("QCD_Pt120to170_EMEnriched","/QCD_Pt-120to170_EMEnriched_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 477000*0.132, useAAA=True)
QCD_Pt170to300_EMEnriched = kreator.makeMyPrivateMCComponent("QCD_Pt170to300_EMEnriched","/QCD_Pt-170to300_EMEnriched_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 114000*0.165, useAAA=True)
QCD_Pt300toInf_EMEnriched = kreator.makeMyPrivateMCComponent("QCD_Pt300toInf_EMEnriched","/QCD_Pt-300toInf_EMEnriched_TuneCUETP8M1_13TeV_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 9000*0.15, useAAA=True)

QCDPtEMEnriched = [
#QCD_Pt15to20_EMEnriched,
QCD_Pt20to30_EMEnriched,
QCD_Pt30to50_EMEnriched,
#QCD_Pt30to50_EMEnriched_ext,
QCD_Pt50to80_EMEnriched,
#QCD_Pt80to120_EMEnriched,
QCD_Pt120to170_EMEnriched,
QCD_Pt170to300_EMEnriched,
QCD_Pt300toInf_EMEnriched
]

# qcd bctoe


# QCD HT bins (cross sections from McM)

### DiBosons

# cross section from https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#Diboson


WWTo2L2Nu = kreator.makeMyPrivateMCComponent("WWTo2L2Nu", "/WWTo2L2Nu_13TeV-powheg/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 10.481 , useAAA=True)
WWTo2L2Nu_ext = kreator.makeMyPrivateMCComponent("WWTo2L2Nu", "/WWTo2L2Nu_13TeV-powheg/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 10.481 , useAAA=True)
WWToLNuQQ = kreator.makeMyPrivateMCComponent("WWToLNuQQ", "/WWToLNuQQ_13TeV-powheg/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 43.53 , useAAA=True)
WWTo1L1Nu2Q = kreator.makeMyPrivateMCComponent("WWTo1L1Nu2Q", "/WWTo1L1Nu2Q_13TeV_amcatnloFXFX_madspin_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 45.35, fracNegWeights=0.189 , useAAA=True) # genXSecAna

ZZTo2L2Nu = kreator.makeMyPrivateMCComponent("ZZTo2L2Nu", "/ZZTo2L2Nu_13TeV_powheg_pythia8_ext1/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.564, useAAA=True)
#ZZTo2L2Q = kreator.makeMyPrivateMCComponent("ZZTo2L2Q", "/ZZTo2L2Q_13TeV_amcatnloFXFX_madspin_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03',  3.28, fracNegWeights=0.18, useAAA=True)
ZZTo2Q2Nu = kreator.makeMyPrivateMCComponent("ZZTo2Q2Nu", "/ZZTo2Q2Nu_13TeV_amcatnloFXFX_madspin_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',  4.04, fracNegWeights=0.19, useAAA=True)
ZZTo4L = kreator.makeMyPrivateMCComponent("ZZTo4L", "/ZZTo4L_13TeV_powheg_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 1.256, useAAA=True)


#WZJToLLLNu =  kreator.makeMyPrivateMCComponent("WZJToLLLNu"  , "/WZJToLLLNu_TuneCUETP8M1_13TeV-amcnlo-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM"  , "PRIVATE", ".*root",'phys03', 4.708 , useAAA=True)
#WZTo1L3Nu   = kreator.makeMyPrivateMCComponent("WZTo1L3Nu"  , "/WZTo1L3Nu_13TeV_amcatnloFXFX_madspin_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM"  , "PRIVATE", ".*root",'phys03', (47.13)*(3*0.108)*(0.2), fracNegWeights=0.22 , useAAA=True)
#WZTo1L1Nu2Q = kreator.makeMyPrivateMCComponent("WZTo1L1Nu2Q", "/WZTo1L1Nu2Q_13TeV_amcatnloFXFX_madspin_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03',  10.71, fracNegWeights=0.21, useAAA=True)
#WZTo2L2Q    = kreator.makeMyPrivateMCComponent("WZTo2L2Q"   , "/WZTo2L2Q_13TeV_amcatnloFXFX_madspin_pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM"   , "PRIVATE", ".*root",'phys03',  5.60, fracNegWeights=0.2, useAAA=True)
#WZTo3LNu    = kreator.makeMyPrivateMCComponent("WZTo3LNu"    , "/WZTo3LNu_TuneCUETP8M1_13TeV-powheg-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 4.42965, useAAA=True)
#WZTo3LNu_ext= kreator.makeMyPrivateMCComponent("WZTo3LNu_ext", "/WZTo3LNu_TuneCUETP8M1_13TeV-powheg-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 4.42965, useAAA=True)
#WZTo3LNu_fxfx = kreator.makeMyPrivateMCComponent("WZTo3LNu_fxfx", "/WZTo3LNu_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 4.666, fracNegWeights=0.19, useAAA=True)

VVTo2L2Nu = kreator.makeMyPrivateMCComponent("VVTo2L2Nu","/VVTo2L2Nu_13TeV_amcatnloFXFX_madspin_pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',  11.95, fracNegWeights=0.2, useAAA=True)

#WGJets = kreator.makeMyPrivateMCComponent("WGJets", "/WGJets_MonoPhoton_PtG-130_TuneCUETP8M1_13TeV-madgraph/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.6637, useAAA=True)
#WGToLNuG = kreator.makeMyPrivateMCComponent("WGToLNuG", "/WGToLNuG_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 585.8, useAAA=True)
#WGToLNuG_amcatnlo = kreator.makeMyPrivateMCComponent("WGToLNuG_amcatnlo", "/WGToLNuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext1-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 511.2, fracNegWeights=0.18, useAAA=True) # genXSecAna
#WGToLNuG_amcatnlo_ext = kreator.makeMyPrivateMCComponent("WGToLNuG_amcatnlo_ext", "/WGToLNuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext2-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 511.2, fracNegWeights=0.18, useAAA=True) # genXSecAna
#WGToLNuG_amcatnlo_ext2 = kreator.makeMyPrivateMCComponent("WGToLNuG_amcatnlo_ext2", "/WGToLNuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext3-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 511.2, fracNegWeights=0.18, useAAA=True) # genXSecAna

#ZGTo2NuG = kreator.makeMyPrivateMCComponent("ZGTo2NuG","/ZGTo2NuG_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v2/NANOAODSIM", "PRIVATE", ".*root",'phys03',28.05, fracNegWeights=0.19, useAAA=True)
ZGTo2LG = kreator.makeMyPrivateMCComponent("ZGTo2LG", "/ZGToLLG_01J_LoosePtlPtg_5f_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 131.3, fracNegWeights=0.16, useAAA=True)
ZGTo2LG_ext = kreator.makeMyPrivateMCComponent("ZGTo2LG", "/ZGToLLG_01J_LoosePtlPtg_5f_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 131.3, fracNegWeights=0.16, useAAA=True)


WW = kreator.makeMyPrivateMCComponent("WW", "/WW_TuneCUETP8M1_13TeV-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 63.21 * 1.82, useAAA=True)

ZZ = kreator.makeMyPrivateMCComponent("ZZ", "/ZZ_TuneCUETP8M1_13TeV-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 16.523 , useAAA=True)


DiBosons = [
WWTo2L2Nu,
WWToLNuQQ,
#WWToLNuQQ_ext,
WWTo1L1Nu2Q,
ZZTo2L2Nu,
#ZZTo2L2Q,
ZZTo2Q2Nu,
ZZTo4L,
#WZJToLLLNu,
#WZTo1L3Nu,
#WZTo1L1Nu2Q,
#WZTo2L2Q,
#WZTo3LNu,
#WZTo3LNu_ext,
#WZTo3LNu_fxfx,
VVTo2L2Nu,
#VVTo2L2Nu_ext,
#WGToLNuG,
#WGToLNuG_amcatnlo,
#WGToLNuG_amcatnlo_ext,
#WGToLNuG_amcatnlo_ext2,
#WGJets,
#ZNuNuGJets_40130,
#ZGTo2NuG,
ZGTo2LG,
#WWDoubleTo2L,
#WpWpJJ,
WW,
#WW_ext,
#WZ,
#WZ_ext,#
ZZ,
#ZZ_ext
]

### TriBosons
# cross section from https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#Triboson
#WWW = kreator.makeMyPrivateMCComponent("WWW", "/WWW_4F_TuneCUETP8M1_13TeV-amcatnlo-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.2086, fracNegWeights=0.053, useAAA=True)
#WWW_ll = kreator.makeMyPrivateMCComponent("WWW_ll", "/WWW_4F_DiLeptonFilter_TuneCUETP8M1_13TeV-amcatnlo-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v3/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.007201, fracNegWeights=0.063, useAAA=True) # xs from genXSecAna  (on Fall17)
WWZ = kreator.makeMyPrivateMCComponent("WWZ", "/WWZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',  0.1651 , fracNegWeights=0.06, useAAA=True)
WZZ = kreator.makeMyPrivateMCComponent("WZZ", "/WZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',  0.05565 , fracNegWeights=0.060, useAAA=True)
ZZZ = kreator.makeMyPrivateMCComponent("ZZZ", "/ZZZ_TuneCUETP8M1_13TeV-amcatnlo-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',  0.01398 , fracNegWeights=0.060, useAAA=True)

TriBosons = [
#WWW,
#WWW_ll,
WZZ,
WWZ,
ZZZ,
]

### TTV
TTWToLNu = kreator.makeMyPrivateMCComponent("TTWToLNu", "/TTWJetsToLNu_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.2043, fracNegWeights=0.227, useAAA=True)
#TTWToLNu_ext = kreator.makeMyPrivateMCComponent("TTWToLNu_ext", "/TTWJetsToLNu_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext2-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.2043, fracNegWeights=0.227, useAAA=True)
TTWToQQ = kreator.makeMyPrivateMCComponent("TTWToQQ", "/TTWJetsToQQ_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.40620, fracNegWeights=0.24, useAAA=True)
#TTW_LO = kreator.makeMyPrivateMCComponent("TTW_LO", "/ttWJets_13TeV_madgraphMLM/RunIISummer16NanoAODv4-Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03',  0.6105 , useAAA=True)
#TTZToQQ = kreator.makeMyPrivateMCComponent("TTZToQQ","/TTZToQQ_TuneCUETP8M1_13TeV-amcatnlo-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.5297, fracNegWeights=0.264, useAAA=True)
TTZToLLNuNu      = kreator.makeMyPrivateMCComponent("TTZToLLNuNu", "/TTZToLLNuNu_M-10_TuneCUETP8M1_13TeV-amcatnlo-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.2529, fracNegWeights=0.264, useAAA=True)
#TTZToLLNuNu_ext  = kreator.makeMyPrivateMCComponent("TTZToLLNuNu_ext", "/TTZToLLNuNu_M-10_TuneCUETP8M1_13TeV-amcatnlo-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext2-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.2529, fracNegWeights=0.264, useAAA=True)
#TTZToLLNuNu_ext2 = kreator.makeMyPrivateMCComponent("TTZToLLNuNu_ext2", "/TTZToLLNuNu_M-10_TuneCUETP8M1_13TeV-amcatnlo-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6_ext3-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.2529, fracNegWeights=0.264, useAAA=True)
TTZToLLNuNu_m1to10  = kreator.makeMyPrivateMCComponent("TTZToLLNuNu_m1to10","/TTZToLL_M-1to10_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.0493, useAAA=True)
# https://twiki.cern.ch/twiki/bin/view/CMS/SameSignDilepton2016
TTZ_LO = kreator.makeMyPrivateMCComponent("TTZ_LO", "/ttZJets_13TeV_madgraphMLM-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03',  0.5297/0.692, useAAA=True)
TTGJets     = kreator.makeMyPrivateMCComponent("TTGJets",    "/TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8/schoef-TopNanoAODv6-1-2-2_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 3.76, fracNegWeights=0.34, useAAA=True)
TTGJets_ext = kreator.makeMyPrivateMCComponent("TTGJets_ext","/TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 3.76, fracNegWeights=0.34, useAAA=True)

TTV = [
TTWToLNu,
#TTWToLNu_ext,
TTWToQQ,
#TTW_LO,
#TTZToQQ,
TTZToLLNuNu,
#TTZToLLNuNu_ext,
#TTZToLLNuNu_ext2,
TTZToLLNuNu_m1to10,
TTZ_LO,
TTGJets,
TTGJets_ext
]

### Rares
#TTTT = kreator.makeMyPrivateMCComponent("TTTT", "/TTTT_TuneCUETP8M1_13TeV-amcatnlo-pythia8/RunIISummer16NanoAODv4-PUMoriond17_Nano14Dec2018_102X_mcRun2_asymptotic_v6-v1/NANOAODSIM", "PRIVATE", ".*root",'phys03', 0.009103, fracNegWeights=0.311, useAAA=True)
TTTT_P8M2T4 = kreator.makeMyPrivateMCComponent("TTTT_P8M2T4", "/TTTT_TuneCUETP8M2T4_13TeV-amcatnlo-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE", ".*root",'phys03', 0.009103, fracNegWeights=0.311, useAAA=True)
TTWW_LO = kreator.makeMyPrivateMCComponent("TTWW_LO","/TTWW_TuneCUETP8M2T4_13TeV-madgraph-pythia8/schoef-TopNanoAODv6-1-1_2016-88146d75cb10601530484643de5f7795/USER", "PRIVATE",".*root",'phys03', 0.007936, useAAA=True) # XS from genXSAnalyzer

Rares = [
#TTTT,
TTTT_P8M2T4,
TTWW_LO,
]

#ewk

### ----------------------------- summary ----------------------------------------

mcSamples = TTs + SingleTop + VJets + DYJetsM50HT + DYJetsM5to50HT + WJetsToLNuHT +  GJetsHT + ZJetsToNuNuHT + QCDPtEMEnriched + QCD_Mu5 +  DiBosons + TriBosons + TTV + Higgs + Rares   # DYNJets + WJetsToLNuPT +WNJets +  + QCDHT + QCDPtbcToE + QCDPt  [QCD_Mu15] + EWKV2Jets

samples = mcSamples

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples,localobjs=locals())
