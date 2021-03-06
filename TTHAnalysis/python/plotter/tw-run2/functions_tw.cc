#include "TMath.h"
#include <assert.h>
#include <iostream>
#include "TH2F.h"
#include "TH1F.h"
#include "TFile.h"
#include "TSystem.h"
#include "TLorentzVector.h"
#include "TGraphAsymmErrors.h"

int getnJetnBJet(int nJ, int nBJ) {
  int bin = -1;

  if      (nJ == 0)             bin = 0;
  else if (nJ == 1 && nBJ == 0) bin = 1;
  else if (nJ == 1 && nBJ >= 1) bin = 2;
  else if (nJ == 2 && nBJ == 0) bin = 3;
  else if (nJ == 2 && nBJ == 1) bin = 4;
  else if (nJ == 2 && nBJ >= 2) bin = 5;
  else if (nJ >= 3 && nBJ >= 0) bin = 6;
  return bin;
}


int getnLooseJets(int nlj, int nj) {
  int bin = -1;
  bin = nlj - nj;

  return bin;
}


float getSergioBDtW(double BDT) {
  if      (BDT < -0.536042) return 1;
  else if (BDT < -0.423882) return 2;
  else if (BDT < -0.324371) return 3;
  else if (BDT < -0.237901) return 4;
  else if (BDT < -0.151821) return 5;
  else if (BDT < -0.062366) return 6;
  else if (BDT < 0.027435)  return 7;
  else if (BDT < 0.137813)  return 8;
  else if (BDT < 0.260178)  return 9;
  else                      return 10;
}


float getSergioBDtWOther(double BDT) {
  if      (BDT < -0.165198) return 1;
  else if (BDT < -0.071037) return 2;
  else if (BDT < -0.002801) return 3;
  else if (BDT < 0.047232)  return 4;
  else if (BDT < 0.111612)  return 5;
  else                      return 6;
}


float getBDtW(double BDT) {
  if      (BDT < -0.393907   ) return 1;
  else if (BDT < -0.303371) return 2;
  else if (BDT < -0.234096) return 3;
  else if (BDT < -0.162641) return 4;
  else if (BDT < -0.078996) return 5;
  else if (BDT < 0.006054) return 6;
  else if (BDT < 0.101833) return 7;
  else if (BDT < 0.205728) return 8;
  else if (BDT < 0.284059) return 9;
  else                       return 10;
}

float getBDtWOther(double BDT) {
  if      (BDT < -0.226015) return 1;
  else if (BDT < -0.090281) return 2;
  else if (BDT < 0.001832) return 3;
  else if (BDT < 0.070456) return 4;
  else if (BDT < 0.144660) return 5;
  else                       return 6;
}

Float_t getBDtW20bins(Double_t BDT){
  if      (BDT < -0.459502   ) return 1;
  else if (BDT < -0.393907) return 2;
  else if (BDT < -0.344764) return 3;
  else if (BDT < -0.303371) return 4;
  else if (BDT < -0.267338) return 5;
  else if (BDT < -0.234096) return 6;
  else if (BDT < -0.199462) return 7;
  else if (BDT < -0.162641) return 8;
  else if (BDT < -0.121428) return 9;
  else if (BDT < -0.078996) return 10;
  else if (BDT < -0.036689) return 11;
  else if (BDT < 0.006054) return 12;
  else if (BDT < 0.051079) return 13;
  else if (BDT < 0.101833) return 14;
  else if (BDT < 0.156526) return 15;
  else if (BDT < 0.205728) return 16;
  else if (BDT < 0.245920) return 17;
  else if (BDT < 0.284059) return 18;
  else if (BDT < 0.329370) return 19;
  else                       return 20;
}

Float_t getBDtWOther12bins(Double_t BDT){
  if      (BDT < -0.328624   ) return 1;
  else if (BDT < -0.226015) return 2;
  else if (BDT < -0.149537) return 3;
  else if (BDT < -0.090281) return 4;
  else if (BDT < -0.042565) return 5;
  else if (BDT < 0.001832) return 6;
  else if (BDT < 0.035527) return 7;
  else if (BDT < 0.070456) return 8;
  else if (BDT < 0.102554) return 9;
  else if (BDT < 0.144660) return 10;
  else if (BDT < 0.190770) return 11;
  else                       return 12;
}

Float_t getBDtW20bins2016(Double_t BDT){
  if      (BDT < -0.457570   ) return 1;
  else if (BDT < -0.390032) return 2;
  else if (BDT < -0.340951) return 3;
  else if (BDT < -0.296995) return 4;
  else if (BDT < -0.261239) return 5;
  else if (BDT < -0.228140) return 6;
  else if (BDT < -0.192033) return 7;
  else if (BDT < -0.150735) return 8;
  else if (BDT < -0.106399) return 9;
  else if (BDT < -0.062455) return 10;
  else if (BDT < -0.020371) return 11;
  else if (BDT < 0.021572) return 12;
  else if (BDT < 0.065968) return 13;
  else if (BDT < 0.118537) return 14;
  else if (BDT < 0.170133) return 15;
  else if (BDT < 0.216121) return 16;
  else if (BDT < 0.253415) return 17;
  else if (BDT < 0.290177) return 18;
  else if (BDT < 0.331664) return 19;
  else                       return 20;
}


