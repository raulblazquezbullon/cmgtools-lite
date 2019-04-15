#include "TH2F.h"
#include "TMath.h"
#include "TGraphAsymmErrors.h"
#include "TFile.h"
#include "TSystem.h"
#include <iostream>

using namespace std;

TString CMSSW_BASE_SF = gSystem->ExpandPathName("${CMSSW_BASE}");
TString DATA_SF = CMSSW_BASE_SF+"/src/CMGTools/TTHAnalysis/data";

float getSF(TH2F* hist, float pt, float eta){
    int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
    int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(eta)));
    return hist->GetBinContent(xbin,ybin);
}

float getSF(TH2D* hist, float pt, float eta){
    int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
    int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(eta)));
    return hist->GetBinContent(xbin,ybin);
}

float getUnc(TH2F* hist, float pt, float eta){
    int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
    int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(eta)));
    return hist->GetBinError(xbin,ybin);
}


// TRIGGER SCALE FACTORS FULLSIM
// -------------------------------------------------------------

// files
TFile* f_trigEff_0tau = new TFile(DATA_SF+"/triggerSF/triggerSF_0tau_EWKino_fastsim_M17_36p5fb.root", "read");
TFile* f_trigEff_1tau = new TFile(DATA_SF+"/triggerSF/triggerSF_1tau_EWKino_fastsim_M17_36p5fb.root", "read");
TFile* f_trigSF_1lep  = new TFile(DATA_SF+"/triggerSF/triggerSF_1lep_EWKino_M17_36p5fb.root"        , "read");

// fullsim
TH2F* h_trigSF_1el   = (TH2F*) f_trigSF_1lep -> Get("ele27_sf");
TH2F* h_trigSF_1mu   = (TH2F*) f_trigSF_1lep -> Get("isomu24_sf");

float triggerSFfullsim(float pt1  , float eta1  , int pdg1  ,
                       float pt2  , float eta2  , int pdg2  ,
                       float pt3=0, float eta3=0, int pdg3=0) {

    int nTaus = (abs(pdg1)==15)+(abs(pdg2)==15)+(abs(pdg3)==15);

    // 2lss or 3l 1tau region
    if(pdg3==0 || nTaus==1) {
        float lpt1 = pt1; float lpt2 = pt2; int lpdg1 = pdg1; int lpdg2 = pdg2;
        if(abs(pdg1)==15) {lpt1 = pt2; lpdg1 = pdg2; lpt2 = pt3; lpdg2 = pdg3; } 
        if(abs(pdg2)==15) {lpt1 = pt1; lpdg1 = pdg1; lpt2 = pt3; lpdg2 = pdg3; } 
        if(abs(lpdg1)+abs(lpdg2)!=22) return 1.0;
        if(lpt1>30 || lpt2>20       ) return 1.0;
        return 0.95;
    }

    // 3l 2tau
    if(nTaus==2){ 
        float lpt = pt1; float leta = eta1; int lpdg = pdg1;
        if(abs(pdg2)!=15) {lpt = pt2; leta = eta2; lpdg = pdg2; } 
        if(abs(pdg3)!=15) {lpt = pt3; leta = eta3; lpdg = pdg3; } 
        TH2F* hist = (abs(lpdg)==13)?h_trigSF_1mu:h_trigSF_1el;
        return getSF(hist, lpt, abs(leta));
    }

    return 1.0;
}

// fastsim
TH2F* h_trigEff_0tau = (TH2F*) f_trigEff_0tau -> Get("h_0tau_num");
TH2F* h_trigEff_1tau = (TH2F*) f_trigEff_1tau -> Get("h_1tau_num");
TH2F* h_trigEff_1el  = (TH2F*) f_trigSF_1lep  -> Get("hist2dnum_Ele27_WPTight_Gsf_fromemu__HLT_Ele27_WPTight_Gsfpt");
TH2F* h_trigEff_1mu  = (TH2F*) f_trigSF_1lep  -> Get("hist2dnum_IsoMu24orIsoTkMu24_fromemu__HLT_IsoMu24orIsoTkMu24pt");


float triggerSFfastsim(float pt1  , float eta1  , int pdg1  ,
                       float pt2  , float eta2  , int pdg2  ,
                       float pt3=0, float eta3=0, int pdg3=0) {

    int nTaus = (abs(pdg1)==15)+(abs(pdg2)==15)+(abs(pdg3)==15);

    // 2lss or 3l 1tau region
    if(pdg3==0 || nTaus==1) {
        float lpt1 = pt1; float lpt2 = pt2;
        if(abs(pdg1)==15) {lpt1 = pt2; lpt2 = pt3; } 
        if(abs(pdg2)==15) {lpt1 = pt1; lpt2 = pt3; } 
        return getSF(h_trigEff_1tau, lpt1, lpt2);
    }

    // 3l 2tau
    if(nTaus==2){ 
        float lpt = pt1; float leta = eta1; int lpdg = pdg1;
        if(abs(pdg2)!=15) {lpt = pt2; leta = eta2; lpdg = pdg2; } 
        if(abs(pdg3)!=15) {lpt = pt3; leta = eta3; lpdg = pdg3; } 
        TH2F* hist = (abs(lpdg)==13)?h_trigEff_1mu:h_trigEff_1el;
        return getSF(hist, lpt, abs(leta));
    }

    // 3l 0tau
    if(nTaus==0){
        return getSF(h_trigEff_0tau, pt2, pt3);
    } 
    return 1.0;
}


