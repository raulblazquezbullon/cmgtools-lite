// Script to perform the goodness of test fits in the BDTs output.
{

TString Path = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_tW_MVAs/tw_MVAS_Pruebas_1j1t/2021-12-01_nloosejetBin0geq1/tmvaBDT_1j1t.root";
TString PathBDT = "tmvaBDT_1j1t/Method_GradBoost_2000_0.01/GradBoost_2000_0.01";
TString MVATrainS = "MVA_GradBoost_2000_0.01_Train_S";
TString MVATestS = "MVA_GradBoost_2000_0.01_S";
TString MVATrainB = "MVA_GradBoost_2000_0.01_Train_B";
TString MVATestB = "MVA_GradBoost_2000_0.01_B";
TString ROCTrain = "MVA_GradBoost_2000_0.01_trainingRejBvsS";
TString ROCTest = "MVA_GradBoost_2000_0.01_rejBvsS";

//TString Path = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/tw_MVAS_asoto/tmvaBDT_2j1t.root";
//TString PathBDT = "tmvaBDT_2j1t/Method_GradBoost_200_005_4/GradBoost_200_005_4";
//TString MVATrainS = "MVA_GradBoost_200_005_4_Train_S";
//TString MVATestS = "MVA_GradBoost_200_005_4_S";
//TString MVATrainB = "MVA_GradBoost_200_005_4_Train_B";
//TString MVATestB = "MVA_GradBoost_200_005_4_B";


TFile *f=new TFile(Path);

f->cd(PathBDT);

TH1 *SigTrain;
TH1 *SigTest;
TH1 *BkgTrain;
TH1 *BkgTest;
TH1 *RocTest;
TH1 *RocTrain;

gDirectory->GetObject(MVATrainS,SigTrain);
gDirectory->GetObject(MVATestS,SigTest);
gDirectory->GetObject(MVATrainB,BkgTrain);
gDirectory->GetObject(MVATestB,BkgTest);
gDirectory->GetObject(ROCTrain,RocTrain);
gDirectory->GetObject(ROCTest,RocTest);


cout << "Signal K-S: " << SigTest->KolmogorovTest(SigTrain,"X") << " Signal X2: " << SigTest->Chi2Test(SigTrain,"WW") << endl;
cout << "Background K-S: " << BkgTest->KolmogorovTest(BkgTrain,"X") << " Background X2: " << BkgTest->Chi2Test(BkgTrain,"WW") << endl;
cout << "Train AUC: " << RocTrain->Integral() << " Test AUC: " << RocTest->Integral() << endl;

cout << "------------------ ReBin / 4 ------------------" << endl;

SigTrain->Rebin(4);
SigTest->Rebin(4);
BkgTrain->Rebin(4);
BkgTest->Rebin(4);

cout << "Signal K-S: " << SigTest->KolmogorovTest(SigTrain,"X") << " Signal X2: " << SigTest->Chi2Test(SigTrain,"WW") << endl;
cout << "Background K-S: " << BkgTest->KolmogorovTest(BkgTrain,"X") << " Background X2: " << BkgTest->Chi2Test(BkgTrain,"WW") << endl;

}
