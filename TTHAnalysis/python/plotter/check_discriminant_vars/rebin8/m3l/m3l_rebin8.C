void m3l_rebin8()
{
//=========Macro generated from canvas: m3l_rebin8_canvas/m3l_rebin8
//=========  (Tue Apr  4 18:54:27 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin8_canvas = new TCanvas("m3l_rebin8_canvas", "m3l_rebin8",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin8_canvas->SetHighLightColor(2);
   m3l_rebin8_canvas->Range(-115.3846,-220.8294,525.641,1477.858);
   m3l_rebin8_canvas->SetFillColor(0);
   m3l_rebin8_canvas->SetBorderMode(0);
   m3l_rebin8_canvas->SetBorderSize(2);
   m3l_rebin8_canvas->SetTickx(1);
   m3l_rebin8_canvas->SetTicky(1);
   m3l_rebin8_canvas->SetLeftMargin(0.18);
   m3l_rebin8_canvas->SetRightMargin(0.04);
   m3l_rebin8_canvas->SetTopMargin(0.06);
   m3l_rebin8_canvas->SetBottomMargin(0.13);
   m3l_rebin8_canvas->SetFrameFillStyle(0);
   m3l_rebin8_canvas->SetFrameBorderMode(0);
   m3l_rebin8_canvas->SetFrameFillStyle(0);
   m3l_rebin8_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[9] = {0, 115.6267, 131.2534, 146.8802, 166.2679, 186.5938, 212.8153, 251.0998, 500}; 
   
   TH1D *m3l_rebin8_total__1 = new TH1D("m3l_rebin8_total__1","dummy",8, xAxis1);
   m3l_rebin8_total__1->SetBinContent(1,73.60308);
   m3l_rebin8_total__1->SetBinContent(2,329.0641);
   m3l_rebin8_total__1->SetBinContent(3,453.6966);
   m3l_rebin8_total__1->SetBinContent(4,530.2355);
   m3l_rebin8_total__1->SetBinContent(5,459.6503);
   m3l_rebin8_total__1->SetBinContent(6,449.5047);
   m3l_rebin8_total__1->SetBinContent(7,400.5241);
   m3l_rebin8_total__1->SetBinContent(8,687.9686);
   m3l_rebin8_total__1->SetBinError(1,7.632432);
   m3l_rebin8_total__1->SetBinError(2,16.51949);
   m3l_rebin8_total__1->SetBinError(3,16.42631);
   m3l_rebin8_total__1->SetBinError(4,17.28809);
   m3l_rebin8_total__1->SetBinError(5,13.57096);
   m3l_rebin8_total__1->SetBinError(6,15.4351);
   m3l_rebin8_total__1->SetBinError(7,12.50977);
   m3l_rebin8_total__1->SetBinError(8,14.75407);
   m3l_rebin8_total__1->SetMinimum(0);
   m3l_rebin8_total__1->SetMaximum(1375.937);
   m3l_rebin8_total__1->SetEntries(15153);
   m3l_rebin8_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin8_total__1->SetFillColor(ci);
   m3l_rebin8_total__1->SetMarkerStyle(20);
   m3l_rebin8_total__1->SetMarkerSize(1.1);
   m3l_rebin8_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin8_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin8_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin8_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin8_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin8_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin8_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_total__1->Draw("HIST");
   
   THStack *m3l_rebin8_stack = new THStack();
   m3l_rebin8_stack->SetName("m3l_rebin8_stack");
   m3l_rebin8_stack->SetTitle("m3l_rebin8");
   Double_t xAxis2[9] = {0, 115.6267, 131.2534, 146.8802, 166.2679, 186.5938, 212.8153, 251.0998, 500}; 
   
   TH1F *m3l_rebin8_stack_stack_1 = new TH1F("m3l_rebin8_stack_stack_1","m3l_rebin8",8, xAxis2);
   m3l_rebin8_stack_stack_1->SetMinimum(0);
   m3l_rebin8_stack_stack_1->SetMaximum(722.367);
   m3l_rebin8_stack_stack_1->SetDirectory(0);
   m3l_rebin8_stack_stack_1->SetStats(0);
   m3l_rebin8_stack_stack_1->SetLineStyle(0);
   m3l_rebin8_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->SetHistogram(m3l_rebin8_stack_stack_1);
   
   Double_t xAxis3[9] = {0, 115.6267, 131.2534, 146.8802, 166.2679, 186.5938, 212.8153, 251.0998, 500}; 
   
   TH1D *m3l_rebin8_fakes_VV_stack_1 = new TH1D("m3l_rebin8_fakes_VV_stack_1","dummy",8, xAxis3);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(1,0.4398576);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(6,0.2199288);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(7,0.2199288);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(8,0.4398576);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(1,0.3110263);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(4,0.2199288);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(6,0.2199288);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(7,0.2199288);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(8,0.3110263);
   m3l_rebin8_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin8_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin8_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin8_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_fakes_VV_stack_1,"");
   Double_t xAxis4[9] = {0, 115.6267, 131.2534, 146.8802, 166.2679, 186.5938, 212.8153, 251.0998, 500}; 
   
   TH1D *m3l_rebin8_fakes_TT_stack_2 = new TH1D("m3l_rebin8_fakes_TT_stack_2","dummy",8, xAxis4);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(1,4.570035);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(2,11.03994);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(3,17.75462);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(4,21.66665);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(5,15.7986);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(6,16.3533);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(7,16.50376);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(8,20.71672);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(1,0.860263);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(2,1.326202);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(3,1.648238);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(4,1.805554);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(5,1.541786);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(6,1.576953);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(7,1.584115);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(8,1.810842);
   m3l_rebin8_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin8_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin8_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin8_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_fakes_TT_stack_2,"");
   Double_t xAxis5[9] = {0, 115.6267, 131.2534, 146.8802, 166.2679, 186.5938, 212.8153, 251.0998, 500}; 
   
   TH1D *m3l_rebin8_fakes_DY_stack_3 = new TH1D("m3l_rebin8_fakes_DY_stack_3","dummy",8, xAxis5);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(1,11.67278);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(2,54.47299);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(3,46.69113);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(4,50.58206);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(5,23.34557);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(6,38.90928);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(7,19.45464);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(8,19.45464);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(1,6.739285);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(2,14.55852);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(3,13.47857);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(4,14.02894);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(5,9.530788);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(6,12.30419);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(7,8.700379);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(8,8.700379);
   m3l_rebin8_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin8_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin8_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin8_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_fakes_DY_stack_3,"");
   Double_t xAxis6[9] = {0, 115.6267, 131.2534, 146.8802, 166.2679, 186.5938, 212.8153, 251.0998, 500}; 
   
   TH1D *m3l_rebin8_prompt_ZZ_stack_4 = new TH1D("m3l_rebin8_prompt_ZZ_stack_4","dummy",8, xAxis6);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(1,1.66076);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(2,24.9114);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(3,27.40254);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(4,24.08102);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(5,23.25064);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(6,17.43798);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(7,17.43798);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(8,29.0633);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(1,0.8303801);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(2,3.216048);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(3,3.37302);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(4,3.161993);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(5,3.106998);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(6,2.690739);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(7,2.690739);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(8,3.473729);
   m3l_rebin8_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin8_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin8_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin8_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_prompt_ZZ_stack_4,"");
   Double_t xAxis7[9] = {0, 115.6267, 131.2534, 146.8802, 166.2679, 186.5938, 212.8153, 251.0998, 500}; 
   
   TH1D *m3l_rebin8_prompt_WZ_stack_5 = new TH1D("m3l_rebin8_prompt_WZ_stack_5","dummy",8, xAxis7);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(1,55.25965);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(2,238.6398);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(3,361.8483);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(4,433.6859);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(5,397.2554);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(6,376.5842);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(7,346.9078);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(8,618.294);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(1,3.362995);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(2,6.988655);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(3,8.605685);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(4,9.421278);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(5,9.016897);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(6,8.779166);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(7,8.42615);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(8,11.24915);
   m3l_rebin8_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin8_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin8_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin8_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_prompt_WZ_stack_5,"");
   m3l_rebin8_stack->Draw("same hist");
   Double_t xAxis8[9] = {0, 115.6267, 131.2534, 146.8802, 166.2679, 186.5938, 212.8153, 251.0998, 500}; 
   
   TH1D *m3l_rebin8_total__2 = new TH1D("m3l_rebin8_total__2","dummy",8, xAxis8);
   m3l_rebin8_total__2->SetBinContent(1,73.60308);
   m3l_rebin8_total__2->SetBinContent(2,329.0641);
   m3l_rebin8_total__2->SetBinContent(3,453.6966);
   m3l_rebin8_total__2->SetBinContent(4,530.2355);
   m3l_rebin8_total__2->SetBinContent(5,459.6503);
   m3l_rebin8_total__2->SetBinContent(6,449.5047);
   m3l_rebin8_total__2->SetBinContent(7,400.5241);
   m3l_rebin8_total__2->SetBinContent(8,687.9686);
   m3l_rebin8_total__2->SetBinError(1,7.632432);
   m3l_rebin8_total__2->SetBinError(2,16.51949);
   m3l_rebin8_total__2->SetBinError(3,16.42631);
   m3l_rebin8_total__2->SetBinError(4,17.28809);
   m3l_rebin8_total__2->SetBinError(5,13.57096);
   m3l_rebin8_total__2->SetBinError(6,15.4351);
   m3l_rebin8_total__2->SetBinError(7,12.50977);
   m3l_rebin8_total__2->SetBinError(8,14.75407);
   m3l_rebin8_total__2->SetMinimum(0);
   m3l_rebin8_total__2->SetMaximum(1375.937);
   m3l_rebin8_total__2->SetEntries(15153);
   m3l_rebin8_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin8_total__2->SetFillColor(ci);
   m3l_rebin8_total__2->SetMarkerStyle(20);
   m3l_rebin8_total__2->SetMarkerSize(1.1);
   m3l_rebin8_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin8_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin8_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin8_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin8_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin8_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin8_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin8_total_errors_fx3001[8] = {
   57.81336,
   123.4401,
   139.0668,
   156.574,
   176.4308,
   199.7045,
   231.9575,
   375.5499};
   Double_t m3l_rebin8_total_errors_fy3001[8] = {
   73.60308,
   329.0641,
   453.6966,
   530.2355,
   459.6503,
   449.5047,
   400.5241,
   687.9686};
   Double_t m3l_rebin8_total_errors_felx3001[8] = {
   57.81336,
   7.813358,
   7.813362,
   9.693855,
   10.16294,
   13.11079,
   19.14222,
   124.4501};
   Double_t m3l_rebin8_total_errors_fely3001[8] = {
   4.196579,
   22.18802,
   34.00875,
   34.5638,
   28.41201,
   26.50051,
   24.5702,
   41.55367};
   Double_t m3l_rebin8_total_errors_fehx3001[8] = {
   57.81336,
   7.813358,
   7.813362,
   9.693855,
   10.16294,
   13.11079,
   19.14222,
   124.4501};
   Double_t m3l_rebin8_total_errors_fehy3001[8] = {
   4.484999,
   22.78205,
   28.46398,
   33.00852,
   28.08433,
   29.91854,
   25.26074,
   43.72591};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3l_rebin8_total_errors_fx3001,m3l_rebin8_total_errors_fy3001,m3l_rebin8_total_errors_felx3001,m3l_rebin8_total_errors_fehx3001,m3l_rebin8_total_errors_fely3001,m3l_rebin8_total_errors_fehy3001);
   grae->SetName("m3l_rebin8_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin8_total_errors3001 = new TH1F("Graph_m3l_rebin8_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin8_total_errors3001->SetMinimum(3.177707);
   Graph_m3l_rebin8_total_errors3001->SetMaximum(797.9233);
   Graph_m3l_rebin8_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin8_total_errors3001->SetStats(0);
   Graph_m3l_rebin8_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin8_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin8_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin8_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin8_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin8_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin8_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin8_total_errors","Total unc.","F");

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
   m3l_rebin8_canvas->Modified();
   m3l_rebin8_canvas->cd();
   m3l_rebin8_canvas->SetSelected(m3l_rebin8_canvas);
}
