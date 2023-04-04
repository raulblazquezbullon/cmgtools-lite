void m3l_rebin11()
{
//=========Macro generated from canvas: m3l_rebin11_canvas/m3l_rebin11
//=========  (Tue Apr  4 21:27:34 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin11_canvas = new TCanvas("m3l_rebin11_canvas", "m3l_rebin11",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin11_canvas->SetHighLightColor(2);
   m3l_rebin11_canvas->Range(-115.3846,-167.046,525.641,1117.923);
   m3l_rebin11_canvas->SetFillColor(0);
   m3l_rebin11_canvas->SetBorderMode(0);
   m3l_rebin11_canvas->SetBorderSize(2);
   m3l_rebin11_canvas->SetTickx(1);
   m3l_rebin11_canvas->SetTicky(1);
   m3l_rebin11_canvas->SetLeftMargin(0.18);
   m3l_rebin11_canvas->SetRightMargin(0.04);
   m3l_rebin11_canvas->SetTopMargin(0.06);
   m3l_rebin11_canvas->SetBottomMargin(0.13);
   m3l_rebin11_canvas->SetFrameFillStyle(0);
   m3l_rebin11_canvas->SetFrameBorderMode(0);
   m3l_rebin11_canvas->SetFrameFillStyle(0);
   m3l_rebin11_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[12] = {0, 111.3649, 122.7298, 134.0947, 145.4595, 158.8766, 173.6591, 188.4416, 205.971, 233.3484, 275.6837, 500}; 
   
   TH1D *m3l_rebin11_total__1 = new TH1D("m3l_rebin11_total__1","dummy",11, xAxis1);
   m3l_rebin11_total__1->SetBinContent(1,37.67543);
   m3l_rebin11_total__1->SetBinContent(2,152.4817);
   m3l_rebin11_total__1->SetBinContent(3,301.037);
   m3l_rebin11_total__1->SetBinContent(4,316.8086);
   m3l_rebin11_total__1->SetBinContent(5,374.7744);
   m3l_rebin11_total__1->SetBinContent(6,383.7313);
   m3l_rebin11_total__1->SetBinContent(7,320.5761);
   m3l_rebin11_total__1->SetBinContent(8,304.2197);
   m3l_rebin11_total__1->SetBinContent(9,336.1184);
   m3l_rebin11_total__1->SetBinContent(10,336.4121);
   m3l_rebin11_total__1->SetBinContent(11,520.4125);
   m3l_rebin11_total__1->SetBinError(1,6.054717);
   m3l_rebin11_total__1->SetBinError(2,9.506444);
   m3l_rebin11_total__1->SetBinError(3,17.16773);
   m3l_rebin11_total__1->SetBinError(4,11.22448);
   m3l_rebin11_total__1->SetBinError(5,14.92941);
   m3l_rebin11_total__1->SetBinError(6,14.51592);
   m3l_rebin11_total__1->SetBinError(7,11.82903);
   m3l_rebin11_total__1->SetBinError(8,11.63836);
   m3l_rebin11_total__1->SetBinError(9,12.55128);
   m3l_rebin11_total__1->SetBinError(10,11.95357);
   m3l_rebin11_total__1->SetBinError(11,11.80207);
   m3l_rebin11_total__1->SetMinimum(0);
   m3l_rebin11_total__1->SetMaximum(1040.825);
   m3l_rebin11_total__1->SetEntries(15153);
   m3l_rebin11_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin11_total__1->SetFillColor(ci);
   m3l_rebin11_total__1->SetMarkerStyle(20);
   m3l_rebin11_total__1->SetMarkerSize(1.1);
   m3l_rebin11_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin11_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin11_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin11_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin11_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin11_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin11_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin11_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin11_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin11_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin11_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin11_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin11_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin11_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin11_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin11_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin11_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin11_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin11_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin11_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin11_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin11_total__1->Draw("HIST");
   
   THStack *m3l_rebin11_stack = new THStack();
   m3l_rebin11_stack->SetName("m3l_rebin11_stack");
   m3l_rebin11_stack->SetTitle("m3l_rebin11");
   Double_t xAxis2[12] = {0, 111.3649, 122.7298, 134.0947, 145.4595, 158.8766, 173.6591, 188.4416, 205.971, 233.3484, 275.6837, 500}; 
   
   TH1F *m3l_rebin11_stack_stack_1 = new TH1F("m3l_rebin11_stack_stack_1","m3l_rebin11",11, xAxis2);
   m3l_rebin11_stack_stack_1->SetMinimum(0);
   m3l_rebin11_stack_stack_1->SetMaximum(546.4331);
   m3l_rebin11_stack_stack_1->SetDirectory(0);
   m3l_rebin11_stack_stack_1->SetStats(0);
   m3l_rebin11_stack_stack_1->SetLineStyle(0);
   m3l_rebin11_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin11_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin11_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin11_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin11_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin11_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin11_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin11_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin11_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin11_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin11_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin11_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin11_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin11_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin11_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin11_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin11_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin11_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin11_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin11_stack->SetHistogram(m3l_rebin11_stack_stack_1);
   
   Double_t xAxis3[12] = {0, 111.3649, 122.7298, 134.0947, 145.4595, 158.8766, 173.6591, 188.4416, 205.971, 233.3484, 275.6837, 500}; 
   
   TH1D *m3l_rebin11_fakes_VV_stack_1 = new TH1D("m3l_rebin11_fakes_VV_stack_1","dummy",11, xAxis3);
   m3l_rebin11_fakes_VV_stack_1->SetBinContent(1,0.4398576);
   m3l_rebin11_fakes_VV_stack_1->SetBinContent(6,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetBinContent(8,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetBinContent(9,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetBinContent(10,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetBinContent(11,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetBinError(1,0.3110263);
   m3l_rebin11_fakes_VV_stack_1->SetBinError(6,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetBinError(8,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetBinError(9,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetBinError(10,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetBinError(11,0.2199288);
   m3l_rebin11_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin11_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin11_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin11_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin11_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin11_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin11_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin11_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin11_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin11_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin11_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin11_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin11_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin11_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin11_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin11_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin11_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin11_stack->Add(m3l_rebin11_fakes_VV_stack_1,"");
   Double_t xAxis4[12] = {0, 111.3649, 122.7298, 134.0947, 145.4595, 158.8766, 173.6591, 188.4416, 205.971, 233.3484, 275.6837, 500}; 
   
   TH1D *m3l_rebin11_fakes_TT_stack_2 = new TH1D("m3l_rebin11_fakes_TT_stack_2","dummy",11, xAxis4);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(1,2.209786);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(2,7.42883);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(3,9.281541);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(4,13.3912);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(5,13.69212);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(6,15.64814);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(7,10.08101);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(8,11.58564);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(9,12.2908);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(10,14.65105);
   m3l_rebin11_fakes_TT_stack_2->SetBinContent(11,14.14351);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(1,0.5989213);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(2,1.102485);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(3,1.192788);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(4,1.435324);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(5,1.435324);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(6,1.534426);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(7,1.231592);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(8,1.320306);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(9,1.369498);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(10,1.502288);
   m3l_rebin11_fakes_TT_stack_2->SetBinError(11,1.504629);
   m3l_rebin11_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin11_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin11_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin11_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin11_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin11_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin11_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin11_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin11_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin11_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin11_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin11_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin11_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin11_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin11_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin11_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin11_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin11_stack->Add(m3l_rebin11_fakes_TT_stack_2,"");
   Double_t xAxis5[12] = {0, 111.3649, 122.7298, 134.0947, 145.4595, 158.8766, 173.6591, 188.4416, 205.971, 233.3484, 275.6837, 500}; 
   
   TH1D *m3l_rebin11_fakes_DY_stack_3 = new TH1D("m3l_rebin11_fakes_DY_stack_3","dummy",11, xAxis5);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(1,7.781856);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(2,15.56371);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(3,62.25484);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(4,15.56371);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(5,38.90928);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(6,35.01835);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(7,19.45464);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(8,19.45464);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(9,23.34557);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(10,19.45464);
   m3l_rebin11_fakes_DY_stack_3->SetBinContent(11,7.781856);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(1,5.502603);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(2,7.781856);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(3,15.56371);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(4,7.781856);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(5,12.30419);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(6,11.67278);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(7,8.700379);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(8,8.700379);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(9,9.530788);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(10,8.700379);
   m3l_rebin11_fakes_DY_stack_3->SetBinError(11,5.502603);
   m3l_rebin11_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin11_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin11_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin11_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin11_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin11_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin11_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin11_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin11_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin11_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin11_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin11_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin11_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin11_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin11_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin11_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin11_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin11_stack->Add(m3l_rebin11_fakes_DY_stack_3,"");
   Double_t xAxis6[12] = {0, 111.3649, 122.7298, 134.0947, 145.4595, 158.8766, 173.6591, 188.4416, 205.971, 233.3484, 275.6837, 500}; 
   
   TH1D *m3l_rebin11_prompt_ZZ_stack_4 = new TH1D("m3l_rebin11_prompt_ZZ_stack_4","dummy",11, xAxis6);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(1,1.66076);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(2,9.964561);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(3,19.51393);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(4,21.17469);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(5,16.6076);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(6,18.68355);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(7,14.94684);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(8,9.964561);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(9,15.77722);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(10,14.53165);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinContent(11,22.42026);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(1,0.8303801);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(2,2.034008);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(3,2.8464);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(4,2.96505);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(5,2.625892);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(6,2.78518);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(7,2.49114);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(8,2.034008);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(9,2.559403);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(10,2.456297);
   m3l_rebin11_prompt_ZZ_stack_4->SetBinError(11,3.051011);
   m3l_rebin11_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin11_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin11_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin11_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin11_stack->Add(m3l_rebin11_prompt_ZZ_stack_4,"");
   Double_t xAxis7[12] = {0, 111.3649, 122.7298, 134.0947, 145.4595, 158.8766, 173.6591, 188.4416, 205.971, 233.3484, 275.6837, 500}; 
   
   TH1D *m3l_rebin11_prompt_WZ_stack_5 = new TH1D("m3l_rebin11_prompt_WZ_stack_5","dummy",11, xAxis7);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(1,25.58317);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(2,119.5246);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(3,209.9867);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(4,266.679);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(5,305.5654);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(6,314.1613);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(7,276.0936);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(8,262.995);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(9,284.4848);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(10,287.5548);
   m3l_rebin11_prompt_WZ_stack_5->SetBinContent(11,475.8469);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(1,2.288228);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(2,4.945962);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(3,6.555684);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(4,7.387824);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(5,7.908138);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(6,8.018599);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(7,7.5171);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(8,7.336618);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(9,7.630478);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(10,7.671539);
   m3l_rebin11_prompt_WZ_stack_5->SetBinError(11,9.868606);
   m3l_rebin11_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin11_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin11_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin11_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin11_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin11_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin11_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin11_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin11_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin11_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin11_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin11_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin11_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin11_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin11_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin11_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin11_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin11_stack->Add(m3l_rebin11_prompt_WZ_stack_5,"");
   m3l_rebin11_stack->Draw("same hist");
   Double_t xAxis8[12] = {0, 111.3649, 122.7298, 134.0947, 145.4595, 158.8766, 173.6591, 188.4416, 205.971, 233.3484, 275.6837, 500}; 
   
   TH1D *m3l_rebin11_total__2 = new TH1D("m3l_rebin11_total__2","dummy",11, xAxis8);
   m3l_rebin11_total__2->SetBinContent(1,37.67543);
   m3l_rebin11_total__2->SetBinContent(2,152.4817);
   m3l_rebin11_total__2->SetBinContent(3,301.037);
   m3l_rebin11_total__2->SetBinContent(4,316.8086);
   m3l_rebin11_total__2->SetBinContent(5,374.7744);
   m3l_rebin11_total__2->SetBinContent(6,383.7313);
   m3l_rebin11_total__2->SetBinContent(7,320.5761);
   m3l_rebin11_total__2->SetBinContent(8,304.2197);
   m3l_rebin11_total__2->SetBinContent(9,336.1184);
   m3l_rebin11_total__2->SetBinContent(10,336.4121);
   m3l_rebin11_total__2->SetBinContent(11,520.4125);
   m3l_rebin11_total__2->SetBinError(1,6.054717);
   m3l_rebin11_total__2->SetBinError(2,9.506444);
   m3l_rebin11_total__2->SetBinError(3,17.16773);
   m3l_rebin11_total__2->SetBinError(4,11.22448);
   m3l_rebin11_total__2->SetBinError(5,14.92941);
   m3l_rebin11_total__2->SetBinError(6,14.51592);
   m3l_rebin11_total__2->SetBinError(7,11.82903);
   m3l_rebin11_total__2->SetBinError(8,11.63836);
   m3l_rebin11_total__2->SetBinError(9,12.55128);
   m3l_rebin11_total__2->SetBinError(10,11.95357);
   m3l_rebin11_total__2->SetBinError(11,11.80207);
   m3l_rebin11_total__2->SetMinimum(0);
   m3l_rebin11_total__2->SetMaximum(1040.825);
   m3l_rebin11_total__2->SetEntries(15153);
   m3l_rebin11_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin11_total__2->SetFillColor(ci);
   m3l_rebin11_total__2->SetMarkerStyle(20);
   m3l_rebin11_total__2->SetMarkerSize(1.1);
   m3l_rebin11_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin11_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin11_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin11_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin11_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin11_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin11_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin11_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin11_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin11_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin11_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin11_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin11_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin11_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin11_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin11_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin11_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin11_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin11_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin11_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin11_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin11_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin11_total_errors_fx3001[11] = {
   55.68244,
   117.0473,
   128.4122,
   139.7771,
   152.1681,
   166.2679,
   181.0503,
   197.2063,
   219.6597,
   254.516,
   387.8418};
   Double_t m3l_rebin11_total_errors_fy3001[11] = {
   37.67543,
   152.4817,
   301.037,
   316.8086,
   374.7744,
   383.7313,
   320.5761,
   304.2197,
   336.1184,
   336.4121,
   520.4125};
   Double_t m3l_rebin11_total_errors_felx3001[11] = {
   55.68244,
   5.682442,
   5.682442,
   5.682442,
   6.708549,
   7.391228,
   7.391235,
   8.764702,
   13.68871,
   21.16763,
   112.1582};
   Double_t m3l_rebin11_total_errors_fely3001[11] = {
   2.161251,
   8.860231,
   23.89044,
   21.15297,
   27.84449,
   23.77989,
   19.12023,
   18.05393,
   19.89557,
   21.35751,
   31.06365};
   Double_t m3l_rebin11_total_errors_fehx3001[11] = {
   55.68244,
   5.682442,
   5.682442,
   5.682442,
   6.708549,
   7.391228,
   7.391235,
   8.764702,
   13.68871,
   21.16763,
   112.1582};
   Double_t m3l_rebin11_total_errors_fehy3001[11] = {
   2.421352,
   10.27662,
   19.54313,
   20.21475,
   23.36418,
   23.8465,
   19.59265,
   18.83845,
   23.42709,
   21.16394,
   32.93992};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,m3l_rebin11_total_errors_fx3001,m3l_rebin11_total_errors_fy3001,m3l_rebin11_total_errors_felx3001,m3l_rebin11_total_errors_fehx3001,m3l_rebin11_total_errors_fely3001,m3l_rebin11_total_errors_fehy3001);
   grae->SetName("m3l_rebin11_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin11_total_errors3001 = new TH1F("Graph_m3l_rebin11_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin11_total_errors3001->SetMinimum(31.96276);
   Graph_m3l_rebin11_total_errors3001->SetMaximum(605.1362);
   Graph_m3l_rebin11_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin11_total_errors3001->SetStats(0);
   Graph_m3l_rebin11_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin11_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin11_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin11_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin11_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin11_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin11_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin11_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin11_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin11_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin11_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin11_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin11_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin11_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin11_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin11_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin11_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin11_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin11_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin11_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin11_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin11_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin11_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin11_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin11_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin11_total_errors","Total unc.","F");

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
   m3l_rebin11_canvas->Modified();
   m3l_rebin11_canvas->cd();
   m3l_rebin11_canvas->SetSelected(m3l_rebin11_canvas);
}
