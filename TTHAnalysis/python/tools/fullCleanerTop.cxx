#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>
#include "Math/VectorUtil.h"
#include <DataFormats/Math/interface/deltaR.h>
#include <CMGTools/TTHAnalysis/interface/CollectionSkimmer.h>
#include "CMGTools/TTHAnalysis/interface/CombinedObjectTagsTopRun2.h"
#include "DataFormats/Math/interface/LorentzVector.h"


struct JetSumCalculatorOutput {
  int thr;
  int nBJetSelMedium;
//   int nJetSel;
//   int nFwdJetSel;
};


struct LeptonPairInfo {
  int i;
  int j;
  float m;
  float dR;
};


class fullCleanerTop {
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


    fullCleanerTop(CollectionSkimmer &clean_jets0, CollectionSkimmer &clean_jets1, CollectionSkimmer &clean_fwdjets0, CollectionSkimmer &clean_fwdjets1, float bTagM) : clean_jets0_(clean_jets0), clean_jets1_(clean_jets1), clean_fwdjets0_(clean_fwdjets0), clean_fwdjets1_(clean_fwdjets1), deltaR2cut(0.16), bTagM_(bTagM) {
      _cj.reset(new std::vector<int>);
    }


    void setLeptons(rint *nLep, rfloats *lepPt, rfloats *lepEta, rfloats *lepPhi, rfloats *lepMass, rints *lepPdgId) {
      nLep_ = nLep; Lep_pt_ = lepPt; Lep_eta_ = lepEta; Lep_phi_ = lepPhi; Lep_mass_ = lepMass; Lep_pdgid_ = lepPdgId;
      if (!nLep || !lepPt || !lepEta || !lepPhi || !lepPdgId) { std::cout << "ERROR: fastCombinedObjectRecleanerMassVetoCalculatorTop initialized setLeptons with a null reader" << std::endl; }
    }


