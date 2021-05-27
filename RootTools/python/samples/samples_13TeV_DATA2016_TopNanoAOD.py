from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

json='/nfs/fanae/user/clara/ttW_Top/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/cfg/Cert_271036-284044_13TeV_ReReco_07Aug2017_Collisions16_JSON.txt'


#---------------------------RunB 2016 25Oct2019    name,dataset,path,pattern
#//cms-xrd-global.cern.ch//store/user/piedavid/topNanoAOD/v6-1-1/2017/DoubleMuon/TopNanoAODv6-1-1_2017/200615_080544/0000/tree_1.root -Run2017B


DoubleMuon_Run2016B_25Oct2019_ver2 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2016B_25Oct2019_ver2", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2016B_ver2-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleMuon/TopNanoAODv6-1-2-4_DoubleMuon_Run2016B_ver2/%s/" ,"200716_192102", ".*root", 2016, [],  json=json)
MuonEG_Run2016B_25Oct2019_ver2 = kreator.makeDataComponentFromLocal("MuonEG_Run2016B_25Oct2019_ver2", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2016B_ver2-ba7e3129b1ff910ad1abce6981b33804/USER",   "/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016B_ver2/%s/", "200716_192922", ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016B_ver2/200716_192922/0000/tree_780.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016B_ver2/200716_192922/0000/tree_695.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016B_ver2/200716_192922/0000/tree_51.root"],  json=json)
DoubleEG_Run2016B_25Oct2019_ver2 = kreator.makeDataComponentFromLocal("DoubleEG_Run2016B_25Oct2019_ver2", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2016B_ver2-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleEG/TopNanoAODv6-1-2-4_DoubleEG_Run2016B_ver2/%s/","200716_191558", ".*root", 2016, [],  json=json )
SingleMuon_Run2016B_25Oct2019_ver2 = kreator.makeDataComponentFromLocal("SingleMuon_Run2016B_25Oct2019_ver2", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2016B_ver2-ba7e3129b1ff910ad1abce6981b33804/USER",  "/pool/phedex/TOPnanoAODv6/2016/SingleMuon/TopNanoAODv6-1-2-4_SingleMuon_Run2016B_ver2/%s/","200716_194110", ".*root", 2016, [],  json=json )
SingleElectron_Run2016B_25Oct2019_ver2 = kreator.makeDataComponentFromLocal("SingleElectron_Run2016B_25Oct2019_ver2", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2/%s/","200716_193600",  ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2/200716_193600/0001/tree_1092.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2/200716_193600/0001/tree_1049.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2/200716_193600/0000/tree_739.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2/200716_193600/0000/tree_889.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2/200716_193600/0000/tree_876.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2/200716_193600/0000/tree_577.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2/00716_193600/0000/tree_120.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016B_ver2/200716_193600/0000/tree_740.root"],  json=json )
MET_Run2016B_ver2 = kreator.makeDataComponentFromLocal("MET_Run2016B_ver2", "/MET/schoef-TopNanoAODv6-1-2-6_MET_Run2016B_ver2-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/MET/TopNanoAODv6-1-2-6_MET_Run2016B_ver2/%s/","200909_065050",  ".*root", 2016, [],  json=json )
JetHT_Run2016B_ver2 = kreator.makeDataComponentFromLocal("JetHT_Run2016B_ver2", "/JetHT/schoef-TopNanoAODv6-1-2-6_JetHT_Run2016B_ver2-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/JetHT/TopNanoAODv6-1-2-6_JetHT_Run2016B_ver2/%s/","200909_064328",  ".*root", 2016, [],  json=json )

MET_Run2016B_25Oct2019_ver2 = kreator.makeDataComponentFromLocal("MET_Run2016B_25Oct2019_ver2","/MET/schoef-TopNanoAODv6-1-2-6_MET_Run2016B_ver2-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/MET/TopNanoAODv6-1-2-6_MET_Run2016B_ver2/%s/","200909_065050",".*root", 2016,[], json=json)
JetHT_Run2016B_25Oct2019_ver2 = kreator.makeDataComponentFromLocal("JetHT_Run2016B_25Oct2019_ver2","/JetHT/schoef-TopNanoAODv6-1-2-6_JetHT_Run2016B_ver2-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/JetHT/TopNanoAODv6-1-2-6_JetHT_Run2016B_ver2/%s/","200909_064328",".*root", 2016,[], json=json)




#---------------------------RunC 2016 25Oct2019

DoubleMuon_Run2016C_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2016C_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2016C-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleMuon/TopNanoAODv6-1-2-4_DoubleMuon_Run2016C/%s/" ,"200716_192127", ".*root", 2016, [],  json=json)
MuonEG_Run2016C_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2016C_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2016C-ba7e3129b1ff910ad1abce6981b33804/USER",   "/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016C/%s/", "200716_192947", ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016C/200716_192947/0000/tree_1.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016C/200716_192947/0000/tree_246.root"],  json=json)
DoubleEG_Run2016C_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2016C_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2016C-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleEG/TopNanoAODv6-1-2-4_DoubleEG_Run2016C/%s/","200716_191623", ".*root", 2016, [],  json=json )
SingleMuon_Run2016C_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2016C_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2016C-ba7e3129b1ff910ad1abce6981b33804/USER",  "/pool/phedex/TOPnanoAODv6/2016/SingleMuon/TopNanoAODv6-1-2-4_SingleMuon_Run2016C/%s/","200716_194135", ".*root", 2016, [],  json=json )
SingleElectron_Run2016C_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2016C_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2016C-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016C/%s/","200716_193626",  ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016C/200716_193626/0000/tree_74.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016C/200716_193626/0000/tree_263.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016C/200716_193626/0000/tree_1.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016C/200716_193626/0000/tree_2.root"],  json=json )
<<<<<<< HEAD
MET_Run2016C = kreator.makeDataComponentFromLocal("MET_Run2016C", "/MET/schoef-TopNanoAODv6-1-2-6_MET_Run2016C-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/MET/TopNanoAODv6-1-2-6_MET_Run2016C/%s/","200909_065117",  ".*root", 2016, [],  json=json )
JetHT_Run2016C = kreator.makeDataComponentFromLocal("JetHT_Run2016C", "/JetHT/schoef-TopNanoAODv6-1-2-6_JetHT_Run2016C-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/JetHT/TopNanoAODv6-1-2-6_JetHT_Run2016C/%s/","200909_064355",  ".*root", 2016, [],  json=json )

