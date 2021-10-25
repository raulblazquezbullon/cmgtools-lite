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
  else if (nJ == 1 && nBJ == 1) bin = 2;
  else if (nJ == 2 && nBJ == 0) bin = 3;
  else if (nJ == 2 && nBJ == 1) bin = 4;
  else if (nJ == 2 && nBJ == 2) bin = 5;
  else if (nJ == 3 && nBJ == 0) bin = 6;
  else if (nJ == 3 && nBJ == 1) bin = 7;
  else if (nJ == 3 && nBJ == 2) bin = 8;
  else if (nJ == 3 && nBJ == 3) bin = 9;
  else if (nJ >= 4 && nBJ >= 0) bin = 10;
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
  if      (BDT < -0.394903   ) return 1;
  else if (BDT < -0.308732) return 2;
  else if (BDT < -0.243086) return 3;
  else if (BDT < -0.169425) return 4;
  else if (BDT < -0.083060) return 5;
  else if (BDT < 0.003659) return 6;
  else if (BDT < 0.104736) return 7;
  else if (BDT < 0.209614) return 8;
  else if (BDT < 0.286681) return 9;
  else                       return 10;
}

float getBDtWOther(double BDT) {
  if      (BDT < -0.231522   ) return 1;
  else if (BDT < -0.090321) return 2;
  else if (BDT < 0.004031) return 3;
  else if (BDT < 0.072420) return 4;
  else if (BDT < 0.142097) return 5;
  else                       return 6;
}

Float_t getBDtW20bins(Double_t BDT){
  if      (BDT < -0.461123   ) return 1;
  else if (BDT < -0.394903) return 2;
  else if (BDT < -0.349115) return 3;
  else if (BDT < -0.308732) return 4;
  else if (BDT < -0.274641) return 5;
  else if (BDT < -0.243086) return 6;
  else if (BDT < -0.208713) return 7;
  else if (BDT < -0.169425) return 8;
  else if (BDT < -0.126347) return 9;
  else if (BDT < -0.083060) return 10;
  else if (BDT < -0.040647) return 11;
  else if (BDT < 0.003659) return 12;
  else if (BDT < 0.051473) return 13;
  else if (BDT < 0.104736) return 14;
  else if (BDT < 0.160423) return 15;
  else if (BDT < 0.209614) return 16;
  else if (BDT < 0.248757) return 17;
  else if (BDT < 0.286681) return 18;
  else if (BDT < 0.331748) return 19;
  else                       return 20;
}

Float_t getBDtWOther12bins(Double_t BDT){
  if      (BDT < -0.330874   ) return 1;
  else if (BDT < -0.231522) return 2;
  else if (BDT < -0.151637) return 3;
  else if (BDT < -0.090321) return 4;
  else if (BDT < -0.039976) return 5;
  else if (BDT < 0.004031) return 6;
  else if (BDT < 0.042714) return 7;
  else if (BDT < 0.072420) return 8;
  else if (BDT < 0.102859) return 9;
  else if (BDT < 0.142097) return 10;
  else if (BDT < 0.189463) return 11;
  else                       return 12;
}

Float_t getBDtW20bins2016(Double_t BDT){
  if      (BDT < -0.455999   ) return 1;
  else if (BDT < -0.388425) return 2;
  else if (BDT < -0.342173) return 3;
  else if (BDT < -0.301327) return 4;
  else if (BDT < -0.267861) return 5;
  else if (BDT < -0.234927) return 6;
  else if (BDT < -0.198879) return 7;
  else if (BDT < -0.157015) return 8;
  else if (BDT < -0.112911) return 9;
  else if (BDT < -0.069849) return 10;
  else if (BDT < -0.027166) return 11;
  else if (BDT < 0.018103) return 12;
  else if (BDT < 0.066693) return 13;
  else if (BDT < 0.120367) return 14;
  else if (BDT < 0.173262) return 15;
  else if (BDT < 0.218525) return 16;
  else if (BDT < 0.254682) return 17;
  else if (BDT < 0.291817) return 18;
  else if (BDT < 0.334913) return 19;
  else                       return 20;
}

