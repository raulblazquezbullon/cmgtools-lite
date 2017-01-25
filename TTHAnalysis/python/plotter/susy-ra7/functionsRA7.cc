#include "TMath.h"
#include "TSystem.h"
#include <iostream>

int allTight(int nLep, int l1isTight, int l2isTight, int l3isTight, int l4isTight = 0){
    if(nLep == 3) return ((l1isTight+l2isTight+l3isTight)==3);
    return ((l1isTight+l2isTight+l3isTight+l4isTight)==4);
}

int isGoodFake(float pt, int isTight) {
    if(pt == 0) return 0;
    if(isTight) return 0;
    return 1;
}

int isFake(int nLep, int lep1mcUCSX, int lep2mcUCSX, int lep3mcUCSX, int lep4mcUCSX = 0) {
    if(nLep == 3) return ((lep1mcUCSX==2 || lep1mcUCSX==3) || (lep2mcUCSX==2 || lep2mcUCSX==3) || (lep3mcUCSX==2 || lep3mcUCSX==3));
    return ((lep1mcUCSX==2 || lep1mcUCSX==3) || (lep2mcUCSX==2 || lep2mcUCSX==3) || (lep3mcUCSX==2 || lep3mcUCSX==3) || (lep4mcUCSX==2 || lep4mcUCSX==3));
}

int SignalRegionSymm(int SRorig, float met, float ht) {
    // Start from ICHEP SRs
    int SR = SRorig;
    
    // Push SRs to make room for the new bins
    if (SRorig>14) SR++; // (offZ 14)
    if (SRorig>15) SR++; // (offZ 15)

    // Now split SR offZ 14 and 15 just like onZ 14 and 15
    if (SRorig==14 && met > 150.) SR++;
    if (SRorig==15 && ht  > 600.) SR++;

    return SR;
}


