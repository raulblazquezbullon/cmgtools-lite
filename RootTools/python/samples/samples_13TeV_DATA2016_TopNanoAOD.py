from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

json='/afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions16/13TeV/ReReco/Final/Cert_271036-284044_13TeV_ReReco_07Aug2017_Collisions16_JSON.txt'






print('h')





### ----------------------------- Run2016B 14Dec2018 ----------------------------------------

#JetHT_2016          = kreator.makeMyPrivateDataComponent("JetHT_Run2016B_14Dec2018"         , "/JetHT/schoef-TopNanoAODv6-1-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"         , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
#JetHT_2016_ext          = kreator.makeMyPrivateDataComponent("JetHT_Run2016B_14Dec2018"         , "/JetHT/schoef-TopNanoAODv6-1-2-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER/USER"         , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
#HTMHT_Run2016B_14Dec2018          = kreator.makeMyPrivateDataComponent("HTMHT_Run2016B_14Dec2018"         , "/HTMHT/Run2016B_ver2-Nano14Dec2018_ver2-v1/NANOAOD"         , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MET_2016            = kreator.makeMyPrivateDataComponent("MET_Run2016B_14Dec2018"           , "/MET/schoef-TopNanoAODv6-1-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"           , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MET_2016_ext            = kreator.makeMyPrivateDataComponent("MET_Run2016B_14Dec2018"           , "/MET/schoef-TopNanoAODv6-1-2-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"           , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_2016 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2016B_14Dec2018", "/SingleElectron/schoef-TopNanoAODv6-1-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleElectron_ext_2016 = kreator.makeMyPrivateDataComponent("SingleElectron_Run2016B_14Dec2018", "/SingleElectron/schoef-TopNanoAODv6-1-2-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_2016     = kreator.makeMyPrivateDataComponent("SingleMuon_Run2016B_14Dec2018"    , "/SingleMuon/schoef-TopNanoAODv6-1-2-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"    , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_ext_2016     = kreator.makeMyPrivateDataComponent("SingleMuon_Run2016B_14Dec2018"    , "/SingleMuon/schoef-TopNanoAODv6-1-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"    , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

#SinglePhoton_Run2016B_14Dec2018   = kreator.makeMyPrivateDataComponent("SinglePhoton_Run2016B_14Dec2018"  , "/SinglePhoton/Run2016B_ver2-Nano14Dec2018_ver2-v1/NANOAOD"  , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_2016       = kreator.makeMyPrivateDataComponent("DoubleEG_Run2016B_14Dec2018"      , "/DoubleEG/schoef-TopNanoAODv6-1-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"      , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleEG_ext_2016      = kreator.makeMyPrivateDataComponent("DoubleEG_Run2016B_14Dec2018"      , "/DoubleEG/schoef-TopNanoAODv6-1-2-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"      , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_2016       = kreator.makeMyPrivateDataComponent("MuonEG_Run2016B_14Dec2018"        , "/MuonEG/schoef-TopNanoAODv6-1-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"        , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleMuon_2016     = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2016B_14Dec2018"    , "/DoubleMuon/schoef-TopNanoAODv6-1-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"    , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleMuon_2016_ext1     = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2016B_14Dec2018"    , "/DoubleMuon/schoef-TopNanoAODv6-1-2-2_2016-ba7e3129b1ff910ad1abce6981b33804/USER"    , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleMuon_2016_ext2     = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2016B_14Dec2018"    , "/DoubleMuon/schoef-TopNanoAODv6-1-2-2_2016-00000000000000000000000000000000/USER"    , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
#Tau_Run2016B_14Dec2018     = kreator.makeMyPrivateDataComponent("Tau_Run2016B_14Dec2018"    , "/Tau/Run2016B_ver2-Nano14Dec2018_ver2-v1/NANOAOD"    , "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

dataSamples_Runs = [#JetHT_2016,JetHT_2016_ext, #HTMHT_Run2016B_14Dec2018, 
   MET_2016, MET_2016_ext,SingleElectron_2016,SingleElectron_ext_2016,SingleMuon_2016,SingleMuon_ext_2016,DoubleEG_2016,DoubleEG_ext_2016,MuonEG_2016,DoubleMuon_2016,DoubleMuon_2016_ext1,DoubleMuon_2016_ext2 ]


### ---------------------------------------------------------------------

dataSamples = dataSamples_Runs 
samples = dataSamples

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
