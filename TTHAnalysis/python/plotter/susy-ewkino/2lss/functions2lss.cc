#include <cmath>
#include <map>
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/GenVector/PxPyPzM4D.h"
#include "Math/GenVector/Boost.h"
#include "TLorentzVector.h"
#include "TH2Poly.h"
#include "TGraphAsymmErrors.h"
#include "TH1F.h"
#include "TFile.h"
#include "PhysicsTools/Heppy/interface/Davismt2.h"
#include "TSystem.h"
#include <iostream>
#include "TF2.h"

TString CMSSW_BASE_2lss = gSystem->ExpandPathName("${CMSSW_BASE}");

float mt_2_2lss(float pt1, float phi1, float pt2, float phi2) {
    return std::sqrt(2*pt1*pt2*(1-std::cos(phi1-phi2)));
}

float pt_2_2lss(float pt1, float phi1, float pt2, float phi2) {
    phi2 -= phi1;
    return hypot(pt1 + pt2 * std::cos(phi2), pt2*std::sin(phi2));
}

int SSR_2lss(int nj, float ptl1, float phil1, float ptl2, float phil2, float met, float metphi, int charge){
  float mtw1 = mt_2_2lss(ptl1,phil1, met, metphi);
  float mtw2 = mt_2_2lss(ptl2,phil2, met, metphi);
  float mtw  = std::min(mtw1,mtw2);
  float ptdil = pt_2_2lss(ptl1,phil1,ptl2,phil2);
  int   cha  = charge;

  if      (nj == 0 && mtw > 100 && met > 140) return 1;
  else if (nj == 1 && mtw < 100 && met > 200) return 2;
  else return -1;
}


int SR_ewk_ss2l(int nj, float ptl1, float phil1, float ptl2, float phil2, float met, float metphi, int charge){
  
  float mtw1 = mt_2_2lss(ptl1,phil1, met, metphi);
  float mtw2 = mt_2_2lss(ptl2,phil2, met, metphi);
  float mtw  = std::min(mtw1,mtw2);
  float ptdil = pt_2_2lss(ptl1,phil1,ptl2,phil2);
  int   cha  = charge;

  if      (nj==0 && ptdil<75 && mtw<100 && met<100)            return 1;  //VR

  else if (nj==0 && ptdil<75 && mtw<100 && met>100 && met<150 && cha == +1) return 2;
  else if (nj==0 && ptdil<75 && mtw<100 && met>100 && met<150 && cha == -1) return 3;


  else if (nj==0 && ptdil<75 && mtw<100 && met>150 && met < 200)            return 4;
  else if (nj==0 && ptdil<75 && mtw<100 && met > 200)            			    return 5;

  else if (nj==0 && ptdil>75 && mtw<100 && met<100)            return 6; //VR


  else if (nj==0 && ptdil>75 && mtw<100 && met>100 && met<150 && cha == +1) return 7;
  else if (nj==0 && ptdil>75 && mtw<100 && met>100 && met<150 && cha == -1) return 8;

  else if (nj==0 && ptdil>75 && mtw<100 && met>150 && met < 200)            return 9;
  else if (nj==0 && ptdil>75 && mtw<100 && met>200)				             return 10;

  else if (nj==0 && mtw>100 && met<100)                        return 11;  //VR


  else if (nj==0 && mtw>100 && met>100 && met<150 && cha == +1)             return 12;
  else if (nj==0 && mtw>100 && met>100 && met<150 && cha == -1)             return 13;

  else if (nj==0 && mtw>100 && met>150 && met<200)                          return 14;
  else if (nj==0 && mtw>100 && met>200)                        			    return 15;

  else if (nj==1 && ptdil<75 && mtw<100 && met<100 )            return 16;  //VR

  else if (nj==1 && ptdil<75 && mtw<100 && met>100 && met<150 && cha == +1) return 17;
  else if (nj==1 && ptdil<75 && mtw<100 && met>100 && met<150 && cha == -1) return 18;

  else if (nj==1 && ptdil<75 && mtw<100 && met>150 && met<200)              return 19;
  else if (nj==1 && ptdil<75 && mtw<100 && met>200)         		          return 20;

  else if (nj==1 && ptdil>75 && mtw<100 && met<100)            return 21; //VR


  else if (nj==1 && ptdil>75 && mtw<100 && met>100 && met<150 && cha == +1) return 22;
  else if (nj==1 && ptdil>75 && mtw<100 && met>100 && met<150 && cha == -1) return 23;

  else if (nj==1 && ptdil>75 && mtw<100 && met>150 && met < 200)            return 24;
  else if (nj==1 && ptdil>75 && mtw<100 && met>200) 					          return 25;

  else if (nj==1 && mtw>100 && met<100)                        return 26;  //VR

  else if (nj==1 && mtw>100 && met>100 && met<150 && cha == +1)             return 27;
  else if (nj==1 && mtw>100 && met>100 && met<150 && cha == -1)             return 28;

  else if (nj==1 && mtw>100 && met>150 && met<200)                          return 29;
  else if (nj==1 && mtw>100 && met>200)                   				       return 30;

  return -99;   
  
}