int SR_step1(int nbj, float met, float ht, float mtw, int SR, int isOnZ){
  
  if (SR<=0) return -99;
  int offset = isOnZ*23;

  if      (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw < 120 && (isOnZ==0 || met>70))            return offset+1;   //1a
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw < 120)            return offset+2;   //2a
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw < 120)            return offset+3;   //3a
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw < 120)            return offset+4;   //4a
  else if (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw > 120 && (isOnZ==0 || met>70))            return offset+5;   //1b
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw > 120)            return offset+6;   //2b
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw > 120)            return offset+7;   //3b
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw > 120)            return offset+8;   //4b

  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150              && (isOnZ==0 || met>70))            return offset+9;   //5
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300             )            return offset+10;  //6
  else if (nbj==1 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+11;  //7
  else if (nbj==1 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+12;  //8

  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150             )            return offset+13;  //9
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300             )            return offset+14;  //10
  else if (nbj==2 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+15;  //11
  else if (nbj==2 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+16;  //12

  else if (nbj>=3 && ht > 60 && ht < 600 && met> 50 && met<300             )            return offset+17;  //13

  else if (                     ht > 600 && met> 50 && met<150 && mtw < 120)            return offset+18;  //14a
  else if (                     ht > 600 && met>150 && met<300 && mtw < 120)            return offset+19;  //15a
  else if (                     ht > 600 && met> 50 && met<150 && mtw > 120)            return offset+20;  //14b  
  else if (                     ht > 600 && met>150 && met<300 && mtw > 120)            return offset+21;  //15b  

  else if (          ht > 60 && ht < 600 &&            met>300             )            return offset+22;  //16  
  else if (                     ht > 600 &&            met>300             )            return offset+23;  //17  
    
  return -99;  
  
}

int SR_step2(int nbj, float met, float ht, float mtw, int SR, int isOnZ){
  
  if (SR<=0) return -99;
  int offset = isOnZ*23;

  if      (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw < 120 && (isOnZ==0 || met>70))            return offset+1;   //1a
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw < 120)            return offset+2;   //2a
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw < 120)            return offset+3;   //3a
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw < 120)            return offset+4;   //4a
  else if (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw > 120 && (isOnZ==0 || met>70))            return offset+5;   //1b
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw > 120)            return offset+6;   //2b
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw > 120)            return offset+7;   //3b
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw > 120)            return offset+8;   //4b

  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150              && (isOnZ==0 || met>70))            return offset+9;   //5
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300             )            return offset+10;  //6
  else if (nbj==1 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+11;  //7
  else if (nbj==1 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+12;  //8

  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150             )            return offset+13;  //9
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300             )            return offset+14;  //10
  else if (nbj==2 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+15;  //11
  else if (nbj==2 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+16;  //12

  else if (nbj>=3 && ht > 60 && ht < 600 && met> 50 && met<300             )            return offset+17;  //13

  else if (                     ht > 600 && met> 50 && met<150 && mtw < 120)            return offset+18;  //14a
  else if (                     ht > 600 && met>150 && met<300 && mtw < 120)            return offset+19;  //15a
  else if (                     ht > 600 && met> 50 && met<150 && mtw > 120)            return offset+20;  //14b  
  else if (                     ht > 600 && met>150 && met<300 && mtw > 120)            return offset+21;  //15b  

  else if (          ht > 60 && mtw < 120 &&           met>300             )            return offset+22;  //16  
  else if (                     mtw > 120 &&           met>300             )            return offset+23;  //17  
    
  return -99;  
  
}


int SR_step3(int nbj, float met, float ht, float mtw, int SR, int isOnZ){
  
  if (SR<=0) return -99;
  int offset = isOnZ*27;

  if      (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw < 120 && (isOnZ==0 || met>70))            return offset+1;   //1a
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw < 120)            return offset+2;   //2a
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw < 120)            return offset+3;   //3a
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw < 120)            return offset+4;   //4a
  else if (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw > 120 && (isOnZ==0 || met>70))            return offset+5;   //1b
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw > 120)            return offset+6;   //2b
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw > 120)            return offset+7;   //3b
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw > 120)            return offset+8;   //4b

  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw < 120 && (isOnZ==0 || met>70))            return offset+9;   //5a
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300 && mtw < 120)            return offset+10;  //6a
  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw > 120 && (isOnZ==0 || met>70))            return offset+11;   //5b
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300 && mtw > 120)            return offset+12;  //6b

  else if (nbj==1 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+13;  //7
  else if (nbj==1 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+14;  //8

  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw < 120)            return offset+15;  //9a
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300 && mtw < 120)            return offset+16;  //10a
  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw > 120)            return offset+17;  //9b
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300 && mtw > 120)            return offset+18;  //10b

  else if (nbj==2 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+19;  //11
  else if (nbj==2 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+20;  //12

  else if (nbj>=3 && ht > 60 && ht < 600 && met> 50 && met<300             )            return offset+21;  //13

  else if (                     ht > 600 && met> 50 && met<150 && mtw < 120)            return offset+22;  //14a
  else if (                     ht > 600 && met>150 && met<300 && mtw < 120)            return offset+23;  //15a
  else if (                     ht > 600 && met> 50 && met<150 && mtw > 120)            return offset+24;  //14b  
  else if (                     ht > 600 && met>150 && met<300 && mtw > 120)            return offset+25;  //15b  

  else if (          ht > 60 && mtw < 120 &&           met>300             )            return offset+26;  //16  
  else if (                     mtw > 120 &&           met>300             )            return offset+27;  //17  
    
  return -99;  
  
}

int SR1b2b(int SRorig, float mT) {
    // Start from ICHEP SRs
    int SR = SRorig;
    
    // Push SRs to make room for the new bins
    if (SRorig>5) SR++;  // (offZ 5)
    if (SRorig>6) SR++;  // (offZ 6)
    if (SRorig>9) SR++;  // (offZ 9)
    if (SRorig>10) SR++; // (offZ 10)
    if (SRorig>20) SR++; // (onZ 5)
    if (SRorig>21) SR++; // (onZ 6)
    if (SRorig>24) SR++; // (onZ 9)
    if (SRorig>25) SR++; // (onZ 10)

    // Now split interesting SRs according to mT
    if (SRorig==5 || SRorig==6 || SRorig==9 || SRorig==10 || SRorig==20 || SRorig==21 || SRorig==24 || SRorig==25) {
      if (mT > 120.) SR++;
    }

    return SR;
}



int SR_pt(int nbj, float met, float ht, int SR, int isOnZ, float pt, float ptcut){
  
  if (SR<=0) return -99;
  int offset = isOnZ*23;

  if      (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && pt <ptcut && (isOnZ==0 || met>70))            return offset+1;   //1a
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && pt <ptcut)            return offset+2;   //2a
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && pt <ptcut)            return offset+3;   //3a
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && pt <ptcut)            return offset+4;   //4a
  else if (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && pt >ptcut && (isOnZ==0 || met>70))            return offset+5;   //1b
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && pt >ptcut)            return offset+6;   //2b
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && pt >ptcut)            return offset+7;   //3b
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && pt >ptcut)            return offset+8;   //4b

  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150              && (isOnZ==0 || met>70))            return offset+9;   //5
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300             )            return offset+10;  //6
  else if (nbj==1 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+11;  //7
  else if (nbj==1 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+12;  //8

  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150             )            return offset+13;  //9
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300             )            return offset+14;  //10
  else if (nbj==2 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+15;  //11
  else if (nbj==2 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+16;  //12

  else if (nbj>=3 && ht > 60 && ht < 600 && met> 50 && met<300             )            return offset+17;  //13

  else if (                     ht > 600 && met> 50 && met<150 && pt <ptcut)            return offset+18;  //14a
  else if (                     ht > 600 && met>150 && met<300 && pt <ptcut)            return offset+19;  //15a
  else if (                     ht > 600 && met> 50 && met<150 && pt >ptcut)            return offset+20;  //14b  
  else if (                     ht > 600 && met>150 && met<300 && pt >ptcut)            return offset+21;  //15b  

  else if (          ht > 60 && pt <ptcut &&           met>300             )            return offset+22;  //16a  
  else if (                     pt >ptcut &&           met>300             )            return offset+23;  //16b 
    
  return -99;  
  
}

int SR_morept(int nbj, float met, float ht, int SR, int isOnZ, float pt, float ptcut){
  
  if (SR<=0) return -99;
  int offset = isOnZ*27;

  if      (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && pt <ptcut && (isOnZ==0 || met>70))            return offset+1;   //1a
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && pt <ptcut)            return offset+2;   //2a
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && pt <ptcut)            return offset+3;   //3a
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && pt <ptcut)            return offset+4;   //4a
  else if (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && pt >ptcut && (isOnZ==0 || met>70))            return offset+5;   //1b
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && pt >ptcut)            return offset+6;   //2b
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && pt >ptcut)            return offset+7;   //3b
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && pt >ptcut)            return offset+8;   //4b

  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150 && pt <ptcut && (isOnZ==0 || met>70))            return offset+9;   //5a
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300 && pt <ptcut)            return offset+10;  //6a
  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150 && pt >ptcut && (isOnZ==0 || met>70))            return offset+11;   //5b
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300 && pt >ptcut)            return offset+12;  //6b

  else if (nbj==1 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+13;  //7
  else if (nbj==1 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+14;  //8

  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150 && pt <ptcut)            return offset+15;  //9a
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300 && pt <ptcut)            return offset+16;  //10a
  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150 && pt >ptcut)            return offset+17;  //9b
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300 && pt >ptcut)            return offset+18;  //10b

  else if (nbj==2 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+19;  //11
  else if (nbj==2 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+20;  //12

  else if (nbj>=3 && ht > 60 && ht < 600 && met> 50 && met<300             )            return offset+21;  //13

  else if (                     ht > 600 && met> 50 && met<150 && pt <ptcut)            return offset+22;  //14a
  else if (                     ht > 600 && met>150 && met<300 && pt <ptcut)            return offset+23;  //15a
  else if (                     ht > 600 && met> 50 && met<150 && pt >ptcut)            return offset+24;  //14b  
  else if (                     ht > 600 && met>150 && met<300 && pt >ptcut)            return offset+25;  //15b  

  else if (          ht > 60 && pt <ptcut &&           met>300             )            return offset+26;  //16  
  else if (                     pt >ptcut &&           met>300             )            return offset+27;  //17  
    
  return -99;  
  
}

int SR_step2flex(int nbj, float met, float ht, float mtw, int SR, int isOnZ, float mtcut){
  
  if (SR<=0) return -99;
  int offset = isOnZ*23;

  if      (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw <mtcut && (isOnZ==0 || met>70))            return offset+1;   //1a
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw <mtcut)            return offset+2;   //2a
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw <mtcut)            return offset+3;   //3a
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw <mtcut)            return offset+4;   //4a
  else if (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw >mtcut && (isOnZ==0 || met>70))            return offset+5;   //1b
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw >mtcut)            return offset+6;   //2b
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw >mtcut)            return offset+7;   //3b
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw >mtcut)            return offset+8;   //4b

  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150              && (isOnZ==0 || met>70))            return offset+9;   //5
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300             )            return offset+10;  //6
  else if (nbj==1 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+11;  //7
  else if (nbj==1 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+12;  //8

  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150             )            return offset+13;  //9
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300             )            return offset+14;  //10
  else if (nbj==2 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+15;  //11
  else if (nbj==2 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+16;  //12

  else if (nbj>=3 && ht > 60 && ht < 600 && met> 50 && met<300             )            return offset+17;  //13

  else if (                     ht > 600 && met> 50 && met<150 && mtw <mtcut)            return offset+18;  //14a
  else if (                     ht > 600 && met>150 && met<300 && mtw <mtcut)            return offset+19;  //15a
  else if (                     ht > 600 && met> 50 && met<150 && mtw >mtcut)            return offset+20;  //14b  
  else if (                     ht > 600 && met>150 && met<300 && mtw >mtcut)            return offset+21;  //15b  

  else if (          ht > 60 && mtw <mtcut &&           met>300             )            return offset+22;  //16  
  else if (                     mtw >mtcut &&           met>300             )            return offset+23;  //17  
    
  return -99;  
  
}

int SR_step3flex(int nbj, float met, float ht, float mtw, int SR, int isOnZ, float mtcut){
  
  if (SR<=0) return -99;
  int offset = isOnZ*27;

  if      (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw <mtcut && (isOnZ==0 || met>70))            return offset+1;   //1a
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw <mtcut)            return offset+2;   //2a
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw <mtcut)            return offset+3;   //3a
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw <mtcut)            return offset+4;   //4a
  else if (nbj==0 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw >mtcut && (isOnZ==0 || met>70))            return offset+5;   //1b
  else if (nbj==0 && ht > 60 && ht < 400 && met>150 && met<300 && mtw >mtcut)            return offset+6;   //2b
  else if (nbj==0 && ht >400 && ht < 600 && met> 50 && met<150 && mtw >mtcut)            return offset+7;   //3b
  else if (nbj==0 && ht >400 && ht < 600 && met>150 && met<300 && mtw >mtcut)            return offset+8;   //4b

  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw <mtcut && (isOnZ==0 || met>70))            return offset+9;   //5a
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300 && mtw <mtcut)            return offset+10;  //6a
  else if (nbj==1 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw >mtcut && (isOnZ==0 || met>70))            return offset+11;   //5b
  else if (nbj==1 && ht > 60 && ht < 400 && met>150 && met<300 && mtw >mtcut)            return offset+12;  //6b

  else if (nbj==1 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+13;  //7
  else if (nbj==1 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+14;  //8

  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw <mtcut)            return offset+15;  //9a
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300 && mtw <mtcut)            return offset+16;  //10a
  else if (nbj==2 && ht > 60 && ht < 400 && met> 50 && met<150 && mtw >mtcut)            return offset+17;  //9b
  else if (nbj==2 && ht > 60 && ht < 400 && met>150 && met<300 && mtw >mtcut)            return offset+18;  //10b

  else if (nbj==2 && ht >400 && ht < 600 && met> 50 && met<150             )            return offset+19;  //11
  else if (nbj==2 && ht >400 && ht < 600 && met>150 && met<300             )            return offset+20;  //12

  else if (nbj>=3 && ht > 60 && ht < 600 && met> 50 && met<300             )            return offset+21;  //13

  else if (                     ht > 600 && met> 50 && met<150 && mtw <mtcut)            return offset+22;  //14a
  else if (                     ht > 600 && met>150 && met<300 && mtw <mtcut)            return offset+23;  //15a
  else if (                     ht > 600 && met> 50 && met<150 && mtw >mtcut)            return offset+24;  //14b  
  else if (                     ht > 600 && met>150 && met<300 && mtw >mtcut)            return offset+25;  //15b  

  else if (          ht > 60 && mtw <mtcut &&           met>300             )            return offset+26;  //16  
  else if (                     mtw >mtcut &&           met>300             )            return offset+27;  //17  
    
  return -99;  
  
}

