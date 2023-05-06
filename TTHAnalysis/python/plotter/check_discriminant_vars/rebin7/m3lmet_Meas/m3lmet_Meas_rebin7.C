void m3lmet_Meas_rebin7()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin7_canvas/m3lmet_Meas_rebin7
//=========  (Sat May  6 16:34:36 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin7_canvas = new TCanvas("m3lmet_Meas_rebin7_canvas", "m3lmet_Meas_rebin7",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin7_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin7_canvas->Range(-115.3846,-283.0277,525.641,1894.108);
   m3lmet_Meas_rebin7_canvas->SetFillColor(0);
   m3lmet_Meas_rebin7_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin7_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin7_canvas->SetTickx(1);
   m3lmet_Meas_rebin7_canvas->SetTicky(1);
   m3lmet_Meas_rebin7_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin7_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin7_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin7_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin7_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin7_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin7_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin7_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_total__1 = new TH1D("m3lmet_Meas_rebin7_total__1","dummy",7, xAxis1);
   m3lmet_Meas_rebin7_total__1->SetBinContent(1,111.3855);
   m3lmet_Meas_rebin7_total__1->SetBinContent(2,298.8613);
   m3lmet_Meas_rebin7_total__1->SetBinContent(3,453.7542);
   m3lmet_Meas_rebin7_total__1->SetBinContent(4,517.7002);
   m3lmet_Meas_rebin7_total__1->SetBinContent(5,580.9305);
   m3lmet_Meas_rebin7_total__1->SetBinContent(6,539.8752);
   m3lmet_Meas_rebin7_total__1->SetBinContent(7,881.7401);
   m3lmet_Meas_rebin7_total__1->SetBinError(1,15.01778);
   m3lmet_Meas_rebin7_total__1->SetBinError(2,16.29431);
   m3lmet_Meas_rebin7_total__1->SetBinError(3,15.95534);
   m3lmet_Meas_rebin7_total__1->SetBinError(4,15.92355);
   m3lmet_Meas_rebin7_total__1->SetBinError(5,14.46344);
   m3lmet_Meas_rebin7_total__1->SetBinError(6,15.1366);
   m3lmet_Meas_rebin7_total__1->SetBinError(7,16.09228);
   m3lmet_Meas_rebin7_total__1->SetMinimum(0);
   m3lmet_Meas_rebin7_total__1->SetMaximum(1763.48);
   m3lmet_Meas_rebin7_total__1->SetEntries(15153);
   m3lmet_Meas_rebin7_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin7_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin7_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin7_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin7_stack = new THStack();
   m3lmet_Meas_rebin7_stack->SetName("m3lmet_Meas_rebin7_stack");
   m3lmet_Meas_rebin7_stack->SetTitle("m3lmet_Meas_rebin7");
   Double_t xAxis2[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1F *m3lmet_Meas_rebin7_stack_stack_1 = new TH1F("m3lmet_Meas_rebin7_stack_stack_1","m3lmet_Meas_rebin7",7, xAxis2);
   m3lmet_Meas_rebin7_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin7_stack_stack_1->SetMaximum(925.8271);
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
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->SetHistogram(m3lmet_Meas_rebin7_stack_stack_1);
   
   Double_t xAxis3[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(3,0.2199288);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(4,0.4398576);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(6,0.6597863);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(7,0.2199288);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(3,0.2199288);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(4,0.3110263);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(6,0.3809278);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(7,0.2199288);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
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
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_fakes_VV_stack_1,"");
   Double_t xAxis4[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(1,3.968184);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(2,10.39093);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(3,14.5949);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(4,16.70138);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(5,21.81712);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(6,24.73206);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(7,32.19905);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(1,0.8059132);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(2,1.281443);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(3,1.481887);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(4,1.613534);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(5,1.811813);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(6,1.942598);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(7,2.231725);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
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
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_fakes_TT_stack_2,"");
   Double_t xAxis5[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(1,54.47299);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(2,54.47299);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(3,42.80021);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(4,38.90928);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(5,23.34557);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(6,31.12742);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(7,19.45464);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(1,14.55852);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(2,14.55852);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(3,12.90475);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(4,12.30419);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(5,9.530788);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(6,11.00521);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(7,8.700379);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} (GeV)");
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
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_fakes_DY_stack_3,"");
   Double_t xAxis6[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(1,9.964561);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(2,19.09874);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(3,22.42026);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(4,23.66583);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(5,25.74178);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(6,24.49621);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(7,39.85825);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(1,2.034008);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(2,2.815956);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(3,3.051011);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(4,3.134616);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(5,3.26921);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(6,3.189135);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(7,4.068015);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} (GeV)");
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
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_prompt_ZZ_stack_4,"");
   Double_t xAxis7[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(1,42.97972);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(2,214.8986);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(3,373.7189);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(4,437.9839);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(5,510.0261);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(6,458.8597);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(7,790.0083);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(1,2.965883);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(2,6.631915);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(3,8.745703);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(4,9.467847);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(5,10.21688);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(6,9.690856);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(7,12.71563);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} (GeV)");
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
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin7_stack->Draw("same hist");
   Double_t xAxis8[8] = {0, 170.8822, 197.5202, 222.0591, 246.3826, 280.4007, 326.585, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_total__2 = new TH1D("m3lmet_Meas_rebin7_total__2","dummy",7, xAxis8);
   m3lmet_Meas_rebin7_total__2->SetBinContent(1,111.3855);
   m3lmet_Meas_rebin7_total__2->SetBinContent(2,298.8613);
   m3lmet_Meas_rebin7_total__2->SetBinContent(3,453.7542);
   m3lmet_Meas_rebin7_total__2->SetBinContent(4,517.7002);
   m3lmet_Meas_rebin7_total__2->SetBinContent(5,580.9305);
   m3lmet_Meas_rebin7_total__2->SetBinContent(6,539.8752);
   m3lmet_Meas_rebin7_total__2->SetBinContent(7,881.7401);
   m3lmet_Meas_rebin7_total__2->SetBinError(1,15.01778);
   m3lmet_Meas_rebin7_total__2->SetBinError(2,16.29431);
   m3lmet_Meas_rebin7_total__2->SetBinError(3,15.95534);
   m3lmet_Meas_rebin7_total__2->SetBinError(4,15.92355);
   m3lmet_Meas_rebin7_total__2->SetBinError(5,14.46344);
   m3lmet_Meas_rebin7_total__2->SetBinError(6,15.1366);
   m3lmet_Meas_rebin7_total__2->SetBinError(7,16.09228);
   m3lmet_Meas_rebin7_total__2->SetMinimum(0);
   m3lmet_Meas_rebin7_total__2->SetMaximum(1763.48);
   m3lmet_Meas_rebin7_total__2->SetEntries(15153);
   m3lmet_Meas_rebin7_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin7_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin7_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin7_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetTitleOffset(1);
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
   111.3855,
   298.8613,
   453.7542,
   517.7002,
   580.9305,
   539.8752,
   881.7401};
   Double_t m3lmet_Meas_rebin7_total_errors_felx3001[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fely3001[7] = {
   6.684761,
   26.69587,
   26.37783,
   29.47175,
   38.43136,
   40.04351,
   56.34161};
   Double_t m3lmet_Meas_rebin7_total_errors_fehx3001[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fehy3001[7] = {
   8.50047,
   18.0397,
   27.4752,
   31.91893,
   40.13491,
   37.25186,
   59.58127};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,m3lmet_Meas_rebin7_total_errors_fx3001,m3lmet_Meas_rebin7_total_errors_fy3001,m3lmet_Meas_rebin7_total_errors_felx3001,m3lmet_Meas_rebin7_total_errors_fehx3001,m3lmet_Meas_rebin7_total_errors_fely3001,m3lmet_Meas_rebin7_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin7_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin7_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMinimum(21.03863);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMaximum(1024.983);
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
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin7_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin7_prompt_WZ_stack_5","WZ","F");

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
      tex = new TLatex(0.2813,0.952,"Academic");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0342);
   tex->SetLineWidth(2);
   tex->Draw();
   m3lmet_Meas_rebin7_canvas->Modified();
   m3lmet_Meas_rebin7_canvas->cd();
   m3lmet_Meas_rebin7_canvas->SetSelected(m3lmet_Meas_rebin7_canvas);
}