//TFile* f_trigSF       = new TFile(DATA_SF+"/triggerSF/triggerSF_EWKino_fullsim_ICHEP2016_9p2fb.root"       , "read");
//TFile* f_trigSF_ele27 = new TFile(DATA_SF+"/triggerSF/triggerSF_Ele27_EWKino_fullsim_ICHEP2016_12p9fb.root", "read");
//
//TH2F* h_trigSF_3l_mu = (TH2F*) f_trigSF      ->Get("eff_3l_mu" );
//TH2F* h_trigSF_3l_el = (TH2F*) f_trigSF      ->Get("eff_3l_ele");
//TH2F* h_trigSF_2l_mu = (TH2F*) f_trigSF      ->Get("eff_2l_mu" );
//TH2F* h_trigSF_2l_el = (TH2F*) f_trigSF      ->Get("eff_2l_ele");
//TH2F* h_trigSF_ele27 = (TH2F*) f_trigSF_ele27->Get("hist2dnum_Ele27_WPLoose_Gsf__HLT_Ele27_WPLoose_Gsf");
//
//float triggerSFBR6(float pt1, float eta1, int pdg1,
//                   float pt2, float eta2, int pdg2,
//                   float pt3, float eta3, int pdg3) {
//
//        if(abs(pdg1)+abs(pdg2)+abs(pdg3)==43) return 0.86;
//
//        float pt = pt1; float eta = eta1;
//        if(abs(pdg2)==11) {pt = pt2; eta=eta2; }
//        if(abs(pdg3)==11) {pt = pt3; eta=eta3; }
//        TH2F* hist = h_trigSF_ele27;
//        int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
//        int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(abs(eta))));
//        return hist->GetBinContent(xbin,ybin);
//}
//
//float triggerSF(int BR, float pt1, int pdg1, 
//                        float pt2, int pdg2, 
//                        float pt3 = 0, int pdg3 = 0, 
//                        float pt4 = 0, int pdg4 = 0){
//    // Lesya's mail:
//    // - split for trailing ele or trailing mu
//    // - 3l: subleading vs trailing lepton pt (1l + 2l triggers)
//    // - 2l: leading light lepton vs subleading light lepton ==> good for both 2l+tau and 2lSS case:s (1l + 2l triggers)
//    // - l+tautau: use flat 86% everywhere; pt_e > 35 GeV; pt_mu > 25 GeV (1l + l/tau triggers)
//
//    // 3l: 2tau (flat 86% in dedicated function)
//    if(BR == 6) return 1.0;
//
//    // 2lss 
//    if(BR == -1){
//        TH2F* hist = (pdg2 == 13)?h_trigSF_2l_mu:h_trigSF_2l_el;
//        int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt1)));
//        int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(pt2)));
//        return hist->GetBinContent(xbin,ybin);
//    }
//
//    // 3l: 3light
//    if(BR <= 2) {
//        TH2F* hist = (abs(pdg3) == 13)?h_trigSF_3l_mu:h_trigSF_3l_el;
//        int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt2)));
//        int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(pt3)));
//        return hist->GetBinContent(xbin,ybin);
//    } 
//
//    // 3l: 2light + 1tau
//    if(BR >= 3 && BR <= 5){
//        vector<int> pdgs; vector<float> pts;
//        if(abs(pdg1)!=15) { pdgs.push_back(abs(pdg1)); pts.push_back(pt1); }
//        if(abs(pdg2)!=15) { pdgs.push_back(abs(pdg2)); pts.push_back(pt2); }
//        if(abs(pdg3)!=15) { pdgs.push_back(abs(pdg3)); pts.push_back(pt3); }
//        TH2F* hist = (pdgs[1] == 13)?h_trigSF_2l_mu:h_trigSF_2l_el;
//        int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pts[0])));
//        int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(pts[1])));
//        return hist->GetBinContent(xbin,ybin);
//    }
//
//    // others: (4l, crwz) 
//    return 1;
//}



// LEPTON SCALE FACTORS FULLSIM
// -------------------------------------------------------------


// electrons
TFile* f_elSF_id   = new TFile(DATA_SF+"/leptonSF/electronSF_id_EWKino_fullsim_M17_36p5fb.root"    , "read");
TFile* f_elSF_eff  = new TFile(DATA_SF+"/leptonSF/electronSF_trkEff_EWKino_fullsim_M17_36p5fb.root", "read");
TH2F* h_elSF_mvaVT = (TH2F*) f_elSF_id ->Get("GsfElectronToLeptonMvaVTIDEmuTightIP2DSIP3D8mini04");
TH2F* h_elSF_mvaM  = (TH2F*) f_elSF_id ->Get("GsfElectronToLeptonMvaMIDEmuTightIP2DSIP3D8mini04");
TH2F* h_elSF_id    = (TH2F*) f_elSF_id ->Get("GsfElectronToMVAVLooseTightIP2D");
TH2F* h_elSF_trk   = (TH2F*) f_elSF_eff->Get("EGamma_SF2D");

// muons
TFile* f_muSF_mvaVT = new TFile(DATA_SF+"/leptonSF/muonSF_mvaVT_EWKino_fullsim_M17_36p5fb.root", "read");
TFile* f_muSF_mvaM  = new TFile(DATA_SF+"/leptonSF/muonSF_mvaM_EWKino_fullsim_M17_36p5fb.root" , "read");
TFile* f_muSF_id    = new TFile(DATA_SF+"/leptonSF/muonSF_id_EWKino_fullsim_M17_36p5fb.root"   , "read");
TFile* f_muSF_eff   = new TFile(DATA_SF+"/leptonSF/muonSF_trk_EWKino_fullsim_M17_36p5fb.root"  , "read"); 
TH2F* h_muSF_mvaVT = (TH2F*) f_muSF_mvaVT->Get("SF" );
TH2F* h_muSF_mvaM  = (TH2F*) f_muSF_mvaM ->Get("SF" );
TH2F* h_muSF_id    = (TH2F*) f_muSF_id   ->Get("SF" );
TGraphAsymmErrors* h_muSF_trk = (TGraphAsymmErrors*) f_muSF_eff->Get("ratio_eff_eta3_dr030e030_corr");


