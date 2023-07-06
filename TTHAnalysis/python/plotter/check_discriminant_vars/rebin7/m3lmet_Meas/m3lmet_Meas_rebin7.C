void m3lmet_Meas_rebin7()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin7_canvas/m3lmet_Meas_rebin7
//=========  (Thu Jul  6 18:03:29 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin7_canvas = new TCanvas("m3lmet_Meas_rebin7_canvas", "m3lmet_Meas_rebin7",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin7_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin7_canvas->Range(-115.3846,-265.6178,525.641,1777.596);
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
   m3lmet_Meas_rebin7_total__1->SetBinContent(1,102.2072);
   m3lmet_Meas_rebin7_total__1->SetBinContent(2,274.8847);
   m3lmet_Meas_rebin7_total__1->SetBinContent(3,417.9594);
   m3lmet_Meas_rebin7_total__1->SetBinContent(4,478.2728);
   m3lmet_Meas_rebin7_total__1->SetBinContent(5,537.0031);
   m3lmet_Meas_rebin7_total__1->SetBinContent(6,501.6687);
   m3lmet_Meas_rebin7_total__1->SetBinContent(7,827.5016);
   m3lmet_Meas_rebin7_total__1->SetBinError(1,13.79455);
   m3lmet_Meas_rebin7_total__1->SetBinError(2,15.07655);
   m3lmet_Meas_rebin7_total__1->SetBinError(3,14.6819);
   m3lmet_Meas_rebin7_total__1->SetBinError(4,14.75149);
   m3lmet_Meas_rebin7_total__1->SetBinError(5,13.42416);
   m3lmet_Meas_rebin7_total__1->SetBinError(6,14.14811);
   m3lmet_Meas_rebin7_total__1->SetBinError(7,15.12322);
   m3lmet_Meas_rebin7_total__1->SetMinimum(0);
   m3lmet_Meas_rebin7_total__1->SetMaximum(1655.003);
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
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelSize(0.04);
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
   m3lmet_Meas_rebin7_stack_stack_1->SetMaximum(868.8767);
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
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(3,0.199256);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(4,0.4064792);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(6,0.5990046);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(7,0.205721);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(3,0.199256);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(4,0.2874255);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(6,0.3459432);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(7,0.205721);
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
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(1,3.691332);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(2,9.641786);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(3,13.59122);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(4,15.59131);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(5,20.32749);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(6,23.13092);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(7,30.53454);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(1,0.7509972);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(2,1.190622);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(3,1.380644);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(4,1.507256);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(5,1.689098);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(6,1.817145);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(7,2.116603);
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
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(1,50.00293);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(2,50.45255);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(3,39.32721);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(4,36.08185);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(5,21.76259);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(6,29.22886);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(7,18.31663);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(1,13.37327);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(2,13.49399);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(3,11.86227);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(4,11.41481);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(5,8.887305);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(6,10.33795);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(7,8.192825);
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
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(1,9.136494);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(2,17.47792);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(3,20.6788);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(4,21.97015);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(5,23.88828);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(6,22.91384);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(7,37.54307);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(1,1.866834);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(2,2.579368);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(3,2.815594);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(4,2.912198);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(5,3.035584);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(6,2.984356);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(7,3.83346);
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
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(1,39.37641);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(2,197.3125);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(3,344.1629);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(4,404.223);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(5,471.0247);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(6,425.7961);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(7,740.9017);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(1,2.71959);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(2,6.094573);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(3,8.06048);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(4,8.744885);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(5,9.442246);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(6,8.998208);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(7,11.93196);
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
   m3lmet_Meas_rebin7_total__2->SetBinContent(1,102.2072);
   m3lmet_Meas_rebin7_total__2->SetBinContent(2,274.8847);
   m3lmet_Meas_rebin7_total__2->SetBinContent(3,417.9594);
   m3lmet_Meas_rebin7_total__2->SetBinContent(4,478.2728);
   m3lmet_Meas_rebin7_total__2->SetBinContent(5,537.0031);
   m3lmet_Meas_rebin7_total__2->SetBinContent(6,501.6687);
   m3lmet_Meas_rebin7_total__2->SetBinContent(7,827.5016);
   m3lmet_Meas_rebin7_total__2->SetBinError(1,13.79455);
   m3lmet_Meas_rebin7_total__2->SetBinError(2,15.07655);
   m3lmet_Meas_rebin7_total__2->SetBinError(3,14.6819);
   m3lmet_Meas_rebin7_total__2->SetBinError(4,14.75149);
   m3lmet_Meas_rebin7_total__2->SetBinError(5,13.42416);
   m3lmet_Meas_rebin7_total__2->SetBinError(6,14.14811);
   m3lmet_Meas_rebin7_total__2->SetBinError(7,15.12322);
   m3lmet_Meas_rebin7_total__2->SetMinimum(0);
   m3lmet_Meas_rebin7_total__2->SetMaximum(1655.003);
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
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelSize(0.04);
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
   102.2072,
   274.8847,
   417.9594,
   478.2728,
   537.0031,
   501.6687,
   827.5016};
   Double_t m3lmet_Meas_rebin7_total_errors_felx3001[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fely3001[7] = {
   13.81147,
   28.46744,
   27.20208,
   29.7633,
   36.53216,
   39.35167,
   53.95924};
   Double_t m3lmet_Meas_rebin7_total_errors_fehx3001[7] = {
   85.44112,
   13.319,
   12.26944,
   12.16171,
   17.00909,
   23.09213,
   86.7075};
   Double_t m3lmet_Meas_rebin7_total_errors_fehy3001[7] = {
   17.86672,
   24.50263,
   29.9148,
   33.35174,
   39.25035,
   38.134,
   57.65757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,m3lmet_Meas_rebin7_total_errors_fx3001,m3lmet_Meas_rebin7_total_errors_fy3001,m3lmet_Meas_rebin7_total_errors_felx3001,m3lmet_Meas_rebin7_total_errors_fehx3001,m3lmet_Meas_rebin7_total_errors_fely3001,m3lmet_Meas_rebin7_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin7_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin7_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMinimum(8.719353);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMaximum(964.8355);
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
   m3lmet_Meas_rebin7_canvas->Modified();
   m3lmet_Meas_rebin7_canvas->cd();
   m3lmet_Meas_rebin7_canvas->SetSelected(m3lmet_Meas_rebin7_canvas);
}