int SR_ewk_ss2l_v2(int nj, float ptl1, float phil1, float ptl2, float phil2, float met, float metphi, int charge, float delta){
  
  float mtw1 = mt_2_2lss(ptl1,phil1, met, metphi);
  float mtw2 = mt_2_2lss(ptl2,phil2, met, metphi);
  float mtw  = std::min(mtw1,mtw2);
  float ptdil = pt_2_2lss(ptl1,phil1,ptl2,phil2);
  int   cha  = charge;
  if (delta > 0) ptdil = 0;
  else ptdil = 200;

  if      (nj==0 && ptdil<75 && mtw<100 && met<100)            return 1;  //VR

  else if (nj==0 && ptdil<75 && mtw<100 && met>100 && met<150 && cha == +1) return 2;
  else if (nj==0 && ptdil<75 && mtw<100 && met>100 && met<150 && cha == -1) return 3;


  else if (nj==0 && ptdil<75 && mtw<100 && met>150 && met < 200)            return 4;
  else if (nj==0 && ptdil<75 && mtw<100 && met > 200)            			    return 5;

  else if (nj==0 && ptdil>75 && mtw<100 && met<100)            return 6; //VR


  else if (nj==0 && ptdil>75 && mtw<100 && met>100 && met<150 && cha == +1) return 7;
  else if (nj==0 && ptdil>75 && mtw<100 && met>100 && met<150 && cha == -1) return 8;

  else if (nj==0 && ptdil>75 && mtw<100 && met>150 && met < 200)            return 9;
  else if (nj==0 && ptdil>75 && mtw<100 && met>200)				             return 10;

  else if (nj==0 && mtw>100 && met<100)                        return 11;  //VR


  else if (nj==0 && mtw>100 && met>100 && met<150 && cha == +1)             return 12;
  else if (nj==0 && mtw>100 && met>100 && met<150 && cha == -1)             return 13;

  else if (nj==0 && mtw>100 && met>150 && met<200)                          return 14;
  else if (nj==0 && mtw>100 && met>200)                        			    return 15;

  else if (nj==1 && ptdil<75 && mtw<100 && met<100 )            return 16;  //VR

  else if (nj==1 && ptdil<75 && mtw<100 && met>100 && met<150 && cha == +1) return 17;
  else if (nj==1 && ptdil<75 && mtw<100 && met>100 && met<150 && cha == -1) return 18;

  else if (nj==1 && ptdil<75 && mtw<100 && met>150 && met<200)              return 19;
  else if (nj==1 && ptdil<75 && mtw<100 && met>200)         		          return 20;

  else if (nj==1 && ptdil>75 && mtw<100 && met<100)            return 21; //VR


  else if (nj==1 && ptdil>75 && mtw<100 && met>100 && met<150 && cha == +1) return 22;
  else if (nj==1 && ptdil>75 && mtw<100 && met>100 && met<150 && cha == -1) return 23;

  else if (nj==1 && ptdil>75 && mtw<100 && met>150 && met < 200)            return 24;
  else if (nj==1 && ptdil>75 && mtw<100 && met>200) 					          return 25;

  else if (nj==1 && mtw>100 && met<100)                        return 26;  //VR

  else if (nj==1 && mtw>100 && met>100 && met<150 && cha == +1)             return 27;
  else if (nj==1 && mtw>100 && met>100 && met<150 && cha == -1)             return 28;

  else if (nj==1 && mtw>100 && met>150 && met<200)                          return 29;
  else if (nj==1 && mtw>100 && met>200)                   				       return 30;

  return -99;   
  
}


int SR_ewk_ss2l_v3(float mt2, float met, float ptdil, float mtW, float unr){
  int SR = 1;
  if (mt2 < 0.01) SR += 16;
  if (met > 200) SR += 8;
  if (ptdil < 50) SR += 4;
  if (mtW < 50) SR += 2;
  if (unr > 0) SR += 1;
  return SR;   
}


