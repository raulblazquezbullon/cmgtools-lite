#include "CMGTools/TTHAnalysis/interface/CombinedObjectTagsTopRun2.h"

CombinedObjectTagsTopRun2::CombinedObjectTagsTopRun2(uint nJet) {
  jetsS.reset(new bool[nJet]); std::fill_n(jetsS.get(), nJet, false);
}

void CombinedObjectTagsTopRun2::setJetFlags(uint i, bool isS) {
  jetsS[i] = isS;
}
