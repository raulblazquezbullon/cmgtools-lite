void m3lmet_Meas_rebin3()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin3_canvas/m3lmet_Meas_rebin3
//=========  (Thu Jul  6 17:59:17 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin3_canvas = new TCanvas("m3lmet_Meas_rebin3_canvas", "m3lmet_Meas_rebin3",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin3_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin3_canvas->Range(-115.3846,-480.1065,525.641,3213.02);
   m3lmet_Meas_rebin3_canvas->SetFillColor(0);
   m3lmet_Meas_rebin3_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin3_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin3_canvas->SetTickx(1);
   m3lmet_Meas_rebin3_canvas->SetTicky(1);
   m3lmet_Meas_rebin3_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin3_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin3_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin3_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin3_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin3_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin3_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin3_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_total__1 = new TH1D("m3lmet_Meas_rebin3_total__1","dummy",3, xAxis1);
   m3lmet_Meas_rebin3_total__1->SetBinContent(1,508.3243);
   m3lmet_Meas_rebin3_total__1->SetBinContent(2,1135.457);
   m3lmet_Meas_rebin3_total__1->SetBinContent(3,1495.716);
   m3lmet_Meas_rebin3_total__1->SetBinError(1,22.21347);
   m3lmet_Meas_rebin3_total__1->SetBinError(2,22.47365);
   m3lmet_Meas_rebin3_total__1->SetBinError(3,21.47887);
   m3lmet_Meas_rebin3_total__1->SetMinimum(0);
   m3lmet_Meas_rebin3_total__1->SetMaximum(2991.433);
   m3lmet_Meas_rebin3_total__1->SetEntries(15153);
   m3lmet_Meas_rebin3_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin3_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin3_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin3_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin3_stack = new THStack();
   m3lmet_Meas_rebin3_stack->SetName("m3lmet_Meas_rebin3_stack");
   m3lmet_Meas_rebin3_stack->SetTitle("m3lmet_Meas_rebin3");
   Double_t xAxis2[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1F *m3lmet_Meas_rebin3_stack_stack_1 = new TH1F("m3lmet_Meas_rebin3_stack_stack_1","m3lmet_Meas_rebin3",3, xAxis2);
   m3lmet_Meas_rebin3_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin3_stack_stack_1->SetMaximum(1570.502);
   m3lmet_Meas_rebin3_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin3_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin3_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin3_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->SetHistogram(m3lmet_Meas_rebin3_stack_stack_1);
   
   Double_t xAxis3[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin3_fakes_VV_stack_1","dummy",3, xAxis3);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinContent(1,0.199256);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinContent(2,0.4064792);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinContent(3,0.8047257);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinError(1,0.199256);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinError(2,0.2874255);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinError(3,0.4024895);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_fakes_VV_stack_1,"");
   Double_t xAxis4[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin3_fakes_TT_stack_2","dummy",3, xAxis4);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinContent(1,18.22195);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinContent(2,37.03477);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinContent(3,61.2519);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinError(1,1.632488);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinError(2,2.297968);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinError(3,2.974723);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_fakes_TT_stack_2,"");
   Double_t xAxis5[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin3_fakes_DY_stack_3","dummy",3, xAxis5);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinContent(1,114.9354);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinContent(2,82.69175);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinContent(3,47.54549);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinError(1,20.33135);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinError(2,17.25003);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinError(3,13.19074);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_fakes_DY_stack_3,"");
   Double_t xAxis6[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin3_prompt_ZZ_stack_4","dummy",3, xAxis6);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinContent(1,34.70623);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinContent(2,51.87824);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinContent(3,67.02407);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinError(1,3.641379);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinError(2,4.467943);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinError(3,5.112835);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_prompt_ZZ_stack_4,"");
   Double_t xAxis7[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin3_prompt_WZ_stack_5","dummy",3, xAxis7);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinContent(1,340.2614);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinContent(2,963.4457);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinContent(3,1319.09);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinError(1,8.006856);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinError(2,13.49725);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinError(3,15.88062);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin3_stack->Draw("same hist");
   Double_t xAxis8[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_total__2 = new TH1D("m3lmet_Meas_rebin3_total__2","dummy",3, xAxis8);
   m3lmet_Meas_rebin3_total__2->SetBinContent(1,508.3243);
   m3lmet_Meas_rebin3_total__2->SetBinContent(2,1135.457);
   m3lmet_Meas_rebin3_total__2->SetBinContent(3,1495.716);
   m3lmet_Meas_rebin3_total__2->SetBinError(1,22.21347);
   m3lmet_Meas_rebin3_total__2->SetBinError(2,22.47365);
   m3lmet_Meas_rebin3_total__2->SetBinError(3,21.47887);
   m3lmet_Meas_rebin3_total__2->SetMinimum(0);
   m3lmet_Meas_rebin3_total__2->SetMaximum(2991.433);
   m3lmet_Meas_rebin3_total__2->SetEntries(15153);
   m3lmet_Meas_rebin3_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin3_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin3_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin3_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin3_total_errors_fx3001[3] = {
   102.9218,
   237.1701,
   384.2484};
   Double_t m3lmet_Meas_rebin3_total_errors_fy3001[3] = {
   508.3243,
   1135.457,
   1495.716};
   Double_t m3lmet_Meas_rebin3_total_errors_felx3001[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_total_errors_fely3001[3] = {
   47.71241,
   71.37246,
   102.396};
   Double_t m3lmet_Meas_rebin3_total_errors_fehx3001[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_total_errors_fehy3001[3] = {
   50.43076,
   81.25401,
   109.3297};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,m3lmet_Meas_rebin3_total_errors_fx3001,m3lmet_Meas_rebin3_total_errors_fy3001,m3lmet_Meas_rebin3_total_errors_felx3001,m3lmet_Meas_rebin3_total_errors_fehx3001,m3lmet_Meas_rebin3_total_errors_fely3001,m3lmet_Meas_rebin3_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin3_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin3_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin3_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetMinimum(346.1684);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetMaximum(1719.489);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin3_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin3_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin3_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin3_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin3_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin3_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin3_canvas->Modified();
   m3lmet_Meas_rebin3_canvas->cd();
   m3lmet_Meas_rebin3_canvas->SetSelected(m3lmet_Meas_rebin3_canvas);
}
