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
  if      (BDT < -0.396418153467) return 1;
  else if (BDT < -0.30499644675) return 2;
  else if (BDT < -0.236142485226) return 3;
  else if (BDT < -0.162798219325) return 4;
  else if (BDT < -0.0762444292515) return 5;
  else if (BDT < 0.0076855476712)  return 6;
  else if (BDT < 0.101481073534)  return 7;
  else if (BDT < 0.206361298811)  return 8;
  else if (BDT < 0.284749075658)  return 9;
  else                      return 10;
}


float getBDtWOther(double BDT) {
  if      (BDT < -0.218763270562) return 1;
  else if (BDT < -0.0901804057127) return 2;
  else if (BDT < 0.00093254008394) return 3;
  else if (BDT < 0.0697575197756)  return 4;
  else if (BDT < 0.143085010259)  return 5;
  else                      return 6;
}

Float_t getBDtW20bins(Double_t BDT){
  if      (BDT < -0.461324) return 1;
  else if (BDT < -0.396418) return 2;
  else if (BDT < -0.348543) return 3;
  else if (BDT < -0.304996) return 4;
  else if (BDT < -0.268547) return 5;
  else if (BDT < -0.236142) return 6;
  else if (BDT < -0.201742) return 7;
  else if (BDT < -0.162798) return 8;
  else if (BDT < -0.120081) return 9;
  else if (BDT < -0.076244) return 10;
  else if (BDT < -0.033727) return 11;
  else if (BDT < 0.007686) return 12;
  else if (BDT < 0.050584) return 13;
  else if (BDT < 0.101481) return 14;
  else if (BDT < 0.156476) return 15;
  else if (BDT < 0.206361) return 16;
  else if (BDT < 0.246990) return 17;
  else if (BDT < 0.284749) return 18;
  else if (BDT < 0.328806) return 19;
  else                       return 20;
}


Float_t getBDtWOther12bins(Double_t BDT){
  if      (BDT < -0.327464   ) return 1;
  else if (BDT < -0.218763) return 2;
  else if (BDT < -0.146987) return 3;
  else if (BDT < -0.090180) return 4;
  else if (BDT < -0.042963) return 5;
  else if (BDT < 0.000933) return 6;
  else if (BDT < 0.037092) return 7;
  else if (BDT < 0.069758) return 8;
  else if (BDT < 0.102122) return 9;
  else if (BDT < 0.143085) return 10;
  else if (BDT < 0.189322) return 11;
  else                       return 12;
}

void functions_tw() {}