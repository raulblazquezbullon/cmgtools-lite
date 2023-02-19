void m3lmet_Meas_rebin10()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin10_canvas/m3lmet_Meas_rebin10
//=========  (Thu Dec 15 20:05:43 2022) by ROOT version 6.12/07
   TCanvas *m3lmet_Meas_rebin10_canvas = new TCanvas("m3lmet_Meas_rebin10_canvas", "m3lmet_Meas_rebin10",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin10_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin10_canvas->Range(0,0,1,1);
   m3lmet_Meas_rebin10_canvas->SetFillColor(0);
   m3lmet_Meas_rebin10_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin10_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin10_canvas->SetTickx(1);
   m3lmet_Meas_rebin10_canvas->SetTicky(1);
   m3lmet_Meas_rebin10_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin10_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin10_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin10_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin10_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-17.99021,525.641,701.6183);
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
   Double_t xAxis1[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_total__1 = new TH1D("m3lmet_Meas_rebin10_total__1","dummy",10, xAxis1);
   m3lmet_Meas_rebin10_total__1->SetBinContent(1,30.30355);
   m3lmet_Meas_rebin10_total__1->SetBinContent(2,59.0569);
   m3lmet_Meas_rebin10_total__1->SetBinContent(3,110.5533);
   m3lmet_Meas_rebin10_total__1->SetBinContent(4,139.0006);
   m3lmet_Meas_rebin10_total__1->SetBinContent(5,156.742);
   m3lmet_Meas_rebin10_total__1->SetBinContent(6,162.6208);
   m3lmet_Meas_rebin10_total__1->SetBinContent(7,188.8214);
   m3lmet_Meas_rebin10_total__1->SetBinContent(8,154.2705);
   m3lmet_Meas_rebin10_total__1->SetBinContent(9,165.3545);
   m3lmet_Meas_rebin10_total__1->SetBinContent(10,329.2209);
   m3lmet_Meas_rebin10_total__1->SetBinError(1,6.046296);
   m3lmet_Meas_rebin10_total__1->SetBinError(2,5.295136);
   m3lmet_Meas_rebin10_total__1->SetBinError(3,5.987916);
   m3lmet_Meas_rebin10_total__1->SetBinError(4,5.726499);
   m3lmet_Meas_rebin10_total__1->SetBinError(5,5.859184);
   m3lmet_Meas_rebin10_total__1->SetBinError(6,5.904828);
   m3lmet_Meas_rebin10_total__1->SetBinError(7,5.63108);
   m3lmet_Meas_rebin10_total__1->SetBinError(8,5.579217);
   m3lmet_Meas_rebin10_total__1->SetBinError(9,4.908603);
   m3lmet_Meas_rebin10_total__1->SetBinError(10,6.480277);
   m3lmet_Meas_rebin10_total__1->SetMinimum(0);
   m3lmet_Meas_rebin10_total__1->SetMaximum(658.4418);
   m3lmet_Meas_rebin10_total__1->SetEntries(15152);
   m3lmet_Meas_rebin10_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin10_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin10_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin10_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin10_stack = new THStack();
   m3lmet_Meas_rebin10_stack->SetName("m3lmet_Meas_rebin10_stack");
   m3lmet_Meas_rebin10_stack->SetTitle("m3lmet_Meas_rebin10");
   Double_t xAxis2[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1F *m3lmet_Meas_rebin10_stack_stack_1 = new TH1F("m3lmet_Meas_rebin10_stack_stack_1","m3lmet_Meas_rebin10",10, xAxis2);
   m3lmet_Meas_rebin10_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin10_stack_stack_1->SetMaximum(345.6819);
   m3lmet_Meas_rebin10_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin10_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin10_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin10_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->SetHistogram(m3lmet_Meas_rebin10_stack_stack_1);
   
   Double_t xAxis3[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin10_fakes_VV_stack_1","dummy",10, xAxis3);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(9,0.2915801);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(10,0.09719337);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(3,0.09719337);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(5,0.1374522);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(9,0.1683439);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(10,0.09719337);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_fakes_VV_stack_1,"");
   Double_t xAxis4[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(1,1.043068);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(2,2.198284);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(3,3.968813);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(4,4.388619);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(5,5.120055);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(6,5.585515);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(7,6.715917);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(8,7.20619);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(9,7.181376);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(10,11.63649);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(1,0.2729066);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(2,0.4019121);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(3,0.5186745);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(4,0.5402016);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(5,0.5834845);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(6,0.6237711);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(7,0.6682587);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(8,0.6995785);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(9,0.6910283);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(10,0.8945883);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_fakes_TT_stack_2,"");
   Double_t xAxis5[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin10_fakes_DY_stack_3","dummy",10, xAxis5);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(1,20.63427);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(2,13.75618);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(3,15.4757);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(4,12.03665);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(5,12.03665);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(6,12.03665);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(7,8.597611);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(8,10.31713);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(9,5.158566);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(10,6.878088);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(1,5.956599);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(2,4.863543);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(3,5.158566);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(4,4.549428);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(5,4.549428);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(6,4.549428);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(7,3.844968);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(8,4.211952);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(9,2.9783);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(10,3.439044);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_fakes_DY_stack_3,"");
   Double_t xAxis6[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin10_prompt_ZZ_stack_4","dummy",10, xAxis6);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(1,2.38531);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(2,3.486223);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(3,7.889873);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(4,7.706387);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(5,7.155931);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(6,7.155931);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(7,8.440329);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(8,5.688048);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(9,9.724727);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(10,13.57792);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(1,0.6615661);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(2,0.7997944);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(3,1.203194);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(4,1.189121);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(5,1.145866);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(6,1.145866);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(7,1.244459);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(8,1.021604);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(9,1.335794);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(10,1.578401);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_prompt_ZZ_stack_4,"");
   Double_t xAxis7[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(1,6.240911);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(2,39.61622);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(3,83.1217);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(4,114.8689);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(5,132.235);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(6,137.8427);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(7,165.0676);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(8,131.0591);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(9,142.9983);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(10,297.0312);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(1,0.7513174);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(2,1.892936);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(3,2.741932);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(4,3.2233);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(5,3.458379);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(6,3.530949);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(7,3.86394);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(8,3.442969);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(9,3.596374);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(10,5.18323);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin10_stack->Draw("same hist");
   Double_t xAxis8[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_total__2 = new TH1D("m3lmet_Meas_rebin10_total__2","dummy",10, xAxis8);
   m3lmet_Meas_rebin10_total__2->SetBinContent(1,30.30355);
   m3lmet_Meas_rebin10_total__2->SetBinContent(2,59.0569);
   m3lmet_Meas_rebin10_total__2->SetBinContent(3,110.5533);
   m3lmet_Meas_rebin10_total__2->SetBinContent(4,139.0006);
   m3lmet_Meas_rebin10_total__2->SetBinContent(5,156.742);
   m3lmet_Meas_rebin10_total__2->SetBinContent(6,162.6208);
   m3lmet_Meas_rebin10_total__2->SetBinContent(7,188.8214);
   m3lmet_Meas_rebin10_total__2->SetBinContent(8,154.2705);
   m3lmet_Meas_rebin10_total__2->SetBinContent(9,165.3545);
   m3lmet_Meas_rebin10_total__2->SetBinContent(10,329.2209);
   m3lmet_Meas_rebin10_total__2->SetBinError(1,6.046296);
   m3lmet_Meas_rebin10_total__2->SetBinError(2,5.295136);
   m3lmet_Meas_rebin10_total__2->SetBinError(3,5.987916);
   m3lmet_Meas_rebin10_total__2->SetBinError(4,5.726499);
   m3lmet_Meas_rebin10_total__2->SetBinError(5,5.859184);
   m3lmet_Meas_rebin10_total__2->SetBinError(6,5.904828);
   m3lmet_Meas_rebin10_total__2->SetBinError(7,5.63108);
   m3lmet_Meas_rebin10_total__2->SetBinError(8,5.579217);
   m3lmet_Meas_rebin10_total__2->SetBinError(9,4.908603);
   m3lmet_Meas_rebin10_total__2->SetBinError(10,6.480277);
   m3lmet_Meas_rebin10_total__2->SetMinimum(0);
   m3lmet_Meas_rebin10_total__2->SetMaximum(658.4418);
   m3lmet_Meas_rebin10_total__2->SetEntries(15152);
   m3lmet_Meas_rebin10_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin10_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin10_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin10_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin10_total_errors_fx3001[10] = {
   81.44543,
   172.2141,
   190.8528,
   208.6813,
   225.7076,
   243.026,
   264.3304,
   289.9227,
   323.6388,
   422.1309};
   Double_t m3lmet_Meas_rebin10_total_errors_fy3001[10] = {
   30.30355,
   59.0569,
   110.5533,
   139.0006,
   156.742,
   162.6208,
   188.8214,
   154.2705,
   165.3545,
   329.2209};
   Double_t m3lmet_Meas_rebin10_total_errors_felx3001[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_total_errors_fely3001[10] = {
   6.046296,
   5.295136,
   5.987916,
   5.726499,
   5.859184,
   5.904828,
   5.63108,
   5.579217,
   4.908603,
   6.480277};
   Double_t m3lmet_Meas_rebin10_total_errors_fehx3001[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_total_errors_fehy3001[10] = {
   6.046296,
   5.295136,
   5.987916,
   5.726499,
   5.859184,
   5.904828,
   5.63108,
   5.579217,
   4.908603,
   6.480277};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,m3lmet_Meas_rebin10_total_errors_fx3001,m3lmet_Meas_rebin10_total_errors_fy3001,m3lmet_Meas_rebin10_total_errors_felx3001,m3lmet_Meas_rebin10_total_errors_fehx3001,m3lmet_Meas_rebin10_total_errors_fely3001,m3lmet_Meas_rebin10_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin10_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin10_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetMinimum(21.83153);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetMaximum(366.8456);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin10_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_rebin10_data_graph_fx3002[10] = {
   81.44543,
   172.2141,
   190.8528,
   208.6813,
   225.7076,
   243.026,
   264.3304,
   289.9227,
   323.6388,
   422.1309};
   Double_t m3lmet_Meas_rebin10_data_graph_fy3002[10] = {
   26,
   63,
   121,
   155,
   139,
   157,
   208,
   141,
   163,
   340};
   Double_t m3lmet_Meas_rebin10_data_graph_felx3002[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_data_graph_fely3002[10] = {
   5.066111,
   7.916287,
   10.98501,
   12.43672,
   11.77587,
   12.51687,
   14.41091,
   11.86049,
   12.75431,
   18.43041};
   Double_t m3lmet_Meas_rebin10_data_graph_fehx3002[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_data_graph_fehy3002[10] = {
   6.164451,
   8.979462,
   12.03058,
   13.47698,
   12.8184,
   13.55688,
   15.44567,
   12.90271,
   13.79357,
   19.4576};
   grae = new TGraphAsymmErrors(10,m3lmet_Meas_rebin10_data_graph_fx3002,m3lmet_Meas_rebin10_data_graph_fy3002,m3lmet_Meas_rebin10_data_graph_felx3002,m3lmet_Meas_rebin10_data_graph_fehx3002,m3lmet_Meas_rebin10_data_graph_fely3002,m3lmet_Meas_rebin10_data_graph_fehy3002);
   grae->SetName("m3lmet_Meas_rebin10_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin10_data_graph3002 = new TH1F("Graph_m3lmet_Meas_rebin10_data_graph3002","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin10_data_graph3002->SetMinimum(18.8405);
   Graph_m3lmet_Meas_rebin10_data_graph3002->SetMaximum(393.31);
   Graph_m3lmet_Meas_rebin10_data_graph3002->SetDirectory(0);
   Graph_m3lmet_Meas_rebin10_data_graph3002->SetStats(0);
   Graph_m3lmet_Meas_rebin10_data_graph3002->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin10_data_graph3002->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin10_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin10_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin10_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin10_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin10_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin10_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin10_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin10_canvas->cd();
  
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
   Double_t xAxis9[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_total__3 = new TH1D("m3lmet_Meas_rebin10_total__3","dummy",10, xAxis9);
   m3lmet_Meas_rebin10_total__3->SetBinContent(1,1);
   m3lmet_Meas_rebin10_total__3->SetBinContent(2,1);
   m3lmet_Meas_rebin10_total__3->SetBinContent(3,1);
   m3lmet_Meas_rebin10_total__3->SetBinContent(4,1);
   m3lmet_Meas_rebin10_total__3->SetBinContent(5,1);
   m3lmet_Meas_rebin10_total__3->SetBinContent(6,1);
   m3lmet_Meas_rebin10_total__3->SetBinContent(7,1);
   m3lmet_Meas_rebin10_total__3->SetBinContent(8,1);
   m3lmet_Meas_rebin10_total__3->SetBinContent(9,1);
   m3lmet_Meas_rebin10_total__3->SetBinContent(10,1);
   m3lmet_Meas_rebin10_total__3->SetMinimum(0.5);
   m3lmet_Meas_rebin10_total__3->SetMaximum(2);
   m3lmet_Meas_rebin10_total__3->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin10_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin10_total__3->SetMarkerColor(ci);
   m3lmet_Meas_rebin10_total__3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_total__3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin10_total__3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_total__3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin10_total__3->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin10_total__3->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin10_total__3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin10_total__3->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin10_total__3->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin10_total__3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin10_total__3->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin10_total__3->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin10_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin10_total__3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_total__3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__3->Draw("AXIS");
   
   Double_t m3lmet_Meas_rebin10_total_errors_fx3003[10] = {
   81.44543,
   172.2141,
   190.8528,
   208.6813,
   225.7076,
   243.026,
   264.3304,
   289.9227,
   323.6388,
   422.1309};
   Double_t m3lmet_Meas_rebin10_total_errors_fy3003[10] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin10_total_errors_felx3003[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_total_errors_fely3003[10] = {
   0.1995243,
   0.08966159,
   0.05416317,
   0.04119765,
   0.03738107,
   0.0363104,
   0.02982225,
   0.03616515,
   0.02968532,
   0.01968367};
   Double_t m3lmet_Meas_rebin10_total_errors_fehx3003[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_total_errors_fehy3003[10] = {
   0.1995243,
   0.08966159,
   0.05416317,
   0.04119765,
   0.03738107,
   0.0363104,
   0.02982225,
   0.03616515,
   0.02968532,
   0.01968367};
   grae = new TGraphAsymmErrors(10,m3lmet_Meas_rebin10_total_errors_fx3003,m3lmet_Meas_rebin10_total_errors_fy3003,m3lmet_Meas_rebin10_total_errors_felx3003,m3lmet_Meas_rebin10_total_errors_fehx3003,m3lmet_Meas_rebin10_total_errors_fely3003,m3lmet_Meas_rebin10_total_errors_fehy3003);
   grae->SetName("m3lmet_Meas_rebin10_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_rebin10_total_errors_fx3004[10] = {
   81.44543,
   172.2141,
   190.8528,
   208.6813,
   225.7076,
   243.026,
   264.3304,
   289.9227,
   323.6388,
   422.1309};
   Double_t m3lmet_Meas_rebin10_total_errors_fy3004[10] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin10_total_errors_felx3004[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_total_errors_fely3004[10] = {
   0.1995243,
   0.08966159,
   0.05416317,
   0.04119765,
   0.03738107,
   0.0363104,
   0.02982225,
   0.03616515,
   0.02968532,
   0.01968367};
   Double_t m3lmet_Meas_rebin10_total_errors_fehx3004[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_total_errors_fehy3004[10] = {
   0.1995243,
   0.08966159,
   0.05416317,
   0.04119765,
   0.03738107,
   0.0363104,
   0.02982225,
   0.03616515,
   0.02968532,
   0.01968367};
   grae = new TGraphAsymmErrors(10,m3lmet_Meas_rebin10_total_errors_fx3004,m3lmet_Meas_rebin10_total_errors_fy3004,m3lmet_Meas_rebin10_total_errors_felx3004,m3lmet_Meas_rebin10_total_errors_fehx3004,m3lmet_Meas_rebin10_total_errors_fely3004,m3lmet_Meas_rebin10_total_errors_fehy3004);
   grae->SetName("m3lmet_Meas_rebin10_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_total__4 = new TH1D("m3lmet_Meas_rebin10_total__4","dummy",10, xAxis10);
   m3lmet_Meas_rebin10_total__4->SetBinContent(1,1);
   m3lmet_Meas_rebin10_total__4->SetBinContent(2,1);
   m3lmet_Meas_rebin10_total__4->SetBinContent(3,1);
   m3lmet_Meas_rebin10_total__4->SetBinContent(4,1);
   m3lmet_Meas_rebin10_total__4->SetBinContent(5,1);
   m3lmet_Meas_rebin10_total__4->SetBinContent(6,1);
   m3lmet_Meas_rebin10_total__4->SetBinContent(7,1);
   m3lmet_Meas_rebin10_total__4->SetBinContent(8,1);
   m3lmet_Meas_rebin10_total__4->SetBinContent(9,1);
   m3lmet_Meas_rebin10_total__4->SetBinContent(10,1);
   m3lmet_Meas_rebin10_total__4->SetMinimum(0.5);
   m3lmet_Meas_rebin10_total__4->SetMaximum(2);
   m3lmet_Meas_rebin10_total__4->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin10_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin10_total__4->SetMarkerColor(ci);
   m3lmet_Meas_rebin10_total__4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_total__4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin10_total__4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_total__4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin10_total__4->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin10_total__4->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin10_total__4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin10_total__4->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin10_total__4->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin10_total__4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin10_total__4->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin10_total__4->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin10_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin10_total__4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_total__4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[10] = {
   81.44543,
   172.2141,
   190.8528,
   208.6813,
   225.7076,
   243.026,
   264.3304,
   289.9227,
   323.6388,
   422.1309};
   Double_t data_div_fy3005[10] = {
   0.8579852,
   1.066768,
   1.094495,
   1.115103,
   0.8868077,
   0.9654359,
   1.10157,
   0.913979,
   0.9857608,
   1.032741};
   Double_t data_div_felx3005[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t data_div_fely3005[10] = {
   0.1671788,
   0.1340451,
   0.09936393,
   0.0894724,
   0.07512904,
   0.07696966,
   0.07632031,
   0.07688115,
   0.07713309,
   0.05598191};
   Double_t data_div_fehx3005[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t data_div_fehy3005[10] = {
   0.2034234,
   0.1520476,
   0.1088216,
   0.09695629,
   0.08178023,
   0.08336495,
   0.08180038,
   0.08363693,
   0.08341816,
   0.05910195};
   grae = new TGraphAsymmErrors(10,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin10_data_graph3005 = new TH1F("Graph_m3lmet_Meas_rebin10_data_graph3005","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin10_data_graph3005->SetMinimum(18.8405);
   Graph_m3lmet_Meas_rebin10_data_graph3005->SetMaximum(393.31);
   Graph_m3lmet_Meas_rebin10_data_graph3005->SetDirectory(0);
   Graph_m3lmet_Meas_rebin10_data_graph3005->SetStats(0);
   Graph_m3lmet_Meas_rebin10_data_graph3005->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin10_data_graph3005->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin10_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin10_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3lmet_Meas_rebin10_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3lmet_Meas_rebin10_canvas->cd();
   m3lmet_Meas_rebin10_canvas->Modified();
   m3lmet_Meas_rebin10_canvas->cd();
   m3lmet_Meas_rebin10_canvas->SetSelected(m3lmet_Meas_rebin10_canvas);
}
