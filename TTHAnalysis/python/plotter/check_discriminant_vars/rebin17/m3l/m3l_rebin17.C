void m3l_rebin17()
{
//=========Macro generated from canvas: m3l_rebin17_canvas/m3l_rebin17
//=========  (Thu Dec  8 14:35:31 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin17_canvas = new TCanvas("m3l_rebin17_canvas", "m3l_rebin17",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin17_canvas->SetHighLightColor(2);
   m3l_rebin17_canvas->Range(0,0,1,1);
   m3l_rebin17_canvas->SetFillColor(0);
   m3l_rebin17_canvas->SetBorderMode(0);
   m3l_rebin17_canvas->SetBorderSize(2);
   m3l_rebin17_canvas->SetTickx(1);
   m3l_rebin17_canvas->SetTicky(1);
   m3l_rebin17_canvas->SetLeftMargin(0.18);
   m3l_rebin17_canvas->SetRightMargin(0.04);
   m3l_rebin17_canvas->SetBottomMargin(0.13);
   m3l_rebin17_canvas->SetFrameFillStyle(0);
   m3l_rebin17_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-28.30016,525.641,1103.706);
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
   Double_t xAxis1[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1D *m3l_rebin17_total__1 = new TH1D("m3l_rebin17_total__1","dummy",17, xAxis1);
   m3l_rebin17_total__1->SetBinContent(4,1.786016);
   m3l_rebin17_total__1->SetBinContent(5,5.494151);
   m3l_rebin17_total__1->SetBinContent(6,0.7661244);
   m3l_rebin17_total__1->SetBinContent(7,4.683952);
   m3l_rebin17_total__1->SetBinContent(8,14.72587);
   m3l_rebin17_total__1->SetBinContent(9,23.669);
   m3l_rebin17_total__1->SetBinContent(10,35.17888);
   m3l_rebin17_total__1->SetBinContent(11,46.96824);
   m3l_rebin17_total__1->SetBinContent(12,65.20895);
   m3l_rebin17_total__1->SetBinContent(13,140.6805);
   m3l_rebin17_total__1->SetBinContent(14,165.6572);
   m3l_rebin17_total__1->SetBinContent(15,194.9318);
   m3l_rebin17_total__1->SetBinContent(16,278.3008);
   m3l_rebin17_total__1->SetBinContent(17,517.8929);
   m3l_rebin17_total__1->SetBinError(4,1.720807);
   m3l_rebin17_total__1->SetBinError(5,2.983265);
   m3l_rebin17_total__1->SetBinError(6,0.2571164);
   m3l_rebin17_total__1->SetBinError(7,2.457965);
   m3l_rebin17_total__1->SetBinError(8,3.941239);
   m3l_rebin17_total__1->SetBinError(9,3.676741);
   m3l_rebin17_total__1->SetBinError(10,4.155313);
   m3l_rebin17_total__1->SetBinError(11,3.600316);
   m3l_rebin17_total__1->SetBinError(12,4.801683);
   m3l_rebin17_total__1->SetBinError(13,5.741017);
   m3l_rebin17_total__1->SetBinError(14,6.163251);
   m3l_rebin17_total__1->SetBinError(15,6.802329);
   m3l_rebin17_total__1->SetBinError(16,6.544159);
   m3l_rebin17_total__1->SetBinError(17,8.427216);
   m3l_rebin17_total__1->SetMinimum(0);
   m3l_rebin17_total__1->SetMaximum(1035.786);
   m3l_rebin17_total__1->SetEntries(15152);
   m3l_rebin17_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin17_total__1->SetFillColor(ci);
   m3l_rebin17_total__1->SetMarkerStyle(20);
   m3l_rebin17_total__1->SetMarkerSize(1.1);
   m3l_rebin17_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin17_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin17_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin17_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin17_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin17_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin17_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin17_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin17_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin17_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin17_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin17_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_total__1->Draw("HIST");
   
   THStack *m3l_rebin17_stack = new THStack();
   m3l_rebin17_stack->SetName("m3l_rebin17_stack");
   m3l_rebin17_stack->SetTitle("m3l_rebin17");
   Double_t xAxis2[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1F *m3l_rebin17_stack_stack_1 = new TH1F("m3l_rebin17_stack_stack_1","m3l_rebin17",17, xAxis2);
   m3l_rebin17_stack_stack_1->SetMinimum(0);
   m3l_rebin17_stack_stack_1->SetMaximum(543.7876);
   m3l_rebin17_stack_stack_1->SetDirectory(0);
   m3l_rebin17_stack_stack_1->SetStats(0);
   m3l_rebin17_stack_stack_1->SetLineStyle(0);
   m3l_rebin17_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin17_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin17_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin17_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin17_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin17_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin17_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin17_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin17_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin17_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_stack->SetHistogram(m3l_rebin17_stack_stack_1);
   
   Double_t xAxis3[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1D *m3l_rebin17_fakes_VV_stack_1 = new TH1D("m3l_rebin17_fakes_VV_stack_1","dummy",17, xAxis3);
   m3l_rebin17_fakes_VV_stack_1->SetBinContent(13,0.09719337);
   m3l_rebin17_fakes_VV_stack_1->SetBinContent(14,0.1943867);
   m3l_rebin17_fakes_VV_stack_1->SetBinContent(17,0.3887735);
   m3l_rebin17_fakes_VV_stack_1->SetBinError(13,0.09719337);
   m3l_rebin17_fakes_VV_stack_1->SetBinError(14,0.1374522);
   m3l_rebin17_fakes_VV_stack_1->SetBinError(17,0.1943867);
   m3l_rebin17_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin17_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin17_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin17_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin17_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin17_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin17_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin17_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin17_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin17_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin17_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin17_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin17_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin17_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin17_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin17_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_stack->Add(m3l_rebin17_fakes_VV_stack_1,"");
   Double_t xAxis4[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1D *m3l_rebin17_fakes_TT_stack_2 = new TH1D("m3l_rebin17_fakes_TT_stack_2","dummy",17, xAxis4);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(4,0.06649422);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(5,0.2451369);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(6,0.1329884);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(7,0.06649422);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(8,0.3989653);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(9,0.8435849);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(10,1.421193);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(11,1.508527);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(12,2.460286);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(13,4.521607);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(14,5.253044);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(15,6.582928);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(16,11.39533);
   m3l_rebin17_fakes_TT_stack_2->SetBinContent(17,20.14775);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(4,0.06649422);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(5,0.1463565);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(6,0.09403703);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(7,0.06649422);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(8,0.1628769);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(9,0.2474138);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(10,0.3236375);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(11,0.3246974);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(12,0.4044686);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(13,0.5483254);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(14,0.5910136);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(15,0.6748427);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(16,0.8763353);
   m3l_rebin17_fakes_TT_stack_2->SetBinError(17,1.168862);
   m3l_rebin17_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin17_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin17_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin17_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin17_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin17_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin17_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin17_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin17_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin17_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin17_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin17_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin17_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin17_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin17_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin17_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_stack->Add(m3l_rebin17_fakes_TT_stack_2,"");
   Double_t xAxis5[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1D *m3l_rebin17_fakes_DY_stack_3 = new TH1D("m3l_rebin17_fakes_DY_stack_3","dummy",17, xAxis5);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(4,1.719522);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(5,5.158566);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(7,3.439044);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(8,8.597611);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(9,6.878088);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(10,8.597611);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(11,5.158566);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(12,10.31713);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(13,12.03665);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(14,13.75618);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(15,17.19522);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(16,10.31713);
   m3l_rebin17_fakes_DY_stack_3->SetBinContent(17,13.75618);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(4,1.719522);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(5,2.9783);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(7,2.431771);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(8,3.844968);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(9,3.439044);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(10,3.844968);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(11,2.9783);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(12,4.211952);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(13,4.549428);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(14,4.863543);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(15,5.437606);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(16,4.211952);
   m3l_rebin17_fakes_DY_stack_3->SetBinError(17,4.863543);
   m3l_rebin17_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin17_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin17_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin17_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin17_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin17_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin17_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin17_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin17_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin17_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin17_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin17_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin17_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin17_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin17_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin17_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_stack->Add(m3l_rebin17_fakes_DY_stack_3,"");
   Double_t xAxis6[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1D *m3l_rebin17_prompt_ZZ_stack_4 = new TH1D("m3l_rebin17_prompt_ZZ_stack_4","dummy",17, xAxis6);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(7,0.1834854);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(8,2.201825);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(9,2.01834);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(10,1.100912);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(11,3.669708);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(12,4.40365);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(13,7.889873);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(14,7.706387);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(15,8.256843);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(16,11.92655);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinContent(17,23.8531);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(7,0.1834854);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(8,0.6356121);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(9,0.6085523);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(10,0.4494456);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(11,0.8205717);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(12,0.8988913);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(13,1.203194);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(14,1.189121);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(15,1.230858);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(16,1.479307);
   m3l_rebin17_prompt_ZZ_stack_4->SetBinError(17,2.092056);
   m3l_rebin17_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin17_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin17_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin17_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin17_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin17_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin17_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin17_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin17_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin17_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin17_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin17_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin17_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin17_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin17_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin17_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_stack->Add(m3l_rebin17_prompt_ZZ_stack_4,"");
   Double_t xAxis7[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1D *m3l_rebin17_prompt_WZ_stack_5 = new TH1D("m3l_rebin17_prompt_WZ_stack_5","dummy",17, xAxis7);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(5,0.09044799);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(6,0.6331359);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(7,0.9949279);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(8,3.527472);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(9,13.92899);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(10,24.05917);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(11,36.63144);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(12,48.02788);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(13,116.1352);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(14,138.7472);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(15,162.8968);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(16,244.6618);
   m3l_rebin17_prompt_WZ_stack_5->SetBinContent(17,459.7471);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(5,0.09044799);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(6,0.2393029);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(7,0.299982);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(8,0.5648475);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(9,1.12243);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(10,1.475162);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(11,1.820231);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(12,2.084233);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(13,3.241018);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(14,3.542514);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(15,3.838449);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(16,4.704165);
   m3l_rebin17_prompt_WZ_stack_5->SetBinError(17,6.448504);
   m3l_rebin17_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin17_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin17_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin17_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin17_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin17_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin17_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin17_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin17_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin17_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin17_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin17_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin17_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin17_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin17_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin17_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_stack->Add(m3l_rebin17_prompt_WZ_stack_5,"");
   m3l_rebin17_stack->Draw("same hist");
   Double_t xAxis8[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1D *m3l_rebin17_total__2 = new TH1D("m3l_rebin17_total__2","dummy",17, xAxis8);
   m3l_rebin17_total__2->SetBinContent(4,1.786016);
   m3l_rebin17_total__2->SetBinContent(5,5.494151);
   m3l_rebin17_total__2->SetBinContent(6,0.7661244);
   m3l_rebin17_total__2->SetBinContent(7,4.683952);
   m3l_rebin17_total__2->SetBinContent(8,14.72587);
   m3l_rebin17_total__2->SetBinContent(9,23.669);
   m3l_rebin17_total__2->SetBinContent(10,35.17888);
   m3l_rebin17_total__2->SetBinContent(11,46.96824);
   m3l_rebin17_total__2->SetBinContent(12,65.20895);
   m3l_rebin17_total__2->SetBinContent(13,140.6805);
   m3l_rebin17_total__2->SetBinContent(14,165.6572);
   m3l_rebin17_total__2->SetBinContent(15,194.9318);
   m3l_rebin17_total__2->SetBinContent(16,278.3008);
   m3l_rebin17_total__2->SetBinContent(17,517.8929);
   m3l_rebin17_total__2->SetBinError(4,1.720807);
   m3l_rebin17_total__2->SetBinError(5,2.983265);
   m3l_rebin17_total__2->SetBinError(6,0.2571164);
   m3l_rebin17_total__2->SetBinError(7,2.457965);
   m3l_rebin17_total__2->SetBinError(8,3.941239);
   m3l_rebin17_total__2->SetBinError(9,3.676741);
   m3l_rebin17_total__2->SetBinError(10,4.155313);
   m3l_rebin17_total__2->SetBinError(11,3.600316);
   m3l_rebin17_total__2->SetBinError(12,4.801683);
   m3l_rebin17_total__2->SetBinError(13,5.741017);
   m3l_rebin17_total__2->SetBinError(14,6.163251);
   m3l_rebin17_total__2->SetBinError(15,6.802329);
   m3l_rebin17_total__2->SetBinError(16,6.544159);
   m3l_rebin17_total__2->SetBinError(17,8.427216);
   m3l_rebin17_total__2->SetMinimum(0);
   m3l_rebin17_total__2->SetMaximum(1035.786);
   m3l_rebin17_total__2->SetEntries(15152);
   m3l_rebin17_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin17_total__2->SetFillColor(ci);
   m3l_rebin17_total__2->SetMarkerStyle(20);
   m3l_rebin17_total__2->SetMarkerSize(1.1);
   m3l_rebin17_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin17_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin17_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin17_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin17_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin17_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin17_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin17_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin17_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin17_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin17_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin17_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin17_total_errors_fx3001[14] = {
   125.7381,
   133.0919,
   140.4456,
   148.0213,
   156.7027,
   166.2679,
   175.833,
   185.3981,
   194.9632,
   208.4949,
   226.1014,
   245.6805,
   277.6118,
   399.4107};
   Double_t m3l_rebin17_total_errors_fy3001[14] = {
   1.786016,
   5.494151,
   0.7661244,
   4.683952,
   14.72587,
   23.669,
   35.17888,
   46.96824,
   65.20895,
   140.6805,
   165.6572,
   194.9318,
   278.3008,
   517.8929};
   Double_t m3l_rebin17_total_errors_felx3001[14] = {
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t m3l_rebin17_total_errors_fely3001[14] = {
   1.720807,
   2.983265,
   0.2571164,
   2.457965,
   3.941239,
   3.676741,
   4.155313,
   3.600316,
   4.801683,
   5.741017,
   6.163251,
   6.802329,
   6.544159,
   8.427216};
   Double_t m3l_rebin17_total_errors_fehx3001[14] = {
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t m3l_rebin17_total_errors_fehy3001[14] = {
   1.720807,
   2.983265,
   0.2571164,
   2.457965,
   3.941239,
   3.676741,
   4.155313,
   3.600316,
   4.801683,
   5.741017,
   6.163251,
   6.802329,
   6.544159,
   8.427216};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,m3l_rebin17_total_errors_fx3001,m3l_rebin17_total_errors_fy3001,m3l_rebin17_total_errors_felx3001,m3l_rebin17_total_errors_fehx3001,m3l_rebin17_total_errors_fely3001,m3l_rebin17_total_errors_fehy3001);
   grae->SetName("m3l_rebin17_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin17_total_errors3001 = new TH1F("Graph_m3l_rebin17_total_errors3001","Graph",100,84.26737,537.7939);
   Graph_m3l_rebin17_total_errors3001->SetMinimum(0.05868813);
   Graph_m3l_rebin17_total_errors3001->SetMaximum(578.9456);
   Graph_m3l_rebin17_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin17_total_errors3001->SetStats(0);
   Graph_m3l_rebin17_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin17_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin17_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin17_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin17_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin17_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin17_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin17_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin17_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin17_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin17_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin17_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin17_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin17_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin17_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin17_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin17_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin17_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin17_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin17_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin17_data_graph_fx3002[17] = {
   53.67688,
   111.0306,
   118.3844,
   125.7381,
   133.0919,
   140.4456,
   148.0213,
   156.7027,
   166.2679,
   175.833,
   185.3981,
   194.9632,
   208.4949,
   226.1014,
   245.6805,
   277.6118,
   399.4107};
   Double_t m3l_rebin17_data_graph_fy3002[17] = {
   0,
   1,
   0,
   4,
   2,
   1,
   3,
   13,
   15,
   41,
   64,
   66,
   155,
   144,
   190,
   286,
   528};
   Double_t m3l_rebin17_data_graph_felx3002[17] = {
   53.67688,
   3.676872,
   3.676876,
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t m3l_rebin17_data_graph_fely3002[17] = {
   0,
   0.8272525,
   0,
   1.914367,
   1.29183,
   0.8272525,
   1.632727,
   3.558726,
   3.829449,
   6.377022,
   7.979201,
   8.103564,
   12.43672,
   11.9863,
   13.7722,
   16.90201,
   22.97147};
   Double_t m3l_rebin17_data_graph_fehx3002[17] = {
   53.67688,
   3.676872,
   3.676876,
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t m3l_rebin17_data_graph_fehy3002[17] = {
   1.841055,
   2.29957,
   1.841055,
   3.162815,
   2.63791,
   2.29957,
   2.918242,
   4.697668,
   4.958839,
   7.45534,
   9.041881,
   9.165286,
   13.47698,
   13.02808,
   14.80857,
   17.93164,
   23.99328};
   grae = new TGraphAsymmErrors(17,m3l_rebin17_data_graph_fx3002,m3l_rebin17_data_graph_fy3002,m3l_rebin17_data_graph_felx3002,m3l_rebin17_data_graph_fehx3002,m3l_rebin17_data_graph_fely3002,m3l_rebin17_data_graph_fehy3002);
   grae->SetName("m3l_rebin17_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin17_data_graph3002 = new TH1F("Graph_m3l_rebin17_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin17_data_graph3002->SetMinimum(0);
   Graph_m3l_rebin17_data_graph3002->SetMaximum(607.1926);
   Graph_m3l_rebin17_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin17_data_graph3002->SetStats(0);
   Graph_m3l_rebin17_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin17_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin17_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin17_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin17_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin17_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin17_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin17_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin17_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin17_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin17_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin17_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin17_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin17_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin17_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin17_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin17_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin17_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin17_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin17_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin17_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin17_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin17_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin17_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin17_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin17_total_errors","Total unc.","F");
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
   m3l_rebin17_canvas->cd();
  
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
   Double_t xAxis9[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1D *m3l_rebin17_total__3 = new TH1D("m3l_rebin17_total__3","dummy",17, xAxis9);
   m3l_rebin17_total__3->SetBinContent(4,1);
   m3l_rebin17_total__3->SetBinContent(5,1);
   m3l_rebin17_total__3->SetBinContent(6,1);
   m3l_rebin17_total__3->SetBinContent(7,1);
   m3l_rebin17_total__3->SetBinContent(8,1);
   m3l_rebin17_total__3->SetBinContent(9,1);
   m3l_rebin17_total__3->SetBinContent(10,1);
   m3l_rebin17_total__3->SetBinContent(11,1);
   m3l_rebin17_total__3->SetBinContent(12,1);
   m3l_rebin17_total__3->SetBinContent(13,1);
   m3l_rebin17_total__3->SetBinContent(14,1);
   m3l_rebin17_total__3->SetBinContent(15,1);
   m3l_rebin17_total__3->SetBinContent(16,1);
   m3l_rebin17_total__3->SetBinContent(17,1);
   m3l_rebin17_total__3->SetMinimum(0.5);
   m3l_rebin17_total__3->SetMaximum(2);
   m3l_rebin17_total__3->SetEntries(15169);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin17_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin17_total__3->SetMarkerColor(ci);
   m3l_rebin17_total__3->SetMarkerSize(1.1);
   m3l_rebin17_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin17_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin17_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin17_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin17_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin17_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin17_total__3->GetYaxis()->SetDecimals();
   m3l_rebin17_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin17_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin17_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin17_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin17_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin17_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_total__3->Draw("AXIS");
   
   Double_t m3l_rebin17_total_errors_fx3003[14] = {
   125.7381,
   133.0919,
   140.4456,
   148.0213,
   156.7027,
   166.2679,
   175.833,
   185.3981,
   194.9632,
   208.4949,
   226.1014,
   245.6805,
   277.6118,
   399.4107};
   Double_t m3l_rebin17_total_errors_fy3003[14] = {
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
   Double_t m3l_rebin17_total_errors_felx3003[14] = {
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t m3l_rebin17_total_errors_fely3003[14] = {
   0.9634891,
   0.5429892,
   0.3356066,
   0.524763,
   0.2676404,
   0.1553399,
   0.1181195,
   0.07665427,
   0.07363534,
   0.04080889,
   0.03720484,
   0.03489594,
   0.0235147,
   0.01627212};
   Double_t m3l_rebin17_total_errors_fehx3003[14] = {
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t m3l_rebin17_total_errors_fehy3003[14] = {
   0.9634891,
   0.5429892,
   0.3356066,
   0.524763,
   0.2676404,
   0.1553399,
   0.1181195,
   0.07665427,
   0.07363534,
   0.04080889,
   0.03720484,
   0.03489594,
   0.0235147,
   0.01627212};
   grae = new TGraphAsymmErrors(14,m3l_rebin17_total_errors_fx3003,m3l_rebin17_total_errors_fy3003,m3l_rebin17_total_errors_felx3003,m3l_rebin17_total_errors_fehx3003,m3l_rebin17_total_errors_fely3003,m3l_rebin17_total_errors_fehy3003);
   grae->SetName("m3l_rebin17_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin17_total_errors_fx3004[14] = {
   125.7381,
   133.0919,
   140.4456,
   148.0213,
   156.7027,
   166.2679,
   175.833,
   185.3981,
   194.9632,
   208.4949,
   226.1014,
   245.6805,
   277.6118,
   399.4107};
   Double_t m3l_rebin17_total_errors_fy3004[14] = {
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
   Double_t m3l_rebin17_total_errors_felx3004[14] = {
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t m3l_rebin17_total_errors_fely3004[14] = {
   0.9634891,
   0.5429892,
   0.3356066,
   0.524763,
   0.2676404,
   0.1553399,
   0.1181195,
   0.07665427,
   0.07363534,
   0.04080889,
   0.03720484,
   0.03489594,
   0.0235147,
   0.01627212};
   Double_t m3l_rebin17_total_errors_fehx3004[14] = {
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t m3l_rebin17_total_errors_fehy3004[14] = {
   0.9634891,
   0.5429892,
   0.3356066,
   0.524763,
   0.2676404,
   0.1553399,
   0.1181195,
   0.07665427,
   0.07363534,
   0.04080889,
   0.03720484,
   0.03489594,
   0.0235147,
   0.01627212};
   grae = new TGraphAsymmErrors(14,m3l_rebin17_total_errors_fx3004,m3l_rebin17_total_errors_fy3004,m3l_rebin17_total_errors_felx3004,m3l_rebin17_total_errors_fehx3004,m3l_rebin17_total_errors_fely3004,m3l_rebin17_total_errors_fehy3004);
   grae->SetName("m3l_rebin17_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[18] = {0, 107.3538, 114.7075, 122.0612, 129.415, 136.7688, 144.1225, 151.9202, 161.4853, 171.0504, 180.6156, 190.1807, 199.7458, 217.244, 234.9588, 256.4022, 298.8215, 500}; 
   
   TH1D *m3l_rebin17_total__4 = new TH1D("m3l_rebin17_total__4","dummy",17, xAxis10);
   m3l_rebin17_total__4->SetBinContent(4,1);
   m3l_rebin17_total__4->SetBinContent(5,1);
   m3l_rebin17_total__4->SetBinContent(6,1);
   m3l_rebin17_total__4->SetBinContent(7,1);
   m3l_rebin17_total__4->SetBinContent(8,1);
   m3l_rebin17_total__4->SetBinContent(9,1);
   m3l_rebin17_total__4->SetBinContent(10,1);
   m3l_rebin17_total__4->SetBinContent(11,1);
   m3l_rebin17_total__4->SetBinContent(12,1);
   m3l_rebin17_total__4->SetBinContent(13,1);
   m3l_rebin17_total__4->SetBinContent(14,1);
   m3l_rebin17_total__4->SetBinContent(15,1);
   m3l_rebin17_total__4->SetBinContent(16,1);
   m3l_rebin17_total__4->SetBinContent(17,1);
   m3l_rebin17_total__4->SetMinimum(0.5);
   m3l_rebin17_total__4->SetMaximum(2);
   m3l_rebin17_total__4->SetEntries(15169);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin17_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin17_total__4->SetMarkerColor(ci);
   m3l_rebin17_total__4->SetMarkerSize(1.1);
   m3l_rebin17_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin17_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin17_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin17_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin17_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin17_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin17_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin17_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin17_total__4->GetYaxis()->SetDecimals();
   m3l_rebin17_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin17_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin17_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin17_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin17_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin17_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin17_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin17_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin17_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin17_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin17_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin17_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin17_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[17] = {
   53.67688,
   111.0306,
   118.3844,
   125.7381,
   133.0919,
   140.4456,
   148.0213,
   156.7027,
   166.2679,
   175.833,
   185.3981,
   194.9632,
   208.4949,
   226.1014,
   245.6805,
   277.6118,
   399.4107};
   Double_t data_div_fy3005[17] = {
   0,
   0,
   0,
   2.239621,
   0.3640235,
   1.305271,
   0.6404848,
   0.8828,
   0.6337402,
   1.165472,
   1.362623,
   1.012131,
   1.101787,
   0.8692649,
   0.9746998,
   1.027665,
   1.019516};
   Double_t data_div_felx3005[17] = {
   53.67688,
   3.676872,
   3.676876,
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t data_div_fely3005[17] = {
   0,
   0,
   0,
   1.071864,
   0.2351282,
   1.079789,
   0.3485789,
   0.2416648,
   0.1617917,
   0.1812742,
   0.169885,
   0.1242707,
   0.08840397,
   0.07235606,
   0.07065138,
   0.06073286,
   0.04435563};
   Double_t data_div_fehx3005[17] = {
   53.67688,
   3.676872,
   3.676876,
   3.676872,
   3.67688,
   3.676872,
   3.898834,
   4.782562,
   4.78257,
   4.782562,
   4.782562,
   4.782562,
   8.749107,
   8.857399,
   10.72167,
   21.20966,
   100.5893};
   Double_t data_div_fehy3005[17] = {
   0,
   0,
   0,
   1.770877,
   0.4801306,
   3.001562,
   0.62303,
   0.3190078,
   0.2095077,
   0.2119266,
   0.1925105,
   0.1405526,
   0.09579848,
   0.0786448,
   0.07596793,
   0.06443259,
   0.04632865};
   grae = new TGraphAsymmErrors(17,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin17_data_graph3005 = new TH1F("Graph_m3l_rebin17_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin17_data_graph3005->SetMinimum(0);
   Graph_m3l_rebin17_data_graph3005->SetMaximum(607.1926);
   Graph_m3l_rebin17_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin17_data_graph3005->SetStats(0);
   Graph_m3l_rebin17_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin17_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin17_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin17_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin17_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin17_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin17_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin17_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin17_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin17_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin17_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin17_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin17_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin17_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin17_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin17_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin17_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin17_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin17_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin17_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin17_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin17_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin17_canvas->cd();
   m3l_rebin17_canvas->Modified();
   m3l_rebin17_canvas->cd();
   m3l_rebin17_canvas->SetSelected(m3l_rebin17_canvas);
}