int SSR4bins(int nbj, float met, float ht, int isOnZ){
  if      (nbj<3 && ht > 200 && met > 250 && isOnZ==0)            return 1;
  else if (nbj>2                          && isOnZ==0)            return 2;
  else if (nbj<3 && ht > 200 && met > 250 && isOnZ==1)            return 3;
  else if (nbj>2                          && isOnZ==1)            return 4;
  return -99;
}

float mTcalc(float mT_3l, float mT_4l, float mT_fo_3l, float mT_fo_4l, int nLepTight, int nLepSel, int UCSX1, int UCSX2, int UCSX3){
  float mTW = 0.;
  if (nLepTight<3 || UCSX1>1 || UCSX2>1 || UCSX3>1){
      if (nLepSel==3) mTW = mT_fo_3l;
      else if (nLepSel==4) mTW = mT_fo_4l;
  } else {
      if (nLepTight==3) mTW = mT_3l;
      else if (nLepTight==4) mTW = mT_4l;
  }
  return mTW;
}


float getLeptonSF_mu_Unc(float pt, int var) {
  if (pt<20) 
    return var*TMath::Sqrt(0.03*0.03+0.01*0.01+0.01*0.01);
  else 
    return var*TMath::Sqrt(0.02*0.02+0.01*0.01);  
}

