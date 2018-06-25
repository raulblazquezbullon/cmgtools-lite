#include <assert.h>
#include <iostream>
#include "TH2F.h"
#include "TH1F.h"
#include "TFile.h"
#include "TSystem.h"

TString CMSSW_BASE_PUW = gSystem->ExpandPathName("${CMSSW_BASE}");
TString DATA_PUW = CMSSW_BASE_PUW+"/src/CMGTools/TTHAnalysis/data";

TFile* f_puw_nInt_ICHEP    = new TFile(DATA_PUW+"/pileup/puWeights_12fb_63mb.root"     , "read");;
TFile* f_puw_nInt_ICHEP_Up = new TFile(DATA_PUW+"/pileup/puWeights_12fb_63mb_Up.root"  , "read");
TFile* f_puw_nInt_ICHEP_Dn = new TFile(DATA_PUW+"/pileup/puWeights_12fb_63mb_Down.root", "read");
TH1F* h_puw_nInt_ICHEP    = (TH1F*) (f_puw_nInt_ICHEP   ->Get("puw"));
TH1F* h_puw_nInt_ICHEP_Up = (TH1F*) (f_puw_nInt_ICHEP_Up->Get("puw"));
TH1F* h_puw_nInt_ICHEP_Dn = (TH1F*) (f_puw_nInt_ICHEP_Dn->Get("puw"));

float puw_nInt_ICHEP(float nInt, int var=0) { 

  float puw = h_puw_nInt_ICHEP->GetBinContent(h_puw_nInt_ICHEP->FindBin(nInt)); 
  if(var== 0) return puw;
  if(var== 1) return h_puw_nInt_ICHEP_Up->GetBinContent(h_puw_nInt_ICHEP_Up->FindBin(nInt)) / puw;
  if(var==-1) return h_puw_nInt_ICHEP_Dn->GetBinContent(h_puw_nInt_ICHEP_Dn->FindBin(nInt)) / puw;
  cout <<"[WARNING!!!]  don't know what to do with PUweight, please check!! ";
  return 0;
}

TFile* f_puw_nInt_Moriond    = new TFile(DATA_PUW+"/pileup/puw_nTrueInt_Moriond2017_36p5fb_Summer16_69mb_central.root", "read");
TFile* f_puw_nInt_Moriond_Up = new TFile(DATA_PUW+"/pileup/puw_nTrueInt_Moriond2017_36p5fb_Summer16_69mb_up.root"     , "read");
TFile* f_puw_nInt_Moriond_Dn = new TFile(DATA_PUW+"/pileup/puw_nTrueInt_Moriond2017_36p5fb_Summer16_69mb_down.root"   , "read");
TH1F* h_puw_nInt_Moriond    = (TH1F*) (f_puw_nInt_Moriond   ->Get("puw"));
TH1F* h_puw_nInt_Moriond_Up = (TH1F*) (f_puw_nInt_Moriond_Up->Get("puw"));
TH1F* h_puw_nInt_Moriond_Dn = (TH1F*) (f_puw_nInt_Moriond_Dn->Get("puw"));

float puw_nInt_Moriond(float nInt, int var=0, int evt = 0) { 

  float puw = h_puw_nInt_Moriond->GetBinContent(h_puw_nInt_Moriond->FindBin(nInt)); 
  if(var== 0) return puw;
  if(puw== 0) return 0;
  if(var== 1) return float(h_puw_nInt_Moriond_Up->GetBinContent(h_puw_nInt_Moriond_Up->FindBin(nInt))) / puw;
  if(var==-1) return float(h_puw_nInt_Moriond_Dn->GetBinContent(h_puw_nInt_Moriond_Dn->FindBin(nInt))) / puw;
  cout <<"[WARNING!!!]  don't know what to do with PUweight, please check!! ";
  return 0;
}

// debugging
//TFile* f_puw_63    = new TFile("pileup_63.root", "read");
//TFile* f_puw_66    = new TFile("pileup_66.root", "read");
//TFile* f_puw_69    = new TFile("pileup_69.root", "read");
//TH1F* h_puw_63    = (TH1F*) (f_puw_63   ->Get("puw"));
//TH1F* h_puw_66    = (TH1F*) (f_puw_66   ->Get("puw"));
//TH1F* h_puw_69    = (TH1F*) (f_puw_69   ->Get("puw"));
//float puw63(float nInt) { 
//  return  h_puw_63->GetBinContent(h_puw_63->FindBin(nInt)); 
//}
//float puw66(float nInt) { 
//  return  h_puw_66->GetBinContent(h_puw_66->FindBin(nInt)); 
//}
//float puw69(float nInt) { 
//  return  h_puw_69->GetBinContent(h_puw_69->FindBin(nInt)); 
//}