#---------------------------RunD 2016 25Oct2019

DoubleMuon_Run2016D_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2016D_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2016D-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleMuon/TopNanoAODv6-1-2-4_DoubleMuon_Run2016D/%s/" ,"200716_192151", ".*root", 2016, [],  json=json)
MuonEG_Run2016D_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2016D_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2016D-ba7e3129b1ff910ad1abce6981b33804/USER",   "/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016D/%s/", "200716_193012", ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016D/200716_193012/0000/tree_340.root"],  json=json)
DoubleEG_Run2016D_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2016D_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2016D-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleEG/TopNanoAODv6-1-2-4_DoubleEG_Run2016D/%s/","200716_191647", ".*root", 2016, [],  json=json )
SingleMuon_Run2016D_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2016D_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2016D-ba7e3129b1ff910ad1abce6981b33804/USER",  "/pool/phedex/TOPnanoAODv6/2016/SingleMuon/TopNanoAODv6-1-2-4_SingleMuon_Run2016D/%s/","200716_194159", ".*root", 2016, [],  json=json )
SingleElectron_Run2016D_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2016D_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2016D-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016D/%s/","200716_193651",  ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016D/200716_193651/0000/tree_513.root",
"/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016D/200716_193651/0000/tree_195.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016D/200716_193651/0000/tree_466.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016D/200716_193651/0000/tree_507.root"],  json=json )
MET_Run2016D = kreator.makeDataComponentFromLocal("MET_Run2016D", "/MET/schoef-TopNanoAODv6-1-2-6_MET_Run2016D-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/MET/TopNanoAODv6-1-2-6_MET_Run2016D/%s/","200909_065144",  ".*root", 2016, [],  json=json )
JetHT_Run2016D = kreator.makeDataComponentFromLocal("JetHT_Run2016D", "/JetHT/schoef-TopNanoAODv6-1-2-6_JetHT_Run2016D-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/JetHT/TopNanoAODv6-1-2-6_JetHT_Run2016D/%s/","200909_064423",  ".*root", 2016, [],  json=json )


