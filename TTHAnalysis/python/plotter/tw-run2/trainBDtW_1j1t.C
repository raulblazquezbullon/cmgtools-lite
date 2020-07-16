#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

#include "TChain.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TMVA/Types.h"
#include "TMVA/TMVAGui.h"

#if not defined(__CINT__) || defined(__MAKECINT__)
#include "TMVA/Factory.h"
#include "TMVA/Tools.h"
#endif

using namespace TMVA;


void trainBDtW_1j1t(TString outputdir, TString outputbasedir = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/", TString inputdir = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/productions/2020-07-03/", TString outputFileName = "tmvaBDT_1j1t.root", TString myMethodList = "", TString twname = "tw.root", TString tbarwname = "tbarw.root", TString ttbarname = "ttbar.root") {
  // This loads the library
  TMVA::Tools::Instance();

  // to get access to the GUI and all tmva macros
  TString thisdir = gSystem->DirName(gInterpreter->GetCurrentMacroName());

  // Default MVA methods to be trained + tested
  std::map<std::string, int> Use;

  // --- Boosted Decision Trees
  Use["BDT"]  = 1; // uses Adaptive Boost
  Use["BDTG"] = 1; // uses Gradient Boost
  Use["BDTB"] = 0; // uses Bagging
  Use["BDTD"] = 0; // decorrelation + Adaptive Boost
  Use["BDTF"] = 0; // allow usage of fisher discriminant for node splitting
  Use["DNN"]  = 0;

  std::cout << std::endl;
  std::cout << "==> Start TMVAClassification" << std::endl;

  // Select methods (don't look at this code - not of interest)
  if (myMethodList != "") {
    for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) it->second = 0;

    std::vector<TString> mlist = TMVA::gTools().SplitString( myMethodList, ',' );
    for (UInt_t i = 0; i<mlist.size(); i++) {
        std::string regMethod(mlist[i]);

        if (Use.find(regMethod) == Use.end()) {
          std::cout << "Method \"" << regMethod << "\" not known in TMVA under this name. Choose among the following:" << std::endl;
          for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) std::cout << it->first << " ";
          std::cout << std::endl;
          return;
        }
        Use[regMethod] = 1;
    }
  }


  // "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/mvas/"

  cout << "> Opening rootfile and dataloader" << endl;

//   TFile* outputFile = TFile::Open(outputbasedir + "/" + outputdir + "/" + outputFileName, "RECREATE");
//   TMVA::DataLoader *loader = new TMVA::DataLoader(outputbasedir + "/" + outputdir + "/" + "tmvaBDT_1j1t");

  TFile* outputFile = TFile::Open(outputFileName, "RECREATE");
  TMVA::DataLoader *loader = new TMVA::DataLoader("tmvaBDT_1j1t");

  TMVA::Factory *factory = new TMVA::Factory("TMVAClassification", outputFile,
                                             "!V:!Silent:Color:DrawProgressBar:Transformations=I:AnalysisType=Classification" );


  ////// INPUT VARIABLES ===========================================================================
  cout << "> Adding input variables" << endl;

  loader->AddVariable("train_nloosejets"                 , "N(loose jet)"                                                           , ""   , 'I');
//   loader->AddVariable("nLooseFwd"                  , "n_{jet}^{20}_fwd"                                                       , ""   , 'I');
  loader->AddVariable("train_nbloosejets"                , "N(loose b-jet)"                                                         , ""   , 'I');
  loader->AddVariable("train_lep1lep2jet1met_pt"         , "p_{T} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}, #it{p}_{T}^{miss})"        , "GeV", 'F');
  loader->AddVariable("train_httot"                      , "H_{T}"                                                                  , "GeV", 'F');
  loader->AddVariable("train_jet1_pt"                    , "Jet p_{T}"                                                              , "GeV", 'F');
  loader->AddVariable("train_loosejet1_pt"               , "Loose jet p_{T}"                                                        , "GeV", 'F');
  loader->AddVariable("train_lep1lep2jet1met_ptOVERhttot", "p_{T} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}, #it{p}_{T}^{miss}) / H_{T}", ""   , 'F');
  loader->AddVariable("train_lep1lep2jet1met_m"          , "m (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}, #it{p}_{T}^{miss})"            , "GeV", 'F');
  loader->AddVariable("train_lep1lep2jet1_c"             , "C (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})"                               , ""   , 'F');
  loader->AddVariable("train_htlepOVERhttot"             , "(p_{T}(e)^{#pm} + p_{T}(#mu)^{#mp}) / H_{T}"                            , ""   , 'F');
  loader->AddVariable("train_lep1lep2jet1_pt"            , "#it{p}_{T} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}, p_{T}^{miss})"        , "GeV", 'F');
