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


// OLD
// float getBDtW(double BDT) {
//   if      (BDT < -0.576136) return 1;
//   else if (BDT < -0.456186) return 2;
//   else if (BDT < -0.317302) return 3;
//   else if (BDT < -0.189152) return 4;
//   else if (BDT < -0.084137) return 5;
//   else if (BDT < 0.012613)  return 6;
//   else if (BDT < 0.110381)  return 7;
//   else if (BDT < 0.216965)  return 8;
//   else if (BDT < 0.335691)  return 9;
//   else                      return 10;
// }

// float getBDtWOther(double BDT) {
//   if      (BDT < -0.239698) return 1;
//   else if (BDT < -0.126132) return 2;
//   else if (BDT < -0.029249) return 3;
//   else if (BDT < 0.062478)  return 4;
//   else if (BDT < 0.163814)  return 5;
//   else                      return 6;
// }

// mio veyo
// float getBDtW(double BDT) {
//   if      (BDT < -0.544421) return 1;
//   else if (BDT < -0.441191) return 2;
//   else if (BDT < -0.314091) return 3;
//   else if (BDT < -0.179858) return 4;
//   else if (BDT < -0.070402) return 5;
//   else if (BDT < 0.023153)  return 6;
//   else if (BDT < 0.112208)  return 7;
//   else if (BDT < 0.208561)  return 8;
//   else if (BDT < 0.319610)  return 9;
//   else                      return 10;
// }
//
// float getBDtWOther(double BDT) {
//   if      (BDT < -0.245901) return 1;
//   else if (BDT < -0.118314) return 2;
//   else if (BDT < -0.015773) return 3;
//   else if (BDT < 0.070211)  return 4;
//   else if (BDT < 0.159383)  return 5;
//   else                      return 6;
// }

// entrenamiento 1
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

void functions_tw() {}
