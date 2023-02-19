void m3l_rebin15()
{
//=========Macro generated from canvas: m3l_rebin15_canvas/m3l_rebin15
//=========  (Thu Dec  8 14:33:03 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin15_canvas = new TCanvas("m3l_rebin15_canvas", "m3l_rebin15",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin15_canvas->SetHighLightColor(2);
   m3l_rebin15_canvas->Range(0,0,1,1);
   m3l_rebin15_canvas->SetFillColor(0);
   m3l_rebin15_canvas->SetBorderMode(0);
   m3l_rebin15_canvas->SetBorderSize(2);
   m3l_rebin15_canvas->SetTickx(1);
   m3l_rebin15_canvas->SetTicky(1);
   m3l_rebin15_canvas->SetLeftMargin(0.18);
   m3l_rebin15_canvas->SetRightMargin(0.04);
   m3l_rebin15_canvas->SetBottomMargin(0.13);
   m3l_rebin15_canvas->SetFrameFillStyle(0);
   m3l_rebin15_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-29.97021,525.641,1168.838);
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
   Double_t xAxis1[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_total__1 = new TH1D("m3l_rebin15_total__1","dummy",15, xAxis1);
   m3l_rebin15_total__1->SetBinContent(3,1.719522);
   m3l_rebin15_total__1->SetBinContent(4,1.919005);
   m3l_rebin15_total__1->SetBinContent(5,4.003433);
   m3l_rebin15_total__1->SetBinContent(6,0.9470204);
   m3l_rebin15_total__1->SetBinContent(7,18.41231);
   m3l_rebin15_total__1->SetBinContent(8,25.90884);
   m3l_rebin15_total__1->SetBinContent(9,40.27291);
   m3l_rebin15_total__1->SetBinContent(10,58.11275);
   m3l_rebin15_total__1->SetBinContent(11,107.6217);
   m3l_rebin15_total__1->SetBinContent(12,178.2274);
   m3l_rebin15_total__1->SetBinContent(13,186.5839);
   m3l_rebin15_total__1->SetBinContent(14,323.7609);
   m3l_rebin15_total__1->SetBinContent(15,548.4549);
   m3l_rebin15_total__1->SetBinError(3,1.719522);
   m3l_rebin15_total__1->SetBinError(4,1.723375);
   m3l_rebin15_total__1->SetBinError(5,2.442743);
   m3l_rebin15_total__1->SetBinError(6,0.2871768);
   m3l_rebin15_total__1->SetBinError(7,4.633321);
   m3l_rebin15_total__1->SetBinError(8,3.706277);
   m3l_rebin15_total__1->SetBinError(9,4.217923);
   m3l_rebin15_total__1->SetBinError(10,4.098109);
   m3l_rebin15_total__1->SetBinError(11,5.95694);
   m3l_rebin15_total__1->SetBinError(12,6.480031);
   m3l_rebin15_total__1->SetBinError(13,6.092931);
   m3l_rebin15_total__1->SetBinError(14,7.637971);
   m3l_rebin15_total__1->SetBinError(15,8.755689);
   m3l_rebin15_total__1->SetMinimum(0);
   m3l_rebin15_total__1->SetMaximum(1096.91);
   m3l_rebin15_total__1->SetEntries(15152);
   m3l_rebin15_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin15_total__1->SetFillColor(ci);
   m3l_rebin15_total__1->SetMarkerStyle(20);
   m3l_rebin15_total__1->SetMarkerSize(1.1);
   m3l_rebin15_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin15_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin15_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin15_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin15_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin15_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_total__1->Draw("HIST");
   
   THStack *m3l_rebin15_stack = new THStack();
   m3l_rebin15_stack->SetName("m3l_rebin15_stack");
   m3l_rebin15_stack->SetTitle("m3l_rebin15");
   Double_t xAxis2[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1F *m3l_rebin15_stack_stack_1 = new TH1F("m3l_rebin15_stack_stack_1","m3l_rebin15",15, xAxis2);
   m3l_rebin15_stack_stack_1->SetMinimum(0);
   m3l_rebin15_stack_stack_1->SetMaximum(575.8777);
   m3l_rebin15_stack_stack_1->SetDirectory(0);
   m3l_rebin15_stack_stack_1->SetStats(0);
   m3l_rebin15_stack_stack_1->SetLineStyle(0);
   m3l_rebin15_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->SetHistogram(m3l_rebin15_stack_stack_1);
   
   Double_t xAxis3[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_fakes_VV_stack_1 = new TH1D("m3l_rebin15_fakes_VV_stack_1","dummy",15, xAxis3);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(11,0.09719337);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(13,0.1943867);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(15,0.3887735);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(11,0.09719337);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(13,0.1374522);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(15,0.1943867);
   m3l_rebin15_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin15_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin15_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin15_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_fakes_VV_stack_1,"");
   Double_t xAxis4[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_fakes_TT_stack_2 = new TH1D("m3l_rebin15_fakes_TT_stack_2","dummy",15, xAxis4);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(4,0.1994827);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(5,0.1121484);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(6,0.1329884);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(7,0.4654596);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(8,0.9100791);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(9,1.620676);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(10,1.973987);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(11,3.856665);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(12,5.253044);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(13,6.183963);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(14,12.76689);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(15,21.56894);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(4,0.1151714);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(5,0.1121484);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(6,0.09403703);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(7,0.1759272);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(8,0.2561934);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(9,0.3435195);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(10,0.369295);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(11,0.5064049);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(12,0.5910136);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(13,0.6548922);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(14,0.921371);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(15,1.212839);
   m3l_rebin15_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin15_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin15_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin15_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_fakes_TT_stack_2,"");
   Double_t xAxis5[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_fakes_DY_stack_3 = new TH1D("m3l_rebin15_fakes_DY_stack_3","dummy",15, xAxis5);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(3,1.719522);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(4,1.719522);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(5,3.439044);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(7,12.03665);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(8,6.878088);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(9,8.597611);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(10,6.878088);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(11,15.4757);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(12,15.4757);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(13,12.03665);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(14,17.19522);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(15,15.4757);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(3,1.719522);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(4,1.719522);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(5,2.431771);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(7,4.549428);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(8,3.439044);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(9,3.844968);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(10,3.439044);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(11,5.158566);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(12,5.158566);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(13,4.549428);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(14,5.437606);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(15,5.158566);
   m3l_rebin15_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin15_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin15_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin15_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_fakes_DY_stack_3,"");
   Double_t xAxis6[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_prompt_ZZ_stack_4 = new TH1D("m3l_rebin15_prompt_ZZ_stack_4","dummy",15, xAxis6);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(7,2.201825);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(8,2.201825);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(9,1.834854);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(10,4.036679);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(11,6.78896);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(12,8.440329);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(13,8.256843);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(14,14.49535);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(15,24.95402);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(7,0.6356121);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(8,0.6356121);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(9,0.5802318);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(10,0.8606229);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(11,1.116098);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(12,1.244459);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(13,1.230858);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(14,1.630854);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(15,2.139789);
   m3l_rebin15_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin15_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin15_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin15_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_prompt_ZZ_stack_4,"");
   Double_t xAxis7[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_prompt_WZ_stack_5 = new TH1D("m3l_rebin15_prompt_WZ_stack_5","dummy",15, xAxis7);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(5,0.45224);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(6,0.8140319);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(7,3.708368);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(8,15.91885);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(9,28.21977);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(10,45.224);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(11,81.40319);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(12,149.0583);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(13,159.912);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(14,279.3034);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(15,486.0675);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(5,0.2022479);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(6,0.271344);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(7,0.5791497);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(8,1.199928);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(9,1.59763);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(10,2.022479);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(11,2.71344);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(12,3.671787);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(13,3.80312);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(14,5.026175);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(15,6.630522);
   m3l_rebin15_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin15_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin15_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin15_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_prompt_WZ_stack_5,"");
   m3l_rebin15_stack->Draw("same hist");
   Double_t xAxis8[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_total__2 = new TH1D("m3l_rebin15_total__2","dummy",15, xAxis8);
   m3l_rebin15_total__2->SetBinContent(3,1.719522);
   m3l_rebin15_total__2->SetBinContent(4,1.919005);
   m3l_rebin15_total__2->SetBinContent(5,4.003433);
   m3l_rebin15_total__2->SetBinContent(6,0.9470204);
   m3l_rebin15_total__2->SetBinContent(7,18.41231);
   m3l_rebin15_total__2->SetBinContent(8,25.90884);
   m3l_rebin15_total__2->SetBinContent(9,40.27291);
   m3l_rebin15_total__2->SetBinContent(10,58.11275);
   m3l_rebin15_total__2->SetBinContent(11,107.6217);
   m3l_rebin15_total__2->SetBinContent(12,178.2274);
   m3l_rebin15_total__2->SetBinContent(13,186.5839);
   m3l_rebin15_total__2->SetBinContent(14,323.7609);
   m3l_rebin15_total__2->SetBinContent(15,548.4549);
   m3l_rebin15_total__2->SetBinError(3,1.719522);
   m3l_rebin15_total__2->SetBinError(4,1.723375);
   m3l_rebin15_total__2->SetBinError(5,2.442743);
   m3l_rebin15_total__2->SetBinError(6,0.2871768);
   m3l_rebin15_total__2->SetBinError(7,4.633321);
   m3l_rebin15_total__2->SetBinError(8,3.706277);
   m3l_rebin15_total__2->SetBinError(9,4.217923);
   m3l_rebin15_total__2->SetBinError(10,4.098109);
   m3l_rebin15_total__2->SetBinError(11,5.95694);
   m3l_rebin15_total__2->SetBinError(12,6.480031);
   m3l_rebin15_total__2->SetBinError(13,6.092931);
   m3l_rebin15_total__2->SetBinError(14,7.637971);
   m3l_rebin15_total__2->SetBinError(15,8.755689);
   m3l_rebin15_total__2->SetMinimum(0);
   m3l_rebin15_total__2->SetMaximum(1096.91);
   m3l_rebin15_total__2->SetEntries(15152);
   m3l_rebin15_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin15_total__2->SetFillColor(ci);
   m3l_rebin15_total__2->SetMarkerStyle(20);
   m3l_rebin15_total__2->SetMarkerSize(1.1);
   m3l_rebin15_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin15_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin15_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin15_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin15_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin15_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin15_total_errors_fx3001[13] = {
   120.8356,
   129.1699,
   137.5041,
   145.8392,
   155.4274,
   166.2679,
   177.1083,
   187.9488,
   200.5826,
   217.8345,
   237.9113,
   270.5576,
   396.5828};
   Double_t m3l_rebin15_total_errors_fy3001[13] = {
   1.719522,
   1.919005,
   4.003433,
   0.9470204,
   18.41231,
   25.90884,
   40.27291,
   58.11275,
   107.6217,
   178.2274,
   186.5839,
   323.7609,
   548.4549};
   Double_t m3l_rebin15_total_errors_felx3001[13] = {
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_total_errors_fely3001[13] = {
   1.719522,
   1.723375,
   2.442743,
   0.2871768,
   4.633321,
   3.706277,
   4.217923,
   4.098109,
   5.95694,
   6.480031,
   6.092931,
   7.637971,
   8.755689};
   Double_t m3l_rebin15_total_errors_fehx3001[13] = {
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_total_errors_fehy3001[13] = {
   1.719522,
   1.723375,
   2.442743,
   0.2871768,
   4.633321,
   3.706277,
   4.217923,
   4.098109,
   5.95694,
   6.480031,
   6.092931,
   7.637971,
   8.755689};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,m3l_rebin15_total_errors_fx3001,m3l_rebin15_total_errors_fy3001,m3l_rebin15_total_errors_felx3001,m3l_rebin15_total_errors_fehx3001,m3l_rebin15_total_errors_fely3001,m3l_rebin15_total_errors_fehy3001);
   grae->SetName("m3l_rebin15_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin15_total_errors3001 = new TH1F("Graph_m3l_rebin15_total_errors3001","Graph",100,78.33534,538.3332);
   Graph_m3l_rebin15_total_errors3001->SetMinimum(0);
   Graph_m3l_rebin15_total_errors3001->SetMaximum(612.9317);
   Graph_m3l_rebin15_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin15_total_errors3001->SetStats(0);
   Graph_m3l_rebin15_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin15_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin15_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin15_data_graph_fx3002[15] = {
   54.16713,
   112.5014,
   120.8356,
   129.1699,
   137.5041,
   145.8392,
   155.4274,
   166.2679,
   177.1083,
   187.9488,
   200.5826,
   217.8345,
   237.9113,
   270.5576,
   396.5828};
   Double_t m3l_rebin15_data_graph_fy3002[15] = {
   0,
   1,
   2,
   4,
   1,
   3,
   11,
   20,
   49,
   75,
   117,
   173,
   160,
   340,
   557};
   Double_t m3l_rebin15_data_graph_felx3002[15] = {
   54.16713,
   4.167122,
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_data_graph_fely3002[15] = {
   0,
   0.8272525,
   1.29183,
   1.914367,
   0.8272525,
   1.632727,
   3.265636,
   4.43453,
   6.976163,
   8.641077,
   10.8014,
   13.1405,
   12.63615,
   18.43041,
   23.59427};
   Double_t m3l_rebin15_data_graph_fehx3002[15] = {
   54.16713,
   4.167122,
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_data_graph_fehy3002[15] = {
   1.841055,
   2.29957,
   2.63791,
   3.162815,
   2.29957,
   2.918242,
   4.416609,
   5.546633,
   8.047802,
   9.698975,
   11.84775,
   14.17861,
   13.67578,
   19.4576,
   24.61551};
   grae = new TGraphAsymmErrors(15,m3l_rebin15_data_graph_fx3002,m3l_rebin15_data_graph_fy3002,m3l_rebin15_data_graph_felx3002,m3l_rebin15_data_graph_fehx3002,m3l_rebin15_data_graph_fely3002,m3l_rebin15_data_graph_fehy3002);
   grae->SetName("m3l_rebin15_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin15_data_graph3002 = new TH1F("Graph_m3l_rebin15_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin15_data_graph3002->SetMinimum(0);
   Graph_m3l_rebin15_data_graph3002->SetMaximum(639.7771);
   Graph_m3l_rebin15_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin15_data_graph3002->SetStats(0);
   Graph_m3l_rebin15_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin15_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin15_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin15_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin15_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin15_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin15_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin15_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin15_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin15_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin15_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin15_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin15_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin15_total_errors","Total unc.","F");
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
   m3l_rebin15_canvas->cd();
  
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
   Double_t xAxis9[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_total__3 = new TH1D("m3l_rebin15_total__3","dummy",15, xAxis9);
   m3l_rebin15_total__3->SetBinContent(3,1);
   m3l_rebin15_total__3->SetBinContent(4,1);
   m3l_rebin15_total__3->SetBinContent(5,1);
   m3l_rebin15_total__3->SetBinContent(6,1);
   m3l_rebin15_total__3->SetBinContent(7,1);
   m3l_rebin15_total__3->SetBinContent(8,1);
   m3l_rebin15_total__3->SetBinContent(9,1);
   m3l_rebin15_total__3->SetBinContent(10,1);
   m3l_rebin15_total__3->SetBinContent(11,1);
   m3l_rebin15_total__3->SetBinContent(12,1);
   m3l_rebin15_total__3->SetBinContent(13,1);
   m3l_rebin15_total__3->SetBinContent(14,1);
   m3l_rebin15_total__3->SetBinContent(15,1);
   m3l_rebin15_total__3->SetMinimum(0.5);
   m3l_rebin15_total__3->SetMaximum(2);
   m3l_rebin15_total__3->SetEntries(15167);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin15_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin15_total__3->SetMarkerColor(ci);
   m3l_rebin15_total__3->SetMarkerSize(1.1);
   m3l_rebin15_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin15_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin15_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin15_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin15_total__3->GetYaxis()->SetDecimals();
   m3l_rebin15_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin15_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin15_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin15_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin15_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin15_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_total__3->Draw("AXIS");
   
   Double_t m3l_rebin15_total_errors_fx3003[13] = {
   120.8356,
   129.1699,
   137.5041,
   145.8392,
   155.4274,
   166.2679,
   177.1083,
   187.9488,
   200.5826,
   217.8345,
   237.9113,
   270.5576,
   396.5828};
   Double_t m3l_rebin15_total_errors_fy3003[13] = {
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
   Double_t m3l_rebin15_total_errors_felx3003[13] = {
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_total_errors_fely3003[13] = {
   1,
   0.8980565,
   0.6101622,
   0.3032425,
   0.2516426,
   0.1430507,
   0.1047335,
   0.07051996,
   0.05535072,
   0.03635823,
   0.03265518,
   0.0235914,
   0.01596428};
   Double_t m3l_rebin15_total_errors_fehx3003[13] = {
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_total_errors_fehy3003[13] = {
   1,
   0.8980565,
   0.6101622,
   0.3032425,
   0.2516426,
   0.1430507,
   0.1047335,
   0.07051996,
   0.05535072,
   0.03635823,
   0.03265518,
   0.0235914,
   0.01596428};
   grae = new TGraphAsymmErrors(13,m3l_rebin15_total_errors_fx3003,m3l_rebin15_total_errors_fy3003,m3l_rebin15_total_errors_felx3003,m3l_rebin15_total_errors_fehx3003,m3l_rebin15_total_errors_fely3003,m3l_rebin15_total_errors_fehy3003);
   grae->SetName("m3l_rebin15_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin15_total_errors_fx3004[13] = {
   120.8356,
   129.1699,
   137.5041,
   145.8392,
   155.4274,
   166.2679,
   177.1083,
   187.9488,
   200.5826,
   217.8345,
   237.9113,
   270.5576,
   396.5828};
   Double_t m3l_rebin15_total_errors_fy3004[13] = {
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
   Double_t m3l_rebin15_total_errors_felx3004[13] = {
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_total_errors_fely3004[13] = {
   1,
   0.8980565,
   0.6101622,
   0.3032425,
   0.2516426,
   0.1430507,
   0.1047335,
   0.07051996,
   0.05535072,
   0.03635823,
   0.03265518,
   0.0235914,
   0.01596428};
   Double_t m3l_rebin15_total_errors_fehx3004[13] = {
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_total_errors_fehy3004[13] = {
   1,
   0.8980565,
   0.6101622,
   0.3032425,
   0.2516426,
   0.1430507,
   0.1047335,
   0.07051996,
   0.05535072,
   0.03635823,
   0.03265518,
   0.0235914,
   0.01596428};
   grae = new TGraphAsymmErrors(13,m3l_rebin15_total_errors_fx3004,m3l_rebin15_total_errors_fy3004,m3l_rebin15_total_errors_felx3004,m3l_rebin15_total_errors_fehx3004,m3l_rebin15_total_errors_fely3004,m3l_rebin15_total_errors_fehy3004);
   grae->SetName("m3l_rebin15_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_total__4 = new TH1D("m3l_rebin15_total__4","dummy",15, xAxis10);
   m3l_rebin15_total__4->SetBinContent(3,1);
   m3l_rebin15_total__4->SetBinContent(4,1);
   m3l_rebin15_total__4->SetBinContent(5,1);
   m3l_rebin15_total__4->SetBinContent(6,1);
   m3l_rebin15_total__4->SetBinContent(7,1);
   m3l_rebin15_total__4->SetBinContent(8,1);
   m3l_rebin15_total__4->SetBinContent(9,1);
   m3l_rebin15_total__4->SetBinContent(10,1);
   m3l_rebin15_total__4->SetBinContent(11,1);
   m3l_rebin15_total__4->SetBinContent(12,1);
   m3l_rebin15_total__4->SetBinContent(13,1);
   m3l_rebin15_total__4->SetBinContent(14,1);
   m3l_rebin15_total__4->SetBinContent(15,1);
   m3l_rebin15_total__4->SetMinimum(0.5);
   m3l_rebin15_total__4->SetMaximum(2);
   m3l_rebin15_total__4->SetEntries(15167);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin15_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin15_total__4->SetMarkerColor(ci);
   m3l_rebin15_total__4->SetMarkerSize(1.1);
   m3l_rebin15_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin15_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin15_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin15_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin15_total__4->GetYaxis()->SetDecimals();
   m3l_rebin15_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin15_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin15_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin15_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin15_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin15_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[15] = {
   54.16713,
   112.5014,
   120.8356,
   129.1699,
   137.5041,
   145.8392,
   155.4274,
   166.2679,
   177.1083,
   187.9488,
   200.5826,
   217.8345,
   237.9113,
   270.5576,
   396.5828};
   Double_t data_div_fy3005[15] = {
   0,
   0,
   1.163114,
   2.084414,
   0.2497856,
   3.167831,
   0.5974265,
   0.7719373,
   1.216699,
   1.290595,
   1.087141,
   0.9706703,
   0.8575231,
   1.050158,
   1.01558};
   Double_t data_div_felx3005[15] = {
   54.16713,
   4.167122,
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t data_div_fely3005[15] = {
   0,
   0,
   0.7512725,
   0.9975833,
   0.2066358,
   1.724067,
   0.1773616,
   0.171159,
   0.1732222,
   0.148695,
   0.1003645,
   0.07372887,
   0.06772367,
   0.05692601,
   0.04301952};
   Double_t data_div_fehx3005[15] = {
   54.16713,
   4.167122,
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t data_div_fehy3005[15] = {
   0,
   0,
   1.534095,
   1.648154,
   0.5743995,
   3.081499,
   0.2398727,
   0.2140826,
   0.1998316,
   0.1668993,
   0.110087,
   0.07955351,
   0.07329559,
   0.06009867,
   0.04488155};
   grae = new TGraphAsymmErrors(15,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin15_data_graph3005 = new TH1F("Graph_m3l_rebin15_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin15_data_graph3005->SetMinimum(0);
   Graph_m3l_rebin15_data_graph3005->SetMaximum(639.7771);
   Graph_m3l_rebin15_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin15_data_graph3005->SetStats(0);
   Graph_m3l_rebin15_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin15_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin15_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin15_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin15_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin15_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin15_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin15_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin15_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin15_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin15_canvas->cd();
   m3l_rebin15_canvas->Modified();
   m3l_rebin15_canvas->cd();
   m3l_rebin15_canvas->SetSelected(m3l_rebin15_canvas);
}
