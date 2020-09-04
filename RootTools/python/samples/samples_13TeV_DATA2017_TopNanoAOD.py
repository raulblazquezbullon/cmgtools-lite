from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

json='/nfs/fanae/user/clara/ttW_Top/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/cfg/Cert_271036-284044_13TeV_ReReco_07Aug2017_Collisions16_JSON.txt'
#json to modify

#---------------------------RunB 2017 25Oct2019

DoubleMuon_Run2017B_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017B_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2017B-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017B_25Oct2019= kreator.makeMyPrivateDataComponent("MuonEG_Run2017B_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2017B-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017B_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleEG_Run2017B_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2017B-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017B_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017B_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2017B-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017B_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017B_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2017B-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#---------------------------RunC 2017 25Oct2019

DoubleMuon_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017C_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2017C-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2017C_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2017C-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleEG_Run2017C_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2017C-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017C_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2017C-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017C_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2017C-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#---------------------------RunD 2017 25Oct2019

DoubleMuon_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017D_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2017D-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2017D_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2017D-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleEG_Run2017D_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2017D-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017D_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2017D-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017D_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2017D-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#---------------------------RunE 2017 25Oct2019
DoubleMuon_Run2017E_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017E_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2017E-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017E_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2017E_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2017E-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017E_25Oct2019= kreator.makeMyPrivateDataComponent("DoubleEG_Run2017E_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2017E-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017E_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017E_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2017E-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017E_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017E_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2017E-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#---------------------------RunF 2017 25Oct2019

DoubleMuon_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017F_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2017F-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2017F_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2017F-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleEG_Run2017F_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2017F-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017F_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2017F-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017F_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2017F-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)


DoubleMuon = [
    DoubleMuon_Run2017B_25Oct2019,
    DoubleMuon_Run2017C_25Oct2019,
    DoubleMuon_Run2017D_25Oct2019,
    DoubleMuon_Run2017E_25Oct2019,
    DoubleMuon_Run2017F_25Oct2019,

]

MuonEG = [
    MuonEG_Run2017B_25Oct2019,
    MuonEG_Run2017C_25Oct2019,
    MuonEG_Run2017D_25Oct2019,
    MuonEG_Run2017E_25Oct2019,
    MuonEG_Run2017F_25Oct2019,
]

DoubleEG = [
    DoubleEG_Run2017B_25Oct2019,
    DoubleEG_Run2017C_25Oct2019,
    DoubleEG_Run2017D_25Oct2019,
    DoubleEG_Run2017E_25Oct2019,
    DoubleEG_Run2017F_25Oct2019,
]

SingleMuon = [
    SingleMuon_Run2017B_25Oct2019,
    SingleMuon_Run2017C_25Oct2019,
    SingleMuon_Run2017D_25Oct2019,
    SingleMuon_Run2017E_25Oct2019,
    SingleMuon_Run2017F_25Oct2019,

]

SingleElectron = [
    SingleElectron_Run2017B_25Oct2019,
    SingleElectron_Run2017C_25Oct2019,
    SingleElectron_Run2017D_25Oct2019,
    SingleElectron_Run2017E_25Oct2019,
    SingleElectron_Run2017F_25Oct2019,
]



dataSamples_Runs =  DoubleMuon + MuonEG + DoubleEG + SingleMuon + SingleElectron

### ---------------------------------------------------------------------

dataSamples = dataSamples_Runs 
samples = dataSamples

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
