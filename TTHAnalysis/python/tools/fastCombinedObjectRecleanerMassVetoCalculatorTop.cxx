#include <cmath>
#include <vector>
#include <algorithm>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>
#include "DataFormats/Math/interface/LorentzVector.h"
#include "Math/VectorUtil.h"


struct LeptonPairInfo {
  int i;
  int j;
  float m;
  float dR;
};


struct MassVetoCalculatorOutput {
  float minMllAFAS;
};


class fastCombinedObjectRecleanerMassVetoCalculatorTop {
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


    typedef math::PtEtaPhiMLorentzVectorD ptvec;
    typedef math::XYZTLorentzVectorD      crvec;
  

    fastCombinedObjectRecleanerMassVetoCalculatorTop() {}


    void setLeptons(rint *nLep, rfloats *lepPt, rfloats *lepEta, rfloats *lepPhi, rfloats *lepMass, rints *lepPdgId) {
      nLep_ = nLep; Lep_pt_ = lepPt; Lep_eta_ = lepEta; Lep_phi_ = lepPhi; Lep_mass_ = lepMass; Lep_pdgid_ = lepPdgId;
      if (!nLep || !lepPt || !lepEta || !lepPhi || !lepPdgId) { std::cout << "ERROR: fastCombinedObjectRecleanerMassVetoCalculatorTop initialized setLeptons with a null reader" << std::endl; }
    }


    void setLeptons(ruint *nLep, rfloats *lepPt, rfloats *lepEta, rfloats *lepPhi, rfloats *lepMass, rints *lepPdgId) {
      nLep_ = nLep; Lep_pt_ = lepPt; Lep_eta_ = lepEta; Lep_phi_ = lepPhi; Lep_mass_ = lepMass; Lep_pdgid_ = lepPdgId;
      if (!nLep || !lepPt || !lepEta || !lepPhi || !lepPdgId) { std::cout << "ERROR: fastCombinedObjectRecleanerMassVetoCalculatorTop initialized setLeptons with a null reader" << std::endl; }
    }


    float Mass(int i, int j) {
      return (leps_p4[i] + leps_p4[j]).M();
    }


    float DeltaR(int i, int j) {
      return ROOT::Math::VectorUtil::DeltaR<crvec,crvec>(leps_p4[i], leps_p4[j]);
    }


  MassVetoCalculatorOutput GetPairMasses() {
    MassVetoCalculatorOutput output;
    output.minMllAFAS = -1;
    for (auto p : pairs) {
      if (output.minMllAFAS < 0  || p.m < output.minMllAFAS) output.minMllAFAS = p.m;
    }
    return output;
  }


  void run() {
    int nLep = *nLep_;
    for (int i = 0; i < nLep; i++) leps_p4[i] = ptvec((*Lep_pt_)[i],(*Lep_eta_)[i],(*Lep_phi_)[i],(*Lep_mass_)[i]);

    for (int i = 0; i < nLep; i++) {
      for (int j = i+1; j < nLep; j++) {
        LeptonPairInfo pair;
        pair.i  = i;
        pair.j  = j;
        pair.m  = Mass(i,j);
        pair.dR = DeltaR(i,j);

        pairs.push_back(pair);
      }
    }
  }


  void clear() {
    nLep = *nLep_;
    pairs.clear();
    leps_p4.reset(new crvec[nLep]);
  }


  private:
    rcount nLep_;
    rfloats *Lep_pt_, *Lep_eta_, *Lep_phi_, *Lep_mass_;
    rints *Lep_pdgid_;
    std::vector<LeptonPairInfo> pairs;
    Int_t nLep;
    std::unique_ptr<crvec[]> leps_p4;
};
