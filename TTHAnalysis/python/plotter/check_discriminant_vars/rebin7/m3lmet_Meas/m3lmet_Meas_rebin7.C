void m3lmet_Meas_rebin7()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin7_canvas/m3lmet_Meas_rebin7
//=========  (Thu Dec 15 20:01:41 2022) by ROOT version 6.12/07
   TCanvas *m3lmet_Meas_rebin7_canvas = new TCanvas("m3lmet_Meas_rebin7_canvas", "m3lmet_Meas_rebin7",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin7_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin7_canvas->Range(0,0,1,1);
   m3lmet_Meas_rebin7_canvas->SetFillColor(0);
   m3lmet_Meas_rebin7_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin7_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin7_canvas->SetTickx(1);
   m3lmet_Meas_rebin7_canvas->SetTicky(1);
   m3lmet_Meas_rebin7_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin7_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin7_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin7_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin7_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-21.30702,525.641,830.9736);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.18);
   pad1->SetRightMargin(0.04);
   pad1->SetTopMargin(0.06);
   pad1->SetBottomMargin(0.025);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_total__1 = new TH1D("m3lmet_Meas_rebin7_total__1","dummy",7, xAxis1);
   m3lmet_Meas_rebin7_total__1->SetBinContent(1,49.2247);
   m3lmet_Meas_rebin7_total__1->SetBinContent(2,132.0761);
   m3lmet_Meas_rebin7_total__1->SetBinContent(3,200.5281);
   m3lmet_Meas_rebin7_total__1->SetBinContent(4,228.7878);
   m3lmet_Meas_rebin7_total__1->SetBinContent(5,256.8217);
   m3lmet_Meas_rebin7_total__1->SetBinContent(6,238.5877);
   m3lmet_Meas_rebin7_total__1->SetBinContent(7,389.9184);
   m3lmet_Meas_rebin7_total__1->SetBinError(1,6.636823);
   m3lmet_Meas_rebin7_total__1->SetBinError(2,7.200962);
   m3lmet_Meas_rebin7_total__1->SetBinError(3,7.051161);
   m3lmet_Meas_rebin7_total__1->SetBinError(4,7.037111);
   m3lmet_Meas_rebin7_total__1->SetBinError(5,6.392482);
   m3lmet_Meas_rebin7_total__1->SetBinError(6,6.689334);
   m3lmet_Meas_rebin7_total__1->SetBinError(7,7.114359);
   m3lmet_Meas_rebin7_total__1->SetMinimum(0);
   m3lmet_Meas_rebin7_total__1->SetMaximum(779.8368);
   m3lmet_Meas_rebin7_total__1->SetEntries(15152);
   m3lmet_Meas_rebin7_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin7_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin7_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin7_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin7_stack = new THStack();
   m3lmet_Meas_rebin7_stack->SetName("m3lmet_Meas_rebin7_stack");
   m3lmet_Meas_rebin7_stack->SetTitle("m3lmet_Meas_rebin7");
   Double_t xAxis2[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1F *m3lmet_Meas_rebin7_stack_stack_1 = new TH1F("m3lmet_Meas_rebin7_stack_stack_1","m3lmet_Meas_rebin7",7, xAxis2);
   m3lmet_Meas_rebin7_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin7_stack_stack_1->SetMaximum(409.4143);
   m3lmet_Meas_rebin7_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin7_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin7_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin7_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->SetHistogram(m3lmet_Meas_rebin7_stack_stack_1);
   
   Double_t xAxis3[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(4,0.1943867);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(6,0.2915801);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(7,0.09719337);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(3,0.09719337);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(4,0.1374522);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(6,0.1683439);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(7,0.09719337);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_fakes_VV_stack_1,"");
   Double_t xAxis4[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(1,1.753664);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(2,4.592076);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(3,6.44994);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(4,7.380859);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(5,9.641663);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(6,10.92987);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(7,14.29626);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(1,0.3561581);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(2,0.5663097);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(3,0.6548922);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(4,0.7130711);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(5,0.8006965);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(6,0.8584947);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(7,0.9885077);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_fakes_TT_stack_2,"");
   Double_t xAxis5[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(1,24.07331);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(2,24.07331);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(3,18.91474);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(4,17.19522);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(5,10.31713);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(6,13.75618);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(7,8.597611);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(1,6.433863);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(2,6.433863);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(3,5.70301);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(4,5.437606);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(5,4.211952);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(6,4.863543);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(7,3.844968);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_fakes_DY_stack_3,"");
   Double_t xAxis6[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(1,4.40365);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(2,8.440329);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(3,9.908212);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(4,10.45867);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(5,11.3761);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(6,10.82564);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(7,17.79808);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(1,0.8988913);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(2,1.244459);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(3,1.348337);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(4,1.385284);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(5,1.444766);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(6,1.409378);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(7,1.807122);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_prompt_ZZ_stack_4,"");
   Double_t xAxis7[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(1,18.99408);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(2,94.97039);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(3,165.158);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(4,193.5587);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(5,225.4868);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(6,202.7844);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(7,349.1292);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(1,1.310716);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(2,2.93085);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(3,3.864998);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(4,4.184136);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(5,4.516064);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(6,4.282691);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(7,5.619434);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin7_stack->Draw("same hist");
   Double_t xAxis8[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_total__2 = new TH1D("m3lmet_Meas_rebin7_total__2","dummy",7, xAxis8);
   m3lmet_Meas_rebin7_total__2->SetBinContent(1,49.2247);
   m3lmet_Meas_rebin7_total__2->SetBinContent(2,132.0761);
   m3lmet_Meas_rebin7_total__2->SetBinContent(3,200.5281);
   m3lmet_Meas_rebin7_total__2->SetBinContent(4,228.7878);
   m3lmet_Meas_rebin7_total__2->SetBinContent(5,256.8217);
   m3lmet_Meas_rebin7_total__2->SetBinContent(6,238.5877);
   m3lmet_Meas_rebin7_total__2->SetBinContent(7,389.9184);
   m3lmet_Meas_rebin7_total__2->SetBinError(1,6.636823);
   m3lmet_Meas_rebin7_total__2->SetBinError(2,7.200962);
   m3lmet_Meas_rebin7_total__2->SetBinError(3,7.051161);
   m3lmet_Meas_rebin7_total__2->SetBinError(4,7.037111);
   m3lmet_Meas_rebin7_total__2->SetBinError(5,6.392482);
   m3lmet_Meas_rebin7_total__2->SetBinError(6,6.689334);
   m3lmet_Meas_rebin7_total__2->SetBinError(7,7.114359);
   m3lmet_Meas_rebin7_total__2->SetMinimum(0);
   m3lmet_Meas_rebin7_total__2->SetMaximum(779.8368);
   m3lmet_Meas_rebin7_total__2->SetEntries(15152);
   m3lmet_Meas_rebin7_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin7_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin7_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin7_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin7_total_errors_fx3001[7] = {
   85.44112,
   184.2012,
   209.7897,
   234.2208,
   263.3916,
   303.4929,
   413.2925};
   Double_t m3lmet_Meas_rebin7_total_errors_fy3001[7] = {
   49.2247,
   132.0761,
   200.5281,
   228.7878,
   256.8217,
   238.5877,
   389.9184};
   Double_t m3lmet_Meas_rebin7_total_errors_felx3001[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fely3001[7] = {
   6.636823,
   7.200962,
   7.051161,
   7.037111,
   6.392482,
   6.689334,
   7.114359};
   Double_t m3lmet_Meas_rebin7_total_errors_fehx3001[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fehy3001[7] = {
   6.636823,
   7.200962,
   7.051161,
   7.037111,
   6.392482,
   6.689334,
   7.114359};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,m3lmet_Meas_rebin7_total_errors_fx3001,m3lmet_Meas_rebin7_total_errors_fy3001,m3lmet_Meas_rebin7_total_errors_felx3001,m3lmet_Meas_rebin7_total_errors_fehx3001,m3lmet_Meas_rebin7_total_errors_fely3001,m3lmet_Meas_rebin7_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin7_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin7_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMinimum(7.143391);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMaximum(432.4772);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin7_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_rebin7_data_graph_fx3002[7] = {
   85.44112,
   184.2012,
   209.7897,
   234.2208,
   263.3916,
   303.4929,
   413.2925};
   Double_t m3lmet_Meas_rebin7_data_graph_fy3002[7] = {
   39,
   154,
   209,
   201,
   285,
   224,
   401};
   Double_t m3lmet_Meas_rebin7_data_graph_felx3002[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_data_graph_fely3002[7] = {
   6.218222,
   12.39645,
   14.44557,
   14.16595,
   16.8724,
   14.95577,
   20.01706};
   Double_t m3lmet_Meas_rebin7_data_graph_fehx3002[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_data_graph_fehy3002[7] = {
   7.298524,
   13.43684,
   15.48024,
   15.2013,
   17.90209,
   15.98926,
   21.04209};
   grae = new TGraphAsymmErrors(7,m3lmet_Meas_rebin7_data_graph_fx3002,m3lmet_Meas_rebin7_data_graph_fy3002,m3lmet_Meas_rebin7_data_graph_felx3002,m3lmet_Meas_rebin7_data_graph_fehx3002,m3lmet_Meas_rebin7_data_graph_fely3002,m3lmet_Meas_rebin7_data_graph_fehy3002);
   grae->SetName("m3lmet_Meas_rebin7_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin7_data_graph3002 = new TH1F("Graph_m3lmet_Meas_rebin7_data_graph3002","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin7_data_graph3002->SetMinimum(29.5036);
   Graph_m3lmet_Meas_rebin7_data_graph3002->SetMaximum(460.9681);
   Graph_m3lmet_Meas_rebin7_data_graph3002->SetDirectory(0);
   Graph_m3lmet_Meas_rebin7_data_graph3002->SetStats(0);
   Graph_m3lmet_Meas_rebin7_data_graph3002->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin7_data_graph3002->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin7_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin7_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin7_prompt_WZ_stack_5","WZ","F");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin7_prompt_ZZ_stack_4","qqZZ","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin7_fakes_DY_stack_3","Fakes DY","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin7_fakes_TT_stack_2","Fakes TT","F");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin7_total_errors","Total unc.","F");
   entry->SetFillColor(1);
   entry->SetFillStyle(3013);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.952,"13.09 fb^{-1} (13.6 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.036);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.952,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.045);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2813,0.952,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0342);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   m3lmet_Meas_rebin7_canvas->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0,0,1,1);
   pad2->SetFillColor(0);
   pad2->SetFillStyle(4000);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.18);
   pad2->SetRightMargin(0.04);
   pad2->SetTopMargin(0.06);
   pad2->SetBottomMargin(0.3);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   Double_t xAxis9[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_total__3 = new TH1D("m3lmet_Meas_rebin7_total__3","dummy",7, xAxis9);
   m3lmet_Meas_rebin7_total__3->SetBinContent(1,1);
   m3lmet_Meas_rebin7_total__3->SetBinContent(2,1);
   m3lmet_Meas_rebin7_total__3->SetBinContent(3,1);
   m3lmet_Meas_rebin7_total__3->SetBinContent(4,1);
   m3lmet_Meas_rebin7_total__3->SetBinContent(5,1);
   m3lmet_Meas_rebin7_total__3->SetBinContent(6,1);
   m3lmet_Meas_rebin7_total__3->SetBinContent(7,1);
   m3lmet_Meas_rebin7_total__3->SetMinimum(0.5);
   m3lmet_Meas_rebin7_total__3->SetMaximum(2);
   m3lmet_Meas_rebin7_total__3->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin7_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin7_total__3->SetMarkerColor(ci);
   m3lmet_Meas_rebin7_total__3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_total__3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin7_total__3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_total__3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin7_total__3->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin7_total__3->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin7_total__3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin7_total__3->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin7_total__3->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin7_total__3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin7_total__3->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin7_total__3->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin7_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin7_total__3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__3->Draw("AXIS");
   
   Double_t m3lmet_Meas_rebin7_total_errors_fx3003[7] = {
   85.44112,
   184.2012,
   209.7897,
   234.2208,
   263.3916,
   303.4929,
   413.2925};
   Double_t m3lmet_Meas_rebin7_total_errors_fy3003[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin7_total_errors_felx3003[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fely3003[7] = {
   0.1348271,
   0.05452131,
   0.03516295,
   0.03075824,
   0.02489074,
   0.02803722,
   0.01824576};
   Double_t m3lmet_Meas_rebin7_total_errors_fehx3003[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fehy3003[7] = {
   0.1348271,
   0.05452131,
   0.03516295,
   0.03075824,
   0.02489074,
   0.02803722,
   0.01824576};
   grae = new TGraphAsymmErrors(7,m3lmet_Meas_rebin7_total_errors_fx3003,m3lmet_Meas_rebin7_total_errors_fy3003,m3lmet_Meas_rebin7_total_errors_felx3003,m3lmet_Meas_rebin7_total_errors_fehx3003,m3lmet_Meas_rebin7_total_errors_fely3003,m3lmet_Meas_rebin7_total_errors_fehy3003);
   grae->SetName("m3lmet_Meas_rebin7_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_rebin7_total_errors_fx3004[7] = {
   85.44112,
   184.2012,
   209.7897,
   234.2208,
   263.3916,
   303.4929,
   413.2925};
   Double_t m3lmet_Meas_rebin7_total_errors_fy3004[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin7_total_errors_felx3004[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fely3004[7] = {
   0.1348271,
   0.05452131,
   0.03516295,
   0.03075824,
   0.02489074,
   0.02803722,
   0.01824576};
   Double_t m3lmet_Meas_rebin7_total_errors_fehx3004[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fehy3004[7] = {
   0.1348271,
   0.05452131,
   0.03516295,
   0.03075824,
   0.02489074,
   0.02803722,
   0.01824576};
   grae = new TGraphAsymmErrors(7,m3lmet_Meas_rebin7_total_errors_fx3004,m3lmet_Meas_rebin7_total_errors_fy3004,m3lmet_Meas_rebin7_total_errors_felx3004,m3lmet_Meas_rebin7_total_errors_fehx3004,m3lmet_Meas_rebin7_total_errors_fely3004,m3lmet_Meas_rebin7_total_errors_fehy3004);
   grae->SetName("m3lmet_Meas_rebin7_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_total__4 = new TH1D("m3lmet_Meas_rebin7_total__4","dummy",7, xAxis10);
   m3lmet_Meas_rebin7_total__4->SetBinContent(1,1);
   m3lmet_Meas_rebin7_total__4->SetBinContent(2,1);
   m3lmet_Meas_rebin7_total__4->SetBinContent(3,1);
   m3lmet_Meas_rebin7_total__4->SetBinContent(4,1);
   m3lmet_Meas_rebin7_total__4->SetBinContent(5,1);
   m3lmet_Meas_rebin7_total__4->SetBinContent(6,1);
   m3lmet_Meas_rebin7_total__4->SetBinContent(7,1);
   m3lmet_Meas_rebin7_total__4->SetMinimum(0.5);
   m3lmet_Meas_rebin7_total__4->SetMaximum(2);
   m3lmet_Meas_rebin7_total__4->SetEntries(15159);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin7_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin7_total__4->SetMarkerColor(ci);
   m3lmet_Meas_rebin7_total__4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_total__4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin7_total__4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_total__4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin7_total__4->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin7_total__4->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin7_total__4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin7_total__4->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin7_total__4->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin7_total__4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin7_total__4->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin7_total__4->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin7_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin7_total__4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[7] = {
   85.44112,
   184.2012,
   209.7897,
   234.2208,
   263.3916,
   303.4929,
   413.2925};
   Double_t data_div_fy3005[7] = {
   0.7922852,
   1.165994,
   1.042248,
   0.8785432,
   1.109719,
   0.9388583,
   1.02842};
   Double_t data_div_felx3005[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t data_div_fely3005[7] = {
   0.1263232,
   0.09385837,
   0.07203761,
   0.06191739,
   0.06569692,
   0.06268459,
   0.05133654};
   Double_t data_div_fehx3005[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t data_div_fehy3005[7] = {
   0.1482695,
   0.1017356,
   0.07719735,
   0.06644279,
   0.06970627,
   0.06701629,
   0.05396538};
   grae = new TGraphAsymmErrors(7,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin7_data_graph3005 = new TH1F("Graph_m3lmet_Meas_rebin7_data_graph3005","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin7_data_graph3005->SetMinimum(29.5036);
   Graph_m3lmet_Meas_rebin7_data_graph3005->SetMaximum(460.9681);
   Graph_m3lmet_Meas_rebin7_data_graph3005->SetDirectory(0);
   Graph_m3lmet_Meas_rebin7_data_graph3005->SetStats(0);
   Graph_m3lmet_Meas_rebin7_data_graph3005->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin7_data_graph3005->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin7_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin7_total_errors","stat. unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin7_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3lmet_Meas_rebin7_canvas->cd();
   m3lmet_Meas_rebin7_canvas->Modified();
   m3lmet_Meas_rebin7_canvas->cd();
   m3lmet_Meas_rebin7_canvas->SetSelected(m3lmet_Meas_rebin7_canvas);
}