#include <assert.h>
#include "TH2F.h"
#include "TH1F.h"
#include "TFile.h"
#include "TGraphAsymmErrors.h"
TFile *_file_reco_leptonSF_mu = NULL;
TFile *_file_recoToMedium_leptonSF_mu = NULL;
TFile *_file_MediumToMVA_leptonSF_mu = NULL;
TFile *_file_MediumToMultiIso_leptonSF_mu = NULL;
TFile *_file_recoToMVA_leptonSF_el = NULL;
TFile *_file_reco_leptonSF_el = NULL;

TGraphAsymmErrors *_histo_reco_leptonSF_mu = NULL;
TH2F *_histo_recoToMedium_leptonSF_mu = NULL;
TH2F *_histo_MediumToMVA_leptonSF_mu = NULL;
TH2F *_histo_MediumToMultiIso_leptonSF_mu = NULL;
TH2F *_histo_recoToMVA_leptonSF_el = NULL;
TH2F *_histo_reco_leptonSF_el = NULL;

TH2F *_histo_recoToTight_leptonSF_el = NULL;
TH2F *_histo_TightToMultiIso_leptonSF_el = NULL;

float leptonSF_ra7(int pdgid, float pt, float eta, int var=0){
  
  if (!_histo_reco_leptonSF_mu) {
     _file_reco_leptonSF_mu = new TFile("/nfs/fanae/user/nachos/leptonSF/sf_mu_trk_susy_ICHEP.root", "data");
     _file_recoToMedium_leptonSF_mu = new TFile("/nfs/fanae/user/nachos/leptonSF/TnP_MuonID_NUM_MediumID_DENOM_generalTracks_VAR_map_pt_eta.root", "read");
     _file_MediumToMultiIso_leptonSF_mu = new TFile("/nfs/fanae/user/nachos/leptonSF/TnP_MuonID_NUM_MultiIsoLoose_DENOM_MediumID_VAR_map_pt_eta.root", "read");
     _histo_reco_leptonSF_mu = (TGraphAsymmErrors*)(_file_reco_leptonSF_mu->Get("ratio_eta"));
     _histo_recoToMedium_leptonSF_mu = (TH2F*)(_file_recoToMedium_leptonSF_mu->Get("pt_abseta_PLOT_pair_probeMultiplicity_bin0"));
     _histo_MediumToMultiIso_leptonSF_mu = (TH2F*)(_file_MediumToMultiIso_leptonSF_mu->Get("pt_abseta_PLOT_pair_probeMultiplicity_bin0_&_Medium2016_pass"));
   }
   if (!_histo_recoToTight_leptonSF_el) {
     _file_recoToMVA_leptonSF_el = new TFile("/nfs/fanae/user/nachos/leptonSF/sf_el_susy_ICHEP.root", "read");
     _histo_recoToTight_leptonSF_el = (TH2F*)(_file_recoToMVA_leptonSF_el->Get("GsfElectronToTightID2D3D"));
     _histo_TightToMultiIso_leptonSF_el = (TH2F*)(_file_recoToMVA_leptonSF_el->Get("MVATightElectronToMultiIsoM"));
     
     _file_reco_leptonSF_el = new TFile("/nfs/fanae/user/nachos/leptonSF/sf_el_trk_susy_ICHEP.root", "read");
     _histo_reco_leptonSF_el = (TH2F*) (_file_reco_leptonSF_el->Get("EGamma_SF2D"));
   }
   float out = 0.;
   if (abs(pdgid)==13){
     out = _histo_reco_leptonSF_mu->Eval(eta);
     TH2F *hist = _histo_recoToMedium_leptonSF_mu;
     int ptbin  = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
     int etabin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(fabs(eta))));
     /*out *= hist->GetBinContent(ptbin,etabin);
     hist = _histo_MediumToMultiIso_leptonSF_mu;
     ptbin  = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
     etabin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(fabs(eta))));
     out *= hist->GetBinContent(ptbin,etabin);*/
     return out + out*getLeptonSF_mu_Unc(pt,var);
   }
   float err = 0.;
   if (abs(pdgid)==11){
     TH2F *hist = _histo_recoToTight_leptonSF_el;
     int ptbin  = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt)));
     int etabin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(fabs(eta))));
     out = hist->GetBinContent(ptbin,etabin);
     err = hist->GetBinError(ptbin,etabin)*hist->GetBinError(ptbin,etabin);
     hist = _histo_TightToMultiIso_leptonSF_el;
     ptbin  = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(pt)));
     etabin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(eta)));
     out *= hist->GetBinContent(etabin,ptbin);
     err += hist->GetBinError(etabin,ptbin)*hist->GetBinError(etabin,ptbin);
     hist = _histo_reco_leptonSF_el;
     ptbin  = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(pt)));
     etabin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(eta)));
     out *= hist->GetBinContent(etabin,ptbin);
     err += hist->GetBinError(etabin,ptbin)*hist->GetBinError(etabin,ptbin);
     err = TMath::Sqrt(err);
     return out + out*err*var;
   }
   //cout << "[ERROR]!!!! SF UnKNOWN!!! PLEASE CHECK" << endl;
   return 1.;
 }


