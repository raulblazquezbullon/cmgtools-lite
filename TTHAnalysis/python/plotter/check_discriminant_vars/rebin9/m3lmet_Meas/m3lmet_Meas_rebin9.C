void m3lmet_Meas_rebin9()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin9_canvas/m3lmet_Meas_rebin9
//=========  (Thu Jul  6 18:05:50 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin9_canvas = new TCanvas("m3lmet_Meas_rebin9_canvas", "m3lmet_Meas_rebin9",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin9_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin9_canvas->Range(-115.3846,-234.3707,525.641,1568.481);
   m3lmet_Meas_rebin9_canvas->SetFillColor(0);
   m3lmet_Meas_rebin9_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin9_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin9_canvas->SetTickx(1);
   m3lmet_Meas_rebin9_canvas->SetTicky(1);
   m3lmet_Meas_rebin9_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin9_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin9_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin9_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin9_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin9_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin9_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin9_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_total__1 = new TH1D("m3lmet_Meas_rebin9_total__1","dummy",9, xAxis1);
   m3lmet_Meas_rebin9_total__1->SetBinContent(1,75.66183);
   m3lmet_Meas_rebin9_total__1->SetBinContent(2,151.1872);
   m3lmet_Meas_rebin9_total__1->SetBinContent(3,281.4752);
   m3lmet_Meas_rebin9_total__1->SetBinContent(4,338.5577);
   m3lmet_Meas_rebin9_total__1->SetBinContent(5,367.7655);
   m3lmet_Meas_rebin9_total__1->SetBinContent(6,429.1338);
   m3lmet_Meas_rebin9_total__1->SetBinContent(7,370.2529);
   m3lmet_Meas_rebin9_total__1->SetBinContent(8,395.3084);
   m3lmet_Meas_rebin9_total__1->SetBinContent(9,730.155);
   m3lmet_Meas_rebin9_total__1->SetBinError(1,13.58718);
   m3lmet_Meas_rebin9_total__1->SetBinError(2,10.97361);
   m3lmet_Meas_rebin9_total__1->SetBinError(3,13.72613);
   m3lmet_Meas_rebin9_total__1->SetBinError(4,13.24751);
   m3lmet_Meas_rebin9_total__1->SetBinError(5,12.04296);
   m3lmet_Meas_rebin9_total__1->SetBinError(6,13.5844);
   m3lmet_Meas_rebin9_total__1->SetBinError(7,11.09638);
   m3lmet_Meas_rebin9_total__1->SetBinError(8,11.91359);
   m3lmet_Meas_rebin9_total__1->SetBinError(9,14.00995);
   m3lmet_Meas_rebin9_total__1->SetMinimum(0);
   m3lmet_Meas_rebin9_total__1->SetMaximum(1460.31);
   m3lmet_Meas_rebin9_total__1->SetEntries(15153);
   m3lmet_Meas_rebin9_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin9_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin9_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin9_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin9_stack = new THStack();
   m3lmet_Meas_rebin9_stack->SetName("m3lmet_Meas_rebin9_stack");
   m3lmet_Meas_rebin9_stack->SetTitle("m3lmet_Meas_rebin9");
   Double_t xAxis2[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1F *m3lmet_Meas_rebin9_stack_stack_1 = new TH1F("m3lmet_Meas_rebin9_stack_stack_1","m3lmet_Meas_rebin9",9, xAxis2);
   m3lmet_Meas_rebin9_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin9_stack_stack_1->SetMaximum(766.6627);
   m3lmet_Meas_rebin9_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin9_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin9_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin9_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin9_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin9_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin9_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin9_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->SetHistogram(m3lmet_Meas_rebin9_stack_stack_1);
   
   Double_t xAxis3[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin9_fakes_VV_stack_1","dummy",9, xAxis3);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinContent(3,0.199256);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinContent(5,0.4064792);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinContent(8,0.5990046);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinContent(9,0.205721);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinError(3,0.199256);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinError(5,0.2874255);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinError(8,0.3459432);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinError(9,0.205721);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(1,2.31672);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(2,5.914658);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(3,9.990568);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(4,9.813355);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(5,11.49377);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(6,15.72764);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(7,16.92869);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(8,17.89038);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(9,26.43284);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(1,0.5874806);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(2,0.9510718);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(3,1.189683);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(4,1.173578);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(5,1.284931);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(6,1.500774);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(7,1.546062);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(8,1.599819);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(9,1.974652);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(1,50.00293);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(2,25.83371);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(3,39.09873);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(4,32.20201);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(5,21.4006);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(6,29.08915);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(7,14.59885);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(8,18.31665);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(9,14.62999);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(1,13.37327);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(2,9.764619);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(3,11.79712);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(4,10.73912);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(5,8.740937);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(6,10.28741);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(7,7.302842);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(8,8.193477);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(9,7.316493);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(1,5.338234);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(2,8.826307);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(3,20.54169);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(4,14.56572);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(5,18.47056);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(6,18.84197);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(7,15.88797);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(8,20.10045);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(9,31.03565);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(1,1.428311);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(2,1.841922);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(3,2.797658);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(4,2.364179);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(5,2.668065);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(6,2.693437);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(7,2.482331);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(8,2.78875);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(9,3.493135);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(1,18.00395);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(2,110.6126);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(3,211.6449);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(4,281.9766);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(5,315.9941);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(6,365.475);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(7,322.8374);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(8,338.4019);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(9,657.8508);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(1,1.839033);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(2,4.557964);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(3,6.320811);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(4,7.293907);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(5,7.731531);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(6,8.318545);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(7,7.825969);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(8,8.021496);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(9,11.25184);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin9_stack->Draw("same hist");
   Double_t xAxis8[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_total__2 = new TH1D("m3lmet_Meas_rebin9_total__2","dummy",9, xAxis8);
   m3lmet_Meas_rebin9_total__2->SetBinContent(1,75.66183);
   m3lmet_Meas_rebin9_total__2->SetBinContent(2,151.1872);
   m3lmet_Meas_rebin9_total__2->SetBinContent(3,281.4752);
   m3lmet_Meas_rebin9_total__2->SetBinContent(4,338.5577);
   m3lmet_Meas_rebin9_total__2->SetBinContent(5,367.7655);
   m3lmet_Meas_rebin9_total__2->SetBinContent(6,429.1338);
   m3lmet_Meas_rebin9_total__2->SetBinContent(7,370.2529);
   m3lmet_Meas_rebin9_total__2->SetBinContent(8,395.3084);
   m3lmet_Meas_rebin9_total__2->SetBinContent(9,730.155);
   m3lmet_Meas_rebin9_total__2->SetBinError(1,13.58718);
   m3lmet_Meas_rebin9_total__2->SetBinError(2,10.97361);
   m3lmet_Meas_rebin9_total__2->SetBinError(3,13.72613);
   m3lmet_Meas_rebin9_total__2->SetBinError(4,13.24751);
   m3lmet_Meas_rebin9_total__2->SetBinError(5,12.04296);
   m3lmet_Meas_rebin9_total__2->SetBinError(6,13.5844);
   m3lmet_Meas_rebin9_total__2->SetBinError(7,11.09638);
   m3lmet_Meas_rebin9_total__2->SetBinError(8,11.91359);
   m3lmet_Meas_rebin9_total__2->SetBinError(9,14.00995);
   m3lmet_Meas_rebin9_total__2->SetMinimum(0);
   m3lmet_Meas_rebin9_total__2->SetMaximum(1460.31);
   m3lmet_Meas_rebin9_total__2->SetEntries(15153);
   m3lmet_Meas_rebin9_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin9_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin9_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin9_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin9_total_errors_fx3001[9] = {
   82.48135,
   175.3219,
   195.7623,
   215.3026,
   234.2208,
   256.0884,
   282.3847,
   317.9758,
   419.8395};
   Double_t m3lmet_Meas_rebin9_total_errors_fy3001[9] = {
   75.66183,
   151.1872,
   281.4752,
   338.5577,
   367.7655,
   429.1338,
   370.2529,
   395.3084,
   730.155};
   Double_t m3lmet_Meas_rebin9_total_errors_felx3001[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t m3lmet_Meas_rebin9_total_errors_fely3001[9] = {
   15.86095,
   12.30962,
   22.71066,
   21.78935,
   22.30821,
   29.40068,
   27.3063,
   27.43363,
   47.98376};
   Double_t m3lmet_Meas_rebin9_total_errors_fehx3001[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t m3lmet_Meas_rebin9_total_errors_fehy3001[9] = {
   16.35014,
   13.20824,
   22.52968,
   29.45292,
   26.14359,
   29.14985,
   27.68478,
   29.85929,
   52.02043};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,m3lmet_Meas_rebin9_total_errors_fx3001,m3lmet_Meas_rebin9_total_errors_fy3001,m3lmet_Meas_rebin9_total_errors_felx3001,m3lmet_Meas_rebin9_total_errors_fehx3001,m3lmet_Meas_rebin9_total_errors_fely3001,m3lmet_Meas_rebin9_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin9_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin9_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin9_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetMinimum(53.8208);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetMaximum(854.4129);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin9_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin9_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin9_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin9_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin9_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin9_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin9_canvas->Modified();
   m3lmet_Meas_rebin9_canvas->cd();
   m3lmet_Meas_rebin9_canvas->SetSelected(m3lmet_Meas_rebin9_canvas);
}