float getElectronSF(float pt, float eta, int wp = 0){
    TH2F* hist = (wp == 1)?h_elSF_mvaVT:h_elSF_mvaM;
    return getSF(hist, pt, abs(eta))*getSF(h_elSF_id, pt, abs(eta))*getSF(h_elSF_trk, eta, pt);
}


float getElectronUnc(float pt, float eta, int wp = 0, int var = 0){
    TH2F* hist = (wp == 1)?h_elSF_mvaVT:h_elSF_mvaM;
    float error1 = getUnc(hist      , pt , abs(eta));
    float error2 = getUnc(h_elSF_id , pt , abs(eta));
    float error3 = getUnc(h_elSF_trk, eta, pt);
    return TMath::Sqrt(error1*error1 + error2*error2 + error3*error3);
}


float getMuonSF(float pt, float eta, int wp = 0){
    TH2F* hist = (wp == 1)?h_muSF_mvaVT:h_muSF_mvaM;
    return h_muSF_trk->Eval(eta)*getSF(hist, pt, abs(eta))*getSF(h_muSF_id, pt, abs(eta)); 
}

float getMuonUnc(float pt, int var = 0) {
    if (pt<20)  //FIXME: check uncertainty on tracking efficiency once it is available
         return TMath::Sqrt(0.03*0.03+0.01*0.01+0.01*0.01);
    return TMath::Sqrt(0.02*0.02+0.01*0.01);  
}




float getLepSF(float pt, float eta, int pdgId, int isTight, int wp = 0, int var = 0){
    if(!isTight) return 1.0;
    float sf  = 1.0; 
    float err = 0.0;
    if(abs(pdgId) == 11) { sf = getElectronSF(pt, eta, wp);}
    if(abs(pdgId) == 13) { sf = getMuonSF(pt, eta, wp);} // only relative error
    if(abs(pdgId) == 15) { sf = 0.95                      ; err = 0.05;                             };
    return (var==0)?sf:(sf+var*err)/sf;

}


// electrons
//TFile* f_elSF_id   = new TFile(DATA_SF+"/leptonSF/electronSF_id_EWKino_fullsim_M17_36p5fb.root"    , "read");
TFile* f_elSF_Loose2018  = new TFile(DATA_SF+"/leptonSF/egamma2017_Loose.root", "read"); //Loose ID + ISO SF
TH2F* h_elSF_Loose2018   = (TH2F*) f_elSF_Loose2018->Get("EGamma_SF2D");
TFile* f_elSF_Tight2018  = new TFile(DATA_SF+"/leptonSF/egamma2017_Tight_Old.root", "read"); //Loose to Tight ID + ISO SF
TH2F* h_elSF_Tight2018   = (TH2F*) f_elSF_Tight2018->Get("EGamma_SF2D");

// muons
TFile* f_muSF_id2018    = new TFile(DATA_SF+"/leptonSF/muon_SF_ID_2018.root"   , "read");
TH2F* h_muSF_id2018    = (TH2F*) f_muSF_id2018->Get("NUM_LooseID_DEN_genTracks_pt_abseta" );

TFile* f_muSF_id2018_T    = new TFile(DATA_SF+"/leptonSF/EfficienciesAndSF_Tight_EWKino_2017Cut_NUM_Tight_EWKino_2017Cut_DEN_Loose_EWKino_2017Cut_PAR_pt_eta.root"   , "read");
TH2F* h_muSF_id2018_T    = (TH2F*) f_muSF_id2018_T->Get("EfficiencyLOOSEMVA_TightMVA_Final/pt_abseta_ratio");


float getElectronSF2018(float pt, float eta, int wp = 0){
    //TH2F* hist1 = (wp == 1)?h_elSF_mvaVT:h_elSF_mvaM;
    //return getSF(hist, pt, abs(eta))*getSF(h_elSF_id, pt, abs(eta))*getSF(h_elSF_trk, eta, pt);
    return getSF(h_elSF_Loose2018, eta, pt)*getSF(h_elSF_Tight2018, eta, pt);
}

float getMuonSF2018(float pt, float eta, int wp = 0){
    return getSF(h_muSF_id2018_T, pt, abs(eta))*getSF(h_muSF_id2018, pt, abs(eta)); 
    //return getSF(h_muSF_id2018, abs(eta), pt)*getSF(hist, pt, abs(eta));
}


float getLepSF2018(float pt, float eta, int pdgId, int isTight, int wp = 0, int var = 0){
    if(!isTight) return 1.0;
    float sf  = 1.0; 
    float err = 0.0;
    if(abs(pdgId) == 11) { sf = getElectronSF2018(pt, eta, wp);}
    if(abs(pdgId) == 13) { sf = getMuonSF2018    (pt, eta, wp);} // only relative error
    if(abs(pdgId) == 15) { sf = 0.95                      ; err = 0.05;                             };
    return (var==0)?sf:(sf+var*err)/sf;

}


float getLepSF2018Loose(float pt, float eta, int pdgId, int isTight, int wp = 0, int var = 0){
    if(!isTight) return 1.0;
    float sf  = 1.0; 
    float err = 0.0;
    if(abs(pdgId) == 11) { sf = getSF(h_elSF_Loose2018, eta, pt);}
    if(abs(pdgId) == 13) { sf = h_muSF_trk->Eval(eta)*getSF(h_muSF_id2018, pt, abs(eta));} // only relative error
    if(abs(pdgId) == 15) { sf = 0.95                      ; err = 0.05;                             };
    return (var==0)?sf:(sf+var*err)/sf;

}






