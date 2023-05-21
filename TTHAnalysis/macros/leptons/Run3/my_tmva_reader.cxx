/*
root -l -b -q 'my_tmva_reader.cxx("2022EE")'
*/

#include <algorithm>

using namespace std;
TH1F* h_sig_tth = new TH1F("h_sig_tth", "h_sig_tth", 1000, -1., 1.);
TH1F* h_bkg_tth = new TH1F("h_bkg_tth", "h_bkg_tth", 1000, -1., 1.);

TH1F* h_sig_ttw = new TH1F("h_sig_ttw", "h_sig_ttw", 1000, -1., 1.);
TH1F* h_bkg_ttw = new TH1F("h_bkg_ttw", "h_bkg_ttw", 1000, -1., 1.);

TH1F* h_sig_wz = new TH1F("h_sig_wz", "h_sig_wz", 1000, -1., 1.);
TH1F* h_bkg_wz = new TH1F("h_bkg_wz", "h_bkg_wz", 1000, -1., 1.);

TH1F* h_sig_UL = new TH1F("h_sig_UL", "h_sig_UL", 1000, -1., 1.);
TH1F* h_bkg_UL = new TH1F("h_bkg_UL", "h_bkg_UL", 1000, -1., 1.);

TGraph ROC_curve(TH1F* h_sig, TH1F* h_bkg, TString name){

  float integral_sig = 0.;
  float integral_bkg = 0.;
  
  integral_sig = h_sig -> Integral();
  integral_bkg = h_bkg -> Integral();
  
  float eff_sig = 0.;
  float eff_bkg = 0.;
  
  // ROC Curve
  TGraph ROC;
  int nbins = 1000;
  for (int b = 0; b < nbins; ++b){
    float S = h_sig -> Integral(b, nbins);
    float B = h_bkg -> Integral(b, nbins);
    cout << "Integrating from " << b << " to " << nbins << endl;
    eff_sig = S / integral_sig;
    eff_bkg = B / integral_bkg;
    cout << "Signal val: " << S << endl;
    cout << "Background val: " << B << endl;
    cout << "Signal eff: " << eff_sig << endl;
    cout << "Background eff: " << eff_bkg << endl;
    cout << "-------------- " << endl;
    ROC.SetPoint(b, eff_bkg, eff_sig);
  }
  ROC.SetName(name);
  return ROC;
}