Float_t getBDtWOther12bins2016(Double_t BDT){
  if      (BDT < -0.328925   ) return 1;
  else if (BDT < -0.230412) return 2;
  else if (BDT < -0.151181) return 3;
  else if (BDT < -0.090706) return 4;
  else if (BDT < -0.040194) return 5;
  else if (BDT < 0.003578) return 6;
  else if (BDT < 0.042203) return 7;
  else if (BDT < 0.071893) return 8;
  else if (BDT < 0.101937) return 9;
  else if (BDT < 0.141107) return 10;
  else if (BDT < 0.188536) return 11;
  else                       return 12;
}

Float_t getBDtW20bins2017(Double_t BDT){
  if      (BDT < -0.461081   ) return 1;
  else if (BDT < -0.395311) return 2;
  else if (BDT < -0.349617) return 3;
  else if (BDT < -0.309618) return 4;
  else if (BDT < -0.275239) return 5;
  else if (BDT < -0.243894) return 6;
  else if (BDT < -0.209695) return 7;
  else if (BDT < -0.170520) return 8;
  else if (BDT < -0.127859) return 9;
  else if (BDT < -0.084849) return 10;
  else if (BDT < -0.042257) return 11;
  else if (BDT < 0.002042) return 12;
  else if (BDT < 0.050026) return 13;
  else if (BDT < 0.103435) return 14;
  else if (BDT < 0.159408) return 15;
  else if (BDT < 0.209200) return 16;
  else if (BDT < 0.248576) return 17;
  else if (BDT < 0.286315) return 18;
  else if (BDT < 0.331783) return 19;
  else                       return 20;
}

Float_t getBDtWOther12bins2017(Double_t BDT){
  if      (BDT < -0.325611   ) return 1;
  else if (BDT < -0.225452) return 2;
  else if (BDT < -0.145580) return 3;
  else if (BDT < -0.085929) return 4;
  else if (BDT < -0.035828) return 5;
  else if (BDT < 0.006980) return 6;
  else if (BDT < 0.045173) return 7;
  else if (BDT < 0.074272) return 8;
  else if (BDT < 0.105169) return 9;
  else if (BDT < 0.143977) return 10;
  else if (BDT < 0.190796) return 11;
  else                       return 12;
}

Float_t getBDtW20bins2018(Double_t BDT){
  if      (BDT < -0.464003   ) return 1;
  else if (BDT < -0.398152) return 2;
  else if (BDT < -0.352559) return 3;
  else if (BDT < -0.312201) return 4;
  else if (BDT < -0.278037) return 5;
  else if (BDT < -0.246939) return 6;
  else if (BDT < -0.213285) return 7;
  else if (BDT < -0.175256) return 8;
  else if (BDT < -0.132640) return 9;
  else if (BDT < -0.089468) return 10;
  else if (BDT < -0.046956) return 11;
  else if (BDT < -0.003587) return 12;
  else if (BDT < 0.043920) return 13;
  else if (BDT < 0.096688) return 14;
  else if (BDT < 0.152812) return 15;
  else if (BDT < 0.204278) return 16;
  else if (BDT < 0.245295) return 17;
  else if (BDT < 0.283804) return 18;
  else if (BDT < 0.329821) return 19;
  else                       return 20;
}

Float_t getBDtWOther12bins2018(Double_t BDT){
  if      (BDT < -0.335368   ) return 1;
  else if (BDT < -0.235990) return 2;
  else if (BDT < -0.156064) return 3;
  else if (BDT < -0.092985) return 4;
  else if (BDT < -0.042739) return 5;
  else if (BDT < 0.002326) return 6;
  else if (BDT < 0.041276) return 7;
  else if (BDT < 0.071529) return 8;
  else if (BDT < 0.101900) return 9;
  else if (BDT < 0.141358) return 10;
  else if (BDT < 0.189104) return 11;
  else                       return 12;
}