int SR_ewk_ss2l_v4(float mt2, float met, float ptll, float ptdil, float mtW, float charge){
  int SR = -1;
  if (mt2 == 0){
      if (ptll >= 70){
          if (mtW < 25) SR =  1;
          else SR =  2;
      }
      if (ptll < 70){
          if (met < 100) SR =  3;
          else if (met < 200) SR =  4;
          else SR =  5;
      }
  }
  else{

      if (ptdil >= 35){
          if (mtW >= 40) SR =  6;
          else SR =  7;
      }
      else{
          if (met < 100) SR =  8;
          else if (met < 150) SR =  9;
          else SR =  10;
      }
  }
  if (charge > 0) SR += 11;

  return SR;   
}




int SR_ewk_ss2l_v5(float mt2, float met, float ptll, float ptdil, float mtW, float charge){
  int SR = 1;
  if (mt2 == 0){
      if (ptll < 70){
          if (met < 100) SR =  2;
          else if (met < 200) SR =  3;
          else SR =  4;
      }
  }
  else if (mt2 < 80){
      if (ptdil < 30){
          if (met < 200) SR = 5;
          else SR = 6;
      }
      else {
      if (mtW < 100 && met < 200) SR=7;
      else if (mtW < 100 && met > 200) SR=8;
      else if (mtW > 100 && met < 200) SR=9;
      else if (mtW > 100 && met > 200) SR=10;
      }
  }
  else if (mt2 >= 80){
      if (met < 100 && ptll < 200) SR = 11;
      else if (met < 200 && ptll < 200) SR = 12;
      else if (ptll < 200) SR = 13;
      if (ptll > 200){
          if (met < 100) SR =  14;
          else if (met < 200) SR =  15;
          else if (met < 900) SR =  16;
          else SR = 14;
      }
  }
  SR = SR*2;
  if (SR == 30 || SR == 28 || SR==22 || SR ==20 || SR==18 || SR == 16 || SR == 14 || SR == 4 || SR == 2) return SR;
  if (charge > 0) SR += -1;
  return SR;   
}



int SR_ewk_ss2l_v6(float mt2, float met, float ptll, float ptdil, float mtW, float charge){
  int SR = 1;
  if (mt2 == 0){
      if (ptll < 70){
          if (met < 100) SR =  2;
          else if (met < 200 && charge > 0) SR =  3;
          else if (met < 200 && charge < 0) SR =  4;
          else if (charge > 0) SR =  5;
          else SR = 6;
      }
  }
  else if (mt2 < 80){
      if (ptdil < 30){
          if (met < 200 && charge > 0) SR = 7;
          else if (met < 200 && charge < 0) SR = 8;
          else if (charge > 0) SR = 9;
          else if (charge < 0) SR = 10;
      }
      else {
          if (mtW < 100 && met < 200) SR=11;
          else if (mtW < 100 && met > 200) SR=12;
          else if (mtW > 100 && met < 200) SR=13;
          else if (mtW > 100 && met > 200) SR=14;
      }
  }
  else if (mt2 >= 80){
      if (met < 100 && ptll < 200) SR = 15;
      else if (met < 200 && ptll < 200 && charge > 0) SR = 16;
      else if (met < 200 && ptll < 200 && charge < 0) SR = 17;
      else if (ptll < 200 && charge > 0) SR = 18;
      else if (ptll < 200 && charge < 0) SR = 19;
      if (ptll > 200){
          if (met < 100) SR =  20;
          else if (met < 200 && charge > 0) SR =  21;
          else if (met < 200 && charge < 0) SR =  22;
          else if (met < 900 && charge > 0) SR =  23;
          else if (met < 900 && charge < 0) SR =  24;
          else SR = 20;
      }
  }
  return SR;   
}


