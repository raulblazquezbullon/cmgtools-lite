void met_rebin14()
{
//=========Macro generated from canvas: met_rebin14_canvas/met_rebin14
//=========  (Tue Apr  4 21:28:45 2023) by ROOT version 6.24/07
   TCanvas *met_rebin14_canvas = new TCanvas("met_rebin14_canvas", "met_rebin14",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin14_canvas->SetHighLightColor(2);
   met_rebin14_canvas->Range(-87.69231,-118.4214,399.4872,792.5128);
   met_rebin14_canvas->SetFillColor(0);
   met_rebin14_canvas->SetBorderMode(0);
   met_rebin14_canvas->SetBorderSize(2);
   met_rebin14_canvas->SetTickx(1);
   met_rebin14_canvas->SetTicky(1);
   met_rebin14_canvas->SetLeftMargin(0.18);
   met_rebin14_canvas->SetRightMargin(0.04);
   met_rebin14_canvas->SetTopMargin(0.06);
   met_rebin14_canvas->SetBottomMargin(0.13);
   met_rebin14_canvas->SetFrameFillStyle(0);
   met_rebin14_canvas->SetFrameBorderMode(0);
   met_rebin14_canvas->SetFrameFillStyle(0);
   met_rebin14_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[15] = {0, 23.72128, 27.44255, 31.16383, 34.88511, 38.60638, 42.55996, 46.65263, 50.74529, 54.83795, 58.93061, 67.89031, 78.5716, 103.4508, 380}; 
   
   TH1D *met_rebin14_total__1 = new TH1D("met_rebin14_total__1","dummy",14, xAxis1);
   met_rebin14_total__1->SetBinContent(3,102.3485);
   met_rebin14_total__1->SetBinContent(4,321.1864);
   met_rebin14_total__1->SetBinContent(5,291.3897);
   met_rebin14_total__1->SetBinContent(6,317.6675);
   met_rebin14_total__1->SetBinContent(7,297.2129);
   met_rebin14_total__1->SetBinContent(8,270.6473);
   met_rebin14_total__1->SetBinContent(9,234.8902);
   met_rebin14_total__1->SetBinContent(10,211.7121);
   met_rebin14_total__1->SetBinContent(11,368.9284);
   met_rebin14_total__1->SetBinContent(12,295.9105);
   met_rebin14_total__1->SetBinContent(13,352.9512);
   met_rebin14_total__1->SetBinContent(14,319.4023);
   met_rebin14_total__1->SetBinError(3,10.43714);
   met_rebin14_total__1->SetBinError(4,16.89975);
   met_rebin14_total__1->SetBinError(5,12.81938);
   met_rebin14_total__1->SetBinError(6,15.97871);
   met_rebin14_total__1->SetBinError(7,13.37243);
   met_rebin14_total__1->SetBinError(8,11.35302);
   met_rebin14_total__1->SetBinError(9,11.02618);
   met_rebin14_total__1->SetBinError(10,7.702972);
   met_rebin14_total__1->SetBinError(11,10.97746);
   met_rebin14_total__1->SetBinError(12,10.24539);
   met_rebin14_total__1->SetBinError(13,9.336807);
   met_rebin14_total__1->SetBinError(14,8.998572);
   met_rebin14_total__1->SetMinimum(0);
   met_rebin14_total__1->SetMaximum(737.8567);
   met_rebin14_total__1->SetEntries(15153);
   met_rebin14_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin14_total__1->SetFillColor(ci);
   met_rebin14_total__1->SetMarkerStyle(20);
   met_rebin14_total__1->SetMarkerSize(1.1);
   met_rebin14_total__1->GetXaxis()->SetTitle("met");
   met_rebin14_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin14_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin14_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin14_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin14_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin14_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin14_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin14_total__1->GetYaxis()->SetTitle("Events");
   met_rebin14_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin14_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin14_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin14_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin14_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin14_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin14_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin14_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin14_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin14_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin14_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin14_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin14_total__1->Draw("HIST");
   
   THStack *met_rebin14_stack = new THStack();
   met_rebin14_stack->SetName("met_rebin14_stack");
   met_rebin14_stack->SetTitle("met_rebin14");
   Double_t xAxis2[15] = {0, 23.72128, 27.44255, 31.16383, 34.88511, 38.60638, 42.55996, 46.65263, 50.74529, 54.83795, 58.93061, 67.89031, 78.5716, 103.4508, 380}; 
   
   TH1F *met_rebin14_stack_stack_1 = new TH1F("met_rebin14_stack_stack_1","met_rebin14",14, xAxis2);
   met_rebin14_stack_stack_1->SetMinimum(0);
   met_rebin14_stack_stack_1->SetMaximum(387.3748);
   met_rebin14_stack_stack_1->SetDirectory(0);
   met_rebin14_stack_stack_1->SetStats(0);
   met_rebin14_stack_stack_1->SetLineStyle(0);
   met_rebin14_stack_stack_1->SetMarkerStyle(20);
   met_rebin14_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin14_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin14_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin14_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin14_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin14_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin14_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin14_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin14_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin14_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin14_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin14_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin14_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin14_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin14_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin14_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin14_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin14_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin14_stack->SetHistogram(met_rebin14_stack_stack_1);
   
   Double_t xAxis3[15] = {0, 23.72128, 27.44255, 31.16383, 34.88511, 38.60638, 42.55996, 46.65263, 50.74529, 54.83795, 58.93061, 67.89031, 78.5716, 103.4508, 380}; 
   
   TH1D *met_rebin14_fakes_VV_stack_1 = new TH1D("met_rebin14_fakes_VV_stack_1","dummy",14, xAxis3);
   met_rebin14_fakes_VV_stack_1->SetBinContent(7,0.2199288);
   met_rebin14_fakes_VV_stack_1->SetBinContent(10,0.8797151);
   met_rebin14_fakes_VV_stack_1->SetBinContent(13,0.2199288);
   met_rebin14_fakes_VV_stack_1->SetBinContent(14,0.2199288);
   met_rebin14_fakes_VV_stack_1->SetBinError(7,0.2199288);
   met_rebin14_fakes_VV_stack_1->SetBinError(10,0.4398576);
   met_rebin14_fakes_VV_stack_1->SetBinError(13,0.2199288);
   met_rebin14_fakes_VV_stack_1->SetBinError(14,0.2199288);
   met_rebin14_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin14_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin14_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin14_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin14_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin14_stack->Add(met_rebin14_fakes_VV_stack_1,"");
   Double_t xAxis4[15] = {0, 23.72128, 27.44255, 31.16383, 34.88511, 38.60638, 42.55996, 46.65263, 50.74529, 54.83795, 58.93061, 67.89031, 78.5716, 103.4508, 380}; 
   
   TH1D *met_rebin14_fakes_TT_stack_2 = new TH1D("met_rebin14_fakes_TT_stack_2","dummy",14, xAxis4);
   met_rebin14_fakes_TT_stack_2->SetBinContent(3,1.504629);
   met_rebin14_fakes_TT_stack_2->SetBinContent(4,4.814812);
   met_rebin14_fakes_TT_stack_2->SetBinContent(5,6.168978);
   met_rebin14_fakes_TT_stack_2->SetBinContent(6,6.469903);
   met_rebin14_fakes_TT_stack_2->SetBinContent(7,6.723672);
   met_rebin14_fakes_TT_stack_2->SetBinContent(8,6.272284);
   met_rebin14_fakes_TT_stack_2->SetBinContent(9,5.717589);
   met_rebin14_fakes_TT_stack_2->SetBinContent(10,8.275458);
   met_rebin14_fakes_TT_stack_2->SetBinContent(11,16.30614);
   met_rebin14_fakes_TT_stack_2->SetBinContent(12,14.14351);
   met_rebin14_fakes_TT_stack_2->SetBinContent(13,24.73206);
   met_rebin14_fakes_TT_stack_2->SetBinContent(14,23.27459);
   met_rebin14_fakes_TT_stack_2->SetBinError(3,0.4758054);
   met_rebin14_fakes_TT_stack_2->SetBinError(4,0.8511465);
   met_rebin14_fakes_TT_stack_2->SetBinError(5,0.9634324);
   met_rebin14_fakes_TT_stack_2->SetBinError(6,0.986651);
   met_rebin14_fakes_TT_stack_2->SetBinError(7,1.018763);
   met_rebin14_fakes_TT_stack_2->SetBinError(8,0.9848663);
   met_rebin14_fakes_TT_stack_2->SetBinError(9,0.9275154);
   met_rebin14_fakes_TT_stack_2->SetBinError(10,1.115862);
   met_rebin14_fakes_TT_stack_2->SetBinError(11,1.611352);
   met_rebin14_fakes_TT_stack_2->SetBinError(12,1.474229);
   met_rebin14_fakes_TT_stack_2->SetBinError(13,1.954218);
   met_rebin14_fakes_TT_stack_2->SetBinError(14,1.890358);
   met_rebin14_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin14_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin14_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin14_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin14_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin14_stack->Add(met_rebin14_fakes_TT_stack_2,"");
   Double_t xAxis5[15] = {0, 23.72128, 27.44255, 31.16383, 34.88511, 38.60638, 42.55996, 46.65263, 50.74529, 54.83795, 58.93061, 67.89031, 78.5716, 103.4508, 380}; 
   
   TH1D *met_rebin14_fakes_DY_stack_3 = new TH1D("met_rebin14_fakes_DY_stack_3","dummy",14, xAxis5);
   met_rebin14_fakes_DY_stack_3->SetBinContent(3,23.34557);
   met_rebin14_fakes_DY_stack_3->SetBinContent(4,58.36392);
   met_rebin14_fakes_DY_stack_3->SetBinContent(5,27.23649);
   met_rebin14_fakes_DY_stack_3->SetBinContent(6,50.58206);
   met_rebin14_fakes_DY_stack_3->SetBinContent(7,31.12742);
   met_rebin14_fakes_DY_stack_3->SetBinContent(8,19.45464);
   met_rebin14_fakes_DY_stack_3->SetBinContent(9,19.45464);
   met_rebin14_fakes_DY_stack_3->SetBinContent(10,3.890928);
   met_rebin14_fakes_DY_stack_3->SetBinContent(11,11.67278);
   met_rebin14_fakes_DY_stack_3->SetBinContent(12,11.67278);
   met_rebin14_fakes_DY_stack_3->SetBinContent(13,3.890928);
   met_rebin14_fakes_DY_stack_3->SetBinContent(14,3.890928);
   met_rebin14_fakes_DY_stack_3->SetBinError(3,9.530788);
   met_rebin14_fakes_DY_stack_3->SetBinError(4,15.0695);
   met_rebin14_fakes_DY_stack_3->SetBinError(5,10.29443);
   met_rebin14_fakes_DY_stack_3->SetBinError(6,14.02894);
   met_rebin14_fakes_DY_stack_3->SetBinError(7,11.00521);
   met_rebin14_fakes_DY_stack_3->SetBinError(8,8.700379);
   met_rebin14_fakes_DY_stack_3->SetBinError(9,8.700379);
   met_rebin14_fakes_DY_stack_3->SetBinError(10,3.890928);
   met_rebin14_fakes_DY_stack_3->SetBinError(11,6.739285);
   met_rebin14_fakes_DY_stack_3->SetBinError(12,6.739285);
   met_rebin14_fakes_DY_stack_3->SetBinError(13,3.890928);
   met_rebin14_fakes_DY_stack_3->SetBinError(14,3.890928);
   met_rebin14_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin14_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin14_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin14_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin14_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin14_stack->Add(met_rebin14_fakes_DY_stack_3,"");
   Double_t xAxis6[15] = {0, 23.72128, 27.44255, 31.16383, 34.88511, 38.60638, 42.55996, 46.65263, 50.74529, 54.83795, 58.93061, 67.89031, 78.5716, 103.4508, 380}; 
   
   TH1D *met_rebin14_prompt_ZZ_stack_4 = new TH1D("met_rebin14_prompt_ZZ_stack_4","dummy",14, xAxis6);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(3,9.549371);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(4,23.66583);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(5,22.00507);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(6,19.92912);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(7,17.02279);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(8,9.964561);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(9,9.964561);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(10,9.964561);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(11,12.87089);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(12,9.964561);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(13,8.718991);
   met_rebin14_prompt_ZZ_stack_4->SetBinContent(14,11.62532);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(3,1.991182);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(4,3.134616);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(5,3.022629);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(6,2.876521);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(7,2.658514);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(8,2.034008);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(9,2.034008);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(10,2.034008);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(11,2.31168);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(12,2.034008);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(13,1.90264);
   met_rebin14_prompt_ZZ_stack_4->SetBinError(14,2.196979);
   met_rebin14_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin14_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin14_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin14_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin14_stack->Add(met_rebin14_prompt_ZZ_stack_4,"");
   Double_t xAxis7[15] = {0, 23.72128, 27.44255, 31.16383, 34.88511, 38.60638, 42.55996, 46.65263, 50.74529, 54.83795, 58.93061, 67.89031, 78.5716, 103.4508, 380}; 
   
   TH1D *met_rebin14_prompt_WZ_stack_5 = new TH1D("met_rebin14_prompt_WZ_stack_5","dummy",14, xAxis7);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(3,67.9489);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(4,234.3418);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(5,235.9792);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(6,240.6865);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(7,242.1191);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(8,234.9558);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(9,199.7534);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(10,188.7015);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(11,328.0786);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(12,260.1297);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(13,315.3893);
   met_rebin14_prompt_WZ_stack_5->SetBinContent(14,280.3915);
   met_rebin14_prompt_WZ_stack_5->SetBinError(3,3.72918);
   met_rebin14_prompt_WZ_stack_5->SetBinError(4,6.925435);
   met_rebin14_prompt_WZ_stack_5->SetBinError(5,6.949587);
   met_rebin14_prompt_WZ_stack_5->SetBinError(6,7.01856);
   met_rebin14_prompt_WZ_stack_5->SetBinError(7,7.039417);
   met_rebin14_prompt_WZ_stack_5->SetBinError(8,6.934502);
   met_rebin14_prompt_WZ_stack_5->SetBinError(9,6.39395);
   met_rebin14_prompt_WZ_stack_5->SetBinError(10,6.214551);
   met_rebin14_prompt_WZ_stack_5->SetBinError(11,8.194285);
   met_rebin14_prompt_WZ_stack_5->SetBinError(12,7.296542);
   met_rebin14_prompt_WZ_stack_5->SetBinError(13,8.034256);
   met_rebin14_prompt_WZ_stack_5->SetBinError(14,7.575383);
   met_rebin14_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin14_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin14_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin14_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin14_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin14_stack->Add(met_rebin14_prompt_WZ_stack_5,"");
   met_rebin14_stack->Draw("same hist");
   Double_t xAxis8[15] = {0, 23.72128, 27.44255, 31.16383, 34.88511, 38.60638, 42.55996, 46.65263, 50.74529, 54.83795, 58.93061, 67.89031, 78.5716, 103.4508, 380}; 
   
   TH1D *met_rebin14_total__2 = new TH1D("met_rebin14_total__2","dummy",14, xAxis8);
   met_rebin14_total__2->SetBinContent(3,102.3485);
   met_rebin14_total__2->SetBinContent(4,321.1864);
   met_rebin14_total__2->SetBinContent(5,291.3897);
   met_rebin14_total__2->SetBinContent(6,317.6675);
   met_rebin14_total__2->SetBinContent(7,297.2129);
   met_rebin14_total__2->SetBinContent(8,270.6473);
   met_rebin14_total__2->SetBinContent(9,234.8902);
   met_rebin14_total__2->SetBinContent(10,211.7121);
   met_rebin14_total__2->SetBinContent(11,368.9284);
   met_rebin14_total__2->SetBinContent(12,295.9105);
   met_rebin14_total__2->SetBinContent(13,352.9512);
   met_rebin14_total__2->SetBinContent(14,319.4023);
   met_rebin14_total__2->SetBinError(3,10.43714);
   met_rebin14_total__2->SetBinError(4,16.89975);
   met_rebin14_total__2->SetBinError(5,12.81938);
   met_rebin14_total__2->SetBinError(6,15.97871);
   met_rebin14_total__2->SetBinError(7,13.37243);
   met_rebin14_total__2->SetBinError(8,11.35302);
   met_rebin14_total__2->SetBinError(9,11.02618);
   met_rebin14_total__2->SetBinError(10,7.702972);
   met_rebin14_total__2->SetBinError(11,10.97746);
   met_rebin14_total__2->SetBinError(12,10.24539);
   met_rebin14_total__2->SetBinError(13,9.336807);
   met_rebin14_total__2->SetBinError(14,8.998572);
   met_rebin14_total__2->SetMinimum(0);
   met_rebin14_total__2->SetMaximum(737.8567);
   met_rebin14_total__2->SetEntries(15153);
   met_rebin14_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin14_total__2->SetFillColor(ci);
   met_rebin14_total__2->SetMarkerStyle(20);
   met_rebin14_total__2->SetMarkerSize(1.1);
   met_rebin14_total__2->GetXaxis()->SetTitle("met");
   met_rebin14_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin14_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin14_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin14_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin14_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin14_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin14_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin14_total__2->GetYaxis()->SetTitle("Events");
   met_rebin14_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin14_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin14_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin14_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin14_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin14_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin14_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin14_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin14_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin14_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin14_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin14_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin14_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin14_total_errors_fx3001[12] = {
   29.30319,
   33.02447,
   36.74575,
   40.58317,
   44.60629,
   48.69896,
   52.79162,
   56.88428,
   63.41046,
   73.23096,
   91.01118,
   241.7254};
   Double_t met_rebin14_total_errors_fy3001[12] = {
   102.3485,
   321.1864,
   291.3897,
   317.6675,
   297.2129,
   270.6473,
   234.8902,
   211.7121,
   368.9284,
   295.9105,
   352.9512,
   319.4023};
   Double_t met_rebin14_total_errors_felx3001[12] = {
   1.860639,
   1.860639,
   1.860638,
   1.976789,
   2.046331,
   2.046329,
   2.046331,
   2.046329,
   4.479853,
   5.340645,
   12.43958,
   138.2746};
   Double_t met_rebin14_total_errors_fely3001[12] = {
   14.91086,
   33.10103,
   18.22277,
   20.42735,
   17.07071,
   17.1994,
   14.03493,
   16.15385,
   25.61515,
   28.17712,
   31.84299,
   27.80694};
   Double_t met_rebin14_total_errors_fehx3001[12] = {
   1.860639,
   1.860639,
   1.860638,
   1.976789,
   2.046331,
   2.046329,
   2.046331,
   2.046329,
   4.479853,
   5.340645,
   12.43958,
   138.2746};
   Double_t met_rebin14_total_errors_fehy3001[12] = {
   6.202573,
   19.41529,
   26.38524,
   19.16246,
   20.89759,
   18.61838,
   17.4059,
   13.70763,
   24.451,
   36.14298,
   26.51152,
   40.1214};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,met_rebin14_total_errors_fx3001,met_rebin14_total_errors_fy3001,met_rebin14_total_errors_felx3001,met_rebin14_total_errors_fehx3001,met_rebin14_total_errors_fely3001,met_rebin14_total_errors_fehy3001);
   grae->SetName("met_rebin14_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin14_total_errors3001 = new TH1F("Graph_met_rebin14_total_errors3001","Graph",100,0,415.2557);
   Graph_met_rebin14_total_errors3001->SetMinimum(56.84342);
   Graph_met_rebin14_total_errors3001->SetMaximum(423.9736);
   Graph_met_rebin14_total_errors3001->SetDirectory(0);
   Graph_met_rebin14_total_errors3001->SetStats(0);
   Graph_met_rebin14_total_errors3001->SetLineStyle(0);
   Graph_met_rebin14_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin14_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin14_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin14_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin14_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin14_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin14_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin14_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin14_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin14_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin14_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin14_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin14_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin14_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin14_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin14_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin14_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin14_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin14_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin14_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin14_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin14_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin14_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin14_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin14_total_errors","Total unc.","F");

   ci = TColor::GetColor("#00ffff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.952,"29.62 fb^{-1} (13.6 TeV)");
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
   met_rebin14_canvas->Modified();
   met_rebin14_canvas->cd();
   met_rebin14_canvas->SetSelected(met_rebin14_canvas);
}
