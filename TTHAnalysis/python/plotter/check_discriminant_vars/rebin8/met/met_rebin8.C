void met_rebin8()
{
//=========Macro generated from canvas: met_rebin8_canvas/met_rebin8
//=========  (Thu Dec 15 19:53:05 2022) by ROOT version 6.12/07
   TCanvas *met_rebin8_canvas = new TCanvas("met_rebin8_canvas", "met_rebin8",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin8_canvas->SetHighLightColor(2);
   met_rebin8_canvas->Range(0,0,1,1);
   met_rebin8_canvas->SetFillColor(0);
   met_rebin8_canvas->SetBorderMode(0);
   met_rebin8_canvas->SetBorderSize(2);
   met_rebin8_canvas->SetTickx(1);
   met_rebin8_canvas->SetTicky(1);
   met_rebin8_canvas->SetLeftMargin(0.18);
   met_rebin8_canvas->SetRightMargin(0.04);
   met_rebin8_canvas->SetBottomMargin(0.13);
   met_rebin8_canvas->SetFrameFillStyle(0);
   met_rebin8_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-87.69231,-14.30703,399.4872,557.974);
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
   Double_t xAxis1[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1D *met_rebin8_total__1 = new TH1D("met_rebin8_total__1","dummy",8, xAxis1);
   met_rebin8_total__1->SetBinContent(2,118.9297);
   met_rebin8_total__1->SetBinContent(3,236.3826);
   met_rebin8_total__1->SetBinContent(4,233.3409);
   met_rebin8_total__1->SetBinContent(5,199.6732);
   met_rebin8_total__1->SetBinContent(6,188.09);
   met_rebin8_total__1->SetBinContent(7,261.8186);
   met_rebin8_total__1->SetBinContent(8,257.7095);
   met_rebin8_total__1->SetBinError(2,7.516062);
   met_rebin8_total__1->SetBinError(3,8.391105);
   met_rebin8_total__1->SetBinError(4,8.192861);
   met_rebin8_total__1->SetBinError(5,6.835026);
   met_rebin8_total__1->SetBinError(6,4.824953);
   met_rebin8_total__1->SetBinError(7,6.171628);
   met_rebin8_total__1->SetBinError(8,5.408758);
   met_rebin8_total__1->SetMinimum(0);
   met_rebin8_total__1->SetMaximum(523.6371);
   met_rebin8_total__1->SetEntries(15152);
   met_rebin8_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   met_rebin8_total__1->SetFillColor(ci);
   met_rebin8_total__1->SetMarkerStyle(20);
   met_rebin8_total__1->SetMarkerSize(1.1);
   met_rebin8_total__1->GetXaxis()->SetTitle("met");
   met_rebin8_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin8_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin8_total__1->GetXaxis()->SetLabelOffset(999);
   met_rebin8_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin8_total__1->GetXaxis()->SetTitleOffset(999);
   met_rebin8_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin8_total__1->GetYaxis()->SetTitle("Events");
   met_rebin8_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin8_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_total__1->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_total__1->GetYaxis()->SetTitleOffset(1.48);
   met_rebin8_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin8_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin8_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin8_total__1->Draw("HIST");
   
   THStack *met_rebin8_stack = new THStack();
   met_rebin8_stack->SetName("met_rebin8_stack");
   met_rebin8_stack->SetTitle("met_rebin8");
   Double_t xAxis2[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1F *met_rebin8_stack_stack_1 = new TH1F("met_rebin8_stack_stack_1","met_rebin8",8, xAxis2);
   met_rebin8_stack_stack_1->SetMinimum(0);
   met_rebin8_stack_stack_1->SetMaximum(274.9095);
   met_rebin8_stack_stack_1->SetDirectory(0);
   met_rebin8_stack_stack_1->SetStats(0);
   met_rebin8_stack_stack_1->SetLineStyle(0);
   met_rebin8_stack_stack_1->SetMarkerStyle(20);
   met_rebin8_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin8_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin8_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin8_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin8_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin8_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->SetHistogram(met_rebin8_stack_stack_1);
   
   Double_t xAxis3[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1D *met_rebin8_fakes_VV_stack_1 = new TH1D("met_rebin8_fakes_VV_stack_1","dummy",8, xAxis3);
   met_rebin8_fakes_VV_stack_1->SetBinContent(4,0.09719337);
   met_rebin8_fakes_VV_stack_1->SetBinContent(6,0.3887735);
   met_rebin8_fakes_VV_stack_1->SetBinContent(8,0.1943867);
   met_rebin8_fakes_VV_stack_1->SetBinError(4,0.09719337);
   met_rebin8_fakes_VV_stack_1->SetBinError(6,0.1943867);
   met_rebin8_fakes_VV_stack_1->SetBinError(8,0.1374522);
   met_rebin8_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin8_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin8_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin8_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_fakes_VV_stack_1,"");
   Double_t xAxis4[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1D *met_rebin8_fakes_TT_stack_2 = new TH1D("met_rebin8_fakes_TT_stack_2","dummy",8, xAxis4);
   met_rebin8_fakes_TT_stack_2->SetBinContent(2,1.72885);
   met_rebin8_fakes_TT_stack_2->SetBinContent(3,4.588102);
   met_rebin8_fakes_TT_stack_2->SetBinContent(4,5.099215);
   met_rebin8_fakes_TT_stack_2->SetBinContent(5,4.633756);
   met_rebin8_fakes_TT_stack_2->SetBinContent(6,7.493007);
   met_rebin8_fakes_TT_stack_2->SetBinContent(7,12.52573);
   met_rebin8_fakes_TT_stack_2->SetBinContent(8,18.97567);
   met_rebin8_fakes_TT_stack_2->SetBinError(2,0.3390553);
   met_rebin8_fakes_TT_stack_2->SetBinError(3,0.5523425);
   met_rebin8_fakes_TT_stack_2->SetBinError(4,0.5866757);
   met_rebin8_fakes_TT_stack_2->SetBinError(5,0.5596767);
   met_rebin8_fakes_TT_stack_2->SetBinError(6,0.7218363);
   met_rebin8_fakes_TT_stack_2->SetBinError(7,0.9230231);
   met_rebin8_fakes_TT_stack_2->SetBinError(8,1.135649);
   met_rebin8_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   met_rebin8_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin8_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin8_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_fakes_TT_stack_2,"");
   Double_t xAxis5[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1D *met_rebin8_fakes_DY_stack_3 = new TH1D("met_rebin8_fakes_DY_stack_3","dummy",8, xAxis5);
   met_rebin8_fakes_DY_stack_3->SetBinContent(2,27.51235);
   met_rebin8_fakes_DY_stack_3->SetBinContent(3,29.23188);
   met_rebin8_fakes_DY_stack_3->SetBinContent(4,27.51235);
   met_rebin8_fakes_DY_stack_3->SetBinContent(5,17.19522);
   met_rebin8_fakes_DY_stack_3->SetBinContent(6,3.439044);
   met_rebin8_fakes_DY_stack_3->SetBinContent(7,8.597611);
   met_rebin8_fakes_DY_stack_3->SetBinContent(8,3.439044);
   met_rebin8_fakes_DY_stack_3->SetBinError(2,6.878088);
   met_rebin8_fakes_DY_stack_3->SetBinError(3,7.089771);
   met_rebin8_fakes_DY_stack_3->SetBinError(4,6.878088);
   met_rebin8_fakes_DY_stack_3->SetBinError(5,5.437606);
   met_rebin8_fakes_DY_stack_3->SetBinError(6,2.431771);
   met_rebin8_fakes_DY_stack_3->SetBinError(7,3.844968);
   met_rebin8_fakes_DY_stack_3->SetBinError(8,2.431771);
   met_rebin8_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   met_rebin8_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin8_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin8_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_fakes_DY_stack_3,"");
   Double_t xAxis6[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1D *met_rebin8_prompt_ZZ_stack_4 = new TH1D("met_rebin8_prompt_ZZ_stack_4","dummy",8, xAxis6);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(2,10.27518);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(3,16.3302);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(4,14.12838);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(5,8.073358);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(6,8.8073);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(7,7.339416);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(8,8.256843);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(2,1.373079);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(3,1.730998);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(4,1.610078);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(5,1.217105);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(6,1.271224);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(7,1.160464);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(8,1.230858);
   met_rebin8_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   met_rebin8_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin8_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin8_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_prompt_ZZ_stack_4,"");
   Double_t xAxis7[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1D *met_rebin8_prompt_WZ_stack_5 = new TH1D("met_rebin8_prompt_WZ_stack_5","dummy",8, xAxis7);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(2,79.41334);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(3,186.2324);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(4,186.5038);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(5,169.7709);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(6,167.9619);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(7,233.3558);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(8,226.8436);
   met_rebin8_prompt_WZ_stack_5->SetBinError(2,2.68007);
   met_rebin8_prompt_WZ_stack_5->SetBinError(3,4.104187);
   met_rebin8_prompt_WZ_stack_5->SetBinError(4,4.107175);
   met_rebin8_prompt_WZ_stack_5->SetBinError(5,3.918601);
   met_rebin8_prompt_WZ_stack_5->SetBinError(6,3.897668);
   met_rebin8_prompt_WZ_stack_5->SetBinError(7,4.594188);
   met_rebin8_prompt_WZ_stack_5->SetBinError(8,4.52963);
   met_rebin8_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   met_rebin8_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin8_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin8_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_prompt_WZ_stack_5,"");
   met_rebin8_stack->Draw("same hist");
   Double_t xAxis8[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1D *met_rebin8_total__2 = new TH1D("met_rebin8_total__2","dummy",8, xAxis8);
   met_rebin8_total__2->SetBinContent(2,118.9297);
   met_rebin8_total__2->SetBinContent(3,236.3826);
   met_rebin8_total__2->SetBinContent(4,233.3409);
   met_rebin8_total__2->SetBinContent(5,199.6732);
   met_rebin8_total__2->SetBinContent(6,188.09);
   met_rebin8_total__2->SetBinContent(7,261.8186);
   met_rebin8_total__2->SetBinContent(8,257.7095);
   met_rebin8_total__2->SetBinError(2,7.516062);
   met_rebin8_total__2->SetBinError(3,8.391105);
   met_rebin8_total__2->SetBinError(4,8.192861);
   met_rebin8_total__2->SetBinError(5,6.835026);
   met_rebin8_total__2->SetBinError(6,4.824953);
   met_rebin8_total__2->SetBinError(7,6.171628);
   met_rebin8_total__2->SetBinError(8,5.408758);
   met_rebin8_total__2->SetMinimum(0);
   met_rebin8_total__2->SetMaximum(523.6371);
   met_rebin8_total__2->SetEntries(15152);
   met_rebin8_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   met_rebin8_total__2->SetFillColor(ci);
   met_rebin8_total__2->SetMarkerStyle(20);
   met_rebin8_total__2->SetMarkerSize(1.1);
   met_rebin8_total__2->GetXaxis()->SetTitle("met");
   met_rebin8_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin8_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin8_total__2->GetXaxis()->SetLabelOffset(999);
   met_rebin8_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin8_total__2->GetXaxis()->SetTitleOffset(999);
   met_rebin8_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin8_total__2->GetYaxis()->SetTitle("Events");
   met_rebin8_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin8_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_total__2->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_total__2->GetYaxis()->SetTitleOffset(1.48);
   met_rebin8_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin8_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin8_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin8_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin8_total_errors_fx3001[7] = {
   29.7783,
   36.29716,
   43.1166,
   50.25855,
   58.23191,
   72.93256,
   231.6209};
   Double_t met_rebin8_total_errors_fy3001[7] = {
   118.9297,
   236.3826,
   233.3409,
   199.6732,
   188.09,
   261.8186,
   257.7095};
   Double_t met_rebin8_total_errors_felx3001[7] = {
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t met_rebin8_total_errors_fely3001[7] = {
   7.516062,
   8.391105,
   8.192861,
   6.835026,
   4.824953,
   6.171628,
   5.408758};
   Double_t met_rebin8_total_errors_fehx3001[7] = {
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t met_rebin8_total_errors_fehy3001[7] = {
   7.516062,
   8.391105,
   8.192861,
   6.835026,
   4.824953,
   6.171628,
   5.408758};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,met_rebin8_total_errors_fx3001,met_rebin8_total_errors_fy3001,met_rebin8_total_errors_felx3001,met_rebin8_total_errors_fehx3001,met_rebin8_total_errors_fely3001,met_rebin8_total_errors_fehy3001);
   grae->SetName("met_rebin8_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin8_total_errors3001 = new TH1F("Graph_met_rebin8_total_errors3001","Graph",100,0,415.3481);
   Graph_met_rebin8_total_errors3001->SetMinimum(95.75601);
   Graph_met_rebin8_total_errors3001->SetMaximum(283.6479);
   Graph_met_rebin8_total_errors3001->SetDirectory(0);
   Graph_met_rebin8_total_errors3001->SetStats(0);
   Graph_met_rebin8_total_errors3001->SetLineStyle(0);
   Graph_met_rebin8_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin8_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t met_rebin8_data_graph_fx3002[8] = {
   13.25943,
   29.7783,
   36.29716,
   43.1166,
   50.25855,
   58.23191,
   72.93256,
   231.6209};
   Double_t met_rebin8_data_graph_fy3002[8] = {
   0,
   115,
   246,
   238,
   193,
   185,
   271,
   265};
   Double_t met_rebin8_data_graph_felx3002[8] = {
   13.25943,
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t met_rebin8_data_graph_fely3002[8] = {
   0,
   10.70841,
   15.67406,
   15.41673,
   13.88069,
   13.58946,
   16.45227,
   16.26889};
   Double_t met_rebin8_data_graph_fehx3002[8] = {
   13.25943,
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t met_rebin8_data_graph_fehy3002[8] = {
   1.841055,
   11.75516,
   16.70601,
   16.44922,
   14.91678,
   14.62631,
   17.48272,
   17.29968};
   grae = new TGraphAsymmErrors(8,met_rebin8_data_graph_fx3002,met_rebin8_data_graph_fy3002,met_rebin8_data_graph_felx3002,met_rebin8_data_graph_fehx3002,met_rebin8_data_graph_fely3002,met_rebin8_data_graph_fehy3002);
   grae->SetName("met_rebin8_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_rebin8_data_graph3002 = new TH1F("Graph_met_rebin8_data_graph3002","Graph",100,0,418);
   Graph_met_rebin8_data_graph3002->SetMinimum(0);
   Graph_met_rebin8_data_graph3002->SetMaximum(317.331);
   Graph_met_rebin8_data_graph3002->SetDirectory(0);
   Graph_met_rebin8_data_graph3002->SetStats(0);
   Graph_met_rebin8_data_graph3002->SetLineStyle(0);
   Graph_met_rebin8_data_graph3002->SetMarkerStyle(20);
   Graph_met_rebin8_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin8_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin8_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin8_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin8_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin8_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin8_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin8_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin8_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin8_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("met_rebin8_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin8_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin8_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin8_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin8_total_errors","Total unc.","F");
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
   met_rebin8_canvas->cd();
  
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
   Double_t xAxis9[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1D *met_rebin8_total__3 = new TH1D("met_rebin8_total__3","dummy",8, xAxis9);
   met_rebin8_total__3->SetBinContent(2,1);
   met_rebin8_total__3->SetBinContent(3,1);
   met_rebin8_total__3->SetBinContent(4,1);
   met_rebin8_total__3->SetBinContent(5,1);
   met_rebin8_total__3->SetBinContent(6,1);
   met_rebin8_total__3->SetBinContent(7,1);
   met_rebin8_total__3->SetBinContent(8,1);
   met_rebin8_total__3->SetMinimum(0.5);
   met_rebin8_total__3->SetMaximum(2);
   met_rebin8_total__3->SetEntries(15160);

   ci = TColor::GetColor("#00cc00");
   met_rebin8_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_rebin8_total__3->SetMarkerColor(ci);
   met_rebin8_total__3->SetMarkerSize(1.1);
   met_rebin8_total__3->GetXaxis()->SetTitle("met");
   met_rebin8_total__3->GetXaxis()->SetMoreLogLabels();
   met_rebin8_total__3->GetXaxis()->SetLabelFont(42);
   met_rebin8_total__3->GetXaxis()->SetLabelOffset(0.015);
   met_rebin8_total__3->GetXaxis()->SetLabelSize(0.1);
   met_rebin8_total__3->GetXaxis()->SetTitleSize(0.14);
   met_rebin8_total__3->GetXaxis()->SetTitleFont(42);
   met_rebin8_total__3->GetYaxis()->SetTitle("Data/pred.");
   met_rebin8_total__3->GetYaxis()->SetDecimals();
   met_rebin8_total__3->GetYaxis()->SetNdivisions(505);
   met_rebin8_total__3->GetYaxis()->SetLabelFont(42);
   met_rebin8_total__3->GetYaxis()->SetLabelOffset(0.01);
   met_rebin8_total__3->GetYaxis()->SetLabelSize(0.11);
   met_rebin8_total__3->GetYaxis()->SetTitleSize(0.14);
   met_rebin8_total__3->GetYaxis()->SetTitleOffset(0.62);
   met_rebin8_total__3->GetYaxis()->SetTitleFont(42);
   met_rebin8_total__3->GetZaxis()->SetLabelFont(42);
   met_rebin8_total__3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_total__3->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_total__3->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_total__3->GetZaxis()->SetTitleFont(42);
   met_rebin8_total__3->Draw("AXIS");
   
   Double_t met_rebin8_total_errors_fx3003[7] = {
   29.7783,
   36.29716,
   43.1166,
   50.25855,
   58.23191,
   72.93256,
   231.6209};
   Double_t met_rebin8_total_errors_fy3003[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t met_rebin8_total_errors_felx3003[7] = {
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t met_rebin8_total_errors_fely3003[7] = {
   0.0631975,
   0.03549798,
   0.03511112,
   0.03423106,
   0.02565236,
   0.02357216,
   0.02098781};
   Double_t met_rebin8_total_errors_fehx3003[7] = {
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t met_rebin8_total_errors_fehy3003[7] = {
   0.0631975,
   0.03549798,
   0.03511112,
   0.03423106,
   0.02565236,
   0.02357216,
   0.02098781};
   grae = new TGraphAsymmErrors(7,met_rebin8_total_errors_fx3003,met_rebin8_total_errors_fy3003,met_rebin8_total_errors_felx3003,met_rebin8_total_errors_fehx3003,met_rebin8_total_errors_fely3003,met_rebin8_total_errors_fehy3003);
   grae->SetName("met_rebin8_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t met_rebin8_total_errors_fx3004[7] = {
   29.7783,
   36.29716,
   43.1166,
   50.25855,
   58.23191,
   72.93256,
   231.6209};
   Double_t met_rebin8_total_errors_fy3004[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t met_rebin8_total_errors_felx3004[7] = {
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t met_rebin8_total_errors_fely3004[7] = {
   0.0631975,
   0.03549798,
   0.03511112,
   0.03423106,
   0.02565236,
   0.02357216,
   0.02098781};
   Double_t met_rebin8_total_errors_fehx3004[7] = {
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t met_rebin8_total_errors_fehy3004[7] = {
   0.0631975,
   0.03549798,
   0.03511112,
   0.03423106,
   0.02565236,
   0.02357216,
   0.02098781};
   grae = new TGraphAsymmErrors(7,met_rebin8_total_errors_fx3004,met_rebin8_total_errors_fy3004,met_rebin8_total_errors_felx3004,met_rebin8_total_errors_fehx3004,met_rebin8_total_errors_fely3004,met_rebin8_total_errors_fehy3004);
   grae->SetName("met_rebin8_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[9] = {0, 26.51886, 33.03773, 39.55659, 46.67661, 53.84049, 62.62334, 83.24178, 380}; 
   
   TH1D *met_rebin8_total__4 = new TH1D("met_rebin8_total__4","dummy",8, xAxis10);
   met_rebin8_total__4->SetBinContent(2,1);
   met_rebin8_total__4->SetBinContent(3,1);
   met_rebin8_total__4->SetBinContent(4,1);
   met_rebin8_total__4->SetBinContent(5,1);
   met_rebin8_total__4->SetBinContent(6,1);
   met_rebin8_total__4->SetBinContent(7,1);
   met_rebin8_total__4->SetBinContent(8,1);
   met_rebin8_total__4->SetMinimum(0.5);
   met_rebin8_total__4->SetMaximum(2);
   met_rebin8_total__4->SetEntries(15160);

   ci = TColor::GetColor("#00cc00");
   met_rebin8_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_rebin8_total__4->SetMarkerColor(ci);
   met_rebin8_total__4->SetMarkerSize(1.1);
   met_rebin8_total__4->GetXaxis()->SetTitle("met");
   met_rebin8_total__4->GetXaxis()->SetMoreLogLabels();
   met_rebin8_total__4->GetXaxis()->SetLabelFont(42);
   met_rebin8_total__4->GetXaxis()->SetLabelOffset(0.015);
   met_rebin8_total__4->GetXaxis()->SetLabelSize(0.1);
   met_rebin8_total__4->GetXaxis()->SetTitleSize(0.14);
   met_rebin8_total__4->GetXaxis()->SetTitleFont(42);
   met_rebin8_total__4->GetYaxis()->SetTitle("Data/pred.");
   met_rebin8_total__4->GetYaxis()->SetDecimals();
   met_rebin8_total__4->GetYaxis()->SetNdivisions(505);
   met_rebin8_total__4->GetYaxis()->SetLabelFont(42);
   met_rebin8_total__4->GetYaxis()->SetLabelOffset(0.01);
   met_rebin8_total__4->GetYaxis()->SetLabelSize(0.11);
   met_rebin8_total__4->GetYaxis()->SetTitleSize(0.14);
   met_rebin8_total__4->GetYaxis()->SetTitleOffset(0.62);
   met_rebin8_total__4->GetYaxis()->SetTitleFont(42);
   met_rebin8_total__4->GetZaxis()->SetLabelFont(42);
   met_rebin8_total__4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_total__4->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_total__4->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_total__4->GetZaxis()->SetTitleFont(42);
   met_rebin8_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,380,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[8] = {
   13.25943,
   29.7783,
   36.29716,
   43.1166,
   50.25855,
   58.23191,
   72.93256,
   231.6209};
   Double_t data_div_fy3005[8] = {
   0,
   0.9669576,
   1.040686,
   1.019967,
   0.9665793,
   0.9835715,
   1.035068,
   1.02829};
   Double_t data_div_felx3005[8] = {
   13.25943,
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t data_div_fely3005[8] = {
   0,
   0.09003984,
   0.06630799,
   0.06606957,
   0.06951706,
   0.07224974,
   0.06283843,
   0.0631288};
   Double_t data_div_fehx3005[8] = {
   13.25943,
   3.259432,
   3.25943,
   3.560009,
   3.581944,
   4.391422,
   10.30922,
   148.3791};
   Double_t data_div_fehy3005[8] = {
   0,
   0.09884126,
   0.07067362,
   0.07049439,
   0.07470594,
   0.07776228,
   0.06677416,
   0.06712862};
   grae = new TGraphAsymmErrors(8,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_rebin8_data_graph3005 = new TH1F("Graph_met_rebin8_data_graph3005","Graph",100,0,418);
   Graph_met_rebin8_data_graph3005->SetMinimum(0);
   Graph_met_rebin8_data_graph3005->SetMaximum(317.331);
   Graph_met_rebin8_data_graph3005->SetDirectory(0);
   Graph_met_rebin8_data_graph3005->SetStats(0);
   Graph_met_rebin8_data_graph3005->SetLineStyle(0);
   Graph_met_rebin8_data_graph3005->SetMarkerStyle(20);
   Graph_met_rebin8_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin8_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin8_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin8_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin8_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin8_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin8_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin8_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin8_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("met_rebin8_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("met_rebin8_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   met_rebin8_canvas->cd();
   met_rebin8_canvas->Modified();
   met_rebin8_canvas->cd();
   met_rebin8_canvas->SetSelected(met_rebin8_canvas);
}
