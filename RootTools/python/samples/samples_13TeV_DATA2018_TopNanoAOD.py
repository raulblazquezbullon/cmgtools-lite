from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

json='/nfs/fanae/user/clara/ttW_Top/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/cfg/Cert_314472-325175_13TeV_17SeptEarlyReReco2018ABC_PromptEraD_Collisions18_JSON.txt'



DoubleMuon_Run2018_25Oct2019_D = kreator.makeDataComponentFromLocal("DoubleMuon_Run2018_25Oct2019_D", "/DoubleMuon/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "/pool/phedex/TOPnanoAODv6/2018/DoubleMuon/TopNanoAODv6-1-2_2018/%s/","200624_140340", ".*root", 2018,[],  json=json)
DoubleMuon_Run2018_25Oct2019_ABC = kreator.makeDataComponentFromLocal("DoubleMuon_Run2018_25Oct2019_ABC", "/DoubleMuon/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "/pool/phedex/TOPnanoAODv6/2018/DoubleMuon/TopNanoAODv6-1-2_2018/%s/","200624_140222,200624_140247,200624_140313", ".*root",2018, [], json=json)

MuonEG_Run2018_25Oct2019_D = kreator.makeDataComponentFromLocal("MuonEG_Run2018_25Oct2019_D", "/MuonEG/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "/pool/phedex/TOPnanoAODv6/2018/MuonEG/TopNanoAODv6-1-2_2018/%s/","200624_141057", ".*root", 2018, [], json=json)
MuonEG_Run2018_25Oct2019_ABC = kreator.makeDataComponentFromLocal("MuonEG_Run2018_25Oct2019_ABC", "/MuonEG/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "/pool/phedex/TOPnanoAODv6/2018/MuonEG/TopNanoAODv6-1-2_2018/%s/","200624_140935,200624_141001,200624_141030", ".*root",2018,[],  json=json)

EGamma_Run2018_25Oct2019_D = kreator.makeDataComponentFromLocal("EGamma_Run2018_25Oct2019_D", "/EGamma/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "/pool/phedex/TOPnanoAODv6/2018/EGamma/TopNanoAODv6-1-2_2018/%s/","200624_140530", ".*root", 2018,[],  json=json)
EGamma_Run2018_25Oct2019_ABC = kreator.makeDataComponentFromLocal("EGamma_Run2018_25Oct2019_ABC", "/EGamma/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "/pool/phedex/TOPnanoAODv6/2018/EGamma/TopNanoAODv6-1-2_2018/%s/", "200624_140405,200624_140434,200624_140502", ".*root", 2018,[], json=json)

SingleMuon_Run2018_25Oct2019_D = kreator.makeDataComponentFromLocal("SingleMuon_Run2018_25Oct2019_D", "/SingleMuon/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "/pool/phedex/TOPnanoAODv6/2018/SingleMuon/TopNanoAODv6-1-2_2018/%s/", "200624_141247", ".*root", 2018,[], json=json)
SingleMuon_Run2018_25Oct2019_ABC = kreator.makeDataComponentFromLocal("SingleMuon_Run2018_25Oct2019_ABC", "/SingleMuon/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "/pool/phedex/TOPnanoAODv6/2018/SingleMuon/TopNanoAODv6-1-2_2018/%s/","200624_141127,200624_141153,200624_141221" ,".*root", 2018,[], json=json)
  
MET_Run2018_25Oct2019_D = kreator.makeDataComponentFromLocal("MET_Run2018_25Oct2019_D", "/MET/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "/pool/phedex/TOPnanoAODv6/2018/MET/TopNanoAODv6-1-2_2018/%s/", "200624_140908", ".*root", 2018,[], json=json)
MET_Run2018_25Oct2019_ABC = kreator.makeDataComponentFromLocal("MET_Run2018_25Oct2019_ABC", "/MET/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "/pool/phedex/TOPnanoAODv6/2018/MET/TopNanoAODv6-1-2_2018/%s/","200624_140744,200624_140811,200624_140840" ,".*root", 2018,[], json=json)
#'/pool/phedex/TOPnanoAODv6/2018/MET/TopNanoAODv6-1-2_2018/200624_140811/0000/tree_38.root','/pool/phedex/TOPnanoAODv6/2018/MET/TopNanoAODv6-1-2_2018/200624_140811/0000/tree_36.root'
JetHT_Run2018_25Oct2019_D = kreator.makeDataComponentFromLocal("JetHT_Run2018_25Oct2019_D", "/JetHT/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "/pool/phedex/TOPnanoAODv6/2018/JetHT/TopNanoAODv6-1-2_2018/%s/", "200624_140555,200624_140623,200624_140649", ".*root", 2018,[], json=json)
JetHT_Run2018_25Oct2019_ABC = kreator.makeDataComponentFromLocal("JetHT_Run2018_25Oct2019_ABC", "/JetHT/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "/pool/phedex/TOPnanoAODv6/2018/JetHT/TopNanoAODv6-1-2_2018/%s/","200624_140715" ,".*root", 2018,[], json=json)
  
'''name,dataset,path,folders,pattern,json=None,run_range=None,triggers=[],vetoTriggers=[],jsonFilter=False
DoubleMuon_Run2018_25Oct2019_ABC = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2018_25Oct2019_ABC", "/DoubleMuon/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2018_25Oct2019_ABC = kreator.makeMyPrivateDataComponent("MuonEG_Run2018_25Oct2019_ABC", "/MuonEG/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
EGamma_Run2018_25Oct2019_ABC = kreator.makeMyPrivateDataComponent("EGamma_Run2018_25Oct2019_ABC", "/EGamma/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2018_25Oct2019_ABC = kreator.makeMyPrivateDataComponent("SingleMuon_Run2018_25Oct2019_ABC", "/SingleMuon/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
DoubleMuon_Run2018_25Oct2019_D = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2018_25Oct2019_D", "/DoubleMuon/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
MuonEG_Run2018_25Oct2019_D = kreator.makeMyPrivateDataComponent("MuonEG_Run2018_25Oct2019_D", "/MuonEG/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
EGamma_Run2018_25Oct2019_D = kreator.makeMyPrivateDataComponent("EGamma_Run2018_25Oct2019_D", "/EGamma/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)
SingleMuon_Run2018_25Oct2019_D = kreator.makeMyPrivateDataComponent("SingleMuon_Run2018_25Oct2019_D", "/SingleMuon/palencia-TopNanoAODv6-1-2_2018-2667fe41f354e79b08df8a25806ccf17/USER", "PRIVATE", ".*root", 'phys03',  json=json, useAAA=True)

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

 

'''

DoubleMuon = [
    DoubleMuon_Run2018_25Oct2019_ABC,
    DoubleMuon_Run2018_25Oct2019_D,

]

EGamma = [
    EGamma_Run2018_25Oct2019_ABC,
EGamma_Run2018_25Oct2019_D,
   
]

SingleMuon = [
    SingleMuon_Run2018_25Oct2019_ABC,
    SingleMuon_Run2018_25Oct2019_D,
 
]
MuonEG = [
  MuonEG_Run2018_25Oct2019_ABC,
  MuonEG_Run2018_25Oct2019_D,
]

MET = [
  MET_Run2018_25Oct2019_ABC,
  MET_Run2018_25Oct2019_D,
]

JetHT = [
  JetHT_Run2018_25Oct2019_ABC,
  #JetHT_Run2018_25Oct2019_D,
]

#dataSamples_Runs =  DoubleMuon + MuonEG + EGamma + SingleMuon
dataSamples_Runs = MET + JetHT
### ---------------------------------------------------------------------

dataSamples = dataSamples_Runs 
samples = dataSamples

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
