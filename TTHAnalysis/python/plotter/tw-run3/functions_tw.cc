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


Float_t getBDtW(Double_t BDT){
  if      (BDT < -0.346575   ) return 1;
  else if (BDT < -0.264520) return 2;
  else if (BDT < -0.167959) return 3;
  else if (BDT < -0.073513) return 4;
  else if (BDT < 0.024968) return 5;
  else if (BDT < 0.119442) return 6;
  else if (BDT < 0.201342) return 7;
  else if (BDT < 0.258906) return 8;
  else if (BDT < 0.317417) return 9;
  else                       return 10;
}

Float_t getBDtWOther(Double_t BDT){
  if      (BDT < -0.238182   ) return 1;
  else if (BDT < -0.093824) return 2;
  else if (BDT < 0.002727) return 3;
  else if (BDT < 0.073376) return 4;
  else if (BDT < 0.144134) return 5;
  else                       return 6;
}

// Random Forests
Float_t getRFtW(Double_t BDT){
  if      (BDT < 0.402193   ) return 1;
  else if (BDT < 0.422241) return 2;
  else if (BDT < 0.437047) return 3;
  else if (BDT < 0.451979) return 4;
  else if (BDT < 0.465369) return 5;
  else if (BDT < 0.479900) return 6;
  else if (BDT < 0.507216) return 7;
  else if (BDT < 0.528089) return 8;
  else if (BDT < 0.548056) return 9;
  else                       return 10;
}

Float_t getRFtWOther(Double_t BDT){
  if      (BDT < 0.336078   ) return 1;
  else if (BDT < 0.361697) return 2;
  else if (BDT < 0.388195) return 3;
  else if (BDT < 0.428830) return 4;
  else if (BDT < 0.478367) return 5;
  else                       return 6;
}

Float_t getRFtW_mm(Double_t BDT){
  if      (BDT < 0.319187   ) return 1;
  else if (BDT < 0.376776) return 2;
  else if (BDT < 0.401125) return 3;
  else if (BDT < 0.416555) return 4;
  else if (BDT < 0.429101) return 5;
  else if (BDT < 0.442477) return 6;
  else if (BDT < 0.456615) return 7;
  else if (BDT < 0.470678) return 8;
  else if (BDT < 0.487545) return 9;
  else                       return 10;
}

Float_t getRFtW_ee(Double_t BDT){
  if      (BDT < 0.314804   ) return 1;
  else if (BDT < 0.377784) return 2;
  else if (BDT < 0.402943) return 3;
  else if (BDT < 0.418359) return 4;
  else if (BDT < 0.430428) return 5;
  else if (BDT < 0.442510) return 6;
  else if (BDT < 0.456942) return 7;
  else if (BDT < 0.473622) return 8;
  else if (BDT < 0.489182) return 9;
  else                       return 10;
}