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
  if      (BDT < -0.559568061817) return 1;
  else if (BDT < -0.444112565203) return 2;
  else if (BDT < -0.295492682032) return 3;
  else if (BDT < -0.167431061743) return 4;
  else if (BDT < -0.0664100735425) return 5;
  else if (BDT < 0.0232723180179)  return 6;
  else if (BDT < 0.1115432379)  return 7;
  else if (BDT < 0.205757949766)  return 8;
  else if (BDT < 0.314230186393)  return 9;
  else                      return 10;
}


float getBDtWOther(double BDT) {
  if      (BDT < -0.198456933309) return 1;
  else if (BDT < -0.104870778878) return 2;
  else if (BDT < -0.0376734662819) return 3;
  else if (BDT < 0.0272681912809)  return 4;
  else if (BDT < 0.134647973966)  return 5;
  else                      return 6;
}


void functions_tw() {}
