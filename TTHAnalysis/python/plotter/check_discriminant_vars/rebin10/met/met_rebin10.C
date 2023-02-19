void met_rebin10()
{
//=========Macro generated from canvas: met_rebin10_canvas/met_rebin10
//=========  (Thu Dec 15 19:55:31 2022) by ROOT version 6.12/07
   TCanvas *met_rebin10_canvas = new TCanvas("met_rebin10_canvas", "met_rebin10",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin10_canvas->SetHighLightColor(2);
   met_rebin10_canvas->Range(0,0,1,1);
   met_rebin10_canvas->SetFillColor(0);
   met_rebin10_canvas->SetBorderMode(0);
   met_rebin10_canvas->SetBorderSize(2);
   met_rebin10_canvas->SetTickx(1);
   met_rebin10_canvas->SetTicky(1);
   met_rebin10_canvas->SetLeftMargin(0.18);
   met_rebin10_canvas->SetRightMargin(0.04);
   met_rebin10_canvas->SetBottomMargin(0.13);
   met_rebin10_canvas->SetFrameFillStyle(0);
   met_rebin10_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-87.69231,-11.52872,399.4872,449.6202);
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
   Double_t xAxis1[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_total__1 = new TH1D("met_rebin10_total__1","dummy",10, xAxis1);
   met_rebin10_total__1->SetBinContent(2,19.82232);
   met_rebin10_total__1->SetBinContent(3,193.0168);
   met_rebin10_total__1->SetBinContent(4,191.0776);
   met_rebin10_total__1->SetBinContent(5,184.7365);
   met_rebin10_total__1->SetBinContent(6,160.8951);
   met_rebin10_total__1->SetBinContent(7,139.7235);
   met_rebin10_total__1->SetBinContent(8,210.9756);
   met_rebin10_total__1->SetBinContent(9,202.7937);
   met_rebin10_total__1->SetBinContent(10,192.9033);
   met_rebin10_total__1->SetBinError(2,3.618544);
   met_rebin10_total__1->SetBinError(3,8.325016);
   met_rebin10_total__1->SetBinError(4,8.124314);
   met_rebin10_total__1->SetBinError(5,6.7543);
   met_rebin10_total__1->SetBinError(6,5.894221);
   met_rebin10_total__1->SetBinError(7,4.923459);
   met_rebin10_total__1->SetBinError(8,5.794133);
   met_rebin10_total__1->SetBinError(9,4.920903);
   met_rebin10_total__1->SetBinError(10,4.53562);
   met_rebin10_total__1->SetMinimum(0);
   met_rebin10_total__1->SetMaximum(421.9513);
   met_rebin10_total__1->SetEntries(15152);
   met_rebin10_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   met_rebin10_total__1->SetFillColor(ci);
   met_rebin10_total__1->SetMarkerStyle(20);
   met_rebin10_total__1->SetMarkerSize(1.1);
   met_rebin10_total__1->GetXaxis()->SetTitle("met");
   met_rebin10_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetXaxis()->SetLabelOffset(999);
   met_rebin10_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin10_total__1->GetXaxis()->SetTitleOffset(999);
   met_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__1->GetYaxis()->SetTitle("Events");
   met_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_total__1->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_total__1->GetYaxis()->SetTitleOffset(1.48);
   met_rebin10_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin10_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin10_total__1->Draw("HIST");
   
   THStack *met_rebin10_stack = new THStack();
   met_rebin10_stack->SetName("met_rebin10_stack");
   met_rebin10_stack->SetTitle("met_rebin10");
   Double_t xAxis2[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1F *met_rebin10_stack_stack_1 = new TH1F("met_rebin10_stack_stack_1","met_rebin10",10, xAxis2);
   met_rebin10_stack_stack_1->SetMinimum(0);
   met_rebin10_stack_stack_1->SetMaximum(221.5244);
   met_rebin10_stack_stack_1->SetDirectory(0);
   met_rebin10_stack_stack_1->SetStats(0);
   met_rebin10_stack_stack_1->SetLineStyle(0);
   met_rebin10_stack_stack_1->SetMarkerStyle(20);
   met_rebin10_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin10_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin10_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin10_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin10_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin10_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->SetHistogram(met_rebin10_stack_stack_1);
   
   Double_t xAxis3[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_fakes_VV_stack_1 = new TH1D("met_rebin10_fakes_VV_stack_1","dummy",10, xAxis3);
   met_rebin10_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   met_rebin10_fakes_VV_stack_1->SetBinContent(7,0.2915801);
   met_rebin10_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   met_rebin10_fakes_VV_stack_1->SetBinContent(10,0.1943867);
   met_rebin10_fakes_VV_stack_1->SetBinError(5,0.09719337);
   met_rebin10_fakes_VV_stack_1->SetBinError(7,0.1683439);
   met_rebin10_fakes_VV_stack_1->SetBinError(8,0.09719337);
   met_rebin10_fakes_VV_stack_1->SetBinError(10,0.1374522);
   met_rebin10_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin10_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin10_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin10_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_fakes_VV_stack_1,"");
   Double_t xAxis4[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_fakes_TT_stack_2 = new TH1D("met_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   met_rebin10_fakes_TT_stack_2->SetBinContent(2,0.2659769);
   met_rebin10_fakes_TT_stack_2->SetBinContent(3,3.191723);
   met_rebin10_fakes_TT_stack_2->SetBinContent(4,3.923159);
   met_rebin10_fakes_TT_stack_2->SetBinContent(5,4.035308);
   met_rebin10_fakes_TT_stack_2->SetBinContent(6,3.769331);
   met_rebin10_fakes_TT_stack_2->SetBinContent(7,4.854078);
   met_rebin10_fakes_TT_stack_2->SetBinContent(8,8.802052);
   met_rebin10_fakes_TT_stack_2->SetBinContent(9,11.59481);
   met_rebin10_fakes_TT_stack_2->SetBinContent(10,14.60789);
   met_rebin10_fakes_TT_stack_2->SetBinError(2,0.1329884);
   met_rebin10_fakes_TT_stack_2->SetBinError(3,0.4606855);
   met_rebin10_fakes_TT_stack_2->SetBinError(4,0.5107518);
   met_rebin10_fakes_TT_stack_2->SetBinError(5,0.5229194);
   met_rebin10_fakes_TT_stack_2->SetBinError(6,0.505726);
   met_rebin10_fakes_TT_stack_2->SetBinError(7,0.5681269);
   met_rebin10_fakes_TT_stack_2->SetBinError(8,0.7830783);
   met_rebin10_fakes_TT_stack_2->SetBinError(9,0.8888593);
   met_rebin10_fakes_TT_stack_2->SetBinError(10,0.9970688);
   met_rebin10_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   met_rebin10_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin10_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin10_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_fakes_TT_stack_2,"");
   Double_t xAxis5[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_fakes_DY_stack_3 = new TH1D("met_rebin10_fakes_DY_stack_3","dummy",10, xAxis5);
   met_rebin10_fakes_DY_stack_3->SetBinContent(2,6.878088);
   met_rebin10_fakes_DY_stack_3->SetBinContent(3,30.9514);
   met_rebin10_fakes_DY_stack_3->SetBinContent(4,29.23188);
   met_rebin10_fakes_DY_stack_3->SetBinContent(5,17.19522);
   met_rebin10_fakes_DY_stack_3->SetBinContent(6,12.03665);
   met_rebin10_fakes_DY_stack_3->SetBinContent(7,6.878088);
   met_rebin10_fakes_DY_stack_3->SetBinContent(8,8.597611);
   met_rebin10_fakes_DY_stack_3->SetBinContent(9,3.439044);
   met_rebin10_fakes_DY_stack_3->SetBinContent(10,1.719522);
   met_rebin10_fakes_DY_stack_3->SetBinError(2,3.439044);
   met_rebin10_fakes_DY_stack_3->SetBinError(3,7.295314);
   met_rebin10_fakes_DY_stack_3->SetBinError(4,7.089771);
   met_rebin10_fakes_DY_stack_3->SetBinError(5,5.437606);
   met_rebin10_fakes_DY_stack_3->SetBinError(6,4.549428);
   met_rebin10_fakes_DY_stack_3->SetBinError(7,3.439044);
   met_rebin10_fakes_DY_stack_3->SetBinError(8,3.844968);
   met_rebin10_fakes_DY_stack_3->SetBinError(9,2.431771);
   met_rebin10_fakes_DY_stack_3->SetBinError(10,1.719522);
   met_rebin10_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   met_rebin10_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin10_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin10_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_fakes_DY_stack_3,"");
   Double_t xAxis6[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_prompt_ZZ_stack_4 = new TH1D("met_rebin10_prompt_ZZ_stack_4","dummy",10, xAxis6);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(2,1.100912);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(3,16.14672);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(4,12.84398);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(5,10.64215);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(6,7.155931);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(7,5.504562);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(8,7.155931);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(9,5.688048);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(10,6.972446);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(2,0.4494456);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(3,1.721246);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(4,1.535149);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(5,1.397383);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(6,1.145866);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(7,1.004991);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(8,1.145866);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(9,1.021604);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(10,1.13108);
   met_rebin10_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   met_rebin10_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin10_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin10_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_prompt_ZZ_stack_4,"");
   Double_t xAxis7[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_prompt_WZ_stack_5 = new TH1D("met_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(2,11.57734);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(3,142.7269);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(4,145.0786);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(5,152.7667);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(6,137.9332);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(7,122.1952);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(8,186.3229);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(9,182.0718);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(10,169.4091);
   met_rebin10_prompt_WZ_stack_5->SetBinError(2,1.023302);
   met_rebin10_prompt_WZ_stack_5->SetBinError(3,3.59296);
   met_rebin10_prompt_WZ_stack_5->SetBinError(4,3.622439);
   met_rebin10_prompt_WZ_stack_5->SetBinError(5,3.717181);
   met_rebin10_prompt_WZ_stack_5->SetBinError(6,3.532107);
   met_rebin10_prompt_WZ_stack_5->SetBinError(7,3.324502);
   met_rebin10_prompt_WZ_stack_5->SetBinError(8,4.105183);
   met_rebin10_prompt_WZ_stack_5->SetBinError(9,4.058082);
   met_rebin10_prompt_WZ_stack_5->SetBinError(10,3.914423);
   met_rebin10_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   met_rebin10_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin10_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin10_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_prompt_WZ_stack_5,"");
   met_rebin10_stack->Draw("same hist");
   Double_t xAxis8[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_total__2 = new TH1D("met_rebin10_total__2","dummy",10, xAxis8);
   met_rebin10_total__2->SetBinContent(2,19.82232);
   met_rebin10_total__2->SetBinContent(3,193.0168);
   met_rebin10_total__2->SetBinContent(4,191.0776);
   met_rebin10_total__2->SetBinContent(5,184.7365);
   met_rebin10_total__2->SetBinContent(6,160.8951);
   met_rebin10_total__2->SetBinContent(7,139.7235);
   met_rebin10_total__2->SetBinContent(8,210.9756);
   met_rebin10_total__2->SetBinContent(9,202.7937);
   met_rebin10_total__2->SetBinContent(10,192.9033);
   met_rebin10_total__2->SetBinError(2,3.618544);
   met_rebin10_total__2->SetBinError(3,8.325016);
   met_rebin10_total__2->SetBinError(4,8.124314);
   met_rebin10_total__2->SetBinError(5,6.7543);
   met_rebin10_total__2->SetBinError(6,5.894221);
   met_rebin10_total__2->SetBinError(7,4.923459);
   met_rebin10_total__2->SetBinError(8,5.794133);
   met_rebin10_total__2->SetBinError(9,4.920903);
   met_rebin10_total__2->SetBinError(10,4.53562);
   met_rebin10_total__2->SetMinimum(0);
   met_rebin10_total__2->SetMaximum(421.9513);
   met_rebin10_total__2->SetEntries(15152);
   met_rebin10_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   met_rebin10_total__2->SetFillColor(ci);
   met_rebin10_total__2->SetMarkerStyle(20);
   met_rebin10_total__2->SetMarkerSize(1.1);
   met_rebin10_total__2->GetXaxis()->SetTitle("met");
   met_rebin10_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetXaxis()->SetLabelOffset(999);
   met_rebin10_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin10_total__2->GetXaxis()->SetTitleOffset(999);
   met_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__2->GetYaxis()->SetTitle("Events");
   met_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_total__2->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_total__2->GetYaxis()->SetTitleOffset(1.48);
   met_rebin10_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin10_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin10_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin10_total_errors_fx3001[9] = {
   27.82264,
   33.03773,
   38.29538,
   43.81105,
   49.54216,
   55.27327,
   64.12334,
   81.21981,
   236.1659};
   Double_t met_rebin10_total_errors_fy3001[9] = {
   19.82232,
   193.0168,
   191.0776,
   184.7365,
   160.8951,
   139.7235,
   210.9756,
   202.7937,
   192.9033};
   Double_t met_rebin10_total_errors_felx3001[9] = {
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t met_rebin10_total_errors_fely3001[9] = {
   3.618544,
   8.325016,
   8.124314,
   6.7543,
   5.894221,
   4.923459,
   5.794133,
   4.920903,
   4.53562};
   Double_t met_rebin10_total_errors_fehx3001[9] = {
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t met_rebin10_total_errors_fehy3001[9] = {
   3.618544,
   8.325016,
   8.124314,
   6.7543,
   5.894221,
   4.923459,
   5.794133,
   4.920903,
   4.53562};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,met_rebin10_total_errors_fx3001,met_rebin10_total_errors_fy3001,met_rebin10_total_errors_felx3001,met_rebin10_total_errors_fehx3001,met_rebin10_total_errors_fely3001,met_rebin10_total_errors_fehy3001);
   grae->SetName("met_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin10_total_errors3001 = new TH1F("Graph_met_rebin10_total_errors3001","Graph",100,0,415.4785);
   Graph_met_rebin10_total_errors3001->SetMinimum(14.5834);
   Graph_met_rebin10_total_errors3001->SetMaximum(236.8264);
   Graph_met_rebin10_total_errors3001->SetDirectory(0);
   Graph_met_rebin10_total_errors3001->SetStats(0);
   Graph_met_rebin10_total_errors3001->SetLineStyle(0);
   Graph_met_rebin10_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin10_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t met_rebin10_data_graph_fx3002[10] = {
   12.60754,
   27.82264,
   33.03773,
   38.29538,
   43.81105,
   49.54216,
   55.27327,
   64.12334,
   81.21981,
   236.1659};
   Double_t met_rebin10_data_graph_fy3002[10] = {
   0,
   7,
   208,
   191,
   193,
   159,
   134,
   213,
   199,
   209};
   Double_t met_rebin10_data_graph_felx3002[10] = {
   12.60754,
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t met_rebin10_data_graph_fely3002[10] = {
   0,
   2.581513,
   14.41091,
   13.80846,
   13.88069,
   12.59651,
   11.56162,
   14.58337,
   14.09517,
   14.44557};
   Double_t met_rebin10_data_graph_fehx3002[10] = {
   12.60754,
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t met_rebin10_data_graph_fehy3002[10] = {
   1.841055,
   3.770356,
   15.44567,
   14.84473,
   14.91678,
   13.63627,
   12.60492,
   15.61771,
   15.13071,
   15.48024};
   grae = new TGraphAsymmErrors(10,met_rebin10_data_graph_fx3002,met_rebin10_data_graph_fy3002,met_rebin10_data_graph_felx3002,met_rebin10_data_graph_fehx3002,met_rebin10_data_graph_fely3002,met_rebin10_data_graph_fehy3002);
   grae->SetName("met_rebin10_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_rebin10_data_graph3002 = new TH1F("Graph_met_rebin10_data_graph3002","Graph",100,0,418);
   Graph_met_rebin10_data_graph3002->SetMinimum(0);
   Graph_met_rebin10_data_graph3002->SetMaximum(251.4795);
   Graph_met_rebin10_data_graph3002->SetDirectory(0);
   Graph_met_rebin10_data_graph3002->SetStats(0);
   Graph_met_rebin10_data_graph3002->SetLineStyle(0);
   Graph_met_rebin10_data_graph3002->SetMarkerStyle(20);
   Graph_met_rebin10_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin10_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin10_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin10_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin10_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin10_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin10_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin10_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin10_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin10_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("met_rebin10_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin10_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin10_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin10_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin10_total_errors","Total unc.","F");
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
   met_rebin10_canvas->cd();
  
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
   Double_t xAxis9[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_total__3 = new TH1D("met_rebin10_total__3","dummy",10, xAxis9);
   met_rebin10_total__3->SetBinContent(2,1);
   met_rebin10_total__3->SetBinContent(3,1);
   met_rebin10_total__3->SetBinContent(4,1);
   met_rebin10_total__3->SetBinContent(5,1);
   met_rebin10_total__3->SetBinContent(6,1);
   met_rebin10_total__3->SetBinContent(7,1);
   met_rebin10_total__3->SetBinContent(8,1);
   met_rebin10_total__3->SetBinContent(9,1);
   met_rebin10_total__3->SetBinContent(10,1);
   met_rebin10_total__3->SetMinimum(0.5);
   met_rebin10_total__3->SetMaximum(2);
   met_rebin10_total__3->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   met_rebin10_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_rebin10_total__3->SetMarkerColor(ci);
   met_rebin10_total__3->SetMarkerSize(1.1);
   met_rebin10_total__3->GetXaxis()->SetTitle("met");
   met_rebin10_total__3->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__3->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__3->GetXaxis()->SetLabelOffset(0.015);
   met_rebin10_total__3->GetXaxis()->SetLabelSize(0.1);
   met_rebin10_total__3->GetXaxis()->SetTitleSize(0.14);
   met_rebin10_total__3->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__3->GetYaxis()->SetTitle("Data/pred.");
   met_rebin10_total__3->GetYaxis()->SetDecimals();
   met_rebin10_total__3->GetYaxis()->SetNdivisions(505);
   met_rebin10_total__3->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__3->GetYaxis()->SetLabelOffset(0.01);
   met_rebin10_total__3->GetYaxis()->SetLabelSize(0.11);
   met_rebin10_total__3->GetYaxis()->SetTitleSize(0.14);
   met_rebin10_total__3->GetYaxis()->SetTitleOffset(0.62);
   met_rebin10_total__3->GetYaxis()->SetTitleFont(42);
   met_rebin10_total__3->GetZaxis()->SetLabelFont(42);
   met_rebin10_total__3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_total__3->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_total__3->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_total__3->GetZaxis()->SetTitleFont(42);
   met_rebin10_total__3->Draw("AXIS");
   
   Double_t met_rebin10_total_errors_fx3003[9] = {
   27.82264,
   33.03773,
   38.29538,
   43.81105,
   49.54216,
   55.27327,
   64.12334,
   81.21981,
   236.1659};
   Double_t met_rebin10_total_errors_fy3003[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t met_rebin10_total_errors_felx3003[9] = {
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t met_rebin10_total_errors_fely3003[9] = {
   0.182549,
   0.04313105,
   0.0425184,
   0.0365618,
   0.03663394,
   0.03523715,
   0.02746352,
   0.02426556,
   0.0235124};
   Double_t met_rebin10_total_errors_fehx3003[9] = {
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t met_rebin10_total_errors_fehy3003[9] = {
   0.182549,
   0.04313105,
   0.0425184,
   0.0365618,
   0.03663394,
   0.03523715,
   0.02746352,
   0.02426556,
   0.0235124};
   grae = new TGraphAsymmErrors(9,met_rebin10_total_errors_fx3003,met_rebin10_total_errors_fy3003,met_rebin10_total_errors_felx3003,met_rebin10_total_errors_fehx3003,met_rebin10_total_errors_fely3003,met_rebin10_total_errors_fehy3003);
   grae->SetName("met_rebin10_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t met_rebin10_total_errors_fx3004[9] = {
   27.82264,
   33.03773,
   38.29538,
   43.81105,
   49.54216,
   55.27327,
   64.12334,
   81.21981,
   236.1659};
   Double_t met_rebin10_total_errors_fy3004[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t met_rebin10_total_errors_felx3004[9] = {
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t met_rebin10_total_errors_fely3004[9] = {
   0.182549,
   0.04313105,
   0.0425184,
   0.0365618,
   0.03663394,
   0.03523715,
   0.02746352,
   0.02426556,
   0.0235124};
   Double_t met_rebin10_total_errors_fehx3004[9] = {
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t met_rebin10_total_errors_fehy3004[9] = {
   0.182549,
   0.04313105,
   0.0425184,
   0.0365618,
   0.03663394,
   0.03523715,
   0.02746352,
   0.02426556,
   0.0235124};
   grae = new TGraphAsymmErrors(9,met_rebin10_total_errors_fx3004,met_rebin10_total_errors_fy3004,met_rebin10_total_errors_felx3004,met_rebin10_total_errors_fehx3004,met_rebin10_total_errors_fely3004,met_rebin10_total_errors_fehy3004);
   grae->SetName("met_rebin10_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_total__4 = new TH1D("met_rebin10_total__4","dummy",10, xAxis10);
   met_rebin10_total__4->SetBinContent(2,1);
   met_rebin10_total__4->SetBinContent(3,1);
   met_rebin10_total__4->SetBinContent(4,1);
   met_rebin10_total__4->SetBinContent(5,1);
   met_rebin10_total__4->SetBinContent(6,1);
   met_rebin10_total__4->SetBinContent(7,1);
   met_rebin10_total__4->SetBinContent(8,1);
   met_rebin10_total__4->SetBinContent(9,1);
   met_rebin10_total__4->SetBinContent(10,1);
   met_rebin10_total__4->SetMinimum(0.5);
   met_rebin10_total__4->SetMaximum(2);
   met_rebin10_total__4->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   met_rebin10_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_rebin10_total__4->SetMarkerColor(ci);
   met_rebin10_total__4->SetMarkerSize(1.1);
   met_rebin10_total__4->GetXaxis()->SetTitle("met");
   met_rebin10_total__4->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__4->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__4->GetXaxis()->SetLabelOffset(0.015);
   met_rebin10_total__4->GetXaxis()->SetLabelSize(0.1);
   met_rebin10_total__4->GetXaxis()->SetTitleSize(0.14);
   met_rebin10_total__4->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__4->GetYaxis()->SetTitle("Data/pred.");
   met_rebin10_total__4->GetYaxis()->SetDecimals();
   met_rebin10_total__4->GetYaxis()->SetNdivisions(505);
   met_rebin10_total__4->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__4->GetYaxis()->SetLabelOffset(0.01);
   met_rebin10_total__4->GetYaxis()->SetLabelSize(0.11);
   met_rebin10_total__4->GetYaxis()->SetTitleSize(0.14);
   met_rebin10_total__4->GetYaxis()->SetTitleOffset(0.62);
   met_rebin10_total__4->GetYaxis()->SetTitleFont(42);
   met_rebin10_total__4->GetZaxis()->SetLabelFont(42);
   met_rebin10_total__4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_total__4->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_total__4->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_total__4->GetZaxis()->SetTitleFont(42);
   met_rebin10_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,380,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[10] = {
   12.60754,
   27.82264,
   33.03773,
   38.29538,
   43.81105,
   49.54216,
   55.27327,
   64.12334,
   81.21981,
   236.1659};
   Double_t data_div_fy3005[10] = {
   0,
   0.3531373,
   1.077627,
   0.9995939,
   1.044731,
   0.9882215,
   0.9590367,
   1.009595,
   0.9812928,
   1.083444};
   Double_t data_div_felx3005[10] = {
   12.60754,
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t data_div_fely3005[10] = {
   0,
   0.1302326,
   0.07466144,
   0.07226625,
   0.07513779,
   0.07829022,
   0.08274638,
   0.06912346,
   0.06950499,
   0.074885};
   Double_t data_div_fehx3005[10] = {
   12.60754,
   2.607546,
   2.607545,
   2.65011,
   2.865557,
   2.865555,
   2.865557,
   5.98451,
   11.11196,
   143.8341};
   Double_t data_div_fehy3005[10] = {
   0,
   0.1902076,
   0.08002241,
   0.07768954,
   0.08074621,
   0.08475253,
   0.09021332,
   0.07402613,
   0.07461133,
   0.08024868};
   grae = new TGraphAsymmErrors(10,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_rebin10_data_graph3005 = new TH1F("Graph_met_rebin10_data_graph3005","Graph",100,0,418);
   Graph_met_rebin10_data_graph3005->SetMinimum(0);
   Graph_met_rebin10_data_graph3005->SetMaximum(251.4795);
   Graph_met_rebin10_data_graph3005->SetDirectory(0);
   Graph_met_rebin10_data_graph3005->SetStats(0);
   Graph_met_rebin10_data_graph3005->SetLineStyle(0);
   Graph_met_rebin10_data_graph3005->SetMarkerStyle(20);
   Graph_met_rebin10_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin10_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin10_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin10_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin10_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin10_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin10_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin10_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin10_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("met_rebin10_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("met_rebin10_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   met_rebin10_canvas->cd();
   met_rebin10_canvas->Modified();
   met_rebin10_canvas->cd();
   met_rebin10_canvas->SetSelected(met_rebin10_canvas);
}
