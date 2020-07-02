#include <cmath>
#include <map>
#include <iostream>
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/GenVector/PxPyPzM4D.h"
#include "Math/GenVector/Boost.h"
#include "TLorentzVector.h"
#include "TH2Poly.h"
#include "TGraphAsymmErrors.h"
#include "TH1F.h"
#include "TFile.h"
#include "PhysicsTools/Heppy/interface/Davismt2.h"
#include "TSystem.h"

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
Bool_t has2GenJets25(Int_t nJ, Float_t pt1, Float_t eta1, Float_t pt2, Float_t eta2){
  if (nJ < 2) return false;  
  if (pt1>25 and pt2>25 and abs(eta1)<2.4 and abs(eta2)<2.4) return true;
  
  return false;
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

float mll_2(float pt1, float eta1, float phi1, float m1, float pt2, float eta2, float phi2, float m2) {
    typedef ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<double> > PtEtaPhiMVector;
    PtEtaPhiMVector p41(pt1,eta1,phi1,m1);
    PtEtaPhiMVector p42(pt2,eta2,phi2,m2);
    return (p41+p42).M();
}


Bool_t hasOSSF3lGEN(Int_t pdg1, Int_t pdg2, Int_t pdg3){
  return ((abs(pdg1)==abs(pdg2) && pdg1*pdg2<0) || (abs(pdg1)==abs(pdg3) && pdg1*pdg3<0) || (abs(pdg3)==abs(pdg2) && pdg3*pdg2<0) ); 
}

float mZ3l_Gen(float pt1, float eta1, float phi1, float mass1, int pdg1, float pt2, float eta2, float phi2, float mass2, int pdg2, float pt3, float eta3, float phi3, float mass3, int pdg3) {
  
  float mZ(9999.),mll(9999.); 
  if (abs(pdg1)==abs(pdg2) && pdg1*pdg2<0)  mZ  = mll_2(pt1,eta1,phi1,mass1,pt2,eta2,phi2,mass2);
  if (abs(pdg1)==abs(pdg3) && pdg1*pdg3<0)  mll = mll_2(pt1,eta1,phi1,mass1,pt3,eta3,phi3,mass3);
  if (abs(mZ-91.2) > abs(mll-91.2)) mZ = mll;  // mll(1,3) is closer to mZ
  if (abs(pdg2)==abs(pdg3) && pdg2*pdg3<0)  mll = mll_2(pt2,eta2,phi2,mass2,pt3,eta3,phi3,mass3);
  if (abs(mZ-91.2) > abs(mll-91.2)) mZ = mll;  // mll(2,3) is closer to mZ
  std::cout << mZ << std::endl;  
  return mZ;
}

int lWpt_Gen(float pt1, float eta1, float phi1, float mass1, int pdg1, float pt2, float eta2, float phi2, float mass2, int pdg2, float pt3, float eta3, float phi3, float mass3, int pdg3) {

  float mZ(9999.),mll(9999.),ptlW(0.),ptl(0.);
  if (abs(pdg1)==abs(pdg2) && pdg1*pdg2<0) {
    mZ   = mll_2(pt1,eta1,phi1,mass1,pt2,eta2,phi2,mass2);
    ptlW = pt3;
  }
  if (abs(pdg1)==abs(pdg3) && pdg1*pdg3<0)  {
    mll = mll_2(pt1,eta1,phi1,mass1,pt3,eta3,phi3,mass3);
    ptl = pt2;
  }
  if (abs(mZ-91.2) > abs(mll-91.2)) {
    mZ   = mll;  // mll(1,3) is closer to mZ
    ptlW = ptl; 
  }
  if (abs(pdg2)==abs(pdg3) && pdg2*pdg3<0)  { 
    mll = mll_2(pt2,eta2,phi2,mass2,pt3,eta3,phi3,mass3);
    ptl = pt1; 
  }
  if (abs(mZ-91.2) > abs(mll-91.2)) {
    mZ   = mll;  // mll(2,3) is closer to mZ
    ptlW = ptl; 
  }
  
  return ptlW;
}

void functions5TeV() {}