#---------------------------RunE 2016 25Oct2019
DoubleMuon_Run2016E_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2016E_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2016E-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleMuon/TopNanoAODv6-1-2-4_DoubleMuon_Run2016E/%s/" ,"200716_192216", ".*root", 2016, [],  json=json)
MuonEG_Run2016E_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2016E_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2016E-ba7e3129b1ff910ad1abce6981b33804/USER",   "/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016E/%s/", "200716_193038", ".*root", 2016, [],  json=json)
DoubleEG_Run2016E_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2016E_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2016E-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleEG/TopNanoAODv6-1-2-4_DoubleEG_Run2016E/%s/","200716_191712", ".*root", 2016, [],  json=json )
SingleMuon_Run2016E_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2016E_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2016E-ba7e3129b1ff910ad1abce6981b33804/USER",  "/pool/phedex/TOPnanoAODv6/2016/SingleMuon/TopNanoAODv6-1-2-4_SingleMuon_Run2016E/%s/","200716_194223", ".*root", 2016, [],  json=json )
SingleElectron_Run2016E_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2016E_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2016E-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016E/%s/","200716_193716",  ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016E/200716_193716/0000/tree_160.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016E/200716_193716/0000/tree_67.root","200716_193716/0000/tree_362.root","200716_193716/0000/tree_5.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016E/200716_193716/0000/tree_4.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016E/200716_193716/0000/tree_3.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016E/200716_193716/0000/tree_109.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016E/200716_193716/0000/tree_90.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016E/200716_193716/0000/tree_386.root"],  json=json )
MET_Run2016E = kreator.makeDataComponentFromLocal("MET_Run2016E", "/MET/schoef-TopNanoAODv6-1-2-6_MET_Run2016E-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/MET/TopNanoAODv6-1-2-6_MET_Run2016E/%s/","200909_065211",  ".*root", 2016, [],  json=json )
JetHT_Run2016E = kreator.makeDataComponentFromLocal("JetHT_Run2016E", "/JetHT/schoef-TopNanoAODv6-1-2-6_JetHT_Run2016E-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/JetHT/TopNanoAODv6-1-2-6_JetHT_Run2016E/%s/","200909_064450",  ".*root", 2016, [],  json=json )


#---------------------------RunF 2016 25Oct2019

DoubleMuon_Run2016F_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2016F_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2016F-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleMuon/TopNanoAODv6-1-2-4_DoubleMuon_Run2016F/%s/" ,"200716_192241", ".*root", 2016, [],  json=json)
MuonEG_Run2016F_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2016F_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2016F-ba7e3129b1ff910ad1abce6981b33804/USER",   "/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016F/%s/", "200716_193103", ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016F/200716_193103/0000/tree_1.root"],  json=json)
DoubleEG_Run2016F_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2016F_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2016F-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleEG/TopNanoAODv6-1-2-4_DoubleEG_Run2016F/%s/","200716_191736", ".*root", 2016, [],  json=json )
SingleMuon_Run2016F_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2016F_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2016F-ba7e3129b1ff910ad1abce6981b33804/USER",  "/pool/phedex/TOPnanoAODv6/2016/SingleMuon/TopNanoAODv6-1-2-4_SingleMuon_Run2016F/%s/","200716_194248,200826_144518", ".*root", 2016, [],  json=json )
SingleElectron_Run2016F_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2016F_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2016F-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016F/%s/","200716_193739",  ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016F/200716_193739/0000/tree_51.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016F/200716_193739/0000/tree_7.root"],  json=json )
MET_Run2016F = kreator.makeDataComponentFromLocal("MET_Run2016F", "/MET/schoef-TopNanoAODv6-1-2-6_MET_Run2016F-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/MET/TopNanoAODv6-1-2-6_MET_Run2016F/%s/","200909_065239",  ".*root", 2016, [],  json=json )
JetHT_Run2016F = kreator.makeDataComponentFromLocal("JetHT_Run2016F", "/JetHT/schoef-TopNanoAODv6-1-2-6_JetHT_Run2016F-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/JetHT/TopNanoAODv6-1-2-6_JetHT_Run2016F/%s/","200909_064516",  ".*root", 2016, [],  json=json )


#---------------------------RunG 2016 25Oct2019