TString CMSSW_BASE_SF = gSystem->ExpandPathName("${CMSSW_BASE}");
TString DATA_SF = CMSSW_BASE_SF+"/src/CMGTools/TTHAnalysis/data";
TFile* f_trigSF       = new TFile(DATA_SF+"/triggerSF/triggerSF_EWKino_fullsim_ICHEP2016_9p2fb.root"       , "read");
TFile* f_trigSF_ele27 = new TFile(DATA_SF+"/triggerSF/triggerSF_Ele27_EWKino_fullsim_ICHEP2016_12p9fb.root", "read");

TH2F* h_trigSF_3l_mu = (TH2F*) f_trigSF      ->Get("eff_3l_mu" );
TH2F* h_trigSF_3l_el = (TH2F*) f_trigSF      ->Get("eff_3l_ele");
TH2F* h_trigSF_2l_mu = (TH2F*) f_trigSF      ->Get("eff_2l_mu" );
TH2F* h_trigSF_2l_el = (TH2F*) f_trigSF      ->Get("eff_2l_ele");
TH2F* h_trigSF_ele27 = (TH2F*) f_trigSF_ele27->Get("hist2dnum_Ele27_WPLoose_Gsf__HLT_Ele27_WPLoose_Gsf");

float triggerSF(int BR, float pt1, int pdg1, 
                        float pt2, int pdg2, 
                        float pt3 = 0, int pdg3 = 0, 
                        float pt4 = 0, int pdg4 = 0){
    // Lesya's mail:
    // - split for trailing ele or trailing mu
    // - 3l: subleading vs trailing lepton pt (1l + 2l triggers)
    // - 2l: leading light lepton vs subleading light lepton ==> good for both 2l+tau and 2lSS cases (1l + 2l triggers)
    // - l+tautau: use flat 86% everywhere; pt_e > 35 GeV; pt_mu > 25 GeV (1l + l/tau triggers)

    // 3l: 2tau (flat 86% in dedicated function)
    if(BR == 6) return 1.0;

    // 3l: 3light
    if(BR <= 2) {
        TH2F* hist = (abs(pdg3) == 13)?h_trigSF_3l_mu:h_trigSF_3l_el;
        int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt2)));
        int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(pt3)));
        return hist->GetBinContent(xbin,ybin);
    } 

    // 3l: 2light + 1tau
    if(BR >= 3 && BR <= 5){
        vector<int> pdgs; vector<float> pts;
        if(abs(pdg1)!=15) { pdgs.push_back(abs(pdg1)); pts.push_back(pt1); }
        if(abs(pdg2)!=15) { pdgs.push_back(abs(pdg2)); pts.push_back(pt2); }
        if(abs(pdg3)!=15) { pdgs.push_back(abs(pdg3)); pts.push_back(pt3); }
        TH2F* hist = (pdgs[1] == 13)?h_trigSF_2l_mu:h_trigSF_2l_el;
        int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pts[0])));
        int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(pts[1])));
        return hist->GetBinContent(xbin,ybin);
    }

    // 2lss 
    if(BR == -1){
        TH2F* hist = (pdg2 == 13)?h_trigSF_2l_mu:h_trigSF_2l_el;
        int xbin = std::max(1, std::min(hist->GetNbinsX(), hist->GetXaxis()->FindBin(pt1)));
        int ybin = std::max(1, std::min(hist->GetNbinsY(), hist->GetYaxis()->FindBin(pt2)));
        return hist->GetBinContent(xbin,ybin);
    }

    // others: (4l, crwz) 
    return 1;
}


void functionsRA7() {}
