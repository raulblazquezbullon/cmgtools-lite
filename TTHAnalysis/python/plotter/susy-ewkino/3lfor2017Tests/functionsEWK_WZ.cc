#include <iostream>
#include "TH2F.h"
#include "TMath.h"
#include "TGraphAsymmErrors.h"
#include "TFile.h"
#include "TSystem.h"

TString CMSSW_BASE_WZ = gSystem->ExpandPathName("${CMSSW_BASE}");
TString DATA_WZ = CMSSW_BASE_WZ+"/src/CMGTools/TTHAnalysis/data";

TFile* f_likelihood = new TFile(DATA_WZ+"/WZ_MC/likelihood.root", "read");
TH1D* h_met   = (TH1D*) f_likelihood->Get("met_prompt_WZ");
TH1D* h_mtW   = (TH1D*) f_likelihood->Get("mtW3l_prompt_WZ");
TH1D* h_mll   = (TH1D*) f_likelihood->Get("mll3l_prompt_WZ");
TH1D* h_mht   = (TH1D*) f_likelihood->Get("htJet30j_prompt_WZ");
Float_t like_norm  = h_met->Integral()*h_mtW->Integral()*h_mll->Integral()/( h_met->GetNbinsX() * h_mtW->GetNbinsX() * h_mll->GetNbinsX()) ;
//Float_t like_norm  = h_met->Integral()*h_mtW->Integral()*h_mll->Integral()*h_mht->Integral()/( h_met->GetNbinsX() * h_mtW->GetNbinsX() * h_mll->GetNbinsX()  * h_mht->GetNbinsX() ) ;


float getBin(TH1D* hist, float value){
    return std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(value)));
}

float getLikelihood(float met, float mtW, float mll, float mht){
    float result = h_met->GetBinContent(getBin(h_met, met))*h_mtW->GetBinContent(getBin(h_mtW, mtW))*h_mll->GetBinContent(getBin(h_mll, mll));
    //std::cout << result << std::endl;
    return result;
}



float metfit(float x){
  return TMath::Voigt(x - 57.1897, 42.661, 9.06480)*1527.19 + TMath::Voigt(x - 57.1897, 42.661, 9.06480)*1527.19;
}

float mhtfit(float x){
  if (x < 30) x = 30;
  return TMath::Exp(x*-0.00789073 )*1325.68 + TMath::Exp(x*-0.110084)*144.471;
}

float mllfit(float x){
  return TMath::Voigt(x - 91.0151, 3.22686, 1.09331)*2850.66 + TMath::Voigt(x - 86.9002, 5.67749, 1.09331)*238.951 + TMath::Exp(x*-0.0215059)*131.987;
}



float CBShape(float x){
   Float_t m0 = 76.9201;
   Float_t sigma = 14.4898;
   Float_t alpha = 0.938285;
   Float_t n = 1.12644;
   Double_t t = (x-m0)/sigma;
   if (alpha < 0) t = -t;
 
   Double_t absAlpha = fabs((Double_t)alpha);
 
   if (t >= -absAlpha) {
     return exp(-0.5*t*t);
   }
   else {
     Double_t a =  TMath::Power(n/absAlpha,n)*exp(-0.5*absAlpha*absAlpha);
     Double_t b= n/absAlpha - absAlpha;
 
     return a/TMath::Power(b - t, n);
   }
}


float mtWfit(float x){
  return  TMath::Voigt(x - 83.6691, 7.45278, 23.7289)*1159.13 + TMath::Exp(x*-0.0155899)*553.314 + CBShape(x)*1325.12;
}
 
float getLikelihoodFit(float met, float mtW, float mll, float mht){
  return metfit(met)*mtWfit(mtW)*mllfit(mll);
}


float getLikelihoodFitwithht(float met, float mtW, float mll, float mht){
  return metfit(met)*mtWfit(mtW)*mllfit(mll)*mhtfit(mht);
}


float WZunc(float met, float mt, int var = 0){
  if (mt>=  0 && mt<100 && met>= 50 && met<100) return (1 + var*0.05);
  if (mt>=  0 && mt<100 && met>=100 && met<150) return (1 + var*0.10);
  if (mt>=  0 && mt<100 && met>=150 && met<200) return (1 + var*0.20);
  if (mt>=  0 && mt<100 && met>=200           ) return (1 + var*0.20);
  if (mt>=100 && mt<160 && met>= 50 && met<100) return (1 + var*0.05);
  if (mt>=100 && mt<160 && met>=100 && met<150) return (1 + var*0.25);
  if (mt>=100 && mt<160 && met>=150 && met<200) return (1 + var*0.45);
  if (mt>=100 && mt<160 && met>=200           ) return (1 + var*0.45);
  if (mt>=160           && met>= 50 && met<100) return (1 + var*0.30);
  if (mt>=160           && met>=100 && met<150) return (1 + var*0.50);
  if (mt>=160           && met>=150 && met<200) return (1 + var*0.40);
  if (mt>=160           && met>=200           ) return (1 + var*0.45);
  return 0;
}

int tauIdx1(int lep1pdg, int lep2pdg, int lep3pdg, int lep4pdg = 0){
    if(abs(lep1pdg)==15) return 0;
    if(abs(lep2pdg)==15) return 1;
    if(abs(lep3pdg)==15) return 2;
    if(abs(lep4pdg)==15) return 3;
    return -1;
}

int tauIdx2(int lep1pdg, int lep2pdg, int lep3pdg, int lep4pdg = 0){
    int firstTau = tauIdx1(lep1pdg, lep2pdg, lep3pdg, lep4pdg);
    if(firstTau == -1) return -1;
    if(abs(lep2pdg)==15 && firstTau<1) return 1;
    if(abs(lep3pdg)==15 && firstTau<2) return 2;
    if(abs(lep4pdg)==15 && firstTau<3) return 3;
    return -1;
}

int isConv(int nLep, int lep1mcUCSX, int lep2mcUCSX, int lep3mcUCSX, int lep4mcUCSX = 0) {
    if(nLep == 2) return (lep1mcUCSX==4 || lep2mcUCSX==4);
    if(nLep == 3) return (lep1mcUCSX==4 || lep2mcUCSX==4 || lep3mcUCSX==4);
    return (lep1mcUCSX==4 || lep2mcUCSX==4 || lep3mcUCSX==4 || lep4mcUCSX==4);
}

int isFake(int nLep, int lep1mcUCSX, int lep2mcUCSX, int lep3mcUCSX = 0, int lep4mcUCSX = 0) {
    if(nLep == 2) return ((lep1mcUCSX==2 || lep1mcUCSX==3) || (lep2mcUCSX==2 || lep2mcUCSX==3));
    if(nLep == 3) return ((lep1mcUCSX==2 || lep1mcUCSX==3) || (lep2mcUCSX==2 || lep2mcUCSX==3) || (lep3mcUCSX==2 || lep3mcUCSX==3));
    return ((lep1mcUCSX==2 || lep1mcUCSX==3) || (lep2mcUCSX==2 || lep2mcUCSX==3) || (lep3mcUCSX==2 || lep3mcUCSX==3) || (lep4mcUCSX==2 || lep4mcUCSX==3));
}

