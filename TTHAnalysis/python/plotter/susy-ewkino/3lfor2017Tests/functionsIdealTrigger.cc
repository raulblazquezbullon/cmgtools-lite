#include "TMath.h"
Bool_t trig_3lep_pt_standard(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {0,0,0};
  Int_t   reqId[] = {0,0,0};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 3;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}



Bool_t trig_ee_23_12(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {23,12};
  Int_t   reqId[] = {11,11};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 2;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_e_27(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {27};
  Int_t   reqId[] = {11};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 1;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}


Bool_t trig_m_24(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {24};
  Int_t   reqId[] = {13};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 1;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_me_23_8(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {23, 8};
  Int_t   reqId[] = {13, 11};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 2;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}


Bool_t trig_me_8_23(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {8,23};
  Int_t   reqId[] = {11,13};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 2;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_mmm_5_3_3(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {5,3,3};
  Int_t   reqId[] = {13,13,13};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 3;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_mmm_12_10_5(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {12,10,5};
  Int_t   reqId[] = {13,13,13};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 3;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_mmm_10_5_5(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {10,5,5};
  Int_t   reqId[] = {13,13,13};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 3;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_eee_16_12_8(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {16,12,8};
  Int_t   reqId[] = {11,11,11};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 3;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_mee_8_12_12(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {8,12,12};
  Int_t   reqId[] = {11,13,13};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 3;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}


Bool_t trig_mm_4_4(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {4,4};
  Int_t   reqId[] = {13,13};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 2;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_mm_8_8(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {8,8};
  Int_t   reqId[] = {13,13};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 2;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_ee_8_8(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {8,8};
  Int_t   reqId[] = {11,11};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 2;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_me_23_12(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {23, 12};
  Int_t   reqId[] = {13, 11};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 2;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}



Bool_t trig_ee_25_25(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {25, 25};
  Int_t   reqId[] = {11, 11};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 2;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t trig_mm_17_8(Float_t selPt1, Int_t selId1, Float_t selPt2, Int_t selId2, Float_t selPt3, Int_t selId3, Float_t selPt4 = 0, Int_t selId4 = 0, Float_t selPt5 = -1, Int_t selId5 = 0){// Always pass pT in order from high to low
  Float_t reqPt[] = {17, 8};
  Int_t   reqId[] = {13, 13};
  Int_t selNumber = selId4 != 0 ? (selId5 != 0 ? 5 : 4) : 3; 
  Int_t reqNumber = 2;
  Float_t selPt[] = {selPt1, selPt2, selPt3, selPt4, selPt5};
  Int_t selId[] = {selId1, selId2, selId3, selId4, selId5};
  Int_t matchedSelToReq[reqNumber];
  Int_t matchedReqToSel[selNumber];
  for (int j = 0; j < selNumber; j++){
      matchedReqToSel[j] = -1;
  }
  for (int i=0 ; i < reqNumber ; i++){
    matchedSelToReq[i] = -1;
    for (int j = 0; j < selNumber; j++){
      if (selPt[j] > reqPt[i] && selId[j]*selId[j] == reqId[i]*reqId[i] && matchedReqToSel[j] == -1 && matchedSelToReq[i] == -1){//If pt's are not ordered this one breaks!
        matchedSelToReq[i] = j;
        matchedReqToSel[j] = i;
      }
    }
    if (matchedSelToReq[i] == -1) return false;
  }
  //if (passes >= combs && passedLeps >= reqNumber) return true;
  //else return false;
  return true;
}

Bool_t minMaxMasses(Float_t mass1, Float_t mass2, Float_t mass3, Float_t minMass, Float_t maxMass){
  if (mass1 < maxMass && mass2 < maxMass && mass3 < maxMass && mass1 > minMass && mass2 > minMass && mass3 > minMass) return true;
  else return false;
}

// ================================================================================================
Float_t mvaIdCuts[3] = {0.70,0.83,0.92};
Float_t sininCuts[3] = {0.011,0.011,0.030};
Float_t hovereCuts[3] = {0.10,0.10,0.07};
Float_t detainCuts[3] = {0.01,0.01,0.008};
Float_t dphiinCuts[3] = {0.04,0.04,0.07};
Float_t invEpCuts[3]  = {0.010,0.010,0.005};


Bool_t passesEtaVarCuts(Float_t Eta, Float_t input, Float_t* limits){
  if (Eta < 0.8 && input <= limits[0]) return true;
  else if (Eta < 1.479 && input <= limits[1]) return true;
  else if (Eta < 2.5 && input <= limits[2]) return true;
  else return false;
}


Int_t isTightMuon(Float_t _eta,Float_t _dxy,Float_t _dz, Float_t _sip3d,Float_t _relIso04,Float_t _mediumMuonID2016,Int_t _tightCharge,Float_t _mvaSUSY){
  Int_t isTight = 0;
  if (_eta < 2.4 && _eta > - 2.4 && _dxy < 0.05 && _dxy > - 0.05 && _dz < 0.1 && _dz > -0.1 && _sip3d < 8 && _relIso04 < 0.4 && _mediumMuonID2016 && _tightCharge && _mvaSUSY > -0.2) isTight++;
  return isTight;
}

Int_t isTightElecNoEtaVar(Float_t _dxy,Float_t _dz, Float_t _sip3d,Float_t _relIso04,Int_t _tightCharge,Float_t _mvaSUSY, Float_t _eInvMinusPInv, Int_t _convVeto,Int_t _lostHits){
  Int_t isTight = 0;
  if (_dxy < 0.05 && _dxy > - 0.05 && _dz < 0.1 && _dz > -0.1 && _sip3d < 8 && _relIso04 < 0.4 && _tightCharge && _mvaSUSY > 0.5 && _convVeto && _lostHits==0 ) isTight++;
  return isTight;
}

Int_t isTightElecEtaVar(Float_t _eta, Float_t _mvaIdSpring16GP,Float_t _sigmaIEtaIEta,Float_t _dEtaScTrkIn,Float_t _dPhiScTrkIn, Float_t _hadronicOverEm,Float_t _eInvMinusPInv){
  Float_t absEta = TMath::Abs(_eta);
  Int_t isTight = 0;
  if (absEta < 2.5 && passesEtaVarCuts(absEta, -_mvaIdSpring16GP, mvaIdCuts), passesEtaVarCuts(absEta, _sigmaIEtaIEta, sininCuts), passesEtaVarCuts(absEta, _dEtaScTrkIn, detainCuts), passesEtaVarCuts(absEta, _dPhiScTrkIn, dphiinCuts),passesEtaVarCuts(absEta, _eInvMinusPInv, invEpCuts), passesEtaVarCuts(absEta, _hadronicOverEm, hovereCuts) && _eInvMinusPInv > -0.05) isTight++;
  return isTight;
}


void functionsIdealTrigger() {};
