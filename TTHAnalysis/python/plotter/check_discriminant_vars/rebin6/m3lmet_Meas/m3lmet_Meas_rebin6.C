void m3lmet_Meas_rebin6()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin6_canvas/m3lmet_Meas_rebin6
//=========  (Thu Jul  6 18:04:54 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin6_canvas = new TCanvas("m3lmet_Meas_rebin6_canvas", "m3lmet_Meas_rebin6",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin6_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin6_canvas->Range(-115.3846,-293.1278,525.641,1961.701);
   m3lmet_Meas_rebin6_canvas->SetFillColor(0);
   m3lmet_Meas_rebin6_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin6_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin6_canvas->SetTickx(1);
   m3lmet_Meas_rebin6_canvas->SetTicky(1);
   m3lmet_Meas_rebin6_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin6_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin6_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin6_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin6_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin6_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin6_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin6_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_total__1 = new TH1D("m3lmet_Meas_rebin6_total__1","dummy",6, xAxis1);
   m3lmet_Meas_rebin6_total__1->SetBinContent(1,138.3194);
   m3lmet_Meas_rebin6_total__1->SetBinContent(2,370.0048);
   m3lmet_Meas_rebin6_total__1->SetBinContent(3,524.7217);
   m3lmet_Meas_rebin6_total__1->SetBinContent(4,610.7353);
   m3lmet_Meas_rebin6_total__1->SetBinContent(5,582.5105);
   m3lmet_Meas_rebin6_total__1->SetBinContent(6,913.2058);
   m3lmet_Meas_rebin6_total__1->SetBinError(1,15.77931);
   m3lmet_Meas_rebin6_total__1->SetBinError(2,15.63495);
   m3lmet_Meas_rebin6_total__1->SetBinError(3,15.38424);
   m3lmet_Meas_rebin6_total__1->SetBinError(4,16.38262);
   m3lmet_Meas_rebin6_total__1->SetBinError(5,14.22295);
   m3lmet_Meas_rebin6_total__1->SetBinError(6,16.09502);
   m3lmet_Meas_rebin6_total__1->SetMinimum(0);
   m3lmet_Meas_rebin6_total__1->SetMaximum(1826.412);
   m3lmet_Meas_rebin6_total__1->SetEntries(15153);
   m3lmet_Meas_rebin6_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin6_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin6_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin6_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin6_stack = new THStack();
   m3lmet_Meas_rebin6_stack->SetName("m3lmet_Meas_rebin6_stack");
   m3lmet_Meas_rebin6_stack->SetTitle("m3lmet_Meas_rebin6");
   Double_t xAxis2[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1F *m3lmet_Meas_rebin6_stack_stack_1 = new TH1F("m3lmet_Meas_rebin6_stack_stack_1","m3lmet_Meas_rebin6",6, xAxis2);
   m3lmet_Meas_rebin6_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin6_stack_stack_1->SetMaximum(958.8661);
   m3lmet_Meas_rebin6_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin6_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin6_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin6_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->SetHistogram(m3lmet_Meas_rebin6_stack_stack_1);
   
   Double_t xAxis3[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin6_fakes_VV_stack_1","dummy",6, xAxis3);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(2,0.199256);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(3,0.4064792);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(5,0.4051647);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(6,0.399561);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(2,0.199256);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(3,0.2874255);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(5,0.2865358);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(6,0.2826572);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_fakes_VV_stack_1,"");
   Double_t xAxis4[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin6_fakes_TT_stack_2","dummy",6, xAxis4);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(1,4.620592);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(2,13.60135);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(3,16.98358);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(4,20.05119);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(5,26.39396);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(6,34.85794);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(1,0.8470202);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(2,1.395555);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(3,1.544933);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(4,1.701129);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(5,1.940512);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(6,2.254637);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_fakes_TT_stack_2,"");
   Double_t xAxis5[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin6_fakes_DY_stack_3","dummy",6, xAxis5);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(1,64.78637);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(2,50.149);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(3,39.35569);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(4,43.33606);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(5,25.50776);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(6,22.03772);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(1,15.28021);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(2,13.41191);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(3,11.87141);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(4,12.51532);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(5,9.645036);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(6,8.998272);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_fakes_DY_stack_3,"");
   Double_t xAxis6[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin6_prompt_ZZ_stack_4","dummy",6, xAxis6);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(1,9.531776);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(2,25.17446);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(3,24.93532);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(4,26.94292);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(5,23.6801);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(6,43.34398);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(1,1.908223);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(2,3.101342);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(3,3.094908);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(4,3.22243);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(5,3.033164);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(6,4.115945);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_prompt_ZZ_stack_4,"");
   Double_t xAxis7[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin6_prompt_WZ_stack_5","dummy",6, xAxis7);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(1,59.3807);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(2,280.8807);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(3,443.0406);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(4,520.4051);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(5,506.5235);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(6,812.5666);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(1,3.33813);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(2,7.277817);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(3,9.148585);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(4,9.923671);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(5,9.809064);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(6,12.48905);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin6_stack->Draw("same hist");
   Double_t xAxis8[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_total__2 = new TH1D("m3lmet_Meas_rebin6_total__2","dummy",6, xAxis8);
   m3lmet_Meas_rebin6_total__2->SetBinContent(1,138.3194);
   m3lmet_Meas_rebin6_total__2->SetBinContent(2,370.0048);
   m3lmet_Meas_rebin6_total__2->SetBinContent(3,524.7217);
   m3lmet_Meas_rebin6_total__2->SetBinContent(4,610.7353);
   m3lmet_Meas_rebin6_total__2->SetBinContent(5,582.5105);
   m3lmet_Meas_rebin6_total__2->SetBinContent(6,913.2058);
   m3lmet_Meas_rebin6_total__2->SetBinError(1,15.77931);
   m3lmet_Meas_rebin6_total__2->SetBinError(2,15.63495);
   m3lmet_Meas_rebin6_total__2->SetBinError(3,15.38424);
   m3lmet_Meas_rebin6_total__2->SetBinError(4,16.38262);
   m3lmet_Meas_rebin6_total__2->SetBinError(5,14.22295);
   m3lmet_Meas_rebin6_total__2->SetBinError(6,16.09502);
   m3lmet_Meas_rebin6_total__2->SetMinimum(0);
   m3lmet_Meas_rebin6_total__2->SetMaximum(1826.412);
   m3lmet_Meas_rebin6_total__2->SetEntries(15153);
   m3lmet_Meas_rebin6_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin6_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin6_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin6_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin6_total_errors_fx3001[6] = {
   87.66096,
   190.5827,
   220.0322,
   251.3588,
   292.6306,
   408.3823};
   Double_t m3lmet_Meas_rebin6_total_errors_fy3001[6] = {
   138.3194,
   370.0048,
   524.7217,
   610.7353,
   582.5105,
   913.2058};
   Double_t m3lmet_Meas_rebin6_total_errors_felx3001[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_total_errors_fely3001[6] = {
   19.31083,
   30.25661,
   32.61303,
   40.16199,
   42.84667,
   59.89344};
   Double_t m3lmet_Meas_rebin6_total_errors_fehx3001[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_total_errors_fehy3001[6] = {
   22.44421,
   29.44964,
   39.43393,
   42.31438,
   45.65906,
   64.00591};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,m3lmet_Meas_rebin6_total_errors_fx3001,m3lmet_Meas_rebin6_total_errors_fy3001,m3lmet_Meas_rebin6_total_errors_felx3001,m3lmet_Meas_rebin6_total_errors_fehx3001,m3lmet_Meas_rebin6_total_errors_fely3001,m3lmet_Meas_rebin6_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin6_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin6_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin6_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetMinimum(33.18831);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetMaximum(1063.032);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin6_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin6_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin6_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin6_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin6_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin6_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin6_canvas->Modified();
   m3lmet_Meas_rebin6_canvas->cd();
   m3lmet_Meas_rebin6_canvas->SetSelected(m3lmet_Meas_rebin6_canvas);
}