int SR_ewk_ss2l_v6_plot(float mt2, float met, float ptll, float ptdil, float mtW, float charge){
  int SR = 1;
  if (mt2 == 0){
      if (ptll < 70){
          if (met < 100) SR =  2;
          else if (met < 200 && charge > 0) SR =  3;
          else if (met < 200 && charge < 0) SR =  4;
          else if (charge > 0) SR =  5;
          else SR = 6;
      }
  }
  else if (mt2 < 80){
      if (ptdil < 30){
          if (met < 200 && charge > 0) SR = 7;
          else if (met < 200 && charge < 0) SR = 8;
          else if (charge > 0) SR = 9;
          else if (charge < 0) SR = 8;
      }
      else {
          if (mtW < 100 && met < 200) SR=10;
          else if (mtW < 100 && met > 200) SR=10;
          else if (mtW > 100 && met < 200) SR=10;
          else if (mtW > 100 && met > 200) SR=10;
      }
  }
  else if (mt2 >= 80){
      if (met < 100 && ptll < 200) SR = 11;
      else if (met < 200 && ptll < 200 && charge > 0) SR = 12;
      else if (met < 200 && ptll < 200 && charge < 0) SR = 13;
      else if (ptll < 200 && charge > 0) SR = 14;
      else if (ptll < 200 && charge < 0) SR = 15;
      if (ptll > 200){
          if (met < 100) SR =  16;
          else if (met < 200 && charge > 0) SR =  17;
          else if (met < 200 && charge < 0) SR =  18;
          else if (met < 900 && charge > 0) SR =  19;
          else if (met < 900 && charge < 0) SR =  20;
          else SR = 20;
      }
  }
  return SR;   
}


int SSR_2lss(float mt2, float met, float ptll, float ptdil, float mtW, float charge){
  int SR = 0;
  if (mt2 <  80 && ptll < 70  && met > 200){ return 1;}
  if (mt2 >= 80 && ptll > 200 && met > 100 && !(SR_ewk_ss2l_v6_plot(mt2, met, ptll, ptdil, mtW,charge)==20)){ return 2;}
  return SR;   
}

int SR_ewk_ss2l_v7_prev(float dileppt, float met, float ptll, float ptdil, float mtW, float charge){
  int SR = 1;
  if (dileppt < 20){
      if (ptll < 70){
          if (met < 100) SR =  2;
          else if (met < 200 && charge > 0) SR =  3;
          else if (met < 200 && charge < 0) SR =  4;
          else if (charge > 0) SR =  5;
          else SR = 6;
      }
  }
  else if (dileppt < 100){
      if (ptdil < 30){
          if (met < 200 && charge > 0) SR = 7;
          else if (met < 200 && charge < 0) SR = 8;
          else if (charge > 0) SR = 9;
          else if (charge < 0) SR = 10;
      }
      else {
          if (mtW < 100 && met < 200) SR=11;
          else if (mtW < 100 && met > 200) SR=12;
          else if (mtW > 100 && met < 200) SR=13;
          else if (mtW > 100 && met > 200) SR=14;
      }
  }
  else if (dileppt >= 100){
      if (met < 100 && ptll < 200) SR = 15;
      else if (met < 200 && ptll < 200 && charge > 0) SR = 16;
      else if (met < 200 && ptll < 200 && charge < 0) SR = 17;
      else if (ptll < 200 && charge > 0) SR = 18;
      else if (ptll < 200 && charge < 0) SR = 19;
      if (ptll > 200){
          if (met < 100) SR =  20;
          else if (met < 200 && charge > 0) SR =  21;
          else if (met < 200 && charge < 0) SR =  22;
          else if (met < 900 && charge > 0) SR =  23;
          else if (met < 900 && charge < 0) SR =  24;
          else SR = 20;
      }
  }
  return SR;   
}





#include "TGraphAsymmErrors.h"
TFile *_file_reco_leptonSF_mu = NULL;
TFile *_file_recoToMedium_leptonSF_mu = NULL;
TFile *_file_MediumToMVA_leptonSF_mu = NULL;
TFile *_file_recoToMVA_leptonSF_el = NULL;
TFile *_file_reco_leptonSF_el = NULL;

TGraphAsymmErrors *_histo_reco_leptonSF_mu = NULL;
TH2F *_histo_recoToMedium_leptonSF_mu = NULL;
TH2F *_histo_MediumToMVA_leptonSF_mu = NULL;
TH2F *_histo_recoToMVA_leptonSF_el = NULL;
TH2F *_histo_reco_leptonSF_el = NULL;

float getLeptonSF_mu_Unc(float pt, int var) {
  if (pt<20) 
    return var*TMath::Sqrt(0.03*0.03+0.01*0.01+0.01*0.01);
  else 
    return var*TMath::Sqrt(0.02*0.02+0.01*0.01);  
}