float leptonSF(float lepSF1, float lepSF2, float lepSF3 = 1, float lepSF4 = 1){
    return lepSF1*lepSF2*lepSF3*lepSF4;
}



// LEPTON SCALE FACTORS FASTSIM SPRING16
// -------------------------------------------------------------

// electrons
TFile* f_elSF_FS_mvaVT = new TFile(DATA_SF+"/leptonSF/electronSF_mvaVT_EWKino_fastsim_M17_36p5fb.root", "read");
TFile* f_elSF_FS_mvaM  = new TFile(DATA_SF+"/leptonSF/electronSF_mvaM_EWKino_fastsim_M17_36p5fb.root" , "read");
TFile* f_elSF_FS_id    = new TFile(DATA_SF+"/leptonSF/electronSF_id_EWKino_fastsim_M17_36p5fb.root"   , "read");
TH2F* h_elSF_FS_mvaVT  = (TH2F*) f_elSF_FS_mvaVT->Get("histo2D");
TH2F* h_elSF_FS_mvaM   = (TH2F*) f_elSF_FS_mvaM ->Get("histo2D");
TH2F* h_elSF_FS_id     = (TH2F*) f_elSF_FS_id   ->Get("histo2D");

// muons
TFile* f_muSF_FS_mvaVT = new TFile(DATA_SF+"/leptonSF/muonSF_mvaVT_EWKino_fastsim_M17_36p5fb.root", "read");
TFile* f_muSF_FS_mvaM  = new TFile(DATA_SF+"/leptonSF/muonSF_mvaM_EWKino_fastsim_M17_36p5fb.root" , "read");
TFile* f_muSF_FS_id    = new TFile(DATA_SF+"/leptonSF/muonSF_id_EWKino_fastsim_M17_36p5fb.root"   , "read");
TH2F* h_muSF_FS_mvaVT  = (TH2F*) f_muSF_FS_mvaVT->Get("histo2D");
TH2F* h_muSF_FS_mvaM   = (TH2F*) f_muSF_FS_mvaM ->Get("histo2D");
TH2F* h_muSF_FS_id     = (TH2F*) f_muSF_FS_id   ->Get("histo2D");

// taus
TFile* f_tauSF_FS_id = new TFile(DATA_SF+"/leptonSF/tauSF_id_EWKino_fastsim_M17_36p5fb.root", "read");
TH2F* h_tauSF_FS_id  = (TH2F*) f_tauSF_FS_id->Get("histo2D" );

float getElectronSFFS(float pt, float eta, int wp = 0){
    TH2F* hist = (wp == 1)?h_elSF_FS_mvaVT:h_elSF_FS_mvaM;
    return getSF(hist, pt, abs(eta))*getSF(h_elSF_FS_id, pt, abs(eta));
}

float getElectronUncFS(int var = 0){
	return 0.02;
}

float getMuonSFFS(float pt, float eta, int wp = 0){
    TH2F* hist = (wp == 1)?h_muSF_FS_mvaVT:h_muSF_FS_mvaM;
    return getSF(hist, pt, abs(eta))*getSF(h_muSF_FS_id, pt, abs(eta)); 
}

float getMuonUncFS(float pt, int var = 0) {
	return 0.02;
}

float getTauSFFS(float pt, float eta){
    return getSF(h_tauSF_FS_id, pt, abs(eta));
}

float getTauUncFS(float pt, float eta, int var = 0) {
	return getUnc(h_tauSF_FS_id, pt, abs(eta));
}

float getLepSFFS(float pt, float eta, int pdgId, int isTight, int wp = 0, int var = 0){
    if(!isTight) return 1.0;
    float sf  = 1.0; 
    float err = 0.0;
    if(abs(pdgId) == 11) { sf = getElectronSFFS(pt, eta, wp); err = sf*getElectronUncFS(var); } // relative uncertainty
    if(abs(pdgId) == 13) { sf = getMuonSFFS    (pt, eta, wp); err = sf*getMuonUncFS    (var); } // relative uncertainty
    if(abs(pdgId) == 15) { sf = getTauSFFS     (pt, eta    ); err = getTauUncFS(pt, eta, var);}
    return (var==0)?sf:(sf+var*err)/sf;
}

float leptonSFFS(float lepSF1, float lepSF2, float lepSF3 = 1.0, float lepSF4 = 1.0){
    return lepSF1*lepSF2*lepSF3*lepSF4;
}



// LEPTON SCALE FACTORS FASTSIM SUMMER16
// -------------------------------------------------------------

// electrons
TFile* f_elSF_FS16_mvaVT = new TFile(DATA_SF+"/leptonSF/electronSF_mvaVT_EWKino_fastsim_Summer16_M17_36p5fb.root", "read");
TFile* f_elSF_FS16_mvaM  = new TFile(DATA_SF+"/leptonSF/electronSF_mvaM_EWKino_fastsim_Summer16_M17_36p5fb.root" , "read");
TH2F* h_elSF_FS16_mvaVT  = (TH2F*) f_elSF_FS16_mvaVT->Get("histo2D");
TH2F* h_elSF_FS16_mvaM   = (TH2F*) f_elSF_FS16_mvaM ->Get("histo2D");

// muons
TFile* f_muSF_FS16_mvaVT = new TFile(DATA_SF+"/leptonSF/muonSF_mvaVT_EWKino_fastsim_Summer16_M17_36p5fb.root", "read");
TFile* f_muSF_FS16_mvaM  = new TFile(DATA_SF+"/leptonSF/muonSF_mvaM_EWKino_fastsim_Summer16_M17_36p5fb.root" , "read");
TH2F* h_muSF_FS16_mvaVT  = (TH2F*) f_muSF_FS16_mvaVT->Get("histo2D");
TH2F* h_muSF_FS16_mvaM   = (TH2F*) f_muSF_FS16_mvaM ->Get("histo2D");

