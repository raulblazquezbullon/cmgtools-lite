void m3lmet_Meas_rebin12()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin12_canvas/m3lmet_Meas_rebin12
//=========  (Tue Apr  4 21:32:13 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin12_canvas = new TCanvas("m3lmet_Meas_rebin12_canvas", "m3lmet_Meas_rebin12",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin12_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin12_canvas->Range(-115.3846,-218.1207,525.641,1459.731);
   m3lmet_Meas_rebin12_canvas->SetFillColor(0);
   m3lmet_Meas_rebin12_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin12_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin12_canvas->SetTickx(1);
   m3lmet_Meas_rebin12_canvas->SetTicky(1);
   m3lmet_Meas_rebin12_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin12_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin12_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin12_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin12_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin12_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin12_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin12_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[13] = {0, 159.7831, 175.3219, 190.8607, 205.8435, 220.0322, 234.2208, 248.4095, 268.4968, 289.3287, 316.7645, 352.9488, 500}; 
   
   TH1D *m3lmet_Meas_rebin12_total__1 = new TH1D("m3lmet_Meas_rebin12_total__1","dummy",12, xAxis1);
   m3lmet_Meas_rebin12_total__1->SetBinContent(1,57.39685);
   m3lmet_Meas_rebin12_total__1->SetBinContent(2,92.87279);
   m3lmet_Meas_rebin12_total__1->SetBinContent(3,158.9789);
   m3lmet_Meas_rebin12_total__1->SetBinContent(4,243.1284);
   m3lmet_Meas_rebin12_total__1->SetBinContent(5,275.2307);
   m3lmet_Meas_rebin12_total__1->SetBinContent(6,293.9616);
   m3lmet_Meas_rebin12_total__1->SetBinContent(7,297.922);
   m3lmet_Meas_rebin12_total__1->SetBinContent(8,362.997);
   m3lmet_Meas_rebin12_total__1->SetBinContent(9,311.6105);
   m3lmet_Meas_rebin12_total__1->SetBinContent(10,316.0416);
   m3lmet_Meas_rebin12_total__1->SetBinContent(11,294.5768);
   m3lmet_Meas_rebin12_total__1->SetBinContent(12,679.5299);
   m3lmet_Meas_rebin12_total__1->SetBinError(1,13.04688);
   m3lmet_Meas_rebin12_total__1->SetBinError(2,10.98643);
   m3lmet_Meas_rebin12_total__1->SetBinError(3,10.31231);
   m3lmet_Meas_rebin12_total__1->SetBinError(4,13.4828);
   m3lmet_Meas_rebin12_total__1->SetBinError(5,12.59816);
   m3lmet_Meas_rebin12_total__1->SetBinError(6,10.96606);
   m3lmet_Meas_rebin12_total__1->SetBinError(7,12.2082);
   m3lmet_Meas_rebin12_total__1->SetBinError(8,12.78225);
   m3lmet_Meas_rebin12_total__1->SetBinError(9,11.09783);
   m3lmet_Meas_rebin12_total__1->SetBinError(10,10.46711);
   m3lmet_Meas_rebin12_total__1->SetBinError(11,10.98699);
   m3lmet_Meas_rebin12_total__1->SetBinError(12,13.13608);
   m3lmet_Meas_rebin12_total__1->SetMinimum(0);
   m3lmet_Meas_rebin12_total__1->SetMaximum(1359.06);
   m3lmet_Meas_rebin12_total__1->SetEntries(15153);
   m3lmet_Meas_rebin12_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin12_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin12_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin12_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin12_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin12_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin12_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin12_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin12_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin12_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin12_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin12_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin12_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin12_stack = new THStack();
   m3lmet_Meas_rebin12_stack->SetName("m3lmet_Meas_rebin12_stack");
   m3lmet_Meas_rebin12_stack->SetTitle("m3lmet_Meas_rebin12");
   Double_t xAxis2[13] = {0, 159.7831, 175.3219, 190.8607, 205.8435, 220.0322, 234.2208, 248.4095, 268.4968, 289.3287, 316.7645, 352.9488, 500}; 
   
   TH1F *m3lmet_Meas_rebin12_stack_stack_1 = new TH1F("m3lmet_Meas_rebin12_stack_stack_1","m3lmet_Meas_rebin12",12, xAxis2);
   m3lmet_Meas_rebin12_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin12_stack_stack_1->SetMaximum(713.5064);
   m3lmet_Meas_rebin12_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin12_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin12_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin12_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin12_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin12_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin12_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin12_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_stack->SetHistogram(m3lmet_Meas_rebin12_stack_stack_1);
   
   Double_t xAxis3[13] = {0, 159.7831, 175.3219, 190.8607, 205.8435, 220.0322, 234.2208, 248.4095, 268.4968, 289.3287, 316.7645, 352.9488, 500}; 
   
   TH1D *m3lmet_Meas_rebin12_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin12_fakes_VV_stack_1","dummy",12, xAxis3);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinContent(6,0.4398576);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinContent(10,0.4398576);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinContent(11,0.2199288);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinContent(12,0.2199288);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinError(4,0.2199288);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinError(6,0.3110263);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinError(10,0.3110263);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinError(11,0.2199288);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetBinError(12,0.2199288);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin12_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_stack->Add(m3lmet_Meas_rebin12_fakes_VV_stack_1,"");
   Double_t xAxis4[13] = {0, 159.7831, 175.3219, 190.8607, 205.8435, 220.0322, 234.2208, 248.4095, 268.4968, 289.3287, 316.7645, 352.9488, 500}; 
   
   TH1D *m3lmet_Meas_rebin12_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin12_fakes_TT_stack_2","dummy",12, xAxis4);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(1,2.059323);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(2,2.914944);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(3,5.924201);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(4,8.726846);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(5,8.576383);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(6,9.629624);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(7,9.780086);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(8,11.7361);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(9,14.44444);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(10,13.74827);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(11,13.09027);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinContent(12,23.77313);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(1,0.5797134);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(2,0.7007301);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(3,0.9714958);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(4,1.145891);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(5,1.13597);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(6,1.203703);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(7,1.249838);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(8,1.328852);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(9,1.474229);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(10,1.456378);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(11,1.403424);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetBinError(12,1.926865);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin12_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_stack->Add(m3lmet_Meas_rebin12_fakes_TT_stack_2,"");
   Double_t xAxis5[13] = {0, 159.7831, 175.3219, 190.8607, 205.8435, 220.0322, 234.2208, 248.4095, 268.4968, 289.3287, 316.7645, 352.9488, 500}; 
   
   TH1D *m3lmet_Meas_rebin12_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin12_fakes_DY_stack_3","dummy",12, xAxis5);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(1,42.80021);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(2,27.23649);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(3,19.45464);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(4,35.01835);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(5,27.23649);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(6,15.56371);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(7,23.34557);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(8,23.34557);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(9,15.56371);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(10,11.67278);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(11,15.56371);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinContent(12,7.781856);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(1,12.90475);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(2,10.29443);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(3,8.700379);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(4,11.67278);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(5,10.29443);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(6,7.781856);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(7,9.530788);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(8,9.530788);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(9,7.781856);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(10,6.739285);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(11,7.781856);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetBinError(12,5.502603);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin12_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_stack->Add(m3lmet_Meas_rebin12_fakes_DY_stack_3,"");
   Double_t xAxis6[13] = {0, 159.7831, 175.3219, 190.8607, 205.8435, 220.0322, 234.2208, 248.4095, 268.4968, 289.3287, 316.7645, 352.9488, 500}; 
   
   TH1D *m3lmet_Meas_rebin12_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin12_prompt_ZZ_stack_4","dummy",12, xAxis6);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(1,3.736711);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(2,6.643041);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(3,11.21013);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(4,16.19241);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(5,11.62532);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(6,15.36203);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(7,11.62532);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(8,17.43798);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(9,13.28608);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(10,12.04051);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(11,17.85317);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinContent(12,28.23292);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(1,1.24557);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(2,1.66076);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(3,2.157391);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(4,2.592861);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(5,2.196979);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(6,2.525503);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(7,2.196979);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(8,2.690739);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(9,2.34867);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(10,2.235867);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(11,2.722583);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetBinError(12,3.423745);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_stack->Add(m3lmet_Meas_rebin12_prompt_ZZ_stack_4,"");
   Double_t xAxis7[13] = {0, 159.7831, 175.3219, 190.8607, 205.8435, 220.0322, 234.2208, 248.4095, 268.4968, 289.3287, 316.7645, 352.9488, 500}; 
   
   TH1D *m3lmet_Meas_rebin12_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin12_prompt_WZ_stack_5","dummy",12, xAxis7);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(1,8.80061);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(2,56.07831);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(3,122.3899);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(4,182.9708);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(5,227.7925);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(6,252.9664);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(7,253.171);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(8,310.4773);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(9,268.3163);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(10,278.1402);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(11,247.8497);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinContent(12,619.522);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(1,1.34208);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(2,3.387814);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(3,5.004894);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(4,6.11946);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(5,6.827975);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(6,7.195377);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(7,7.198287);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(8,7.971446);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(9,7.410469);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(10,7.54491);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(11,7.122237);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetBinError(12,11.26031);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin12_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_stack->Add(m3lmet_Meas_rebin12_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin12_stack->Draw("same hist");
   Double_t xAxis8[13] = {0, 159.7831, 175.3219, 190.8607, 205.8435, 220.0322, 234.2208, 248.4095, 268.4968, 289.3287, 316.7645, 352.9488, 500}; 
   
   TH1D *m3lmet_Meas_rebin12_total__2 = new TH1D("m3lmet_Meas_rebin12_total__2","dummy",12, xAxis8);
   m3lmet_Meas_rebin12_total__2->SetBinContent(1,57.39685);
   m3lmet_Meas_rebin12_total__2->SetBinContent(2,92.87279);
   m3lmet_Meas_rebin12_total__2->SetBinContent(3,158.9789);
   m3lmet_Meas_rebin12_total__2->SetBinContent(4,243.1284);
   m3lmet_Meas_rebin12_total__2->SetBinContent(5,275.2307);
   m3lmet_Meas_rebin12_total__2->SetBinContent(6,293.9616);
   m3lmet_Meas_rebin12_total__2->SetBinContent(7,297.922);
   m3lmet_Meas_rebin12_total__2->SetBinContent(8,362.997);
   m3lmet_Meas_rebin12_total__2->SetBinContent(9,311.6105);
   m3lmet_Meas_rebin12_total__2->SetBinContent(10,316.0416);
   m3lmet_Meas_rebin12_total__2->SetBinContent(11,294.5768);
   m3lmet_Meas_rebin12_total__2->SetBinContent(12,679.5299);
   m3lmet_Meas_rebin12_total__2->SetBinError(1,13.04688);
   m3lmet_Meas_rebin12_total__2->SetBinError(2,10.98643);
   m3lmet_Meas_rebin12_total__2->SetBinError(3,10.31231);
   m3lmet_Meas_rebin12_total__2->SetBinError(4,13.4828);
   m3lmet_Meas_rebin12_total__2->SetBinError(5,12.59816);
   m3lmet_Meas_rebin12_total__2->SetBinError(6,10.96606);
   m3lmet_Meas_rebin12_total__2->SetBinError(7,12.2082);
   m3lmet_Meas_rebin12_total__2->SetBinError(8,12.78225);
   m3lmet_Meas_rebin12_total__2->SetBinError(9,11.09783);
   m3lmet_Meas_rebin12_total__2->SetBinError(10,10.46711);
   m3lmet_Meas_rebin12_total__2->SetBinError(11,10.98699);
   m3lmet_Meas_rebin12_total__2->SetBinError(12,13.13608);
   m3lmet_Meas_rebin12_total__2->SetMinimum(0);
   m3lmet_Meas_rebin12_total__2->SetMaximum(1359.06);
   m3lmet_Meas_rebin12_total__2->SetEntries(15153);
   m3lmet_Meas_rebin12_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin12_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin12_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin12_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin12_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin12_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin12_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin12_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin12_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin12_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin12_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin12_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin12_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin12_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin12_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin12_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin12_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin12_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin12_total_errors_fx3001[12] = {
   79.89155,
   167.5525,
   183.0913,
   198.3521,
   212.9379,
   227.1265,
   241.3152,
   258.4531,
   278.9127,
   303.0466,
   334.8567,
   426.4744};
   Double_t m3lmet_Meas_rebin12_total_errors_fy3001[12] = {
   57.39685,
   92.87279,
   158.9789,
   243.1284,
   275.2307,
   293.9616,
   297.922,
   362.997,
   311.6105,
   316.0416,
   294.5768,
   679.5299};
   Double_t m3lmet_Meas_rebin12_total_errors_felx3001[12] = {
   79.89155,
   7.769409,
   7.769417,
   7.491386,
   7.09433,
   7.09433,
   7.09433,
   10.04363,
   10.41597,
   13.71791,
   18.09213,
   73.5256};
   Double_t m3lmet_Meas_rebin12_total_errors_fely3001[12] = {
   10.75678,
   5.304075,
   18.88879,
   19.23208,
   16.97662,
   16.75372,
   16.93609,
   27.36603,
   22.20524,
   22.05548,
   18.7865,
   43.66645};
   Double_t m3lmet_Meas_rebin12_total_errors_fehx3001[12] = {
   79.89155,
   7.769409,
   7.769417,
   7.491386,
   7.09433,
   7.09433,
   7.09433,
   10.04363,
   10.41597,
   13.71791,
   18.09213,
   73.5256};
   Double_t m3lmet_Meas_rebin12_total_errors_fehy3001[12] = {
   3.469709,
   6.07014,
   9.607962,
   14.69664,
   18.21763,
   20.31604,
   19.4577,
   21.92346,
   19.86543,
   27.82433,
   18.04779,
   48.90183};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,m3lmet_Meas_rebin12_total_errors_fx3001,m3lmet_Meas_rebin12_total_errors_fy3001,m3lmet_Meas_rebin12_total_errors_felx3001,m3lmet_Meas_rebin12_total_errors_fehx3001,m3lmet_Meas_rebin12_total_errors_fely3001,m3lmet_Meas_rebin12_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin12_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin12_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin12_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin12_total_errors3001->SetMinimum(41.97606);
   Graph_m3lmet_Meas_rebin12_total_errors3001->SetMaximum(796.6109);
   Graph_m3lmet_Meas_rebin12_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin12_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin12_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin12_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin12_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin12_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin12_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin12_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin12_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin12_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin12_total_errors","Total unc.","F");

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
   m3lmet_Meas_rebin12_canvas->Modified();
   m3lmet_Meas_rebin12_canvas->cd();
   m3lmet_Meas_rebin12_canvas->SetSelected(m3lmet_Meas_rebin12_canvas);
}
