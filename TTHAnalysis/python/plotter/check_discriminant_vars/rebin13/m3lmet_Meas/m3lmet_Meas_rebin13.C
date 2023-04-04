void m3lmet_Meas_rebin13()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin13_canvas/m3lmet_Meas_rebin13
//=========  (Tue Apr  4 21:30:49 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin13_canvas = new TCanvas("m3lmet_Meas_rebin13_canvas", "m3lmet_Meas_rebin13",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin13_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin13_canvas->Range(-115.3846,-203.0644,525.641,1358.97);
   m3lmet_Meas_rebin13_canvas->SetFillColor(0);
   m3lmet_Meas_rebin13_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin13_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin13_canvas->SetTickx(1);
   m3lmet_Meas_rebin13_canvas->SetTicky(1);
   m3lmet_Meas_rebin13_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin13_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin13_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin13_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin13_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin13_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin13_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin13_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[14] = {0, 158.5878, 172.9313, 187.2749, 201.4778, 214.575, 227.6722, 240.7695, 255.6771, 274.9066, 294.1361, 322.0525, 359.8112, 500}; 
   
   TH1D *m3lmet_Meas_rebin13_total__1 = new TH1D("m3lmet_Meas_rebin13_total__1","dummy",13, xAxis1);
   m3lmet_Meas_rebin13_total__1->SetBinContent(1,51.40549);
   m3lmet_Meas_rebin13_total__1->SetBinContent(2,85.31341);
   m3lmet_Meas_rebin13_total__1->SetBinContent(3,124.1897);
   m3lmet_Meas_rebin13_total__1->SetBinContent(4,210.9041);
   m3lmet_Meas_rebin13_total__1->SetBinContent(5,240.3299);
   m3lmet_Meas_rebin13_total__1->SetBinContent(6,271.7541);
   m3lmet_Meas_rebin13_total__1->SetBinContent(7,277.2278);
   m3lmet_Meas_rebin13_total__1->SetBinContent(8,309.008);
   m3lmet_Meas_rebin13_total__1->SetBinContent(9,317.2743);
   m3lmet_Meas_rebin13_total__1->SetBinContent(10,269.6788);
   m3lmet_Meas_rebin13_total__1->SetBinContent(11,303.4219);
   m3lmet_Meas_rebin13_total__1->SetBinContent(12,291.1157);
   m3lmet_Meas_rebin13_total__1->SetBinContent(13,632.6239);
   m3lmet_Meas_rebin13_total__1->SetBinError(1,12.42987);
   m3lmet_Meas_rebin13_total__1->SetBinError(2,11.55771);
   m3lmet_Meas_rebin13_total__1->SetBinError(3,8.354401);
   m3lmet_Meas_rebin13_total__1->SetBinError(4,12.67546);
   m3lmet_Meas_rebin13_total__1->SetBinError(5,11.1108);
   m3lmet_Meas_rebin13_total__1->SetBinError(6,13.12261);
   m3lmet_Meas_rebin13_total__1->SetBinError(7,10.79853);
   m3lmet_Meas_rebin13_total__1->SetBinError(8,13.41939);
   m3lmet_Meas_rebin13_total__1->SetBinError(9,9.042028);
   m3lmet_Meas_rebin13_total__1->SetBinError(10,10.70061);
   m3lmet_Meas_rebin13_total__1->SetBinError(11,10.34356);
   m3lmet_Meas_rebin13_total__1->SetBinError(12,11.56986);
   m3lmet_Meas_rebin13_total__1->SetBinError(13,12.18364);
   m3lmet_Meas_rebin13_total__1->SetMinimum(0);
   m3lmet_Meas_rebin13_total__1->SetMaximum(1265.248);
   m3lmet_Meas_rebin13_total__1->SetEntries(15153);
   m3lmet_Meas_rebin13_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin13_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin13_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin13_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin13_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin13_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin13_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin13_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin13_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin13_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin13_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin13_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin13_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin13_stack = new THStack();
   m3lmet_Meas_rebin13_stack->SetName("m3lmet_Meas_rebin13_stack");
   m3lmet_Meas_rebin13_stack->SetTitle("m3lmet_Meas_rebin13");
   Double_t xAxis2[14] = {0, 158.5878, 172.9313, 187.2749, 201.4778, 214.575, 227.6722, 240.7695, 255.6771, 274.9066, 294.1361, 322.0525, 359.8112, 500}; 
   
   TH1F *m3lmet_Meas_rebin13_stack_stack_1 = new TH1F("m3lmet_Meas_rebin13_stack_stack_1","m3lmet_Meas_rebin13",13, xAxis2);
   m3lmet_Meas_rebin13_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin13_stack_stack_1->SetMaximum(664.2551);
   m3lmet_Meas_rebin13_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin13_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin13_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin13_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin13_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin13_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin13_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin13_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_stack->SetHistogram(m3lmet_Meas_rebin13_stack_stack_1);
   
   Double_t xAxis3[14] = {0, 158.5878, 172.9313, 187.2749, 201.4778, 214.575, 227.6722, 240.7695, 255.6771, 274.9066, 294.1361, 322.0525, 359.8112, 500}; 
   
   TH1D *m3lmet_Meas_rebin13_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin13_fakes_VV_stack_1","dummy",13, xAxis3);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetBinContent(7,0.4398576);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetBinContent(11,0.6597863);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetBinContent(13,0.2199288);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetBinError(4,0.2199288);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetBinError(7,0.3110263);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetBinError(11,0.3809278);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetBinError(13,0.2199288);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_stack->Add(m3lmet_Meas_rebin13_fakes_VV_stack_1,"");
   Double_t xAxis4[14] = {0, 158.5878, 172.9313, 187.2749, 201.4778, 214.575, 227.6722, 240.7695, 255.6771, 274.9066, 294.1361, 322.0525, 359.8112, 500}; 
   
   TH1D *m3lmet_Meas_rebin13_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin13_fakes_TT_stack_2","dummy",13, xAxis4);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(1,1.607935);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(2,2.510712);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(3,5.576119);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(4,7.222218);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(5,7.824069);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(6,7.974532);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(7,8.877309);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(8,11.43518);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(9,10.68286);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(10,12.63888);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(11,13.59781);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(12,12.33796);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinContent(13,22.11804);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(1,0.5178324);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(2,0.635598);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(3,0.9579387);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(4,1.042437);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(5,1.085003);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(6,1.095386);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(7,1.155727);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(8,1.345781);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(9,1.267823);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(10,1.379015);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(11,1.448584);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(12,1.362499);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetBinError(13,1.861123);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_stack->Add(m3lmet_Meas_rebin13_fakes_TT_stack_2,"");
   Double_t xAxis5[14] = {0, 158.5878, 172.9313, 187.2749, 201.4778, 214.575, 227.6722, 240.7695, 255.6771, 274.9066, 294.1361, 322.0525, 359.8112, 500}; 
   
   TH1D *m3lmet_Meas_rebin13_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin13_fakes_DY_stack_3","dummy",13, xAxis5);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(1,38.90928);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(2,31.12742);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(3,11.67278);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(4,31.12742);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(5,19.45464);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(6,31.12742);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(7,15.56371);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(8,31.12742);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(9,3.890928);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(10,15.56371);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(11,11.67278);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(12,19.45464);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinContent(13,3.890928);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(1,12.30419);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(2,11.00521);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(3,6.739285);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(4,11.00521);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(5,8.700379);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(6,11.00521);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(7,7.781856);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(8,11.00521);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(9,3.890928);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(10,7.781856);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(11,6.739285);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(12,8.700379);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetBinError(13,3.890928);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_stack->Add(m3lmet_Meas_rebin13_fakes_DY_stack_3,"");
   Double_t xAxis6[14] = {0, 158.5878, 172.9313, 187.2749, 201.4778, 214.575, 227.6722, 240.7695, 255.6771, 274.9066, 294.1361, 322.0525, 359.8112, 500}; 
   
   TH1D *m3lmet_Meas_rebin13_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin13_prompt_ZZ_stack_4","dummy",13, xAxis6);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(1,2.90633);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(2,7.058231);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(3,7.473421);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(4,14.94684);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(5,14.11646);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(6,10.79494);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(7,14.11646);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(8,12.4557);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(9,14.53165);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(10,12.4557);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(11,12.04051);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(12,15.36203);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinContent(13,26.98735);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(1,1.09849);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(2,1.711872);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(3,1.761502);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(4,2.49114);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(5,2.420953);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(6,2.117062);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(7,2.420953);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(8,2.27409);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(9,2.456297);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(10,2.27409);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(11,2.235867);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(12,2.525503);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetBinError(13,3.347369);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_stack->Add(m3lmet_Meas_rebin13_prompt_ZZ_stack_4,"");
   Double_t xAxis7[14] = {0, 158.5878, 172.9313, 187.2749, 201.4778, 214.575, 227.6722, 240.7695, 255.6771, 274.9066, 294.1361, 322.0525, 359.8112, 500}; 
   
   TH1D *m3lmet_Meas_rebin13_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin13_prompt_WZ_stack_5","dummy",13, xAxis7);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(1,7.981949);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(2,44.61705);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(3,99.46736);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(4,157.3877);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(5,198.9347);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(6,221.8572);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(7,238.2305);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(8,253.9897);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(9,288.1688);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(10,229.0205);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(11,265.451);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(12,243.9611);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinContent(13,579.4076);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(1,1.278135);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(2,3.021848);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(3,4.511931);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(4,5.675544);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(5,6.380834);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(6,6.738434);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(7,6.982659);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(8,7.209916);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(9,7.679725);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(10,6.846354);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(11,7.370795);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(12,7.066144);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetBinError(13,10.88966);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_stack->Add(m3lmet_Meas_rebin13_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin13_stack->Draw("same hist");
   Double_t xAxis8[14] = {0, 158.5878, 172.9313, 187.2749, 201.4778, 214.575, 227.6722, 240.7695, 255.6771, 274.9066, 294.1361, 322.0525, 359.8112, 500}; 
   
   TH1D *m3lmet_Meas_rebin13_total__2 = new TH1D("m3lmet_Meas_rebin13_total__2","dummy",13, xAxis8);
   m3lmet_Meas_rebin13_total__2->SetBinContent(1,51.40549);
   m3lmet_Meas_rebin13_total__2->SetBinContent(2,85.31341);
   m3lmet_Meas_rebin13_total__2->SetBinContent(3,124.1897);
   m3lmet_Meas_rebin13_total__2->SetBinContent(4,210.9041);
   m3lmet_Meas_rebin13_total__2->SetBinContent(5,240.3299);
   m3lmet_Meas_rebin13_total__2->SetBinContent(6,271.7541);
   m3lmet_Meas_rebin13_total__2->SetBinContent(7,277.2278);
   m3lmet_Meas_rebin13_total__2->SetBinContent(8,309.008);
   m3lmet_Meas_rebin13_total__2->SetBinContent(9,317.2743);
   m3lmet_Meas_rebin13_total__2->SetBinContent(10,269.6788);
   m3lmet_Meas_rebin13_total__2->SetBinContent(11,303.4219);
   m3lmet_Meas_rebin13_total__2->SetBinContent(12,291.1157);
   m3lmet_Meas_rebin13_total__2->SetBinContent(13,632.6239);
   m3lmet_Meas_rebin13_total__2->SetBinError(1,12.42987);
   m3lmet_Meas_rebin13_total__2->SetBinError(2,11.55771);
   m3lmet_Meas_rebin13_total__2->SetBinError(3,8.354401);
   m3lmet_Meas_rebin13_total__2->SetBinError(4,12.67546);
   m3lmet_Meas_rebin13_total__2->SetBinError(5,11.1108);
   m3lmet_Meas_rebin13_total__2->SetBinError(6,13.12261);
   m3lmet_Meas_rebin13_total__2->SetBinError(7,10.79853);
   m3lmet_Meas_rebin13_total__2->SetBinError(8,13.41939);
   m3lmet_Meas_rebin13_total__2->SetBinError(9,9.042028);
   m3lmet_Meas_rebin13_total__2->SetBinError(10,10.70061);
   m3lmet_Meas_rebin13_total__2->SetBinError(11,10.34356);
   m3lmet_Meas_rebin13_total__2->SetBinError(12,11.56986);
   m3lmet_Meas_rebin13_total__2->SetBinError(13,12.18364);
   m3lmet_Meas_rebin13_total__2->SetMinimum(0);
   m3lmet_Meas_rebin13_total__2->SetMaximum(1265.248);
   m3lmet_Meas_rebin13_total__2->SetEntries(15153);
   m3lmet_Meas_rebin13_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin13_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin13_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin13_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin13_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin13_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin13_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin13_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin13_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin13_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin13_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin13_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin13_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin13_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin13_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin13_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin13_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin13_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin13_total_errors_fx3001[13] = {
   79.2939,
   165.7596,
   180.1031,
   194.3763,
   208.0264,
   221.1236,
   234.2208,
   248.2233,
   265.2918,
   284.5213,
   308.0943,
   340.9319,
   429.9056};
   Double_t m3lmet_Meas_rebin13_total_errors_fy3001[13] = {
   51.40549,
   85.31341,
   124.1897,
   210.9041,
   240.3299,
   271.7541,
   277.2278,
   309.008,
   317.2743,
   269.6788,
   303.4219,
   291.1157,
   632.6239};
   Double_t m3lmet_Meas_rebin13_total_errors_felx3001[13] = {
   79.2939,
   7.171768,
   7.171768,
   7.101456,
   6.548607,
   6.548615,
   6.548615,
   7.453819,
   9.614746,
   9.614746,
   13.95819,
   18.87939,
   70.09438};
   Double_t m3lmet_Meas_rebin13_total_errors_fely3001[13] = {
   7.794265,
   8.966363,
   7.799006,
   13.22967,
   15.09456,
   15.93804,
   15.79024,
   27.35538,
   18.04321,
   20.83585,
   19.8078,
   18.12934,
   41.28146};
   Double_t m3lmet_Meas_rebin13_total_errors_fehx3001[13] = {
   79.2939,
   7.171768,
   7.171768,
   7.101456,
   6.548607,
   6.548615,
   6.548615,
   7.453819,
   9.614746,
   9.614746,
   13.95819,
   18.87939,
   70.09438};
   Double_t m3lmet_Meas_rebin13_total_errors_fehy3001[13] = {
   4.852439,
   5.167047,
   7.638982,
   12.73236,
   14.48828,
   17.75068,
   19.19981,
   18.66106,
   21.66637,
   18.54936,
   21.71335,
   21.50883,
   43.54144};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,m3lmet_Meas_rebin13_total_errors_fx3001,m3lmet_Meas_rebin13_total_errors_fy3001,m3lmet_Meas_rebin13_total_errors_felx3001,m3lmet_Meas_rebin13_total_errors_fehx3001,m3lmet_Meas_rebin13_total_errors_fely3001,m3lmet_Meas_rebin13_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin13_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin13_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin13_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin13_total_errors3001->SetMinimum(39.2501);
   Graph_m3lmet_Meas_rebin13_total_errors3001->SetMaximum(739.4207);
   Graph_m3lmet_Meas_rebin13_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin13_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin13_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin13_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin13_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin13_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin13_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin13_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin13_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin13_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin13_total_errors","Total unc.","F");

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
   m3lmet_Meas_rebin13_canvas->Modified();
   m3lmet_Meas_rebin13_canvas->cd();
   m3lmet_Meas_rebin13_canvas->SetSelected(m3lmet_Meas_rebin13_canvas);
}
