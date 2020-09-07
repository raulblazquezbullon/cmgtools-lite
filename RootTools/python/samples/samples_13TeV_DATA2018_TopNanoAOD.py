from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

json='/nfs/fanae/user/clara/ttW_Top/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/cfg/Cert_314472-325175_13TeV_17SeptEarlyReReco2018ABC_PromptEraD_Collisions18_JSON.txt

#---------------------------RunA 2018 25Oct2019

DoubleMuon_Run2018A_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2018A_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2018A-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2018A_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2018A_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2018A-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
EGamma_Run2018A_25Oct2019 = kreator.makeMyPrivateDataComponent("EGamma_Run2018A_25Oct2019", "/EGamma/schoef-TopNanoAODv6-1-2-4_EGamma_Run2018A-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2018A_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2018A_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2018A-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)


#---------------------------RunB 2018 25Oct2019

DoubleMuon_Run2018B_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2018B_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2018B-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2018B_25Oct2019= kreator.makeMyPrivateDataComponent("MuonEG_Run2018B_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2018B-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
EGamma_Run2018B_25Oct2019 = kreator.makeMyPrivateDataComponent("EGamma_Run2018B_25Oct2019", "/EGamma/schoef-TopNanoAODv6-1-2-4_EGamma_Run2018B-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2018B_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2018B_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2018B-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)


#---------------------------RunC 2018 25Oct2019

DoubleMuon_Run2018C_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2018C_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2018C-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2018C_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2018C_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2018C-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
EGamma_Run2018C_25Oct2019 = kreator.makeMyPrivateDataComponent("EGamma_Run2018C_25Oct2019", "/EGamma/schoef-TopNanoAODv6-1-2-4_EGamma_Run2018C-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2018C_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2018C_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2018C-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#---------------------------RunD 2018 25Oct2019

DoubleMuon_Run2018D_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2018D_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2018D-831765d0aa9cd559fee11ff659127d4e/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2018D_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2018D_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2018D-831765d0aa9cd559fee11ff659127d4e/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
EGamma_Run2018D_25Oct2019 = kreator.makeMyPrivateDataComponent("EGamma_Run2018D_25Oct2019", "/EGamma/schoef-TopNanoAODv6-1-2-4_EGamma_Run2018D-831765d0aa9cd559fee11ff659127d4e/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2018D_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2018D_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2018D-831765d0aa9cd559fee11ff659127d4e/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)



DoubleMuon = [
    DoubleMuon_Run2018B_25Oct2019,
    DoubleMuon_Run2018C_25Oct2019,
    DoubleMuon_Run2018D_25Oct2019,
    DoubleMuon_Run2018A_25Oct2019,

]

MuonEG = [
    MuonEG_Run2018B_25Oct2019,
    MuonEG_Run2018C_25Oct2019,
    MuonEG_Run2018D_25Oct2019,
    MuonEG_Run2018A_25Oct2019,
]

EGamma = [
    EGamma_Run2018B_25Oct2019,
    EGamma_Run2018C_25Oct2019,
    EGamma_Run2018D_25Oct2019,
    EGamma_Run2018A_25Oct2019,
]

SingleMuon = [
    SingleMuon_Run2018B_25Oct2019,
    SingleMuon_Run2018C_25Oct2019,
    SingleMuon_Run2018D_25Oct2019,
    SingleMuon_Run2018A_25Oct2019,

]



dataSamples_Runs =  DoubleMuon + MuonEG + DoubleEG + SingleMuon + SingleElectron

### ---------------------------------------------------------------------

dataSamples = dataSamples_Runs 
samples = dataSamples

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
