from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

json='/nfs/fanae/user/clara/ttW_Top/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/cfg/Cert_294927-306462_13TeV_EOY2017ReReco_Collisions17_JSON_v1.txt'


#---------------------------RunB 2017 25Oct2019





DoubleMuon_Run2017B_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017B_25Oct2019", "/DoubleMuon/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017B_25Oct2019= kreator.makeMyPrivateDataComponent("MuonEG_Run2017B_25Oct2019", "/MuonEG/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017B_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleEG_Run2017B_25Oct2019", "/DoubleEG/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017B_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017B_25Oct2019", "/SingleMuon/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017B_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017B_25Oct2019", "/SingleElectron/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#---------------------------RunC 2017 25Oct2019

DoubleMuon_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017C_25Oct2019", "/DoubleMuon/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2017C_25Oct2019", "/MuonEG/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleEG_Run2017C_25Oct2019", "/DoubleEG/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017C_25Oct2019", "/SingleMuon/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017C_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017C_25Oct2019", "/SingleElectron/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#---------------------------RunD 2017 25Oct2019

DoubleMuon_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017D_25Oct2019", "/DoubleMuon/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2017D_25Oct2019", "/MuonEG/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleEG_Run2017D_25Oct2019", "/DoubleEG/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017D_25Oct2019", "/SingleMuon/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017D_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017D_25Oct2019", "/SingleElectron/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#---------------------------RunE 2017 25Oct2019
DoubleMuon_Run2017E_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017E_25Oct2019", "/DoubleMuon/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017E_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2017E_25Oct2019", "/MuonEG/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017E_25Oct2019= kreator.makeMyPrivateDataComponent("DoubleEG_Run2017E_25Oct2019", "/DoubleEG/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017E_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017E_25Oct2019", "/SingleMuon/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017E_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017E_25Oct2019", "/SingleElectron/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#---------------------------RunF 2017 25Oct2019

DoubleMuon_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017F_25Oct2019", "/DoubleMuon/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("MuonEG_Run2017F_25Oct2019", "/MuonEG/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("DoubleEG_Run2017F_25Oct2019", "/DoubleEG/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017F_25Oct2019", "/SingleMuon/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_Run2017F_25Oct2019 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2017F_25Oct2019", "/SingleElectron/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)


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