DoubleMuon_Run2016G_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2016G_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2016G-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleMuon/TopNanoAODv6-1-2-4_DoubleMuon_Run2016G/%s/" ,"200716_192305", ".*root", 2016, [],  json=json)
MuonEG_Run2016G_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2016G_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2016G-ba7e3129b1ff910ad1abce6981b33804/USER",   "/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/%s/", "200716_193128", ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_471.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_354.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_437.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_439.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_436.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_438.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_255.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_254.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_253.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_252.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016G/200716_193128/0000/tree_250.root"],  json=json)
DoubleEG_Run2016G_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2016G_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2016G-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleEG/TopNanoAODv6-1-2-4_DoubleEG_Run2016G/%s/","200716_191800", ".*root", 2016, [],  json=json )
SingleMuon_Run2016G_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2016G_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2016G-ba7e3129b1ff910ad1abce6981b33804/USER",  "/pool/phedex/TOPnanoAODv6/2016/SingleMuon/TopNanoAODv6-1-2-4_SingleMuon_Run2016G/%s/","200716_194313", ".*root", 2016, [],  json=json )
SingleElectron_Run2016G_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2016G_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2016G-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/%s/","200716_193803",  ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_714.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_184.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_172.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_60.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_830.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_233.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_392.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_500.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_609.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_337.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_338.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_320.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_331.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_335.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_336.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_70.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_339.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_445.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_460.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_444.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_443.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_442.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016G/200716_193803/0000/tree_441.root"],  json=json )
MET_Run2016G = kreator.makeDataComponentFromLocal("MET_Run2016G", "/MET/schoef-TopNanoAODv6-1-2-6_MET_Run2016G-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/MET/TopNanoAODv6-1-2-6_MET_Run2016G/%s/","200909_065306",  ".*root", 2016, [],  json=json )
JetHT_Run2016G = kreator.makeDataComponentFromLocal("JetHT_Run2016G", "/JetHT/schoef-TopNanoAODv6-1-2-6_JetHT_Run2016G-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/JetHT/TopNanoAODv6-1-2-6_JetHT_Run2016G/%s/","200909_064544",  ".*root", 2016, [],  json=json )