float getElectronSFFS16(float pt, float eta, int wp = 0){
    TH2F* hist = (wp == 1)?h_elSF_FS16_mvaVT:h_elSF_FS16_mvaM;
    return getSF(hist, pt, abs(eta));
}

float getElectronUncFS16(int var = 0){
	return 0.02;
}

float getMuonSFFS16(float pt, float eta, int wp = 0){
    TH2F* hist = (wp == 1)?h_muSF_FS16_mvaVT:h_muSF_FS16_mvaM;
    return getSF(hist, pt, abs(eta));
}

float getMuonUncFS16(float pt, int var = 0) {
	return 0.02;
}

float getTauSFFS16(float pt, float eta){
	return 1.0;
}

float getTauUncFS16(float pt, float eta, int var = 0) {
	return 0.02;
}

float getLepSFFS16(float pt, float eta, int pdgId, int isTight, int wp = 0, int var = 0){
    if(!isTight) return 1.0;
    float sf  = 1.0; 
    float err = 0.0;
    if(abs(pdgId) == 11) { sf = getElectronSFFS16(pt, eta, wp); err = sf*getElectronUncFS16(var); } // relative uncertainty
    if(abs(pdgId) == 13) { sf = getMuonSFFS16    (pt, eta, wp); err = sf*getMuonUncFS16    (var); } // relative uncertainty
    if(abs(pdgId) == 15) { sf = getTauSFFS16     (pt, eta    ); err = sf*getTauUncFS16(pt, eta, var);} // relative uncertainty
    return (var==0)?sf:(sf+var*err)/sf;
}

float leptonSFFS16(float lepSF1, float lepSF2, float lepSF3 = 1.0, float lepSF4 = 1.0){
    return lepSF1*lepSF2*lepSF3*lepSF4;
}

