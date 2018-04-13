#include "TMath.h"
Bool_t getNonTrigPt(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4, Int_t selId4, Int_t needId, Int_t order){// Always pass pT in order from high to low
  Int_t   selId[] = {selId1, selId2, selId3, selId4};
  if (needId == 11*11*11)
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4};
  Float_t retPt[] = {0., 0., 0., 0.};
  for (int i=0 ; i < 4 ; i++){
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  return retPt[order];
}
