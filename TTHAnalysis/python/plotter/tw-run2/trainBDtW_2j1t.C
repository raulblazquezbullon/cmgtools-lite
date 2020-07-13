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


void trainBDtW_2j1t(TString outputdir, TString outputbasedir = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/", TString inputdir = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/productions/2020-07-03/", TString outputFileName = "tmvaBDT_2j1t.root", TString myMethodList = "", TString twname = "tw.root", TString tbarwname = "tbarw.root", TString ttbarname = "ttbar.root") {
  // This loads the library
  TMVA::Tools::Instance();

  // to get access to the GUI and all tmva macros
  TString thisdir = gSystem->DirName(gInterpreter->GetCurrentMacroName());

  // Default MVA methods to be trained + tested
  std::map<std::string,int> Use;

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
    for (UInt_t i=0; i<mlist.size(); i++) {
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


//   TFile* outputFile = TFile::Open(outputbasedir + "/" + outputdir + "/" + outputFileName, "RECREATE");
//   TMVA::DataLoader *loader=new TMVA::DataLoader(outputbasedir + "/" + outputdir + "/" + "tmvaBDT_2j1t");

  TFile* outputFile = TFile::Open(outputFileName, "RECREATE");
  TMVA::DataLoader *loader=new TMVA::DataLoader("tmvaBDT_2j1t");

  TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile,
                                              "!V:!Silent:Color:DrawProgressBar:Transformations=I:AnalysisType=Classification" );



  ////// INPUT VARIABLES ===========================================================================
  // loader->AddVariable( "LeadingLeptPt_"      , "LeadingLeptPt_"      , "", 'F');
  // loader->AddVariable( "ptL1L2_"	      , "ptL1L2_"	      , "", 'F');
  // loader->AddVariable( "ptsysL1L2met_"	      , "ptsysL1L2met_"	      , "", 'F');
  // loader->AddVariable( "deltaPtl1_l2_"	      , "deltaPtl1_l2_"	      , "", 'F');
  // loader->AddVariable( "deltaPtl2_J2_"	      , "deltaPtl2_J2_"	      , "", 'F');
  loader->AddVariable("train_jet2_pt"         , "Subleading jet p_{T}",                         "", 'F');
  loader->AddVariable("train_lep1jet1_dr"	   , "#Delta R(l_{1}, j_{1})",                       "", 'F');
  loader->AddVariable("train_lep12jet12_dr"   , "#Delta R(l_{1}l_{2}, j_{1}j_{2})",             "", 'F');
  loader->AddVariable("train_lep12jet12met_dr", "#Delta R(l_{1}l_{2}, j_{1}j_{2}p_{T}^{miss})", "", 'F');

  //   loader->AddVariable( "nBLooseCentral + nBLooseFwd"       ,   "nBLoose"           , ""   , 'I' );
  // loader->AddVariable( "nLooseFwd"      ,   "n_{jet}^{20}_fwd"                         , ""   , 'I' );



  ////// MVA SETTINGS ===========================================================================
  TString layoutString ("Layout=TANH|10,TANH|20,TANH|10,TANH|5,TANH|4,LINEAR");
// // best so far TString layoutString ("Layout=TANH|10,TANH|30,TANH|5,LINEAR"); ROC: 0.812

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

  loader->SetSignalWeightExpression(    "allweights");
  loader->SetBackgroundWeightExpression("allweights");

  TCut mycuts = "((njets == 2) && (nbjets == 1))";
  TCut mycutb = "((njets == 2) && (nbjets == 1))";


  loader->PrepareTrainingAndTestTree( mycuts,mycutb,"nTrain_Signal=0:nTrain_Background=0:SplitMode=Random:NormMode=NumEvents:!V:nTest_Background=0" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "8TeVSetup",
  // 		       "!H:!V");

  // factory->BookMethod( loader, TMVA::Types::kBDT, "AdaBoost_5000_0.01_3",
  // 			"!H:!V:NTrees=5000:!CreateMVAPdfs:MinNodeSize=1.0%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.01:UseBaggedBoost=False:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );
  // factory->BookMethod( loader, TMVA::Types::kBDT, "AdaBoost_8000_0.01_3",
  // 			"!H:!V:NTrees=8000:!CreateMVAPdfs:MinNodeSize=1.0%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.01:UseBaggedBoost=False:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );
  // factory->BookMethod( loader, TMVA::Types::kBDT, "AdaBoost_1000_0.1_3",
  // 			"!H:!V:NTrees=5000:!CreateMVAPdfs:MinNodeSize=1.0%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.01:UseBaggedBoost=False:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_1000_0.01",
  // 			"!H:!V:NTrees=1000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );
  // factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_500_0.01",
  // 			"!H:!V:NTrees=500:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_1000_0.01",
  // 			"!H:!V:NTrees=1000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "BDTPriyanka",
  // 			"!H:!V:NTrees=120:MinNodeSize=2.4%:MaxDepth=5:BoostType=AdaBoost:AdaBoostBeta=0.05:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=14" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "BDTPriyankaMod1",
  // 			"!H:!V:NTrees=120:MinNodeSize=2.4%:MaxDepth=4:BoostType=AdaBoost:AdaBoostBeta=0.05:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=14" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "8TeVSetup",
  // 			"!H:!V");

  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_200_005_4",
      "NTrees=200:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.05:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );
  // factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_400_005_3",
  // 			"NTrees=600:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=3" );
  //   factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_1400_001_3",
  //"NTrees=1400:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=3" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "BDTPriyankaMod_1",
  // 			"!H:!V:NTrees=500:MinNodeSize=2.4%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.05:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=14" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "BDTPriyankaMod_2",
  // 			"!H:!V:NTrees=500:MinNodeSize=2.4%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.1:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=14" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "BDTPriyankaMod2",
  // 			"!H:!V:NTrees=300:MinNodeSize=2.4%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.05:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=14" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "BDTPriyankaMod3",
  // 			"!H:!V:NTrees=600:MinNodeSize=2.4%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.05:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=14" );

  // factory->BookMethod( loader, TMVA::Types::kBDT, "BDTPriyankaMod2",
  // 			"!H:!V:NTrees=750:MinNodeSize=2.4%:MaxDepth=4:BoostType=AdaBoost:AdaBoostBeta=0.02:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=14" );


  // factory->BookMethod( loader, TMVA::Types::kBDT, "AdaBoost_1000_0.1_3_Fischer",
  // 			"!H:!V:NTrees=1000:BoostType=Bagging:SeparationType=GiniIndex:nCuts=20" );

  // Allow Using Fisher discriminant in node splitting for (strong) linearly correlated variables
  // factory->BookMethod( loader, TMVA::Types::kBDT, "BDTMitFisher",
  // 			"!H:!V:NTrees=5000:!CreateMVAPdfs:MinNodeSize=1.0%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.01:UseBaggedBoost=False:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20:UseFisherCuts" );

  if (Use["DNN"])
    factory->BookMethod( loader, TMVA::Types::kDNN, "DNN", nnOptions );

  // Train MVAs using the set of training events
  factory->TrainAllMethods();

  // ---- Evaluate all MVAs using the set of test events
  factory->TestAllMethods();

  // ----- Evaluate and compare performance of all configured MVAs
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