    void setLeptons(ruint *nLep, rfloats *lepPt, rfloats *lepEta, rfloats *lepPhi, rfloats *lepMass, rints *lepPdgId) {
      nLep_ = nLep; Lep_pt_ = lepPt; Lep_eta_ = lepEta; Lep_phi_ = lepPhi; Lep_mass_ = lepMass; Lep_pdgid_ = lepPdgId;
      if (!nLep || !lepPt || !lepEta || !lepPhi || !lepPdgId) { std::cout << "ERROR: fastCombinedObjectRecleanerMassVetoCalculatorTop initialized setLeptons with a null reader" << std::endl; }
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


    float Mass(int i, int j) {
      return (leps_p4[i] + leps_p4[j]).M();
    }


    float DeltaR(int i, int j) {
      return ROOT::Math::VectorUtil::DeltaR<crvec,crvec>(leps_p4[i], leps_p4[j]);
    }


    void loadTags(CombinedObjectTagsTopRun2 *tags, float wPM = 0) {
      bTagM_ = wPM;
      std::copy(tags->jetsS.get(), tags->jetsS.get() + *nJet_, sel_jets.get());
    }


    typedef math::PtEtaPhiMLorentzVectorD ptvec;
    typedef math::XYZTLorentzVectorD      crvec;



// OLDDDDDDDDDDD
//     std::vector<JetSumCalculatorOutput> GetJetSums(int variation = 0) {
//       std::vector<JetSumCalculatorOutput> output;
//
//       int var = -1;
//       if (variation < 0) var = 2 * abs(variation) - 1;
//       else               var = 2 * variation - 2;
//
//       // UNU
//       JetSumCalculatorOutput sums0;
//       sums0.thr         = float(jetPt0_);
//       sums0.nJetSel     = 0;
//       sums0.nFwdJetSel  = 0;
//       sums0.nBJetSelMedium = 0;
//
//
//       for (auto j : *_cj) {
//         float pt = (*Jet_pt_)[j];
//         if (variation != 0) pt = (*(Jet_corr_.at(var)))[j];
//
//         float abseta = fabs((*Jet_eta_)[j]);
//         if (abseta >= 2.7 && abseta < 3) {      // Forward jets in noisy region
//           if (pt  > fwdNoisyJetPt_) {
//             sums0.nFwdJetSel++;
//           }
//         }
//         else if (abseta >= 2.4 && abseta < 5) { // Forward jets in not noisy region
//           if (pt > sums0.thr) {
//             sums0.nFwdJetSel++;
//           }
//         }
//         else if (abseta < 2.4) {                // Central jets
//           if (pt <= sums0.thr) continue;
//           float btagdisc = (*Jet_btag_)[j];
//           if (btagdisc > bTagM_) sums0.nBJetSelMedium += 1;
//           sums0.nJetSel += 1;
//         }
//       }
//       output.push_back(sums0);
//
//       // DOS
//       JetSumCalculatorOutput sums1;
//       sums1.thr         = float(jetPt1_);
//       sums1.nJetSel     = 0;
//       sums1.nFwdJetSel  = 0;
//       sums1.nBJetSelMedium = 0;
//
//
//       for (auto j : *_cj) {
//         float pt = (*Jet_pt_)[j];
//         if (variation != 0) pt = (*(Jet_corr_.at(var)))[j];
//
//         float abseta = fabs((*Jet_eta_)[j]);
//         if (abseta >= 2.7 && abseta < 3) {     // Forward jets in noisy region
//           if (pt  > fwdNoisyJetPt_) {
//             sums1.nFwdJetSel++;
//           }
//         }
//         else if (abseta >= 2.4 && abseta < 5) { // Forward jets in not noisy region
//           if (pt > sums1.thr) {
//             sums1.nFwdJetSel++;
//           }
//         }
//         else if (abseta < 2.4) {               // Central jets
//           if (pt <= sums1.thr) continue;
//           float btagdisc = (*Jet_btag_)[j];
//
//           if (btagdisc > bTagM_) sums1.nBJetSelMedium += 1;
//           sums1.nJetSel += 1;
//         }
//       }
//       output.push_back(sums1);
//
//       return output;
//     }



    // getjetsums SINVARIACION
    std::vector<JetSumCalculatorOutput> GetNominalJetSums(int variation = 0) {
      std::vector<JetSumCalculatorOutput> output;

      // UNU
      JetSumCalculatorOutput sums0;
      sums0.thr            = float(jetPt0_);
      sums0.nBJetSelMedium = 0;

      for (auto j : *_cj) {
        float pt = (*Jet_pt_)[j];
        float abseta = fabs((*Jet_eta_)[j]);
        if (abseta < 2.4) {                // Central jets
          if (pt <= sums0.thr) continue;
          float btagdisc = (*Jet_btag_)[j];
          if (btagdisc > bTagM_) sums0.nBJetSelMedium += 1;
        }
      }
      output.push_back(sums0);

      // DOS
      JetSumCalculatorOutput sums1;
      sums1.thr            = float(jetPt1_);
      sums1.nBJetSelMedium = 0;


      for (auto j : *_cj) {
        float pt = (*Jet_pt_)[j];
        float abseta = fabs((*Jet_eta_)[j]);
        if (abseta < 2.4) {               // Central jets
          if (pt <= sums1.thr) continue;
          float btagdisc = (*Jet_btag_)[j];
          if (btagdisc > bTagM_) sums1.nBJetSelMedium += 1;
        }
      }
      output.push_back(sums1);

      return output;
    }



    // getjetsums CONVARIACION
//     std::vector<JetSumCalculatorOutput> GetJetSums(int variation = 0) {
//       std::vector<JetSumCalculatorOutput> output;
//
//       int var = -1;
//       if (variation < 0) var = 2 * abs(variation) - 1;
//       else               var = 2 * variation - 2;
//
// //       CollectionSkimmer &coljet0, &coljet1, &colfwdjet0, &colfwdjet1;
//
//       CollectionSkimmer* coljet0    = &(jecskimmers[variation].at(0).get());
//       CollectionSkimmer* coljet1    = &(jecskimmers[variation].at(1).get());
//       CollectionSkimmer* colfwdjet0 = &(jecskimmers[variation].at(2).get());
//       CollectionSkimmer* colfwdjet1 = &(jecskimmers[variation].at(3).get());
//
// //         jecskimmers[variation].at(0).get().clear(); jecskimmers[variation].at(1).get().clear(); jecskimmers[variation].at(2).get().clear(); jecskimmers[variation].at(3).get().clear();
//       coljet0->clear(); coljet1->clear(); colfwdjet0->clear(); colfwdjet1->clear();
//
//       // UNU
//       JetSumCalculatorOutput sums0;
//       sums0.thr            = float(jetPt0_);
//       sums0.nBJetSelMedium = 0;
//
//
//       for (auto j : *_cj) {
//         float pt = (*Jet_pt_)[j];
//         if (variation != 0) pt = (*(Jet_corr_.at(var)))[j];
//
//         float abseta = fabs((*Jet_eta_)[j]);
//         if (abseta >= 2.7 && abseta < 3) {      // Forward jets in noisy region
//           if (pt  > fwdNoisyJetPt_) {
// //             jecskimmers[variation].at(2).push_back(j);
//             colfwdjet0->push_back(j);
// //             (jecskimmers[variation][2].get()).push_back(j);
//           }
//         }
//         else if (abseta >= 2.4 && abseta < 5) { // Forward jets in not noisy region
//           if (pt > sums0.thr) {
// //             jecskimmers[variation].at(2).get().push_back(j);
//             colfwdjet0->push_back(j);
// //             (jecskimmers[variation][2].get()).push_back(j);
//           }
//         }
//         else if (abseta < 2.4) {                // Central jets
//           if (pt <= sums0.thr) continue;
//           float btagdisc = (*Jet_btag_)[j];
//           if (btagdisc > bTagM_) sums0.nBJetSelMedium += 1;
// //           (jecskimmers[variation].at(0).get()).push_back(j);
//             coljet0->push_back(j);
// //           (jecskimmers[variation][0].get()).push_back(j);
//         }
//       }
//       output.push_back(sums0);
//
//       // DOS
//       JetSumCalculatorOutput sums1;
//       sums1.thr            = float(jetPt1_);
//       sums1.nBJetSelMedium = 0;
//
//
//       for (auto j : *_cj) {
//         float pt = (*Jet_pt_)[j];
//         if (variation != 0) pt = (*(Jet_corr_.at(var)))[j];
//
//         float abseta = fabs((*Jet_eta_)[j]);
//         if (abseta >= 2.7 && abseta < 3) {     // Forward jets in noisy region
//           if (pt  > fwdNoisyJetPt_) {
// //             jecskimmers[variation].at(3).get().push_back(j);
// //             (jecskimmers[variation][3].get()).push_back(j);
//             colfwdjet1->push_back(j);
//           }
//         }
//         else if (abseta >= 2.4 && abseta < 5) { // Forward jets in not noisy region
//           if (pt > sums1.thr) {
// //             jecskimmers[variation].at(3).get().push_back(j);
// //             (jecskimmers[variation][3].get()).push_back(j);
//             colfwdjet1->push_back(j);
//           }
//         }
//         else if (abseta < 2.4) {               // Central jets
//           if (pt <= sums1.thr) continue;
//           float btagdisc = (*Jet_btag_)[j];
//
//           if (btagdisc > bTagM_) sums1.nBJetSelMedium += 1;
// //           jecskimmers[variation].at(1).get().push_back(j);
// //           (jecskimmers[variation][1].get()).push_back(j);
//             coljet1->push_back(j);
//         }
//       }
//       output.push_back(sums1);
//
//       return output;
//     }


    // getjetsums CONVARIACION CONPUNTEROS
    std::vector<JetSumCalculatorOutput> GetJetSums(int variation = 0) {
      std::vector<JetSumCalculatorOutput> output;

      int var = -1;
      if (variation < 0) var = 2 * abs(variation) - 1;
      else               var = 2 * variation - 2;

      cout << "JOJOJOJOJOJOJOJO ============================" << endl;

      cout << "variation: " << variation << endl;
      cout << "tamanyo: " << jecskimmers[variation].size() << endl;

//       jecskimmers[variation].at(0)->clear(); jecskimmers[variation].at(1)->clear(); jecskimmers[variation].at(2)->clear(); jecskimmers[variation].at(3)->clear();
      (*jecskimmers[variation].at(0)).clear(); (*jecskimmers[variation].at(1)).clear(); (*jecskimmers[variation].at(2)).clear(); (*jecskimmers[variation].at(3)).clear();

      cout << "JOJOJOJOJOJOJOJO ============================" << endl;
      // UNU
      JetSumCalculatorOutput sums0;
      sums0.thr            = float(jetPt0_);
      sums0.nBJetSelMedium = 0;


      cout << "JOJOJOJOJOJOJOJO ============================" << endl;
      for (auto j : *_cj) {
        float pt = (*Jet_pt_)[j];
        if (variation != 0) pt = (*(Jet_corr_.at(var)))[j];

        float abseta = fabs((*Jet_eta_)[j]);
        if (abseta >= 2.7 && abseta < 3) {      // Forward jets in noisy region
          if (pt  > fwdNoisyJetPt_) {
            jecskimmers[variation].at(2)->push_back(j);
          }
        }
        else if (abseta >= 2.4 && abseta < 5) { // Forward jets in not noisy region
          if (pt > sums0.thr) {
            jecskimmers[variation].at(2)->push_back(j);
          }
        }
        else if (abseta < 2.4) {                // Central jets
          if (pt <= sums0.thr) continue;
          float btagdisc = (*Jet_btag_)[j];
          if (btagdisc > bTagM_) sums0.nBJetSelMedium += 1;
            jecskimmers[variation].at(0)->push_back(j);
        }
      }
      output.push_back(sums0);

      cout << "JOJOJOJOJOJOJOJO ============================" << endl;
      // DOS
      JetSumCalculatorOutput sums1;
      sums1.thr            = float(jetPt1_);
      sums1.nBJetSelMedium = 0;


      for (auto j : *_cj) {
        float pt = (*Jet_pt_)[j];
        if (variation != 0) pt = (*(Jet_corr_.at(var)))[j];

        float abseta = fabs((*Jet_eta_)[j]);
        if (abseta >= 2.7 && abseta < 3) {     // Forward jets in noisy region
          if (pt  > fwdNoisyJetPt_) {
            jecskimmers[variation].at(3)->push_back(j);
          }
        }
        else if (abseta >= 2.4 && abseta < 5) { // Forward jets in not noisy region
          if (pt > sums1.thr) {
            jecskimmers[variation].at(3)->push_back(j);
          }
        }
        else if (abseta < 2.4) {               // Central jets
          if (pt <= sums1.thr) continue;
          float btagdisc = (*Jet_btag_)[j];

          if (btagdisc > bTagM_) sums1.nBJetSelMedium += 1;
            jecskimmers[variation].at(1)->push_back(j);
        }
      }
      output.push_back(sums1);

      cout << "JOJOJOJOJOJOJOJO ============================" << endl;
      return output;
    }


    void clear() {
      nLep = *nLep_;
      pairs.clear();
      sel_jets.reset(new bool[*nJet_]);
      std::fill_n(sel_jets.get(), *nJet_, false);
      leps_p4.reset(new crvec[nLep]);
    }


    void setDR(float f) {deltaR2cut = f * f;}


    std::vector<int>* run() {
      clean_jets0_.clear(); clean_jets1_.clear(); clean_fwdjets0_.clear(); clean_fwdjets1_.clear();
      _cj->clear();

      std::unique_ptr<bool[]> good;
      good.reset(new bool[*nJet_]);
      std::fill_n(good.get(), *nJet_, true);

      for (uint iL = 0, nL = *nLep_; iL < nLep; iL++) leps_p4[iL] = ptvec((*Lep_pt_)[iL], (*Lep_eta_)[iL], (*Lep_phi_)[iL], (*Lep_mass_)[iL]);

      for (uint iL = 0, nL = *nLep_; iL < nL; ++iL) {
        float mindr2 = -1; int best = -1;

        for (int j = iL + 1, nL = *nLep_; j < nL; j++) {
          LeptonPairInfo pair;
          pair.i  = iL;
          pair.j  = j;
          pair.m  = Mass(iL, j);
          pair.dR = DeltaR(iL, j);

          pairs.push_back(pair);
        }

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
//             if      ((*Jet_pt_)[iJ] > jetPt0_ && clean_jets0_.size() < 5) clean_jets0_.push_back(iJ);
//             else if ((*Jet_pt_)[iJ] > jetPt1_ && clean_jets1_.size() < 5) clean_jets1_.push_back(iJ);
            if      ((*Jet_pt_)[iJ] > jetPt0_) clean_jets0_.push_back(iJ);
            else if ((*Jet_pt_)[iJ] > jetPt1_) clean_jets1_.push_back(iJ);
          }
          else if (fabs((*Jet_eta_)[iJ]) < 2.7) {
//             if      ((*Jet_pt_)[iJ] > jetPt0_ && clean_fwdjets0_.size() < 5) clean_fwdjets0_.push_back(iJ);
//             else if ((*Jet_pt_)[iJ] > jetPt1_ && clean_fwdjets1_.size() < 5) clean_fwdjets1_.push_back(iJ);
            if      ((*Jet_pt_)[iJ] > jetPt0_) clean_fwdjets0_.push_back(iJ);
            else if ((*Jet_pt_)[iJ] > jetPt1_) clean_fwdjets1_.push_back(iJ);
          }
          else if (fabs((*Jet_eta_)[iJ]) < 3.0) {
//             if      ((*Jet_pt_)[iJ] > fwdNoisyJetPt_ && clean_fwdjets0_.size() < 5) clean_fwdjets0_.push_back(iJ);
            if      ((*Jet_pt_)[iJ] > fwdNoisyJetPt_) clean_fwdjets0_.push_back(iJ);
          }
          else if (fabs((*Jet_eta_)[iJ]) < 5.0) {
//             if      ((*Jet_pt_)[iJ] > jetPt0_ && clean_fwdjets0_.size() < 5) clean_fwdjets0_.push_back(iJ);
//             else if ((*Jet_pt_)[iJ] > jetPt1_ && clean_fwdjets1_.size() < 5) clean_fwdjets1_.push_back(iJ);
            if      ((*Jet_pt_)[iJ] > jetPt0_) clean_fwdjets0_.push_back(iJ);
            else if ((*Jet_pt_)[iJ] > jetPt1_) clean_fwdjets1_.push_back(iJ);
          }
        }
      }