int isFakeHeppy(int nLep, int lep1mcHeppy, int lep2mcHeppy, int lep3mcHeppy = 1, int lep4mcHeppy = 1) {
    if(nLep == 2) return (lep1mcHeppy==0 || lep2mcHeppy==0);
    if(nLep == 3) return (lep1mcHeppy==0 || lep2mcHeppy==0 || lep3mcHeppy==0);
    return (lep1mcHeppy==0 || lep2mcHeppy==0 || lep3mcHeppy==0 || lep4mcHeppy==0);
}

int isFakeHF(int nLep, int lep1mcUCSX, int lep2mcUCSX, int lep3mcUCSX = 0, int lep4mcUCSX = 0) {
    if(nLep == 2) return (lep1mcUCSX==3 || lep2mcUCSX==3);
    if(nLep == 3) return (lep1mcUCSX==3 || lep2mcUCSX==3 || lep3mcUCSX==3);
    return (lep1mcUCSX==3 || lep2mcUCSX==3 || lep3mcUCSX==3 || lep4mcUCSX==3);
}

int isFakeLF(int nLep, int lep1mcUCSX, int lep2mcUCSX, int lep3mcUCSX = 0, int lep4mcUCSX = 0) {
    if(nLep == 2) return (lep1mcUCSX==2 || lep2mcUCSX==2);
    if(nLep == 3) return (lep1mcUCSX==2 || lep2mcUCSX==2 || lep3mcUCSX==2);
    return (lep1mcUCSX==2 || lep2mcUCSX==2 || lep3mcUCSX==2 || lep4mcUCSX==2);
}

int isPrompt(int nLep, int lep1mcUCSX, int lep2mcUCSX, int lep3mcUCSX = 0, int lep4mcUCSX = 0) {
    if(nLep == 2) return ((lep1mcUCSX==0 || lep1mcUCSX==1) && (lep2mcUCSX==0 || lep2mcUCSX==1));
    if(nLep == 3) return ((lep1mcUCSX==0 || lep1mcUCSX==1) && (lep2mcUCSX==0 || lep2mcUCSX==1) && (lep3mcUCSX==0 || lep3mcUCSX==1));
    return ((lep1mcUCSX==0 || lep1mcUCSX==1) && (lep2mcUCSX==0 || lep2mcUCSX==1) && (lep3mcUCSX==0 || lep3mcUCSX==1) && (lep4mcUCSX==0 || lep4mcUCSX==1));
}

int isPromptRightCharge(int nLep, int lep1mcUCSX, int lep2mcUCSX, int lep3mcUCSX = 0, int lep4mcUCSX = 0) {
    if(nLep == 2) return (lep1mcUCSX==0 && lep2mcUCSX==0);
    if(nLep == 3) return (lep1mcUCSX==0 && lep2mcUCSX==0 && lep3mcUCSX==0);
    return (lep1mcUCSX==0 && lep2mcUCSX==0 && lep3mcUCSX==0 && lep4mcUCSX==0);
}

int hasPromptLight(int nLep, int lep1pdgId, int lep1mcUCSX, int lep2pdgId, int lep2mcUCSX, int lep3pdgId = 0, int lep3mcUCSX = 0, int lep4pdgId = 0, int lep4mcUCSX = 0) {
    if(abs(lep1pdgId)<15 && !(lep1mcUCSX==0 || lep1mcUCSX==1)) return 0;
    if(abs(lep2pdgId)<15 && !(lep2mcUCSX==0 || lep2mcUCSX==1)) return 0;
    if(nLep == 2                                             ) return 1;
    if(abs(lep3pdgId)<15 && !(lep3mcUCSX==0 || lep3mcUCSX==1)) return 0;
    if(nLep == 3                                             ) return 1;
    if(abs(lep4pdgId)<15 && !(lep4mcUCSX==0 || lep4mcUCSX==1)) return 0;
    return 0;
}

int hasPromptTau(int nLep, int lep1pdgId, int lep1mcUCSX, int lep2pdgId, int lep2mcUCSX, int lep3pdgId = 0, int lep3mcUCSX = 0, int lep4pdgId = 0, int lep4mcUCSX = 0) {
    if(abs(lep1pdgId)==15 && !(lep1mcUCSX==0 || lep1mcUCSX==1)) return 0;
    if(abs(lep2pdgId)==15 && !(lep2mcUCSX==0 || lep2mcUCSX==1)) return 0;
    if(nLep == 2                                              ) return 1;
    if(abs(lep3pdgId)==15 && !(lep3mcUCSX==0 || lep3mcUCSX==1)) return 0;
    if(nLep == 3                                              ) return 1;
    if(abs(lep4pdgId)==15 && !(lep4mcUCSX==0 || lep4mcUCSX==1)) return 0;
    return 0;
}

int isGoodFake(float pt, int isTight) {
    if(pt == 0) return 0;
    if(isTight) return 0;
    return 1;
}

float getTau(int lep1pdgId, float lep1value, int lep2pdgId, float lep2value, int lep3pdgId, float lep3value, float down=0, float up=0) {
	float val = 0;
    if(abs(lep1pdgId)==15) val = lep1value;
    if(abs(lep2pdgId)==15) val = lep2value;
    if(abs(lep3pdgId)==15) val = lep3value;
    if(up  >0) val = std::min(up, val);
    if(down>0) val = std::max(down, val);
    return val;
}

int allTightLight(int nLep, int l1pdgId, int l1isTight, int l2pdgId, int l2isTight, int l3pdgId = 0, int l3isTight = 0, int l4pdgId = 0, int l4isTight = 0){
    if(abs(l1pdgId)<15 && !l1isTight) return 0;
    if(abs(l2pdgId)<15 && !l2isTight) return 0;
    if(nLep == 2                    ) return 1;
    if(abs(l3pdgId)<15 && !l3isTight) return 0;
    if(nLep == 3                    ) return 1;
    if(abs(l4pdgId)<15 && !l4isTight) return 0;
    return 1;
}

int allTightTau(int nLep, int l1pdgId, int l1isTight, int l2pdgId, int l2isTight, int l3pdgId = 0, int l3isTight = 0, int l4pdgId = 0, int l4isTight = 0){
    if(abs(l1pdgId)==15 && !l1isTight) return 0;
    if(abs(l2pdgId)==15 && !l2isTight) return 0;
    if(nLep == 2                     ) return 1;
    if(abs(l3pdgId)==15 && !l3isTight) return 0;
    if(nLep == 3                     ) return 1;
    if(abs(l4pdgId)==15 && !l4isTight) return 0;
    return 1;
}

