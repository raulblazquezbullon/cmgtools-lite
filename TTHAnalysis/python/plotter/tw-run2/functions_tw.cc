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


float getBDtW(double BDT) {
  if      (BDT < -0.531448  ) return 1;
  else if (BDT < -0.396646  ) return 2;
  else if (BDT < -0.282771  ) return 3;
  else if (BDT < -0.184872  ) return 4;
  else if (BDT < -0.0977834 ) return 5;
  else if (BDT < -0.0118005 ) return 6;
  else if (BDT < 0.0867415  ) return 7;
  else if (BDT < 0.207723   ) return 8;
  else if (BDT < 0.332052   ) return 9;
  else                        return 10;

}


void functions_tw() {}