      return _cj.get();
    }


    float GetPairMasses() {
      float output = -1;
      for (auto p : pairs) {
        if (output < 0 || p.m < output) output = p.m;
      }
      return output;
    }


    void setJECVariation(int delta,
                         CollectionSkimmer &jets0Skimmer, CollectionSkimmer &jets1Skimmer,
                         CollectionSkimmer &fwdjets0Skimmer, CollectionSkimmer &fwdjets1Skimmer) {

      cout << "Setting " << delta << " variation with four collection skimmers" << endl;

      CollectionSkimmer* jets0(&jets0Skimmer);
      CollectionSkimmer* jets1(&jets1Skimmer);
      CollectionSkimmer* fwdjets0(&fwdjets0Skimmer);
      CollectionSkimmer* fwdjets1(&fwdjets1Skimmer);

//       CollectionSkimmer& jets0(jets0Skimmer);
//       CollectionSkimmer& jets1(jets1Skimmer);
//       CollectionSkimmer& fwdjets0(fwdjets0Skimmer);
//       CollectionSkimmer& fwdjets1(fwdjets1Skimmer);

//       jecskimmers[delta] = {&jets0Skimmer, &jets1Skimmer, &fwdjets0Skimmer, &fwdjets1Skimmer};
      jecskimmers[delta] = {jets0, jets1, fwdjets0, fwdjets1};

//       jecskimmers[delta].push_back(std::ref(jets0Skimmer));
//       jecskimmers[delta].push_back(std::ref(jets1Skimmer));
//       jecskimmers[delta].push_back(std::ref(fwdjets0Skimmer));
//       jecskimmers[delta].push_back(std::ref(fwdjets0Skimmer));

    }


  private:
    std::unique_ptr<bool[]> sel_jets;
    CollectionSkimmer &clean_jets0_, &clean_jets1_, &clean_fwdjets0_, &clean_fwdjets1_;
//     map<int, std::vector<std::reference_wrapper<CollectionSkimmer>>> jecskimmers;
    map<int, std::vector<CollectionSkimmer*>> jecskimmers;

    rcount nLep_, nJet_;
    Int_t nLep;
    rfloats *Lep_pt_,  *Lep_eta_, *Lep_phi_, *Lep_mass_;
    rfloats *Jet_pt_,  *Jet_phi_, *Jet_eta_, *Jet_btag_;
    rints   *Lep_jet_, *Lep_pdgid_;
    vector<rfloats*> Jet_corr_;
    float deltaR2cut;
    std::unique_ptr<std::vector<int> > _cj;
    std::unique_ptr<crvec[]> leps_p4;
    std::vector<LeptonPairInfo> pairs;
    float bTagM_;
    int   jetPt0_, jetPt1_;
    float fwdNoisyJetPt_;
};