float leptonSF_2lss_ewk(int pdgid, float pt, float eta, int var=0){
  
  if (!_histo_reco_leptonSF_mu) {
     _file_reco_leptonSF_mu = new TFile(CMSSW_BASE_2lss+"/src/CMGTools/TTHAnalysis/data/leptonSF/SF2016_muon_trackingEff.root", "data");
     _file_recoToMedium_leptonSF_mu = new TFile(CMSSW_BASE_2lss+"/src/CMGTools/TTHAnalysis/data/leptonSF/SF2016_muon_mediumId.root", "read");
     _file_MediumToMVA_leptonSF_mu = new TFile(CMSSW_BASE_2lss+"/src/CMGTools/TTHAnalysis/data/leptonSF/SF2016_muon_lepMVAveryTight.root", "read");
     _histo_reco_leptonSF_mu = (TGraphAsymmErrors*)(_file_reco_leptonSF_mu->Get("ratio_eta"));
     _histo_recoToMedium_leptonSF_mu = (TH2F*)(_file_recoToMedium_leptonSF_mu->Get("pt_abseta_PLOT_pair_probeMultiplicity_bin0"));
     _histo_MediumToMVA_leptonSF_mu = (TH2F*)(_file_MediumToMVA_leptonSF_mu->Get("pt_abseta_PLOT_pair_probeMultiplicity_bin0_&_tag_combRelIsoPF04dBeta_bin0_&_tag_pt_bin0_&_mvaPreSel_pass"));
   }
   if (!_histo_recoToMVA_leptonSF_el) {
     _file_recoToMVA_leptonSF_el = new TFile(CMSSW_BASE_2lss+"/src/CMGTools/TTHAnalysis/data/leptonSF/SF2016_electron_full.root", "read");
     _histo_recoToMVA_leptonSF_el = (TH2F*)(_file_recoToMVA_leptonSF_el->Get("GsfElectronToLeptonMvaVTIDEmuTightIP2DSIP3D8miniIso04"));
     
     _file_reco_leptonSF_el = new TFile(CMSSW_BASE_2lss+"/src/CMGTools/TTHAnalysis/data/leptonSF/SF2016_electron_trackingEff.root", "read");
     _histo_reco_leptonSF_el = (TH2F*) (_file_reco_leptonSF_el->Get("EGamma_SF2D"));
   }
   float out = 0.;
   if (abs(pdgid)==13){
     out = _histo_reco_leptonSF_mu->Eval(eta);
     TH2F *hist = _histo_recoToMedium_leptonSF_mu;
     int ptbin  = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
     int etabin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(fabs(eta))));
     out *= hist->GetBinContent(ptbin,etabin);
     hist = _histo_MediumToMVA_leptonSF_mu;
     ptbin  = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
     etabin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(fabs(eta))));
     out *=hist->GetBinContent(ptbin,etabin);
     return out + out*getLeptonSF_mu_Unc(pt,var);
   }
   float err = 0.;
   if (abs(pdgid)==11){
     TH2F *hist = _histo_recoToMVA_leptonSF_el;
     int ptbin  = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
     int etabin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(fabs(eta))));
     out = hist->GetBinContent(ptbin,etabin);
     err = hist->GetBinError(ptbin,etabin)*hist->GetBinError(ptbin,etabin);
     hist = _histo_reco_leptonSF_el;
     ptbin  = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(pt)));
     etabin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(eta)));
     out *= hist->GetBinContent(etabin,ptbin);
     err += hist->GetBinError(etabin,ptbin)*hist->GetBinError(etabin,ptbin);
     err = TMath::Sqrt(err);
     return out + out*err*var;
   }
   //cout << "[ERROR]!!!! SF UnKNOWN!!! PLEASE CHECK" << endl;
   return 1.;
 }

float unrealnessW(Float_t ptl, Float_t etal, Float_t phil, Float_t ptnu, Float_t phinu){
   Float_t muVal = (80.385)*(80.385)/2. + ptl*ptnu*TMath::Cos(phil-phinu);
   Float_t disc  = (muVal*muVal*ptl*ptl*TMath::SinH(etal)*TMath::SinH(etal)/(ptl*ptl*ptl*ptl) - ((ptl*ptl*TMath::CosH(etal)*TMath::CosH(etal))*ptnu*ptnu - muVal*muVal)/ptl*ptl);        
   return disc;
}

float unrealnessAny(Float_t ptl, Float_t etal, Float_t phil, Float_t ptnu, Float_t phinu, Float_t mAny){
   Float_t muVal = (mAny)*(mAny)/2. + ptl*ptnu*TMath::Cos(phil-phinu);
   Float_t disc  = (muVal*muVal*ptl*ptl*TMath::SinH(etal)*TMath::SinH(etal)/(ptl*ptl*ptl*ptl) - ((ptl*ptl*TMath::CosH(etal)*TMath::CosH(etal))*ptnu*ptnu - muVal*muVal)/ptl*ptl);        
   return disc;
}

