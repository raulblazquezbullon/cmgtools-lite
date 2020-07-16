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
  if      (BDT < -0.425391) return 1;
  else if (BDT < -0.317214) return 2;
  else if (BDT < -0.228295) return 3;
  else if (BDT < -0.149703) return 4;
  else if (BDT < -0.075527) return 5;
  else if (BDT < -0.008082) return 6;
  else if (BDT < 0.070643)  return 7;
  else if (BDT < 0.161760)  return 8;
  else if (BDT < 0.272351)  return 9;
  else                      return 10;
}


float getSergioBDtWOther(double BDT) {
  if      (BDT < -0.165024) return 1;
  else if (BDT < -0.069230) return 2;
  else if (BDT < -0.001835) return 3;
  else if (BDT < 0.047763)  return 4;
  else if (BDT < 0.111411)  return 5;
  else                      return 6;
}

float getBDtW(double BDT) {
  if      (BDT < -0.425391) return 1;
  else if (BDT < -0.317214) return 2;
  else if (BDT < -0.228295) return 3;
  else if (BDT < -0.149703) return 4;
  else if (BDT < -0.075527) return 5;
  else if (BDT < -0.008082) return 6;
  else if (BDT < 0.070643)  return 7;
  else if (BDT < 0.161760)  return 8;
  else if (BDT < 0.272351)  return 9;
  else                      return 10;
}


float getBDtWOther(double BDT) {
  if      (BDT < -0.165024) return 1;
  else if (BDT < -0.069230) return 2;
  else if (BDT < -0.001835) return 3;
  else if (BDT < 0.047763)  return 4;
  else if (BDT < 0.111411)  return 5;
  else                      return 6;
}


void functions_tw() {}
