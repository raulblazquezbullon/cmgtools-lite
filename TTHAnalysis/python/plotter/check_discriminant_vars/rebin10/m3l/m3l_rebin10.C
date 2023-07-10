void m3l_rebin10()
{
//=========Macro generated from canvas: m3l_rebin10_canvas/m3l_rebin10
//=========  (Mon Jul 10 18:59:47 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin10_canvas = new TCanvas("m3l_rebin10_canvas", "m3l_rebin10",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin10_canvas->SetHighLightColor(2);
   m3l_rebin10_canvas->Range(-115.3846,-165.7863,525.641,1109.493);
   m3l_rebin10_canvas->SetFillColor(0);
   m3l_rebin10_canvas->SetBorderMode(0);
   m3l_rebin10_canvas->SetBorderSize(2);
   m3l_rebin10_canvas->SetTickx(1);
   m3l_rebin10_canvas->SetTicky(1);
   m3l_rebin10_canvas->SetLeftMargin(0.18);
   m3l_rebin10_canvas->SetRightMargin(0.04);
   m3l_rebin10_canvas->SetTopMargin(0.06);
   m3l_rebin10_canvas->SetBottomMargin(0.13);
   m3l_rebin10_canvas->SetFrameFillStyle(0);
   m3l_rebin10_canvas->SetFrameBorderMode(0);
   m3l_rebin10_canvas->SetFrameFillStyle(0);
   m3l_rebin10_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[11] = {0, 112.5477, 125.0955, 137.6432, 150.2482, 166.5587, 182.8692, 199.1797, 228.4141, 269.9963, 500}; 
   
   TH1D *m3l_rebin10_total__1 = new TH1D("m3l_rebin10_total__1","dummy",10, xAxis1);
   m3l_rebin10_total__1->SetBinContent(1,40.7177);
   m3l_rebin10_total__1->SetBinContent(2,177.0488);
   m3l_rebin10_total__1->SetBinContent(3,330.5911);
   m3l_rebin10_total__1->SetBinContent(4,333.5685);
   m3l_rebin10_total__1->SetBinContent(5,403.2623);
   m3l_rebin10_total__1->SetBinContent(6,355.4579);
   m3l_rebin10_total__1->SetBinContent(7,278.4124);
   m3l_rebin10_total__1->SetBinContent(8,370.6735);
   m3l_rebin10_total__1->SetBinContent(9,333.2773);
   m3l_rebin10_total__1->SetBinContent(10,516.488);
   m3l_rebin10_total__1->SetBinError(1,5.67378);
   m3l_rebin10_total__1->SetBinError(2,10.38809);
   m3l_rebin10_total__1->SetBinError(3,16.23384);
   m3l_rebin10_total__1->SetBinError(4,13.30185);
   m3l_rebin10_total__1->SetBinError(5,13.72461);
   m3l_rebin10_total__1->SetBinError(6,11.88799);
   m3l_rebin10_total__1->SetBinError(7,10.25026);
   m3l_rebin10_total__1->SetBinError(8,13.69934);
   m3l_rebin10_total__1->SetBinError(9,11.31725);
   m3l_rebin10_total__1->SetBinError(10,11.34703);
   m3l_rebin10_total__1->SetMinimum(0);
   m3l_rebin10_total__1->SetMaximum(1032.976);
   m3l_rebin10_total__1->SetEntries(15153);
   m3l_rebin10_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin10_total__1->SetFillColor(ci);
   m3l_rebin10_total__1->SetMarkerStyle(20);
   m3l_rebin10_total__1->SetMarkerSize(1.1);
   m3l_rebin10_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin10_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin10_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_total__1->Draw("HIST");
   
   THStack *m3l_rebin10_stack = new THStack();
   m3l_rebin10_stack->SetName("m3l_rebin10_stack");
   m3l_rebin10_stack->SetTitle("m3l_rebin10");
   Double_t xAxis2[11] = {0, 112.5477, 125.0955, 137.6432, 150.2482, 166.5587, 182.8692, 199.1797, 228.4141, 269.9963, 500}; 
   
   TH1F *m3l_rebin10_stack_stack_1 = new TH1F("m3l_rebin10_stack_stack_1","m3l_rebin10",10, xAxis2);
   m3l_rebin10_stack_stack_1->SetMinimum(0);
   m3l_rebin10_stack_stack_1->SetMaximum(542.3124);
   m3l_rebin10_stack_stack_1->SetDirectory(0);
   m3l_rebin10_stack_stack_1->SetStats(0);
   m3l_rebin10_stack_stack_1->SetLineStyle(0);
   m3l_rebin10_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->SetHistogram(m3l_rebin10_stack_stack_1);
   
   Double_t xAxis3[11] = {0, 112.5477, 125.0955, 137.6432, 150.2482, 166.5587, 182.8692, 199.1797, 228.4141, 269.9963, 500}; 
   
   TH1D *m3l_rebin10_fakes_VV_stack_1 = new TH1D("m3l_rebin10_fakes_VV_stack_1","dummy",10, xAxis3);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(1,0.4031181);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(5,0.2060137);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(7,0.2026171);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(8,0.1938399);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(9,0.199151);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(10,0.205721);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(1,0.2850661);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(5,0.2060137);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(7,0.2026171);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(8,0.1938399);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(9,0.199151);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(10,0.205721);
   m3l_rebin10_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin10_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin10_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin10_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_fakes_VV_stack_1,"");
   Double_t xAxis4[11] = {0, 112.5477, 125.0955, 137.6432, 150.2482, 166.5587, 182.8692, 199.1797, 228.4141, 269.9963, 500}; 
   
   TH1D *m3l_rebin10_fakes_TT_stack_2 = new TH1D("m3l_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(1,3.024344);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(2,7.378647);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(3,10.56984);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(4,13.0456);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(5,17.31278);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(6,11.73431);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(7,11.08864);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(8,13.50014);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(9,14.51887);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(10,14.33545);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(1,0.6898536);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(2,1.045888);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(3,1.241827);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(4,1.353364);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(5,1.561837);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(6,1.281199);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(7,1.248529);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(8,1.389429);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(9,1.450854);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(10,1.475135);
   m3l_rebin10_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin10_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin10_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin10_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_fakes_TT_stack_2,"");
   Double_t xAxis5[11] = {0, 112.5477, 125.0955, 137.6432, 150.2482, 166.5587, 182.8692, 199.1797, 228.4141, 269.9963, 500}; 
   
   TH1D *m3l_rebin10_fakes_DY_stack_3 = new TH1D("m3l_rebin10_fakes_DY_stack_3","dummy",10, xAxis5);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(1,7.16965);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(2,21.39751);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(3,57.67755);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(4,32.47444);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(5,32.17917);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(6,21.17878);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(7,14.64855);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(8,33.0049);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(9,18.14768);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(10,7.294405);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(1,5.069731);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(2,8.742257);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(3,14.42549);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(4,10.82984);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(5,10.73466);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(6,8.65306);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(7,7.326737);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(8,11.00434);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(9,8.119227);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(10,5.1582);
   m3l_rebin10_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin10_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin10_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin10_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_fakes_DY_stack_3,"");
   Double_t xAxis6[11] = {0, 112.5477, 125.0955, 137.6432, 150.2482, 166.5587, 182.8692, 199.1797, 228.4141, 269.9963, 500}; 
   
   TH1D *m3l_rebin10_prompt_ZZ_stack_4 = new TH1D("m3l_rebin10_prompt_ZZ_stack_4","dummy",10, xAxis6);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(1,1.515703);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(2,12.32288);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(3,22.24502);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(4,17.2034);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(5,19.22844);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(6,18.86301);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(7,9.738482);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(8,15.68407);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(9,14.34535);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(10,22.46218);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(1,0.7587768);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(2,2.180376);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(3,2.923011);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(4,2.566441);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(5,2.720922);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(6,2.695865);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(7,1.948889);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(8,2.450935);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(9,2.359592);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(10,2.976375);
   m3l_rebin10_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin10_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin10_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin10_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_prompt_ZZ_stack_4,"");
   Double_t xAxis7[11] = {0, 112.5477, 125.0955, 137.6432, 150.2482, 166.5587, 182.8692, 199.1797, 228.4141, 269.9963, 500}; 
   
   TH1D *m3l_rebin10_prompt_WZ_stack_5 = new TH1D("m3l_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(1,28.60488);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(2,135.9497);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(3,240.0987);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(4,270.8451);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(5,334.3359);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(6,303.6818);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(7,242.7341);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(8,308.2906);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(9,286.0662);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(10,472.1903);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(1,2.314456);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(2,5.063342);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(3,6.734729);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(4,7.157903);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(5,7.952791);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(6,7.585496);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(7,6.781493);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(8,7.655147);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(9,7.37875);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(10,9.54311);
   m3l_rebin10_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin10_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin10_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin10_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_prompt_WZ_stack_5,"");
   m3l_rebin10_stack->Draw("same hist");
   Double_t xAxis8[11] = {0, 112.5477, 125.0955, 137.6432, 150.2482, 166.5587, 182.8692, 199.1797, 228.4141, 269.9963, 500}; 
   
   TH1D *m3l_rebin10_total__2 = new TH1D("m3l_rebin10_total__2","dummy",10, xAxis8);
   m3l_rebin10_total__2->SetBinContent(1,40.7177);
   m3l_rebin10_total__2->SetBinContent(2,177.0488);
   m3l_rebin10_total__2->SetBinContent(3,330.5911);
   m3l_rebin10_total__2->SetBinContent(4,333.5685);
   m3l_rebin10_total__2->SetBinContent(5,403.2623);
   m3l_rebin10_total__2->SetBinContent(6,355.4579);
   m3l_rebin10_total__2->SetBinContent(7,278.4124);
   m3l_rebin10_total__2->SetBinContent(8,370.6735);
   m3l_rebin10_total__2->SetBinContent(9,333.2773);
   m3l_rebin10_total__2->SetBinContent(10,516.488);
   m3l_rebin10_total__2->SetBinError(1,5.67378);
   m3l_rebin10_total__2->SetBinError(2,10.38809);
   m3l_rebin10_total__2->SetBinError(3,16.23384);
   m3l_rebin10_total__2->SetBinError(4,13.30185);
   m3l_rebin10_total__2->SetBinError(5,13.72461);
   m3l_rebin10_total__2->SetBinError(6,11.88799);
   m3l_rebin10_total__2->SetBinError(7,10.25026);
   m3l_rebin10_total__2->SetBinError(8,13.69934);
   m3l_rebin10_total__2->SetBinError(9,11.31725);
   m3l_rebin10_total__2->SetBinError(10,11.34703);
   m3l_rebin10_total__2->SetMinimum(0);
   m3l_rebin10_total__2->SetMaximum(1032.976);
   m3l_rebin10_total__2->SetEntries(15153);
   m3l_rebin10_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin10_total__2->SetFillColor(ci);
   m3l_rebin10_total__2->SetMarkerStyle(20);
   m3l_rebin10_total__2->SetMarkerSize(1.1);
   m3l_rebin10_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin10_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin10_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin10_total_errors_fx3001[10] = {
   56.27386,
   118.8216,
   131.3693,
   143.9457,
   158.4034,
   174.714,
   191.0245,
   213.7969,
   249.2052,
   384.9982};
   Double_t m3l_rebin10_total_errors_fy3001[10] = {
   40.7177,
   177.0488,
   330.5911,
   333.5685,
   403.2623,
   355.4579,
   278.4124,
   370.6735,
   333.2773,
   516.488};
   Double_t m3l_rebin10_total_errors_felx3001[10] = {
   56.27386,
   6.273865,
   6.273861,
   6.30249,
   8.155266,
   8.155266,
   8.155266,
   14.61716,
   20.79113,
   115.0018};
   Double_t m3l_rebin10_total_errors_fely3001[10] = {
   3.574919,
   15.57051,
   31.46292,
   31.52211,
   28.97985,
   28.37832,
   19.25366,
   27.43064,
   27.49095,
   39.69755};
   Double_t m3l_rebin10_total_errors_fehx3001[10] = {
   56.27386,
   6.273865,
   6.273861,
   6.30249,
   8.155266,
   8.155266,
   8.155266,
   14.61716,
   20.79113,
   115.0018};
   Double_t m3l_rebin10_total_errors_fehy3001[10] = {
   4.19809,
   16.27288,
   33.78042,
   27.57089,
   31.6401,
   28.85301,
   21.33586,
   30.35134,
   27.33479,
   41.85615};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,m3l_rebin10_total_errors_fx3001,m3l_rebin10_total_errors_fy3001,m3l_rebin10_total_errors_felx3001,m3l_rebin10_total_errors_fehx3001,m3l_rebin10_total_errors_fely3001,m3l_rebin10_total_errors_fehy3001);
   grae->SetName("m3l_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin10_total_errors3001 = new TH1F("Graph_m3l_rebin10_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin10_total_errors3001->SetMinimum(33.4285);
   Graph_m3l_rebin10_total_errors3001->SetMaximum(610.4643);
   Graph_m3l_rebin10_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin10_total_errors3001->SetStats(0);
   Graph_m3l_rebin10_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin10_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin10_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin10_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin10_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin10_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin10_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin10_total_errors","Total unc.","F");
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
      tex = new TLatex(0.2813,0.952,"Academic");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0342);
   tex->SetLineWidth(2);
   tex->Draw();
   m3l_rebin10_canvas->Modified();
   m3l_rebin10_canvas->cd();
   m3l_rebin10_canvas->SetSelected(m3l_rebin10_canvas);
}
