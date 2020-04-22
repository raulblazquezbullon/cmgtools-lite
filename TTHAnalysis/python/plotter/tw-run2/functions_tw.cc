#include "TMath.h"
#include <assert.h>
#include <iostream>
#include "TH2F.h"
#include "TH1F.h"
#include "TFile.h"
#include "TSystem.h"
#include "TLorentzVector.h"
#include "TGraphAsymmErrors.h"

Int_t nJB(Int_t nJ, Float_t nBJ) {
    Int_t bin = 0;

    // Push SRs to make room for the new bins
    if (nJ==1) bin =  1+nBJ;
    if (nJ==2) bin =  3+nBJ;
    if (nJ==3) bin =  6+nBJ;
    if (nJ>=4) bin = 10+nBJ;
    return bin;
}


Int_t getnJetnBJet(Int_t nJ, Int_t nBJ) {
  Int_t bin=-1;

  if      (nJ==0)           bin=0;
  else if (nJ==1 && nBJ==0) bin=1;
  else if (nJ==1 && nBJ>=1) bin=2;
  else if (nJ==2 && nBJ==0) bin=3;
  else if (nJ==2 && nBJ==1) bin=4;
  else if (nJ==2 && nBJ>=2) bin=5;
  else if (nJ>=3 && nBJ>=0) bin=6;
  return bin;
}


Int_t getChannel(Int_t pdgId1, Int_t pdgId2) {
  // 1->eee,  2->em,  3->mm
  Int_t totId = abs(pdgId1)+abs(pdgId2);
  if      (totId == 22) return 1;
  else if (totId == 24) return 2;
  else if (totId == 26) return 3;

  return -1; 
}


void functions_tw() {}
