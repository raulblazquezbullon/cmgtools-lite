void m3lmet_Meas_rebin6()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin6_canvas/m3lmet_Meas_rebin6
//=========  (Thu Dec 15 20:00:28 2022) by ROOT version 6.12/07
   TCanvas *m3lmet_Meas_rebin6_canvas = new TCanvas("m3lmet_Meas_rebin6_canvas", "m3lmet_Meas_rebin6",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin6_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin6_canvas->Range(0,0,1,1);
   m3lmet_Meas_rebin6_canvas->SetFillColor(0);
   m3lmet_Meas_rebin6_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin6_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin6_canvas->SetTickx(1);
   m3lmet_Meas_rebin6_canvas->SetTicky(1);
   m3lmet_Meas_rebin6_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin6_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin6_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin6_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin6_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-23.5376,525.641,917.9663);
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
   Double_t xAxis1[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_total__1 = new TH1D("m3lmet_Meas_rebin6_total__1","dummy",6, xAxis1);
   m3lmet_Meas_rebin6_total__1->SetBinContent(1,66.40883);
   m3lmet_Meas_rebin6_total__1->SetBinContent(2,177.7037);
   m3lmet_Meas_rebin6_total__1->SetBinContent(3,251.5438);
   m3lmet_Meas_rebin6_total__1->SetBinContent(4,292.0807);
   m3lmet_Meas_rebin6_total__1->SetBinContent(5,277.4695);
   m3lmet_Meas_rebin6_total__1->SetBinContent(6,430.738);
   m3lmet_Meas_rebin6_total__1->SetBinError(1,7.537781);
   m3lmet_Meas_rebin6_total__1->SetBinError(2,7.501509);
   m3lmet_Meas_rebin6_total__1->SetBinError(3,7.381284);
   m3lmet_Meas_rebin6_total__1->SetBinError(4,7.811386);
   m3lmet_Meas_rebin6_total__1->SetBinError(5,6.742373);
   m3lmet_Meas_rebin6_total__1->SetBinError(6,7.570649);
   m3lmet_Meas_rebin6_total__1->SetMinimum(0);
   m3lmet_Meas_rebin6_total__1->SetMaximum(861.4761);
   m3lmet_Meas_rebin6_total__1->SetEntries(15152);
   m3lmet_Meas_rebin6_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin6_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin6_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin6_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin6_stack = new THStack();
   m3lmet_Meas_rebin6_stack->SetName("m3lmet_Meas_rebin6_stack");
   m3lmet_Meas_rebin6_stack->SetTitle("m3lmet_Meas_rebin6");
   Double_t xAxis2[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1F *m3lmet_Meas_rebin6_stack_stack_1 = new TH1F("m3lmet_Meas_rebin6_stack_stack_1","m3lmet_Meas_rebin6",6, xAxis2);
   m3lmet_Meas_rebin6_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin6_stack_stack_1->SetMaximum(452.2749);
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
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->SetHistogram(m3lmet_Meas_rebin6_stack_stack_1);
   
   Double_t xAxis3[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin6_fakes_VV_stack_1","dummy",6, xAxis3);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(3,0.1943867);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(6,0.1943867);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(2,0.09719337);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(3,0.1374522);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(5,0.1374522);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(6,0.1374522);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_fakes_VV_stack_1,"");
   Double_t xAxis4[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin6_fakes_TT_stack_2","dummy",6, xAxis4);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(1,2.198284);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(2,6.474754);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(3,8.045801);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(4,9.508674);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(5,12.45923);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(6,16.35758);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(1,0.4019121);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(2,0.663908);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(3,0.7314365);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(4,0.8061996);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(5,0.9158096);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(6,1.055563);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_fakes_TT_stack_2,"");
   Double_t xAxis5[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin6_fakes_DY_stack_3","dummy",6, xAxis5);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(1,30.9514);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(2,24.07331);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(3,18.91474);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(4,20.63427);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(5,12.03665);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(6,10.31713);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(1,7.295314);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(2,6.433863);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(3,5.70301);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(4,5.956599);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(5,4.549428);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(6,4.211952);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_fakes_DY_stack_3,"");
   Double_t xAxis6[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin6_prompt_ZZ_stack_4","dummy",6, xAxis6);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(1,4.587135);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(2,12.11004);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(3,11.92655);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(4,12.84398);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(5,11.19261);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(6,20.55037);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(1,0.917427);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(2,1.490643);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(3,1.479307);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(4,1.535149);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(5,1.433067);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(6,1.941827);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_prompt_ZZ_stack_4,"");
   Double_t xAxis7[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin6_prompt_WZ_stack_5","dummy",6, xAxis7);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(1,28.67201);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(2,134.9484);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(3,212.4623);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(4,249.0938);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(5,241.5866);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(6,383.3186);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(1,1.610381);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(2,3.493682);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(3,4.383696);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(4,4.746581);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(5,4.674508);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(6,5.888157);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin6_stack->Draw("same hist");
   Double_t xAxis8[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_total__2 = new TH1D("m3lmet_Meas_rebin6_total__2","dummy",6, xAxis8);
   m3lmet_Meas_rebin6_total__2->SetBinContent(1,66.40883);
   m3lmet_Meas_rebin6_total__2->SetBinContent(2,177.7037);
   m3lmet_Meas_rebin6_total__2->SetBinContent(3,251.5438);
   m3lmet_Meas_rebin6_total__2->SetBinContent(4,292.0807);
   m3lmet_Meas_rebin6_total__2->SetBinContent(5,277.4695);
   m3lmet_Meas_rebin6_total__2->SetBinContent(6,430.738);
   m3lmet_Meas_rebin6_total__2->SetBinError(1,7.537781);
   m3lmet_Meas_rebin6_total__2->SetBinError(2,7.501509);
   m3lmet_Meas_rebin6_total__2->SetBinError(3,7.381284);
   m3lmet_Meas_rebin6_total__2->SetBinError(4,7.811386);
   m3lmet_Meas_rebin6_total__2->SetBinError(5,6.742373);
   m3lmet_Meas_rebin6_total__2->SetBinError(6,7.570649);
   m3lmet_Meas_rebin6_total__2->SetMinimum(0);
   m3lmet_Meas_rebin6_total__2->SetMaximum(861.4761);
   m3lmet_Meas_rebin6_total__2->SetEntries(15152);
   m3lmet_Meas_rebin6_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin6_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin6_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin6_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetTitleSize(0.06);
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
   66.40883,
   177.7037,
   251.5438,
   292.0807,
   277.4695,
   430.738};
   Double_t m3lmet_Meas_rebin6_total_errors_felx3001[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_total_errors_fely3001[6] = {
   7.537781,
   7.501509,
   7.381284,
   7.811386,
   6.742373,
   7.570649};
   Double_t m3lmet_Meas_rebin6_total_errors_fehx3001[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_total_errors_fehy3001[6] = {
   7.537781,
   7.501509,
   7.381284,
   7.811386,
   6.742373,
   7.570649};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,m3lmet_Meas_rebin6_total_errors_fx3001,m3lmet_Meas_rebin6_total_errors_fy3001,m3lmet_Meas_rebin6_total_errors_felx3001,m3lmet_Meas_rebin6_total_errors_fehx3001,m3lmet_Meas_rebin6_total_errors_fely3001,m3lmet_Meas_rebin6_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin6_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin6_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin6_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetMinimum(20.92728);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetMaximum(476.2525);
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
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin6_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_rebin6_data_graph_fx3002[6] = {
   87.66096,
   190.5827,
   220.0322,
   251.3588,
   292.6306,
   408.3823};
   Double_t m3lmet_Meas_rebin6_data_graph_fy3002[6] = {
   59,
   211,
   234,
   298,
   271,
   440};
   Double_t m3lmet_Meas_rebin6_data_graph_felx3002[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_data_graph_fely3002[6] = {
   7.659464,
   14.51463,
   15.28645,
   17.25336,
   16.45227,
   20.96866};
   Double_t m3lmet_Meas_rebin6_data_graph_fehx3002[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_data_graph_fehy3002[6] = {
   8.724747,
   15.54914,
   16.31922,
   18.28239,
   17.48272,
   21.99255};
   grae = new TGraphAsymmErrors(6,m3lmet_Meas_rebin6_data_graph_fx3002,m3lmet_Meas_rebin6_data_graph_fy3002,m3lmet_Meas_rebin6_data_graph_felx3002,m3lmet_Meas_rebin6_data_graph_fehx3002,m3lmet_Meas_rebin6_data_graph_fely3002,m3lmet_Meas_rebin6_data_graph_fehy3002);
   grae->SetName("m3lmet_Meas_rebin6_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin6_data_graph3002 = new TH1F("Graph_m3lmet_Meas_rebin6_data_graph3002","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin6_data_graph3002->SetMinimum(10.27533);
   Graph_m3lmet_Meas_rebin6_data_graph3002->SetMaximum(503.0578);
   Graph_m3lmet_Meas_rebin6_data_graph3002->SetDirectory(0);
   Graph_m3lmet_Meas_rebin6_data_graph3002->SetStats(0);
   Graph_m3lmet_Meas_rebin6_data_graph3002->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin6_data_graph3002->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin6_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin6_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin6_prompt_WZ_stack_5","WZ","F");

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
   m3lmet_Meas_rebin6_canvas->cd();
  
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
   Double_t xAxis9[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_total__3 = new TH1D("m3lmet_Meas_rebin6_total__3","dummy",6, xAxis9);
   m3lmet_Meas_rebin6_total__3->SetBinContent(1,1);
   m3lmet_Meas_rebin6_total__3->SetBinContent(2,1);
   m3lmet_Meas_rebin6_total__3->SetBinContent(3,1);
   m3lmet_Meas_rebin6_total__3->SetBinContent(4,1);
   m3lmet_Meas_rebin6_total__3->SetBinContent(5,1);
   m3lmet_Meas_rebin6_total__3->SetBinContent(6,1);
   m3lmet_Meas_rebin6_total__3->SetMinimum(0.5);
   m3lmet_Meas_rebin6_total__3->SetMaximum(2);
   m3lmet_Meas_rebin6_total__3->SetEntries(15158);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin6_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin6_total__3->SetMarkerColor(ci);
   m3lmet_Meas_rebin6_total__3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_total__3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin6_total__3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_total__3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin6_total__3->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin6_total__3->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin6_total__3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin6_total__3->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin6_total__3->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin6_total__3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin6_total__3->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin6_total__3->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin6_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin6_total__3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_total__3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__3->Draw("AXIS");
   
   Double_t m3lmet_Meas_rebin6_total_errors_fx3003[6] = {
   87.66096,
   190.5827,
   220.0322,
   251.3588,
   292.6306,
   408.3823};
   Double_t m3lmet_Meas_rebin6_total_errors_fy3003[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin6_total_errors_felx3003[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_total_errors_fely3003[6] = {
   0.1135057,
   0.04221358,
   0.02934393,
   0.02674393,
   0.02429951,
   0.01757599};
   Double_t m3lmet_Meas_rebin6_total_errors_fehx3003[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_total_errors_fehy3003[6] = {
   0.1135057,
   0.04221358,
   0.02934393,
   0.02674393,
   0.02429951,
   0.01757599};
   grae = new TGraphAsymmErrors(6,m3lmet_Meas_rebin6_total_errors_fx3003,m3lmet_Meas_rebin6_total_errors_fy3003,m3lmet_Meas_rebin6_total_errors_felx3003,m3lmet_Meas_rebin6_total_errors_fehx3003,m3lmet_Meas_rebin6_total_errors_fely3003,m3lmet_Meas_rebin6_total_errors_fehy3003);
   grae->SetName("m3lmet_Meas_rebin6_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_rebin6_total_errors_fx3004[6] = {
   87.66096,
   190.5827,
   220.0322,
   251.3588,
   292.6306,
   408.3823};
   Double_t m3lmet_Meas_rebin6_total_errors_fy3004[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin6_total_errors_felx3004[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_total_errors_fely3004[6] = {
   0.1135057,
   0.04221358,
   0.02934393,
   0.02674393,
   0.02429951,
   0.01757599};
   Double_t m3lmet_Meas_rebin6_total_errors_fehx3004[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t m3lmet_Meas_rebin6_total_errors_fehy3004[6] = {
   0.1135057,
   0.04221358,
   0.02934393,
   0.02674393,
   0.02429951,
   0.01757599};
   grae = new TGraphAsymmErrors(6,m3lmet_Meas_rebin6_total_errors_fx3004,m3lmet_Meas_rebin6_total_errors_fy3004,m3lmet_Meas_rebin6_total_errors_felx3004,m3lmet_Meas_rebin6_total_errors_fehx3004,m3lmet_Meas_rebin6_total_errors_fely3004,m3lmet_Meas_rebin6_total_errors_fehy3004);
   grae->SetName("m3lmet_Meas_rebin6_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[7] = {0, 175.3219, 205.8435, 234.2208, 268.4968, 316.7645, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_total__4 = new TH1D("m3lmet_Meas_rebin6_total__4","dummy",6, xAxis10);
   m3lmet_Meas_rebin6_total__4->SetBinContent(1,1);
   m3lmet_Meas_rebin6_total__4->SetBinContent(2,1);
   m3lmet_Meas_rebin6_total__4->SetBinContent(3,1);
   m3lmet_Meas_rebin6_total__4->SetBinContent(4,1);
   m3lmet_Meas_rebin6_total__4->SetBinContent(5,1);
   m3lmet_Meas_rebin6_total__4->SetBinContent(6,1);
   m3lmet_Meas_rebin6_total__4->SetMinimum(0.5);
   m3lmet_Meas_rebin6_total__4->SetMaximum(2);
   m3lmet_Meas_rebin6_total__4->SetEntries(15158);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin6_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin6_total__4->SetMarkerColor(ci);
   m3lmet_Meas_rebin6_total__4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_total__4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin6_total__4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_total__4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin6_total__4->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin6_total__4->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin6_total__4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin6_total__4->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin6_total__4->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin6_total__4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin6_total__4->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin6_total__4->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin6_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin6_total__4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_total__4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[6] = {
   87.66096,
   190.5827,
   220.0322,
   251.3588,
   292.6306,
   408.3823};
   Double_t data_div_fy3005[6] = {
   0.8884361,
   1.18737,
   0.9302554,
   1.020266,
   0.976684,
   1.021503};
   Double_t data_div_felx3005[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t data_div_fely3005[6] = {
   0.115338,
   0.08167883,
   0.06077052,
   0.05907051,
   0.05929398,
   0.04868076};
   Double_t data_div_fehx3005[6] = {
   87.66096,
   15.2608,
   14.18866,
   17.13796,
   24.13388,
   91.61774};
   Double_t data_div_fehy3005[6] = {
   0.1313793,
   0.08750036,
   0.06487623,
   0.06259363,
   0.06300771,
   0.05105783};
   grae = new TGraphAsymmErrors(6,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin6_data_graph3005 = new TH1F("Graph_m3lmet_Meas_rebin6_data_graph3005","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin6_data_graph3005->SetMinimum(10.27533);
   Graph_m3lmet_Meas_rebin6_data_graph3005->SetMaximum(503.0578);
   Graph_m3lmet_Meas_rebin6_data_graph3005->SetDirectory(0);
   Graph_m3lmet_Meas_rebin6_data_graph3005->SetStats(0);
   Graph_m3lmet_Meas_rebin6_data_graph3005->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin6_data_graph3005->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin6_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin6_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3lmet_Meas_rebin6_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3lmet_Meas_rebin6_canvas->cd();
   m3lmet_Meas_rebin6_canvas->Modified();
   m3lmet_Meas_rebin6_canvas->cd();
   m3lmet_Meas_rebin6_canvas->SetSelected(m3lmet_Meas_rebin6_canvas);
}