float bestWmass(Float_t ptl, Float_t etal, Float_t phil, Float_t ptnu, Float_t phinu){
   Float_t muVal = (80.385)*(80.385)/2. + ptl*ptnu*TMath::Cos(phil-phinu);
   Float_t disc  = (muVal*muVal*ptl*ptl*TMath::SinH(etal)*TMath::SinH(etal)/(ptl*ptl*ptl*ptl) - ((ptl*ptl*TMath::CosH(etal)*TMath::CosH(etal))*ptnu*ptnu - muVal*muVal)/ptl*ptl);
   if (disc > 0) return 80.385;      
   Float_t muValmin = TMath::Sqrt( (ptl*ptl*ptnu*ptnu*TMath::CosH(etal)*TMath::CosH(etal))/(1+TMath::SinH(etal)*TMath::SinH(etal)));
   Float_t mWUp = TMath::Sqrt(2*muVal  - ptl*ptnu*TMath::Cos(phil-phinu));      
   Float_t mWDn = TMath::Sqrt(-2*muVal  - ptl*ptnu*TMath::Cos(phil-phinu));   
   if (( 2*muVal  - ptl*ptnu*TMath::Cos(phil-phinu)) < 0) return mWDn;  
   if ((-2*muVal  - ptl*ptnu*TMath::Cos(phil-phinu)) < 0) return mWUp;
   if (abs(mWUp-80.385) < abs(mWDn-80.385)) return mWUp;
   else return mWDn;
}



TF2* fCons = new TF2("fConsistency", "abs([0]*TMath::Sqrt(x*x+ y*y)-[1]*x-[2]*y-  [3]*TMath::Sqrt(([4]-x)*([4]-x)+ ([5]-y)*([5]-y)) + [6]*([4]-x) + [7]*([5]-y))*abs([0]*TMath::Sqrt(x*x+ y*y)-[1]*x-[2]*y-  [3]*TMath::Sqrt(([4]-x)*([4]-x)+ ([5]-y)*([5]-y)) + [6]*([4]-x) + [7]*([5]-y)) + abs( x*x + y*y - ([4]-x)*([4]-x) + ([5]-y)*([5]-y))*abs( x*x + y*y - ([4]-x)*([4]-x) - ([5]-y)*([5]-y))",-1000,1000,-1000,1000);

float mass_consistency_3D(Float_t pt1, Float_t phi1, Float_t pt2, Float_t phi2, Float_t met_pt, Float_t met_phi){
   float met_x = met_pt*TMath::Cos(met_phi);
   float met_y = met_pt*TMath::Sin(met_phi);
   float px1   = pt1*TMath::Cos(phi1);
   float px2   = pt2*TMath::Cos(phi2);
   float py1   = pt1*TMath::Sin(phi1);
   float py2   = pt2*TMath::Sin(phi2);
   fCons->SetParameters(pt1,px1,py1,pt2,met_x,met_y,px2,py2);
   return fCons->GetMinimum();
}

// This just doesn't work 
TF2* fCons3D = new TF2("fConsistency3D", " [0]*TMath::Sqrt(x*x+ y*y + z*z)-[1]*x-[2]*y-[3]*z - [4]*TMath::Sqrt(([8]-x)*([8]-x)+ ([9]-y)*([9]-y) + t*t) + [5]*([8]-x) +[6]*([9]-y) +[7]*t",-1000,1000,-1000,1000);

float mass_consistency_3D(Float_t pt1, Float_t eta1, Float_t phi1, Float_t pt2, Float_t eta2, Float_t phi2, Float_t met_pt, Float_t met_phi){
   float met_x = met_pt*TMath::Cos(met_phi);
   float met_y = met_pt*TMath::Sin(met_phi);
   float px1   = pt1*TMath::Cos(phi1);
   float px2   = pt2*TMath::Cos(phi2);
   float py1   = pt1*TMath::Sin(phi1);
   float py2   = pt2*TMath::Sin(phi2);
   float pz1   = pt1*TMath::SinH(eta1);
   float pz2   = pt2*TMath::SinH(eta2);
   float e1   = pt1*TMath::CosH(eta1);
   float e2   = pt2*TMath::CosH(eta2);
   fCons3D->SetParameters(e1,px1,py1,pz1,e2,px2,py2,pz2,met_x,met_y);
   return fCons3D->GetMinimum();
}

void functions2lss() {}
