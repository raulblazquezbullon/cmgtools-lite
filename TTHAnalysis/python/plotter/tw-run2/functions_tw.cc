#include "TMath.h"
#include <assert.h>
#include <iostream>
#include "TH2F.h"
#include "TH1F.h"
#include "TFile.h"
#include "TSystem.h"
#include "TLorentzVector.h"
#include "TGraphAsymmErrors.h"

int getnJetnBJet(int nJ, int nBJ) {
  int bin = -1;

  if      (nJ == 0)             bin = 0;
  else if (nJ == 1 && nBJ == 0) bin = 1;
  else if (nJ == 1 && nBJ >= 1) bin = 2;
  else if (nJ == 2 && nBJ == 0) bin = 3;
  else if (nJ == 2 && nBJ == 1) bin = 4;
  else if (nJ == 2 && nBJ >= 2) bin = 5;
  else if (nJ >= 3 && nBJ >= 0) bin = 6;
  return bin;
}


int getnLooseJets(int nlj, int nj) {
  int bin = -1;
  bin = nlj - nj;

  return bin;
}


float getSergioBDtW(double BDT) {
  if      (BDT < -0.536042) return 1;
  else if (BDT < -0.423882) return 2;
  else if (BDT < -0.324371) return 3;
  else if (BDT < -0.237901) return 4;
  else if (BDT < -0.151821) return 5;
  else if (BDT < -0.062366) return 6;
  else if (BDT < 0.027435)  return 7;
  else if (BDT < 0.137813)  return 8;
  else if (BDT < 0.260178)  return 9;
  else                      return 10;
}


float getSergioBDtWOther(double BDT) {
  if      (BDT < -0.165198) return 1;
  else if (BDT < -0.071037) return 2;
  else if (BDT < -0.002801) return 3;
  else if (BDT < 0.047232)  return 4;
  else if (BDT < 0.111612)  return 5;
  else                      return 6;
}


float getBDtW(double BDT) {
  if      (BDT < -0.396418153467) return 1;
  else if (BDT < -0.30499644675) return 2;
  else if (BDT < -0.236142485226) return 3;
  else if (BDT < -0.162798219325) return 4;
  else if (BDT < -0.0762444292515) return 5;
  else if (BDT < 0.0076855476712)  return 6;
  else if (BDT < 0.101481073534)  return 7;
  else if (BDT < 0.206361298811)  return 8;
  else if (BDT < 0.284749075658)  return 9;
  else                      return 10;
}


float getBDtWOther(double BDT) {
  if      (BDT < -0.218763270562) return 1;
  else if (BDT < -0.0901804057127) return 2;
  else if (BDT < 0.00093254008394) return 3;
  else if (BDT < 0.0697575197756)  return 4;
  else if (BDT < 0.143085010259)  return 5;
  else                      return 6;
}

Float_t getBDtW20bins(Double_t BDT){
  if      (BDT < -0.461324) return 1;
  else if (BDT < -0.396418) return 2;
  else if (BDT < -0.348543) return 3;
  else if (BDT < -0.304996) return 4;
  else if (BDT < -0.268547) return 5;
  else if (BDT < -0.236142) return 6;
  else if (BDT < -0.201742) return 7;
  else if (BDT < -0.162798) return 8;
  else if (BDT < -0.120081) return 9;
  else if (BDT < -0.076244) return 10;
  else if (BDT < -0.033727) return 11;
  else if (BDT < 0.007686) return 12;
  else if (BDT < 0.050584) return 13;
  else if (BDT < 0.101481) return 14;
  else if (BDT < 0.156476) return 15;
  else if (BDT < 0.206361) return 16;
  else if (BDT < 0.246990) return 17;
  else if (BDT < 0.284749) return 18;
  else if (BDT < 0.328806) return 19;
  else                       return 20;
}


Float_t getBDtWOther12bins(Double_t BDT){
  if      (BDT < -0.327464   ) return 1;
  else if (BDT < -0.218763) return 2;
  else if (BDT < -0.146987) return 3;
  else if (BDT < -0.090180) return 4;
  else if (BDT < -0.042963) return 5;
  else if (BDT < 0.000933) return 6;
  else if (BDT < 0.037092) return 7;
  else if (BDT < 0.069758) return 8;
  else if (BDT < 0.102122) return 9;
  else if (BDT < 0.143085) return 10;
  else if (BDT < 0.189322) return 11;
  else                       return 12;
}

void functions_tw() {}


//////////////////////////////////////////////


Float_t theBDT10bins1j1t(Double_t BDT){
  if      (BDT < -0.396418   ) return 1;
  else if (BDT < -0.304996) return 2;
  else if (BDT < -0.236142) return 3;
  else if (BDT < -0.162798) return 4;
  else if (BDT < -0.076244) return 5;
  else if (BDT < 0.007686) return 6;
  else if (BDT < 0.101481) return 7;
  else if (BDT < 0.206361) return 8;
  else if (BDT < 0.284749) return 9;
  else                       return 10;
} 

