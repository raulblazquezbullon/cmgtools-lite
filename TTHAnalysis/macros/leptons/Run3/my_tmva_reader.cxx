/*
root -l -b -q 'my_tmva_reader.cxx("2022EE")'
*/

#include <algorithm>

using namespace std;

// Reconstructed leptons passing preselections
TH1F* h_sig_tth = new TH1F("h_sig_tth", "h_sig_tth", 1000, -1., 1.);
TH1F* h_bkg_tth = new TH1F("h_bkg_tth", "h_bkg_tth", 1000, -1., 1.);

TH1F* h_sig_ttw = new TH1F("h_sig_ttw", "h_sig_ttw", 1000, -1., 1.);
TH1F* h_bkg_ttw = new TH1F("h_bkg_ttw", "h_bkg_ttw", 1000, -1., 1.);

TH1F* h_sigttw_vetoLeak = new TH1F("h_sigttw_vetoLeak", "h_sigttw_vetoLeak", 1000, -1., 1.);
TH1F* h_bkgttw_vetoLeak = new TH1F("h_bkgttw_vetoLeak", "h_bkgttw_vetoLeak", 1000, -1., 1.);

TH1F* h_sig_UL = new TH1F("h_sig_UL", "h_sig_UL", 1000, -1., 1.);
TH1F* h_bkg_UL = new TH1F("h_bkg_UL", "h_bkg_UL", 1000, -1., 1.);

// Total histograms
TH1F* h_sig_tth_total = new TH1F("h_sig_tth_total", "h_sig_tth_total", 1000, -1., 1.);
TH1F* h_bkg_tth_total = new TH1F("h_bkg_tth_total", "h_bkg_tth_total", 1000, -1., 1.);

TH1F* h_sig_ttw_total = new TH1F("h_sig_ttw_total", "h_sig_ttw_total", 1000, -1., 1.);
TH1F* h_bkg_ttw_total = new TH1F("h_bkg_ttw_total", "h_bkg_ttw_total", 1000, -1., 1.);

TH1F* h_sigttw_vetoLeak_total = new TH1F("h_sigttw_vetoLeak_total", "h_sigttw_vetoLeak_total", 1000, -1., 1.);
TH1F* h_bkgttw_vetoLeak_total = new TH1F("h_bkgttw_vetoLeak_total", "h_bkgttw_vetoLeak_total", 1000, -1., 1.);

TH1F* h_sig_UL_total = new TH1F("h_sig_UL_total", "h_sig_UL_total", 1000, -1., 1.);
TH1F* h_bkg_UL_total = new TH1F("h_bkg_UL_total", "h_bkg_UL_total", 1000, -1., 1.);

#include <sstream>

template <typename T>
std::string to_string_with_precision(const T a_value, const int n = 6)
{
  std::ostringstream out;
  out.precision(n);
  out << std::fixed << a_value;
  return out.str();
}

TGraph ROC_curve(TH1F* h_sig, TH1F* h_bkg, TString name){

  float integral_sig = 0.;
  float integral_bkg = 0.;
  
  integral_sig = h_sig -> Integral();
  integral_bkg = h_bkg -> Integral();
  
  //cout << h_sig -> Integral() << endl;
  //cout << h_bkg -> Integral() << endl;

  float eff_sig = 0.;
  float eff_bkg = 0.;
  
  // ROC Curve
  TGraph ROC;
  int nbins = 1001;
  for (int b = 0; b < nbins; ++b){
    float S = h_sig -> Integral(b, nbins);
    float B = h_bkg -> Integral(b, nbins);
    eff_sig = S / integral_sig;
    eff_bkg = B / integral_bkg;
    //ROC.SetPoint(b, 1 - eff_bkg, eff_sig);
    ROC.SetPoint(b, eff_bkg, eff_sig);
  }
  ROC.SetName(name);
  return ROC;
}

TGraph Significance_curve(TH1F* h_sig, TH1F* h_bkg, TString name, int kind = 0){
  // Kind:
  // - 0 = S/B 
  // - 1 = S/sqrt(B) 
  // - 2 = S/sqrt(S+B) 

  float integral_sig = 0.;
  float integral_bkg = 0.;
  
  integral_sig = h_sig -> Integral();
  integral_bkg = h_bkg -> Integral();
  
  cout << h_sig -> Integral() << endl;
  cout << h_bkg -> Integral() << endl;

  float eff_sig = 0.;
  float eff_bkg = 0.;
  
  // Significance Curve
  TGraph Significance;
  int nbins = 1001;
  for (int b = 0; b < nbins; ++b){
    float S = h_sig -> Integral(b, nbins);
    float B = h_bkg -> Integral(b, nbins);
    eff_sig = S / integral_sig;
    eff_bkg = B / integral_bkg;
    //Significance.SetPoint(b, 1 - eff_bkg, eff_sig);
    float x_value = -1 + b*0.002;
    if (B != 0)
      if (kind == 0)
	Significance.SetPoint(b, x_value, S / B);
      else if (kind == 1)
	Significance.SetPoint(b, x_value, S / sqrt(B));
      else if (kind == 2)
	Significance.SetPoint(b, x_value, S / sqrt(S + B));
      else{
	cout << "I don't know this kind of significance" << endl;
	break;
	return -1;
      }
    else
      Significance.SetPoint(b, x_value, 0.);
  }
  Significance.SetName(name);
  return Significance;
}
// Returns the fake rate of a given MVA and WP.
// Use it to get the fake rate of the legacy MVA with its WP. 
// Requires h_bkg to be a TH1F("h", "h", 1000, -1., 1.)
float get_fake_rate(TH1F* h_bkg, float wp){

  int n_bins = 1000;

  // bin_number = (WP - x_min) / bin_width
  float wp_to_bin = (wp + 1) / 0.002;

  float bkg_eff = h_bkg -> Integral(wp_to_bin, n_bins+1) /  h_bkg -> Integral();

  return bkg_eff;
}


// Returns the signal efficiency of a given MVA and WP.
// Use it to get the signal efficiency of the legacy MVA with its WP. 
// Requires h_bkg to be a TH1F("h", "h", 1000, -1., 1.)
float get_signal_eff(TH1F* h_sig, float wp){

  int n_bins = 1000;

  // bin_number = (WP - x_min) / bin_width
  float wp_to_bin = (wp + 1) / 0.002;

  float sig_eff = h_sig -> Integral(wp_to_bin, n_bins+1) /  h_sig -> Integral();

  return sig_eff;
}

