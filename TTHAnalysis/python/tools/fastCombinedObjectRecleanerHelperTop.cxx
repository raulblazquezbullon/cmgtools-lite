#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>
#include <DataFormats/Math/interface/deltaR.h>
#include <CMGTools/TTHAnalysis/interface/CollectionSkimmer.h>
#include "CMGTools/TTHAnalysis/interface/CombinedObjectTagsTopRun2.h"
#include "DataFormats/Math/interface/LorentzVector.h"


struct JetSumCalculatorOutput {
  int thr;
  int nBJetSelMedium;
  int nJetSel;
  int nFwdJetSel;
};


class fastCombinedObjectRecleanerHelperTop {
  // NOTE: the eta requirements are HARDCODED in this class.
  public:
    typedef TTreeReaderValue<unsigned> ruint;
    typedef TTreeReaderValue<int>      rint;
    typedef TTreeReaderArray<float>    rfloats;
    typedef TTreeReaderArray<int>      rints;

    class rcount {
      public:
        rcount() : signed_(NULL), unsigned_(NULL) {}
        rcount(rint *src) : signed_(src), unsigned_(NULL) {}
        rcount(ruint *src) : signed_(NULL), unsigned_(src) {}
        rcount & operator=(rint *src) { signed_ = src; return *this; }
        rcount & operator=(ruint *src) { unsigned_ = src; return *this; }
        int operator*() const { return signed_ ? **signed_ : int(**unsigned_); }
      private:
        rint  * signed_;
        ruint * unsigned_;
    };


    fastCombinedObjectRecleanerHelperTop(CollectionSkimmer &clean_jets0, CollectionSkimmer &clean_jets1, CollectionSkimmer &clean_fwdjets0, CollectionSkimmer &clean_fwdjets1, float bTagM) : clean_jets0_(clean_jets0), clean_jets1_(clean_jets1), clean_fwdjets0_(clean_fwdjets0), clean_fwdjets1_(clean_fwdjets1), deltaR2cut(0.16), bTagM_(bTagM) {
      _cj.reset(new std::vector<int>);
    }


    void setLeptons(rint *nLep, rfloats* lepPt, rfloats *lepEta, rfloats *lepPhi) {
      nLep_ = nLep; Lep_pt_ = lepPt; Lep_eta_ = lepEta; Lep_phi_ = lepPhi;
      if (!nLep || !lepPt || !lepEta || !lepPhi) { std::cout << "ERROR: fastCombinedObjectRecleanerHelperTop initialized setLeptons with a null reader" << std::endl; }
    }
    void setLeptons(ruint *nLep, rfloats* lepPt, rfloats *lepEta, rfloats *lepPhi, rints *lepJet) {
      nLep_ = nLep; Lep_pt_ = lepPt; Lep_eta_ = lepEta; Lep_phi_ = lepPhi; Lep_jet_ = lepJet;
      if (!nLep || !lepPt || !lepEta || !lepPhi || !lepJet) { std::cout << "ERROR: fastCombinedObjectRecleanerHelper initialized setLeptons with a null reader" << std::endl; }
    }


    void setJets(ruint *nJet, rfloats *jetPt, rfloats *jetEta, rfloats *jetPhi, rfloats *jetbtag, vector<rfloats*> jetpt) {
      nJet_ = nJet; Jet_pt_ = jetPt; Jet_eta_ = jetEta; Jet_phi_ = jetPhi; Jet_btag_ = jetbtag;
      Jet_corr_   = jetpt;
    }


    void setJetPts(int pt0, int pt1) {
      // NOTE: the pt should be an integer always
      jetPt0_ = pt0;
      jetPt1_ = pt1;
    }


    void setFwdNoisyPt(float thept) {
      fwdNoisyJetPt_ = thept; // Cut applied only for forward jets that belong to 2.7 < eta < 3.0
    }


    typedef math::PtEtaPhiMLorentzVectorD ptvec;
    typedef math::XYZTLorentzVectorD      crvec;