int tightChargeCut(int nLep, int l1pdgId, int l1tightCharge, int l2pdgId, int l2tightCharge, int l3pdgId = 0, int l3tightCharge = 0, int l4pdgId = 0, int l4tightCharge = 0) { 
    if((abs(l1pdgId)==11 && l1tightCharge<2) || (abs(l1pdgId)==13 && l1tightCharge<2)) return 0;
    if((abs(l2pdgId)==11 && l2tightCharge<2) || (abs(l2pdgId)==13 && l2tightCharge<2)) return 0;
    if(nLep == 2                                                                     ) return 1;
    if((abs(l3pdgId)==11 && l3tightCharge<2) || (abs(l3pdgId)==13 && l3tightCharge<2)) return 0;
    if(nLep == 3                                                                     ) return 1;
    if((abs(l4pdgId)==11 && l4tightCharge<2) || (abs(l4pdgId)==13 && l4tightCharge<2)) return 0;
    return 1;
}

int allTight(int nLep, int l1isTight, int l2isTight, int l3isTight = 0, int l4isTight = 0){
    if(nLep == 2) return ((l1isTight+l2isTight)==2);
    if(nLep == 3) return ((l1isTight+l2isTight+l3isTight)==3);
    return ((l1isTight+l2isTight+l3isTight+l4isTight)==4);
}

int countTaus(int nLep, int l1pdgId, int l2pdgId, int l3pdgId, int l4pdgId = 0){
    if(nLep == 3) return (abs(l1pdgId)==15)+(abs(l2pdgId)==15)+(abs(l3pdgId)==15);
    return (abs(l1pdgId)==15)+(abs(l2pdgId)==15)+(abs(l3pdgId)==15)+(abs(l4pdgId)==15);
}

float srMll(int nLep, float mllAllFlavors, float mllOnlyLight, float mllOnlyTaus) {
    if(nLep==3) return mllOnlyLight;
    return mllAllFlavors;
}

float srMt(int nLep, float mtAllFlavors, float mtOnlyLight, float mtOnlyTaus) {
    if(nLep==3) return mtOnlyLight;
    return mtAllFlavors;
}

int nLepFlavor(int nTau, int is4l, int is5l){

    if(!is4l && !is5l) return 0;
    if(is5l          ) return 6;
    if(nTau == 0     ) return 1;
    if(nTau == 1     ) return 2;
    if(nTau == 2     ) return 3;
    if(nTau == 3     ) return 4; 
    if(nTau == 4     ) return 5; 

    return 0;
}

int BR(int nLep, int nTau, int nOSSF, int nOSLF, int nOSTF){

    if(nLep == 3 && nTau == 0 && nOSSF >= 1              ) return  1;
    if(nLep == 3 && nTau == 0 && nOSSF <  1              ) return  2;
    if(nLep == 3 && nTau == 1 && nOSSF >= 1              ) return  3;
    if(nLep == 3 && nTau == 1 && nOSSF <  1 && nOSLF >= 1) return  4;
    if(nLep == 3 && nTau == 1 && nOSLF <  1              ) return  5;
    if(nLep == 3 && nTau == 2                            ) return  6;
    if(nLep == 4 && nTau == 0 && nOSSF >= 2              ) return  7;
    if(nLep == 4 && nTau == 0 && nOSSF <= 1              ) return  8;
    if(nLep == 4 && nTau == 1                            ) return  9;
    if(nLep == 4 && nTau == 2 && nOSSF >= 2              ) return 10;
    if(nLep == 4 && nTau == 2 && nOSSF <= 1              ) return 11;

    return 0;
}

int BRos(int nLep, int nTau, int nOSSF, int nOSLF, int nOSTF){

    int br = BR(nLep, nTau, nOSSF, nOSLF, nOSTF);
    if(br == 3 || br == 4) return 5; // mimicking BR = 5 event
	return 0;
}