// Returns the WP corresponding to a given fake rate for a given MVA.
// Use it to get the WP of the UL MVA providing a given fake rate.
// Requires h_bkg to be a TH1F("h", "h", 1000, -1., 1.)
float get_WP(TH1F* h_bkg, float fr){
  
  int n_bins = 1001;
  
  float bkg_integral = h_bkg -> Integral();
  int correct_bin = 0;
  
  for (int i = 0; i < n_bins; ++i){
    
    float current_fr = h_bkg -> Integral(i, n_bins) / bkg_integral;
    if (current_fr < fr){
      correct_bin = i;
      break;
    }
  }
  return (-1 + correct_bin*0.002);
}

// Returns the WP corresponding to a given yield of fake leptons for a given MVA.
// Use it to get the WP of the UL MVA providing a given yield of fake leptons.
// Requires gr_bkg to be a TGraph with x-axis in (-1, +1)
float get_gr_WP(TGraph gr_bkg, float yields){
  
  int n_points = 1001;
  
  int WP = 0;
  int correct_WP = 0;

  for (int i = 0; i < n_points; ++i){
    
    float current_yield = gr_bkg.Eval(-1. + (i/500.));
    if (current_yield <= yields){
      correct_WP = i;
      break;
    }
  }
  return (-1 + correct_WP*0.002);
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
  readers_names[2] = "/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/macros/leptons/Run3/dataset/weights/mu_ttw_vetoLeak_BDTG.weights.xml";


  reader->BookMVA("BDTG_tth", readers_names[0]);
  reader->BookMVA("BDTG_ttw", readers_names[1]);
  reader->BookMVA("BDTGttw_vetoLeak", readers_names[2]);


  cout << "MVAs booked by the reader" << endl;
  
  float mvaTTH_[40];
  float miniPFRelIso_all_[40];
  char  genPartFlav_[40];
  bool  isGlobal_[40];
  bool  isTracker_[40];
  bool  isPFcand_[40];
  bool  looseId_[40];
  bool  mediumId_[40];
  float dxy_[40];
  float dz_[40];

  float pt_[40];
  float eta_[40];
  float pfRelIso03_all_[40];
  float miniPFRelIso_chg_[40];
  float miniRelIsoAll_[40];
  char  jetNDauCharged_[40];
  float jetPtRelv2_[40];
  float jetPtRatio_[40];
  float jetBTagDeepFlavB_[40];
  float sip3d_[40];
  float segmentComp_[40];
  float jetRelIso_[40];
  int   jetIdx_[40];

  uint  nMuon;
  uint  event_;
  int   charge_[40];

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
  t->SetBranchAddress("nMuon",                 &nMuon);
  t->SetBranchAddress("event",                 &event_);
  t->SetBranchAddress("Muon_charge",           &charge_);

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

    if (nMuon != 1 || nMuon > 10){ continue;}
    for (int i = 0; i < nMuon; ++i){
      event_ = ievt;
      mvaTTH = mvaTTH_[i];
      miniPFRelIso_all = miniPFRelIso_all_[i];
      genPartFlav = genPartFlav_[i];
      isGlobal = isGlobal_[i];
      isTracker = isTracker_[i];
      isPFcand = isPFcand_[i];
      looseId = looseId_[i];
      mediumId = mediumId_[i];
      dxy = dxy_[i];
      dz = dz_[i];
      
      pt = pt_[i];
      eta = eta_[i];
      pfRelIso03_all = pfRelIso03_all_[i];
      miniPFRelIso_chg = miniPFRelIso_chg_[i];
      miniRelIsoNeutral = pfRelIso03_all_[i] - miniPFRelIso_chg_[i];
      jetNDauCharged = jetNDauCharged_[i];
      jetPtRelv2 = jetPtRelv2_[i];
      jetPtRatio = min(1. / (1. + jetRelIso_[i]), 1.5);
      jetBTagDeepFlavB = jetIdx_[i] > -1 ? jetBTagDeepFlavB_[jetIdx_[i]] : 0;
      sip3d = sip3d_[i];
      log_dxy = log(abs(dxy));
      log_dz = log(abs(dz));
      segmentComp = segmentComp_[i];
      if (jetIdx_[i] > 40) continue; // Sometimes the branch appears not to be filled and it crashes 

      // Evaluate BDT scores values
      float BDTG_tth;
      float BDTG_ttw;
      float BDTGttw_vetoLeak;

      BDTG_tth = reader->EvaluateMVA("BDTG_tth");
      BDTG_ttw = reader->EvaluateMVA("BDTG_ttw");
      BDTGttw_vetoLeak  = reader->EvaluateMVA("BDTGttw_vetoLeak");
      
      int passttwpresel = (isGlobal == 1 || isTracker == 1) && isPFcand && mediumId;
      // Fill total signal histograms
      if (genPartFlav == 1 || genPartFlav == 15){
        h_sig_tth_total          -> Fill(BDTG_tth);
        h_sig_ttw_total          -> Fill((-1)*(passttwpresel == 0) + (passttwpresel == 1)*BDTG_ttw);
        h_sigttw_vetoLeak_total  -> Fill((-1)*(passttwpresel == 0)  + (passttwpresel == 1)*BDTGttw_vetoLeak);
        h_sig_UL_total           -> Fill(mvaTTH); 
      }

      // Fill total background histograms
      if (genPartFlav != 1 && genPartFlav != 15){
        h_bkg_tth_total          -> Fill(BDTG_tth);
        h_bkg_ttw_total          -> Fill((-1)*(passttwpresel == 0) + (passttwpresel == 1)*BDTG_ttw);
        h_bkgttw_vetoLeak_total  -> Fill((-1)*(passttwpresel  == 0) + (passttwpresel  == 1)*BDTGttw_vetoLeak);
        h_bkg_UL_total           -> Fill(mvaTTH); 
      }

      // Preselections: defined as the loosest join of both preselections
      // Common
      if (miniPFRelIso_all > 0.4)          continue;
      if (sip3d > 8)                       continue;
      if (fabs(dxy) > 0.05)                continue;
      if (fabs(dz) > 0.1)                  continue;
      if (pt < 10)                         continue; 
      if (fabs(eta) > 2.4)                 continue;
      if (looseId != 1)                    continue;
      //if (isGlobal != 1 && isTracker != 1) continue;
      //if (isPFcand != 1)                   continue;
      
      // Fill signal histograms
      if (genPartFlav == 1 || genPartFlav == 15){
        h_sig_tth          -> Fill(BDTG_tth);
        h_sig_ttw          -> Fill((-1)*(passttwpresel == 0)  + (passttwpresel == 1)*BDTG_ttw);
        h_sigttw_vetoLeak  -> Fill((-1)*(passttwpresel == 0)  + (passttwpresel == 1)*BDTGttw_vetoLeak);
        h_sig_UL           -> Fill(mvaTTH); 
      }

      // Fill background histograms
      if (genPartFlav != 1 && genPartFlav != 15){
        h_bkg_tth          -> Fill(BDTG_tth);
        h_bkg_ttw          -> Fill((-1)*(passttwpresel == 0) + (passttwpresel == 1)*BDTG_ttw);
        h_bkgttw_vetoLeak  -> Fill((-1)*(passttwpresel  == 0) + (passttwpresel  == 1)*BDTGttw_vetoLeak);
        h_bkg_UL           -> Fill(mvaTTH); 
      }
    }
    
    
  }
  
  cout << "Integrals in nanoAOD v9:"   << endl;

  cout << "h_bkg_ttw_total: "          << h_bkg_ttw_total         -> Integral() << endl;
  cout << "h_bkg_tth_total: "          << h_bkg_tth_total         -> Integral() << endl;
  cout << "h_bkgttw_vetoLeak_total: "  << h_bkgttw_vetoLeak_total -> Integral() << endl;
  cout << "h_bkg_UL_total: "           << h_bkg_UL_total          -> Integral() << endl;
  
  cout << "h_sig_ttw: "                << h_sig_ttw               -> Integral() << endl;
  cout << "h_sig_tth: "                << h_sig_tth               -> Integral() << endl;
  cout << "h_sigttw_vetoLeak: "        << h_sigttw_vetoLeak       -> Integral() << endl;
  cout << "h_sig_UL: "                 << h_sig_UL                -> Integral() << endl;

  // Now save histograms
  TString out_rootfile_name = "rootfile_ROC_mu_" + year + ".root";

  TFile* f_out = new TFile(out_rootfile_name, "recreate");
  f_out                   -> cd();
  // signals
  h_sig_UL                -> Write();
  h_sig_ttw               -> Write();
  h_sig_tth               -> Write();
  h_sigttw_vetoLeak       -> Write();
  // backgrounds
  h_bkg_UL                -> Write();
  h_bkg_ttw               -> Write();
  h_bkg_tth               -> Write();
  h_bkgttw_vetoLeak       -> Write();
  // total signals
  h_sig_ttw_total         -> Write();
  h_sig_tth_total         -> Write();
  h_sigttw_vetoLeak_total -> Write();
  h_sig_UL_total          -> Write();
  // total backgrounds
  h_bkg_ttw_total         -> Write();
  h_bkg_tth_total         -> Write();
  h_bkgttw_vetoLeak_total -> Write();
  h_bkg_UL_total          -> Write();
  f_out                   -> Close();
}