Float_t getBDtW20binsDYtrain(Double_t BDT){
  if      (BDT < -0.461131   ) return 1;
  else if (BDT < -0.394919) return 2;
  else if (BDT < -0.349125) return 3;
  else if (BDT < -0.308739) return 4;
  else if (BDT < -0.274655) return 5;
  else if (BDT < -0.243111) return 6;
  else if (BDT < -0.208747) return 7;
  else if (BDT < -0.169462) return 8;
  else if (BDT < -0.126396) return 9;
  else if (BDT < -0.083119) return 10;
  else if (BDT < -0.040716) return 11;
  else if (BDT < 0.003589) return 12;
  else if (BDT < 0.051413) return 13;
  else if (BDT < 0.104710) return 14;
  else if (BDT < 0.160402) return 15;
  else if (BDT < 0.209588) return 16;
  else if (BDT < 0.248742) return 17;
  else if (BDT < 0.286687) return 18;
  else if (BDT < 0.331751) return 19;
  else                       return 20;
}

Float_t getBDtWOther12binsDYtrain(Double_t BDT){
  if      (BDT < -0.330890   ) return 1;
  else if (BDT < -0.231538) return 2;
  else if (BDT < -0.151656) return 3;
  else if (BDT < -0.090348) return 4;
  else if (BDT < -0.040016) return 5;
  else if (BDT < 0.003993) return 6;
  else if (BDT < 0.042737) return 7;
  else if (BDT < 0.072441) return 8;
  else if (BDT < 0.102874) return 9;
  else if (BDT < 0.142115) return 10;
  else if (BDT < 0.189464) return 11;
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


Float_t theBDT1j1t50Bins(Double_t BDT){
  if      (BDT < -0.531042   ) return 1;
  else if (BDT < -0.479714) return 2;
  else if (BDT < -0.444680) return 3;
  else if (BDT < -0.417266) return 4;
  else if (BDT < -0.394919) return 5;
  else if (BDT < -0.375505) return 6;
  else if (BDT < -0.357687) return 7;
  else if (BDT < -0.340590) return 8;
  else if (BDT < -0.324245) return 9;
  else if (BDT < -0.308739) return 10;
  else if (BDT < -0.294251) return 11;
  else if (BDT < -0.280919) return 12;
  else if (BDT < -0.268479) return 13;
  else if (BDT < -0.256045) return 14;
  else if (BDT < -0.243111) return 15;
  else if (BDT < -0.229731) return 16;
  else if (BDT < -0.215857) return 17;
  else if (BDT < -0.201288) return 18;
  else if (BDT < -0.185763) return 19;
  else if (BDT < -0.169462) return 20;
  else if (BDT < -0.152500) return 21;
  else if (BDT < -0.135079) return 22;
  else if (BDT < -0.117613) return 23;
  else if (BDT < -0.100375) return 24;
  else if (BDT < -0.083119) return 25;
  else if (BDT < -0.066092) return 26;
  else if (BDT < -0.049102) return 27;
  else if (BDT < -0.032019) return 28;
  else if (BDT < -0.014546) return 29;
  else if (BDT < 0.003589) return 30;
  else if (BDT < 0.022231) return 31;
  else if (BDT < 0.041702) return 32;
  else if (BDT < 0.061454) return 33;
  else if (BDT < 0.082721) return 34;
  else if (BDT < 0.104710) return 35;
  else if (BDT < 0.126753) return 36;
  else if (BDT < 0.149253) return 37;
  else if (BDT < 0.171045) return 38;
  else if (BDT < 0.191027) return 39;
  else if (BDT < 0.209588) return 40;
  else if (BDT < 0.226284) return 41;
  else if (BDT < 0.241344) return 42;
  else if (BDT < 0.256110) return 43;
  else if (BDT < 0.271176) return 44;
  else if (BDT < 0.286687) return 45;
  else if (BDT < 0.303926) return 46;
  else if (BDT < 0.322116) return 47;
  else if (BDT < 0.342286) return 48;
  else if (BDT < 0.365327) return 49;
  else                       return 50;
}


Float_t theBDT2j1t50Bins(Double_t BDT){
  if      (BDT < -0.458603   ) return 1;
  else if (BDT < -0.410638) return 2;
  else if (BDT < -0.370660) return 3;
  else if (BDT < -0.335971) return 4;
  else if (BDT < -0.308089) return 5;
  else if (BDT < -0.283007) return 6;
  else if (BDT < -0.259459) return 7;
  else if (BDT < -0.238437) return 8;
  else if (BDT < -0.217556) return 9;
  else if (BDT < -0.198267) return 10;
  else if (BDT < -0.178844) return 11;
  else if (BDT < -0.160835) return 12;
  else if (BDT < -0.142957) return 13;
  else if (BDT < -0.126047) return 14;
  else if (BDT < -0.111767) return 15;
  else if (BDT < -0.098790) return 16;
  else if (BDT < -0.086138) return 17;
  else if (BDT < -0.074262) return 18;
  else if (BDT < -0.062037) return 19;
  else if (BDT < -0.050358) return 20;
  else if (BDT < -0.037997) return 21;
  else if (BDT < -0.026170) return 22;
  else if (BDT < -0.015013) return 23;
  else if (BDT < -0.005175) return 24;
  else if (BDT < 0.003993) return 25;
  else if (BDT < 0.013115) return 26;
  else if (BDT < 0.022612) return 27;
  else if (BDT < 0.032432) return 28;
  else if (BDT < 0.041368) return 29;
  else if (BDT < 0.048798) return 30;
  else if (BDT < 0.055777) return 31;
  else if (BDT < 0.063245) return 32;
  else if (BDT < 0.070276) return 33;
  else if (BDT < 0.076870) return 34;
  else if (BDT < 0.083596) return 35;
  else if (BDT < 0.090751) return 36;
  else if (BDT < 0.098622) return 37;
  else if (BDT < 0.107260) return 38;
  else if (BDT < 0.116337) return 39;
  else if (BDT < 0.125368) return 40;
  else if (BDT < 0.135073) return 41;
  else if (BDT < 0.145428) return 42;
  else if (BDT < 0.156100) return 43;
  else if (BDT < 0.167529) return 44;
  else if (BDT < 0.179105) return 45;
  else if (BDT < 0.191644) return 46;
  else if (BDT < 0.206098) return 47;
  else if (BDT < 0.225493) return 48;
  else if (BDT < 0.257985) return 49;
  else                       return 50;
}


Float_t theBDTJetsFwd1j1t(Double_t BDT){
  if      (BDT < -0.475125   ) return 1;
  else if (BDT < -0.410723) return 2;
  else if (BDT < -0.364908) return 3;
  else if (BDT < -0.326503) return 4;
  else if (BDT < -0.290441) return 5;
  else if (BDT < -0.256767) return 6;
  else if (BDT < -0.225924) return 7;
  else if (BDT < -0.193938) return 8;
  else if (BDT < -0.159188) return 9;
  else if (BDT < -0.119522) return 10;
  else if (BDT < -0.076750) return 11;
  else if (BDT < -0.032553) return 12;
  else if (BDT < 0.013334) return 13;
  else if (BDT < 0.066104) return 14;
  else if (BDT < 0.133339) return 15;
  else if (BDT < 0.214572) return 16;
  else if (BDT < 0.280748) return 17;
  else if (BDT < 0.333961) return 18;
  else if (BDT < 0.381680) return 19;
  else                       return 20;
}


Float_t theBDTJetsFwd2j1t(Double_t BDT){
  if      (BDT < -0.330890   ) return 1;
  else if (BDT < -0.231538) return 2;
  else if (BDT < -0.151656) return 3;
  else if (BDT < -0.090348) return 4;
  else if (BDT < -0.040016) return 5;
  else if (BDT < 0.003993) return 6;
  else if (BDT < 0.042737) return 7;
  else if (BDT < 0.072441) return 8;
  else if (BDT < 0.102874) return 9;
  else if (BDT < 0.142115) return 10;
  else if (BDT < 0.189464) return 11;
  else                       return 12;
}


//////////////////////////////////////////////