int SR3lA(float mT2L, float mT2T, float mll, float mT, float met, int offset = 0) {

    if(mll >= 0 && mll < 75) {
        if (mT >=   0 && mT < 100 && met >=   0 && met < 100) return offset +  1;
        if (mT >=   0 && mT < 100 && met >= 100 && met < 150) return offset +  2;
        if (mT >=   0 && mT < 100 && met >= 150 && met < 200) return offset +  3;
        if (mT >=   0 && mT < 100 && met >= 200 && met < 250) return offset +  4;
        if (mT >=   0 && mT < 100 && met >= 250             ) return offset +  5;
        if (mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset +  6;
        if (mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset +  7;
        if (mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset +  8;
        if (mT >= 100 && mT < 160 && met >= 200             ) return offset +  9;
        if (mT >= 160 &&             met >=   0 && met < 100) return offset + 10;
        if (mT >= 160 &&             met >= 100 && met < 150) return offset + 11;
        if (mT >= 160 &&             met >= 150 && met < 200) return offset + 12;
        if (mT >= 160 &&             met >= 200 && met < 250) return offset + 13;
        if (mT >= 160 &&             met >= 250             ) return offset + 14;
    }
    if(mll >= 75 && mll < 105) {
        if (mT >=   0 && mT < 100 && met >=   0 && met < 100) return offset + 15;
        if (mT >=   0 && mT < 100 && met >= 100 && met < 150) return offset + 16;
        if (mT >=   0 && mT < 100 && met >= 150 && met < 200) return offset + 17;
        if (mT >=   0 && mT < 100 && met >= 200 && met < 250) return offset + 18;
        if (mT >=   0 && mT < 100 && met >= 250 && met < 400) return offset + 19;
        if (mT >=   0 && mT < 100 && met >= 400 && met < 550) return offset + 20;
        if (mT >=   0 && mT < 100 && met >= 550             ) return offset + 21;
        if (mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset + 22;
        if (mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 23;
        if (mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 24;
        if (mT >= 100 && mT < 160 && met >= 200             ) return offset + 25;
        if (mT >= 160 &&             met >=   0 && met < 100) return offset + 26;
        if (mT >= 160 &&             met >= 100 && met < 150) return offset + 27;
        if (mT >= 160 &&             met >= 150 && met < 200) return offset + 28;
        if (mT >= 160 &&             met >= 200 && met < 250) return offset + 29;
        if (mT >= 160 &&             met >= 250 && met < 400) return offset + 30;
        if (mT >= 160 &&             met >= 400             ) return offset + 31;
    }
    if(mll >= 105) {
        if (mT >=   0 && mT < 100 && met >=   0 && met < 100) return offset + 32;
        if (mT >=   0 && mT < 100 && met >= 100 && met < 150) return offset + 33;
        if (mT >=   0 && mT < 100 && met >= 150 && met < 200) return offset + 34;
        if (mT >=   0 && mT < 100 && met >= 200 && met < 250) return offset + 35;
        if (mT >=   0 && mT < 100 && met >= 250             ) return offset + 36;
        if (mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset + 37;
        if (mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 38;
        if (mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 39;
        if (mT >= 100 && mT < 160 && met >= 200             ) return offset + 40;
        if (mT >= 160 &&             met >=   0 && met < 100) return offset + 41;
        if (mT >= 160 &&             met >= 100 && met < 150) return offset + 42;
        if (mT >= 160 &&             met >= 150 && met < 200) return offset + 43;
        if (mT >= 160 &&             met >= 200             ) return offset + 44;
    }
    return 0;
}

int SR3lB(float mT2L, float mT2T, float mll, float mT, float met, int offset = 0) {

    if(mll < 100){
        if(mT <  120 && met >=   0 && met < 100) return offset + 1;
        if(mT <  120 && met >= 100             ) return offset + 2;
        if(mT >= 120 && met >=   0             ) return offset + 3;
    }
    if(mll >= 100) {
        if(mT <  120 && met >=   0 && met < 100) return offset + 4;
        if(mT <  120 && met >= 100             ) return offset + 5;
        if(mT >= 120 && met >=   0             ) return offset + 6;
    }

    return 0;
}

int SR3lC(float mT2L, float mT2T, float mll, float mT, float met, int offset = 0) {

    if(mT2L < 100  && mll >=   0 && mll <  75 && met >=   0 && met < 100) return offset +  1;
    if(mT2L < 100  && mll >=   0 && mll <  75 && met >= 100 && met < 150) return offset +  2;
    if(mT2L < 100  && mll >=   0 && mll <  75 && met >= 150 && met < 200) return offset +  3;
    if(mT2L < 100  && mll >=   0 && mll <  75 && met >= 200 && met < 250) return offset +  4;
    if(mT2L < 100  && mll >=   0 && mll <  75 && met >= 250             ) return offset +  5;
    if(               mll >=  75 && mll < 105 && met >=   0 && met < 100) return offset +  6;
    if(               mll >=  75 && mll < 105 && met >= 100 && met < 150) return offset +  7;
    if(               mll >=  75 && mll < 105 && met >= 150 && met < 200) return offset +  8;
    if(               mll >=  75 && mll < 105 && met >= 200 && met < 300) return offset +  9;
    if(               mll >=  75 && mll < 105 && met >= 300 && met < 400) return offset + 10;
    if(               mll >=  75 && mll < 105 && met >= 400             ) return offset + 11;
    if(mT2L < 100  && mll >= 105 &&              met >=   0 && met < 100) return offset + 12;
    if(mT2L < 100  && mll >= 105 &&              met >= 100 && met < 150) return offset + 13;
    if(mT2L < 100  && mll >= 105 &&              met >= 150 && met < 200) return offset + 14;
    if(mT2L < 100  && mll >= 105 &&              met >= 200 && met < 250) return offset + 15;
    if(mT2L < 100  && mll >= 105 &&              met >= 250             ) return offset + 16;
    if(mT2L >= 100 && (mll < 75 || mll >= 105) && met >=  0 && met < 200) return offset + 17;
    if(mT2L >= 100 && (mll < 75 || mll >= 105) && met >= 200            ) return offset + 18;
    return 0;
}

int SR3lD(float mT2L, float mT2T, float mll, float mT, float met, int offset = 0) {

    if(mT2L >= 0 && mT2L < 100){
        if(mll >=   0 && mll <  60 && met >=   0 && met < 100) return offset +  1;
        if(mll >=   0 && mll <  60 && met >= 100 && met < 150) return offset +  2;
        if(mll >=   0 && mll <  60 && met >= 150 && met < 200) return offset +  3;
        if(mll >=   0 && mll <  60 && met >= 200 && met < 250) return offset +  4;
        if(mll >=   0 && mll <  60 && met >= 250             ) return offset +  5;
        if(mll >=  60 && mll < 100 && met >=   0 && met < 100) return offset +  6;
        if(mll >=  60 && mll < 100 && met >= 100 && met < 150) return offset +  7;
        if(mll >=  60 && mll < 100 && met >= 150 && met < 200) return offset +  8;
        if(mll >=  60 && mll < 100 && met >= 200 && met < 250) return offset +  9;
        if(mll >=  60 && mll < 100 && met >= 250             ) return offset + 10;
        if(mll >= 100 &&              met >=   0 && met < 100) return offset + 11;
        if(mll >= 100 &&              met >= 100 && met < 150) return offset + 12;
        if(mll >= 100 &&              met >= 150 && met < 200) return offset + 13;
        if(mll >= 100 &&              met >= 200             ) return offset + 14;
    }
    if(mT2L >= 100) {
        if(met >=  0 && met < 200                            ) return offset + 15;
        if(met >= 200                                        ) return offset + 16;
    }

    return 0;
}

int SR3lE(float mT2L, float mT2T, float mll, float mT, float met, int offset = 0) {

    if(mT2T >= 0 && mT2T < 100){
        if(mll >=  -1 && mll <  60 && met >=   0 && met < 100) return offset +  1;
        if(mll >=  -1 && mll <  60 && met >= 100 && met < 150) return offset +  2;
        if(mll >=  -1 && mll <  60 && met >= 150 && met < 200) return offset +  3;
        if(mll >=  -1 && mll <  60 && met >= 200 && met < 250) return offset +  4;
        if(mll >=  -1 && mll <  60 && met >= 250             ) return offset +  5;
        if(mll >=  60 && mll < 100 && met >=   0 && met < 100) return offset +  6;
        if(mll >=  60 && mll < 100 && met >= 100 && met < 150) return offset +  7;
        if(mll >=  60 && mll < 100 && met >= 150 && met < 200) return offset +  8;
        if(mll >=  60 && mll < 100 && met >= 200 && met < 250) return offset +  9;
        if(mll >=  60 && mll < 100 && met >= 250             ) return offset + 10;
        if(mll >= 100 &&              met >=   0             ) return offset + 11;
    }
    if(mT2T >= 100) {
        if(met >=  0                                         ) return offset + 12;
    }

    return 0;
}

int SR3lF(float mT2L, float mT2T, float mll, float mT, float met, int offset = 0) {

    if(mT2T >= 0 && mT2T < 100){
        if(mll >=   0 && mll < 100 && met >=   0 && met < 100) return offset +  1;
        if(mll >=   0 && mll < 100 && met >= 100 && met < 150) return offset +  2;
        if(mll >=   0 && mll < 100 && met >= 150 && met < 200) return offset +  3;
        if(mll >=   0 && mll < 100 && met >= 200 && met < 250) return offset +  4;
        if(mll >=   0 && mll < 100 && met >= 250 && met < 300) return offset +  5;
        if(mll >=   0 && mll < 100 && met >= 300             ) return offset +  6;
        if(mll >= 100 &&              met >=   0 && met < 100) return offset +  7;
        if(mll >= 100 &&              met >= 100 && met < 150) return offset +  8;
        if(mll >= 100 &&              met >= 150 && met < 200) return offset +  9;
        if(mll >= 100 &&              met >= 200             ) return offset + 10;
    }
    if(mT2T >= 100) {
        if(met >=  0 && met < 200                            ) return offset + 11;
        if(met >= 200                                        ) return offset + 12;
    }

    return 0;
}

int SR4lG(float mT2L, float mT2T, float mll, float mT, float met, int offset = 0) {

    if(met >=   0 && met <  50) return offset + 1;
    if(met >=  50 && met < 100) return offset + 2;
    if(met >= 100 && met < 150) return offset + 3;
    if(met >= 150 && met < 200) return offset + 4;
    if(met >= 200             ) return offset + 5;

    return 0;
}

int SR4lH(float mT2L, float mT2T, float mll, float mT, float met, int offset = 0) {

    if(met >=   0 && met <  50) return offset + 1;
    if(met >=  50 && met < 100) return offset + 2;
    if(met >= 100 && met < 150) return offset + 3;
    if(met >= 150             ) return offset + 4;

    return 0;
}

int SR4lK(float mT2L, float mT2T, float mll, float mT, float met, int offset = 0) {

    if(met >=   0 && met < 100) return offset + 1;
    if(met >= 100 && met < 150) return offset + 2;
    if(met >= 150             ) return offset + 3;

    return 0;
}

int SR3l(int nTau, int nOSSF, int nOSLF, float mT2L, float mT2T, float mll, float mT, float met){

    // 3 light
    if(nTau == 0 && nOSSF >= 1              ) return SR3lA(mT2L, mT2T, mll, mT, met,  0);
    if(nTau == 0 && nOSSF <  1              ) return SR3lB(mT2L, mT2T, mll, mT, met, 44);
    // 2 light + 1 tau
    if(nTau == 1 && nOSSF >= 1              ) return SR3lC(mT2L, mT2T, mll, mT, met, 50);
    if(nTau == 1 && nOSSF <  1 && nOSLF >= 1) return SR3lD(mT2L, mT2T, mll, mT, met, 68);
    if(nTau == 1 && nOSLF <  1              ) return SR3lE(mT2L, mT2T, mll, mT, met, 84);
    // 1 light + 2 tau
    if(nTau == 2                            ) return SR3lF(mT2L, mT2T, mll, mT, met, 96);
    return 0;
}

int SR4l(int nTau, int nOSSF, int nOSLF, float mT2L, float mT2T, float mll, float mT, float met){

    // 4 light
    if(nTau == 0 && nOSSF >= 2              ) return SR4lG(mT2L, mT2T, mll, mT, met, 108);
    if(nTau == 0 && nOSSF <= 1              ) return SR4lH(mT2L, mT2T, mll, mT, met, 113);
    // 3light + 1tau
    if(nTau == 1                            ) return SR4lH(mT2L, mT2T, mll, mT, met, 117);
    // 2light + 2tau
    if(nTau == 2 && nOSSF >= 2              ) return SR4lH(mT2L, mT2T, mll, mT, met, 121);
    if(nTau == 2 && nOSSF <= 1              ) return SR4lK(mT2L, mT2T, mll, mT, met, 125);
    return 0;
}

int SR(int nLep, int nTau, int nOSSF, int nOSLF, float mT2L, float mT2T, float mll, float mT, float met) {

  if(nLep == 3)
    return SR3l(nTau, nOSSF, nOSLF, mT2L, mT2T, mll, mT, met);
  if(nLep == 4)
    return SR4l(nTau, nOSSF, nOSLF, mT2L, mT2T, mll, mT, met);
  return 0;
}

int SRos(int nLep, int nTau, int nOSSF, int nOSLF, float mT2L, float mT2T, float mll, float mT, float met) {
    if(nLep != 3 || nTau != 1) return 0;
    if(nOSSF >= 1 || (nOSSF <  1 && nOSLF >= 1)) return SR3lE(mT2L, mT2T, mll, mT, met, 84);
    return 0;
}

int SuperSig3L1(int nTau, float mT, float met) {
    if(nTau==0 && (mT   >= 120 && met >= 200)) return 1;
    return 0;
}

int SuperSig3L2(int nTau, float met) {
    if(nTau==0 &&                 met >= 200)  return 1;
    return 0;
}

int SuperSig3L3(int nTau, float mT2L, float met) {
    if(nTau==1 && (mT2L >=  50 && met >= 200)) return 1;
    return 0;
}

int SuperSig3L4(int nTau, float mT2T, float met) {
    if(nTau==2 && (mT2T >=  50 && met >= 200)) return 1;
    return 0;
}

int SuperSig3L5(int nTau, float met) {
    if(nTau==2 && met >=  75 ) return 1;
    return 0;
}

int SuperSig4L1(float met) {
    if(met >= 200) return 1;
    return 0;
}


int SuperSig(int nLep, int nTau, int nOSSF, int nOSLF, float mT2L, float mT2T, float mll, float mT, float met) {

    if(nLep == 3){
        if(nTau==0 && (mT   >= 120 && met >= 200)) return 1;
        if(nTau==0 &&                 met >= 250 ) return 2;
        if(nTau==1 && (mT2L >=  50 && met >= 200)) return 3;
        if(nTau==2 && (mT2T >=  50 && met >= 200)) return 4;
        if(nTau==2 &&                 met >=  75 ) return 5;
    }
    if(nLep == 4){
        if(met >= 200                            ) return 6;
    }
    return 0;
}

int SRcorr(float mll, float mT, float met, float ht, int offset = 0) {

    if(              mll <  75 && ht >=  0 && ht < 200) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100) return offset +  1;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150) return offset +  2;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200) return offset +  3;
        if(mT >=   0 && mT < 100 && met >= 200             ) return offset +  4;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset +  5;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset +  6;
        if(mT >= 100 && mT < 160 && met >= 150             ) return offset +  7;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset +  8;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset +  9;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 10;
        if(mT >= 160 &&             met >= 200             ) return offset + 11;
    }
    if(              mll <  75 && ht >= 200            ) {
        if(mT >=   0 && mT < 100                           ) return offset + 12;
        if(mT >= 100 && mT < 160                           ) return offset + 13;
        if(mT >= 160                                       ) return offset + 14;
    }
    if(mll >=  75 && mll < 105 && ht >=  0 && ht < 100) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100) return 0          ; // this is the WZ CR !
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150) return offset + 15;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200) return offset + 16;
        if(mT >=   0 && mT < 100 && met >= 200 && met < 250) return offset + 17;
        if(mT >=   0 && mT < 100 && met >= 250             ) return offset + 18;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset + 19;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 20;
        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 21;
        if(mT >= 100 && mT < 160 && met >= 200             ) return offset + 22;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 23;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 24;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 25;
        if(mT >= 160 &&             met >= 200             ) return offset + 26;
    }
    if(mll >=  75 && mll < 105 && ht >= 100 && ht < 200) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100) return offset + 27;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150) return offset + 28;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200) return offset + 29;
        if(mT >=   0 && mT < 100 && met >= 200 && met < 250) return offset + 30;
        if(mT >=   0 && mT < 100 && met >= 250             ) return offset + 31;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset + 32;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 33;
        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 34;
        if(mT >= 100 && mT < 160 && met >= 200             ) return offset + 35;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 36;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 37;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 38;
        if(mT >= 160 &&             met >= 200             ) return offset + 39;
    }
    if(mll >=  75 && mll < 105 && ht >= 200            ) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 150) return offset + 40;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 250) return offset + 41;
        if(mT >=   0 && mT < 100 && met >= 250 && met < 350) return offset + 42;
        if(mT >=   0 && mT < 100 && met >= 350             ) return offset + 43;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset + 44;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 45;
        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 46;
        if(mT >= 100 && mT < 160 && met >= 200 && met < 250) return offset + 47;
        if(mT >= 100 && mT < 160 && met >= 250 && met < 300) return offset + 48;
        if(mT >= 100 && mT < 160 && met >= 300             ) return offset + 49;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 50;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 51;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 52;
        if(mT >= 160 &&             met >= 200 && met < 250) return offset + 53;
        if(mT >= 160 &&             met >= 250 && met < 300) return offset + 54;
        if(mT >= 160 &&             met >= 300             ) return offset + 55;
    }
    if(mll >= 105                                      ) {
        if(mT >=   0 && mT < 100                           ) return offset + 56;
        if(mT >= 100 && mT < 160                           ) return offset + 57;
        if(mT >= 160                                       ) return offset + 58;
    } 
    return 0;
}



