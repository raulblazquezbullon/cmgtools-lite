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


void trainBDtW_1j1t(TString outputdir, TString outputbasedir = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/mvas/", TString inputdir = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/productions/2020-09-20/", TString outputFileName = "tmvaBDT_1j1t.root", TString myMethodList = "", TString twname = "tw.root", TString tbarwname = "tbarw.root", TString ttbarname = "ttbar.root") {
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
  //loader->AddVariable("train_nbloosejets"                , "N(loose b-jet)"                                                         , ""   , 'I');
  //loader->AddVariable("train_lep1lep2jet1met_pt"         , "p_{T} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}, #it{p}_{T}^{miss})"        , "GeV", 'F');
  //loader->AddVariable("train_httot"                      , "H_{T}"                                                                  , "GeV", 'F');
  loader->AddVariable("train_jet1_pt"                    , "Jet p_{T}"                                                              , "GeV", 'F');
  loader->AddVariable("train_loosejet1_pt"               , "Loose jet p_{T}"                                                        , "GeV", 'F');
  //loader->AddVariable("train_lep1lep2jet1met_ptOVERhttot", "p_{T} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}, #it{p}_{T}^{miss}) / H_{T}", ""   , 'F');
  loader->AddVariable("train_lep1lep2jet1met_m"          , "m (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}, #it{p}_{T}^{miss})"            , "GeV", 'F');
  loader->AddVariable("train_lep1lep2jet1_c"             , "C (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})"                               , ""   , 'F');
  loader->AddVariable("train_htlepOVERhttot"             , "(p_{T}(e)^{#pm} + p_{T}(#mu)^{#mp}) / H_{T}"                            , ""   , 'F');
  loader->AddVariable("train_lep1lep2jet1_pt"            , "#it{p}_{T} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}, p_{T}^{miss})"        , "GeV", 'F');
  // =====New Input variables=========
  loader->AddVariable("train_lep1jet1_dr"                , "#DeltaR (#it{l_{1}}^{#pm}, #it{j_{1}})"                              , "", 'F');
//  loader->AddVariable("train_lep1jet1_m"                 , "m (#it{l_{1}}^{#pm}, #it{j_{1}})"                                    , "GeV", 'F');
  loader->AddVariable("train_lep1_eta","Leading lepton #eta","",'F'); 
//  loader->AddVariable("train_lep1lep2_pt"                , "#it{p}_{T} (#it{e}^{#pm}, #it{#mu}^{#mp})"                              , "GeV", 'F');
  loader->AddVariable("train_lep2jet1_m"                 , "m (#it{l_{2}}^{#pm}, #it{j_{1}})"                                    , "GeV", 'F');
        
        
        
  //loader->AddVariable("train_lep1jet1_pt"                , "#it{p}_{T} (#it{l_{1}}^{#pm}, #it{j_{1}})"                           , "GeV", 'F');
  //loader->AddVariable("train_lep1lep2_deta"              , "#Delta#eta (#it{e}^{#pm}, #it{#mu}^{#mp})"                              , "", 'F');
  //loader->AddVariable("train_lep1lep2_dr"                , "#DeltaR (#it{e}^{#pm}, #it{#mu}^{#mp})"                                 , "", 'F');
  //loader->AddVariable("train_lep1lep2jet1_m"             , "m (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j_{1}})"                           , "GeV", 'F');
  //loader->AddVariable("train_lep2jet1_pt"                , "#it{p}_{T} (#it{l_{2}}^{#pm}, #it{j_{1}})"                           , "GeV", 'F');

  
  //loader->AddVariable("train_jet2_pt","train_jet2_pt","",'F');                                    
  //loader->AddVariable("train_lep12jet12_dr","train_lep12jet12_dr","",'F');                        
  //loader->AddVariable("train_lep12jet12met_dr","train_lep12jet12met_dr","a",'F');                  
  //loader->AddVariable("train_lep1lep2jet1met_mt","train_lep1lep2jet1met_mt","",'F');              
  //loader->AddVariable("train_lep1lep2jet1_e","train_lep1lep2jet1_e","",'F');                      
  //loader->AddVariable("train_lep1jet2_m","train_lep1jet2_m","",'F');                              
  //loader->AddVariable("train_lepjet11lep2_dr","train_lepjet11lep2_dr","",'F');                   
  //loader->AddVariable("train_lepjet11lep2_dphi","train_lepjet11lep2_dphi","",'F');                
  //loader->AddVariable("train_lepjet11lep2_deta","train_lepjet11lep2_deta","",'F');                
  //loader->AddVariable("train_lep1jetjet21_dr","train_lep1jetjet21_dr","",'F');                    
  //loader->AddVariable("train_lep1jetjet21_dphi","train_lep1jetjet21_dphi","",'F');                
  //loader->AddVariable("train_lep1jetjet21_deta","train_lep1jetjet21_deta","",'F');                
  //loader->AddVariable("train_met_pt","train_met_pt","",'F');                                      
  //loader->AddVariable("train_met_phi","train_met_phi","",'F');                                    
  //loader->AddVariable("train_nfwdjet","train_nfwdjet","",'I');                                    
  //loader->AddVariable("train_nloosefwdjet","train_nloosefwdjet","",'I');                          
  //loader->AddVariable("train_lep1lep2_ptsum","train_lep1lep2_ptsum","",'F');                      
  //loader->AddVariable("train_lep1lep2_dphi","train_lep1lep2_dphi","",'F');                        
  //loader->AddVariable("train_lep1lep2_m","train_lep1lep2_m","",'F');                              
  //loader->AddVariable("train_lep1_pt","train_lep1_pt","",'F');                                                                     
  //loader->AddVariable("train_lep1_phi","train_lep1_phi","",'F');                                  
  //loader->AddVariable("train_lep1_m","train_lep1_m","",'F');                                      
  //loader->AddVariable("train_lep2_pt","train_lep2_pt","",'F');                                    
  //loader->AddVariable("train_lep2_eta","train_lep2_eta","",'F');                                  
  //loader->AddVariable("train_lep2_phi","train_lep2_phi","",'F');                                  
  //loader->AddVariable("train_lep2_m","train_lep2_m","",'F');                                      
  //loader->AddVariable("train_jet1_eta","train_jet1_eta","",'F');                                  
  //loader->AddVariable("train_jet1_phi","train_jet1_phi","",'F');                                  
  //loader->AddVariable("train_jet1_m","train_jet1_m","",'F');                                      
  //loader->AddVariable("train_jet2_eta","train_jet2_eta","",'F');                                  
  //loader->AddVariable("train_jet2_phi","train_jet2_phi","",'F');                                  
  //loader->AddVariable("train_jet2_m","train_jet2_m","",'F');                                      
//  loader->AddVariable("train_loosejet1_eta","train_loosejet1_eta","",'F');                        
//  loader->AddVariable("train_loosejet1_phi","train_loosejet1_phi","",'F');                        
//  loader->AddVariable("train_loosejet1_m","train_loosejet1_m","",'F');                            
//  loader->AddVariable("train_fwdjet1_pt","train_fwdjet1_pt","",'F');                              
//  loader->AddVariable("train_fwdjet1_eta","train_fwdjet1_eta","",'F');                            
//  loader->AddVariable("train_fwdjet1_phi","train_fwdjet1_phi","",'F');                            
//  loader->AddVariable("train_fwdjet1_m","train_fwdjet1_m","",'F');                                
//  loader->AddVariable("train_fwdloosejet1_pt","train_fwdloosejet1_pt","",'F');                    
//  loader->AddVariable("train_fwdloosejet1_eta","train_fwdloosejet1_eta","",'F');                  
//  loader->AddVariable("train_fwdloosejet1_phi","train_fwdloosejet1_phi","",'F');                  
//  loader->AddVariable("train_fwdloosejet1_m","train_fwdloosejet1_m","",'F');  


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

  TCut mycuts = "((njets == 1) && (nbjets == 1) && (channel == 1))";
  TCut mycutb = "((njets == 1) && (nbjets == 1) && (channel == 1))";



//  loader->PrepareTrainingAndTestTree(mycuts,
//                                     mycutb,
//                                     "nTrain_Signal=0:nTrain_Background=0:SplitMode=Random:NormMode=NumEvents:!V:nTest_Background=0");

  //========70% training and 30% testing======
  double bkgtrain = (TTtree->GetEntries("((njets == 1) && (nbjets == 1) && (channel == 1))"))*0.7;
  double sigtrain = (SItree->GetEntries("((njets == 1) && (nbjets == 1) && (channel == 1))"))*0.7;
  loader->PrepareTrainingAndTestTree(mycuts,
                                     mycutb,
                                     "nTrain_Signal="+to_string(sigtrain)+":nTrain_Background="+to_string(bkgtrain)+":SplitMode=Random:NormMode=NumEvents:!V:nTest_Background=0:nTest_Signal=0");  
  //========70% training and 30% testing======

  cout << "EVENTOS BKG TOT: " << (TTtree->GetEntries("((njets == 1) && (nbjets == 1) && (channel == 1))")) << " EVENTOS BKG *0.7: " << (TTtree->GetEntries("((njets == 1) && (nbjets == 1) && (channel == 1))"))*0.7 << endl;
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


  //===============Optimización NTrees=========================================
//  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_2500_0.01",
//      "!H:!V:NTrees=2500:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );
//  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_3000_0.01",
//      "!H:!V:NTrees=3000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );
//  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_5000_0.01",
//      "!H:!V:NTrees=5000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );  
  //===============Optimización NTrees=========================================


  //===============Optimización MaxDepth=========================================
//  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_2000_0.01_3",
//      "!H:!V:NTrees=2000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=3" );
//  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_2000_0.01_4",
//      "!H:!V:NTrees=2000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=4" );
//  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_2000_0.01_5",
//      "!H:!V:NTrees=2000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=5" );
//  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_2000_0.01_6",
//      "!H:!V:NTrees=2000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=6" );
//  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_2000_0.01_7",
//      "!H:!V:NTrees=2000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=7" );
//  factory->BookMethod( loader, TMVA::Types::kBDT, "GradBoost_2000_0.01_8",
//      "!H:!V:NTrees=2000:MinNodeSize=0.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=8" );
  //===============Optimización MaxDepth=========================================




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





















                    












