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

// BDTs with TOP-17-018 binning for Run2-------
Float_t getBDtW10bins(Double_t BDT){
  if      (BDT < -0.394919   ) return 1;
  else if (BDT < -0.308739) return 2;
  else if (BDT < -0.243111) return 3;
  else if (BDT < -0.169462) return 4;
  else if (BDT < -0.083119) return 5;
  else if (BDT < 0.003589) return 6;
  else if (BDT < 0.104710) return 7;
  else if (BDT < 0.209588) return 8;
  else if (BDT < 0.286687) return 9;
  else                       return 10;
} 

Float_t getBDtWOther6bins(Double_t BDT){
  if      (BDT < -0.231538   ) return 1;
  else if (BDT < -0.090348) return 2;
  else if (BDT < 0.003993) return 3;
  else if (BDT < 0.072441) return 4;
  else if (BDT < 0.142115) return 5;
  else                       return 6;
} 
// BDTs with TOP-17-018 binning for Run2-------

// BDTs with New binning for Run2, 2016, 2017, 2018-------
Float_t getBDtW20bins(Double_t BDT){
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

Float_t getBDtWOther12bins(Double_t BDT){
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

Float_t getBDtW20bins2016(Double_t BDT){
  if      (BDT < -0.456029   ) return 1;
  else if (BDT < -0.388434) return 2;
  else if (BDT < -0.342217) return 3;
  else if (BDT < -0.301377) return 4;
  else if (BDT < -0.267863) return 5;
  else if (BDT < -0.234974) return 6;
  else if (BDT < -0.198942) return 7;
  else if (BDT < -0.157048) return 8;
  else if (BDT < -0.112976) return 9;
  else if (BDT < -0.069912) return 10;
  else if (BDT < -0.027251) return 11;
  else if (BDT < 0.018050) return 12;
  else if (BDT < 0.066591) return 13;
  else if (BDT < 0.120288) return 14;
  else if (BDT < 0.173248) return 15;
  else if (BDT < 0.218489) return 16;
  else if (BDT < 0.254672) return 17;
  else if (BDT < 0.291796) return 18;
  else if (BDT < 0.334867) return 19;
  else                       return 20;
}

Float_t getBDtWOther12bins2016(Double_t BDT){
  if      (BDT < -0.328959   ) return 1;
  else if (BDT < -0.230420) return 2;
  else if (BDT < -0.151201) return 3;
  else if (BDT < -0.090729) return 4;
  else if (BDT < -0.040253) return 5;
  else if (BDT < 0.003545) return 6;
  else if (BDT < 0.042239) return 7;
  else if (BDT < 0.071917) return 8;
  else if (BDT < 0.101958) return 9;
  else if (BDT < 0.141120) return 10;
  else if (BDT < 0.188547) return 11;
  else                       return 12;
}

Float_t getBDtW20bins2017(Double_t BDT){
  if      (BDT < -0.461109   ) return 1;
  else if (BDT < -0.395337) return 2;
  else if (BDT < -0.349674) return 3;
  else if (BDT < -0.309655) return 4;
  else if (BDT < -0.275257) return 5;
  else if (BDT < -0.243919) return 6;
  else if (BDT < -0.209776) return 7;
  else if (BDT < -0.170610) return 8;
  else if (BDT < -0.127930) return 9;
  else if (BDT < -0.084911) return 10;
  else if (BDT < -0.042367) return 11;
  else if (BDT < 0.001931) return 12;
  else if (BDT < 0.049901) return 13;
  else if (BDT < 0.103354) return 14;
  else if (BDT < 0.159302) return 15;
  else if (BDT < 0.209136) return 16;
  else if (BDT < 0.248545) return 17;
  else if (BDT < 0.286302) return 18;
  else if (BDT < 0.331751) return 19;
  else                       return 20;
}

Float_t getBDtWOther12bins2017(Double_t BDT){
  if      (BDT < -0.325644   ) return 1;
  else if (BDT < -0.225465) return 2;
  else if (BDT < -0.145586) return 3;
  else if (BDT < -0.085951) return 4;
  else if (BDT < -0.035870) return 5;
  else if (BDT < 0.006940) return 6;
  else if (BDT < 0.045186) return 7;
  else if (BDT < 0.074292) return 8;
  else if (BDT < 0.105188) return 9;
  else if (BDT < 0.143993) return 10;
  else if (BDT < 0.190798) return 11;
  else                       return 12;
}

Float_t getBDtW20bins2018(Double_t BDT){
  if      (BDT < -0.463974   ) return 1;
  else if (BDT < -0.398206) return 2;
  else if (BDT < -0.352609) return 3;
  else if (BDT < -0.312296) return 4;
  else if (BDT < -0.278090) return 5;
  else if (BDT < -0.246978) return 6;
  else if (BDT < -0.213361) return 7;
  else if (BDT < -0.175353) return 8;
  else if (BDT < -0.132751) return 9;
  else if (BDT < -0.089566) return 10;
  else if (BDT < -0.047062) return 11;
  else if (BDT < -0.003654) return 12;
  else if (BDT < 0.043785) return 13;
  else if (BDT < 0.096573) return 14;
  else if (BDT < 0.152775) return 15;
  else if (BDT < 0.204231) return 16;
  else if (BDT < 0.245311) return 17;
  else if (BDT < 0.283771) return 18;
  else if (BDT < 0.329801) return 19;
  else                       return 20;
}

Float_t getBDtWOther12bins2018(Double_t BDT){
  if      (BDT < -0.335385   ) return 1;
  else if (BDT < -0.236024) return 2;
  else if (BDT < -0.156050) return 3;
  else if (BDT < -0.093005) return 4;
  else if (BDT < -0.042810) return 5;
  else if (BDT < 0.002287) return 6;
  else if (BDT < 0.041302) return 7;
  else if (BDT < 0.071554) return 8;
  else if (BDT < 0.101917) return 9;
  else if (BDT < 0.141381) return 10;
  else if (BDT < 0.189107) return 11;
  else                       return 12;
}
// BDTs with New binning for Run2, 2016, 2017, 2018-------

// BDTs with New binning for Run2 AND DY training (bkg. cte)------- 
Float_t getBDtW20binsDYtrain(Double_t BDT){
  if      (BDT < -0.409113   ) return 1;
  else if (BDT < -0.333828) return 2;
  else if (BDT < -0.283889) return 3;
  else if (BDT < -0.240871) return 4;
  else if (BDT < -0.199900) return 5;
  else if (BDT < -0.162401) return 6;
  else if (BDT < -0.128419) return 7;
  else if (BDT < -0.094963) return 8;
  else if (BDT < -0.058517) return 9;
  else if (BDT < -0.018286) return 10;
  else if (BDT < 0.022496) return 11;
  else if (BDT < 0.066482) return 12;
  else if (BDT < 0.112538) return 13;
  else if (BDT < 0.157583) return 14;
  else if (BDT < 0.197390) return 15;
  else if (BDT < 0.234466) return 16;
  else if (BDT < 0.272865) return 17;
  else if (BDT < 0.316556) return 18;
  else if (BDT < 0.368564) return 19;
  else                       return 20;
}

Float_t getBDtWOther12binsDYtrain(Double_t BDT){
  if      (BDT < -0.275660   ) return 1;
  else if (BDT < -0.185791) return 2;
  else if (BDT < -0.113678) return 3;
  else if (BDT < -0.053044) return 4;
  else if (BDT < -0.012127) return 5;
  else if (BDT < 0.013890) return 6;
  else if (BDT < 0.033086) return 7;
  else if (BDT < 0.052918) return 8;
  else if (BDT < 0.075512) return 9;
  else if (BDT < 0.104013) return 10;
  else if (BDT < 0.143557) return 11;
  else                       return 12;
} 
// BDTs with New binning for Run2 AND DY training (bkg. cte)-------

// BDTs with TOP-17-018 binning for Run2 AND DY training (bkg. cte)-------
Float_t getBDtW10binsDYtrain(Double_t BDT){
  if      (BDT < -0.333828   ) return 1;
  else if (BDT < -0.240871) return 2;
  else if (BDT < -0.162401) return 3;
  else if (BDT < -0.094963) return 4;
  else if (BDT < -0.018286) return 5;
  else if (BDT < 0.066482) return 6;
  else if (BDT < 0.157583) return 7;
  else if (BDT < 0.234466) return 8;
  else if (BDT < 0.316556) return 9;
  else                       return 10;
}

Float_t getBDtWOther6binsDYtrain(Double_t BDT){
  if      (BDT < -0.185791   ) return 1;
  else if (BDT < -0.053044) return 2;
  else if (BDT < 0.013890) return 3;
  else if (BDT < 0.052918) return 4;
  else if (BDT < 0.104013) return 5;
  else                       return 6;
} 
// BDTs with TOP-17-018 binning for Run2 AND DY training (bkg. cte)-------


Float_t getBDtW20binsSinNlooseJets(Double_t BDT){
  if      (BDT < -0.427731   ) return 1;
  else if (BDT < -0.367246) return 2;
  else if (BDT < -0.334862) return 3;
  else if (BDT < -0.307369) return 4;
  else if (BDT < -0.278291) return 5;
  else if (BDT < -0.245749) return 6;
  else if (BDT < -0.208190) return 7;
  else if (BDT < -0.169064) return 8;
  else if (BDT < -0.130041) return 9;
  else if (BDT < -0.090741) return 10;
  else if (BDT < -0.049078) return 11;
  else if (BDT < -0.003784) return 12;
  else if (BDT < 0.046958) return 13;
  else if (BDT < 0.101653) return 14;
  else if (BDT < 0.159334) return 15;
  else if (BDT < 0.209248) return 16;
  else if (BDT < 0.248072) return 17;
  else if (BDT < 0.286556) return 18;
  else if (BDT < 0.332004) return 19;
  else                       return 20;
}

Float_t getBDtW20binsSinNlooseJetsNiLooseJetPt(Double_t BDT){
  if      (BDT < -0.313361   ) return 1;
  else if (BDT < -0.223268) return 2;
  else if (BDT < -0.162437) return 3;
  else if (BDT < -0.120287) return 4;
  else if (BDT < -0.088388) return 5;
  else if (BDT < -0.062983) return 6;
  else if (BDT < -0.040645) return 7;
  else if (BDT < -0.021556) return 8;
  else if (BDT < -0.004917) return 9;
  else if (BDT < 0.009829) return 10;
  else if (BDT < 0.023266) return 11;
  else if (BDT < 0.036785) return 12;
  else if (BDT < 0.051073) return 13;
  else if (BDT < 0.065885) return 14;
  else if (BDT < 0.081091) return 15;
  else if (BDT < 0.096607) return 16;
  else if (BDT < 0.112405) return 17;
  else if (BDT < 0.129095) return 18;
  else if (BDT < 0.152932) return 19;
  else                       return 20;
}

Float_t getBDtW20binsNlooseJetsgeq2(Double_t BDT){
  if      (BDT < -0.451396   ) return 1;
  else if (BDT < -0.395811) return 2;
  else if (BDT < -0.352117) return 3;
  else if (BDT < -0.310493) return 4;
  else if (BDT < -0.275779) return 5;
  else if (BDT < -0.243778) return 6;
  else if (BDT < -0.209595) return 7;
  else if (BDT < -0.169978) return 8;
  else if (BDT < -0.126541) return 9;
  else if (BDT < -0.083200) return 10;
  else if (BDT < -0.040710) return 11;
  else if (BDT < 0.003604) return 12;
  else if (BDT < 0.051621) return 13;
  else if (BDT < 0.104359) return 14;
  else if (BDT < 0.159861) return 15;
  else if (BDT < 0.209395) return 16;
  else if (BDT < 0.248753) return 17;
  else if (BDT < 0.286788) return 18;
  else if (BDT < 0.331792) return 19;
  else                       return 20;
}

// New 1j1t BDT rebinning the NlooseJet variable to [0,1)

Float_t getBDtW20binsNlooseJetsgeq1(Double_t BDT){
  if      (BDT < -0.427731   ) return 1;
  else if (BDT < -0.367246) return 2;
  else if (BDT < -0.334862) return 3;
  else if (BDT < -0.307369) return 4;
  else if (BDT < -0.278291) return 5;
  else if (BDT < -0.245749) return 6;
  else if (BDT < -0.208190) return 7;
  else if (BDT < -0.169064) return 8;
  else if (BDT < -0.130041) return 9;
  else if (BDT < -0.090741) return 10;
  else if (BDT < -0.049078) return 11;
  else if (BDT < -0.003784) return 12;
  else if (BDT < 0.046958) return 13;
  else if (BDT < 0.101653) return 14;
  else if (BDT < 0.159334) return 15;
  else if (BDT < 0.209248) return 16;
  else if (BDT < 0.248072) return 17;
  else if (BDT < 0.286556) return 18;
  else if (BDT < 0.332004) return 19;
  else                       return 20;
}

Float_t getBDtW20bins2016NlooseJetsgeq1(Double_t BDT){
  if      (BDT < -0.428426   ) return 1;
  else if (BDT < -0.367051) return 2;
  else if (BDT < -0.333737) return 3;
  else if (BDT < -0.305153) return 4;
  else if (BDT < -0.274867) return 5;
  else if (BDT < -0.240125) return 6;
  else if (BDT < -0.201256) return 7;
  else if (BDT < -0.160735) return 8;
  else if (BDT < -0.120610) return 9;
  else if (BDT < -0.080385) return 10;
  else if (BDT < -0.037021) return 11;
  else if (BDT < 0.010902) return 12;
  else if (BDT < 0.062069) return 13;
  else if (BDT < 0.117818) return 14;
  else if (BDT < 0.172495) return 15;
  else if (BDT < 0.218046) return 16;
  else if (BDT < 0.254037) return 17;
  else if (BDT < 0.291707) return 18;
  else if (BDT < 0.335131) return 19;
  else                       return 20;
}

Float_t getBDtW20bins2017NlooseJetsgeq1(Double_t BDT){
  if      (BDT < -0.426326   ) return 1;
  else if (BDT < -0.366571) return 2;
  else if (BDT < -0.334518) return 3;
  else if (BDT < -0.307071) return 4;
  else if (BDT < -0.278289) return 5;
  else if (BDT < -0.245884) return 6;
  else if (BDT < -0.208276) return 7;
  else if (BDT < -0.169394) return 8;
  else if (BDT < -0.130694) return 9;
  else if (BDT < -0.091913) return 10;
  else if (BDT < -0.050226) return 11;
  else if (BDT < -0.005328) return 12;
  else if (BDT < 0.045612) return 13;
  else if (BDT < 0.100298) return 14;
  else if (BDT < 0.158439) return 15;
  else if (BDT < 0.208902) return 16;
  else if (BDT < 0.247839) return 17;
  else if (BDT < 0.286138) return 18;
  else if (BDT < 0.331888) return 19;
  else                       return 20;
}

Float_t getBDtW20bins2018NlooseJetsgeq1(Double_t BDT){
  if      (BDT < -0.428349   ) return 1;
  else if (BDT < -0.367836) return 2;
  else if (BDT < -0.335734) return 3;
  else if (BDT < -0.308777) return 4;
  else if (BDT < -0.280193) return 5;
  else if (BDT < -0.248608) return 6;
  else if (BDT < -0.211925) return 7;
  else if (BDT < -0.173383) return 8;
  else if (BDT < -0.134813) return 9;
  else if (BDT < -0.095817) return 10;
  else if (BDT < -0.054926) return 11;
  else if (BDT < -0.010567) return 12;
  else if (BDT < 0.038875) return 13;
  else if (BDT < 0.093388) return 14;
  else if (BDT < 0.151555) return 15;
  else if (BDT < 0.203792) return 16;
  else if (BDT < 0.244592) return 17;
  else if (BDT < 0.283701) return 18;
  else if (BDT < 0.330070) return 19;
  else                       return 20;
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

Float_t getBDtW4bins2016NlooseJetsgeq1(Double_t BDT){
  if      (BDT < -0.274867   ) return 1;
  else if (BDT < -0.080385) return 2;
  else if (BDT < 0.172495) return 3;
  else                       return 4;
}
 
Float_t getBDtWOther4bins2016(Double_t BDT){
  if      (BDT < -0.151201   ) return 1;
  else if (BDT < 0.003545) return 2;
  else if (BDT < 0.101958) return 3;
  else                       return 4;
}

Float_t getBDtW4bins2017NlooseJetsgeq1(Double_t BDT){
  if      (BDT < -0.278289   ) return 1;
  else if (BDT < -0.091913) return 2;
  else if (BDT < 0.158439) return 3;
  else                       return 4;
}
 
Float_t getBDtWOther4bins2017(Double_t BDT){
  if      (BDT < -0.145586   ) return 1;
  else if (BDT < 0.006940) return 2;
  else if (BDT < 0.105188) return 3;
  else                       return 4;
}

Float_t getBDtW4bins2018NlooseJetsgeq1(Double_t BDT){
  if      (BDT < -0.280193   ) return 1;
  else if (BDT < -0.095817) return 2;
  else if (BDT < 0.151555) return 3;
  else                       return 4;
}
 
Float_t getBDtWOther4bins2018(Double_t BDT){
  if      (BDT < -0.156050   ) return 1;
  else if (BDT < 0.002287) return 2;
  else if (BDT < 0.101917) return 3;
  else                       return 4;
}

Float_t getBDtW4binsNlooseJetsgeq1(Double_t BDT){
  if      (BDT < -0.278291   ) return 1;
  else if (BDT < -0.090741) return 2;
  else if (BDT < 0.159334) return 3;
  else                       return 4;
}
 
Float_t getBDtWOther4bins(Double_t BDT){
  if      (BDT < -0.151656   ) return 1;
  else if (BDT < 0.003993) return 2;
  else if (BDT < 0.102874) return 3;
  else                       return 4;
}

//BDTs with the Nloosejets Rebin and with a cut on jets pt greater than 40 GeV
Float_t getBDtW20binsNlooseJetsgeq1AndJetCut(Double_t BDT){
  if      (BDT < -0.440055   ) return 1;
  else if (BDT < -0.376665) return 2;
  else if (BDT < -0.343371) return 3;
  else if (BDT < -0.316526) return 4;
  else if (BDT < -0.287119) return 5;
  else if (BDT < -0.254101) return 6;
  else if (BDT < -0.215942) return 7;
  else if (BDT < -0.176366) return 8;
  else if (BDT < -0.136953) return 9;
  else if (BDT < -0.097228) return 10;
  else if (BDT < -0.055203) return 11;
  else if (BDT < -0.009781) return 12;
  else if (BDT < 0.041030) return 13;
  else if (BDT < 0.095648) return 14;
  else if (BDT < 0.152419) return 15;
  else if (BDT < 0.203942) return 16;
  else if (BDT < 0.245196) return 17;
  else if (BDT < 0.285033) return 18;
  else if (BDT < 0.333386) return 19;
  else                       return 20;
}

Float_t getBDtWOther12binsAndJetCut(Double_t BDT){
  if      (BDT < -0.381486   ) return 1;
  else if (BDT < -0.295981) return 2;
  else if (BDT < -0.233567) return 3;
  else if (BDT < -0.178002) return 4;
  else if (BDT < -0.123574) return 5;
  else if (BDT < -0.076761) return 6;
  else if (BDT < -0.024406) return 7;
  else if (BDT < 0.018130) return 8;
  else if (BDT < 0.059308) return 9;
  else if (BDT < 0.094032) return 10;
  else if (BDT < 0.157961) return 11;
  else                       return 12;
}

//

Float_t getBDtW2bins2016NlooseJetsgeq1(Double_t BDT){
  if (BDT < -0.080385) return 1;
  else                       return 2;
}
 
Float_t getBDtWOther2bins2016(Double_t BDT){
  if (BDT < 0.003545) return 1;
  else                       return 2;
}

Float_t getBDtW2bins2017NlooseJetsgeq1(Double_t BDT){
  if (BDT < -0.091913) return 1;
  else                       return 2;
}
 
Float_t getBDtWOther2bins2017(Double_t BDT){
  if (BDT < 0.006940) return 1;
  else                       return 2;
}

Float_t getBDtW2bins2018NlooseJetsgeq1(Double_t BDT){
  if (BDT < -0.095817) return 1;
  else                       return 2;
}
 
Float_t getBDtWOther2bins2018(Double_t BDT){
  if (BDT < 0.002287) return 1;
  else                       return 2;
}

Float_t getBDtW2binsNlooseJetsgeq1(Double_t BDT){
  if (BDT < -0.090741) return 1;
  else                       return 2;
}
 
Float_t getBDtWOther2bins(Double_t BDT){
  if (BDT < 0.003993) return 1;
  else                       return 2;
}

double miniavg(double lep1jet1_m, double lep1jet2_m, double lep2jet2_m, double lep2jet1_m) {
  return TMath::Min((lep1jet1_m + lep2jet2_m)/2, (lep1jet2_m + lep2jet1_m)/2);
}
