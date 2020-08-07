#ifndef CMGTools_TTHAnalysis_CombinedObjectTagsTopRun2_h
#define CMGTools_TTHAnalysis_CombinedObjectTagsTopRun2_h
#include <cmath>
#include <vector>
#include <algorithm>
#include <memory>

class CombinedObjectTagsTopRun2 {
  public:
    CombinedObjectTagsTopRun2(uint nJet);

    void setJetFlags(uint i, bool isS);

    std::unique_ptr<bool[]> jetsS;
};
#endif
