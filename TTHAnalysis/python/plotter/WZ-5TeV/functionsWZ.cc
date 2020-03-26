#include "TMath.h"
#include <assert.h>
#include <iostream>
#include "TH2F.h"
#include "TH1F.h"
#include "TFile.h"
#include "TSystem.h"
#include "TLorentzVector.h"
#include "TGraphAsymmErrors.h"

int nJB(int nJ, float nBJ) {
    int bin = 0;
    
    // Push SRs to make room for the new bins
    if (nJ==1) bin =  1+nBJ;
    if (nJ==2) bin =  3+nBJ;
    if (nJ==3) bin =  6+nBJ;
    if (nJ>=4) bin = 10+nBJ;
    
    return bin;
}

Float_t WZdeltaPhi(Float_t phi1, Float_t phi2)
{
  Float_t res(phi1 - phi2);
  while(res >   M_PI) res -= Float_t(2*M_PI);
  while(res <= -M_PI) res += Float_t(2*M_PI);
  return res;
}

Float_t baseDeltaR(Float_t eta1, Float_t phi1, Float_t eta2, Float_t phi2)
{
  Float_t res;
  Float_t dEta(std::abs(eta1-eta2));
  Float_t dPhi(WZdeltaPhi(phi1, phi2));
  res= std::sqrt(dEta*dEta + dPhi*dPhi);
  return res;
}

Bool_t allTight(Bool_t isT1, Bool_t isT2){
  return isT1 && isT2;
}


Bool_t allTight(Bool_t isT1, Bool_t isT2, Bool_t isT3){
  return isT1 && isT2 && isT3;
}

Bool_t allTight(Bool_t isT1, Bool_t isT2, Bool_t isT3, Bool_t isT4){
  return isT1 && isT2 && isT3 && isT4;
}


// TBD: implement the same but with conePt
Float_t WZbalance(Float_t zpt, Float_t zeta, Float_t zphi, Float_t zm, Float_t wpt, Float_t weta, Float_t wphi, Float_t wm)
{
  TLorentzVector z; z.SetPtEtaPhiM(zpt, zeta, zphi, zm);
  TLorentzVector w; w.SetPtEtaPhiM(wpt, weta, wphi, wm);
  TLorentzVector balance = z + w;
  return balance.Pt();
}
 
Float_t WZdeltaR(Float_t zeta, Float_t zphi, Float_t weta, Float_t wphi)
{
  Float_t res(baseDeltaR(zeta, zphi, weta, wphi));
  return res;
}

Int_t getChannel(Int_t pdgId1, Int_t pdgId2, Int_t pdgId3) {
  // 1->eee,  2->eem,  3->emm, 4->mmm
  Int_t totId = abs(pdgId1)+abs(pdgId2)+abs(pdgId3);
  if      (totId == 33) return 1;
  else if (totId == 35) return 2;
  else if (totId == 37) return 3;
  else if (totId == 39) return 4;

  return -1; 
}

Bool_t passPtCuts(Float_t pt1, Int_t pdgId1, Float_t pt2, Int_t pdgId2, Float_t pt3, Int_t pdgId3) {
  
  Int_t chan = getChannel(pdgId1,pdgId2,pdgId3);
  
  if      (chan==1) { if (pt1>=15 && pt2>=10 && pt3>=8 ) return true; } //eee
  else if (chan==2) { if (pt1>=12 && pt2>=10 && pt3>=8 ) return true; } //eem
  else if (chan==3) { if (pt1>=12 && pt2>=12 && pt3>=8 ) return true; } //emm
  else if (chan==4) { if (pt1>=12 && pt2>=10 && pt3>=10) return true; } //mmm

  return false;
}


void functionsWZ() {}
