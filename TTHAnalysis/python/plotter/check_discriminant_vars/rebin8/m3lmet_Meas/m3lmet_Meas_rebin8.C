void m3lmet_Meas_rebin8()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin8_canvas/m3lmet_Meas_rebin8
//=========  (Thu Dec 15 20:02:55 2022) by ROOT version 6.12/07
   TCanvas *m3lmet_Meas_rebin8_canvas = new TCanvas("m3lmet_Meas_rebin8_canvas", "m3lmet_Meas_rebin8",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin8_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin8_canvas->Range(0,0,1,1);
   m3lmet_Meas_rebin8_canvas->SetFillColor(0);
   m3lmet_Meas_rebin8_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin8_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin8_canvas->SetTickx(1);
   m3lmet_Meas_rebin8_canvas->SetTicky(1);
   m3lmet_Meas_rebin8_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin8_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin8_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin8_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin8_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-19.87171,525.641,774.9968);
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
   Double_t xAxis1[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_total__1 = new TH1D("m3lmet_Meas_rebin8_total__1","dummy",8, xAxis1);
   m3lmet_Meas_rebin8_total__1->SetBinContent(1,41.55041);
   m3lmet_Meas_rebin8_total__1->SetBinContent(2,95.11613);
   m3lmet_Meas_rebin8_total__1->SetBinContent(3,164.1867);
   m3lmet_Meas_rebin8_total__1->SetBinContent(4,194.8031);
   m3lmet_Meas_rebin8_total__1->SetBinContent(5,218.5054);
   m3lmet_Meas_rebin8_total__1->SetBinContent(6,211.3761);
   m3lmet_Meas_rebin8_total__1->SetBinContent(7,206.7544);
   m3lmet_Meas_rebin8_total__1->SetBinContent(8,363.6523);
   m3lmet_Meas_rebin8_total__1->SetBinError(1,6.577145);
   m3lmet_Meas_rebin8_total__1->SetBinError(2,5.859059);
   m3lmet_Meas_rebin8_total__1->SetBinError(3,6.816748);
   m3lmet_Meas_rebin8_total__1->SetBinError(4,6.596869);
   m3lmet_Meas_rebin8_total__1->SetBinError(5,7.358263);
   m3lmet_Meas_rebin8_total__1->SetBinError(6,5.561996);
   m3lmet_Meas_rebin8_total__1->SetBinError(7,5.53822);
   m3lmet_Meas_rebin8_total__1->SetBinError(8,6.931115);
   m3lmet_Meas_rebin8_total__1->SetMinimum(0);
   m3lmet_Meas_rebin8_total__1->SetMaximum(727.3046);
   m3lmet_Meas_rebin8_total__1->SetEntries(15152);
   m3lmet_Meas_rebin8_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin8_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin8_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin8_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin8_stack = new THStack();
   m3lmet_Meas_rebin8_stack->SetName("m3lmet_Meas_rebin8_stack");
   m3lmet_Meas_rebin8_stack->SetTitle("m3lmet_Meas_rebin8");
   Double_t xAxis2[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1F *m3lmet_Meas_rebin8_stack_stack_1 = new TH1F("m3lmet_Meas_rebin8_stack_stack_1","m3lmet_Meas_rebin8",8, xAxis2);
   m3lmet_Meas_rebin8_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin8_stack_stack_1->SetMaximum(381.8349);
   m3lmet_Meas_rebin8_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin8_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin8_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin8_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->SetHistogram(m3lmet_Meas_rebin8_stack_stack_1);
   
   Double_t xAxis3[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin8_fakes_VV_stack_1","dummy",8, xAxis3);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(4,0.1943867);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(7,0.2915801);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(3,0.09719337);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(4,0.1374522);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(7,0.1683439);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(8,0.09719337);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_fakes_VV_stack_1,"");
   Double_t xAxis4[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin8_fakes_TT_stack_2","dummy",8, xAxis4);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(1,1.421193);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(2,3.39518);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(3,5.652009);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(4,6.250457);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(5,7.24787);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(6,8.644249);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(7,9.134523);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(8,13.29884);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(1,0.3236375);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(2,0.4910397);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(3,0.6130465);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(4,0.6446854);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(5,0.7068433);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(6,0.7581508);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(7,0.7858964);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(8,0.9543717);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_fakes_TT_stack_2,"");
   Double_t xAxis5[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin8_fakes_DY_stack_3","dummy",8, xAxis5);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(1,24.07331);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(2,15.4757);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(3,18.91474);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(4,15.4757);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(5,20.63427);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(6,6.878088);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(7,6.878088);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(8,8.597611);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(1,6.433863);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(2,5.158566);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(3,5.70301);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(4,5.158566);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(5,5.956599);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(6,3.439044);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(7,3.439044);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(8,3.844968);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_fakes_DY_stack_3,"");
   Double_t xAxis6[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin8_prompt_ZZ_stack_4","dummy",8, xAxis6);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(1,3.302737);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(2,6.238504);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(3,10.0917);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(4,8.990785);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(5,9.908212);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(6,8.8073);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(7,10.45867);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(8,15.41277);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(1,0.7784627);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(2,1.069895);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(3,1.360764);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(4,1.284398);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(5,1.348337);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(6,1.271224);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(7,1.385284);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(8,1.681672);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_prompt_ZZ_stack_4,"");
   Double_t xAxis7[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin8_prompt_WZ_stack_5","dummy",8, xAxis7);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(1,12.75317);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(2,70.00674);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(3,129.4311);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(4,163.8918);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(5,180.7151);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(6,187.0464);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(7,179.9915);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(8,326.2459);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(1,1.07401);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(2,2.51634);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(3,3.421517);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(4,3.850153);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(5,4.042934);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(6,4.113147);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(7,4.034832);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(8,5.432153);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin8_stack->Draw("same hist");
   Double_t xAxis8[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_total__2 = new TH1D("m3lmet_Meas_rebin8_total__2","dummy",8, xAxis8);
   m3lmet_Meas_rebin8_total__2->SetBinContent(1,41.55041);
   m3lmet_Meas_rebin8_total__2->SetBinContent(2,95.11613);
   m3lmet_Meas_rebin8_total__2->SetBinContent(3,164.1867);
   m3lmet_Meas_rebin8_total__2->SetBinContent(4,194.8031);
   m3lmet_Meas_rebin8_total__2->SetBinContent(5,218.5054);
   m3lmet_Meas_rebin8_total__2->SetBinContent(6,211.3761);
   m3lmet_Meas_rebin8_total__2->SetBinContent(7,206.7544);
   m3lmet_Meas_rebin8_total__2->SetBinContent(8,363.6523);
   m3lmet_Meas_rebin8_total__2->SetBinError(1,6.577145);
   m3lmet_Meas_rebin8_total__2->SetBinError(2,5.859059);
   m3lmet_Meas_rebin8_total__2->SetBinError(3,6.816748);
   m3lmet_Meas_rebin8_total__2->SetBinError(4,6.596869);
   m3lmet_Meas_rebin8_total__2->SetBinError(5,7.358263);
   m3lmet_Meas_rebin8_total__2->SetBinError(6,5.561996);
   m3lmet_Meas_rebin8_total__2->SetBinError(7,5.53822);
   m3lmet_Meas_rebin8_total__2->SetBinError(8,6.931115);
   m3lmet_Meas_rebin8_total__2->SetMinimum(0);
   m3lmet_Meas_rebin8_total__2->SetMaximum(727.3046);
   m3lmet_Meas_rebin8_total__2->SetEntries(15152);
   m3lmet_Meas_rebin8_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin8_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin8_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin8_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin8_total_errors_fx3001[8] = {
   83.77625,
   179.2066,
   201.8993,
   223.5793,
   246.1508,
   273.7047,
   311.6395,
   416.9752};
   Double_t m3lmet_Meas_rebin8_total_errors_fy3001[8] = {
   41.55041,
   95.11613,
   164.1867,
   194.8031,
   218.5054,
   211.3761,
   206.7544,
   363.6523};
   Double_t m3lmet_Meas_rebin8_total_errors_felx3001[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_total_errors_fely3001[8] = {
   6.577145,
   5.859059,
   6.816748,
   6.596869,
   7.358263,
   5.561996,
   5.53822,
   6.931115};
   Double_t m3lmet_Meas_rebin8_total_errors_fehx3001[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_total_errors_fehy3001[8] = {
   6.577145,
   5.859059,
   6.816748,
   6.596869,
   7.358263,
   5.561996,
   5.53822,
   6.931115};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3lmet_Meas_rebin8_total_errors_fx3001,m3lmet_Meas_rebin8_total_errors_fy3001,m3lmet_Meas_rebin8_total_errors_felx3001,m3lmet_Meas_rebin8_total_errors_fehx3001,m3lmet_Meas_rebin8_total_errors_fely3001,m3lmet_Meas_rebin8_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin8_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin8_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin8_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetMinimum(1.412244);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetMaximum(404.1445);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin8_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_rebin8_data_graph_fx3002[8] = {
   83.77625,
   179.2066,
   201.8993,
   223.5793,
   246.1508,
   273.7047,
   311.6395,
   416.9752};
   Double_t m3lmet_Meas_rebin8_data_graph_fy3002[8] = {
   32,
   119,
   175,
   178,
   208,
   219,
   211,
   371};
   Double_t m3lmet_Meas_rebin8_data_graph_felx3002[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_data_graph_fely3002[8] = {
   5.627243,
   10.89359,
   13.21639,
   13.3294,
   14.41091,
   14.78766,
   14.51463,
   19.25309};
   Double_t m3lmet_Meas_rebin8_data_graph_fehx3002[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_data_graph_fehy3002[8] = {
   6.715892,
   11.93955,
   14.25428,
   14.36698,
   15.44567,
   15.82153,
   15.54914,
   20.27911};
   grae = new TGraphAsymmErrors(8,m3lmet_Meas_rebin8_data_graph_fx3002,m3lmet_Meas_rebin8_data_graph_fy3002,m3lmet_Meas_rebin8_data_graph_felx3002,m3lmet_Meas_rebin8_data_graph_fehx3002,m3lmet_Meas_rebin8_data_graph_fely3002,m3lmet_Meas_rebin8_data_graph_fehy3002);
   grae->SetName("m3lmet_Meas_rebin8_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin8_data_graph3002 = new TH1F("Graph_m3lmet_Meas_rebin8_data_graph3002","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin8_data_graph3002->SetMinimum(23.73548);
   Graph_m3lmet_Meas_rebin8_data_graph3002->SetMaximum(427.7697);
   Graph_m3lmet_Meas_rebin8_data_graph3002->SetDirectory(0);
   Graph_m3lmet_Meas_rebin8_data_graph3002->SetStats(0);
   Graph_m3lmet_Meas_rebin8_data_graph3002->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin8_data_graph3002->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin8_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin8_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin8_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin8_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin8_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin8_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin8_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin8_canvas->cd();
  
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
   Double_t xAxis9[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_total__3 = new TH1D("m3lmet_Meas_rebin8_total__3","dummy",8, xAxis9);
   m3lmet_Meas_rebin8_total__3->SetBinContent(1,1);
   m3lmet_Meas_rebin8_total__3->SetBinContent(2,1);
   m3lmet_Meas_rebin8_total__3->SetBinContent(3,1);
   m3lmet_Meas_rebin8_total__3->SetBinContent(4,1);
   m3lmet_Meas_rebin8_total__3->SetBinContent(5,1);
   m3lmet_Meas_rebin8_total__3->SetBinContent(6,1);
   m3lmet_Meas_rebin8_total__3->SetBinContent(7,1);
   m3lmet_Meas_rebin8_total__3->SetBinContent(8,1);
   m3lmet_Meas_rebin8_total__3->SetMinimum(0.5);
   m3lmet_Meas_rebin8_total__3->SetMaximum(2);
   m3lmet_Meas_rebin8_total__3->SetEntries(15160);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin8_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin8_total__3->SetMarkerColor(ci);
   m3lmet_Meas_rebin8_total__3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_total__3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_total__3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_total__3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin8_total__3->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin8_total__3->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin8_total__3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin8_total__3->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin8_total__3->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin8_total__3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin8_total__3->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin8_total__3->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin8_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin8_total__3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_total__3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__3->Draw("AXIS");
   
   Double_t m3lmet_Meas_rebin8_total_errors_fx3003[8] = {
   83.77625,
   179.2066,
   201.8993,
   223.5793,
   246.1508,
   273.7047,
   311.6395,
   416.9752};
   Double_t m3lmet_Meas_rebin8_total_errors_fy3003[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin8_total_errors_felx3003[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_total_errors_fely3003[8] = {
   0.1582931,
   0.06159901,
   0.04151827,
   0.03386429,
   0.03367542,
   0.02631327,
   0.02678647,
   0.01905973};
   Double_t m3lmet_Meas_rebin8_total_errors_fehx3003[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_total_errors_fehy3003[8] = {
   0.1582931,
   0.06159901,
   0.04151827,
   0.03386429,
   0.03367542,
   0.02631327,
   0.02678647,
   0.01905973};
   grae = new TGraphAsymmErrors(8,m3lmet_Meas_rebin8_total_errors_fx3003,m3lmet_Meas_rebin8_total_errors_fy3003,m3lmet_Meas_rebin8_total_errors_felx3003,m3lmet_Meas_rebin8_total_errors_fehx3003,m3lmet_Meas_rebin8_total_errors_fely3003,m3lmet_Meas_rebin8_total_errors_fehy3003);
   grae->SetName("m3lmet_Meas_rebin8_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_rebin8_total_errors_fx3004[8] = {
   83.77625,
   179.2066,
   201.8993,
   223.5793,
   246.1508,
   273.7047,
   311.6395,
   416.9752};
   Double_t m3lmet_Meas_rebin8_total_errors_fy3004[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin8_total_errors_felx3004[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_total_errors_fely3004[8] = {
   0.1582931,
   0.06159901,
   0.04151827,
   0.03386429,
   0.03367542,
   0.02631327,
   0.02678647,
   0.01905973};
   Double_t m3lmet_Meas_rebin8_total_errors_fehx3004[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_total_errors_fehy3004[8] = {
   0.1582931,
   0.06159901,
   0.04151827,
   0.03386429,
   0.03367542,
   0.02631327,
   0.02678647,
   0.01905973};
   grae = new TGraphAsymmErrors(8,m3lmet_Meas_rebin8_total_errors_fx3004,m3lmet_Meas_rebin8_total_errors_fy3004,m3lmet_Meas_rebin8_total_errors_felx3004,m3lmet_Meas_rebin8_total_errors_fehx3004,m3lmet_Meas_rebin8_total_errors_fely3004,m3lmet_Meas_rebin8_total_errors_fehy3004);
   grae->SetName("m3lmet_Meas_rebin8_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_total__4 = new TH1D("m3lmet_Meas_rebin8_total__4","dummy",8, xAxis10);
   m3lmet_Meas_rebin8_total__4->SetBinContent(1,1);
   m3lmet_Meas_rebin8_total__4->SetBinContent(2,1);
   m3lmet_Meas_rebin8_total__4->SetBinContent(3,1);
   m3lmet_Meas_rebin8_total__4->SetBinContent(4,1);
   m3lmet_Meas_rebin8_total__4->SetBinContent(5,1);
   m3lmet_Meas_rebin8_total__4->SetBinContent(6,1);
   m3lmet_Meas_rebin8_total__4->SetBinContent(7,1);
   m3lmet_Meas_rebin8_total__4->SetBinContent(8,1);
   m3lmet_Meas_rebin8_total__4->SetMinimum(0.5);
   m3lmet_Meas_rebin8_total__4->SetMaximum(2);
   m3lmet_Meas_rebin8_total__4->SetEntries(15160);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin8_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin8_total__4->SetMarkerColor(ci);
   m3lmet_Meas_rebin8_total__4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_total__4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_total__4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_total__4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin8_total__4->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin8_total__4->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin8_total__4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin8_total__4->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin8_total__4->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin8_total__4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin8_total__4->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin8_total__4->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin8_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin8_total__4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_total__4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[8] = {
   83.77625,
   179.2066,
   201.8993,
   223.5793,
   246.1508,
   273.7047,
   311.6395,
   416.9752};
   Double_t data_div_fy3005[8] = {
   0.7701489,
   1.251102,
   1.06586,
   0.9137432,
   0.9519214,
   1.036068,
   1.020535,
   1.020205};
   Double_t data_div_felx3005[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t data_div_fely3005[8] = {
   0.1354317,
   0.1145294,
   0.08049607,
   0.06842501,
   0.06595218,
   0.06995899,
   0.07020229,
   0.05294367};
   Double_t data_div_fehx3005[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t data_div_fehy3005[8] = {
   0.1616324,
   0.125526,
   0.08681749,
   0.07375127,
   0.07068779,
   0.07485014,
   0.07520585,
   0.05576511};
   grae = new TGraphAsymmErrors(8,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin8_data_graph3005 = new TH1F("Graph_m3lmet_Meas_rebin8_data_graph3005","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin8_data_graph3005->SetMinimum(23.73548);
   Graph_m3lmet_Meas_rebin8_data_graph3005->SetMaximum(427.7697);
   Graph_m3lmet_Meas_rebin8_data_graph3005->SetDirectory(0);
   Graph_m3lmet_Meas_rebin8_data_graph3005->SetStats(0);
   Graph_m3lmet_Meas_rebin8_data_graph3005->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin8_data_graph3005->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin8_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin8_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3lmet_Meas_rebin8_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3lmet_Meas_rebin8_canvas->cd();
   m3lmet_Meas_rebin8_canvas->Modified();
   m3lmet_Meas_rebin8_canvas->cd();
   m3lmet_Meas_rebin8_canvas->SetSelected(m3lmet_Meas_rebin8_canvas);
}
