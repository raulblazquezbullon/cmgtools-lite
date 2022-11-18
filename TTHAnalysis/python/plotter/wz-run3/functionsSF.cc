////////////////////////////////////////////////////////////////
//   FUNCTIONS TO APPLY LEPTON SCALE FACTORS IN WZ ANALYSIS   //
///////////////////////////////////////////////////////////////




#include "TH2F.h"
#include "TMath.h"
#include "TGraphAsymmErrors.h"
#include "TFile.h"
#include "TSystem.h"
#include <iostream>

// --- Some path definitions --- //
TString CMSSW_BASE_SF = gSystem->ExpandPathName("${CMSSW_BASE}");
TString DATALEP_SF = CMSSW_BASE_SF+"/src/CMGTools/TTHAnalysis/data/WZRun3/lepton/";




//////////////////////////////////////////////////////////////////
//                                                              //
//  FUNCTIONS TO APPLY LEPTON SCALE FACTORS USING CUTBASED IDs  //
//                                                              //
//////////////////////////////////////////////////////////////////
// --- Load required information to compute the lepton scale factors --- //
// ID:  MUONS
TFile *f_mu_tightID_SF   = TFile::Open(DATALEP_SF + "Efficiencies_muon_generalTracks_Z_Run2018_UL_ID.root", "read");
TH2F  *mu_tightID_sfs    = (TH2F*) f_mu_tightID_SF->Get("NUM_TightID_DEN_TrackerMuons_abseta_pt");

// ISO: MUONS
TFile *f_mu_tightISO_SF  = TFile::Open(DATALEP_SF + "Efficiencies_muon_generalTracks_Z_Run2018_UL_ISO.root", "read");
TH2F  *mu_tightISO_sfs   = (TH2F*) f_mu_tightISO_SF->Get("NUM_TightRelIso_DEN_TightIDandIPCut_abseta_pt");

// ID: ELECTRONS
TFile *f_el_tightID_SF = TFile::Open(DATALEP_SF + "Electron_2018UL_IDTight.root", "read");
TH2F *el_tightID_sfs = (TH2F*) f_el_tightID_SF->Get("EGamma_SF2D");

// RECO: ELECTRONS 
TFile *f_el_RECO_SF    = TFile::Open(DATALEP_SF + "Electron_2018UL_RECO.root", "read");
TH2F *el_RECO_sfs = (TH2F*) f_el_tightID_SF->Get("EGamma_SF2D");

float getSF(TH2D* hist, float pt, float eta){
  // Function to retrieve SF from TH2D
  int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
  int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(eta)));
  return hist->GetBinContent(xbin,ybin);
}

float getSF(TH2F* hist, float pt, float eta){
  // Function to retrieve SF from TH2F
  int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
  int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(eta)));
  return hist->GetBinContent(xbin,ybin);
}

float getMuSF_2022_tightID(int wp, int unc, float pt, float eta){
  // Muon scale factors for tight cutBasedID + ISO
  float uncst; float uncsy; float uncr;
  if (unc == 2){
    uncst = 1.;
    uncsy = 0.;
    uncr  = 0.;
  }
  if (unc == 1){
    uncst = 0.;
    uncsy = 1.;
    uncr  = 1.;
  }
  if (unc == -2){
    uncst = -1.;
    uncsy = -0.;
    uncr  = -0.;
  }
  if (unc == -1){
    uncst = -0.;
    uncsy = -1.;
    uncr  = -1.;
  }
  if (unc == 0) {
    uncst = 0.;
    uncsy = 0.;
    uncr  = 0.;
  }
  float sf_id  = getSF(mu_tightID_sfs, abs(eta), pt); // UL histograms have interchanged axis for some reason...
  float sf_iso = getSF(mu_tightISO_sfs, abs(eta), pt);
  float sf     = sf_id*sf_iso;
  return sf*(1 + uncst*sf + uncsy*sf);
}

float getElSF_2022_tightID(int wp, int unc, float pt, float eta){
  // Muon scale factors for tight cutBasedID + ISO
  float uncst; float uncsy; float uncr;
  if (unc == 2){
    uncst = 1.;
    uncsy = 0.;
    uncr  = 0.;
  }
  if (unc == 1){
    uncst = 0.;
    uncsy = 1.;
    uncr  = 1.;
  }
  if (unc == -2){
    uncst = -1.;
    uncsy = -0.;
    uncr  = -0.;
  }
  if (unc == -1){
    uncst = -0.;
    uncsy = -1.;
    uncr  = -1.;
  }
  if (unc == 0) {
    uncst = 0.;
    uncsy = 0.;
    uncr  = 0.;
  }
  float sf_id   = getSF(el_tightID_sfs, pt, abs(eta));
  float sf_reco = getSF(el_RECO_sfs, pt, abs(eta));
  float sf      = sf_id*sf_reco;
  return sf*(1 + uncst*sf + uncsy*sf);
}

float getElSF(int wp, int unc, int year, float pt, float eta){
  // Electron scale factors 
  if (year == 2022){
    return getElSF_2022_tightID(wp, unc, pt, eta);
  } 
}

float getMuSF(int wp, int unc, int year, float pt, float eta){
  // Muon scale factors 
  if (year == 2022){
    return getMuSF_2022_tightID(wp, unc, pt, eta);
  } 
}

float getLeptonSF(int wp, int unc, int year, float pt, float eta, int pdgId){
  // Function to apply lepton SFs
  if (abs(pdgId) == 13) { return getMuSF(wp, unc, year, pt, eta); }
  if (abs(pdgId) == 11) { return getElSF(wp, unc, year, pt, eta); }
  else if(abs(pdgId) != 0){std::cout << "Wrong pdg ID for lepton SF! " << pdgId << std::endl;}
  return -1.;
}
