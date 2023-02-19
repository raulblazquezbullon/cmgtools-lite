void m3l_rebin18()
{
//=========Macro generated from canvas: m3l_rebin18_canvas/m3l_rebin18
//=========  (Thu Dec  8 14:36:45 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin18_canvas = new TCanvas("m3l_rebin18_canvas", "m3l_rebin18",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin18_canvas->SetHighLightColor(2);
   m3l_rebin18_canvas->Range(0,0,1,1);
   m3l_rebin18_canvas->SetFillColor(0);
   m3l_rebin18_canvas->SetBorderMode(0);
   m3l_rebin18_canvas->SetBorderSize(2);
   m3l_rebin18_canvas->SetTickx(1);
   m3l_rebin18_canvas->SetTicky(1);
   m3l_rebin18_canvas->SetLeftMargin(0.18);
   m3l_rebin18_canvas->SetRightMargin(0.04);
   m3l_rebin18_canvas->SetBottomMargin(0.13);
   m3l_rebin18_canvas->SetFrameFillStyle(0);
   m3l_rebin18_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-26.64308,525.641,1039.08);
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
   Double_t xAxis1[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1D *m3l_rebin18_total__1 = new TH1D("m3l_rebin18_total__1","dummy",18, xAxis1);
   m3l_rebin18_total__1->SetBinContent(4,1.719522);
   m3l_rebin18_total__1->SetBinContent(5,3.638527);
   m3l_rebin18_total__1->SetBinContent(6,2.28391);
   m3l_rebin18_total__1->SetBinContent(7,0.7661244);
   m3l_rebin18_total__1->SetBinContent(8,12.13266);
   m3l_rebin18_total__1->SetBinContent(9,18.70074);
   m3l_rebin18_total__1->SetBinContent(10,26.98645);
   m3l_rebin18_total__1->SetBinContent(11,34.95429);
   m3l_rebin18_total__1->SetBinContent(12,50.11356);
   m3l_rebin18_total__1->SetBinContent(13,81.84118);
   m3l_rebin18_total__1->SetBinContent(14,142.108);
   m3l_rebin18_total__1->SetBinContent(15,154.7787);
   m3l_rebin18_total__1->SetBinContent(16,205.1057);
   m3l_rebin18_total__1->SetBinContent(17,273.2468);
   m3l_rebin18_total__1->SetBinContent(18,487.5684);
   m3l_rebin18_total__1->SetBinError(4,1.719522);
   m3l_rebin18_total__1->SetBinError(5,2.434497);
   m3l_rebin18_total__1->SetBinError(6,1.735004);
   m3l_rebin18_total__1->SetBinError(7,0.2571164);
   m3l_rebin18_total__1->SetBinError(8,3.896473);
   m3l_rebin18_total__1->SetBinError(9,3.984552);
   m3l_rebin18_total__1->SetBinError(10,3.712512);
   m3l_rebin18_total__1->SetBinError(11,2.983373);
   m3l_rebin18_total__1->SetBinError(12,4.007926);
   m3l_rebin18_total__1->SetBinError(13,5.497631);
   m3l_rebin18_total__1->SetBinError(14,5.744769);
   m3l_rebin18_total__1->SetBinError(15,5.845607);
   m3l_rebin18_total__1->SetBinError(16,6.672991);
   m3l_rebin18_total__1->SetBinError(17,6.497415);
   m3l_rebin18_total__1->SetBinError(18,8.090598);
   m3l_rebin18_total__1->SetMinimum(0);
   m3l_rebin18_total__1->SetMaximum(975.1368);
   m3l_rebin18_total__1->SetEntries(15152);
   m3l_rebin18_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin18_total__1->SetFillColor(ci);
   m3l_rebin18_total__1->SetMarkerStyle(20);
   m3l_rebin18_total__1->SetMarkerSize(1.1);
   m3l_rebin18_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin18_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin18_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin18_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin18_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin18_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin18_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin18_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin18_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin18_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin18_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin18_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_total__1->Draw("HIST");
   
   THStack *m3l_rebin18_stack = new THStack();
   m3l_rebin18_stack->SetName("m3l_rebin18_stack");
   m3l_rebin18_stack->SetTitle("m3l_rebin18");
   Double_t xAxis2[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1F *m3l_rebin18_stack_stack_1 = new TH1F("m3l_rebin18_stack_stack_1","m3l_rebin18",18, xAxis2);
   m3l_rebin18_stack_stack_1->SetMinimum(0);
   m3l_rebin18_stack_stack_1->SetMaximum(511.9468);
   m3l_rebin18_stack_stack_1->SetDirectory(0);
   m3l_rebin18_stack_stack_1->SetStats(0);
   m3l_rebin18_stack_stack_1->SetLineStyle(0);
   m3l_rebin18_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin18_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin18_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin18_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin18_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin18_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin18_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin18_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin18_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin18_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_stack->SetHistogram(m3l_rebin18_stack_stack_1);
   
   Double_t xAxis3[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1D *m3l_rebin18_fakes_VV_stack_1 = new TH1D("m3l_rebin18_fakes_VV_stack_1","dummy",18, xAxis3);
   m3l_rebin18_fakes_VV_stack_1->SetBinContent(13,0.09719337);
   m3l_rebin18_fakes_VV_stack_1->SetBinContent(15,0.1943867);
   m3l_rebin18_fakes_VV_stack_1->SetBinContent(18,0.3887735);
   m3l_rebin18_fakes_VV_stack_1->SetBinError(13,0.09719337);
   m3l_rebin18_fakes_VV_stack_1->SetBinError(15,0.1374522);
   m3l_rebin18_fakes_VV_stack_1->SetBinError(18,0.1943867);
   m3l_rebin18_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin18_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin18_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin18_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin18_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin18_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin18_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin18_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin18_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin18_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin18_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin18_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin18_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin18_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin18_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin18_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_stack->Add(m3l_rebin18_fakes_VV_stack_1,"");
   Double_t xAxis4[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1D *m3l_rebin18_fakes_TT_stack_2 = new TH1D("m3l_rebin18_fakes_TT_stack_2","dummy",18, xAxis4);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(5,0.1994827);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(6,0.1121484);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(7,0.1329884);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(8,0.2659769);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(9,0.577608);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(10,0.9100791);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(11,1.641516);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(12,1.575021);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(13,2.792757);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(14,4.521607);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(15,5.053561);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(16,6.516434);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(17,12.06027);
   m3l_rebin18_fakes_TT_stack_2->SetBinContent(18,18.68488);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(5,0.1151714);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(6,0.1121484);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(7,0.09403703);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(8,0.1329884);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(9,0.2086328);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(10,0.2561934);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(11,0.3380405);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(12,0.3314361);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(13,0.4309318);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(14,0.5483254);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(15,0.5796832);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(16,0.6715588);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(17,0.9012094);
   m3l_rebin18_fakes_TT_stack_2->SetBinError(18,1.126484);
   m3l_rebin18_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin18_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin18_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin18_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin18_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin18_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin18_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin18_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin18_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin18_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin18_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin18_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin18_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin18_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin18_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin18_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_stack->Add(m3l_rebin18_fakes_TT_stack_2,"");
   Double_t xAxis5[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1D *m3l_rebin18_fakes_DY_stack_3 = new TH1D("m3l_rebin18_fakes_DY_stack_3","dummy",18, xAxis5);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(4,1.719522);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(5,3.439044);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(6,1.719522);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(8,8.597611);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(9,8.597611);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(10,6.878088);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(11,3.439044);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(12,6.878088);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(13,13.75618);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(14,12.03665);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(15,12.03665);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(16,15.4757);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(17,10.31713);
   m3l_rebin18_fakes_DY_stack_3->SetBinContent(18,12.03665);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(4,1.719522);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(5,2.431771);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(6,1.719522);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(8,3.844968);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(9,3.844968);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(10,3.439044);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(11,2.431771);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(12,3.439044);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(13,4.863543);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(14,4.549428);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(15,4.549428);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(16,5.158566);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(17,4.211952);
   m3l_rebin18_fakes_DY_stack_3->SetBinError(18,4.549428);
   m3l_rebin18_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin18_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin18_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin18_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin18_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin18_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin18_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin18_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin18_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin18_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin18_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin18_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin18_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin18_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin18_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin18_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_stack->Add(m3l_rebin18_fakes_DY_stack_3,"");
   Double_t xAxis6[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1D *m3l_rebin18_prompt_ZZ_stack_4 = new TH1D("m3l_rebin18_prompt_ZZ_stack_4","dummy",18, xAxis6);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(8,0.917427);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(9,2.01834);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(10,1.651369);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(11,1.834854);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(12,3.853194);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(13,5.137591);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(14,6.972446);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(15,7.339416);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(16,9.724727);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(17,10.45867);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinContent(18,23.30265);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(8,0.4102858);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(9,0.6085523);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(10,0.5504562);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(11,0.5802318);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(12,0.8408358);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(13,0.9709135);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(14,1.13108);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(15,1.160464);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(16,1.335794);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(17,1.385284);
   m3l_rebin18_prompt_ZZ_stack_4->SetBinError(18,2.067776);
   m3l_rebin18_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin18_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin18_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin18_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin18_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin18_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin18_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin18_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin18_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin18_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin18_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin18_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin18_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin18_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin18_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin18_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_stack->Add(m3l_rebin18_prompt_ZZ_stack_4,"");
   Double_t xAxis7[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1D *m3l_rebin18_prompt_WZ_stack_5 = new TH1D("m3l_rebin18_prompt_WZ_stack_5","dummy",18, xAxis7);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(6,0.45224);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(7,0.6331359);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(8,2.351648);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(9,7.507183);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(10,17.54691);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(11,28.03888);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(12,37.80726);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(13,60.05747);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(14,118.5773);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(15,130.1547);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(16,173.3888);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(17,240.4108);
   m3l_rebin18_prompt_WZ_stack_5->SetBinContent(18,433.1554);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(6,0.2022479);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(7,0.2393029);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(8,0.4611961);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(9,0.8240204);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(10,1.259795);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(11,1.592501);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(12,1.849214);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(13,2.330682);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(14,3.274917);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(15,3.431068);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(16,3.960135);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(17,4.663118);
   m3l_rebin18_prompt_WZ_stack_5->SetBinError(18,6.259236);
   m3l_rebin18_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin18_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin18_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin18_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin18_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin18_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin18_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin18_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin18_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin18_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin18_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin18_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin18_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin18_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin18_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin18_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_stack->Add(m3l_rebin18_prompt_WZ_stack_5,"");
   m3l_rebin18_stack->Draw("same hist");
   Double_t xAxis8[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1D *m3l_rebin18_total__2 = new TH1D("m3l_rebin18_total__2","dummy",18, xAxis8);
   m3l_rebin18_total__2->SetBinContent(4,1.719522);
   m3l_rebin18_total__2->SetBinContent(5,3.638527);
   m3l_rebin18_total__2->SetBinContent(6,2.28391);
   m3l_rebin18_total__2->SetBinContent(7,0.7661244);
   m3l_rebin18_total__2->SetBinContent(8,12.13266);
   m3l_rebin18_total__2->SetBinContent(9,18.70074);
   m3l_rebin18_total__2->SetBinContent(10,26.98645);
   m3l_rebin18_total__2->SetBinContent(11,34.95429);
   m3l_rebin18_total__2->SetBinContent(12,50.11356);
   m3l_rebin18_total__2->SetBinContent(13,81.84118);
   m3l_rebin18_total__2->SetBinContent(14,142.108);
   m3l_rebin18_total__2->SetBinContent(15,154.7787);
   m3l_rebin18_total__2->SetBinContent(16,205.1057);
   m3l_rebin18_total__2->SetBinContent(17,273.2468);
   m3l_rebin18_total__2->SetBinContent(18,487.5684);
   m3l_rebin18_total__2->SetBinError(4,1.719522);
   m3l_rebin18_total__2->SetBinError(5,2.434497);
   m3l_rebin18_total__2->SetBinError(6,1.735004);
   m3l_rebin18_total__2->SetBinError(7,0.2571164);
   m3l_rebin18_total__2->SetBinError(8,3.896473);
   m3l_rebin18_total__2->SetBinError(9,3.984552);
   m3l_rebin18_total__2->SetBinError(10,3.712512);
   m3l_rebin18_total__2->SetBinError(11,2.983373);
   m3l_rebin18_total__2->SetBinError(12,4.007926);
   m3l_rebin18_total__2->SetBinError(13,5.497631);
   m3l_rebin18_total__2->SetBinError(14,5.744769);
   m3l_rebin18_total__2->SetBinError(15,5.845607);
   m3l_rebin18_total__2->SetBinError(16,6.672991);
   m3l_rebin18_total__2->SetBinError(17,6.497415);
   m3l_rebin18_total__2->SetBinError(18,8.090598);
   m3l_rebin18_total__2->SetMinimum(0);
   m3l_rebin18_total__2->SetMaximum(975.1368);
   m3l_rebin18_total__2->SetEntries(15152);
   m3l_rebin18_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin18_total__2->SetFillColor(ci);
   m3l_rebin18_total__2->SetMarkerStyle(20);
   m3l_rebin18_total__2->SetMarkerSize(1.1);
   m3l_rebin18_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin18_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin18_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin18_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin18_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin18_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin18_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin18_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin18_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin18_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin18_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin18_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin18_total_errors_fx3001[15] = {
   124.3082,
   131.2534,
   138.1986,
   145.1439,
   152.9253,
   161.751,
   170.7847,
   179.8185,
   188.8522,
   198.9095,
   212.8153,
   229.546,
   249.5134,
   282.7827,
   402.2249};
   Double_t m3l_rebin18_total_errors_fy3001[15] = {
   1.719522,
   3.638527,
   2.28391,
   0.7661244,
   12.13266,
   18.70074,
   26.98645,
   34.95429,
   50.11356,
   81.84118,
   142.108,
   154.7787,
   205.1057,
   273.2468,
   487.5684};
   Double_t m3l_rebin18_total_errors_felx3001[15] = {
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t m3l_rebin18_total_errors_fely3001[15] = {
   1.719522,
   2.434497,
   1.735004,
   0.2571164,
   3.896473,
   3.984552,
   3.712512,
   2.983373,
   4.007926,
   5.497631,
   5.744769,
   5.845607,
   6.672991,
   6.497415,
   8.090598};
   Double_t m3l_rebin18_total_errors_fehx3001[15] = {
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t m3l_rebin18_total_errors_fehy3001[15] = {
   1.719522,
   2.434497,
   1.735004,
   0.2571164,
   3.896473,
   3.984552,
   3.712512,
   2.983373,
   4.007926,
   5.497631,
   5.744769,
   5.845607,
   6.672991,
   6.497415,
   8.090598};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,m3l_rebin18_total_errors_fx3001,m3l_rebin18_total_errors_fy3001,m3l_rebin18_total_errors_felx3001,m3l_rebin18_total_errors_fehx3001,m3l_rebin18_total_errors_fely3001,m3l_rebin18_total_errors_fehy3001);
   grae->SetName("m3l_rebin18_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin18_total_errors3001 = new TH1F("Graph_m3l_rebin18_total_errors3001","Graph",100,82.91919,537.9164);
   Graph_m3l_rebin18_total_errors3001->SetMinimum(0);
   Graph_m3l_rebin18_total_errors3001->SetMaximum(545.2249);
   Graph_m3l_rebin18_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin18_total_errors3001->SetStats(0);
   Graph_m3l_rebin18_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin18_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin18_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin18_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin18_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin18_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin18_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin18_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin18_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin18_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin18_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin18_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin18_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin18_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin18_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin18_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin18_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin18_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin18_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin18_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin18_data_graph_fx3002[18] = {
   53.4726,
   110.4178,
   117.363,
   124.3082,
   131.2534,
   138.1986,
   145.1439,
   152.9253,
   161.751,
   170.7847,
   179.8185,
   188.8522,
   198.9095,
   212.8153,
   229.546,
   249.5134,
   282.7827,
   402.2249};
   Double_t m3l_rebin18_data_graph_fy3002[18] = {
   0,
   1,
   0,
   4,
   2,
   1,
   2,
   9,
   11,
   28,
   44,
   64,
   90,
   135,
   145,
   200,
   286,
   491};
   Double_t m3l_rebin18_data_graph_felx3002[18] = {
   53.4726,
   3.472603,
   3.472607,
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t m3l_rebin18_data_graph_fely3002[18] = {
   0,
   0.8272525,
   0,
   1.914367,
   1.29183,
   0.8272525,
   1.29183,
   2.943511,
   3.265636,
   5.259811,
   6.608069,
   7.979201,
   9.469369,
   11.60479,
   12.02795,
   14.1306,
   16.90201,
   22.15145};
   Double_t m3l_rebin18_data_graph_fehx3002[18] = {
   53.4726,
   3.472603,
   3.472607,
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t m3l_rebin18_data_graph_fehy3002[18] = {
   1.841055,
   2.29957,
   1.841055,
   3.162815,
   2.63791,
   2.29957,
   2.63791,
   4.110286,
   4.416609,
   6.354577,
   7.68367,
   9.041881,
   10.52222,
   12.64793,
   13.06958,
   15.16605,
   17.93164,
   23.17407};
   grae = new TGraphAsymmErrors(18,m3l_rebin18_data_graph_fx3002,m3l_rebin18_data_graph_fy3002,m3l_rebin18_data_graph_felx3002,m3l_rebin18_data_graph_fehx3002,m3l_rebin18_data_graph_fely3002,m3l_rebin18_data_graph_fehy3002);
   grae->SetName("m3l_rebin18_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin18_data_graph3002 = new TH1F("Graph_m3l_rebin18_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin18_data_graph3002->SetMinimum(0);
   Graph_m3l_rebin18_data_graph3002->SetMaximum(565.5915);
   Graph_m3l_rebin18_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin18_data_graph3002->SetStats(0);
   Graph_m3l_rebin18_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin18_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin18_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin18_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin18_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin18_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin18_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin18_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin18_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin18_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin18_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin18_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin18_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin18_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin18_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin18_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin18_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin18_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin18_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin18_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin18_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin18_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin18_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin18_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin18_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin18_total_errors","Total unc.","F");
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
   m3l_rebin18_canvas->cd();
  
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
   Double_t xAxis9[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1D *m3l_rebin18_total__3 = new TH1D("m3l_rebin18_total__3","dummy",18, xAxis9);
   m3l_rebin18_total__3->SetBinContent(4,1);
   m3l_rebin18_total__3->SetBinContent(5,1);
   m3l_rebin18_total__3->SetBinContent(6,1);
   m3l_rebin18_total__3->SetBinContent(7,1);
   m3l_rebin18_total__3->SetBinContent(8,1);
   m3l_rebin18_total__3->SetBinContent(9,1);
   m3l_rebin18_total__3->SetBinContent(10,1);
   m3l_rebin18_total__3->SetBinContent(11,1);
   m3l_rebin18_total__3->SetBinContent(12,1);
   m3l_rebin18_total__3->SetBinContent(13,1);
   m3l_rebin18_total__3->SetBinContent(14,1);
   m3l_rebin18_total__3->SetBinContent(15,1);
   m3l_rebin18_total__3->SetBinContent(16,1);
   m3l_rebin18_total__3->SetBinContent(17,1);
   m3l_rebin18_total__3->SetBinContent(18,1);
   m3l_rebin18_total__3->SetMinimum(0.5);
   m3l_rebin18_total__3->SetMaximum(2);
   m3l_rebin18_total__3->SetEntries(15170);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin18_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin18_total__3->SetMarkerColor(ci);
   m3l_rebin18_total__3->SetMarkerSize(1.1);
   m3l_rebin18_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin18_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin18_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin18_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin18_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin18_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin18_total__3->GetYaxis()->SetDecimals();
   m3l_rebin18_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin18_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin18_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin18_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin18_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin18_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_total__3->Draw("AXIS");
   
   Double_t m3l_rebin18_total_errors_fx3003[15] = {
   124.3082,
   131.2534,
   138.1986,
   145.1439,
   152.9253,
   161.751,
   170.7847,
   179.8185,
   188.8522,
   198.9095,
   212.8153,
   229.546,
   249.5134,
   282.7827,
   402.2249};
   Double_t m3l_rebin18_total_errors_fy3003[15] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin18_total_errors_felx3003[15] = {
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t m3l_rebin18_total_errors_fely3003[15] = {
   1,
   0.6690887,
   0.7596636,
   0.3356066,
   0.3211557,
   0.2130692,
   0.1375695,
   0.08535069,
   0.07997687,
   0.06717438,
   0.04042537,
   0.03776752,
   0.03253441,
   0.02377856,
   0.01659377};
   Double_t m3l_rebin18_total_errors_fehx3003[15] = {
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t m3l_rebin18_total_errors_fehy3003[15] = {
   1,
   0.6690887,
   0.7596636,
   0.3356066,
   0.3211557,
   0.2130692,
   0.1375695,
   0.08535069,
   0.07997687,
   0.06717438,
   0.04042537,
   0.03776752,
   0.03253441,
   0.02377856,
   0.01659377};
   grae = new TGraphAsymmErrors(15,m3l_rebin18_total_errors_fx3003,m3l_rebin18_total_errors_fy3003,m3l_rebin18_total_errors_felx3003,m3l_rebin18_total_errors_fehx3003,m3l_rebin18_total_errors_fely3003,m3l_rebin18_total_errors_fehy3003);
   grae->SetName("m3l_rebin18_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin18_total_errors_fx3004[15] = {
   124.3082,
   131.2534,
   138.1986,
   145.1439,
   152.9253,
   161.751,
   170.7847,
   179.8185,
   188.8522,
   198.9095,
   212.8153,
   229.546,
   249.5134,
   282.7827,
   402.2249};
   Double_t m3l_rebin18_total_errors_fy3004[15] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin18_total_errors_felx3004[15] = {
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t m3l_rebin18_total_errors_fely3004[15] = {
   1,
   0.6690887,
   0.7596636,
   0.3356066,
   0.3211557,
   0.2130692,
   0.1375695,
   0.08535069,
   0.07997687,
   0.06717438,
   0.04042537,
   0.03776752,
   0.03253441,
   0.02377856,
   0.01659377};
   Double_t m3l_rebin18_total_errors_fehx3004[15] = {
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t m3l_rebin18_total_errors_fehy3004[15] = {
   1,
   0.6690887,
   0.7596636,
   0.3356066,
   0.3211557,
   0.2130692,
   0.1375695,
   0.08535069,
   0.07997687,
   0.06717438,
   0.04042537,
   0.03776752,
   0.03253441,
   0.02377856,
   0.01659377};
   grae = new TGraphAsymmErrors(15,m3l_rebin18_total_errors_fx3004,m3l_rebin18_total_errors_fy3004,m3l_rebin18_total_errors_felx3004,m3l_rebin18_total_errors_fehx3004,m3l_rebin18_total_errors_fely3004,m3l_rebin18_total_errors_fehy3004);
   grae->SetName("m3l_rebin18_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[19] = {0, 106.9452, 113.8904, 120.8356, 127.7808, 134.726, 141.6712, 148.6165, 157.2341, 166.2679, 175.3016, 184.3353, 193.369, 204.45, 221.1806, 237.9113, 261.1154, 304.4499, 500}; 
   
   TH1D *m3l_rebin18_total__4 = new TH1D("m3l_rebin18_total__4","dummy",18, xAxis10);
   m3l_rebin18_total__4->SetBinContent(4,1);
   m3l_rebin18_total__4->SetBinContent(5,1);
   m3l_rebin18_total__4->SetBinContent(6,1);
   m3l_rebin18_total__4->SetBinContent(7,1);
   m3l_rebin18_total__4->SetBinContent(8,1);
   m3l_rebin18_total__4->SetBinContent(9,1);
   m3l_rebin18_total__4->SetBinContent(10,1);
   m3l_rebin18_total__4->SetBinContent(11,1);
   m3l_rebin18_total__4->SetBinContent(12,1);
   m3l_rebin18_total__4->SetBinContent(13,1);
   m3l_rebin18_total__4->SetBinContent(14,1);
   m3l_rebin18_total__4->SetBinContent(15,1);
   m3l_rebin18_total__4->SetBinContent(16,1);
   m3l_rebin18_total__4->SetBinContent(17,1);
   m3l_rebin18_total__4->SetBinContent(18,1);
   m3l_rebin18_total__4->SetMinimum(0.5);
   m3l_rebin18_total__4->SetMaximum(2);
   m3l_rebin18_total__4->SetEntries(15170);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin18_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin18_total__4->SetMarkerColor(ci);
   m3l_rebin18_total__4->SetMarkerSize(1.1);
   m3l_rebin18_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin18_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin18_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin18_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin18_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin18_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin18_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin18_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin18_total__4->GetYaxis()->SetDecimals();
   m3l_rebin18_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin18_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin18_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin18_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin18_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin18_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin18_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin18_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin18_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin18_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin18_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin18_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin18_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[18] = {
   53.4726,
   110.4178,
   117.363,
   124.3082,
   131.2534,
   138.1986,
   145.1439,
   152.9253,
   161.751,
   170.7847,
   179.8185,
   188.8522,
   198.9095,
   212.8153,
   229.546,
   249.5134,
   282.7827,
   402.2249};
   Double_t data_div_fy3005[18] = {
   0,
   0,
   0,
   2.326228,
   0.549673,
   0.4378455,
   2.610542,
   0.7417993,
   0.588212,
   1.037558,
   1.258787,
   1.277099,
   1.099691,
   0.9499816,
   0.9368216,
   0.9751072,
   1.046673,
   1.007038};
   Double_t data_div_felx3005[18] = {
   53.4726,
   3.472603,
   3.472607,
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t data_div_fely3005[18] = {
   0,
   0,
   0,
   1.113313,
   0.3550419,
   0.3622088,
   1.686188,
   0.2426105,
   0.174626,
   0.1949057,
   0.1890489,
   0.1592224,
   0.1157042,
   0.08166172,
   0.07771062,
   0.06889427,
   0.06185618,
   0.0454325};
   Double_t data_div_fehx3005[18] = {
   53.4726,
   3.472603,
   3.472607,
   3.472603,
   3.472607,
   3.472603,
   3.472603,
   4.308838,
   4.516869,
   4.516861,
   4.516869,
   4.516861,
   5.540474,
   8.365326,
   8.365318,
   11.60207,
   21.66724,
   97.77505};
   Double_t data_div_fehy3005[18] = {
   0,
   0,
   0,
   1.839357,
   0.724994,
   1.006856,
   3.443188,
   0.3387786,
   0.236173,
   0.2354729,
   0.2198205,
   0.1804278,
   0.1285687,
   0.08900223,
   0.08444043,
   0.07394262,
   0.06562434,
   0.04752989};
   grae = new TGraphAsymmErrors(18,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin18_data_graph3005 = new TH1F("Graph_m3l_rebin18_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin18_data_graph3005->SetMinimum(0);
   Graph_m3l_rebin18_data_graph3005->SetMaximum(565.5915);
   Graph_m3l_rebin18_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin18_data_graph3005->SetStats(0);
   Graph_m3l_rebin18_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin18_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin18_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin18_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin18_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin18_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin18_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin18_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin18_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin18_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin18_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin18_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin18_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin18_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin18_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin18_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin18_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin18_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin18_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin18_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin18_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin18_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin18_canvas->cd();
   m3l_rebin18_canvas->Modified();
   m3l_rebin18_canvas->cd();
   m3l_rebin18_canvas->SetSelected(m3l_rebin18_canvas);
}
