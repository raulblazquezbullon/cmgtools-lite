void m3lmet_Meas_rebin9()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin9_canvas/m3lmet_Meas_rebin9
//=========  (Thu Dec 15 20:04:10 2022) by ROOT version 6.12/07
   TCanvas *m3lmet_Meas_rebin9_canvas = new TCanvas("m3lmet_Meas_rebin9_canvas", "m3lmet_Meas_rebin9",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin9_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin9_canvas->Range(0,0,1,1);
   m3lmet_Meas_rebin9_canvas->SetFillColor(0);
   m3lmet_Meas_rebin9_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin9_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin9_canvas->SetTickx(1);
   m3lmet_Meas_rebin9_canvas->SetTicky(1);
   m3lmet_Meas_rebin9_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin9_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin9_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin9_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin9_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-18.77241,525.641,732.1239);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.18);
   pad1->SetRightMargin(0.04);
   pad1->SetTopMargin(0.06);
   pad1->SetBottomMargin(0.025);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis1[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_total__1 = new TH1D("m3lmet_Meas_rebin9_total__1","dummy",9, xAxis1);
   m3lmet_Meas_rebin9_total__1->SetBinContent(1,36.43467);
   m3lmet_Meas_rebin9_total__1->SetBinContent(2,72.41786);
   m3lmet_Meas_rebin9_total__1->SetBinContent(3,135.26);
   m3lmet_Meas_rebin9_total__1->SetBinContent(4,162.5034);
   m3lmet_Meas_rebin9_total__1->SetBinContent(5,176.0908);
   m3lmet_Meas_rebin9_total__1->SetBinContent(6,205.0303);
   m3lmet_Meas_rebin9_total__1->SetBinContent(7,176.5941);
   m3lmet_Meas_rebin9_total__1->SetBinContent(8,188.0783);
   m3lmet_Meas_rebin9_total__1->SetBinContent(9,343.5351);
   m3lmet_Meas_rebin9_total__1->SetBinError(1,6.536833);
   m3lmet_Meas_rebin9_total__1->SetBinError(2,5.147781);
   m3lmet_Meas_rebin9_total__1->SetBinError(3,6.622759);
   m3lmet_Meas_rebin9_total__1->SetBinError(4,6.359746);
   m3lmet_Meas_rebin9_total__1->SetBinError(5,5.782161);
   m3lmet_Meas_rebin9_total__1->SetBinError(6,6.45146);
   m3lmet_Meas_rebin9_total__1->SetBinError(7,5.261775);
   m3lmet_Meas_rebin9_total__1->SetBinError(8,5.63156);
   m3lmet_Meas_rebin9_total__1->SetBinError(9,6.585862);
   m3lmet_Meas_rebin9_total__1->SetMinimum(0);
   m3lmet_Meas_rebin9_total__1->SetMaximum(687.0701);
   m3lmet_Meas_rebin9_total__1->SetEntries(15152);
   m3lmet_Meas_rebin9_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin9_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin9_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin9_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin9_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin9_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin9_stack = new THStack();
   m3lmet_Meas_rebin9_stack->SetName("m3lmet_Meas_rebin9_stack");
   m3lmet_Meas_rebin9_stack->SetTitle("m3lmet_Meas_rebin9");
   Double_t xAxis2[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1F *m3lmet_Meas_rebin9_stack_stack_1 = new TH1F("m3lmet_Meas_rebin9_stack_stack_1","m3lmet_Meas_rebin9",9, xAxis2);
   m3lmet_Meas_rebin9_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin9_stack_stack_1->SetMaximum(360.7118);
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
   m3lmet_Meas_rebin9_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->SetHistogram(m3lmet_Meas_rebin9_stack_stack_1);
   
   Double_t xAxis3[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin9_fakes_VV_stack_1","dummy",9, xAxis3);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinContent(8,0.2915801);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinContent(9,0.09719337);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinError(3,0.09719337);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinError(5,0.1374522);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinError(8,0.1683439);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetBinError(9,0.09719337);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(1,1.109562);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(2,2.796732);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(3,4.766744);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(4,4.654596);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(5,5.452526);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(6,7.447353);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(7,7.979307);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(8,8.469581);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinContent(9,12.36793);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(1,0.2808905);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(2,0.4486944);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(3,0.5675218);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(4,0.5563306);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(5,0.6094296);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(6,0.709964);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(7,0.7284077);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(8,0.7572439);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetBinError(9,0.921371);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(1,24.07331);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(2,12.03665);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(3,18.91474);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(4,15.4757);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(5,10.31713);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(6,13.75618);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(7,6.878088);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(8,8.597611);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinContent(9,6.878088);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(1,6.433863);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(2,4.549428);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(3,5.70301);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(4,5.158566);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(5,4.211952);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(6,4.863543);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(7,3.439044);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(8,3.844968);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetBinError(9,3.439044);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(1,2.568796);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(2,4.220164);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(3,9.908212);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(4,6.972446);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(5,8.8073);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(6,8.990785);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(7,7.522902);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(8,9.541241);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinContent(9,14.67883);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(1,0.6865395);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(2,0.8799651);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(3,1.348337);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(4,1.13108);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(5,1.271224);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(6,1.284398);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(7,1.17488);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(8,1.323132);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetBinError(9,1.641143);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(1,8.683007);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(2,53.36431);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(3,101.5731);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(4,135.4006);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(5,151.3195);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(6,174.836);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(7,154.2138);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(8,161.1783);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinContent(9,309.513);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(1,0.8862057);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(2,2.196974);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(3,3.03102);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(4,3.499531);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(5,3.699533);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(6,3.976627);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(7,3.734746);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(8,3.818148);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetBinError(9,5.291014);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_stack->Add(m3lmet_Meas_rebin9_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin9_stack->Draw("same hist");
   Double_t xAxis8[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_total__2 = new TH1D("m3lmet_Meas_rebin9_total__2","dummy",9, xAxis8);
   m3lmet_Meas_rebin9_total__2->SetBinContent(1,36.43467);
   m3lmet_Meas_rebin9_total__2->SetBinContent(2,72.41786);
   m3lmet_Meas_rebin9_total__2->SetBinContent(3,135.26);
   m3lmet_Meas_rebin9_total__2->SetBinContent(4,162.5034);
   m3lmet_Meas_rebin9_total__2->SetBinContent(5,176.0908);
   m3lmet_Meas_rebin9_total__2->SetBinContent(6,205.0303);
   m3lmet_Meas_rebin9_total__2->SetBinContent(7,176.5941);
   m3lmet_Meas_rebin9_total__2->SetBinContent(8,188.0783);
   m3lmet_Meas_rebin9_total__2->SetBinContent(9,343.5351);
   m3lmet_Meas_rebin9_total__2->SetBinError(1,6.536833);
   m3lmet_Meas_rebin9_total__2->SetBinError(2,5.147781);
   m3lmet_Meas_rebin9_total__2->SetBinError(3,6.622759);
   m3lmet_Meas_rebin9_total__2->SetBinError(4,6.359746);
   m3lmet_Meas_rebin9_total__2->SetBinError(5,5.782161);
   m3lmet_Meas_rebin9_total__2->SetBinError(6,6.45146);
   m3lmet_Meas_rebin9_total__2->SetBinError(7,5.261775);
   m3lmet_Meas_rebin9_total__2->SetBinError(8,5.63156);
   m3lmet_Meas_rebin9_total__2->SetBinError(9,6.585862);
   m3lmet_Meas_rebin9_total__2->SetMinimum(0);
   m3lmet_Meas_rebin9_total__2->SetMaximum(687.0701);
   m3lmet_Meas_rebin9_total__2->SetEntries(15152);
   m3lmet_Meas_rebin9_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin9_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin9_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin9_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin9_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin9_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__2->GetZaxis()->SetTitleSize(0.06);
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
   36.43467,
   72.41786,
   135.26,
   162.5034,
   176.0908,
   205.0303,
   176.5941,
   188.0783,
   343.5351};
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
   6.536833,
   5.147781,
   6.622759,
   6.359746,
   5.782161,
   6.45146,
   5.261775,
   5.63156,
   6.585862};
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
   6.536833,
   5.147781,
   6.622759,
   6.359746,
   5.782161,
   6.45146,
   5.261775,
   5.63156,
   6.585862};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,m3lmet_Meas_rebin9_total_errors_fx3001,m3lmet_Meas_rebin9_total_errors_fy3001,m3lmet_Meas_rebin9_total_errors_felx3001,m3lmet_Meas_rebin9_total_errors_fehx3001,m3lmet_Meas_rebin9_total_errors_fely3001,m3lmet_Meas_rebin9_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin9_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin9_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin9_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetMinimum(26.90806);
   Graph_m3lmet_Meas_rebin9_total_errors3001->SetMaximum(382.1432);
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
   Graph_m3lmet_Meas_rebin9_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin9_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_rebin9_data_graph_fx3002[9] = {
   82.48135,
   175.3219,
   195.7623,
   215.3026,
   234.2208,
   256.0884,
   282.3847,
   317.9758,
   419.8395};
   Double_t m3lmet_Meas_rebin9_data_graph_fy3002[9] = {
   28,
   85,
   157,
   152,
   158,
   222,
   167,
   191,
   353};
   Double_t m3lmet_Meas_rebin9_data_graph_felx3002[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t m3lmet_Meas_rebin9_data_graph_fely3002[9] = {
   5.259811,
   9.20156,
   12.51687,
   12.31551,
   12.55675,
   14.88875,
   12.91017,
   13.80846,
   18.7798};
   Double_t m3lmet_Meas_rebin9_data_graph_fehx3002[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t m3lmet_Meas_rebin9_data_graph_fehy3002[9] = {
   6.354577,
   10.25594,
   13.55688,
   13.35617,
   13.59664,
   15.92239,
   13.94896,
   14.84473,
   19.80647};
   grae = new TGraphAsymmErrors(9,m3lmet_Meas_rebin9_data_graph_fx3002,m3lmet_Meas_rebin9_data_graph_fy3002,m3lmet_Meas_rebin9_data_graph_felx3002,m3lmet_Meas_rebin9_data_graph_fehx3002,m3lmet_Meas_rebin9_data_graph_fely3002,m3lmet_Meas_rebin9_data_graph_fehy3002);
   grae->SetName("m3lmet_Meas_rebin9_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin9_data_graph3002 = new TH1F("Graph_m3lmet_Meas_rebin9_data_graph3002","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin9_data_graph3002->SetMinimum(20.46617);
   Graph_m3lmet_Meas_rebin9_data_graph3002->SetMaximum(407.8131);
   Graph_m3lmet_Meas_rebin9_data_graph3002->SetDirectory(0);
   Graph_m3lmet_Meas_rebin9_data_graph3002->SetStats(0);
   Graph_m3lmet_Meas_rebin9_data_graph3002->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin9_data_graph3002->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin9_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin9_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin9_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin9_prompt_WZ_stack_5","WZ","F");

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
   TLatex *   tex = new TLatex(0.96,0.952,"13.09 fb^{-1} (13.6 TeV)");
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
   pad1->Modified();
   m3lmet_Meas_rebin9_canvas->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0,0,1,1);
   pad2->SetFillColor(0);
   pad2->SetFillStyle(4000);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.18);
   pad2->SetRightMargin(0.04);
   pad2->SetTopMargin(0.06);
   pad2->SetBottomMargin(0.3);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   Double_t xAxis9[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_total__3 = new TH1D("m3lmet_Meas_rebin9_total__3","dummy",9, xAxis9);
   m3lmet_Meas_rebin9_total__3->SetBinContent(1,1);
   m3lmet_Meas_rebin9_total__3->SetBinContent(2,1);
   m3lmet_Meas_rebin9_total__3->SetBinContent(3,1);
   m3lmet_Meas_rebin9_total__3->SetBinContent(4,1);
   m3lmet_Meas_rebin9_total__3->SetBinContent(5,1);
   m3lmet_Meas_rebin9_total__3->SetBinContent(6,1);
   m3lmet_Meas_rebin9_total__3->SetBinContent(7,1);
   m3lmet_Meas_rebin9_total__3->SetBinContent(8,1);
   m3lmet_Meas_rebin9_total__3->SetBinContent(9,1);
   m3lmet_Meas_rebin9_total__3->SetMinimum(0.5);
   m3lmet_Meas_rebin9_total__3->SetMaximum(2);
   m3lmet_Meas_rebin9_total__3->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin9_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin9_total__3->SetMarkerColor(ci);
   m3lmet_Meas_rebin9_total__3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_total__3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin9_total__3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_total__3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin9_total__3->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin9_total__3->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin9_total__3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin9_total__3->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin9_total__3->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin9_total__3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin9_total__3->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin9_total__3->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin9_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin9_total__3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_total__3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__3->Draw("AXIS");
   
   Double_t m3lmet_Meas_rebin9_total_errors_fx3003[9] = {
   82.48135,
   175.3219,
   195.7623,
   215.3026,
   234.2208,
   256.0884,
   282.3847,
   317.9758,
   419.8395};
   Double_t m3lmet_Meas_rebin9_total_errors_fy3003[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin9_total_errors_felx3003[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t m3lmet_Meas_rebin9_total_errors_fely3003[9] = {
   0.1794124,
   0.07108441,
   0.04896318,
   0.03913608,
   0.03283624,
   0.03146589,
   0.02979587,
   0.02994263,
   0.01917086};
   Double_t m3lmet_Meas_rebin9_total_errors_fehx3003[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t m3lmet_Meas_rebin9_total_errors_fehy3003[9] = {
   0.1794124,
   0.07108441,
   0.04896318,
   0.03913608,
   0.03283624,
   0.03146589,
   0.02979587,
   0.02994263,
   0.01917086};
   grae = new TGraphAsymmErrors(9,m3lmet_Meas_rebin9_total_errors_fx3003,m3lmet_Meas_rebin9_total_errors_fy3003,m3lmet_Meas_rebin9_total_errors_felx3003,m3lmet_Meas_rebin9_total_errors_fehx3003,m3lmet_Meas_rebin9_total_errors_fely3003,m3lmet_Meas_rebin9_total_errors_fehy3003);
   grae->SetName("m3lmet_Meas_rebin9_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_rebin9_total_errors_fx3004[9] = {
   82.48135,
   175.3219,
   195.7623,
   215.3026,
   234.2208,
   256.0884,
   282.3847,
   317.9758,
   419.8395};
   Double_t m3lmet_Meas_rebin9_total_errors_fy3004[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin9_total_errors_felx3004[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t m3lmet_Meas_rebin9_total_errors_fely3004[9] = {
   0.1794124,
   0.07108441,
   0.04896318,
   0.03913608,
   0.03283624,
   0.03146589,
   0.02979587,
   0.02994263,
   0.01917086};
   Double_t m3lmet_Meas_rebin9_total_errors_fehx3004[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t m3lmet_Meas_rebin9_total_errors_fehy3004[9] = {
   0.1794124,
   0.07108441,
   0.04896318,
   0.03913608,
   0.03283624,
   0.03146589,
   0.02979587,
   0.02994263,
   0.01917086};
   grae = new TGraphAsymmErrors(9,m3lmet_Meas_rebin9_total_errors_fx3004,m3lmet_Meas_rebin9_total_errors_fy3004,m3lmet_Meas_rebin9_total_errors_felx3004,m3lmet_Meas_rebin9_total_errors_fehx3004,m3lmet_Meas_rebin9_total_errors_fely3004,m3lmet_Meas_rebin9_total_errors_fehy3004);
   grae->SetName("m3lmet_Meas_rebin9_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[10] = {0, 164.9627, 185.6811, 205.8435, 224.7617, 243.6799, 268.4968, 296.2727, 339.6789, 500}; 
   
   TH1D *m3lmet_Meas_rebin9_total__4 = new TH1D("m3lmet_Meas_rebin9_total__4","dummy",9, xAxis10);
   m3lmet_Meas_rebin9_total__4->SetBinContent(1,1);
   m3lmet_Meas_rebin9_total__4->SetBinContent(2,1);
   m3lmet_Meas_rebin9_total__4->SetBinContent(3,1);
   m3lmet_Meas_rebin9_total__4->SetBinContent(4,1);
   m3lmet_Meas_rebin9_total__4->SetBinContent(5,1);
   m3lmet_Meas_rebin9_total__4->SetBinContent(6,1);
   m3lmet_Meas_rebin9_total__4->SetBinContent(7,1);
   m3lmet_Meas_rebin9_total__4->SetBinContent(8,1);
   m3lmet_Meas_rebin9_total__4->SetBinContent(9,1);
   m3lmet_Meas_rebin9_total__4->SetMinimum(0.5);
   m3lmet_Meas_rebin9_total__4->SetMaximum(2);
   m3lmet_Meas_rebin9_total__4->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin9_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin9_total__4->SetMarkerColor(ci);
   m3lmet_Meas_rebin9_total__4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin9_total__4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin9_total__4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin9_total__4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin9_total__4->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin9_total__4->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin9_total__4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin9_total__4->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin9_total__4->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin9_total__4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin9_total__4->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin9_total__4->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin9_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin9_total__4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin9_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin9_total__4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin9_total__4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin9_total__4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin9_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[9] = {
   82.48135,
   175.3219,
   195.7623,
   215.3026,
   234.2208,
   256.0884,
   282.3847,
   317.9758,
   419.8395};
   Double_t data_div_fy3005[9] = {
   0.7684987,
   1.173744,
   1.160728,
   0.9353652,
   0.8972642,
   1.082767,
   0.9456713,
   1.015534,
   1.027552};
   Double_t data_div_felx3005[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t data_div_fely3005[9] = {
   0.1443628,
   0.127062,
   0.09253935,
   0.07578619,
   0.0713084,
   0.07261734,
   0.07310646,
   0.07341867,
   0.05466631};
   Double_t data_div_fehx3005[9] = {
   82.48135,
   10.35922,
   10.08119,
   9.459106,
   9.459106,
   12.40841,
   13.88797,
   21.70311,
   80.16054};
   Double_t data_div_fehy3005[9] = {
   0.1744101,
   0.1416217,
   0.1002283,
   0.08219012,
   0.07721376,
   0.07765874,
   0.07898882,
   0.07892845,
   0.05765488};
   grae = new TGraphAsymmErrors(9,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin9_data_graph3005 = new TH1F("Graph_m3lmet_Meas_rebin9_data_graph3005","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin9_data_graph3005->SetMinimum(20.46617);
   Graph_m3lmet_Meas_rebin9_data_graph3005->SetMaximum(407.8131);
   Graph_m3lmet_Meas_rebin9_data_graph3005->SetDirectory(0);
   Graph_m3lmet_Meas_rebin9_data_graph3005->SetStats(0);
   Graph_m3lmet_Meas_rebin9_data_graph3005->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin9_data_graph3005->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin9_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin9_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin9_total_errors","stat. unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin9_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3lmet_Meas_rebin9_canvas->cd();
   m3lmet_Meas_rebin9_canvas->Modified();
   m3lmet_Meas_rebin9_canvas->cd();
   m3lmet_Meas_rebin9_canvas->SetSelected(m3lmet_Meas_rebin9_canvas);
}