float AdHoc(Int_t Trigee, Int_t Trige, Int_t Trigem){
    float SF = 1;
    if (Trige > 0) SF *= 1./1.139;
    else SF *= 1./0.82;
    return SF;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Lepton SF for the first set of legacy Data/MC (nanoAODv4), 17Jul2018 (2016) + 17Nov2017 (2017) + 17Sep2018 (2018) data reprocessing//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////
// EL SF //
///////////

TFile* f_elSF_v4_2016_mva_highpt  = new TFile(DATA_SF+"/leptonSF/EGM2D_BtoH_GT20GeV_RecoSF_Legacy2016.root", "read");
TH2F*  h_elSF_v4_2016_mva_highpt  = (TH2F*) f_elSF_v4_2016_mva_highpt->Get("EGamma_SF2D");

TFile* f_elSF_v4_2016_mva_lowpt  = new TFile(DATA_SF+"/leptonSF/EGM2D_BtoH_low_RecoSF_Legacy2016.root", "read");
TH2F*  h_elSF_v4_2016_mva_lowpt  = (TH2F*) f_elSF_v4_2016_mva_lowpt->Get("EGamma_SF2D");

TFile* f_elSF_v4_2016_LtoL_mva  = new TFile(DATA_SF+"/leptonSF/el_scaleFactors_20160724.root", "read");
TH2F*  h_elSF_v4_2016_mva_gsftoSIP    = (TH2F*) f_elSF_v4_2016_LtoL_mva->Get("GsfElectronToFOID2D");
TH2F*  h_elSF_v4_2016_mva_SIPtoMini   = (TH2F*) f_elSF_v4_2016_LtoL_mva->Get("MVAVLooseElectronToMini4");
TH2F*  h_elSF_v4_2016_mva_MinitoConv  = (TH2F*) f_elSF_v4_2016_LtoL_mva->Get("MVAVLooseElectronToConvIHit1");

TFile* f_elSF_v4_2016_LtoT_mva       = new TFile(DATA_SF+"/leptonSF/lepMVAEffSF_e_2lss_2016.root", "read");
TH2F*  h_elSF_v4_2016_LtoT_mva       = (TH2F*) f_elSF_v4_2016_LtoT_mva->Get("sf");

float getElSF_v4_2016(int wp, int unc, float pt, float eta){
  //El SF are subdivided
  //First from cluster to Loose gsfelec
  float sfTtoL; float sfTtoLcorr;
  if (pt < 20){
    sfTtoL     = getSF(h_elSF_v4_2016_mva_lowpt, eta, pt);
    sfTtoLcorr = getUnc(h_elSF_v4_2016_mva_lowpt, eta, pt);
  }
  else{
    sfTtoL     = getSF(h_elSF_v4_2016_mva_highpt, eta, pt);
    sfTtoLcorr = getUnc(h_elSF_v4_2016_mva_highpt, eta, pt);
  }
  //Now Loose POG to loose leptonMVA
  float sfLtoL = getSF(h_elSF_v4_2016_mva_gsftoSIP, pt, abs(eta));
  sfLtoL *= getSF(h_elSF_v4_2016_mva_SIPtoMini, pt, abs(eta));
  sfLtoL *= getSF(h_elSF_v4_2016_mva_MinitoConv, pt, abs(eta));
  float sfLtoLcorr = TMath::Power( TMath::Power(getUnc(h_elSF_v4_2016_mva_gsftoSIP, pt, abs(eta)), 2) +  TMath::Power(getUnc(h_elSF_v4_2016_mva_SIPtoMini, pt, abs(eta)), 2) +  TMath::Power(getUnc(h_elSF_v4_2016_mva_MinitoConv, pt, abs(eta)), 2), 0.5); 
  //And then loose leptonMVA to tight leptonMVA
  float sfLtoT     =  getSF(h_elSF_v4_2016_LtoT_mva, pt, abs(eta));
  float sfLtoTcorr =  getUnc(h_elSF_v4_2016_LtoT_mva, pt, abs(eta));
  return sfTtoL*sfLtoL*sfLtoT*(1 + unc*sfTtoLcorr)*(1+unc*sfLtoLcorr)*(1+unc*sfLtoTcorr);
}



TFile* f_elSF_v4_2017_mva_highpt  = new TFile(DATA_SF+"/leptonSF/egammaEffi.txt_EGM2D_runBCDEF_passingRECO.root", "read");
TH2F*  h_elSF_v4_2017_mva_highpt  = (TH2F*) f_elSF_v4_2017_mva_highpt->Get("EGamma_SF2D");

TFile* f_elSF_v4_2017_mva_lowpt  = new TFile(DATA_SF+"/leptonSF/egammaEffi.txt_EGM2D_runBCDEF_passingRECO_lowEt.root", "read");
TH2F*  h_elSF_v4_2017_mva_lowpt  = (TH2F*) f_elSF_v4_2017_mva_lowpt->Get("EGamma_SF2D");

TFile* f_elSF_v4_2017_LtoL_mva  = new TFile(DATA_SF+"/leptonSF/egammaEffi.txt_EGM2D_looseTTH_2017.root", "read");
TH2F*  h_elSF_v4_2017_LtoL_mva    = (TH2F*) f_elSF_v4_2017_LtoL_mva->Get("EGamma_SF2D");
TFile* f_elSF_v4_2017_LtoT_mva       = new TFile(DATA_SF+"/leptonSF/lepMVAEffSF_e_2lss.root", "read");
TH2F*  h_elSF_v4_2017_LtoT_mva       = (TH2F*) f_elSF_v4_2017_LtoT_mva->Get("sf");

float getElSF_v4_2017(int wp, int unc, float pt, float eta){
  //El SF are subdivided
  //First from cluster to Loose gsfelec
  float sfTtoL; float sfTtoLcorr;
  if (pt < 20){
    sfTtoL     = getSF(h_elSF_v4_2017_mva_lowpt, eta, pt);
    sfTtoLcorr = getUnc(h_elSF_v4_2017_mva_lowpt, eta, pt);
  }
  else{
    sfTtoL     = getSF(h_elSF_v4_2017_mva_highpt, eta, pt);
    sfTtoLcorr = getUnc(h_elSF_v4_2017_mva_highpt, eta, pt);
  }
  //Now Loose POG to loose leptonMVA
  float sfLtoL = getSF(h_elSF_v4_2017_LtoL_mva, eta, pt);
  float sfLtoLcorr = getUnc(h_elSF_v4_2017_LtoL_mva, eta, pt); 

  //And then loose leptonMVA to tight leptonMVA
  float sfLtoT     =  getSF(h_elSF_v4_2017_LtoT_mva, pt, abs(eta));
  float sfLtoTcorr =  getUnc(h_elSF_v4_2017_LtoT_mva, pt, abs(eta));
  return sfTtoL*sfLtoL*sfLtoT*(1 + unc*sfTtoLcorr)*(1+unc*sfLtoLcorr)*(1+unc*sfLtoTcorr);
}

TFile* f_elSF_v4_2018_mva = new TFile(DATA_SF+"/leptonSF/egammaEffi.txt_EGM2D_updatedAll.root", "read");
TH2F*  h_elSF_v4_2018_mva = (TH2F*) f_elSF_v4_2018_mva->Get("EGamma_SF2D");


float getElSF_v4_2018(int wp, int unc, float pt, float eta){
    //Placeholder
    getElSF_v4_2017(wp, unc, pt, eta);
}

float getElSF_v4(int wp, int unc, int year, float pt, float eta){
  //El SF
  if (year==2016) return getElSF_v4_2016(wp, unc, pt, eta);
  if (year==2017) return getElSF_v4_2017(wp, unc, pt, eta);
  if (year==2018) return getElSF_v4_2018(wp, unc, pt, eta);
  else std::cout << "Wrong year for el SF!!" << std::endl;
  return -1.;
}


///////////
// MU SF //
///////////

TFile* f_muSF_v4_2016_BCDEF_mva       = new TFile(DATA_SF+"/leptonSF/muSF_v4_2016_IDLoose_BCDEF.root", "read");
TH2F*  h_muSF_v4_2016_BCDEF_mva       = (TH2F*) f_muSF_v4_2016_BCDEF_mva->Get("NUM_LooseID_DEN_genTracks_eta_pt");
TH2F*  h_muSF_v4_2016_BCDEF_mva_stat  = (TH2F*) f_muSF_v4_2016_BCDEF_mva->Get("NUM_LooseID_DEN_genTracks_eta_pt_stat");
TH2F*  h_muSF_v4_2016_BCDEF_mva_syst  = (TH2F*) f_muSF_v4_2016_BCDEF_mva->Get("NUM_LooseID_DEN_genTracks_eta_pt_syst");

TFile* f_muSF_v4_2016_GH_mva       = new TFile(DATA_SF+"/leptonSF/muSF_v4_2016_IDLoose_GH.root", "read");
TH2F*  h_muSF_v4_2016_GH_mva       = (TH2F*) f_muSF_v4_2016_GH_mva->Get("NUM_LooseID_DEN_genTracks_eta_pt");
TH2F*  h_muSF_v4_2016_GH_mva_stat  = (TH2F*) f_muSF_v4_2016_GH_mva->Get("NUM_LooseID_DEN_genTracks_eta_pt_stat");
TH2F*  h_muSF_v4_2016_GH_mva_syst  = (TH2F*) f_muSF_v4_2016_GH_mva->Get("NUM_LooseID_DEN_genTracks_eta_pt_syst");

TFile* f_muSF_v4_2016_LtoLB_mva       = new TFile(DATA_SF+"/leptonSF/mu_ttH_presel_barrel.root", "read");
TGraphAsymmErrors*  h_muSF_v4_2016_LtoLB_mva       = (TGraphAsymmErrors*) f_muSF_v4_2016_LtoLB_mva->Get("ratio");

TFile* f_muSF_v4_2016_LtoLE_mva       = new TFile(DATA_SF+"/leptonSF/mu_ttH_presel_endcap.root", "read");
TGraphAsymmErrors*  h_muSF_v4_2016_LtoLE_mva       = (TGraphAsymmErrors*) f_muSF_v4_2016_LtoLE_mva->Get("ratio");

TFile* f_muSF_v4_2016_LtoT_mva       = new TFile(DATA_SF+"/leptonSF/lepMVAEffSF_m_2lss_2016.root", "read");
TH2F*  h_muSF_v4_2016_LtoT_mva       = (TH2F*) f_muSF_v4_2016_LtoT_mva->Get("sf");


float getMuSF_v4_2016(int wp, int unc, float pt, float eta){
  //Mu SF are subdivided
  //First from gentrack to Loose POG
  float sfBCDEF; float corrBCDEF;
  float sfGH; float corrGH;
  sfBCDEF   = getSF(h_muSF_v4_2016_BCDEF_mva, eta, pt);
  corrBCDEF = getSF(h_muSF_v4_2016_BCDEF_mva_stat, eta, pt);
  corrBCDEF = TMath::Power(TMath::Power(getSF(h_muSF_v4_2016_BCDEF_mva_stat, eta, pt),2) + TMath::Power(corrBCDEF,2), 0.5);
  sfGH   = getSF(h_muSF_v4_2016_GH_mva, eta, pt);
  corrGH = getSF(h_muSF_v4_2016_GH_mva_stat, eta, pt);
  corrGH = TMath::Power(TMath::Power(getSF(h_muSF_v4_2016_GH_mva_stat, eta, pt),2) + TMath::Power(corrGH,2), 0.5);
  float sf1 = sfGH*(1+unc*corrGH); float sf2 = sfBCDEF*(1+corrBCDEF*unc);
  float sfGenTrackToLooseID = (sf1*16.29 + sf2*19.22)/(16.29+19.22);
  //Now Loose POG to loose leptonMVA
  float sfLtoL; float sfLtoLcorr;
  if (abs(eta) < 1.2){
    sfLtoL = h_muSF_v4_2016_LtoLB_mva->Eval(pt);
    sfLtoLcorr = 0.;
  }
  else{
    sfLtoL =  h_muSF_v4_2016_LtoLE_mva->Eval(pt);
    sfLtoLcorr = 0.;
  }
  //TODO: Add LtoL lepton uncertainty
  //And then loose leptonMVA to tight leptonMVA
  float sfLtoT     =  getSF(h_muSF_v4_2016_LtoT_mva, pt, abs(eta));
  float sfLtoTcorr = getUnc(h_muSF_v4_2016_LtoT_mva, pt, abs(eta));
  return sfGenTrackToLooseID*sfLtoL*sfLtoT*(1+unc*sfLtoLcorr)*(1+unc*sfLtoTcorr);
}

TFile* f_muSF_v4_2017_mva  = new TFile(DATA_SF+"/leptonSF/muSF_v4_2017_IDLoose_syst.root", "read");
TH2F*  h_muSF_v4_2017_mva  = (TH2F*) f_muSF_v4_2017_mva->Get("NUM_LooseID_DEN_genTracks_pt_abseta");
TH2F*  h_muSF_v4_2017_mva_stat  = (TH2F*) f_muSF_v4_2017_mva->Get("NUM_LooseID_DEN_genTracks_pt_abseta_stat");
TH2F*  h_muSF_v4_2017_mva_syst  = (TH2F*) f_muSF_v4_2017_mva->Get("NUM_LooseID_DEN_genTracks_pt_abseta_syst");


TFile* f_muSF_v4_2017_LtoL_mva       = new TFile(DATA_SF+"/leptonSF/scaleFactors_mu_DxyDzSip8mIso04_over_LooseID.root", "read");
TH2F*  h_muSF_v4_2017_LtoL_mva       = (TH2F*) f_muSF_v4_2017_LtoL_mva->Get("NUM_ttHLoo_DEN_LooseID");

TFile* f_muSF_v4_2017_LtoT_mva       = new TFile(DATA_SF+"/leptonSF/lepMVAEffSF_m_2lss.root", "read");
TH2F*  h_muSF_v4_2017_LtoT_mva       = (TH2F*) f_muSF_v4_2017_LtoT_mva->Get("sf");

float getMuSF_v4_2017(int wp, int unc, float pt, float eta){
  //Mu SF are subdivided
  //First from gentrack to Loose POG
  float sfTtoL     = getSF(h_muSF_v4_2017_mva, pt, abs(eta));
  float sfTtoLcorr = TMath::Power( TMath::Power(getSF(h_muSF_v4_2017_mva_stat, pt, abs(eta)),2) + TMath::Power(getSF(h_muSF_v4_2017_mva_syst, pt, abs(eta)),2),0.5);

  //Now Loose POG to loose leptonMVA
  float sfLtoL = getSF(h_muSF_v4_2017_LtoL_mva, pt, abs(eta));
  float sfLtoLcorr = 0.;
  //TODO: Add LtoL lepton uncertainty
  //And then loose leptonMVA to tight leptonMVA
  float sfLtoT     =  getSF(h_muSF_v4_2017_LtoT_mva, pt, abs(eta));
  float sfLtoTcorr =  getUnc(h_muSF_v4_2017_LtoT_mva, pt, abs(eta));
  return sfTtoL*sfLtoL*sfLtoT*(1 + unc*sfTtoLcorr)*(1+unc*sfLtoLcorr)*(1+unc*sfLtoTcorr);
}


TFile* f_muSF_v4_2018_mva  = new TFile(DATA_SF+"/leptonSF/RunABCD_SF_ID.root", "read");
TH2F*  h_muSF_v4_2018_mva  = (TH2F*) f_muSF_v4_2018_mva->Get("NUM_LooseID_DEN_TrackerMuons_pt_abseta");

float getMuSF_v4_2018(int wp, int unc, float pt, float eta){
  //Mu SF are subdivided
  //First from gentrack to Loose POG
  float sfTtoL     = getSF(h_muSF_v4_2018_mva, pt, abs(eta));
  float sfTtoLcorr = getUnc(h_muSF_v4_2018_mva, pt, abs(eta));

  //PLACEHOLDER
  //Now Loose POG to loose leptonMVA
  float sfLtoL = getSF(h_muSF_v4_2017_LtoL_mva, pt, abs(eta));
  float sfLtoLcorr = 0.;
  //TODO: Add LtoL lepton uncertainty
  //And then loose leptonMVA to tight leptonMVA
  float sfLtoT     =  getSF(h_muSF_v4_2017_LtoT_mva, pt, abs(eta));
  float sfLtoTcorr =  getUnc(h_muSF_v4_2017_LtoT_mva, pt, abs(eta));
  return sfTtoL*sfLtoL*sfLtoT*(1 + unc*sfTtoLcorr)*(1+unc*sfLtoLcorr)*(1+unc*sfLtoTcorr);
}

float getMuSF_v4(int wp, int unc, int year, float pt, float eta){
  //Mu SF
  if (year==2016) return getMuSF_v4_2016(wp, unc, pt, eta);
  if (year==2017) return getMuSF_v4_2017(wp, unc, pt, eta);
  if (year==2018) return getMuSF_v4_2018(wp, unc, pt, eta);
  else std::cout << "Wrong year for mu SF!!" << std::endl;
  return -1.;
}

////////////
// TAU SF //
////////////


float getTauSF_v4_2016(int wp, int unc){
  //From here https://twiki.cern.ch/twiki/bin/view/CMS/TauIDRecommendation13TeV#Performance_in_data_and_recommen
  float sf; float corr;
  switch (wp){
  case 0:
    sf=0.90; corr=0.03;
    break;
  case 1:
    sf=0.90; corr=0.03;
    break;
  case 2:
    sf=0.86; corr=0.02;
    break;
  case 3:
    sf=0.88; corr=0.02;
    break;
  case 4:
    sf=0.87; corr=0.02;
    break;
  case 5:
    sf=0.86; corr=0.02;
    break;
  case 6:
    sf=0.86; corr=0.02;
    break;
  return sf*(1+corr*unc);
  }
}

float getTauSF_v4_2017(int wp, int unc){
  //From here https://twiki.cern.ch/twiki/bin/view/CMS/TauIDRecommendation13TeV#Performance_in_data_and_recommen
  float sf; float corr;
  switch (wp){
  case 0:
    sf=0.89; corr=0.03;
    break;
  case 1:
    sf=0.88; corr=0.03;
    break;
  case 2:
    sf=0.89; corr=0.03;
    break;
  case 3:
    sf=0.89; corr=0.03;
    break;
  case 4:
    sf=0.89; corr=0.03;
    break;
  case 5:
    sf=0.86; corr=0.03;
    break;
  case 6:
    sf=0.84; corr=0.03;
    break;
  return sf*(1+corr*unc);
  }
}

float getTauSF_v4_2018(int wp, int unc){
  //From here https://twiki.cern.ch/twiki/bin/view/CMS/TauIDRecommendation13TeV#Performance_in_data_and_recommen
  float sf; float corr;
  switch (wp){
  case 0:
    sf=0.86; corr=0.04;
    break;
  case 1:
    sf=0.90; corr=0.03;
    break;
  case 2:
    sf=0.90; corr=0.03;
    break;
  case 3:
    sf=0.90; corr=0.02;
    break;
  case 4:
    sf=0.90; corr=0.02;
    break;
  case 5:
    sf=0.89; corr=0.02;
    break;
  case 6:
    sf=0.89; corr=0.02;
    break;
  return sf*(1+corr*unc);
  }
}

float getTauSF_v4(int wp, int unc, int year){
  //Tau SF are flat in p_T
  if (year==2016) return getTauSF_v4_2016(wp, unc);
  if (year==2017) return getTauSF_v4_2017(wp, unc);
  if (year==2018) return getTauSF_v4_2018(wp, unc);
  else std::cout << "Wrong year for tau SF!!" << std::endl;
  return -1.;
}

float getLeptonSF_v4(int wp, int unc, int year, float pt, float eta, int pdgId){
    if (abs(pdgId) == 15) return getTauSF_v4(wp, unc, year);
    if (abs(pdgId) == 13) return getMuSF_v4(wp, unc, year, pt, eta);
    if (abs(pdgId) == 11) return getElSF_v4(wp, unc, year, pt, eta);
    else std::cout << "Wrong pdg Id for lepton SF!!" << std::endl;
    return -1.;
}

void functionsSF() {}