Float_t theBDT14bins1j1t(Double_t BDT){
  if      (BDT < -0.430091   ) return 1;
  else if (BDT < -0.355046) return 2;
  else if (BDT < -0.293873) return 3;
  else if (BDT < -0.245454) return 4;
  else if (BDT < -0.196388) return 5;
  else if (BDT < -0.138716) return 6;
  else if (BDT < -0.076244) return 7;
  else if (BDT < -0.015878) return 8;
  else if (BDT < 0.044264) return 9;
  else if (BDT < 0.117488) return 10;
  else if (BDT < 0.192698) return 11;
  else if (BDT < 0.252278) return 12;
  else if (BDT < 0.309512) return 13;
  else                       return 14;
} 

Float_t theBDT18bins1j1t(Double_t BDT){
  if      (BDT < -0.452500   ) return 1;
  else if (BDT < -0.384839) return 2;
  else if (BDT < -0.333533) return 3;
  else if (BDT < -0.287896) return 4;
  else if (BDT < -0.250643) return 5;
  else if (BDT < -0.213593) return 6;
  else if (BDT < -0.171820) return 7;
  else if (BDT < -0.124858) return 8;
  else if (BDT < -0.076244) return 9;
  else if (BDT < -0.029052) return 10;
  else if (BDT < 0.016874) return 11;
  else if (BDT < 0.066225) return 12;
  else if (BDT < 0.126185) return 13;
  else if (BDT < 0.184921) return 14;
  else if (BDT < 0.234401) return 15;
  else if (BDT < 0.276003) return 16;
  else if (BDT < 0.323604) return 17;
  else                       return 18;
} 

Float_t theBDT22bins1j1t(Double_t BDT){
  if      (BDT < -0.469058   ) return 1;
  else if (BDT < -0.406486) return 2;
  else if (BDT < -0.361072) return 3;
  else if (BDT < -0.320325) return 4;
  else if (BDT < -0.284206) return 5;
  else if (BDT < -0.253814) return 6;
  else if (BDT < -0.224014) return 7;
  else if (BDT < -0.191504) return 8;
  else if (BDT < -0.155240) return 9;
  else if (BDT < -0.116048) return 10;
  else if (BDT < -0.076244) return 11;
  else if (BDT < -0.037492) return 12;
  else if (BDT < 0.000244) return 13;
  else if (BDT < 0.038514) return 14;
  else if (BDT < 0.081490) return 15;
  else if (BDT < 0.131889) return 16;
  else if (BDT < 0.179910) return 17;
  else if (BDT < 0.222179) return 18;
  else if (BDT < 0.257065) return 19;
  else if (BDT < 0.292389) return 20;
  else if (BDT < 0.333421) return 21;
  else                       return 22;
} 

Float_t theBDT26bins1j1t(Double_t BDT){
  if      (BDT < -0.482300   ) return 1;
  else if (BDT < -0.423176) return 2;
  else if (BDT < -0.380687) return 3;
  else if (BDT < -0.345076) return 4;
  else if (BDT < -0.311345) return 5;
  else if (BDT < -0.281685) return 6;
  else if (BDT < -0.256100) return 7;
  else if (BDT < -0.231116) return 8;
  else if (BDT < -0.204598) return 9;
  else if (BDT < -0.175289) return 10;
  else if (BDT < -0.143417) return 11;
  else if (BDT < -0.109954) return 12;
  else if (BDT < -0.076244) return 13;
  else if (BDT < -0.043399) return 14;
  else if (BDT < -0.011337) return 15;
  else if (BDT < 0.020511) return 16;
  else if (BDT < 0.054010) return 17;
  else if (BDT < 0.092816) return 18;
  else if (BDT < 0.135766) return 19;
  else if (BDT < 0.176372) return 20;
  else if (BDT < 0.213213) return 21;
  else if (BDT < 0.244014) return 22;
  else if (BDT < 0.272771) return 23;
  else if (BDT < 0.304731) return 24;
  else if (BDT < 0.340609) return 25;
  else                       return 26;
} 

Float_t theBDT30bins1j1t(Double_t BDT){
  if      (BDT < -0.493450   ) return 1;
  else if (BDT < -0.436507) return 2;
  else if (BDT < -0.396418) return 3;
  else if (BDT < -0.363938) return 4;
  else if (BDT < -0.333533) return 5;
  else if (BDT < -0.304996) return 6;
  else if (BDT < -0.279940) return 7;
  else if (BDT < -0.257788) return 8;
  else if (BDT < -0.236142) return 9;
  else if (BDT < -0.213593) return 10;
  else if (BDT < -0.189183) return 11;
  else if (BDT < -0.162798) return 12;
  else if (BDT < -0.134628) return 13;
  else if (BDT < -0.105486) return 14;
  else if (BDT < -0.076244) return 15;
  else if (BDT < -0.047704) return 16;
  else if (BDT < -0.019786) return 17;
  else if (BDT < 0.007686) return 18;
  else if (BDT < 0.035801) return 19;
  else if (BDT < 0.066225) return 20;
  else if (BDT < 0.101481) return 21;
  else if (BDT < 0.138439) return 22;
  else if (BDT < 0.173776) return 23;
  else if (BDT < 0.206361) return 24;
  else if (BDT < 0.234401) return 25;
  else if (BDT < 0.259304) return 26;
  else if (BDT < 0.284749) return 27;
  else if (BDT < 0.313651) return 28;
  else if (BDT < 0.345925) return 29;
  else                       return 30;
} 