int SRcorrLike(float mll, float mT, float met, float ht, float like, int offset = 0) {

    if(              mll <  75 && ht >=  0 && ht < 200) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like < 13.75) return offset +  1;
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like >= 13.75) return offset +  2;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like < 12.5) return offset +  3;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like >= 12.5) return offset +  4;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200) return offset +  5;
        if(mT >=   0 && mT < 100 && met >= 200             ) return offset +  6;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like < 12.5) return offset +  7;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like >= 12.5) return offset +  8;

        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset +  9;
        if(mT >= 100 && mT < 160 && met >= 150             ) return offset +  10;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset +  11;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset +  12;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset +  13;
        if(mT >= 160 &&             met >= 200             ) return offset +  14;
    }
    if(              mll <  75 && ht >= 200            ) {
        if(mT >=   0 && mT < 100 && like < 12.5            ) return offset + 15;
        if(mT >=   0 && mT < 100 && like >= 12.5           ) return offset + 16;
        if(mT >= 100 && mT < 160                           ) return offset + 17;
        if(mT >= 160                                       ) return offset + 18;
    }
    if(mll >=  75 && mll < 105 && ht >=  0 && ht < 100) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like > 15.25) return 0          ; // this is the WZ CR !
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like <= 15.25) return offset +19  ; // this is not the WZ CR !

        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like > 14.5 ) return offset + 20;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like <= 14.5) return offset + 21;

        if(mT >=   0 && mT < 100 && met >= 150 && met < 200 && like >  12.5) return offset + 22;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200 && like <= 12.5) return offset + 23;

        if(mT >=   0 && mT < 100 && met >= 200 && met < 250) return offset + 24;
        if(mT >=   0 && mT < 100 && met >= 250             ) return offset + 25;

        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like >  13.5) return offset + 26;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like <= 13.5) return offset + 27;

        if(mT >= 100 && mT < 160 && met >= 100 && met < 150 && like >  12.5) return offset + 28;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150 && like <= 12.5) return offset + 29;

        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 30;
        if(mT >= 100 && mT < 160 && met >= 200             ) return offset + 31;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 32;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 33;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 34;
        if(mT >= 160 &&             met >= 200             ) return offset + 35;
    }
    if(mll >=  75 && mll < 105 && ht >= 100 && ht < 200) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like > 15) return offset + 36;
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like <=15) return offset + 37;

        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like > 13.5) return offset + 38;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like <=13.5) return offset + 39;

        if(mT >=   0 && mT < 100 && met >= 150 && met < 200 && like > 12.5) return offset + 40;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200 && like <= 12.5) return offset + 41;

        if(mT >=   0 && mT < 100 && met >= 200 && met < 250) return offset + 42;
        if(mT >=   0 && mT < 100 && met >= 250             ) return offset + 43;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like > 12.5 ) return offset + 44;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like <= 12.5) return offset + 45;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 46;
        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 47;
        if(mT >= 100 && mT < 160 && met >= 200             ) return offset + 48;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 49;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 50;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 51;
        if(mT >= 160 &&             met >= 200             ) return offset + 52;
    }
    if(mll >=  75 && mll < 105 && ht >= 200            ) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 150 && like >  13.5) return offset + 53;
        if(mT >=   0 && mT < 100 && met >=   0 && met < 150 && like <= 13.5) return offset + 54;

        if(mT >=   0 && mT < 100 && met >= 150 && met < 250 && like >  10.5) return offset + 55;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 250 && like <= 10.5) return offset + 56;

        if(mT >=   0 && mT < 100 && met >= 250 && met < 350) return offset + 57;
        if(mT >=   0 && mT < 100 && met >= 350             ) return offset + 58;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset + 59;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 60;
        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 61;
        if(mT >= 100 && mT < 160 && met >= 200 && met < 250) return offset + 62;
        if(mT >= 100 && mT < 160 && met >= 250 && met < 300) return offset + 63;
        if(mT >= 100 && mT < 160 && met >= 300             ) return offset + 64;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 65;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 66;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 67;
        if(mT >= 160 &&             met >= 200 && met < 250) return offset + 68;
        if(mT >= 160 &&             met >= 250 && met < 300) return offset + 69;
        if(mT >= 160 &&             met >= 300             ) return offset + 70;
    }
    if(mll >= 105                                      ) {
        if(mT >=   0 && mT < 100                           ) return offset + 71;
        if(mT >= 100 && mT < 160                           ) return offset + 72;
        if(mT >= 160                                       ) return offset + 73;
    } 
    return 0;
}