    std::vector<JetSumCalculatorOutput> GetJetSums(int variation = 0) {
      std::vector<JetSumCalculatorOutput> output;

      int var = -1;
      if (variation < 0) var = 2 * abs(variation) - 1;
      else               var = 2 * variation - 2;

      // UNU
      JetSumCalculatorOutput sums0;
      sums0.thr         = float(jetPt0_);
      sums0.nJetSel     = 0;
      sums0.nFwdJetSel  = 0;
      sums0.nBJetSelMedium = 0;


      for (auto j : *_cj) {
        float pt = (*Jet_pt_)[j];
        if (variation != 0) pt = (*(Jet_corr_.at(var)))[j];

        float abseta = fabs((*Jet_eta_)[j]);
        if (abseta >= 2.7 && abseta < 3) {     // Forward jets in noisy region
          if (pt  > fwdNoisyJetPt_) {
            sums0.nFwdJetSel++;
          }
        }
        else if (abseta >= 2.4 && abseta < 5) { // Forward jets in not noisy region
          if (pt > sums0.thr) {
            sums0.nFwdJetSel++;
          }
        }
        else if (abseta < 2.4) {               // Central jets
          if (pt <= sums0.thr) continue;
          float btagdisc = (*Jet_btag_)[j];
          if (btagdisc > bTagM_) sums0.nBJetSelMedium += 1;
          sums0.nJetSel += 1;
        }
      }
      output.push_back(sums0);

      // DOS
      JetSumCalculatorOutput sums1;
      sums1.thr         = float(jetPt1_);
      sums1.nJetSel     = 0;
      sums1.nFwdJetSel  = 0;
      sums1.nBJetSelMedium = 0;


      for (auto j : *_cj) {
        float pt = (*Jet_pt_)[j];
        if (variation != 0) pt = (*(Jet_corr_.at(var)))[j];

        float abseta = fabs((*Jet_eta_)[j]);
        if (abseta >= 2.7 && abseta < 3) {     // Forward jets in noisy region
          if (pt  > fwdNoisyJetPt_) {
            sums1.nFwdJetSel++;
          }
        }
        else if (abseta >= 2.4 && abseta < 5) { // Forward jets in not noisy region
          if (pt > sums1.thr) {
            sums1.nFwdJetSel++;
          }
        }
        else if (abseta < 2.4) {               // Central jets
          if (pt <= sums1.thr) continue;
          float btagdisc = (*Jet_btag_)[j];

          if (btagdisc > bTagM_) sums1.nBJetSelMedium += 1;
          sums1.nJetSel += 1;
        }
      }
      output.push_back(sums1);

      return output;
    }


    void clear() {
      sel_jets.reset(new bool[*nJet_]);
      std::fill_n(sel_jets.get(), *nJet_, false);
    }


    void loadTags(CombinedObjectTagsTopRun2 *tags, float wPM = 0) {
      bTagM_ = wPM;
      std::copy(tags->jetsS.get(), tags->jetsS.get() + *nJet_, sel_jets.get());
    }


    void setDR(float f) {deltaR2cut = f*f;}


    std::vector<int>* run() {
      clean_jets0_.clear(); clean_jets1_.clear(); clean_fwdjets0_.clear(); clean_fwdjets1_.clear();
      _cj->clear();

      std::unique_ptr<bool[]> good;
      good.reset(new bool[*nJet_]);
      std::fill_n(good.get(), *nJet_, true);

      for (uint iL = 0, nL = *nLep_; iL < nL; ++iL) {
        float mindr2 = -1; int best = -1;
        for (int iJ = 0, nJ = *nJet_; iJ < nJ; ++iJ) {
          float dr2 = deltaR2((*Lep_eta_)[iL], (*Lep_phi_)[iL], (*Jet_eta_)[iJ], (*Jet_phi_)[iJ]);
          if (mindr2 < 0 || dr2 < mindr2) {mindr2 = dr2; best = iJ;}
        }
        if (best > -1 && mindr2 < deltaR2cut) {
          good[best] = false;
        }
      }

      for (int iJ = 0, nJ = *nJet_; iJ < nJ; ++iJ) {
        if (good[iJ] && sel_jets[iJ]) {
          _cj->push_back(iJ);
          if      (fabs((*Jet_eta_)[iJ]) < 2.4) {
            if      ((*Jet_pt_)[iJ] > jetPt0_) clean_jets0_.push_back(iJ);
            else if ((*Jet_pt_)[iJ] > jetPt1_) clean_jets1_.push_back(iJ);
          }
          else if (fabs((*Jet_eta_)[iJ]) < 2.7) {
            if      ((*Jet_pt_)[iJ] > jetPt0_) clean_fwdjets0_.push_back(iJ);
            else if ((*Jet_pt_)[iJ] > jetPt1_) clean_fwdjets1_.push_back(iJ);
          }
          else if (fabs((*Jet_eta_)[iJ]) < 3.0) {
            if      ((*Jet_pt_)[iJ] > fwdNoisyJetPt_) clean_fwdjets0_.push_back(iJ);
          }
          else if (fabs((*Jet_eta_)[iJ]) < 5.0) {
            if      ((*Jet_pt_)[iJ] > jetPt0_) clean_fwdjets0_.push_back(iJ);
            else if ((*Jet_pt_)[iJ] > jetPt1_) clean_fwdjets1_.push_back(iJ);
          }
        }
      }

      return _cj.get();
    }


  private:
    std::unique_ptr<bool[]> sel_jets;
    CollectionSkimmer &clean_jets0_, &clean_jets1_, &clean_fwdjets0_, &clean_fwdjets1_;
    rcount nLep_, nJet_;
    rfloats *Lep_pt_, *Lep_eta_, *Lep_phi_;
    rfloats *Jet_pt_, *Jet_phi_, *Jet_eta_, *Jet_btag_;
    rints   *Lep_jet_;
    vector<rfloats*> Jet_corr_;
    float deltaR2cut;
    std::unique_ptr<std::vector<int> > _cj;
    float bTagM_;
    int   jetPt0_, jetPt1_;
    float fwdNoisyJetPt_;
};
