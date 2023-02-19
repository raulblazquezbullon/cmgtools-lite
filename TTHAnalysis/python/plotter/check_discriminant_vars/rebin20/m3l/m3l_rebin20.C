void m3l_rebin20()
{
//=========Macro generated from canvas: m3l_rebin20_canvas/m3l_rebin20
//=========  (Thu Dec  8 14:39:15 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin20_canvas = new TCanvas("m3l_rebin20_canvas", "m3l_rebin20",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin20_canvas->SetHighLightColor(2);
   m3l_rebin20_canvas->Range(0,0,1,1);
   m3l_rebin20_canvas->SetFillColor(0);
   m3l_rebin20_canvas->SetBorderMode(0);
   m3l_rebin20_canvas->SetBorderSize(2);
   m3l_rebin20_canvas->SetTickx(1);
   m3l_rebin20_canvas->SetTicky(1);
   m3l_rebin20_canvas->SetLeftMargin(0.18);
   m3l_rebin20_canvas->SetRightMargin(0.04);
   m3l_rebin20_canvas->SetBottomMargin(0.13);
   m3l_rebin20_canvas->SetFrameFillStyle(0);
   m3l_rebin20_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-22.85998,525.641,891.5394);
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
   Double_t xAxis1[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1D *m3l_rebin20_total__1 = new TH1D("m3l_rebin20_total__1","dummy",20, xAxis1);
   m3l_rebin20_total__1->SetBinContent(4,1.719522);
   m3l_rebin20_total__1->SetBinContent(5,0.06649422);
   m3l_rebin20_total__1->SetBinContent(6,5.584599);
   m3l_rebin20_total__1->SetBinContent(7,0.4947804);
   m3l_rebin20_total__1->SetBinContent(8,0.7235839);
   m3l_rebin20_total__1->SetBinContent(9,13.94522);
   m3l_rebin20_total__1->SetBinContent(10,16.70729);
   m3l_rebin20_total__1->SetBinContent(11,24.41103);
   m3l_rebin20_total__1->SetBinContent(12,29.53053);
   m3l_rebin20_total__1->SetBinContent(13,42.94081);
   m3l_rebin20_total__1->SetBinContent(14,53.47403);
   m3l_rebin20_total__1->SetBinContent(15,110.5318);
   m3l_rebin20_total__1->SetBinContent(16,137.0152);
   m3l_rebin20_total__1->SetBinContent(17,138.2731);
   m3l_rebin20_total__1->SetBinContent(18,217.1739);
   m3l_rebin20_total__1->SetBinContent(19,285.0149);
   m3l_rebin20_total__1->SetBinContent(20,418.3377);
   m3l_rebin20_total__1->SetBinError(4,1.719522);
   m3l_rebin20_total__1->SetBinError(5,0.06649422);
   m3l_rebin20_total__1->SetBinError(6,2.984636);
   m3l_rebin20_total__1->SetBinError(7,0.2038782);
   m3l_rebin20_total__1->SetBinError(8,0.2558255);
   m3l_rebin20_total__1->SetBinError(9,4.262012);
   m3l_rebin20_total__1->SetBinError(10,3.5886);
   m3l_rebin20_total__1->SetBinError(11,3.679005);
   m3l_rebin20_total__1->SetBinError(12,2.901234);
   m3l_rebin20_total__1->SetBinError(13,3.545003);
   m3l_rebin20_total__1->SetBinError(14,4.374881);
   m3l_rebin20_total__1->SetBinError(15,5.226098);
   m3l_rebin20_total__1->SetBinError(16,5.937314);
   m3l_rebin20_total__1->SetBinError(17,5.196584);
   m3l_rebin20_total__1->SetBinError(18,6.5404);
   m3l_rebin20_total__1->SetBinError(19,6.798772);
   m3l_rebin20_total__1->SetBinError(20,7.49132);
   m3l_rebin20_total__1->SetMinimum(0);
   m3l_rebin20_total__1->SetMaximum(836.6754);
   m3l_rebin20_total__1->SetEntries(15152);
   m3l_rebin20_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin20_total__1->SetFillColor(ci);
   m3l_rebin20_total__1->SetMarkerStyle(20);
   m3l_rebin20_total__1->SetMarkerSize(1.1);
   m3l_rebin20_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin20_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin20_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin20_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin20_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin20_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin20_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin20_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin20_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin20_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin20_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin20_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_total__1->Draw("HIST");
   
   THStack *m3l_rebin20_stack = new THStack();
   m3l_rebin20_stack->SetName("m3l_rebin20_stack");
   m3l_rebin20_stack->SetTitle("m3l_rebin20");
   Double_t xAxis2[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1F *m3l_rebin20_stack_stack_1 = new TH1F("m3l_rebin20_stack_stack_1","m3l_rebin20",20, xAxis2);
   m3l_rebin20_stack_stack_1->SetMinimum(0);
   m3l_rebin20_stack_stack_1->SetMaximum(439.2546);
   m3l_rebin20_stack_stack_1->SetDirectory(0);
   m3l_rebin20_stack_stack_1->SetStats(0);
   m3l_rebin20_stack_stack_1->SetLineStyle(0);
   m3l_rebin20_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin20_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin20_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin20_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin20_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin20_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin20_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin20_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin20_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin20_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_stack->SetHistogram(m3l_rebin20_stack_stack_1);
   
   Double_t xAxis3[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1D *m3l_rebin20_fakes_VV_stack_1 = new TH1D("m3l_rebin20_fakes_VV_stack_1","dummy",20, xAxis3);
   m3l_rebin20_fakes_VV_stack_1->SetBinContent(15,0.09719337);
   m3l_rebin20_fakes_VV_stack_1->SetBinContent(17,0.1943867);
   m3l_rebin20_fakes_VV_stack_1->SetBinContent(19,0.2915801);
   m3l_rebin20_fakes_VV_stack_1->SetBinContent(20,0.09719337);
   m3l_rebin20_fakes_VV_stack_1->SetBinError(15,0.09719337);
   m3l_rebin20_fakes_VV_stack_1->SetBinError(17,0.1374522);
   m3l_rebin20_fakes_VV_stack_1->SetBinError(19,0.1683439);
   m3l_rebin20_fakes_VV_stack_1->SetBinError(20,0.09719337);
   m3l_rebin20_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin20_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin20_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin20_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin20_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin20_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin20_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin20_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin20_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin20_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin20_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin20_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin20_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin20_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin20_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin20_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_stack->Add(m3l_rebin20_fakes_VV_stack_1,"");
   Double_t xAxis4[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1D *m3l_rebin20_fakes_TT_stack_2 = new TH1D("m3l_rebin20_fakes_TT_stack_2","dummy",20, xAxis4);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(5,0.06649422);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(6,0.2451369);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(7,0.1329884);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(9,0.2659769);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(10,0.577608);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(11,0.598448);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(12,1.554181);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(13,1.375539);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(14,1.861838);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(15,3.790171);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(16,4.056148);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(17,4.122642);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(18,7.912813);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(19,12.65872);
   m3l_rebin20_fakes_TT_stack_2->SetBinContent(20,15.82563);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(5,0.06649422);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(6,0.1463565);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(7,0.09403703);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(9,0.1329884);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(10,0.2086328);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(11,0.1994827);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(12,0.3370225);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(13,0.310782);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(14,0.3518544);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(15,0.5020204);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(16,0.5193365);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(17,0.5319538);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(18,0.7314365);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(19,0.9230231);
   m3l_rebin20_fakes_TT_stack_2->SetBinError(20,1.038673);
   m3l_rebin20_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin20_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin20_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin20_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin20_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin20_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin20_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin20_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin20_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin20_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin20_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin20_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin20_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin20_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin20_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin20_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_stack->Add(m3l_rebin20_fakes_TT_stack_2,"");
   Double_t xAxis5[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1D *m3l_rebin20_fakes_DY_stack_3 = new TH1D("m3l_rebin20_fakes_DY_stack_3","dummy",20, xAxis5);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(4,1.719522);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(6,5.158566);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(9,10.31713);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(10,6.878088);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(11,6.878088);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(12,3.439044);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(13,5.158566);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(14,8.597611);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(15,10.31713);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(16,13.75618);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(17,8.597611);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(18,13.75618);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(19,12.03665);
   m3l_rebin20_fakes_DY_stack_3->SetBinContent(20,10.31713);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(4,1.719522);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(6,2.9783);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(9,4.211952);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(10,3.439044);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(11,3.439044);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(12,2.431771);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(13,2.9783);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(14,3.844968);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(15,4.211952);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(16,4.863543);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(17,3.844968);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(18,4.863543);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(19,4.549428);
   m3l_rebin20_fakes_DY_stack_3->SetBinError(20,4.211952);
   m3l_rebin20_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin20_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin20_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin20_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin20_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin20_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin20_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin20_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin20_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin20_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin20_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin20_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin20_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin20_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin20_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin20_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_stack->Add(m3l_rebin20_fakes_DY_stack_3,"");
   Double_t xAxis6[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1D *m3l_rebin20_prompt_ZZ_stack_4 = new TH1D("m3l_rebin20_prompt_ZZ_stack_4","dummy",20, xAxis6);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(9,1.100912);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(10,1.834854);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(11,1.467883);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(12,1.834854);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(13,3.302737);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(14,3.669708);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(15,6.421989);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(16,5.871533);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(17,6.238504);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(18,9.724727);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(19,12.11004);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinContent(20,19.63294);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(9,0.4494456);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(10,0.5802318);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(11,0.5189751);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(12,0.5802318);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(13,0.7784627);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(14,0.8205717);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(15,1.085514);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(16,1.03795);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(17,1.069895);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(18,1.335794);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(19,1.490643);
   m3l_rebin20_prompt_ZZ_stack_4->SetBinError(20,1.897988);
   m3l_rebin20_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin20_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin20_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin20_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin20_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin20_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin20_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin20_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin20_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin20_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin20_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin20_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin20_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin20_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin20_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin20_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_stack->Add(m3l_rebin20_prompt_ZZ_stack_4,"");
   Double_t xAxis7[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1D *m3l_rebin20_prompt_WZ_stack_5 = new TH1D("m3l_rebin20_prompt_WZ_stack_5","dummy",20, xAxis7);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(6,0.180896);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(7,0.361792);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(8,0.7235839);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(9,2.2612);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(10,7.416735);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(11,15.46661);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(12,22.70245);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(13,33.10396);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(14,39.34488);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(15,89.9053);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(16,113.3313);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(17,119.12);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(18,185.7802);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(19,247.9179);
   m3l_rebin20_prompt_WZ_stack_5->SetBinContent(20,372.4648);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(6,0.1279128);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(7,0.180896);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(8,0.2558255);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(9,0.45224);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(10,0.8190414);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(11,1.182761);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(12,1.432966);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(13,1.730372);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(14,1.886442);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(15,2.851623);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(16,3.201654);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(17,3.282402);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(18,4.0992);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(19,4.735365);
   m3l_rebin20_prompt_WZ_stack_5->SetBinError(20,5.804196);
   m3l_rebin20_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin20_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin20_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin20_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin20_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin20_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin20_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin20_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin20_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin20_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin20_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin20_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin20_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin20_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin20_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin20_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_stack->Add(m3l_rebin20_prompt_WZ_stack_5,"");
   m3l_rebin20_stack->Draw("same hist");
   Double_t xAxis8[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1D *m3l_rebin20_total__2 = new TH1D("m3l_rebin20_total__2","dummy",20, xAxis8);
   m3l_rebin20_total__2->SetBinContent(4,1.719522);
   m3l_rebin20_total__2->SetBinContent(5,0.06649422);
   m3l_rebin20_total__2->SetBinContent(6,5.584599);
   m3l_rebin20_total__2->SetBinContent(7,0.4947804);
   m3l_rebin20_total__2->SetBinContent(8,0.7235839);
   m3l_rebin20_total__2->SetBinContent(9,13.94522);
   m3l_rebin20_total__2->SetBinContent(10,16.70729);
   m3l_rebin20_total__2->SetBinContent(11,24.41103);
   m3l_rebin20_total__2->SetBinContent(12,29.53053);
   m3l_rebin20_total__2->SetBinContent(13,42.94081);
   m3l_rebin20_total__2->SetBinContent(14,53.47403);
   m3l_rebin20_total__2->SetBinContent(15,110.5318);
   m3l_rebin20_total__2->SetBinContent(16,137.0152);
   m3l_rebin20_total__2->SetBinContent(17,138.2731);
   m3l_rebin20_total__2->SetBinContent(18,217.1739);
   m3l_rebin20_total__2->SetBinContent(19,285.0149);
   m3l_rebin20_total__2->SetBinContent(20,418.3377);
   m3l_rebin20_total__2->SetBinError(4,1.719522);
   m3l_rebin20_total__2->SetBinError(5,0.06649422);
   m3l_rebin20_total__2->SetBinError(6,2.984636);
   m3l_rebin20_total__2->SetBinError(7,0.2038782);
   m3l_rebin20_total__2->SetBinError(8,0.2558255);
   m3l_rebin20_total__2->SetBinError(9,4.262012);
   m3l_rebin20_total__2->SetBinError(10,3.5886);
   m3l_rebin20_total__2->SetBinError(11,3.679005);
   m3l_rebin20_total__2->SetBinError(12,2.901234);
   m3l_rebin20_total__2->SetBinError(13,3.545003);
   m3l_rebin20_total__2->SetBinError(14,4.374881);
   m3l_rebin20_total__2->SetBinError(15,5.226098);
   m3l_rebin20_total__2->SetBinError(16,5.937314);
   m3l_rebin20_total__2->SetBinError(17,5.196584);
   m3l_rebin20_total__2->SetBinError(18,6.5404);
   m3l_rebin20_total__2->SetBinError(19,6.798772);
   m3l_rebin20_total__2->SetBinError(20,7.49132);
   m3l_rebin20_total__2->SetMinimum(0);
   m3l_rebin20_total__2->SetMaximum(836.6754);
   m3l_rebin20_total__2->SetEntries(15152);
   m3l_rebin20_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin20_total__2->SetFillColor(ci);
   m3l_rebin20_total__2->SetMarkerStyle(20);
   m3l_rebin20_total__2->SetMarkerSize(1.1);
   m3l_rebin20_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin20_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin20_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin20_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin20_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin20_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin20_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin20_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin20_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin20_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin20_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin20_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin20_total_errors_fx3001[17] = {
   121.8774,
   128.1281,
   134.3788,
   140.6295,
   146.881,
   154.0723,
   162.2027,
   170.333,
   178.4634,
   186.5938,
   194.7241,
   205.8023,
   220.3441,
   235.4017,
   256.0292,
   294.3552,
   409.7912};
   Double_t m3l_rebin20_total_errors_fy3001[17] = {
   1.719522,
   0.06649422,
   5.584599,
   0.4947804,
   0.7235839,
   13.94522,
   16.70729,
   24.41103,
   29.53053,
   42.94081,
   53.47403,
   110.5318,
   137.0152,
   138.2731,
   217.1739,
   285.0149,
   418.3377};
   Double_t m3l_rebin20_total_errors_felx3001[17] = {
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t m3l_rebin20_total_errors_fely3001[17] = {
   1.719522,
   0.06649422,
   2.984636,
   0.2038782,
   0.2558255,
   4.262012,
   3.5886,
   3.679005,
   2.901234,
   3.545003,
   4.374881,
   5.226098,
   5.937314,
   5.196584,
   6.5404,
   6.798772,
   7.49132};
   Double_t m3l_rebin20_total_errors_fehx3001[17] = {
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t m3l_rebin20_total_errors_fehy3001[17] = {
   1.719522,
   0.06649422,
   2.984636,
   0.2038782,
   0.2558255,
   4.262012,
   3.5886,
   3.679005,
   2.901234,
   3.545003,
   4.374881,
   5.226098,
   5.937314,
   5.196584,
   6.5404,
   6.798772,
   7.49132};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(17,m3l_rebin20_total_errors_fx3001,m3l_rebin20_total_errors_fy3001,m3l_rebin20_total_errors_felx3001,m3l_rebin20_total_errors_fehx3001,m3l_rebin20_total_errors_fely3001,m3l_rebin20_total_errors_fehy3001);
   grae->SetName("m3l_rebin20_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin20_total_errors3001 = new TH1F("Graph_m3l_rebin20_total_errors3001","Graph",100,80.62727,538.1248);
   Graph_m3l_rebin20_total_errors3001->SetMinimum(0);
   Graph_m3l_rebin20_total_errors3001->SetMaximum(468.4119);
   Graph_m3l_rebin20_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin20_total_errors3001->SetStats(0);
   Graph_m3l_rebin20_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin20_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin20_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin20_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin20_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin20_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin20_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin20_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin20_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin20_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin20_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin20_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin20_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin20_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin20_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin20_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin20_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin20_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin20_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin20_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin20_data_graph_fx3002[20] = {
   53.12534,
   109.376,
   115.6267,
   121.8774,
   128.1281,
   134.3788,
   140.6295,
   146.881,
   154.0723,
   162.2027,
   170.333,
   178.4634,
   186.5938,
   194.7241,
   205.8023,
   220.3441,
   235.4017,
   256.0292,
   294.3552,
   409.7912};
   Double_t m3l_rebin20_data_graph_fy3002[20] = {
   0,
   0,
   1,
   2,
   3,
   1,
   1,
   3,
   9,
   10,
   23,
   38,
   59,
   54,
   121,
   131,
   115,
   233,
   284,
   425};
   Double_t m3l_rebin20_data_graph_felx3002[20] = {
   53.12534,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t m3l_rebin20_data_graph_fely3002[20] = {
   0,
   0,
   0.8272525,
   1.29183,
   1.632727,
   0.8272525,
   0.8272525,
   1.632727,
   2.943511,
   3.108748,
   4.760806,
   6.137282,
   7.659464,
   7.325785,
   10.98501,
   11.43114,
   10.70841,
   15.2537,
   16.84273,
   20.60786};
   Double_t m3l_rebin20_data_graph_fehx3002[20] = {
   53.12534,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t m3l_rebin20_data_graph_fehy3002[20] = {
   1.841055,
   1.841055,
   2.29957,
   2.63791,
   2.918242,
   2.29957,
   2.29957,
   2.918242,
   4.110286,
   4.267035,
   5.865355,
   7.218633,
   8.724747,
   8.394025,
   12.03058,
   12.47494,
   11.75516,
   16.28654,
   17.87248,
   21.63217};
   grae = new TGraphAsymmErrors(20,m3l_rebin20_data_graph_fx3002,m3l_rebin20_data_graph_fy3002,m3l_rebin20_data_graph_felx3002,m3l_rebin20_data_graph_fehx3002,m3l_rebin20_data_graph_fely3002,m3l_rebin20_data_graph_fehy3002);
   grae->SetName("m3l_rebin20_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin20_data_graph3002 = new TH1F("Graph_m3l_rebin20_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin20_data_graph3002->SetMinimum(0);
   Graph_m3l_rebin20_data_graph3002->SetMaximum(491.2954);
   Graph_m3l_rebin20_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin20_data_graph3002->SetStats(0);
   Graph_m3l_rebin20_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin20_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin20_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin20_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin20_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin20_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin20_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin20_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin20_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin20_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin20_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin20_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin20_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin20_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin20_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin20_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin20_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin20_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin20_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin20_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin20_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin20_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin20_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin20_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin20_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin20_total_errors","Total unc.","F");
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
   m3l_rebin20_canvas->cd();
  
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
   Double_t xAxis9[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1D *m3l_rebin20_total__3 = new TH1D("m3l_rebin20_total__3","dummy",20, xAxis9);
   m3l_rebin20_total__3->SetBinContent(4,1);
   m3l_rebin20_total__3->SetBinContent(5,1);
   m3l_rebin20_total__3->SetBinContent(6,1);
   m3l_rebin20_total__3->SetBinContent(7,1);
   m3l_rebin20_total__3->SetBinContent(8,1);
   m3l_rebin20_total__3->SetBinContent(9,1);
   m3l_rebin20_total__3->SetBinContent(10,1);
   m3l_rebin20_total__3->SetBinContent(11,1);
   m3l_rebin20_total__3->SetBinContent(12,1);
   m3l_rebin20_total__3->SetBinContent(13,1);
   m3l_rebin20_total__3->SetBinContent(14,1);
   m3l_rebin20_total__3->SetBinContent(15,1);
   m3l_rebin20_total__3->SetBinContent(16,1);
   m3l_rebin20_total__3->SetBinContent(17,1);
   m3l_rebin20_total__3->SetBinContent(18,1);
   m3l_rebin20_total__3->SetBinContent(19,1);
   m3l_rebin20_total__3->SetBinContent(20,1);
   m3l_rebin20_total__3->SetMinimum(0.5);
   m3l_rebin20_total__3->SetMaximum(2);
   m3l_rebin20_total__3->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin20_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin20_total__3->SetMarkerColor(ci);
   m3l_rebin20_total__3->SetMarkerSize(1.1);
   m3l_rebin20_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin20_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin20_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin20_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin20_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin20_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin20_total__3->GetYaxis()->SetDecimals();
   m3l_rebin20_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin20_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin20_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin20_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin20_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin20_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_total__3->Draw("AXIS");
   
   Double_t m3l_rebin20_total_errors_fx3003[17] = {
   121.8774,
   128.1281,
   134.3788,
   140.6295,
   146.881,
   154.0723,
   162.2027,
   170.333,
   178.4634,
   186.5938,
   194.7241,
   205.8023,
   220.3441,
   235.4017,
   256.0292,
   294.3552,
   409.7912};
   Double_t m3l_rebin20_total_errors_fy3003[17] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t m3l_rebin20_total_errors_felx3003[17] = {
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t m3l_rebin20_total_errors_fely3003[17] = {
   1,
   1,
   0.5344405,
   0.4120579,
   0.3535534,
   0.3056253,
   0.2147925,
   0.1507108,
   0.09824524,
   0.08255557,
   0.08181319,
   0.04728141,
   0.04333325,
   0.03758202,
   0.03011596,
   0.02385409,
   0.01790735};
   Double_t m3l_rebin20_total_errors_fehx3003[17] = {
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t m3l_rebin20_total_errors_fehy3003[17] = {
   1,
   1,
   0.5344405,
   0.4120579,
   0.3535534,
   0.3056253,
   0.2147925,
   0.1507108,
   0.09824524,
   0.08255557,
   0.08181319,
   0.04728141,
   0.04333325,
   0.03758202,
   0.03011596,
   0.02385409,
   0.01790735};
   grae = new TGraphAsymmErrors(17,m3l_rebin20_total_errors_fx3003,m3l_rebin20_total_errors_fy3003,m3l_rebin20_total_errors_felx3003,m3l_rebin20_total_errors_fehx3003,m3l_rebin20_total_errors_fely3003,m3l_rebin20_total_errors_fehy3003);
   grae->SetName("m3l_rebin20_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin20_total_errors_fx3004[17] = {
   121.8774,
   128.1281,
   134.3788,
   140.6295,
   146.881,
   154.0723,
   162.2027,
   170.333,
   178.4634,
   186.5938,
   194.7241,
   205.8023,
   220.3441,
   235.4017,
   256.0292,
   294.3552,
   409.7912};
   Double_t m3l_rebin20_total_errors_fy3004[17] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t m3l_rebin20_total_errors_felx3004[17] = {
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t m3l_rebin20_total_errors_fely3004[17] = {
   1,
   1,
   0.5344405,
   0.4120579,
   0.3535534,
   0.3056253,
   0.2147925,
   0.1507108,
   0.09824524,
   0.08255557,
   0.08181319,
   0.04728141,
   0.04333325,
   0.03758202,
   0.03011596,
   0.02385409,
   0.01790735};
   Double_t m3l_rebin20_total_errors_fehx3004[17] = {
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t m3l_rebin20_total_errors_fehy3004[17] = {
   1,
   1,
   0.5344405,
   0.4120579,
   0.3535534,
   0.3056253,
   0.2147925,
   0.1507108,
   0.09824524,
   0.08255557,
   0.08181319,
   0.04728141,
   0.04333325,
   0.03758202,
   0.03011596,
   0.02385409,
   0.01790735};
   grae = new TGraphAsymmErrors(17,m3l_rebin20_total_errors_fx3004,m3l_rebin20_total_errors_fy3004,m3l_rebin20_total_errors_felx3004,m3l_rebin20_total_errors_fehx3004,m3l_rebin20_total_errors_fely3004,m3l_rebin20_total_errors_fehy3004);
   grae->SetName("m3l_rebin20_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[21] = {0, 106.2507, 112.5014, 118.7521, 125.0027, 131.2534, 137.5041, 143.7548, 150.0071, 158.1375, 166.2679, 174.3982, 182.5286, 190.6589, 198.7893, 212.8153, 227.8729, 242.9305, 269.128, 319.5825, 500}; 
   
   TH1D *m3l_rebin20_total__4 = new TH1D("m3l_rebin20_total__4","dummy",20, xAxis10);
   m3l_rebin20_total__4->SetBinContent(4,1);
   m3l_rebin20_total__4->SetBinContent(5,1);
   m3l_rebin20_total__4->SetBinContent(6,1);
   m3l_rebin20_total__4->SetBinContent(7,1);
   m3l_rebin20_total__4->SetBinContent(8,1);
   m3l_rebin20_total__4->SetBinContent(9,1);
   m3l_rebin20_total__4->SetBinContent(10,1);
   m3l_rebin20_total__4->SetBinContent(11,1);
   m3l_rebin20_total__4->SetBinContent(12,1);
   m3l_rebin20_total__4->SetBinContent(13,1);
   m3l_rebin20_total__4->SetBinContent(14,1);
   m3l_rebin20_total__4->SetBinContent(15,1);
   m3l_rebin20_total__4->SetBinContent(16,1);
   m3l_rebin20_total__4->SetBinContent(17,1);
   m3l_rebin20_total__4->SetBinContent(18,1);
   m3l_rebin20_total__4->SetBinContent(19,1);
   m3l_rebin20_total__4->SetBinContent(20,1);
   m3l_rebin20_total__4->SetMinimum(0.5);
   m3l_rebin20_total__4->SetMaximum(2);
   m3l_rebin20_total__4->SetEntries(15172);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin20_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin20_total__4->SetMarkerColor(ci);
   m3l_rebin20_total__4->SetMarkerSize(1.1);
   m3l_rebin20_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin20_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin20_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin20_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin20_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin20_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin20_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin20_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin20_total__4->GetYaxis()->SetDecimals();
   m3l_rebin20_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin20_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin20_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin20_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin20_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin20_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin20_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin20_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin20_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin20_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin20_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin20_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin20_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[20] = {
   53.12534,
   109.376,
   115.6267,
   121.8774,
   128.1281,
   134.3788,
   140.6295,
   146.881,
   154.0723,
   162.2027,
   170.333,
   178.4634,
   186.5938,
   194.7241,
   205.8023,
   220.3441,
   235.4017,
   256.0292,
   294.3552,
   409.7912};
   Double_t data_div_fy3005[20] = {
   0,
   0,
   0,
   1.163114,
   45.1167,
   0.1790639,
   2.021099,
   4.146029,
   0.6453824,
   0.5985413,
   0.9421972,
   1.286804,
   1.373984,
   1.009836,
   1.094708,
   0.9560984,
   0.8316872,
   1.072873,
   0.996439,
   1.015926};
   Double_t data_div_felx3005[20] = {
   53.12534,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t data_div_fely3005[20] = {
   0,
   0,
   0,
   0.7512725,
   24.55441,
   0.148131,
   1.671959,
   2.256444,
   0.2110767,
   0.1860714,
   0.1950269,
   0.2078284,
   0.1783726,
   0.1369971,
   0.09938325,
   0.0834297,
   0.07744391,
   0.07023728,
   0.05909422,
   0.0492613};
   Double_t data_div_fehx3005[20] = {
   53.12534,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.125343,
   3.126167,
   4.065178,
   4.065186,
   4.065178,
   4.065178,
   4.065178,
   4.065178,
   7.013016,
   7.528793,
   7.528786,
   13.09874,
   25.22726,
   90.20876};
   Double_t data_div_fehy3005[20] = {
   0,
   0,
   0,
   1.534095,
   43.88716,
   0.4117699,
   4.647657,
   4.033039,
   0.2947451,
   0.2553997,
   0.2402748,
   0.2444465,
   0.2031808,
   0.1569739,
   0.1088427,
   0.09104783,
   0.08501408,
   0.07499309,
   0.06270716,
   0.05170983};
   grae = new TGraphAsymmErrors(20,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin20_data_graph3005 = new TH1F("Graph_m3l_rebin20_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin20_data_graph3005->SetMinimum(0);
   Graph_m3l_rebin20_data_graph3005->SetMaximum(491.2954);
   Graph_m3l_rebin20_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin20_data_graph3005->SetStats(0);
   Graph_m3l_rebin20_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin20_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin20_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin20_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin20_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin20_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin20_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin20_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin20_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin20_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin20_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin20_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin20_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin20_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin20_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin20_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin20_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin20_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin20_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin20_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin20_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin20_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin20_canvas->cd();
   m3l_rebin20_canvas->Modified();
   m3l_rebin20_canvas->cd();
   m3l_rebin20_canvas->SetSelected(m3l_rebin20_canvas);
}