int SRcorrLikev2(float mll, float mT, float met, float ht, float like, int offset = 0) {

    if(              mll <  75 && ht >=  0 && ht < 200) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like <= 13.54) return offset +  1;
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like > 13.54) return offset +  2;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like <= 12.59) return offset +  3;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like > 12.59) return offset +  4;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200) return offset +  5;
        if(mT >=   0 && mT < 100 && met >= 200             ) return offset +  6;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like <= 12.59) return offset +  7;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like > 12.59) return offset +  8;

        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset +  9;
        if(mT >= 100 && mT < 160 && met >= 150             ) return offset +  10;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset +  11;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset +  12;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset +  13;
        if(mT >= 160 &&             met >= 200             ) return offset +  14;
    }
    if(              mll <  75 && ht >= 200            ) {
        if(mT >=   0 && mT < 100 && like <= 9.76            ) return offset + 15;
        if(mT >=   0 && mT < 100 && like  > 9.76           ) return offset + 16;
        if(mT >= 100 && mT < 160                           ) return offset + 17;
        if(mT >= 160                                       ) return offset + 18;
    }
    if(mll >=  75 && mll < 105 && ht >=  0 && ht < 100) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like > 14.35) return 0          ; // this is the WZ CR !
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like <= 14.35) return offset +19  ; // this is not the WZ CR !

        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like > 13.47 ) return offset + 20;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like <= 13.47) return offset + 21;

        if(mT >=   0 && mT < 100 && met >= 150 && met < 200 && like > 11.31) return offset + 22;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200 && like <= 11.31) return offset + 23;

        if(mT >=   0 && mT < 100 && met >= 200 && met < 250) return offset + 24;
        if(mT >=   0 && mT < 100 && met >= 250             ) return offset + 25;

        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like >  12.49) return offset + 26;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like <= 12.49) return offset + 27;

        if(mT >= 100 && mT < 160 && met >= 100 && met < 150 && like >  11.49) return offset + 28;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150 && like <= 11.49) return offset + 29;

        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 30;
        if(mT >= 100 && mT < 160 && met >= 200             ) return offset + 31;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 32;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 33;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 34;
        if(mT >= 160 &&             met >= 200             ) return offset + 35;
    }
    if(mll >=  75 && mll < 105 && ht >= 100 && ht < 200) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like > 14.89) return offset + 36;
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like <=14.89) return offset + 37;

        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like > 13.49) return offset + 38;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like <=13.49) return offset + 39;

        if(mT >=   0 && mT < 100 && met >= 150 && met < 200 && like > 11.99) return offset + 40;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200 && like <= 11.99) return offset + 41;

        if(mT >=   0 && mT < 100 && met >= 200 && met < 250) return offset + 42;
        if(mT >=   0 && mT < 100 && met >= 250             ) return offset + 43;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like > 12.24 ) return offset + 44;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like <= 12.24) return offset + 45;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 46;
        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 47;
        if(mT >= 100 && mT < 160 && met >= 200             ) return offset + 48;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 49;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 50;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 51;
        if(mT >= 160 &&             met >= 200             ) return offset + 52;
    }
    if(mll >=  75 && mll < 105 && ht >= 200            ) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 150 && like >  13.56) return offset + 53;
        if(mT >=   0 && mT < 100 && met >=   0 && met < 150 && like <= 13.56) return offset + 54;

        if(mT >=   0 && mT < 100 && met >= 150 && met < 250 && like >  10.29) return offset + 55;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 250 && like <= 10.29) return offset + 56;

        if(mT >=   0 && mT < 100 && met >= 250 && met < 350) return offset + 57;
        if(mT >=   0 && mT < 100 && met >= 350             ) return offset + 58;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset + 59;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 60;
        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 61;
        if(mT >= 100 && mT < 160 && met >= 200 && met < 250) return offset + 62;
        if(mT >= 100 && mT < 160 && met >= 250 && met < 300) return offset + 63;
        if(mT >= 100 && mT < 160 && met >= 300             ) return offset + 64;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 65;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 66;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 67;
        if(mT >= 160 &&             met >= 200 && met < 250) return offset + 68;
        if(mT >= 160 &&             met >= 250 && met < 300) return offset + 69;
        if(mT >= 160 &&             met >= 300             ) return offset + 70;
    }
    if(mll >= 105                                      ) {
        if(mT >=   0 && mT < 100                           ) return offset + 71;
        if(mT >= 100 && mT < 160                           ) return offset + 72;
        if(mT >= 160                                       ) return offset + 73;
    } 
    return 0;
}


