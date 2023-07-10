void m3lmet_Meas_rebin9()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin9_canvas/m3lmet_Meas_rebin9
//=========  (Mon Jul 10 19:33:21 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin9_canvas = new TCanvas("m3lmet_Meas_rebin9_canvas", "m3lmet_Meas_rebin9",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin9_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin9_canvas->Range(-115.3846,-232.8105,525.641,1558.04);
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
   Double_t xAxis1[10] = {0, 165.1575, 186.0172, 206.2585, 225.2423, 244.2261, 269.2283, 296.8611, 340.322, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_total__1 = new TH1D("m3lmet_Meas_rebin9_total__1","dummy",9, xAxis1);
   m3lmet_Meas_rebin9_total__1->SetBinContent(1,76.77386);
   m3lmet_Meas_rebin9_total__1->SetBinContent(2,153.0848);
   m3lmet_Meas_rebin9_total__1->SetBinContent(3,284.5302);
   m3lmet_Meas_rebin9_total__1->SetBinContent(4,346.7939);
   m3lmet_Meas_rebin9_total__1->SetBinContent(5,363.1575);
   m3lmet_Meas_rebin9_total__1->SetBinContent(6,431.0341);
   m3lmet_Meas_rebin9_total__1->SetBinContent(7,363.3639);
   m3lmet_Meas_rebin9_total__1->SetBinContent(8,395.4649);
   m3lmet_Meas_rebin9_total__1->SetBinContent(9,725.2944);
   m3lmet_Meas_rebin9_total__1->SetBinError(1,13.59477);
   m3lmet_Meas_rebin9_total__1->SetBinError(2,10.99632);
   m3lmet_Meas_rebin9_total__1->SetBinError(3,13.74134);
   m3lmet_Meas_rebin9_total__1->SetBinError(4,13.73897);
   m3lmet_Meas_rebin9_total__1->SetBinError(5,11.50922);
   m3lmet_Meas_rebin9_total__1->SetBinError(6,13.59661);
   m3lmet_Meas_rebin9_total__1->SetBinError(7,11.03947);
   m3lmet_Meas_rebin9_total__1->SetBinError(8,11.92099);
   m3lmet_Meas_rebin9_total__1->SetBinError(9,13.97193);
   m3lmet_Meas_rebin9_total__1->SetMinimum(0);
   m3lmet_Meas_rebin9_total__1->SetMaximum(1450.589);
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
   Double_t xAxis2[10] = {0, 165.1575, 186.0172, 206.2585, 225.2423, 244.2261, 269.2283, 296.8611, 340.322, 500}; 
   
   TH1F *m3lmet_Meas_rebin9_stack_stack_1 = new TH1F("m3lmet_Meas_rebin9_stack_stack_1","m3lmet_Meas_rebin9",9, xAxis2);
   m3lmet_Meas_rebin9_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin9_stack_stack_1->SetMaximum(761.5591);
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
   
   Double_t xAxis3[10] = {0, 165.1575, 186.0172, 206.2585, 225.2423, 244.2261, 269.2283, 296.8611, 340.322, 500}; 
   
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
   Double_t xAxis4[10] = {0, 165.1575, 186.0172, 206.2585, 225.2423, 244.2261, 269.2283, 296.8611, 340.322, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(1,2.31672);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(2,5.914658);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(3,10.4006);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(4,9.834245);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(5,11.49808);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(6,15.99155);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(7,16.37479);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(8,18.03063);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(9,26.14733);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(1,0.5874806);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(2,0.9510718);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(3,1.213021);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(4,1.176072);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(5,1.285404);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(6,1.512291);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(7,1.521037);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(8,1.605954);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(9,1.964303);
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
   Double_t xAxis5[10] = {0, 165.1575, 186.0172, 206.2585, 225.2423, 244.2261, 269.2283, 296.8611, 340.322, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(1,50.00293);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(2,25.83371);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(3,39.09873);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(4,35.69543);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(5,17.90717);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(6,29.08915);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(7,14.59885);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(8,18.31665);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(9,14.62999);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(1,13.37327);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(2,9.764619);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(3,11.79712);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(4,11.29304);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(5,8.012486);
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
   Double_t xAxis6[10] = {0, 165.1575, 186.0172, 206.2585, 225.2423, 244.2261, 269.2283, 296.8611, 340.322, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(1,5.338234);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(2,9.56791);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(3,19.80009);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(4,15.36357);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(5,17.67271);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(6,18.84197);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(7,15.88797);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(8,20.87418);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(9,30.26192);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(1,1.428311);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(2,1.915444);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(3,2.747843);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(4,2.430561);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(5,2.607736);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(6,2.693437);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(7,2.482331);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(8,2.841986);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(9,3.449962);
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
   Double_t xAxis7[10] = {0, 165.1575, 186.0172, 206.2585, 225.2423, 244.2261, 269.2283, 296.8611, 340.322, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(1,19.11597);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(2,111.7686);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(3,215.0315);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(4,285.9006);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(5,315.673);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(6,367.1114);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(7,316.5023);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(8,337.6444);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(9,654.0494);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(1,1.894298);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(2,4.582336);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(3,6.371077);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(4,7.344091);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(5,7.72833);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(6,8.336392);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(7,7.750028);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(8,8.012564);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(9,11.21965);
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
   Double_t xAxis8[10] = {0, 165.1575, 186.0172, 206.2585, 225.2423, 244.2261, 269.2283, 296.8611, 340.322, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_total__2 = new TH1D("m3lmet_Meas_rebin9_total__2","dummy",9, xAxis8);
   m3lmet_Meas_rebin9_total__2->SetBinContent(1,76.77386);
   m3lmet_Meas_rebin9_total__2->SetBinContent(2,153.0848);
   m3lmet_Meas_rebin9_total__2->SetBinContent(3,284.5302);
   m3lmet_Meas_rebin9_total__2->SetBinContent(4,346.7939);
   m3lmet_Meas_rebin9_total__2->SetBinContent(5,363.1575);
   m3lmet_Meas_rebin9_total__2->SetBinContent(6,431.0341);
   m3lmet_Meas_rebin9_total__2->SetBinContent(7,363.3639);
   m3lmet_Meas_rebin9_total__2->SetBinContent(8,395.4649);
   m3lmet_Meas_rebin9_total__2->SetBinContent(9,725.2944);
   m3lmet_Meas_rebin9_total__2->SetBinError(1,13.59477);
   m3lmet_Meas_rebin9_total__2->SetBinError(2,10.99632);
   m3lmet_Meas_rebin9_total__2->SetBinError(3,13.74134);
   m3lmet_Meas_rebin9_total__2->SetBinError(4,13.73897);
   m3lmet_Meas_rebin9_total__2->SetBinError(5,11.50922);
   m3lmet_Meas_rebin9_total__2->SetBinError(6,13.59661);
   m3lmet_Meas_rebin9_total__2->SetBinError(7,11.03947);
   m3lmet_Meas_rebin9_total__2->SetBinError(8,11.92099);
   m3lmet_Meas_rebin9_total__2->SetBinError(9,13.97193);
   m3lmet_Meas_rebin9_total__2->SetMinimum(0);
   m3lmet_Meas_rebin9_total__2->SetMaximum(1450.589);
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
   82.57874,
   175.5873,
   196.1378,
   215.7504,
   234.7342,
   256.7272,
   283.0447,
   318.5916,
   420.161};
   Double_t m3lmet_Meas_rebin9_total_errors_fy3001[9] = {
   76.77386,
   153.0848,
   284.5302,
   346.7939,
   363.1575,
   431.0341,
   363.3639,
   395.4649,
   725.2944};
   Double_t m3lmet_Meas_rebin9_total_errors_felx3001[9] = {
   82.57874,
   10.42986,
   10.12064,
   9.491905,
   9.491905,
   12.50111,
   13.81641,
   21.73041,
   79.83902};
   Double_t m3lmet_Meas_rebin9_total_errors_fely3001[9] = {
   17.45862,
   13.05704,
   26.27676,
   27.71546,
   26.20599,
   39.19983,
   28.95484,
   31.54591,
   56.94155};
   Double_t m3lmet_Meas_rebin9_total_errors_fehx3001[9] = {
   82.57874,
   10.42986,
   10.12064,
   9.491905,
   9.491905,
   12.50111,
   13.81641,
   21.73041,
   79.83902};
   Double_t m3lmet_Meas_rebin9_total_errors_fehy3001[9] = {
   18.04458,
   15.10927,
   24.64334,
   28.73096,
   32.70321,
   35.45908,
   32.82197,
   30.64461,
   58.96488};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,m3lmet_Meas_rebin9_total_errors_fx3001,m3lmet_Meas_rebin9_total_errors_fy3001,m3lmet_Meas_rebin9_total_errors_felx3001,m3lmet_Meas_rebin9_total_errors_fehx3001,m3lmet_Meas_rebin9_total_errors_fely3001,m3lmet_Meas_rebin9_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin9_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin9_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin9_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetMinimum(53.38372);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetMaximum(856.7536);
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
