void m3l_rebin14()
{
//=========Macro generated from canvas: m3l_rebin14_canvas/m3l_rebin14
//=========  (Thu Dec  8 14:31:33 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin14_canvas = new TCanvas("m3l_rebin14_canvas", "m3l_rebin14",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin14_canvas->SetHighLightColor(2);
   m3l_rebin14_canvas->Range(0,0,1,1);
   m3l_rebin14_canvas->SetFillColor(0);
   m3l_rebin14_canvas->SetBorderMode(0);
   m3l_rebin14_canvas->SetBorderSize(2);
   m3l_rebin14_canvas->SetTickx(1);
   m3l_rebin14_canvas->SetTicky(1);
   m3l_rebin14_canvas->SetLeftMargin(0.18);
   m3l_rebin14_canvas->SetRightMargin(0.04);
   m3l_rebin14_canvas->SetBottomMargin(0.13);
   m3l_rebin14_canvas->SetFrameFillStyle(0);
   m3l_rebin14_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-31.04257,525.641,1210.66);
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
   Double_t xAxis1[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_total__1 = new TH1D("m3l_rebin14_total__1","dummy",14, xAxis1);
   m3l_rebin14_total__1->SetBinContent(3,1.719522);
   m3l_rebin14_total__1->SetBinContent(4,3.750675);
   m3l_rebin14_total__1->SetBinContent(5,2.576094);
   m3l_rebin14_total__1->SetBinContent(6,8.982158);
   m3l_rebin14_total__1->SetBinContent(7,22.21304);
   m3l_rebin14_total__1->SetBinContent(8,34.55994);
   m3l_rebin14_total__1->SetBinContent(9,55.5552);
   m3l_rebin14_total__1->SetBinContent(10,83.90151);
   m3l_rebin14_total__1->SetBinContent(11,182.1679);
   m3l_rebin14_total__1->SetBinContent(12,202.6443);
   m3l_rebin14_total__1->SetBinContent(13,329.7951);
   m3l_rebin14_total__1->SetBinContent(14,568.079);
   m3l_rebin14_total__1->SetBinError(3,1.719522);
   m3l_rebin14_total__1->SetBinError(4,2.437079);
   m3l_rebin14_total__1->SetBinError(5,1.74099);
   m3l_rebin14_total__1->SetBinError(6,3.470835);
   m3l_rebin14_total__1->SetBinError(7,4.364079);
   m3l_rebin14_total__1->SetBinError(8,3.807089);
   m3l_rebin14_total__1->SetBinError(9,4.397258);
   m3l_rebin14_total__1->SetBinError(10,5.26017);
   m3l_rebin14_total__1->SetBinError(11,6.722833);
   m3l_rebin14_total__1->SetBinError(12,6.43775);
   m3l_rebin14_total__1->SetBinError(13,7.855162);
   m3l_rebin14_total__1->SetBinError(14,8.860209);
   m3l_rebin14_total__1->SetMinimum(0);
   m3l_rebin14_total__1->SetMaximum(1136.158);
   m3l_rebin14_total__1->SetEntries(15152);
   m3l_rebin14_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin14_total__1->SetFillColor(ci);
   m3l_rebin14_total__1->SetMarkerStyle(20);
   m3l_rebin14_total__1->SetMarkerSize(1.1);
   m3l_rebin14_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin14_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin14_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin14_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin14_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin14_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_total__1->Draw("HIST");
   
   THStack *m3l_rebin14_stack = new THStack();
   m3l_rebin14_stack->SetName("m3l_rebin14_stack");
   m3l_rebin14_stack->SetTitle("m3l_rebin14");
   Double_t xAxis2[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1F *m3l_rebin14_stack_stack_1 = new TH1F("m3l_rebin14_stack_stack_1","m3l_rebin14",14, xAxis2);
   m3l_rebin14_stack_stack_1->SetMinimum(0);
   m3l_rebin14_stack_stack_1->SetMaximum(596.4829);
   m3l_rebin14_stack_stack_1->SetDirectory(0);
   m3l_rebin14_stack_stack_1->SetStats(0);
   m3l_rebin14_stack_stack_1->SetLineStyle(0);
   m3l_rebin14_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->SetHistogram(m3l_rebin14_stack_stack_1);
   
   Double_t xAxis3[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_fakes_VV_stack_1 = new TH1D("m3l_rebin14_fakes_VV_stack_1","dummy",14, xAxis3);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(10,0.09719337);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(12,0.1943867);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(14,0.3887735);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(10,0.09719337);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(12,0.1374522);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(14,0.1943867);
   m3l_rebin14_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin14_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin14_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin14_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_fakes_VV_stack_1,"");
   Double_t xAxis4[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_fakes_TT_stack_2 = new TH1D("m3l_rebin14_fakes_TT_stack_2","dummy",14, xAxis4);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(4,0.3116311);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(5,0.1329884);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(6,0.1994827);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(7,0.6441022);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(8,1.24255);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(9,1.953147);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(10,3.125229);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(11,5.386032);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(12,6.582928);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(13,13.09936);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(14,22.36687);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(4,0.1607536);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(5,0.09403703);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(6,0.1151714);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(7,0.2189729);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(8,0.2962135);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(9,0.3743168);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(10,0.4558614);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(11,0.598448);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(12,0.6682587);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(13,0.9380165);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(14,1.234519);
   m3l_rebin14_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin14_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin14_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin14_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_fakes_TT_stack_2,"");
   Double_t xAxis5[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_fakes_DY_stack_3 = new TH1D("m3l_rebin14_fakes_DY_stack_3","dummy",14, xAxis5);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(3,1.719522);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(4,3.439044);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(5,1.719522);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(6,6.878088);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(7,10.31713);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(8,6.878088);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(9,8.597611);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(10,12.03665);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(11,17.19522);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(12,13.75618);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(13,18.91474);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(14,15.4757);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(3,1.719522);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(4,2.431771);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(5,1.719522);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(6,3.439044);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(7,4.211952);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(8,3.439044);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(9,3.844968);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(10,4.549428);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(11,5.437606);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(12,4.863543);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(13,5.70301);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(14,5.158566);
   m3l_rebin14_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin14_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin14_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin14_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_fakes_DY_stack_3,"");
   Double_t xAxis6[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_prompt_ZZ_stack_4 = new TH1D("m3l_rebin14_prompt_ZZ_stack_4","dummy",14, xAxis6);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(6,0.3669708);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(7,2.568796);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(8,2.01834);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(9,3.669708);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(10,5.871533);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(11,8.990785);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(12,9.17427);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(13,14.67883);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(14,25.87144);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(6,0.2594876);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(7,0.6865395);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(8,0.6085523);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(9,0.8205717);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(10,1.03795);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(11,1.284398);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(12,1.297438);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(13,1.641143);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(14,2.178769);
   m3l_rebin14_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin14_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin14_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin14_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_prompt_ZZ_stack_4,"");
   Double_t xAxis7[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_prompt_WZ_stack_5 = new TH1D("m3l_rebin14_prompt_WZ_stack_5","dummy",14, xAxis7);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(5,0.7235839);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(6,1.537616);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(7,8.683007);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(8,24.42096);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(9,41.33473);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(10,62.77091);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(11,150.5959);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(12,172.9366);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(13,283.1022);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(14,503.9762);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(5,0.2558255);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(6,0.3729266);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(7,0.8862057);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(8,1.486212);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(9,1.933557);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(10,2.382751);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(11,3.690677);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(12,3.954967);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(13,5.06024);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(14,6.751565);
   m3l_rebin14_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin14_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin14_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin14_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_prompt_WZ_stack_5,"");
   m3l_rebin14_stack->Draw("same hist");
   Double_t xAxis8[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_total__2 = new TH1D("m3l_rebin14_total__2","dummy",14, xAxis8);
   m3l_rebin14_total__2->SetBinContent(3,1.719522);
   m3l_rebin14_total__2->SetBinContent(4,3.750675);
   m3l_rebin14_total__2->SetBinContent(5,2.576094);
   m3l_rebin14_total__2->SetBinContent(6,8.982158);
   m3l_rebin14_total__2->SetBinContent(7,22.21304);
   m3l_rebin14_total__2->SetBinContent(8,34.55994);
   m3l_rebin14_total__2->SetBinContent(9,55.5552);
   m3l_rebin14_total__2->SetBinContent(10,83.90151);
   m3l_rebin14_total__2->SetBinContent(11,182.1679);
   m3l_rebin14_total__2->SetBinContent(12,202.6443);
   m3l_rebin14_total__2->SetBinContent(13,329.7951);
   m3l_rebin14_total__2->SetBinContent(14,568.079);
   m3l_rebin14_total__2->SetBinError(3,1.719522);
   m3l_rebin14_total__2->SetBinError(4,2.437079);
   m3l_rebin14_total__2->SetBinError(5,1.74099);
   m3l_rebin14_total__2->SetBinError(6,3.470835);
   m3l_rebin14_total__2->SetBinError(7,4.364079);
   m3l_rebin14_total__2->SetBinError(8,3.807089);
   m3l_rebin14_total__2->SetBinError(9,4.397258);
   m3l_rebin14_total__2->SetBinError(10,5.26017);
   m3l_rebin14_total__2->SetBinError(11,6.722833);
   m3l_rebin14_total__2->SetBinError(12,6.43775);
   m3l_rebin14_total__2->SetBinError(13,7.855162);
   m3l_rebin14_total__2->SetBinError(14,8.860209);
   m3l_rebin14_total__2->SetMinimum(0);
   m3l_rebin14_total__2->SetMaximum(1136.158);
   m3l_rebin14_total__2->SetEntries(15152);
   m3l_rebin14_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin14_total__2->SetFillColor(ci);
   m3l_rebin14_total__2->SetMarkerStyle(20);
   m3l_rebin14_total__2->SetMarkerSize(1.1);
   m3l_rebin14_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin14_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin14_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin14_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin14_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin14_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin14_total_errors_fx3001[12] = {
   122.3239,
   131.2534,
   140.183,
   149.6504,
   160.4605,
   172.0753,
   183.6901,
   195.7787,
   212.8153,
   234.3262,
   267.4066,
   394.8658};
   Double_t m3l_rebin14_total_errors_fy3001[12] = {
   1.719522,
   3.750675,
   2.576094,
   8.982158,
   22.21304,
   34.55994,
   55.5552,
   83.90151,
   182.1679,
   202.6443,
   329.7951,
   568.079};
   Double_t m3l_rebin14_total_errors_felx3001[12] = {
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_total_errors_fely3001[12] = {
   1.719522,
   2.437079,
   1.74099,
   3.470835,
   4.364079,
   3.807089,
   4.397258,
   5.26017,
   6.722833,
   6.43775,
   7.855162,
   8.860209};
   Double_t m3l_rebin14_total_errors_fehx3001[12] = {
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_total_errors_fehy3001[12] = {
   1.719522,
   2.437079,
   1.74099,
   3.470835,
   4.364079,
   3.807089,
   4.397258,
   5.26017,
   6.722833,
   6.43775,
   7.855162,
   8.860209};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,m3l_rebin14_total_errors_fx3001,m3l_rebin14_total_errors_fy3001,m3l_rebin14_total_errors_felx3001,m3l_rebin14_total_errors_fehx3001,m3l_rebin14_total_errors_fely3001,m3l_rebin14_total_errors_fehy3001);
   grae->SetName("m3l_rebin14_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin14_total_errors3001 = new TH1F("Graph_m3l_rebin14_total_errors3001","Graph",100,79.64502,538.2141);
   Graph_m3l_rebin14_total_errors3001->SetMinimum(0);
   Graph_m3l_rebin14_total_errors3001->SetMaximum(634.6331);
   Graph_m3l_rebin14_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin14_total_errors3001->SetStats(0);
   Graph_m3l_rebin14_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin14_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin14_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin14_data_graph_fx3002[14] = {
   54.46478,
   113.3943,
   122.3239,
   131.2534,
   140.183,
   149.6504,
   160.4605,
   172.0753,
   183.6901,
   195.7787,
   212.8153,
   234.3262,
   267.4066,
   394.8658};
   Double_t m3l_rebin14_data_graph_fy3002[14] = {
   0,
   1,
   3,
   3,
   2,
   4,
   17,
   39,
   74,
   90,
   182,
   178,
   341,
   579};
   Double_t m3l_rebin14_data_graph_felx3002[14] = {
   54.46478,
   4.464779,
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_data_graph_fely3002[14] = {
   0,
   0.8272525,
   1.632727,
   1.632727,
   1.29183,
   1.914367,
   4.082258,
   6.218222,
   8.583016,
   9.469369,
   13.47862,
   13.3294,
   18.45752,
   24.05599};
   Double_t m3l_rebin14_data_graph_fehx3002[14] = {
   54.46478,
   4.464779,
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_data_graph_fehy3002[14] = {
   1.841055,
   2.29957,
   2.918242,
   2.918242,
   2.63791,
   3.162815,
   5.203825,
   7.298524,
   9.641304,
   10.52222,
   14.51578,
   14.36698,
   19.48467,
   25.07682};
   grae = new TGraphAsymmErrors(14,m3l_rebin14_data_graph_fx3002,m3l_rebin14_data_graph_fy3002,m3l_rebin14_data_graph_felx3002,m3l_rebin14_data_graph_fehx3002,m3l_rebin14_data_graph_fely3002,m3l_rebin14_data_graph_fehy3002);
   grae->SetName("m3l_rebin14_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin14_data_graph3002 = new TH1F("Graph_m3l_rebin14_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin14_data_graph3002->SetMinimum(0);
   Graph_m3l_rebin14_data_graph3002->SetMaximum(664.4845);
   Graph_m3l_rebin14_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin14_data_graph3002->SetStats(0);
   Graph_m3l_rebin14_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin14_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin14_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin14_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin14_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin14_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin14_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin14_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin14_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin14_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin14_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin14_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin14_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin14_total_errors","Total unc.","F");
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
   m3l_rebin14_canvas->cd();
  
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
   Double_t xAxis9[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_total__3 = new TH1D("m3l_rebin14_total__3","dummy",14, xAxis9);
   m3l_rebin14_total__3->SetBinContent(3,1);
   m3l_rebin14_total__3->SetBinContent(4,1);
   m3l_rebin14_total__3->SetBinContent(5,1);
   m3l_rebin14_total__3->SetBinContent(6,1);
   m3l_rebin14_total__3->SetBinContent(7,1);
   m3l_rebin14_total__3->SetBinContent(8,1);
   m3l_rebin14_total__3->SetBinContent(9,1);
   m3l_rebin14_total__3->SetBinContent(10,1);
   m3l_rebin14_total__3->SetBinContent(11,1);
   m3l_rebin14_total__3->SetBinContent(12,1);
   m3l_rebin14_total__3->SetBinContent(13,1);
   m3l_rebin14_total__3->SetBinContent(14,1);
   m3l_rebin14_total__3->SetMinimum(0.5);
   m3l_rebin14_total__3->SetMaximum(2);
   m3l_rebin14_total__3->SetEntries(15166);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin14_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin14_total__3->SetMarkerColor(ci);
   m3l_rebin14_total__3->SetMarkerSize(1.1);
   m3l_rebin14_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin14_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin14_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin14_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin14_total__3->GetYaxis()->SetDecimals();
   m3l_rebin14_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin14_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin14_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin14_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin14_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin14_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_total__3->Draw("AXIS");
   
   Double_t m3l_rebin14_total_errors_fx3003[12] = {
   122.3239,
   131.2534,
   140.183,
   149.6504,
   160.4605,
   172.0753,
   183.6901,
   195.7787,
   212.8153,
   234.3262,
   267.4066,
   394.8658};
   Double_t m3l_rebin14_total_errors_fy3003[12] = {
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
   Double_t m3l_rebin14_total_errors_felx3003[12] = {
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_total_errors_fely3003[12] = {
   1,
   0.6497707,
   0.6758253,
   0.3864144,
   0.1964647,
   0.110159,
   0.07915115,
   0.06269458,
   0.03690459,
   0.03176872,
   0.02381831,
   0.01559679};
   Double_t m3l_rebin14_total_errors_fehx3003[12] = {
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_total_errors_fehy3003[12] = {
   1,
   0.6497707,
   0.6758253,
   0.3864144,
   0.1964647,
   0.110159,
   0.07915115,
   0.06269458,
   0.03690459,
   0.03176872,
   0.02381831,
   0.01559679};
   grae = new TGraphAsymmErrors(12,m3l_rebin14_total_errors_fx3003,m3l_rebin14_total_errors_fy3003,m3l_rebin14_total_errors_felx3003,m3l_rebin14_total_errors_fehx3003,m3l_rebin14_total_errors_fely3003,m3l_rebin14_total_errors_fehy3003);
   grae->SetName("m3l_rebin14_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin14_total_errors_fx3004[12] = {
   122.3239,
   131.2534,
   140.183,
   149.6504,
   160.4605,
   172.0753,
   183.6901,
   195.7787,
   212.8153,
   234.3262,
   267.4066,
   394.8658};
   Double_t m3l_rebin14_total_errors_fy3004[12] = {
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
   Double_t m3l_rebin14_total_errors_felx3004[12] = {
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_total_errors_fely3004[12] = {
   1,
   0.6497707,
   0.6758253,
   0.3864144,
   0.1964647,
   0.110159,
   0.07915115,
   0.06269458,
   0.03690459,
   0.03176872,
   0.02381831,
   0.01559679};
   Double_t m3l_rebin14_total_errors_fehx3004[12] = {
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_total_errors_fehy3004[12] = {
   1,
   0.6497707,
   0.6758253,
   0.3864144,
   0.1964647,
   0.110159,
   0.07915115,
   0.06269458,
   0.03690459,
   0.03176872,
   0.02381831,
   0.01559679};
   grae = new TGraphAsymmErrors(12,m3l_rebin14_total_errors_fx3004,m3l_rebin14_total_errors_fy3004,m3l_rebin14_total_errors_felx3004,m3l_rebin14_total_errors_fehx3004,m3l_rebin14_total_errors_fely3004,m3l_rebin14_total_errors_fehy3004);
   grae->SetName("m3l_rebin14_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_total__4 = new TH1D("m3l_rebin14_total__4","dummy",14, xAxis10);
   m3l_rebin14_total__4->SetBinContent(3,1);
   m3l_rebin14_total__4->SetBinContent(4,1);
   m3l_rebin14_total__4->SetBinContent(5,1);
   m3l_rebin14_total__4->SetBinContent(6,1);
   m3l_rebin14_total__4->SetBinContent(7,1);
   m3l_rebin14_total__4->SetBinContent(8,1);
   m3l_rebin14_total__4->SetBinContent(9,1);
   m3l_rebin14_total__4->SetBinContent(10,1);
   m3l_rebin14_total__4->SetBinContent(11,1);
   m3l_rebin14_total__4->SetBinContent(12,1);
   m3l_rebin14_total__4->SetBinContent(13,1);
   m3l_rebin14_total__4->SetBinContent(14,1);
   m3l_rebin14_total__4->SetMinimum(0.5);
   m3l_rebin14_total__4->SetMaximum(2);
   m3l_rebin14_total__4->SetEntries(15166);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin14_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin14_total__4->SetMarkerColor(ci);
   m3l_rebin14_total__4->SetMarkerSize(1.1);
   m3l_rebin14_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin14_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin14_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin14_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin14_total__4->GetYaxis()->SetDecimals();
   m3l_rebin14_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin14_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin14_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin14_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin14_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin14_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[14] = {
   54.46478,
   113.3943,
   122.3239,
   131.2534,
   140.183,
   149.6504,
   160.4605,
   172.0753,
   183.6901,
   195.7787,
   212.8153,
   234.3262,
   267.4066,
   394.8658};
   Double_t data_div_fy3005[14] = {
   0,
   0,
   1.744671,
   0.799856,
   0.776369,
   0.4453273,
   0.7653163,
   1.128474,
   1.332009,
   1.072686,
   0.9990781,
   0.8783863,
   1.033975,
   1.019224};
   Double_t data_div_felx3005[14] = {
   54.46478,
   4.464779,
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t data_div_fely3005[14] = {
   0,
   0,
   0.9495236,
   0.4353154,
   0.5014683,
   0.21313,
   0.1837776,
   0.1799258,
   0.1544953,
   0.1128629,
   0.07399007,
   0.06577734,
   0.05596663,
   0.0423462};
   Double_t data_div_fehx3005[14] = {
   54.46478,
   4.464779,
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t data_div_fehy3005[14] = {
   0,
   0,
   1.697124,
   0.7780579,
   1.023996,
   0.352122,
   0.234269,
   0.2111845,
   0.1735446,
   0.1254115,
   0.07968348,
   0.0708975,
   0.05908112,
   0.04414319};
   grae = new TGraphAsymmErrors(14,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin14_data_graph3005 = new TH1F("Graph_m3l_rebin14_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin14_data_graph3005->SetMinimum(0);
   Graph_m3l_rebin14_data_graph3005->SetMaximum(664.4845);
   Graph_m3l_rebin14_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin14_data_graph3005->SetStats(0);
   Graph_m3l_rebin14_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin14_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin14_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin14_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin14_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin14_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin14_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin14_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin14_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin14_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin14_canvas->cd();
   m3l_rebin14_canvas->Modified();
   m3l_rebin14_canvas->cd();
   m3l_rebin14_canvas->SetSelected(m3l_rebin14_canvas);
}