void my_tmva_reader_mu(std::vector<TString> files_names_strings, TString year){

  // Chain signal and background samples (in this case we just have the one :D )
  TChain *t = new TChain("Events");
  for (int i = 0; i < files_names_strings.size(); ++i){
    t -> AddFile(files_names_strings.at(i));
    std::cout << "File " << i << " added" << std::endl;
  }

  std::cout << "Iterating over " << t->GetEntries() << " events" << std::endl;
  TMVA::Reader* reader = new TMVA::Reader();
  
  float event;
  float mvaTTH;
  float miniPFRelIso_all;
  float genPartFlav;
  float isGlobal;
  float isTracker;
  float isPFcand;
  float looseId;
  float mediumId;
  float dxy;
  float dz;

  float pt;
  float eta;
  float pfRelIso03_all;
  float miniPFRelIso_chg;
  float miniRelIsoNeutral;
  float jetNDauCharged;
  float jetPtRelv2;
  float jetPtRatio;
  float jetBTagDeepFlavB;
  float sip3d;
  float log_dxy;
  float log_dz;
  float segmentComp;
  
  // Spectators
  
  reader->AddSpectator("event", &event);
  reader->AddSpectator("Muon_mvaTTH",&mvaTTH);
  reader->AddSpectator("Muon_miniPFRelIso_all",&miniPFRelIso_all);
  reader->AddSpectator("Muon_looseId",&looseId);
  reader->AddSpectator("Muon_genPartFlav",&genPartFlav);
  reader->AddSpectator("Muon_isGlobal",&isGlobal);
  reader->AddSpectator("Muon_isTracker",&isTracker);
  reader->AddSpectator("Muon_isPFcand",&isPFcand);
  reader->AddSpectator("Muon_mediumId",&mediumId);
  reader->AddSpectator("Muon_looseId",&looseId);
  reader->AddSpectator("Muon_dxy",&dxy);
  reader->AddSpectator("Muon_dz",&dz);
  
  // Training variables
  reader->AddVariable("Muon_LepGood_pt",&pt);
  reader->AddVariable("Muon_LepGood_eta",&eta);
  reader->AddVariable("Muon_LepGood_miniRelIsoCharged",&miniPFRelIso_chg);
  reader->AddVariable("Muon_LepGood_miniRelIsoNeutral", &miniRelIsoNeutral);
  reader->AddVariable("Muon_LepGood_jetNDauChargedMVASel", &jetNDauCharged);
  reader->AddVariable("Muon_LepGood_jetPtRelv2", &jetPtRelv2);
  reader->AddVariable("Muon_LepGood_jetPtRatio", &jetPtRatio);
  reader->AddVariable("Muon_LepGood_jetDF", &jetBTagDeepFlavB);
  reader->AddVariable("Muon_LepGood_sip3d", &sip3d);
  reader->AddVariable("Muon_LepGood_dxy", &log_dxy);
  reader->AddVariable("Muon_LepGood_dz", &log_dz);
  reader->AddVariable("Muon_LepGood_segmentComp", &segmentComp);
  
  cout << "Variables added to the reader" << endl;

  TString readers_names[3];
  readers_names[0] = "/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/macros/leptons/Run3/dataset/weights/mu_tth_BDTG.weights.xml";
  readers_names[1] = "/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/macros/leptons/Run3/dataset/weights/mu_ttw_BDTG.weights.xml";
  readers_names[2] = "/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/macros/leptons/Run3/dataset/weights/mu_wz_BDTG.weights.xml";


  reader->BookMVA("BDTG_tth", readers_names[0]);
  reader->BookMVA("BDTG_ttw", readers_names[1]);
  reader->BookMVA("BDTG_wz", readers_names[2]);


  cout << "MVAs booked by the reader" << endl;
  
  uint event_;
  float mvaTTH_;
  float miniPFRelIso_all_;
  char  genPartFlav_;
  bool  isGlobal_;
  bool  isTracker_;
  bool  isPFcand_;
  bool  looseId_;
  bool  mediumId_;
  float dxy_;
  float dz_;

  float pt_;
  float eta_;
  float pfRelIso03_all_;
  float miniPFRelIso_chg_;
  float miniRelIsoAll_;
  char  jetNDauCharged_;
  float jetPtRelv2_;
  float jetPtRatio_;
  float jetBTagDeepFlavB_[40];
  float sip3d_;
  float segmentComp_;
  float jetRelIso_;
  int   jetIdx_;

  t->SetBranchAddress("event",                 &event_);
  t->SetBranchAddress("Muon_mvaTTH",           &mvaTTH_);
  t->SetBranchAddress("Muon_miniPFRelIso_all", &miniPFRelIso_all_);
  t->SetBranchAddress("Muon_looseId",          &looseId_);
  t->SetBranchAddress("Muon_genPartFlav",      &genPartFlav_);
  t->SetBranchAddress("Muon_isGlobal",         &isGlobal_);
  t->SetBranchAddress("Muon_isTracker",        &isTracker_);
  t->SetBranchAddress("Muon_isPFcand",         &isPFcand_);
  t->SetBranchAddress("Muon_mediumId",         &mediumId_);
  t->SetBranchAddress("Muon_looseId",          &looseId_);
  t->SetBranchAddress("Muon_dxy",              &dxy_);
  t->SetBranchAddress("Muon_dz",               &dz_);

  t->SetBranchAddress("Muon_pt",               &pt_);
  t->SetBranchAddress("Muon_eta",              &eta_);
  t->SetBranchAddress("Muon_pfRelIso03_all",   &pfRelIso03_all_);
  t->SetBranchAddress("Muon_miniPFRelIso_chg", &miniPFRelIso_chg_);
  t->SetBranchAddress("Muon_miniPFRelIso_all", &miniRelIsoAll_);
  t->SetBranchAddress("Muon_jetNDauCharged",   &jetNDauCharged_);
  t->SetBranchAddress("Muon_jetPtRelv2",       &jetPtRelv2_);
  t->SetBranchAddress("Muon_jetRelIso",        &jetRelIso_);
  t->SetBranchAddress("Muon_jetIdx",           &jetIdx_);
  t->SetBranchAddress("Jet_btagDeepFlavB",     &jetBTagDeepFlavB_);
  t->SetBranchAddress("Muon_sip3d",            &sip3d_);
  t->SetBranchAddress("Muon_segmentComp",      &segmentComp_);

  cout << "Branches set, starting loop" << endl;

  for (Long64_t ievt = 0; ievt < t->GetEntries(); ievt++) {

    if (ievt % 100000 == 0) cout << "--- ... Processing event: " << ievt <<std::endl;
    
    t->GetEntry(ievt);

    event_ = ievt;
    mvaTTH = mvaTTH_;
    miniPFRelIso_all = miniPFRelIso_all_;
    genPartFlav = genPartFlav_;
    isGlobal = isGlobal_;
    isTracker = isTracker_;
    isPFcand = isPFcand_;
    looseId = looseId_;
    mediumId = mediumId_;
    dxy = dxy_;
    dz = dz_;
    
    pt = pt_;
    eta = eta_;
    pfRelIso03_all = pfRelIso03_all_;
    miniPFRelIso_chg = miniPFRelIso_chg_;
    miniRelIsoNeutral = pfRelIso03_all_ - miniPFRelIso_chg_;
    jetNDauCharged = jetNDauCharged_;
    jetPtRelv2 = jetPtRelv2_;
    jetPtRatio = min(1. / (1. + jetRelIso_), 1.5);
    jetBTagDeepFlavB = jetIdx_ > -1 ? jetBTagDeepFlavB_[jetIdx_] : 0;
    sip3d = sip3d_;
    log_dxy = log(abs(dxy));
    log_dz = log(abs(dz));
    segmentComp = segmentComp_;

    
    // Preselections: defined as the loosest join of both preselections
    // Common
    if (miniPFRelIso_all_ > 0.4)          continue;
    if (sip3d_ > 8)                       continue;
    if (fabs(dxy_) > 0.05)                continue;
    if (fabs(dz_) > 0.1)                  continue;
    
    // tth-like preselection (loosest one)
    if (pt_ < 10)                          continue; 
    if (fabs(eta_) > 2.4)                 continue;
    if (looseId_ != 1)                    continue;

    // ttW-like preselection adds other cuts
    // if ( pt_ < 10)                        continue;
    if (isGlobal != 1 && isTracker_ != 1) continue;
    if (isPFcand_ != 1)                   continue;
    // if (mediumId_ != 1)                   continue;


    // Passes ttW-like?
    int passttw_presel = mediumId; // pt_ > 10 && (isGlobal == 1 || isTracker == 1) && isPFcand == 1;
    int passwz_presel = mediumId; // passttw_presel;

    float BDTG_tth;
    float BDTG_ttw;
    float BDTG_wz;

    BDTG_tth = reader->EvaluateMVA("BDTG_tth");
    BDTG_ttw = reader->EvaluateMVA("BDTG_ttw");
    BDTG_wz  = reader->EvaluateMVA("BDTG_wz");


    // Fill signal histograms
    if (genPartFlav == 1 || genPartFlav == 15){
      h_sig_tth -> Fill(BDTG_tth);
      h_sig_ttw -> Fill((-1)*(passttw_presel == 0) + (passwz_presel == 1)*BDTG_ttw);
      h_sig_wz  -> Fill((-1)*(passwz_presel == 0)  + (passwz_presel == 1)*BDTG_wz);
      h_sig_UL  -> Fill(mvaTTH); 
    }

    // Fill background histograms
    if (genPartFlav != 1 && genPartFlav != 15){
      h_bkg_tth -> Fill(BDTG_tth);
      h_bkg_ttw -> Fill((-1)*(passttw_presel == 0) + (passttw_presel == 1)*BDTG_ttw);
      h_bkg_wz  -> Fill((-1)*(passwz_presel  == 0) + (passwz_presel  == 1)*BDTG_wz);
      h_bkg_UL  -> Fill(mvaTTH); 
    }
    
  }
  

  // Now prepare ROC curves
  TGraph ROC_tth    = ROC_curve(h_sig_tth,    h_bkg_tth,    "tth-like");    
  TGraph ROC_ttw    = ROC_curve(h_sig_ttw,    h_bkg_ttw,    "ttw-like");
  TGraph ROC_wz     = ROC_curve(h_sig_wz,     h_bkg_wz,     "wz-like");
  TGraph ROC_UL     = ROC_curve(h_sig_UL,     h_bkg_UL,     "UL");

  // Cosmetics
  ROC_UL.SetLineColor(kBlack);
  ROC_tth.SetLineColor(kGreen+1);
  ROC_wz.SetLineColor(kBlue+7);
  ROC_ttw.SetLineColor(kRed);



  ROC_UL.SetLineWidth(2);
  ROC_tth.SetLineWidth(2);
  ROC_ttw.SetLineWidth(2);
  ROC_wz.SetLineWidth(2);
  

  TLegend* leg = new TLegend(0.55, 0.35, 0.85, 0.50);
  leg->SetLineColor(0);
  leg->AddEntry(&ROC_UL, "UL mvaTTH", "l");
  leg->AddEntry(&ROC_tth,  "tth", "l");   
  leg->AddEntry(&ROC_ttw, "ttw", "l");
  leg->AddEntry(&ROC_wz,  "wz", "l");
  

  TCanvas* c2 = new TCanvas("c2", "c2", 600, 600);
  c2 -> cd();
  c2 -> SetLogx();
  ROC_tth.SetTitle("ROC Curve for Muon MVA");
  ROC_tth.GetXaxis()->SetRangeUser(0.001, 1.0);
  ROC_tth.GetYaxis()->SetRangeUser(0.50, 1.0);
  ROC_tth.GetXaxis()->SetTitle("Background Efficiency");
  ROC_tth.GetYaxis()->SetTitle("Signal Efficiency");
  ROC_tth.Draw("AL");
  ROC_UL.Draw("L same");
  ROC_ttw.Draw("L same");
  ROC_wz.Draw("L same");
  leg->Draw("same");
  
  TString canvas_name;
  if ( year == "2022EE")
    canvas_name = "ROC_mu_2022EE_BDTG.png";
  c2 -> Print(canvas_name);

}