int SRcorrLikev3(float mll, float mT, float met, float ht, float like, int offset = 0) {

    if(              mll <  75 && ht >=  0 && ht < 200) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like <13.54) return offset +  1;
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like >= 13.54) return offset +  2;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like <12.59) return offset +  3;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 150 && like >= 12.59) return offset +  4;
        if(mT >=   0 && mT < 100 && met >= 150 && met < 200) return offset +  5;
        if(mT >=   0 && mT < 100 && met >= 200             ) return offset +  6;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 150 && like <12.59) return offset +  7;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 150 && like >= 12.59) return offset +  8;

        if(mT >= 100 && mT < 160 && met >= 150             ) return offset +  9;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset +  10;
        if(mT >= 160 &&             met >= 100 && met < 200) return offset +  11;
        if(mT >= 160 &&             met >= 200             ) return offset +  12;
    }
    if(              mll <  75 && ht >= 200            ) {
        if(mT >=   0 && mT < 100 && like <9.76            ) return offset + 13;
        if(mT >=   0 && mT < 100 && like >= 9.76           ) return offset + 14;
        if(mT >= 100 && mT < 160                           ) return offset + 15;
        if(mT >= 160                                       ) return offset + 16;
    }
    if(mll >=  75 && mll < 105 && ht >=  0 && ht < 100) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like >= 14.375) return 0          ; // this is the WZ CR !
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like < 14.375) return offset +17  ; // this is not the WZ CR !

        if(mT >=   0 && mT < 100 && met >= 100 && met < 200 && like <13.625 ) return offset + 18;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 200 && like >= 13.625) return offset + 19;


        if(mT >=   0 && mT < 100 && met >= 200 && met < 350 && like  > 11.31 ) return offset + 20;
        if(mT >=   0 && mT < 100 && met >= 200 && met < 350 && like >= 11.31 ) return offset + 21;

        if(mT >=   0 && mT < 100 && met >= 350             ) return offset + 22;

        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like < 12.49) return offset + 23;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like >= 12.49) return offset + 24;

        if(mT >= 100 && mT < 160 && met >= 100 && met < 150 && like < 11.49) return offset + 25;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150 && like >= 11.49) return offset + 26;

        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 27;
        if(mT >= 100 && mT < 160 && met >= 200             ) return offset + 28;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 29;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 30;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 31;
        if(mT >= 160 &&             met >= 200             ) return offset + 32;
    }
    if(mll >=  75 && mll < 105 && ht >= 100 && ht < 200) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like >= 14.375) return 0;
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like <14.375) return offset + 17;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 200 && like <13.625) return offset + 18;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 200 && like >=13.625) return offset + 19;
        if(mT >=   0 && mT < 100 && met >= 200 && met < 350 && like <11.31) return offset + 20;
        if(mT >=   0 && mT < 100 && met >= 200 && met < 350 && like >= 11.31) return offset + 21;
        if(mT >=   0 && mT < 100 && met >= 350) return offset + 22;
        
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like <12.24 ) return offset + 33;
        if(mT >= 100 && mT < 160 && met >=   0 && met < 100 && like >= 12.24) return offset + 34;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 35;
        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 36;
        if(mT >= 100 && mT < 160 && met >= 200             ) return offset + 37;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 38;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 39;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 40;
        if(mT >= 160 &&             met >= 200             ) return offset + 41;
    }
    if(mll >=  75 && mll < 105 && ht >= 200            ) {
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like >= 14.375) return 0;
        if(mT >=   0 && mT < 100 && met >=   0 && met < 100 && like < 14.375) return offset + 17;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 200 && like <13.625) return offset + 18;
        if(mT >=   0 && mT < 100 && met >= 100 && met < 200 && like >=13.625) return offset + 19;
        if(mT >=   0 && mT < 100 && met >= 200 && met < 350 && like <11.31) return offset + 20;
        if(mT >=   0 && mT < 100 && met >= 200 && met < 350 && like >= 11.31) return offset + 21;
        if(mT >=   0 && mT < 100 && met >= 350) return offset + 22;

        if(mT >= 100 && mT < 160 && met >=   0 && met < 100) return offset + 42;
        if(mT >= 100 && mT < 160 && met >= 100 && met < 150) return offset + 43;
        if(mT >= 100 && mT < 160 && met >= 150 && met < 200) return offset + 44;
        if(mT >= 100 && mT < 160 && met >= 200 && met < 250) return offset + 45;
        if(mT >= 100 && mT < 160 && met >= 250 && met < 300) return offset + 46;
        if(mT >= 100 && mT < 160 && met >= 300             ) return offset + 47;
        if(mT >= 160 &&             met >=   0 && met < 100) return offset + 48;
        if(mT >= 160 &&             met >= 100 && met < 150) return offset + 49;
        if(mT >= 160 &&             met >= 150 && met < 200) return offset + 50;
        if(mT >= 160 &&             met >= 200 && met < 250) return offset + 51;
        if(mT >= 160 &&             met >= 250 && met < 300) return offset + 52;
        if(mT >= 160 &&             met >= 300             ) return offset + 53;
    }
    if(mll >= 105                                      ) {
        if(mT >=   0 && mT < 100                           ) return offset + 54;
        if(mT >= 100 && mT < 160                           ) return offset + 55;
        if(mT >= 160                                       ) return offset + 56;
    } 
    return 0;
}