TGraph Fake_leptons_yields(TH1F* h_bkg, TH1F* h_tot_bkg, TString name){

  float integral_tot_bkg = 0.;
  float integral_bkg     = 0.;
  
  integral_bkg     = h_bkg     -> Integral();
  
  integral_tot_bkg = h_tot_bkg -> Integral();

  // Number of fake leptons is:
  // N(recontructed non-prompt leptons) x FR(loose|reco) x FR(tight|loose) = 
  // integral_tot_bkg x (integral_bkg / integral_tot_bkg) x (Bkg_eff vs BDT cut) =
  // integral_bkg x (Bkg_eff vs BDT cut)

  float eff_bkg = 0.;
  
  // Actual figure of merit
  TGraph yields;
  int nbins = 1001;
  for (int b = 0; b < nbins; ++b){
    float B = h_bkg -> Integral(b, nbins);
    eff_bkg = B / integral_bkg;
    //ROC.SetPoint(b, 1 - eff_bkg, eff_sig);
    yields.SetPoint(b, -1. + (b / 500.), eff_bkg);
  }
  yields.SetName(name);
  return yields;
}

Double_t* GetRebining(TH1* h_signal, TH1* h_background, int nQuantiles) {
    // Calculate the S/(S+B) values for each bin

    int nBins = h_signal->GetNbinsX();
    Double_t *sOverSB;
    for (int i = 1; i <= nQuantiles; i++) {
        sOverSB[i] = Double_t(i+1)/nQuantiles;
    }

    // Calculate the quantile boundaries
    cout << "hola" << endl;
    Double_t *quantileBoundaries;
    h_background->GetQuantiles(nQuantiles, quantileBoundaries, sOverSB);
    cout << "baba" << endl;

    cout << h_signal->GetName() << endl;
    for (int i = 0; i < nQuantiles; i++){
      cout <<  i << " bin " << i << " val: " << quantileBoundaries[i] << endl;
    }

    return quantileBoundaries;
}

