#include <TTree.h>
#include <TMath.h>
#include <TBranch.h>

#include <TMVA/Reader.h>
#include <TFile.h>
#include <TApplication.h>
#include <TSystem.h>

int addTTHFO_conePt(TString path = "/nfs/fanae/user/carlosec/WZ/CMSSW_8_0_25/src/TnP_MuonEfficiencies", TString treeName = "DY_test.root"){//Adds additional MiniIso + LeptonMVA variables to the MuonPOG ntuples in order to study leptonMVA ID properties

    // --- Create the Reader object
    TMVA::Reader *reader = new TMVA::Reader( "!Color:!Silent" );
    // Create a set of variables and declare them to the reader
    // - the variable names MUST corresponds in name and type to those given in the weight file(s) used
    
    //For the LeptonMVA
    Float_t pt;
    Float_t eta;
    Float_t JetNDauCharged;
    Float_t miniIsoCharged;
    Float_t miniIsoChargedRel;
    Float_t miniIsoNeutrals;
    Float_t miniIsoNeutralsRel;
    Float_t JetPtRel;
    Float_t JetPtRatio;
    Float_t JetPtRatioMin;
    Float_t JetBTagCSV;
    Float_t JetBTagCSVMax;
    Float_t SIP;
    Float_t dB;
    Float_t dBLog;
    Float_t dzPV;
    Float_t dzPVLog;
    Float_t segmentCompatibility;
    Float_t eArea;
    Float_t R;
    Float_t combRelIsoPF04dBeta;

    //For the ID
    Float_t miniIsoPhotons;
    Float_t fixedGridRhoFastjetAll;
    Int_t Loose;
    Int_t Medium2016;
    Float_t tkPtError;

    //Set branches for reading
    TFile* theFile = new TFile(path + "/" + treeName, "UPDATE");

    TDirectoryFile* theDir = (TDirectoryFile *) theFile->Get("tpTree");
    TTree* theTree = (TTree *) theFile->Get("tpTree/fitter_tree");
    cout << "Opened tree" << endl;

    theTree->SetBranchAddress("pt",&pt);
    theTree->SetBranchAddress("eta",&eta);
    theTree->SetBranchAddress("JetNDauCharged",&JetNDauCharged);
    theTree->SetBranchAddress("miniIsoCharged",&miniIsoCharged);
    theTree->SetBranchAddress("miniIsoNeutrals",&miniIsoNeutrals);
    theTree->SetBranchAddress("JetPtRel",&JetPtRel);
    theTree->SetBranchAddress("JetPtRatio",&JetPtRatio);
    theTree->SetBranchAddress("JetBTagCSV",&JetBTagCSV);
    theTree->SetBranchAddress("SIP",&SIP);
    theTree->SetBranchAddress("dB", &dB);
    theTree->SetBranchAddress("dzPV", &dzPV);
    theTree->SetBranchAddress("segmentCompatibility", &segmentCompatibility);
    theTree->SetBranchAddress("combRelIsoPF04dBeta", &combRelIsoPF04dBeta);
    theTree->SetBranchAddress("miniIsoPhotons", &miniIsoPhotons);
    theTree->SetBranchAddress("tag_fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll);
    //theTree->SetBranchAddress("fixedGridRhoFastjetAll", &fixedGridRhoFastjetAll);
    theTree->SetBranchAddress("Loose", &Loose);
    theTree->SetBranchAddress("Medium", &Medium2016);
    //theTree->SetBranchAddress("Medium2016", &Medium2016);
    theTree->SetBranchAddress("tkPtError", &tkPtError);



    //Adding vars to the reader (Same order as training!!!)

    reader->AddVariable("LepGood_pt", &pt);
    reader->AddVariable("LepGood_eta", &eta);
    reader->AddVariable("LepGood_jetNDauChargedMVASel", &JetNDauCharged);
    reader->AddVariable("LepGood_miniRelIsoCharged", &miniIsoChargedRel);
    reader->AddVariable("LepGood_miniRelIsoNeutral", &miniIsoNeutralsRel);
    reader->AddVariable("LepGood_jetPtRelv2", &JetPtRel);
    reader->AddVariable("max(LepGood_jetBTagCSV,0)", &JetBTagCSVMax);
    reader->AddVariable("(LepGood_jetBTagCSV>-5)*min(LepGood_jetPtRatiov2,1.5)+(LepGood_jetBTagCSV<-5)/(1+LepGood_relIso04)", &JetPtRatioMin);
    reader->AddVariable("LepGood_sip3d", &SIP);
    reader->AddVariable("log(abs(LepGood_dxy))", &dBLog);
    reader->AddVariable("log(abs(LepGood_dz))", &dzPVLog);
    reader->AddVariable("LepGood_segmentCompatibility", &segmentCompatibility);



   // --- Book the MVA method

    //reader -> BookMVA( "BDTG method", "/mnt_pool/ciencias_users/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/leptonMVA/susy/mu_BDTG.weights.xml");
    reader -> BookMVA("BDTG method", "/mnt_pool/ciencias_users/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/leptonMVA/tth/mu_BDTG.weights.xml");
   
   // Define output variables for the new branches
    Float_t MiniIso;
    Float_t susyMVA;
    Int_t  ttHMVAFO_2017;
    Int_t  ttHMVATight_2017;
    Float_t probe_conePt;
    TBranch *probe_conePtBranch = theTree->Branch("probe_conePt", &probe_conePt, "probe_conePt/F");
    TBranch *ttHMVAFO_2017Branch = theTree->Branch("ttHMVATight_2017", &ttHMVATight_2017, "ttHMVATight_2017/I");
    TBranch *ttHMVATight_2017Branch = theTree->Branch("ttHMVAFO_2017", &ttHMVAFO_2017, "ttHMVAFO_2017/I");


    cout << "Set branch addresses" << endl;

    std::cout << "--- Processing: " << theTree->GetEntries() << " events" << std::endl;
    //int j = 0;
    // Event Loop. Filling BDT response histogram
    for (Long64_t ievt=0;ievt < theTree->GetEntries() ;ievt++) {
      theTree->GetEntry(ievt);
      if (JetBTagCSV > -5){ JetPtRatioMin = TMath::Min(JetPtRatio, (Float_t) 1.5);       probe_conePt = 0.9/JetPtRatio*pt;}
      else{ JetPtRatioMin = 1./(1. + combRelIsoPF04dBeta);       probe_conePt = 0.9/JetPtRatioMin*pt;}
      if (JetPtRatioMin < 0){ JetPtRatioMin = 0;}

      miniIsoChargedRel = miniIsoCharged/pt;
      miniIsoNeutralsRel = miniIsoNeutrals/pt;
      JetBTagCSVMax = TMath::Max((Float_t) 0., JetBTagCSV);
      dBLog = TMath::Log(TMath::Abs(dB));
      dzPVLog = TMath::Log(TMath::Abs(dzPV));


      // Read BDT
      susyMVA = reader->EvaluateMVA("BDTG method");
    
      //MiniIso
      R = 10./(TMath::Min(TMath::Max(pt,(Float_t) 50.), (Float_t) 200.));
      Float_t abseta = TMath::Abs(eta);
      // From: https://github.com/cms-data/PhysicsTools-NanoAOD/blob/10e7935ba38c2172ebb75979dcc1d8174b0566cd/effAreaMuons_cone03_pfNeuHadronsAndPhotons_94X.txt
      if      (abseta < 0.8) eArea = 0.0566;
      else if (abseta < 1.3) eArea = 0.0562;
      else if (abseta < 2.0) eArea = 0.0363;
      else if (abseta < 2.2) eArea = 0.0119;
      else if (abseta < 2.5) eArea = 0.0064;
      MiniIso = (miniIsoCharged + TMath::Max((Float_t) 0., (Float_t) (miniIsoNeutrals + miniIsoPhotons - fixedGridRhoFastjetAll*eArea*(R/0.3)*(R/0.3)) ))/pt;
      //Here MiniISO, conePt, leptonMVA have been computed
      ttHMVAFO_2017 = 0;
      ttHMVATight_2017 = 0;
      if (pt > 10 && abseta < 2.4 && TMath::Abs(dB) < 0.05 && TMath::Abs(dzPV) < 0.1 && SIP < 8 && MiniIso < 0.4 && Loose){ //Common to everything
          if (JetBTagCSV < 0.4941 && susyMVA > 0.90){
              if (Medium) ttHMVATight_2017 = 1;
              ttHMVAFO_2017 = 1;
          }
          if (JetBTagCSV < 0.07 && JetPtRatio > 0.6 && segmentCompatibility > 0.3){
              ttHMVAFO_2017 = 1;
          }
      }
      if (ievt%10000 == 0 ){
          std::cout << "--- Processing event " << ievt << " of " << theTree->GetEntries() << std::endl;
      }
   }
   //std::cout << "------A total of " << j << " events (unweighted) of " << theTree->GetEntries() << "------" << std::endl;
   // --- Write histograms
   TString savepath = path + "Full/" + treeName;
   //TFile *target  = new TFile( savepath + "runB_MVA.root","RECREATE" );
   theDir->cd();
   theTree->Print();
   theTree->Write();
   theFile->Close();
   std::cout << "--- Created root file: \"" + path + "/" + treeName  + "\" containing the new branches" << std::endl;
   delete reader;
   return 1;
}
