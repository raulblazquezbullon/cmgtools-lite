#include "TMath.h"
#include <assert.h>
#include <iostream>
#include "TH2F.h"
#include "TH1F.h"
#include "TFile.h"
#include "TSystem.h"
#include "TLorentzVector.h"
#include "TGraphAsymmErrors.h"

////  JET - NBJETs
int nJB(int nJ, float nBJ) {
    int bin = 0;
    
    // Push SRs to make room for the new bins
    if (nJ==1) bin =  1+nBJ;
    if (nJ==2) bin =  3+nBJ;
    if (nJ==3) bin =  6+nBJ;
    if (nJ>=4) bin = 10+nBJ;
    
    return bin;
}

Int_t getnJetnBJet(Int_t nJ, Int_t nBJ){
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



/// CHANNEL 

Int_t getChannel2l(Int_t pdgId1, Int_t pdgId2) {
  // 1->ee,  2->em,  3->mm
  Int_t totId = abs(pdgId1)+abs(pdgId2);
  if      (totId == 22) return 1;
  else if (totId == 24) return 2;
  else if (totId == 26) return 3;

  return -1; 
}

Int_t getChannel3l(Int_t pdgId1, Int_t pdgId2, Int_t pdgId3) {
  // 1->eee,  2->eem,  3->emm, 4->mmm
  Int_t totId = abs(pdgId1)+abs(pdgId2)+abs(pdgId3);
  if      (totId == 33) return 1;
  else if (totId == 35) return 2;
  else if (totId == 37) return 3;
  else if (totId == 39) return 4;

  return -1; 
}

/// WZ helpers
Bool_t passPtCuts(Float_t pt1, Int_t pdgId1, Float_t pt2, Int_t pdgId2, Float_t pt3, Int_t pdgId3) {
  
  Int_t chan = getChannel3l(pdgId1,pdgId2,pdgId3);
  
  if      (chan==1) { if (pt1>=15 && pt2>=10 && pt3>=8 ) return true; } //eee
  else if (chan==2) { if (pt1>=12 && pt2>=10 && pt3>=8 ) return true; } //eem
  else if (chan==3) { if (pt1>=12 && pt2>=12 && pt3>=8 ) return true; } //emm
  else if (chan==4) { if (pt1>=12 && pt2>=10 && pt3>=10) return true; } //mmm

  return false;
}


void functions5TeV() {}
