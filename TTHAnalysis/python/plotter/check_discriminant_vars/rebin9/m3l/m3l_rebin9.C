void m3l_rebin9()
{
//=========Macro generated from canvas: m3l_rebin9_canvas/m3l_rebin9
//=========  (Sat May  6 19:56:45 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin9_canvas = new TCanvas("m3l_rebin9_canvas", "m3l_rebin9",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin9_canvas->SetHighLightColor(2);
   m3l_rebin9_canvas->Range(-115.3846,-198.6627,525.641,1329.512);
   m3l_rebin9_canvas->SetFillColor(0);
   m3l_rebin9_canvas->SetBorderMode(0);
   m3l_rebin9_canvas->SetBorderSize(2);
   m3l_rebin9_canvas->SetTickx(1);
   m3l_rebin9_canvas->SetTicky(1);
   m3l_rebin9_canvas->SetLeftMargin(0.18);
   m3l_rebin9_canvas->SetRightMargin(0.04);
   m3l_rebin9_canvas->SetTopMargin(0.06);
   m3l_rebin9_canvas->SetBottomMargin(0.13);
   m3l_rebin9_canvas->SetFrameFillStyle(0);
   m3l_rebin9_canvas->SetFrameBorderMode(0);
   m3l_rebin9_canvas->SetFrameFillStyle(0);
   m3l_rebin9_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_total__1 = new TH1D("m3l_rebin9_total__1","dummy",9, xAxis1);
   m3l_rebin9_total__1->SetBinContent(1,58.26532);
   m3l_rebin9_total__1->SetBinContent(2,234.8955);
   m3l_rebin9_total__1->SetBinContent(3,406.2121);
   m3l_rebin9_total__1->SetBinContent(4,443.6519);
   m3l_rebin9_total__1->SetBinContent(5,456.0361);
   m3l_rebin9_total__1->SetBinContent(6,367.4111);
   m3l_rebin9_total__1->SetBinContent(7,429.8956);
   m3l_rebin9_total__1->SetBinContent(8,368.9686);
   m3l_rebin9_total__1->SetBinContent(9,618.9108);
   m3l_rebin9_total__1->SetBinError(1,7.426138);
   m3l_rebin9_total__1->SetBinError(2,11.73178);
   m3l_rebin9_total__1->SetBinError(3,17.39804);
   m3l_rebin9_total__1->SetBinError(4,16.33039);
   m3l_rebin9_total__1->SetBinError(5,15.04383);
   m3l_rebin9_total__1->SetBinError(6,12.22229);
   m3l_rebin9_total__1->SetBinError(7,15.76926);
   m3l_rebin9_total__1->SetBinError(8,10.33705);
   m3l_rebin9_total__1->SetBinError(9,14.24985);
   m3l_rebin9_total__1->SetMinimum(0);
   m3l_rebin9_total__1->SetMaximum(1237.822);
   m3l_rebin9_total__1->SetEntries(15153);
   m3l_rebin9_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_total__1->SetFillColor(ci);
   m3l_rebin9_total__1->SetMarkerStyle(20);
   m3l_rebin9_total__1->SetMarkerSize(1.1);
   m3l_rebin9_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin9_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin9_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin9_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->Draw("HIST");
   
   THStack *m3l_rebin9_stack = new THStack();
   m3l_rebin9_stack->SetName("m3l_rebin9_stack");
   m3l_rebin9_stack->SetTitle("m3l_rebin9");
   Double_t xAxis2[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1F *m3l_rebin9_stack_stack_1 = new TH1F("m3l_rebin9_stack_stack_1","m3l_rebin9",9, xAxis2);
   m3l_rebin9_stack_stack_1->SetMinimum(0);
   m3l_rebin9_stack_stack_1->SetMaximum(649.8563);
   m3l_rebin9_stack_stack_1->SetDirectory(0);
   m3l_rebin9_stack_stack_1->SetStats(0);
   m3l_rebin9_stack_stack_1->SetLineStyle(0);
   m3l_rebin9_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->SetHistogram(m3l_rebin9_stack_stack_1);
   
   Double_t xAxis3[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_fakes_VV_stack_1 = new TH1D("m3l_rebin9_fakes_VV_stack_1","dummy",9, xAxis3);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(1,0.4398576);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(5,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(6,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(7,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(8,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(9,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(1,0.3110263);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(5,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(6,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(7,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(8,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(9,0.2199288);
   m3l_rebin9_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin9_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin9_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin9_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_fakes_TT_stack_2 = new TH1D("m3l_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(1,3.968184);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(2,9.281541);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(3,13.4945);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(4,17.60416);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(5,18.50693);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(6,12.48842);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(7,14.54774);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(8,17.70746);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(9,16.80468);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(1,0.8059132);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(2,1.211619);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(3,1.449798);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(4,1.627505);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(5,1.668714);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(6,1.370782);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(7,1.488325);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(8,1.640284);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(9,1.640284);
   m3l_rebin9_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin9_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin9_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin9_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_fakes_DY_stack_3 = new TH1D("m3l_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(1,11.67278);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(2,23.34557);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(3,58.36392);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(4,46.69113);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(5,35.01835);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(6,19.45464);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(7,42.80021);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(8,7.781856);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(9,19.45464);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(1,6.739285);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(2,9.530788);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(3,15.0695);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(4,13.47857);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(5,11.67278);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(6,8.700379);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(7,12.90475);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(8,5.502603);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(9,8.700379);
   m3l_rebin9_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin9_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin9_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin9_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_prompt_ZZ_stack_4 = new TH1D("m3l_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(1,1.66076);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(2,18.68355);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(3,24.08102);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(4,22.42026);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(5,23.25064);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(6,14.94684);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(7,17.43798);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(8,17.02279);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(9,25.74178);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(1,0.8303801);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(2,2.78518);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(3,3.161993);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(4,3.051011);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(5,3.106998);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(6,2.49114);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(7,2.690739);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(8,2.658514);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(9,3.26921);
   m3l_rebin9_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin9_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin9_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin9_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_prompt_WZ_stack_5 = new TH1D("m3l_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(1,40.52374);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(2,183.5848);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(3,310.2727);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(4,356.9364);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(5,379.0402);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(6,320.3013);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(7,354.8897);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(8,326.2366);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(9,556.6898);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(1,2.879897);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(2,6.129719);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(3,7.968818);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(4,8.547076);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(5,8.807747);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(6,8.096578);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(7,8.522537);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(8,8.17125);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(9,10.67404);
   m3l_rebin9_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin9_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin9_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_prompt_WZ_stack_5,"");
   m3l_rebin9_stack->Draw("same hist");
   Double_t xAxis8[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_total__2 = new TH1D("m3l_rebin9_total__2","dummy",9, xAxis8);
   m3l_rebin9_total__2->SetBinContent(1,58.26532);
   m3l_rebin9_total__2->SetBinContent(2,234.8955);
   m3l_rebin9_total__2->SetBinContent(3,406.2121);
   m3l_rebin9_total__2->SetBinContent(4,443.6519);
   m3l_rebin9_total__2->SetBinContent(5,456.0361);
   m3l_rebin9_total__2->SetBinContent(6,367.4111);
   m3l_rebin9_total__2->SetBinContent(7,429.8956);
   m3l_rebin9_total__2->SetBinContent(8,368.9686);
   m3l_rebin9_total__2->SetBinContent(9,618.9108);
   m3l_rebin9_total__2->SetBinError(1,7.426138);
   m3l_rebin9_total__2->SetBinError(2,11.73178);
   m3l_rebin9_total__2->SetBinError(3,17.39804);
   m3l_rebin9_total__2->SetBinError(4,16.33039);
   m3l_rebin9_total__2->SetBinError(5,15.04383);
   m3l_rebin9_total__2->SetBinError(6,12.22229);
   m3l_rebin9_total__2->SetBinError(7,15.76926);
   m3l_rebin9_total__2->SetBinError(8,10.33705);
   m3l_rebin9_total__2->SetBinError(9,14.24985);
   m3l_rebin9_total__2->SetMinimum(0);
   m3l_rebin9_total__2->SetMaximum(1237.822);
   m3l_rebin9_total__2->SetEntries(15153);
   m3l_rebin9_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_total__2->SetFillColor(ci);
   m3l_rebin9_total__2->SetMarkerStyle(20);
   m3l_rebin9_total__2->SetMarkerSize(1.1);
   m3l_rebin9_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin9_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin9_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin9_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin9_total_errors_fx3001[9] = {
   56.93814,
   120.8144,
   134.6907,
   149.3948,
   166.1852,
   184.2343,
   207.1007,
   240.76,
   380.2888};
   Double_t m3l_rebin9_total_errors_fy3001[9] = {
   58.26532,
   234.8955,
   406.2121,
   443.6519,
   456.0361,
   367.4111,
   429.8956,
   368.9686,
   618.9108};
   Double_t m3l_rebin9_total_errors_felx3001[9] = {
   56.93814,
   6.938148,
   6.938145,
   7.765884,
   9.024551,
   9.024544,
   13.84183,
   19.81753,
   119.7112};
   Double_t m3l_rebin9_total_errors_fely3001[9] = {
   3.34779,
   13.68293,
   33.34969,
   32.02128,
   27.89321,
   21.82474,
   25.50573,
   22.76343,
   37.44353};
   Double_t m3l_rebin9_total_errors_fehx3001[9] = {
   56.93814,
   6.938148,
   6.938145,
   7.765884,
   9.024551,
   9.024544,
   13.84183,
   19.81753,
   119.7112};
   Double_t m3l_rebin9_total_errors_fehy3001[9] = {
   3.525398,
   17.54048,
   25.27553,
   27.90968,
   28.23857,
   22.49211,
   27.89714,
   24.10547,
   39.09012};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,m3l_rebin9_total_errors_fx3001,m3l_rebin9_total_errors_fy3001,m3l_rebin9_total_errors_felx3001,m3l_rebin9_total_errors_fehx3001,m3l_rebin9_total_errors_fely3001,m3l_rebin9_total_errors_fehy3001);
   grae->SetName("m3l_rebin9_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin9_total_errors3001 = new TH1F("Graph_m3l_rebin9_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin9_total_errors3001->SetMinimum(49.42578);
   Graph_m3l_rebin9_total_errors3001->SetMaximum(718.3093);
   Graph_m3l_rebin9_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin9_total_errors3001->SetStats(0);
   Graph_m3l_rebin9_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin9_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin9_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin9_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin9_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin9_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin9_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin9_total_errors","Total unc.","F");
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
   m3l_rebin9_canvas->Modified();
   m3l_rebin9_canvas->cd();
   m3l_rebin9_canvas->SetSelected(m3l_rebin9_canvas);
}
