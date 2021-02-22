from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

json='/nfs/fanae/user/clara/ttW_Top/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/cfg/Cert_294927-306462_13TeV_EOY2017ReReco_Collisions17_JSON_v1.txt'


#---------------------------RunB 2017 25Oct2019

#DoubleMuon_Run2018_25Oct2019_D = kreator.makeDataComponentFromLocal("DoubleMuon_Run2018_25Oct2019_D", "/DoubleMuon/palencia-TopNanoAODv6-1-2_2018-831765d0aa9cd559fee11ff659127d4e/USER", "/pool/phedex/TOPnanoAODv6/2018/DoubleMuon/TopNanoAODv6-1-2_2018/%s/","200624_140340", ".*root", 2018,  json=json)
#//cms-xrd-global.cern.ch//store/user/piedavid/topNanoAOD/v6-1-1/2017/DoubleMuon/TopNanoAODv6-1-1_2017/200615_080544/0000/tree_1.root -Run2017B


DoubleMuon_Run2017B_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2017B_25Oct2019","/DoubleMuon/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleMuon/TopNanoAODv6-1-1_2017/%s/","200615_080544",".*root", 2017, [],json=json)
SingleElectron_Run2017B_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2017B_25Oct2019","/SingleMuon/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/%s/","200615_081218,200618_083110",".*root", 2017,[], json=json)
MuonEG_Run2017B_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2017B_25Oct2019","/MuonEG/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/MuonEG/TopNanoAODv6-1-1_2017/%s/","200615_081001",".*root", 2017,[], json=json)
DoubleEG_Run2017B_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2017B_25Oct2019","/DoubleEG/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/%s/","200615_080330,200623_063733",".*root", 2017,[], json=json)
SingleMuon_Run2017B_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2017B_25Oct2019","/SingleMuon/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleMuon/TopNanoAODv6-1-1_2017/%s/","200612_180815,200617_193431,200626_210802,200703_065221,200706_172229",".*root", 2017,[], json=json)
MET_Run2017B_25Oct2019 = kreator.makeDataComponentFromLocal("MET_Run2017B_25Oct2019","/MET/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/MET/TopNanoAODv6-1-1_2017/%s/","200617_074719,200612_135353,200616_080301",".*root", 2017,[], json=json)
JetHT_Run2017B_25Oct2019 = kreator.makeDataComponentFromLocal("JetHT_Run2017B_25Oct2019","/JetHT/piedavid-Run2017B-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/JetHT/TopNanoAODv6-1-1_2017/%s/","200705_102704,200629_090111,200615_080752,200624_104658,200701_072734",".*root", 2017,[], json=json)

DoubleMuon_Run2017C_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2017C_25Oct2019","/DoubleMuon/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleMuon/TopNanoAODv6-1-1_2017/%s/","200615_080609",".*root", 2017,[], json=json)
SingleElectron_Run2017C_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2017C_25Oct2019","/SingleMuon/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/%s/","200615_081246,200705_103129",".*root", 2017, ['/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081246/0000/tree_10.root','/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081246/0000/tree_97.root','/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081246/0000/tree_8.root','/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081246/0000/tree_9.root','/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081246/0000/tree_92.root','/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081246/0000/tree_93.root','/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081246/0000/tree_96.root','/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081246/0000/tree_94.root','/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081246/0000/tree_95.root'], json=json)
MuonEG_Run2017C_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2017C_25Oct2019","/MuonEG/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/MuonEG/TopNanoAODv6-1-1_2017/%s/","200615_081027,200630_170320",".*root", 2017,[], json=json)
DoubleEG_Run2017C_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2017C_25Oct2019","/DoubleEG/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/%s/","200615_080356,200626_140118",".*root", 2017, ['/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080356/0000/tree_140.root','/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080356/0000/tree_139.root','/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080356/0000/tree_65.root','/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080356/0000/tree_66.root','/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080356/0000/tree_68.root','/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080356/0000/tree_69.root','/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080356/0000/tree_64.root','/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080356/0000/tree_67.root'], json=json)
SingleMuon_Run2017C_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2017C_25Oct2019","/SingleMuon/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleMuon/TopNanoAODv6-1-1_2017/%s/","200612_180842,200616_075722,200617_193103",".*root", 2017, [],json=json)
MET_Run2017C_25Oct2019 = kreator.makeDataComponentFromLocal("MET_Run2017C_25Oct2019","/MET/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/MET/TopNanoAODv6-1-1_2017/%s/","200612_070236,200616_082341,200618_065031",".*root", 2017,[], json=json)
JetHT_Run2017C_25Oct2019 = kreator.makeDataComponentFromLocal("JetHT_Run2017C_25Oct2019","/JetHT/piedavid-Run2017C-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/JetHT/TopNanoAODv6-1-1_2017/%s/","200615_080817,200710_070055,200712_102423,200720_152946,200713_075153",".*root", 2017,[], json=json)

DoubleMuon_Run2017D_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2017D_25Oct2019","/DoubleMuon/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleMuon/TopNanoAODv6-1-1_2017/%s/","200615_080634",".*root", 2017, [],json=json)
SingleElectron_Run2017D_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2017D_25Oct2019","/SingleMuon/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/%s/","200615_081311",".*root", 2017,[], json=json)
MuonEG_Run2017D_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2017D_25Oct2019","/MuonEG/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/MuonEG/TopNanoAODv6-1-1_2017/%s/","200615_081058",".*root", 2017,[], json=json)
DoubleEG_Run2017D_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2017D_25Oct2019","/DoubleEG/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/%s/","200615_080422",".*root", 2017,[], json=json)
SingleMuon_Run2017D_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2017D_25Oct2019","/SingleMuon/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleMuon/TopNanoAODv6-1-1_2017/%s/","200612_180908,200616_125843,200618_065222",".*root", 2017,[], json=json)
MET_Run2017D_25Oct2019 = kreator.makeDataComponentFromLocal("MET_Run2017D_25Oct2019","/MET/piedavid-Run2017D_31Mar2018_v1__TopNanoAODv6_1_1_2017-a402b3ca8765671936767c754093df52/USER", "/pool/phedex/TOPnanoAODv6/2017/MET/TopNanoAODv6-1-1_2017/%s/","200612_135420",".*root", 2017,[], json=json)  
JetHT_Run2017D_25Oct2019 = kreator.makeDataComponentFromLocal("JetHT_Run2017D_25Oct2019","/JetHT/piedavid-Run2017D-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/JetHT/TopNanoAODv6-1-1_2017/%s/","200624_073356",".*root", 2017,[], json=json)