Float_t getBDtWOther12bins2016(Double_t BDT){
  if      (BDT < -0.324747   ) return 1;
  else if (BDT < -0.217631) return 2;
  else if (BDT < -0.146730) return 3;
  else if (BDT < -0.090386) return 4;
  else if (BDT < -0.043548) return 5;
  else if (BDT < 0.000351) return 6;
  else if (BDT < 0.036564) return 7;
  else if (BDT < 0.068998) return 8;
  else if (BDT < 0.100950) return 9;
  else if (BDT < 0.141745) return 10;
  else if (BDT < 0.188265) return 11;
  else                       return 12;
}


Float_t getBDtW20bins2017(Double_t BDT){
  if      (BDT < -0.460619   ) return 1;
  else if (BDT < -0.396144) return 2;
  else if (BDT < -0.348338) return 3;
  else if (BDT < -0.305084) return 4;
  else if (BDT < -0.268622) return 5;
  else if (BDT < -0.236352) return 6;
  else if (BDT < -0.201900) return 7;
  else if (BDT < -0.162915) return 8;
  else if (BDT < -0.120638) return 9;
  else if (BDT < -0.077306) return 10;
  else if (BDT < -0.034544) return 11;
  else if (BDT < 0.007121) return 12;
  else if (BDT < 0.050089) return 13;
  else if (BDT < 0.101029) return 14;
  else if (BDT < 0.156331) return 15;
  else if (BDT < 0.206472) return 16;
  else if (BDT < 0.246745) return 17;
  else if (BDT < 0.284485) return 18;
  else if (BDT < 0.328774) return 19;
  else                       return 20;
}


Float_t getBDtWOther12bins2017(Double_t BDT){
  if      (BDT < -0.321931   ) return 1;
  else if (BDT < -0.212250) return 2;
  else if (BDT < -0.141561) return 3;
  else if (BDT < -0.085459) return 4;
  else if (BDT < -0.037877) return 5;
  else if (BDT < 0.004906) return 6;
  else if (BDT < 0.040585) return 7;
  else if (BDT < 0.072473) return 8;
  else if (BDT < 0.105270) return 9;
  else if (BDT < 0.145839) return 10;
  else if (BDT < 0.190801) return 11;
  else                       return 12;
}


Float_t getBDtW20bins2018(Double_t BDT){
  if      (BDT < -0.463975   ) return 1;
  else if (BDT < -0.400204) return 2;
  else if (BDT < -0.352835) return 3;
  else if (BDT < -0.309636) return 4;
  else if (BDT < -0.272623) return 5;
  else if (BDT < -0.240571) return 6;
  else if (BDT < -0.206803) return 7;
  else if (BDT < -0.169144) return 8;
  else if (BDT < -0.127118) return 9;
  else if (BDT < -0.083692) return 10;
  else if (BDT < -0.040580) return 11;
  else if (BDT < 0.000580) return 12;
  else if (BDT < 0.042671) return 13;
  else if (BDT < 0.091477) return 14;
  else if (BDT < 0.147948) return 15;
  else if (BDT < 0.199857) return 16;
  else if (BDT < 0.243017) return 17;
  else if (BDT < 0.281659) return 18;
  else if (BDT < 0.327042) return 19;
  else                       return 20;
}

Float_t getBDtWOther12bins2018(Double_t BDT){
  if      (BDT < -0.333004   ) return 1;
  else if (BDT < -0.223936) return 2;
  else if (BDT < -0.150949) return 3;
  else if (BDT < -0.093367) return 4;
  else if (BDT < -0.045914) return 5;
  else if (BDT < -0.001283) return 6;
  else if (BDT < 0.035111) return 7;
  else if (BDT < 0.068367) return 8;
  else if (BDT < 0.100728) return 9;
  else if (BDT < 0.142062) return 10;
  else if (BDT < 0.188972) return 11;
  else                       return 12;
}

void functions_tw() {}


Float_t twoDPlotCentrality_Jetloose(Double_t Cent, Double_t Loose) {
  if      (Cent < 0.25 && Loose < 8.5)       return 1;
  else if (Cent < 0.25 && Loose < 17.)       return 2;
  else if (Cent < 0.25 && Loose < 25.5)      return 3;
  else if (Cent < 0.25 && Loose < 34)        return 4;
  
  else if (Cent < 0.5 && Loose < 8.5)        return 5;
  else if (Cent < 0.5 && Loose < 17.)        return 6;
  else if (Cent < 0.5 && Loose < 25.5)       return 7;
  else if (Cent < 0.5 && Loose < 34)         return 8;

  else if (Cent < 0.75 && Loose < 8.5)       return 9;
  else if (Cent < 0.75 && Loose < 17.)       return 10;
  else if (Cent < 0.75 && Loose < 25.5)      return 11;
  else if (Cent < 0.75 && Loose < 34)        return 12;
  
  else if (Cent < 1. && Loose < 8.5)         return 13;
  else if (Cent < 1. && Loose < 17.)         return 14;
  else if (Cent < 1. && Loose < 25.5)        return 15;
  else if (Cent < 1. && Loose < 34)          return 16;
  
  else return -20;
}




//////////////////////////////////////////////