int SRcorr2(float mll, float mT2WZ, float met, float ht, int offset = 0) {

    if(              mll <  75 && ht >=  0 && ht < 200) {
        if(mT2WZ >=   0 && mT2WZ < 100 && met >=   0 && met < 100) return offset +  1;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 100 && met < 150) return offset +  2;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 150 && met < 200) return offset +  3;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 200             ) return offset +  4;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >=   0 && met < 100) return offset +  5;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 100 && met < 150) return offset +  6;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 150             ) return offset +  7;
        if(mT2WZ >= 160 &&             met >=   0 && met < 100) return offset +  8;
        if(mT2WZ >= 160 &&             met >= 100 && met < 150) return offset +  9;
        if(mT2WZ >= 160 &&             met >= 150 && met < 200) return offset + 10;
        if(mT2WZ >= 160 &&             met >= 200             ) return offset + 11;
    }
    if(              mll <  75 && ht >= 200            ) {
        if(mT2WZ >=   0 && mT2WZ < 100                           ) return offset + 12;
        if(mT2WZ >= 100 && mT2WZ < 160                           ) return offset + 13;
        if(mT2WZ >= 160                                       ) return offset + 14;
    }
    if(mll >=  75 && mll < 105 && ht >=  0 && ht < 100) {
        if(mT2WZ >=   0 && mT2WZ < 100 && met >=   0 && met < 100) return 0          ; // this is the WZ CR !
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 100 && met < 150) return offset + 15;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 150 && met < 200) return offset + 16;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 200 && met < 250) return offset + 17;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 250             ) return offset + 18;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >=   0 && met < 100) return offset + 19;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 100 && met < 150) return offset + 20;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 150 && met < 200) return offset + 21;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 200             ) return offset + 22;
        if(mT2WZ >= 160 &&             met >=   0 && met < 100) return offset + 23;
        if(mT2WZ >= 160 &&             met >= 100 && met < 150) return offset + 24;
        if(mT2WZ >= 160 &&             met >= 150 && met < 200) return offset + 25;
        if(mT2WZ >= 160 &&             met >= 200             ) return offset + 26;
    }
    if(mll >=  75 && mll < 105 && ht >= 100 && ht < 200) {
        if(mT2WZ >=   0 && mT2WZ < 100 && met >=   0 && met < 100) return offset + 27;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 100 && met < 150) return offset + 28;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 150 && met < 200) return offset + 29;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 200 && met < 250) return offset + 30;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 250             ) return offset + 31;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >=   0 && met < 100) return offset + 32;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 100 && met < 150) return offset + 33;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 150 && met < 200) return offset + 34;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 200             ) return offset + 35;
        if(mT2WZ >= 160 &&             met >=   0 && met < 100) return offset + 36;
        if(mT2WZ >= 160 &&             met >= 100 && met < 150) return offset + 37;
        if(mT2WZ >= 160 &&             met >= 150 && met < 200) return offset + 38;
        if(mT2WZ >= 160 &&             met >= 200             ) return offset + 39;
    }
    if(mll >=  75 && mll < 105 && ht >= 200            ) {
        if(mT2WZ >=   0 && mT2WZ < 100 && met >=   0 && met < 150) return offset + 40;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 150 && met < 250) return offset + 41;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 250 && met < 350) return offset + 42;
        if(mT2WZ >=   0 && mT2WZ < 100 && met >= 350             ) return offset + 43;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >=   0 && met < 100) return offset + 44;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 100 && met < 150) return offset + 45;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 150 && met < 200) return offset + 46;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 200 && met < 250) return offset + 47;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 250 && met < 300) return offset + 48;
        if(mT2WZ >= 100 && mT2WZ < 160 && met >= 300             ) return offset + 49;
        if(mT2WZ >= 160 &&             met >=   0 && met < 100) return offset + 50;
        if(mT2WZ >= 160 &&             met >= 100 && met < 150) return offset + 51;
        if(mT2WZ >= 160 &&             met >= 150 && met < 200) return offset + 52;
        if(mT2WZ >= 160 &&             met >= 200 && met < 250) return offset + 53;
        if(mT2WZ >= 160 &&             met >= 250 && met < 300) return offset + 54;
        if(mT2WZ >= 160 &&             met >= 300             ) return offset + 55;
    }
    if(mll >= 105                                      ) {
        if(mT2WZ >=   0 && mT2WZ < 100                           ) return offset + 56;
        if(mT2WZ >= 100 && mT2WZ < 160                           ) return offset + 57;
        if(mT2WZ >= 160                                       ) return offset + 58;
    } 
    return 0;
}


int SR_likeHT(float ht, float like){
  if (like > 16.5) like = 16.5;
  if (like < 1.5) like = 1.5;
  int first = TMath::Floor((like -0.5)/0.75);
  int extra = 16;
  if (ht < 100) extra = 0;
  if (ht > 200) extra = 32; 
  return first + extra;
}
void functionsEWK_WZ() {}