void do_plotting(TString file_name,
		 TString era,
     TString object){
  gStyle->SetOptStat(false);
  cout << "Opening rootfile " << file_name << endl;

  TFile* f_in    = new TFile(file_name);

  TH1F* h_sig_UL          = (TH1F*) f_in -> Get("h_sig_UL");
  TH1F* h_sig_tth         = (TH1F*) f_in -> Get("h_sig_tth");
  TH1F* h_sig_ttw         = (TH1F*) f_in -> Get("h_sig_ttw");
  TH1F* h_sigttw_vetoLeak = (TH1F*) f_in -> Get("h_sigttw_vetoLeak");

  TH1F* h_bkg_UL          = (TH1F*) f_in -> Get("h_bkg_UL");
  TH1F* h_bkg_tth         = (TH1F*) f_in -> Get("h_bkg_tth");
  TH1F* h_bkg_ttw         = (TH1F*) f_in -> Get("h_bkg_ttw");
  TH1F* h_bkgttw_vetoLeak = (TH1F*) f_in -> Get("h_bkgttw_vetoLeak");

  TH1F* h_sig_UL_total          = (TH1F*) f_in -> Get("h_sig_UL_total");
  TH1F* h_sig_tth_total         = (TH1F*) f_in -> Get("h_sig_tth_total");
  TH1F* h_sig_ttw_total         = (TH1F*) f_in -> Get("h_sig_ttw_total");
  TH1F* h_sigttw_vetoLeak_total = (TH1F*) f_in -> Get("h_sigttw_vetoLeak_total");

  TH1F* h_bkg_UL_total          = (TH1F*) f_in -> Get("h_bkg_UL_total");
  TH1F* h_bkg_tth_total         = (TH1F*) f_in -> Get("h_bkg_tth_total");
  TH1F* h_bkg_ttw_total         = (TH1F*) f_in -> Get("h_bkg_ttw_total");
  TH1F* h_bkgttw_vetoLeak_total = (TH1F*) f_in -> Get("h_bkgttw_vetoLeak_total");

  // Get number of fake electrons distributions
  TGraph gr_UL_yields;
  gr_UL_yields = Fake_leptons_yields(h_bkg_UL, h_bkg_UL_total, "fake yields UL");

  gr_UL_yields.SetLineColor(kBlack);
  gr_UL_yields.SetLineWidth(2);
  
  TGraph gr_ttw_yields;
  gr_ttw_yields = Fake_leptons_yields(h_bkg_ttw, h_bkg_ttw_total, "fake yields ttW");
  gr_ttw_yields.SetLineColor(kRed);
  gr_ttw_yields.SetLineWidth(2);
  
  TGraph gr_tth_yields;
  gr_tth_yields = Fake_leptons_yields(h_bkg_tth, h_bkg_tth_total, "fake yields tth");
  gr_tth_yields.SetLineColor(kAzure+7);
  gr_tth_yields.SetLineWidth(2);

  TGraph gr_ttwveto_yields;
  gr_ttwveto_yields = Fake_leptons_yields(h_bkgttw_vetoLeak, h_bkgttw_vetoLeak_total, "fake yields ttW (with veto EE)");
  gr_ttwveto_yields.SetLineColor(kOrange);
  gr_ttwveto_yields.SetLineWidth(2);

  //cout << gr_UL_yields.Integral() << endl;
  // Get number of fake electrons with legacy configuration
  float UL_fake_leptons = gr_UL_yields.Eval(0.8);
  //cout << "Number of fake leptons with UL configuration (unweighted MC events) = " << UL_fake_leptons << endl;
  TGraph gr_UL_yield;
  gr_UL_yield.SetPoint(1, 0.8, UL_fake_leptons);
  gr_UL_yield.SetMarkerStyle(20);
  gr_UL_yield.SetMarkerSize(2);
  gr_UL_yield.SetMarkerColor(kBlack);
  float yield_UL_signal_eff = get_signal_eff(h_sig_UL, 0.8);

  // Get working point giving the same background yields as legacy cfg
  float yield_ttw = get_gr_WP(gr_ttw_yields, UL_fake_leptons);
  TGraph gr_yield_ttw;
  gr_yield_ttw.SetPoint(0, yield_ttw, gr_ttw_yields.Eval(yield_ttw));  
  gr_yield_ttw.SetMarkerSize(2);
  gr_yield_ttw.SetMarkerStyle(20);
  gr_yield_ttw.SetMarkerColor(kRed);
  float yield_ttw_signal_eff = get_signal_eff(h_sig_ttw, yield_ttw);

  float yield_tth = get_gr_WP(gr_tth_yields, UL_fake_leptons);
  TGraph gr_yield_tth;
  gr_yield_tth.SetPoint(0, yield_tth, gr_tth_yields.Eval(yield_tth));  
  gr_yield_tth.SetMarkerSize(2);
  gr_yield_tth.SetMarkerStyle(20);
  gr_yield_tth.SetMarkerColor(kAzure+7);
  float yield_tth_signal_eff = get_signal_eff(h_sig_tth, yield_tth);
    
  float yield_ttwveto = get_gr_WP(gr_ttwveto_yields, UL_fake_leptons);
  TGraph gr_yield_ttwveto;
  gr_yield_ttwveto.SetPoint(0, yield_ttwveto, gr_ttwveto_yields.Eval(yield_ttwveto));  
  gr_yield_ttwveto.SetMarkerSize(2);
  gr_yield_ttwveto.SetMarkerStyle(20);
  gr_yield_ttwveto.SetMarkerColor(kOrange);
  float yield_ttwveto_signal_eff = get_signal_eff(h_sigttw_vetoLeak, yield_ttwveto);
    
  // Prepare legend
  TString yield_UL_leg = "WP = 0.8 - Fake lep. = " + to_string_with_precision(UL_fake_leptons, 6) + " - Sig. Eff. = " + to_string_with_precision(yield_UL_signal_eff, 2); 
  TString yield_ttW_leg = "WP = " + to_string_with_precision(yield_ttw, 3) + " - Fake lep. = " + to_string_with_precision(gr_ttw_yields.Eval(yield_ttw), 6) + " - Sig. Eff. = " + to_string_with_precision(yield_ttw_signal_eff, 2); 
  TString yield_ttH_leg = "WP = " + to_string_with_precision(yield_tth, 3) + " - Fake lep. = " + to_string_with_precision(gr_tth_yields.Eval(yield_tth), 6) + " - Sig. Eff. = " + to_string_with_precision(yield_tth_signal_eff, 2); 
  TString yield_ttwveto_leg = "WP = " + to_string_with_precision(yield_ttwveto, 3) + " - Fake lep. = " + to_string_with_precision(gr_ttwveto_yields.Eval(yield_ttwveto), 6) + " - Sig. Eff. = " + to_string_with_precision(yield_ttwveto_signal_eff, 2); 

  TLegend* leg = new TLegend(0.19, 0.15, 0.69, 0.45);
  leg->SetLineColor(0);
  leg->AddEntry(&gr_UL_yields, "mvaTTH",   "l");  
  leg->AddEntry((TObject*)0,    yield_UL_leg, "");
  leg->AddEntry(&gr_ttw_yields,    "ttW-like ", "l");  
  leg->AddEntry((TObject*)0,    yield_ttW_leg, "");
  leg->AddEntry(&gr_tth_yields,    "ttH-like ", "l"); 
  leg->AddEntry((TObject*)0,    yield_ttH_leg, "");

  if (object.Contains("el")){
    leg->AddEntry(&gr_ttwveto_yields,    "ttW-like (veto EE)", "l");  
    leg->AddEntry((TObject*)0,  yield_ttwveto_leg  , "");
  }

  TCanvas* c = new TCanvas("c", "c", 600, 600);
  c -> cd();
  TPad* pad = new TPad("", "", 0.0, 0.0, 1.0, 1.0);
  pad -> Draw();
  pad -> SetBottomMargin(0.12);
  pad -> SetLeftMargin(0.12);
  pad -> cd();
  pad -> SetLogy();
  pad -> Update();
  gr_UL_yields.GetXaxis()->SetRangeUser(-1., 1.);
  gr_UL_yields.SetTitle("Fake " + object + " Yields vs BDT Discriminant");
  gr_UL_yields.GetXaxis()->SetTitle("BDT discriminant");
  gr_UL_yields.GetYaxis()->SetTitle("Fake " +  object + " yields");
  gr_UL_yields.Draw("AL");
  gr_tth_yields.Draw("L,same");
  gr_ttw_yields.Draw("L,same");
  if (object.Contains("el")){
    gr_ttwveto_yields.Draw("P,same");
  }
  gr_UL_yield.Draw("P,same");
  gr_yield_tth.Draw("P,same");
  gr_yield_ttw.Draw("P,same");
  if (object.Contains("el")){
    gr_yield_ttwveto.Draw("P,same");
  }
  leg -> Draw("same");
  
  TString c_name;
  if (era == "2022EE")
    c_name = "Fake_" + object + "_yields_2022EE";


  c -> Print(c_name + ".png");
  c -> Print(c_name + ".pdf");

  
  // Get legacy MVA fake rate and the corresponding UL working point, fake rate, and signal efficiency
  float UL_fake_rate   = get_fake_rate(h_bkg_UL,     0.8);
  float UL_signal_eff  = get_signal_eff(h_sig_UL,    0.8);

  float ttw_wp          = get_WP(h_bkg_ttw,  UL_fake_rate);
  float ttw_fake_rate   = get_fake_rate(h_bkg_ttw,  ttw_wp);
  float ttw_signal_eff  = get_signal_eff(h_sig_ttw, ttw_wp);
			   
  float ttwveto_wp          = get_WP(h_bkgttw_vetoLeak,  UL_fake_rate);
  float ttwveto_fake_rate   = get_fake_rate(h_bkgttw_vetoLeak,  ttwveto_wp);
  float ttwveto_signal_eff  = get_signal_eff(h_sigttw_vetoLeak, ttwveto_wp);
	
  float tth_wp          = get_WP(h_bkg_tth,  UL_fake_rate);
  float tth_fake_rate   = get_fake_rate(h_bkg_tth,  tth_wp);
  float tth_signal_eff  = get_signal_eff(h_sig_tth, tth_wp);

  TGraph gr_ul_wp;
  gr_ul_wp.SetPoint(0, UL_fake_rate, UL_signal_eff);  
  gr_ul_wp.SetMarkerSize(2);
  gr_ul_wp.SetMarkerStyle(20);
  gr_ul_wp.SetMarkerColor(kBlack);
  
  TGraph gr_ttw_wp;
  gr_ttw_wp.SetPoint(0, ttw_fake_rate, ttw_signal_eff);  
  gr_ttw_wp.SetMarkerSize(2);
  gr_ttw_wp.SetMarkerStyle(20);
  gr_ttw_wp.SetMarkerColor(kRed);

  TGraph gr_ttwveto_wp;
  gr_ttwveto_wp.SetPoint(0, ttwveto_fake_rate, ttwveto_signal_eff);  
  gr_ttwveto_wp.SetMarkerSize(2);
  gr_ttwveto_wp.SetMarkerStyle(20);
  gr_ttwveto_wp.SetMarkerColor(kOrange);

  TGraph gr_tth_wp;
  gr_tth_wp.SetPoint(0, tth_fake_rate, tth_signal_eff);  
  gr_tth_wp.SetMarkerSize(2);
  gr_tth_wp.SetMarkerStyle(20);
  gr_tth_wp.SetMarkerColor(kAzure+7);

  //cout << "With legacy WP 0.8, we get a signal efficiency of " << UL_signal_eff << " and a fake rate of " << UL_fake_rate << endl;
  //cout << "ttH: The corresponding WP with ttH MVA is: " << tth_wp << ", giving a signal efficiency of " << tth_signal_eff << " and a fake rate of " << tth_fake_rate << endl; 
  //cout << "ttW: The corresponding WP with ttW MVA is: " << ttw_wp << ", giving a signal efficiency of " << ttw_signal_eff << " and a fake rate of " << ttw_fake_rate << endl; 
  //cout << "ttW (veto EE): The corresponding WP with ttH MVA is: " << ttwveto_wp << ", giving a signal efficiency of " << ttwveto_signal_eff << " and a fake rate of " << ttwveto_fake_rate << endl; 

  // Now prepare ROC curves...
  TGraph ROC_ttW    = ROC_curve(h_sig_ttw,    h_bkg_ttw,    "ttW-like");
  TGraph ROC_ttWveto = ROC_curve(h_sigttw_vetoLeak,    h_bkgttw_vetoLeak,    "ttW-like (veto EE)");
  TGraph ROC_ttH    = ROC_curve(h_sig_tth,    h_bkg_tth,    "ttH-like");
  TGraph ROC_legacy = ROC_curve(h_sig_UL, h_bkg_UL, "UL");
  
  // cout << "Printing" << endl;

  // Cosmetics
  ROC_legacy.SetLineColor(kBlack);
  ROC_ttW.SetLineColor(kRed);
  ROC_ttWveto.SetLineColor(kOrange);
  ROC_ttH.SetLineColor(kAzure+7);

  ROC_legacy.SetLineWidth(2);
  ROC_ttW.SetLineWidth(2);
  ROC_ttWveto.SetLineWidth(2);
  ROC_ttH.SetLineWidth(2);

  TString UL_leg = "WP = 0.8 - FR = " + to_string(UL_fake_rate) + " - Sig. Eff. = " + to_string_with_precision(UL_signal_eff, 2); 
  TString ttW_leg = "WP = " + to_string_with_precision(ttw_wp, 3) + " - FR = " + to_string_with_precision(ttw_fake_rate) + " - Sig. Eff. = " + to_string_with_precision(ttw_signal_eff, 2); 
  TString ttWveto_leg = "WP = " + to_string_with_precision(ttwveto_wp, 3) + " - FR = " + to_string_with_precision(ttwveto_fake_rate) + " - Sig. Eff. = " + to_string_with_precision(ttwveto_signal_eff, 2); 
  TString ttH_leg = "WP = " + to_string_with_precision(tth_wp, 3) + " - FR = " + to_string_with_precision(tth_fake_rate) + " - Sig. Eff. = " + to_string_with_precision(tth_signal_eff, 2); 
  TLegend* leg1 = new TLegend(0.39, 0.15, 0.89, 0.45);
  leg1->SetLineColor(0);
  leg1->AddEntry(&ROC_legacy,   "mvaTTH",   "l");  
  leg1->AddEntry((TObject*)0,   UL_leg, "");
  leg1->AddEntry(&ROC_ttW,      "ttW-like", "l");  
  leg1->AddEntry((TObject*)0,   ttW_leg, "");
  leg1->AddEntry(&ROC_ttH,      "ttH-like", "l"); 
  leg1->AddEntry((TObject*)0,   ttH_leg, "");
  if (object.Contains("el")){
    leg1->AddEntry(&ROC_ttWveto,      "ttW-like (veto EE)", "l"); 
    leg1->AddEntry((TObject*)0,   ttWveto_leg, "");
  }
  TCanvas* c1 = new TCanvas("c1", "c1", 600, 600);
  c1 -> cd();
  // if (file[0].Contains("TTGamma") == false)
  TPad* pad1 = new TPad("", "", 0.0, 0.0, 1.0, 1.0);
  pad1 -> Draw();
  pad1 -> SetBottomMargin(0.12);
  pad1 -> SetLeftMargin(0.1);
  pad1 -> cd();
  ROC_ttH.Draw("AL");

  ROC_ttH.SetTitle("ROC Curve for " + object + " MVA");
  pad1 -> SetLogx();
  pad1 -> Update();
  
  ROC_ttH.GetXaxis()->SetRangeUser(0.000001, 1.0);
  ROC_ttH.GetYaxis()->SetRangeUser(0.0, 1.0);
  
  ROC_ttH.GetXaxis()->SetTitleOffset(1.5);
  ROC_ttH.GetXaxis()->SetTitle("Background Efficiency");
  ROC_ttH.GetYaxis()->SetTitle("Signal Efficiency");
  ROC_ttW.Draw("L,same");
  ROC_legacy.Draw("L,same");
  if (object.Contains("el")){
    ROC_ttWveto.Draw("L,same");
  }
  gr_ul_wp.Draw("P,same");
  gr_ttw_wp.Draw("P,same");
  gr_tth_wp.Draw("P,same");
  if (object.Contains("el")){
    gr_ttwveto_wp.Draw("P,same");
  }
  leg1->Draw();
  
  TString canvas_name;

  if (era == "2022EE")
    canvas_name = "ROC_" + object + "_2022EE";

  c1 -> Print(canvas_name + ".png");
  c1 -> Print(canvas_name + ".pdf");
  // ... and significance curves  
  TGraph Significance_ttW    = Significance_curve(h_sig_ttw,    h_bkg_ttw,    "ttW-like", 2);
  TGraph Significance_ttWveto = Significance_curve(h_sigttw_vetoLeak,    h_bkgttw_vetoLeak,    "ttW-like (veto EE)", 2);
  TGraph Significance_ttH    = Significance_curve(h_sig_tth,    h_bkg_tth,    "ttH-like", 2);
  TGraph Significance_legacy = Significance_curve(h_sig_UL, h_bkg_UL, "UL", 2);

  // Cosmetics
  Significance_legacy.SetLineColor(kBlack);
  Significance_ttW.SetLineColor(kRed);
  Significance_ttWveto.SetLineColor(kOrange);
  Significance_ttH.SetLineColor(kAzure+7);

  Significance_legacy.SetLineWidth(2);
  Significance_ttW.SetLineWidth(2);
  Significance_ttWveto.SetLineWidth(2);
  Significance_ttH.SetLineWidth(2);

  TLegend* leg2 = new TLegend(0.12, 0.39, 0.55, 0.59);
  leg2->SetLineColor(0);
  leg2->AddEntry(&Significance_legacy, "mvaTTH",   "l");  
  leg2->AddEntry(&Significance_ttW,    "ttW-like", "l");  

  leg2->AddEntry(&Significance_ttH,    "ttH-like", "l"); 
  if (object.Contains("el")){
    leg2->AddEntry(&Significance_ttWveto, "ttW-like (veto EE)", "l"); 
  }
  TCanvas* c2 = new TCanvas("c2", "c2", 600, 600);
  c2 -> cd();
  TPad* pad2 = new TPad("", "", 0.0, 0.0, 1.0, 1.0);
  pad2 -> Draw();
  pad2 -> SetBottomMargin(0.12);
  pad2 -> SetLeftMargin(0.1);
  pad2 -> cd();
  Significance_ttH.Draw("AL");
  Significance_ttH.SetTitle("Significance (S/sqrt(S+B) Curves for " + object + " MVA");
  
  Significance_ttH.GetXaxis()->SetTitleOffset(1.5);
  Significance_ttH.GetXaxis()->SetRangeUser(-1., 1.);

  Significance_ttH.GetXaxis()->SetTitle("Lepton MVA Cut");
  Significance_ttH.GetYaxis()->SetTitle("Significance = S/sqrt(S+B)");
  Significance_ttW.Draw("L,same");
  Significance_legacy.Draw("L,same");
  if (object.Contains("el")){
    Significance_ttWveto.Draw("L,same");
  }
  leg2->Draw();

  if (era == "2022EE")
    canvas_name = "Significance_"+ object + "_2022";

  c2 -> Print(canvas_name + ".png");
  c2 -> Print(canvas_name + ".pdf");
  
  // BDT discriminants
  /*
  // rebin histograms
  h_sig_UL->Rebin(50);
  h_sig_ttw->Rebin(50);
  h_sig_tth->Rebin(50);
  h_sigttw_vetoLeak->Rebin(50);
  // bkg
  h_bkg_UL->Rebin(50);
  h_bkg_ttw->Rebin(50);
  h_bkg_tth->Rebin(50);
  h_bkgttw_vetoLeak->Rebin(50);
  */
  
  int nQuantiles = 10;
  Double_t* bining_ul = GetRebining(h_sig_UL, h_bkg_UL, nQuantiles);
  // ttH
  Double_t* bining_tth = GetRebining(h_sig_tth, h_bkg_tth, nQuantiles);
  // ttW
  Double_t* bining_ttw = GetRebining(h_sig_ttw, h_bkg_ttw, nQuantiles);
  // ttW veto
  Double_t* bining_ttwVeto = GetRebining(h_sigttw_vetoLeak, h_bkgttw_vetoLeak, nQuantiles);
  
  for (int i = 0; i < nQuantiles; i++){
    cout <<  i << " ul " << bining_ul[i] << endl;
    cout <<  i << " ttH " << bining_tth[i] << endl;
    cout <<  i << " ttw " << bining_ttw[i] << endl;
    cout <<  i << " ttwVeto " << bining_ttwVeto[i] << endl;
  }
  
  // Now rebin the histograms
  /*
  h_sig_UL->Rebin(nQuantiles, "h_signal_UL", bining_ul);
  h_sig_tth->Rebin(nQuantiles, "h_signal_ttH", bining_tth);
  h_sig_ttw->Rebin(nQuantiles, "h_signal_ttW", bining_ttw);
  h_sigttw_vetoLeak->Rebin(nQuantiles, "h_signal_ttWveto", bining_ttwVeto);

  h_bkg_UL->Rebin(nQuantiles, "h_bkg_UL", bining_ul);
  h_bkg_tth->Rebin(nQuantiles, "h_bkg_ttH", bining_tth);
  h_bkg_ttw->Rebin(nQuantiles, "h_bkg_ttW", bining_ttw);
  h_bkgttw_vetoLeak->Rebin(nQuantiles, "h_bkg_ttWveto", bining_ttwVeto);
  */
  // BDT discriminants
  TCanvas* c0 = new TCanvas("c0", "c0", 600, 600);
  TLegend* leg0 = new TLegend(0.25, 0.6, 0.75, 0.75);
  TLegend* leg00 = new TLegend(0.25, 0.80, 0.75, 0.85);

  leg00->SetLineColor(0);
  leg00->AddEntry(h_sig_UL, "sig",   "l");
  leg00->AddEntry(h_bkg_UL, "bkg",   "l");
  leg00->SetNColumns(2);

  leg0->SetLineColor(0);
  leg0->AddEntry(h_sig_UL, "mvaTTH",   "l");
  leg0->AddEntry(h_sig_ttw,    "ttW-like ", "l");  
  leg0->AddEntry(h_sig_tth,    "ttH-like ", "l");
  if (object.Contains("el")){
    leg0->AddEntry(h_sigttw_vetoLeak,    "ttW-like (veto EE)", "l");  
  }
  leg0->SetNColumns(2);
  c0 -> cd();
  TPad* pad0 = new TPad("", "", 0.0, 0.0, 1.0, 1.0);
  pad0 -> Draw();
  pad0 -> SetBottomMargin(0.12);
  pad0 -> SetLeftMargin(0.12);
  pad0 -> cd();
  pad0 -> SetLogy();
  pad0 -> Update();
  h_sig_UL->GetXaxis()->SetRangeUser(-1., 1.);
  h_sig_UL->GetYaxis()->SetRangeUser(0., 2.5);
  h_sig_UL->SetTitle( object + " Yields vs BDT Discriminant");
  h_sig_UL->GetXaxis()->SetTitle("BDT discriminant");
  h_sig_UL->GetYaxis()->SetTitle(" Normalized yields");

  h_sig_UL->Scale(1/h_sig_UL->Integral());
  h_sig_ttw->Scale(1/h_sig_ttw->Integral());
  h_sig_tth->Scale(1/h_sig_tth->Integral());
  h_sigttw_vetoLeak->Scale(1/h_sigttw_vetoLeak->Integral());
  // bkg
  h_bkg_UL->Scale(1/h_bkg_UL->Integral());
  h_bkg_ttw->Scale(1/h_bkg_ttw->Integral());
  h_bkg_tth->Scale(1/h_bkg_tth->Integral());
  h_bkgttw_vetoLeak->Scale(1/h_bkgttw_vetoLeak->Integral());
  
  /*
  // rebin histograms
  h_sig_UL->Rebin(50);
  h_sig_ttw->Rebin(50);
  h_sig_tth->Rebin(50);
  h_sigttw_vetoLeak->Rebin(50);
  // bkg
  h_bkg_UL->Rebin(50);
  h_bkg_ttw->Rebin(50);
  h_bkg_tth->Rebin(50);
  h_bkgttw_vetoLeak->Rebin(50);
  */
  // Cosmetics
  h_sig_UL->SetLineColor(kBlack);
  h_sig_ttw->SetLineColor(kRed);
  h_sig_tth->SetLineColor(kAzure+7);
  h_sigttw_vetoLeak->SetLineColor(kOrange);
  // bkg
  h_bkg_UL->SetLineColor(kBlack);
  h_bkg_ttw->SetLineColor(kRed);
  h_bkg_tth->SetLineColor(kAzure+7);
  h_bkgttw_vetoLeak->SetLineColor(kOrange);

  h_bkgttw_vetoLeak->SetLineStyle(7);
  h_bkg_UL->SetLineStyle(7);
  h_bkg_ttw->SetLineStyle(7);
  h_bkg_tth->SetLineStyle(7);

  // Draw
  h_sig_UL->Draw("hist");
  h_sig_ttw->Draw("hist same");
  h_sig_tth->Draw("hist same");
  h_sigttw_vetoLeak->Draw("hist same");
  h_bkg_UL->Draw("hist same");
  h_bkg_ttw->Draw("hist same");
  h_bkg_tth->Draw("hist same");
  if (object.Contains("el")){
    h_bkgttw_vetoLeak->Draw("hist same");
  }
  leg0 -> Draw("same");
  leg00 -> Draw("same");

  
  TString c0_name;
  if (era == "2022EE")
    c0_name = "bdt" + object + "_yields_2022EE";


  c0 -> Print(c0_name + ".png");
  c0 -> Print(c0_name + ".pdf");
  
  
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
  readers_names[2] = "/nfs/fanae/user/cvico/WorkSpace/wz-run3/release/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/macros/leptons/Run3/dataset/weights/el_ttw_vetoLeak_BDTG.weights.xml";


  reader->BookMVA("BDTG_tth", readers_names[0]);
  reader->BookMVA("BDTG_ttw", readers_names[1]);
  reader->BookMVA("BDTGttw_vetoLeak", readers_names[2]);


  cout << "MVAs booked by the reader" << endl;
  
  float mvaTTH_[40];
  float miniPFRelIso_all_[40];
  bool  mvaNoIso_Fall17V2_WPL_[40];
  char  lostHits_[40];
  char  genPartFlav_[40];
  float dxy_[40];
  float dz_[40];

  float pt_[40];
  float eta_[40];
  float pfRelIso03_all_[40];
  float miniPFRelIso_chg_[40];
  float miniRelIsoAll_[40];
  float jetPtRelv2_[40];
  float jetPtRatio_[40];
  float jetBTagDeepFlavB_[40];
  float sip3d_[40];
  float mvaNoIso_Fall17V2_[40];
  float jetRelIso_[40];
  char jetNDauCharged_[40];
  int   jetIdx_[40];

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
  t->SetBranchAddress("nElectron",                 &nElectron_);
  t->SetBranchAddress("Electron_charge",           &charge_);


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

    if (ievt % 1000 == 0) cout << "--- ... Processing event: " << ievt <<std::endl;
    
    t->GetEntry(ievt);

    event = ievt;
    
    if (nElectron_ != 1 || nElectron_ > 10){ continue;}
    for (int i = 0; i < nElectron_; ++i){

      mvaTTH = mvaTTH_[i];
      miniPFRelIso_all = miniPFRelIso_all_[i];
      mvaNoIso_Fall17V2_WPL = mvaNoIso_Fall17V2_WPL_[i];
      lostHits = lostHits_[i];
      genPartFlav = genPartFlav_[i];
      dxy = dxy_[i];
      dz = dz_[i];
      pt = pt_[i];
      eta = eta_[i];
      pfRelIso03_all = pfRelIso03_all_[i];
      miniPFRelIso_chg = miniPFRelIso_chg_[i];
      miniRelIsoNeutral = pfRelIso03_all_[i] - miniPFRelIso_chg_[i];
      jetNDauCharged = jetNDauCharged_[i];
      jetPtRelv2 = jetPtRelv2_[i];

      jetPtRatio = min(1. / (1. + jetRelIso_[i]), 1.5);
      if (jetIdx_[i] > 40) continue; // Sometimes the branch appears not to be filled and it crashes 
      jetBTagDeepFlavB = jetIdx_[i] > -1 ? jetBTagDeepFlavB_[jetIdx_[i]] : 0;

      sip3d = sip3d_[i];
      log_dxy = log(abs(dxy));
      log_dz = log(abs(dz));

      mvaNoIso_Fall17V2 = mvaNoIso_Fall17V2_[i];

      // Fill total histograms
      float BDTG_tth;
      float BDTG_ttw;
      float BDTGttw_vetoLeak;

      BDTG_tth = reader->EvaluateMVA("BDTG_tth");
      BDTG_ttw = reader->EvaluateMVA("BDTG_ttw");
      BDTGttw_vetoLeak  = reader->EvaluateMVA("BDTGttw_vetoLeak");

      // Fill total signal histograms
      if (genPartFlav == 1 || genPartFlav == 15){
        h_sig_tth_total -> Fill( (-1.)*(mvaNoIso_Fall17V2_WPL == 0) + BDTG_tth*(mvaNoIso_Fall17V2_WPL == 1) );      
        h_sig_ttw_total -> Fill( (-1.)*(pt < 10) + BDTG_ttw*(pt >= 10));
        h_sigttw_vetoLeak_total  -> Fill( (-1.)*(pt < 10) + BDTGttw_vetoLeak*(pt >= 10));
        h_sig_UL_total -> Fill((-1.)*(mvaNoIso_Fall17V2_WPL == 0) + mvaTTH*(mvaNoIso_Fall17V2_WPL == 1));
      }

      // Fill total background histograms
      if (genPartFlav != 1 && genPartFlav != 15){
        h_bkg_tth_total -> Fill( (-1.)*(mvaNoIso_Fall17V2_WPL == 0) + BDTG_tth*(mvaNoIso_Fall17V2_WPL == 1) );      
        h_bkg_ttw_total -> Fill( (-1.)*(pt < 10) + BDTG_ttw*(pt >= 10));
        h_bkgttw_vetoLeak_total  -> Fill( (-1.)*(pt < 10) + BDTGttw_vetoLeak*(pt >= 10));
        h_bkg_UL_total -> Fill((-1.)*(mvaNoIso_Fall17V2_WPL == 0) + mvaTTH*(mvaNoIso_Fall17V2_WPL == 1));
      }

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

      // Fill signal histograms
      if (genPartFlav == 1 || genPartFlav == 15){
        h_sig_tth -> Fill( (-1.)*(mvaNoIso_Fall17V2_WPL == 0) + BDTG_tth*(mvaNoIso_Fall17V2_WPL == 1) );      
        h_sig_ttw -> Fill( (-1.)*(pt < 10) + BDTG_ttw*(pt >= 10));
        h_sigttw_vetoLeak  -> Fill( (-1.)*(pt < 10) + BDTGttw_vetoLeak*(pt >= 10));
        h_sig_UL -> Fill((-1.)*(mvaNoIso_Fall17V2_WPL == 0) + mvaTTH*(mvaNoIso_Fall17V2_WPL == 1));
      }

      // Fill background histograms
      if (genPartFlav != 1 && genPartFlav != 15){
        h_bkg_tth -> Fill( (-1.)*(mvaNoIso_Fall17V2_WPL == 0) + BDTG_tth*(mvaNoIso_Fall17V2_WPL == 1) );      
        h_bkg_ttw -> Fill( (-1.)*(pt < 10) + BDTG_ttw*(pt >= 10));
        h_bkgttw_vetoLeak  -> Fill( (-1.)*(pt < 10) + BDTGttw_vetoLeak*(pt >= 10));
        h_bkg_UL -> Fill((-1.)*(mvaNoIso_Fall17V2_WPL == 0) + mvaTTH*(mvaNoIso_Fall17V2_WPL == 1));
      }
    }
  }
  cout << "Integrals in nanoAOD v9:"   << endl;

  cout << "h_bkg_ttw_total: "          << h_bkg_ttw_total         -> Integral() << endl;
  cout << "h_bkg_tth_total: "          << h_bkg_tth_total         -> Integral() << endl;
  cout << "h_bkgttw_vetoLeak_total: "  << h_bkgttw_vetoLeak_total -> Integral() << endl;
  cout << "h_bkg_UL_total: "           << h_bkg_UL_total          -> Integral() << endl;
  
  cout << "h_sig_ttw: "                << h_sig_ttw               -> Integral() << endl;
  cout << "h_sig_tth: "                << h_sig_tth               -> Integral() << endl;
  cout << "h_sigttw_vetoLeak: "        << h_sigttw_vetoLeak       -> Integral() << endl;
  cout << "h_sig_UL: "                 << h_sig_UL                -> Integral() << endl;

  // Now save histograms
  TString out_rootfile_name = "rootfile_ROC_el_" + year + ".root";

  TFile* f_out = new TFile(out_rootfile_name, "recreate");
  f_out                   -> cd();
  // signal
  h_sig_UL                -> Write();
  h_sig_ttw               -> Write();
  h_sig_tth               -> Write();
  h_sigttw_vetoLeak       -> Write();

  // bkg
  h_bkg_UL                -> Write();
  h_bkg_ttw               -> Write();
  h_bkg_tth               -> Write();
  h_bkgttw_vetoLeak       -> Write();

  // signal total
  h_sig_ttw_total         -> Write();
  h_sig_tth_total         -> Write();
  h_sigttw_vetoLeak_total -> Write();
  h_sig_UL_total          -> Write();
  // bkt total
  h_bkg_ttw_total         -> Write();
  h_bkg_tth_total         -> Write();
  h_bkgttw_vetoLeak_total -> Write();
  h_bkg_UL_total          -> Write();
  f_out                   -> Close();
}

void my_tmva_reader(TString object = "mu", TString year = "2022", bool redo_roofile = false){

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
  
  if (redo_roofile == true){
    if (object.Contains("mu")){
      my_tmva_reader_mu(files_names_strings, year);
    }
    if (object.Contains("el")){
    my_tmva_reader_el(files_names_strings, year);
    }
  }
  else {
    TString rootfile_name;
    if (object.Contains("mu")){
      rootfile_name = "rootfile_ROC_mu_" + year + ".root";
    }
    if (object.Contains("el")){
      rootfile_name = "rootfile_ROC_el_" + year + ".root";
    }
    
    

    do_plotting(rootfile_name, year, object);
  }
  
}