//2017 MC production
TFile* f_puw_nInt_2017    = new TFile(DATA_PUW+"/pileup/pileupWeightsFall2017_nVert.root", "read");
TH1F*  h_puw_Tbar_tch = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TBar_tch_powheg"));
TH1F*  h_puw_TTHnobb = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTHnobb"));
TH1F*  h_puw_TTHnobb_pow = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTHnobb_pow"));
TH1F*  h_puw_TTJets = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTJets"));
TH1F*  h_puw_TTLLJets_m1to10 = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTLLJets_m1to10"));
TH1F*  h_puw_TTTT = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTTT"));
TH1F*  h_puw_TTTT_ext = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTTT_ext"));
TH1F*  h_puw_TTWToLNu = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTWToLNu"));
TH1F*  h_puw_TTWZ = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTWZ"));
TH1F*  h_puw_TTW_LO = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTW_LO"));
TH1F*  h_puw_TTZH = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTZH"));
TH1F*  h_puw_TTZToLLNuNu = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_TTZToLLNuNu"));
TH1F*  h_puw_T_tWch_noFullHad = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_T_tWch_noFullHad"));
TH1F*  h_puw_T_tch_powheg = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_T_tch_powheg"));
TH1F*  h_puw_WJetsToLNu_LO = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_WJetsToLNu_LO"));
TH1F*  h_puw_WWW_4F = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_WWW_4F"));
TH1F*  h_puw_WZG = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_WZG"));
TH1F*  h_puw_WZTo3LNu_amcatnlo = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_WZTo3LNu_amcatnlo"));
TH1F*  h_puw_WZZ = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_WZZ"));
TH1F*  h_puw_ZZTo2L2Nu = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_ZZTo2L2Nu"));
TH1F*  h_puw_ZZZ = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_ZZZ"));
TH1F*  h_puw_tZq_ll = (TH1F*) (f_puw_nInt_2017   ->Get("pileup_tZq_ll"));

float puw_nInt_2017(float nInt, Int_t name) { 
  TH1F* h_puw_temp;
  if  (name == 0) h_puw_temp = h_puw_Tbar_tch;
  else if (name == 1) h_puw_temp = h_puw_Tbar_tch ;
  else if (name == 2) h_puw_temp = h_puw_TTHnobb ;
  else if (name == 3) h_puw_temp = h_puw_TTHnobb_pow ;
  else if (name == 4) h_puw_temp = h_puw_TTJets ;
  else if (name == 5) h_puw_temp = h_puw_TTLLJets_m1to10 ;
  else if (name == 6) h_puw_temp = h_puw_TTTT ;
  else if (name == 7) h_puw_temp = h_puw_TTTT_ext ;
  else if (name == 8) h_puw_temp = h_puw_TTWToLNu ;
  else if (name == 9) h_puw_temp = h_puw_TTWZ ;
  else if (name == 10) h_puw_temp = h_puw_TTW_LO ;
  else if (name == 11) h_puw_temp = h_puw_TTZH ;
  else if (name == 12) h_puw_temp = h_puw_TTZToLLNuNu ;
  else if (name == 13) h_puw_temp = h_puw_T_tWch_noFullHad ;
  else if (name == 14) h_puw_temp = h_puw_T_tch_powheg ;
  else if (name == 15) h_puw_temp = h_puw_WJetsToLNu_LO ;
  else if (name == 16) h_puw_temp = h_puw_WWW_4F ;
  else if (name == 17) h_puw_temp = h_puw_WZG ;
  else if (name == 18) h_puw_temp = h_puw_WZTo3LNu_amcatnlo ;
  else if (name == 19) h_puw_temp = h_puw_WZZ ;
  else if (name == 20) h_puw_temp = h_puw_ZZTo2L2Nu ;
  else if (name == 21) h_puw_temp = h_puw_ZZZ ;
  else if (name == 22) h_puw_temp = h_puw_tZq_ll ;
  float puw = h_puw_temp->GetBinContent(h_puw_temp->FindBin(nInt)); 
  //delete h_puw_temp;
  return puw;
}