//   loader->AddVariable("nBLooseCentral + nBLooseFwd"          , "nBLoose"                                                                , ""   , 'I' );



  ////// MVA SETTINGS ===========================================================================
  cout << "> Adding MVA settings" << endl;

  TString layoutString ("Layout=TANH|10,TANH|20,TANH|10,TANH|5,TANH|4,LINEAR");
  // best so far TString layoutString ("Layout=TANH|10,TANH|30,TANH|5,LINEAR"); ROC: 0.812

  TString training0 ("LearningRate=0.1,Momentum=0.1,Repetitions=1,ConvergenceSteps=300,BatchSize=20,TestRepetitions=15,WeightDecay=0.05,Regularization=L2,DropConfig=0.0+0.5+0.0+0.0,DropRepetitions=1,Multithreading=True");
  TString training1 ("LearningRate=0.05,Momentum=0.1,Repetitions=1,ConvergenceSteps=300,BatchSize=20,TestRepetitions=15,WeightDecay=0.05,Regularization=L2,DropConfig=0.0+0.5+0.0+0.0,DropRepetitions=1,Multithreading=True");

  TString trainingStrategyString ("TrainingStrategy=");
  trainingStrategyString += training0 + "|" + training1;
  TString nnOptions ("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=G:WeightInitialization=XAVIER");

  nnOptions.Append (":");
  nnOptions.Append (layoutString);
  nnOptions.Append (":");
  nnOptions.Append (trainingStrategyString);


  ////// INPUT SETTINGS ===========================================================================
  cout << "> Adding files" << endl;
  TChain* SItree = new TChain("Friends", "SignalTree");
  SItree->Add(inputdir + "/2016/x_mvatrain/" + twname);
  SItree->Add(inputdir + "/2016/x_mvatrain/" + tbarwname);
  SItree->Add(inputdir + "/2017/x_mvatrain/" + twname);
  SItree->Add(inputdir + "/2017/x_mvatrain/" + tbarwname);
  SItree->Add(inputdir + "/2018/x_mvatrain/" + twname);
  SItree->Add(inputdir + "/2018/x_mvatrain/" + tbarwname);
   
  TChain* TTtree = new TChain("Friends", "BackgroundTree");
  TTtree->Add(inputdir + "/2016/x_mvatrain/" + ttbarname);
  TTtree->Add(inputdir + "/2017/x_mvatrain/" + ttbarname);
  TTtree->Add(inputdir + "/2018/x_mvatrain/" + ttbarname);

  Double_t sigWeight = 1.0;
  Double_t bkgWeight = 1.0;
  loader->AddSignalTree(    SItree, sigWeight);
  loader->AddBackgroundTree(TTtree, bkgWeight);

  // "genWeight * MuonSF * ElecSF * TrigSF * puWeight * bTagWeight * PrefireWeight"

  loader->SetSignalWeightExpression(    "allweights");
  loader->SetBackgroundWeightExpression("allweights");

  // (pass_trigger * Flag_goodVertices * Flag_globalSuperTightHalo2016Filter * Flag_HBHENoiseFilter * Flag_HBHENoiseIsoFilter * Flag_EcalDeadCellTriggerPrimitiveFilter * Flag_BadPFMuonFilter) * ((channel == 1) && (nLepGood >= 2) && (LepGood_pt_corrAll[0] > 25) && (LepGood_pt_corrAll[1] > 20) && isSS == 0 && (minMllAFAS_Recl > 20) ) * ((nJetSel30_Recl == 1) && (nBJetSelMedium30_Recl == 1))

  TCut mycuts = "((njets == 1) && (nbjets == 1))";
  TCut mycutb = "((njets == 1) && (nbjets == 1))";



  loader->PrepareTrainingAndTestTree(mycuts,
                                     mycutb,
                                     "nTrain_Signal=0:nTrain_Background=0:SplitMode=Random:NormMode=NumEvents:!V:nTest_Background=0");


  cout << "> Booking method" << endl;

  // factory->BookMethod( loader, TMVA::Types::kBDT, "8TeVSetup",
  // 		       "!H:!V");

  // factory->BookMethod( loader, TMVA::Types::kBDT, "AdaBoost_1000_0.1_3",
  // 			"!H:!V:NTrees=5000:!CreateMVAPdfs:MinNodeSize=1.0%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.01:UseBaggedBoost=False:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_1000_0.01",
  // 			"!H:!V:NTrees=1000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );
  // factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_500_0.01",
  // 			"!H:!V:NTrees=500:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );
  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_2000_0.01",
      "!H:!V:NTrees=2000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );


  // Allow Using Fisher discriminant in node splitting for (strong) linearly correlated variables
  // factory->BookMethod( loader, TMVA::Types::kBDT, "BDTMitFisher",
  // 			"!H:!V:NTrees=5000:!CreateMVAPdfs:MinNodeSize=1.0%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.01:UseBaggedBoost=False:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20:UseFisherCuts" );

  if (Use["DNN"])
    factory->BookMethod( loader, TMVA::Types::kDNN, "DNN", nnOptions );

  // Train MVAs using the set of training events
  cout << "> Beginning training..." << endl;
  factory->TrainAllMethods();

  // ---- Evaluate all MVAs using the set of test events
  cout << "> Testing models..." << endl;
  factory->TestAllMethods();

  // ----- Evaluate and compare performance of all configured MVAs
  cout << "> Evaluating models..." << endl;
  factory->EvaluateAllMethods();

  // --------------------------------------------------------------

  // Save the output
  outputFile->Close();

  std::cout << "==> Wrote root file: " << outputFile->GetName() << std::endl;
  std::cout << "==> TMVAClassification is done!" << std::endl;

  delete factory;

  // Launch the GUI for the root macros
  if (!gROOT->IsBatch()) TMVAGui( outputFileName );
}