void my_tmva_reader_el(std::vector<TString> files_names_strings, TString year){

  // Chain signal and background samples (in this case we just have the one :D )
  TChain *t = new TChain("Events");
  for (int i = 0; i < files_names_strings.size(); ++i){
    t -> AddFile(files_names_strings.at(i));
    std::cout << "File " << i << " added" << std::endl;
  }

  std::cout << "Iterating over " << t->GetEntries() << " events" << std::endl;
  TMVA::Reader* reader = new TMVA::Reader();
  
  float mvaTTH;
  float miniPFRelIso_all;
  float mvaNoIso_Fall17V2_WPL;
  float lostHits;
  float genPartFlav;
  float dxy;
  float dz;

  float pt;
  float eta;
  float pfRelIso03_all;
  float miniPFRelIso_chg;
  float miniRelIsoNeutral;
  float jetPtRelv2;
  float jetPtRatio;
  float jetNDauCharged;
  float jetBTagDeepFlavB;
  float sip3d;
  float log_dxy;
  float log_dz;
  float mvaNoIso_Fall17V2;

  float event;


  // Spectators
  
  reader->AddSpectator("event", &event);
  reader->AddSpectator("Electron_mvaTTH",&mvaTTH);
  reader->AddSpectator("Electron_miniPFRelIso_all",&miniPFRelIso_all);
  reader->AddSpectator("Electron_mvaNoIso_Fall17V2_WPL",&mvaNoIso_Fall17V2_WPL);
  reader->AddSpectator("Electron_lostHits",&lostHits);
  reader->AddSpectator("Electron_genPartFlav",&genPartFlav);
  reader->AddSpectator("Electron_dxy",&dxy);
  reader->AddSpectator("Electron_dz",&dz);
  
  // Training variables
  reader->AddVariable("Electron_LepGood_pt",&pt);
  reader->AddVariable("Electron_LepGood_eta",&eta);
  reader->AddVariable("Electron_LepGood_miniRelIsoCharged",&miniPFRelIso_chg);
  reader->AddVariable("Electron_LepGood_miniRelIsoNeutral", &miniRelIsoNeutral);
  reader->AddVariable("Electron_LepGood_jetNDauChargedMVASel", &jetNDauCharged);
  reader->AddVariable("Electron_LepGood_jetPtRelv2", &jetPtRelv2);
  reader->AddVariable("Electron_LepGood_jetPtRatio", &jetPtRatio);
  reader->AddVariable("Electron_LepGood_jetDF", &jetBTagDeepFlavB);
  reader->AddVariable("Electron_LepGood_sip3d", &sip3d);
  reader->AddVariable("Electron_LepGood_dxy", &log_dxy);
  reader->AddVariable("Electron_LepGood_dz", &log_dz);
  reader->AddVariable("Electron_LepGood_mvaFall17V2noIso", &mvaNoIso_Fall17V2);
  
  cout << "Variables added to the reader" << endl;

  TString readers_names[3];
  readers_names[0] = "/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/macros/leptons/Run3/dataset/weights/el_tth_BDTG.weights.xml";
  readers_names[1] = "/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/macros/leptons/Run3/dataset/weights/el_ttw_BDTG.weights.xml";
  readers_names[2] = "/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/macros/leptons/Run3/dataset/weights/el_wz_BDTG.weights.xml";


  reader->BookMVA("BDTG_tth", readers_names[0]);
  reader->BookMVA("BDTG_ttw", readers_names[1]);
  reader->BookMVA("BDTG_wz", readers_names[2]);


  cout << "MVAs booked by the reader" << endl;
  
  float mvaTTH_;
  float miniPFRelIso_all_;
  bool  mvaNoIso_Fall17V2_WPL_;
  char  lostHits_;
  char  genPartFlav_;
  float dxy_;
  float dz_;

  float pt_;
  float eta_;
  float pfRelIso03_all_;
  float miniPFRelIso_chg_;
  float miniRelIsoAll_;
  float jetPtRelv2_;
  float jetPtRatio_;
  float jetBTagDeepFlavB_[40];
  float sip3d_;
  float mvaNoIso_Fall17V2_;
  float jetRelIso_;
  char jetNDauCharged_;
  int   jetIdx_;

  uint  nElectron_;
  uint  event_;
  ULong64_t   charge_;

  t->SetBranchAddress("event", &event_);
  t->SetBranchAddress("Electron_mvaTTH",&mvaTTH_);
  t->SetBranchAddress("Electron_miniPFRelIso_all",&miniPFRelIso_all_);
  t->SetBranchAddress("Electron_mvaNoIso_Fall17V2_WPL",&mvaNoIso_Fall17V2_WPL_); 
  t->SetBranchAddress("Electron_lostHits",&lostHits_);
  t->SetBranchAddress("Electron_genPartFlav",&genPartFlav_);
  t->SetBranchAddress("Electron_dxy",&dxy_);
  t->SetBranchAddress("Electron_dz",&dz_);


  t->SetBranchAddress("Electron_pt",               &pt_);
  t->SetBranchAddress("Electron_eta",              &eta_);
  t->SetBranchAddress("Electron_pfRelIso03_all",   &pfRelIso03_all_);
  t->SetBranchAddress("Electron_miniPFRelIso_chg", &miniPFRelIso_chg_);
  t->SetBranchAddress("Electron_miniPFRelIso_all", &miniRelIsoAll_);
  t->SetBranchAddress("Electron_jetNDauCharged",   &jetNDauCharged_);
  t->SetBranchAddress("Electron_jetPtRelv2",       &jetPtRelv2_);
  t->SetBranchAddress("Electron_jetRelIso",        &jetRelIso_);
  t->SetBranchAddress("Electron_jetIdx",           &jetIdx_);
  t->SetBranchAddress("Jet_btagDeepFlavB",         &jetBTagDeepFlavB_);
  t->SetBranchAddress("Electron_sip3d",            &sip3d_);
  t->SetBranchAddress("Electron_mvaNoIso_Fall17V2", &mvaNoIso_Fall17V2_);

  cout << "Branches set, starting loop" << endl;

  for (ULong64_t ievt = 0; ievt < t->GetEntries(); ievt++) {

    if (ievt % 100000 == 0) cout << "--- ... Processing event: " << ievt <<std::endl;
    
    t->GetEntry(ievt);

    event_ = ievt;
    mvaTTH = mvaTTH_;
    miniPFRelIso_all = miniPFRelIso_all_;
    mvaNoIso_Fall17V2_WPL = mvaNoIso_Fall17V2_WPL_;
    lostHits = lostHits_;
    genPartFlav = genPartFlav_;
    dxy = dxy_;
    dz = dz_;
    pt = pt_;
    eta = eta_;
    pfRelIso03_all = pfRelIso03_all_;
    miniPFRelIso_chg = miniPFRelIso_chg_;
    miniRelIsoNeutral = pfRelIso03_all_ - miniPFRelIso_chg_;
    jetNDauCharged = jetNDauCharged_;
    jetPtRelv2 = jetPtRelv2_;

    jetPtRatio = min(1. / (1. + jetRelIso_), 1.5);
    if (jetIdx_ > 40) continue; // Sometimes the branch appears not to be filled and it crashes 
    jetBTagDeepFlavB = jetIdx_ > -1 ? jetBTagDeepFlavB_[jetIdx_] : 0;

    sip3d = sip3d_;
    log_dxy = log(abs(dxy));
    log_dz = log(abs(dz));

    mvaNoIso_Fall17V2 = mvaNoIso_Fall17V2_;

    
    // Preselections: defined as the loosest join of both preselections
    // Common
    // Loose Preselections

    if (pt <= 10)                        continue;
    if (miniPFRelIso_all >= 0.4)         continue;
    if (sip3d >= 8)                      continue;
    if (fabs(eta) >= 2.5)                continue;
    if (lostHits >= 2)                   continue;
    if (fabs(dxy) >= 0.05)               continue;
    if (fabs(dz) >= 0.1)                 continue;


    float BDTG_tth;
    float BDTG_ttw;
    float BDTG_wz;

    BDTG_tth = reader->EvaluateMVA("BDTG_tth");
    BDTG_ttw = reader->EvaluateMVA("BDTG_ttw");
    BDTG_wz  = reader->EvaluateMVA("BDTG_wz");


    // Fill signal histograms
    if (genPartFlav == 1 || genPartFlav == 15){
      h_sig_tth -> Fill( (-1.)*(mvaNoIso_Fall17V2_WPL_ == 0) + BDTG_tth*(mvaNoIso_Fall17V2_WPL_ == 1) );      
      h_sig_ttw -> Fill( (-1.)*(pt < 10) + BDTG_ttw*(pt >= 10));
      h_sig_wz  -> Fill( (-1.)*(pt < 10) + BDTG_wz*(pt >= 10));
      h_sig_UL  -> Fill(mvaTTH); 
    }

    // Fill background histograms
    if (genPartFlav != 1 && genPartFlav != 15){
      h_bkg_tth -> Fill( (-1.)*(mvaNoIso_Fall17V2_WPL_ == 0) + BDTG_tth*(mvaNoIso_Fall17V2_WPL_ == 1) );      
      h_bkg_ttw -> Fill( (-1.)*(pt < 10) + BDTG_ttw*(pt >= 10));
      h_bkg_wz  -> Fill( (-1.)*(pt < 10) + BDTG_wz*(pt >= 10));
      h_bkg_UL  -> Fill(mvaTTH); 
    }
    
  }

  // Now prepare ROC curves
  TGraph ROC_tth    = ROC_curve(h_sig_tth,    h_bkg_tth,    "tth-like");    
  TGraph ROC_ttw    = ROC_curve(h_sig_ttw,    h_bkg_ttw,    "ttw-like");
  TGraph ROC_wz     = ROC_curve(h_sig_wz,     h_bkg_wz,     "wz-like");
  TGraph ROC_UL     = ROC_curve(h_sig_UL,     h_bkg_UL,     "UL");

  // Cosmetics
  ROC_UL.SetLineColor(kBlack);
  ROC_tth.SetLineColor(kGreen+1);
  ROC_wz.SetLineColor(kBlue+7);
  ROC_ttw.SetLineColor(kRed);



  ROC_UL.SetLineWidth(2);
  ROC_tth.SetLineWidth(2);
  ROC_ttw.SetLineWidth(2);
  ROC_wz.SetLineWidth(2);
  

  TLegend* leg = new TLegend(0.55, 0.35, 0.85, 0.50);
  leg->SetLineColor(0);
  leg->AddEntry(&ROC_UL, "UL mvaTTH", "l");
  leg->AddEntry(&ROC_tth,  "tth", "l");   
  leg->AddEntry(&ROC_ttw, "ttw", "l");
  leg->AddEntry(&ROC_wz,  "wz", "l");
  

  TCanvas* c2 = new TCanvas("c2", "c2", 600, 600);
  c2 -> cd();
  c2 -> SetLogx();
  ROC_tth.SetTitle("ROC Curve for Muon MVA");
  ROC_tth.GetXaxis()->SetRangeUser(0.001, 1.0);
  ROC_tth.GetYaxis()->SetRangeUser(0.50, 1.0);
  ROC_tth.GetXaxis()->SetTitle("Background Efficiency");
  ROC_tth.GetYaxis()->SetTitle("Signal Efficiency");
  ROC_tth.Draw("AL");
  ROC_UL.Draw("L same");
  ROC_ttw.Draw("L same");
  ROC_wz.Draw("L same");
  leg->Draw("same");
  
  TString canvas_name;
  if ( year == "2022EE")
    canvas_name = "ROC_el_2022EE_BDTG.png";
  c2 -> Print(canvas_name);
}

void my_tmva_reader(TString object = "mu", TString year = "2022"){

  TString input_file;
  std::vector<TString> files_names_strings;

  if (year == "2022EE"){
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_100.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_101.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_102.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_103.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_104.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_105.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_106.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_107.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_108.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_109.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_110.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_111.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_112.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_113.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_114.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_115.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_116.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_117.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_118.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_119.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_120.root");
  }

  if (object.Contains("mu")){
    my_tmva_reader_mu(files_names_strings, year);
  }
  
  if (object.Contains("el")){
    my_tmva_reader_el(files_names_strings, year);
  }
  
}