#---------------------------RunH 2016 25Oct2019
DoubleMuon_Run2016H_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2016H_25Oct2019", "/DoubleMuon/schoef-TopNanoAODv6-1-2-4_DoubleMuon_Run2016H-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleMuon/TopNanoAODv6-1-2-4_DoubleMuon_Run2016H/%s/" ,"200716_192330", ".*root", 2016, [],  json=json)
MuonEG_Run2016H_25Oct2019 = kreator.makeDataComponentFromLocal("MuonEG_Run2016H_25Oct2019", "/MuonEG/schoef-TopNanoAODv6-1-2-4_MuonEG_Run2016H-ba7e3129b1ff910ad1abce6981b33804/USER",   "/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016H/%s/", "200716_193152", ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016H/200716_193152/0000/tree_1.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016H/200716_193152/0000/tree_809.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016H/200716_193152/0000/tree_810.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016H/200716_193152/0000/tree_812.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016H/200716_193152/0000/tree_811.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016H/200716_193152/0000/tree_362.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016H/200716_193152/0000/tree_580.root","/pool/phedex/TOPnanoAODv6/2016/MuonEG/TopNanoAODv6-1-2-4_MuonEG_Run2016H/200716_193152/0000/tree_82.root"],  json=json)
DoubleEG_Run2016H_25Oct2019 = kreator.makeDataComponentFromLocal("DoubleEG_Run2016H_25Oct2019", "/DoubleEG/schoef-TopNanoAODv6-1-2-4_DoubleEG_Run2016H-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/DoubleEG/TopNanoAODv6-1-2-4_DoubleEG_Run2016H/%s/","200716_191826", ".*root", 2016, [],  json=json )
SingleMuon_Run2016H_25Oct2019 = kreator.makeDataComponentFromLocal("SingleMuon_Run2016H_25Oct2019", "/SingleMuon/schoef-TopNanoAODv6-1-2-4_SingleMuon_Run2016H-ba7e3129b1ff910ad1abce6981b33804/USER",  "/pool/phedex/TOPnanoAODv6/2016/SingleMuon/TopNanoAODv6-1-2-4_SingleMuon_Run2016H/%s/","200716_194337", ".*root", 2016, [],  json=json )
SingleElectron_Run2016H_25Oct2019 = kreator.makeDataComponentFromLocal("SingleElectron_Run2016H_25Oct2019", "/SingleElectron/schoef-TopNanoAODv6-1-2-4_SingleElectron_Run2016H-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/%s/","200716_193833",  ".*root", 2016, ["/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_442.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_815.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_410.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_492.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_962.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_32.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_34.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_830.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_683.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_544.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_99.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_545.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_625.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_959.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_963.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_956.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_200.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_961.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_392.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_445.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_960.root","/pool/phedex/TOPnanoAODv6/2016/SingleElectron/TopNanoAODv6-1-2-4_SingleElectron_Run2016H/200716_193833/0000/tree_220.root"],  json=json )
MET_Run2016H = kreator.makeDataComponentFromLocal("MET_Run2016H", "/MET/schoef-TopNanoAODv6-1-2-6_MET_Run2016H-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/MET/TopNanoAODv6-1-2-6_MET_Run2016H/%s/","200909_065333",  ".*root", 2016, [],  json=json )
JetHT_Run2016H = kreator.makeDataComponentFromLocal("JetHT_Run2016h", "/JetHT/schoef-TopNanoAODv6-1-2-6_JetHT_Run2016h-ba7e3129b1ff910ad1abce6981b33804/USER", "/pool/phedex/TOPnanoAODv6/2016/JetHT/TopNanoAODv6-1-2-6_JetHT_Run2016H/%s/","200909_064611",  ".*root", 2016, [],  json=json )

DoubleMuon = [
    #DoubleMuon_Run2016B_25Oct2019_ver1,
    DoubleMuon_Run2016B_25Oct2019_ver2,
    DoubleMuon_Run2016C_25Oct2019,
    DoubleMuon_Run2016D_25Oct2019,
    DoubleMuon_Run2016E_25Oct2019,
    DoubleMuon_Run2016F_25Oct2019,
    DoubleMuon_Run2016G_25Oct2019,
    DoubleMuon_Run2016H_25Oct2019,
]

MuonEG = [
    #MuonEG_Run2016B_25Oct2019_ver1,
    MuonEG_Run2016B_25Oct2019_ver2,
    MuonEG_Run2016C_25Oct2019,
    MuonEG_Run2016D_25Oct2019,
    MuonEG_Run2016E_25Oct2019,
    MuonEG_Run2016F_25Oct2019,
    MuonEG_Run2016G_25Oct2019,
    MuonEG_Run2016H_25Oct2019,
]

DoubleEG = [
    #DoubleEG_Run2016B_25Oct2019_ver1,
    DoubleEG_Run2016B_25Oct2019_ver2,
    DoubleEG_Run2016C_25Oct2019,
    DoubleEG_Run2016D_25Oct2019,
    DoubleEG_Run2016E_25Oct2019,
    DoubleEG_Run2016F_25Oct2019,
    DoubleEG_Run2016G_25Oct2019,
    DoubleEG_Run2016H_25Oct2019,
]

SingleMuon = [
    #SingleMuon_Run2016B_25Oct2019_ver1,
    SingleMuon_Run2016B_25Oct2019_ver2,
    SingleMuon_Run2016C_25Oct2019,
    SingleMuon_Run2016D_25Oct2019,
    SingleMuon_Run2016E_25Oct2019,
    SingleMuon_Run2016F_25Oct2019,
    SingleMuon_Run2016G_25Oct2019,
    SingleMuon_Run2016H_25Oct2019,
]

SingleElectron = [
    #SingleElectron_Run2016B_25Oct2019_ver1,
    SingleElectron_Run2016B_25Oct2019_ver2,
    SingleElectron_Run2016C_25Oct2019,
    SingleElectron_Run2016D_25Oct2019,
    SingleElectron_Run2016E_25Oct2019,
    SingleElectron_Run2016F_25Oct2019,
    SingleElectron_Run2016G_25Oct2019,
    SingleElectron_Run2016H_25Oct2019,
]


MET = [
    MET_Run2016B_ver2,
    MET_Run2016C,
    MET_Run2016D,
    MET_Run2016E,
    MET_Run2016F,
    MET_Run2016G,
    MET_Run2016H,
]

JetHT = [
    JetHT_Run2016B_ver2,
    JetHT_Run2016C,
    JetHT_Run2016D,
    JetHT_Run2016E,
    JetHT_Run2016F,
    JetHT_Run2016G,
    JetHT_Run2016H,
]

#dataSamples_Runs =  DoubleMuon + MuonEG + DoubleEG + SingleMuon + SingleElectron
dataSamples_Runs = MET + JetHT
### ---------------------------------------------------------------------

dataSamples = dataSamples_Runs 
samples = dataSamples

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