Float_t theBDT6bins2j1t(Double_t BDT){
  if      (BDT < -0.218763   ) return 1;
  else if (BDT < -0.090180) return 2;
  else if (BDT < 0.000933) return 3;
  else if (BDT < 0.069758) return 4;
  else if (BDT < 0.143085) return 5;
  else                       return 6;
} 

Float_t theBDT10bins2j1t(Double_t BDT){
  if      (BDT < -0.301590   ) return 1;
  else if (BDT < -0.187606) return 2;
  else if (BDT < -0.110790) return 3;
  else if (BDT < -0.052481) return 4;
  else if (BDT < 0.000933) return 5;
  else if (BDT < 0.043815) return 6;
  else if (BDT < 0.081716) return 7;
  else if (BDT < 0.125496) return 8;
  else if (BDT < 0.179255) return 9;
  else                       return 10;
} 

Float_t theBDT14bins2j1t(Double_t BDT){
  if      (BDT < -0.349650   ) return 1;
  else if (BDT < -0.246905) return 2;
  else if (BDT < -0.175481) return 3;
  else if (BDT < -0.120869) return 4;
  else if (BDT < -0.077180) return 5;
  else if (BDT < -0.035868) return 6;
  else if (BDT < 0.000933) return 7;
  else if (BDT < 0.032180) return 8;
  else if (BDT < 0.060837) return 9;
  else if (BDT < 0.087176) return 10;
  else if (BDT < 0.118571) return 11;
  else if (BDT < 0.155988) return 12;
  else if (BDT < 0.196425) return 13;
  else                       return 14;
} 

Float_t theBDT18bins2j1t(Double_t BDT){
  if      (BDT < -0.384759   ) return 1;
  else if (BDT < -0.286962) return 2;
  else if (BDT < -0.218763) return 3;
  else if (BDT < -0.169020) return 4;
  else if (BDT < -0.126781) return 5;
  else if (BDT < -0.090180) return 6;
  else if (BDT < -0.059036) return 7;
  else if (BDT < -0.026674) return 8;
  else if (BDT < 0.000933) return 9;
  else if (BDT < 0.025166) return 10;
  else if (BDT < 0.048308) return 11;
  else if (BDT < 0.069758) return 12;
  else if (BDT < 0.090319) return 13;
  else if (BDT < 0.114987) return 14;
  else if (BDT < 0.143085) return 15;
  else if (BDT < 0.172990) return 16;
  else if (BDT < 0.208810) return 17;
  else                       return 18;
} 

Float_t theBDT22bins2j1t(Double_t BDT){
  if      (BDT < -0.411461   ) return 1;
  else if (BDT < -0.314996) return 2;
  else if (BDT < -0.255109) return 3;
  else if (BDT < -0.203785) return 4;
  else if (BDT < -0.164805) return 5;
  else if (BDT < -0.130700) return 6;
  else if (BDT < -0.098935) return 7;
  else if (BDT < -0.073550) return 8;
  else if (BDT < -0.047327) return 9;
  else if (BDT < -0.020924) return 10;
  else if (BDT < 0.000933) return 11;
  else if (BDT < 0.020733) return 12;
  else if (BDT < 0.040140) return 13;
  else if (BDT < 0.058345) return 14;
  else if (BDT < 0.075116) return 15;
  else if (BDT < 0.092494) return 16;
  else if (BDT < 0.112688) return 17;
  else if (BDT < 0.134864) return 18;
  else if (BDT < 0.159572) return 19;
  else if (BDT < 0.184709) return 20;
  else if (BDT < 0.218516) return 21;
  else                       return 22;
} 

Float_t theBDT26bins2j1t(Double_t BDT){
  if      (BDT < -0.432492   ) return 1;
  else if (BDT < -0.339045) return 2;
  else if (BDT < -0.281621) return 3;
  else if (BDT < -0.233401) return 4;
  else if (BDT < -0.194068) return 5;
  else if (BDT < -0.161852) return 6;
  else if (BDT < -0.133334) return 7;
  else if (BDT < -0.105605) return 8;
  else if (BDT < -0.083221) return 9;
  else if (BDT < -0.061601) return 10;
  else if (BDT < -0.039047) return 11;
  else if (BDT < -0.016930) return 12;
  else if (BDT < 0.000933) return 13;
  else if (BDT < 0.017841) return 14;
  else if (BDT < 0.034489) return 15;
  else if (BDT < 0.050042) return 16;
  else if (BDT < 0.064901) return 17;
  else if (BDT < 0.078910) return 18;
  else if (BDT < 0.093982) return 19;
  else if (BDT < 0.111073) return 20;
  else if (BDT < 0.129395) return 21;
  else if (BDT < 0.150004) return 22;
  else if (BDT < 0.170601) return 23;
  else if (BDT < 0.193050) return 24;
  else if (BDT < 0.226632) return 25;
  else                       return 26;
} 
