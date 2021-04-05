#include <TCanvas.h>
#include <TLegend.h>
#include <TROOT.h>
#include <TFile.h>
#include <TTree.h>
#include <TSystem.h>
#include <TString.h>
#include <TRandom.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TMath.h>
#include <iostream>
#include <fstream>
#include "TLorentzVector.h"
//code from Guillelmo, approval 16/03/2021

void zMassSmearing(TString channel="mm"){
  const double mass_mu = 0.10566;
  const double mass_z = 91.1876;
  TLorentzVector vLepTemp;

  TFile *nominal    = new TFile("/eos/user/b/balvarez/www/VV5TeV/plots_5TeV_noPU_data/ww/2l_dycr_data_unc_"+channel+"/ww_plots.root");


  TH1D *histo_DA = new TH1D("histo_DA" ,"histo_DA" , 80, 75, 105);
  histo_DA->SetLineWidth(3);
  histo_DA = (TH1D*) nominal->Get("mll_data");

  TH1D *histo_MC = new TH1D("histo_MC" ,"histo_MC" , 80, 75, 105);
  histo_MC->SetLineWidth(3);
  histo_MC = (TH1D*) nominal->Get("mll_DY");
 



//  double nevt;
//  for(int i=1; i<=1000000; i++){
//    nevt = mass_z/2 + gRandom->Gaus(0.0,2.0);
//    vector<TLorentzVector> vLepDA;
//    vLepTemp.SetPtEtaPhiM(nevt,1,1,            mass_mu); vLepDA.push_back(vLepTemp);  
//    vLepTemp.SetPtEtaPhiM(nevt,1,TMath::Pi()+1,mass_mu); vLepDA.push_back(vLepTemp);  
//    TLorentzVector diLepDA = vLepDA[0]+vLepDA[1];
//    histo_DA->Fill(diLepDA.M());
//
//    nevt = mass_z/2*1.01 + gRandom->Gaus(0.0,2.0);
//    vector<TLorentzVector> vLepMC;
//    vLepTemp.SetPtEtaPhiM(nevt*1.01,1,1,mass_mu);             vLepMC.push_back(vLepTemp);  
//    vLepTemp.SetPtEtaPhiM(nevt*1.01,1,TMath::Pi()+1,mass_mu); vLepMC.push_back(vLepTemp);  
//    TLorentzVector diLepMC = vLepMC[0]+vLepMC[1];
//    histo_MC->Fill(diLepMC.M());
//  }

  printf("%f/%f=%f -> %f\n",histo_MC->GetMean(),histo_DA->GetMean(),histo_MC->GetMean()/histo_DA->GetMean(),sqrt(histo_MC->GetMean()/histo_DA->GetMean()));
  histo_DA->SetLineColor(4);
  histo_MC->SetLineColor(2);
  TCanvas *canvas = new TCanvas("canvas", "canvas", 1000, 800);
  canvas->SetLeftMargin(0.15);
  canvas->SetBottomMargin(0.15);

  histo_DA->SetTitle("");
  //normalize to unit
  histo_DA->Scale(1./histo_DA->Integral());
  histo_MC->Scale(1./histo_MC->Integral());
  histo_DA->SetMaximum(histo_DA->GetMaximum()*1.2);
  histo_DA->Draw("histo");
  histo_MC->Draw("same,e");
  TLegend *leg = new TLegend(0.15,0.8,0.45,0.95);
  leg->AddEntry(histo_DA,"data, "+TString::Format("Mean = %g", histo_DA->GetMean()), "l"); 
  leg->AddEntry(histo_MC,"MC, "+TString::Format("Mean = %g", histo_MC->GetMean()), "lp"); 
  leg->AddEntry((TObject*)0, TString::Format("Correction = %g", sqrt(histo_MC->GetMean()/histo_DA->GetMean())), ""); 
  leg->Draw("same");

  canvas->SaveAs("mll_"+channel+".png");
}