DoubleMuon_Run2017E_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2017E_25Oct2019","/DoubleMuon/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleMuon/TopNanoAODv6-1-1_2017/%s/","200615_080700,200701_111735",".*root", 2017,[], json=json)
SingleElectron_Run2017E_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2017E_25Oct2019","/SingleMuon/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/%s/","200708_183037,200615_081338,200706_213909",".*root", 2017,["/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/200615_081338/0000/tree_2.root"], json=json)
MuonEG_Run2017E_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2017E_25Oct2019","/MuonEG/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/MuonEG/TopNanoAODv6-1-1_2017/%s/","200621_100822,200615_081126",".*root", 2017,[], json=json)
DoubleEG_Run2017E_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2017E_25Oct2019","/DoubleEG/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/%s/","200615_080448,200630_165927",".*root", 2017,['/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080448/0000/tree_2.root','/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080448/0000/tree_3.root','/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/200615_080448/0000/tree_4.root'], json=json)
SingleMuon_Run2017E_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2017E_25Oct2019","/SingleMuon/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleMuon/TopNanoAODv6-1-1_2017/%s/","200612_180934,200618_064605,200621_100329,200625_175859,200709_065419,200712_102213,200714_073726",".*root", 2017,[], json=json)
MET_Run2017E_25Oct2019 = kreator.makeDataComponentFromLocal("MET_Run2017E_25Oct2019","/MET/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/MET/TopNanoAODv6-1-1_2017/%s/","200706_065024,200624_104855,200717_125853,200713_075944,200707_070059,200616_075443,200612_135448,200715_093942",".*root", 2017,[], json=json)
JetHT_Run2017E_25Oct2019 = kreator.makeDataComponentFromLocal("JetHT_Run2017E_25Oct2019","/JetHT/piedavid-Run2017E-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/JetHT/TopNanoAODv6-1-1_2017/%s/","200627_140204,200708_112754,200615_080910",".*root", 2017,[], json=json)

DoubleMuon_Run2017F_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2017F_25Oct2019","/DoubleMuon/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleMuon/TopNanoAODv6-1-1_2017/%s/","200615_080726",".*root", 2017,[], json=json)
SingleElectron_Run2017F_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2017F_25Oct2019","/SingleMuon/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleElectron/TopNanoAODv6-1-1_2017/%s/","200615_081411,200706_064535",".*root", 2017,[], json=json)
MuonEG_Run2017F_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2017F_25Oct2019","/MuonEG/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/MuonEG/TopNanoAODv6-1-1_2017/%s/","200615_081152,200619_103726",".*root", 2017,[], json=json)
DoubleEG_Run2017F_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2017F_25Oct2019","/DoubleEG/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/DoubleEG/TopNanoAODv6-1-1_2017/%s/","200615_080514,200630_165949",".*root", 2017,[], json=json)
SingleMuon_Run2017F_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2017F_25Oct2019","/SingleMuon/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/SingleMuon/TopNanoAODv6-1-1_2017/%s/","200612_181001,200616_075843,200618_193612,200707_065515,200709_092717,200712_102031,200713_082251",".*root", 2017,[], json=json)
MET_Run2017F_25Oct2019 = kreator.makeDataComponentFromLocal("MET_Run2017F_25Oct2019","/MET/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/MET/TopNanoAODv6-1-1_2017/%s/","200616_080021,200719_082941,200720_230426,200612_135514,200723_070713,200619_065213,200713_080108,200715_204332,200710_070249",".*root", 2017,[], json=json)
JetHT_Run2017F_25Oct2019 = kreator.makeDataComponentFromLocal("JetHT_Run2017F_25Oct2019","/JetHT/piedavid-Run2017F-31Mar2018-v1_TopNanoAODv6-1-1_2017-9721c24ccc7f925c513e24ff74941177/USER", "/pool/phedex/TOPnanoAODv6/2017/JetHT/TopNanoAODv6-1-1_2017/%s/","200702_114054,200624_073529,200708_113000,200615_080936",".*root", 2017,[], json=json)



'''
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

'''
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

MET = [
    MET_Run2017B_25Oct2019,
    MET_Run2017C_25Oct2019,
    MET_Run2017D_25Oct2019,
    MET_Run2017E_25Oct2019,
    MET_Run2017F_25Oct2019,
]

JetHT = [
    JetHT_Run2017B_25Oct2019,
    JetHT_Run2017C_25Oct2019,
    JetHT_Run2017D_25Oct2019,
    JetHT_Run2017E_25Oct2019,
    JetHT_Run2017F_25Oct2019,
]
#dataSamples_Runs =  #DoubleMuon + DoubleEG 
#dataSamples_Runs = MuonEG + SingleMuon + SingleElectron
#dataSamples_Runs =[DoubleMuon_Run2017C_25Oct2019]

dataSamples_Runs = MET + JetHT
### ---------------------------------------------------------------------

dataSamples = dataSamples_Runs 
samples = dataSamples

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
