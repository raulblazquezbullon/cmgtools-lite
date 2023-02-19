void met_rebin5()
{
//=========Macro generated from canvas: met_rebin5_canvas/met_rebin5
//=========  (Thu Dec 15 19:49:02 2022) by ROOT version 6.12/07
   TCanvas *met_rebin5_canvas = new TCanvas("met_rebin5_canvas", "met_rebin5",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin5_canvas->SetHighLightColor(2);
   met_rebin5_canvas->Range(0,0,1,1);
   met_rebin5_canvas->SetFillColor(0);
   met_rebin5_canvas->SetBorderMode(0);
   met_rebin5_canvas->SetBorderSize(2);
   met_rebin5_canvas->SetTickx(1);
   met_rebin5_canvas->SetTicky(1);
   met_rebin5_canvas->SetLeftMargin(0.18);
   met_rebin5_canvas->SetRightMargin(0.04);
   met_rebin5_canvas->SetBottomMargin(0.13);
   met_rebin5_canvas->SetFrameFillStyle(0);
   met_rebin5_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-87.69231,-21.62279,399.4872,843.2888);
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
   Double_t xAxis1[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1D *met_rebin5_total__1 = new TH1D("met_rebin5_total__1","dummy",5, xAxis1);
   met_rebin5_total__1->SetBinContent(1,19.82232);
   met_rebin5_total__1->SetBinContent(2,384.0944);
   met_rebin5_total__1->SetBinContent(3,345.6316);
   met_rebin5_total__1->SetBinContent(4,350.6992);
   met_rebin5_total__1->SetBinContent(5,395.697);
   met_rebin5_total__1->SetBinError(1,3.618544);
   met_rebin5_total__1->SetBinError(2,11.6323);
   met_rebin5_total__1->SetBinError(3,8.964508);
   met_rebin5_total__1->SetBinError(4,7.603449);
   met_rebin5_total__1->SetBinError(5,6.692319);
   met_rebin5_total__1->SetMinimum(0);
   met_rebin5_total__1->SetMaximum(791.3941);
   met_rebin5_total__1->SetEntries(15152);
   met_rebin5_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   met_rebin5_total__1->SetFillColor(ci);
   met_rebin5_total__1->SetMarkerStyle(20);
   met_rebin5_total__1->SetMarkerSize(1.1);
   met_rebin5_total__1->GetXaxis()->SetTitle("met");
   met_rebin5_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin5_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin5_total__1->GetXaxis()->SetLabelOffset(999);
   met_rebin5_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin5_total__1->GetXaxis()->SetTitleOffset(999);
   met_rebin5_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin5_total__1->GetYaxis()->SetTitle("Events");
   met_rebin5_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin5_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_total__1->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_total__1->GetYaxis()->SetTitleOffset(1.48);
   met_rebin5_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin5_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin5_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin5_total__1->Draw("HIST");
   
   THStack *met_rebin5_stack = new THStack();
   met_rebin5_stack->SetName("met_rebin5_stack");
   met_rebin5_stack->SetTitle("met_rebin5");
   Double_t xAxis2[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1F *met_rebin5_stack_stack_1 = new TH1F("met_rebin5_stack_stack_1","met_rebin5",5, xAxis2);
   met_rebin5_stack_stack_1->SetMinimum(0);
   met_rebin5_stack_stack_1->SetMaximum(415.4819);
   met_rebin5_stack_stack_1->SetDirectory(0);
   met_rebin5_stack_stack_1->SetStats(0);
   met_rebin5_stack_stack_1->SetLineStyle(0);
   met_rebin5_stack_stack_1->SetMarkerStyle(20);
   met_rebin5_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin5_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin5_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin5_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin5_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin5_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->SetHistogram(met_rebin5_stack_stack_1);
   
   Double_t xAxis3[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1D *met_rebin5_fakes_VV_stack_1 = new TH1D("met_rebin5_fakes_VV_stack_1","dummy",5, xAxis3);
   met_rebin5_fakes_VV_stack_1->SetBinContent(3,0.09719337);
   met_rebin5_fakes_VV_stack_1->SetBinContent(4,0.3887735);
   met_rebin5_fakes_VV_stack_1->SetBinContent(5,0.1943867);
   met_rebin5_fakes_VV_stack_1->SetBinError(3,0.09719337);
   met_rebin5_fakes_VV_stack_1->SetBinError(4,0.1943867);
   met_rebin5_fakes_VV_stack_1->SetBinError(5,0.1374522);
   met_rebin5_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin5_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin5_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin5_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_fakes_VV_stack_1,"");
   Double_t xAxis4[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1D *met_rebin5_fakes_TT_stack_2 = new TH1D("met_rebin5_fakes_TT_stack_2","dummy",5, xAxis4);
   met_rebin5_fakes_TT_stack_2->SetBinContent(1,0.2659769);
   met_rebin5_fakes_TT_stack_2->SetBinContent(2,7.114882);
   met_rebin5_fakes_TT_stack_2->SetBinContent(3,7.804638);
   met_rebin5_fakes_TT_stack_2->SetBinContent(4,13.65613);
   met_rebin5_fakes_TT_stack_2->SetBinContent(5,26.2027);
   met_rebin5_fakes_TT_stack_2->SetBinError(1,0.1329884);
   met_rebin5_fakes_TT_stack_2->SetBinError(2,0.6878216);
   met_rebin5_fakes_TT_stack_2->SetBinError(3,0.7274637);
   met_rebin5_fakes_TT_stack_2->SetBinError(4,0.9674605);
   met_rebin5_fakes_TT_stack_2->SetBinError(5,1.335746);
   met_rebin5_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   met_rebin5_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin5_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin5_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_fakes_TT_stack_2,"");
   Double_t xAxis5[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1D *met_rebin5_fakes_DY_stack_3 = new TH1D("met_rebin5_fakes_DY_stack_3","dummy",5, xAxis5);
   met_rebin5_fakes_DY_stack_3->SetBinContent(1,6.878088);
   met_rebin5_fakes_DY_stack_3->SetBinContent(2,60.18327);
   met_rebin5_fakes_DY_stack_3->SetBinContent(3,29.23188);
   met_rebin5_fakes_DY_stack_3->SetBinContent(4,15.4757);
   met_rebin5_fakes_DY_stack_3->SetBinContent(5,5.158566);
   met_rebin5_fakes_DY_stack_3->SetBinError(1,3.439044);
   met_rebin5_fakes_DY_stack_3->SetBinError(2,10.17283);
   met_rebin5_fakes_DY_stack_3->SetBinError(3,7.089771);
   met_rebin5_fakes_DY_stack_3->SetBinError(4,5.158566);
   met_rebin5_fakes_DY_stack_3->SetBinError(5,2.9783);
   met_rebin5_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   met_rebin5_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin5_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin5_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_fakes_DY_stack_3,"");
   Double_t xAxis6[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1D *met_rebin5_prompt_ZZ_stack_4 = new TH1D("met_rebin5_prompt_ZZ_stack_4","dummy",5, xAxis6);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(1,1.100912);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(2,28.99069);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(3,17.79808);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(4,12.66049);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(5,12.66049);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(1,0.4494456);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(2,2.306376);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(3,1.807122);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(4,1.524144);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(5,1.524144);
   met_rebin5_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   met_rebin5_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin5_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin5_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_prompt_ZZ_stack_4,"");
   Double_t xAxis7[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1D *met_rebin5_prompt_WZ_stack_5 = new TH1D("met_rebin5_prompt_WZ_stack_5","dummy",5, xAxis7);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(1,11.57734);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(2,287.8055);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(3,290.6998);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(4,308.5181);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(5,351.4809);
   met_rebin5_prompt_WZ_stack_5->SetBinError(1,1.023302);
   met_rebin5_prompt_WZ_stack_5->SetBinError(2,5.1021);
   met_rebin5_prompt_WZ_stack_5->SetBinError(3,5.127691);
   met_rebin5_prompt_WZ_stack_5->SetBinError(4,5.282503);
   met_rebin5_prompt_WZ_stack_5->SetBinError(5,5.638328);
   met_rebin5_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   met_rebin5_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin5_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin5_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_prompt_WZ_stack_5,"");
   met_rebin5_stack->Draw("same hist");
   Double_t xAxis8[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1D *met_rebin5_total__2 = new TH1D("met_rebin5_total__2","dummy",5, xAxis8);
   met_rebin5_total__2->SetBinContent(1,19.82232);
   met_rebin5_total__2->SetBinContent(2,384.0944);
   met_rebin5_total__2->SetBinContent(3,345.6316);
   met_rebin5_total__2->SetBinContent(4,350.6992);
   met_rebin5_total__2->SetBinContent(5,395.697);
   met_rebin5_total__2->SetBinError(1,3.618544);
   met_rebin5_total__2->SetBinError(2,11.6323);
   met_rebin5_total__2->SetBinError(3,8.964508);
   met_rebin5_total__2->SetBinError(4,7.603449);
   met_rebin5_total__2->SetBinError(5,6.692319);
   met_rebin5_total__2->SetMinimum(0);
   met_rebin5_total__2->SetMaximum(791.3941);
   met_rebin5_total__2->SetEntries(15152);
   met_rebin5_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   met_rebin5_total__2->SetFillColor(ci);
   met_rebin5_total__2->SetMarkerStyle(20);
   met_rebin5_total__2->SetMarkerSize(1.1);
   met_rebin5_total__2->GetXaxis()->SetTitle("met");
   met_rebin5_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin5_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin5_total__2->GetXaxis()->SetLabelOffset(999);
   met_rebin5_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin5_total__2->GetXaxis()->SetTitleOffset(999);
   met_rebin5_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin5_total__2->GetYaxis()->SetTitle("Events");
   met_rebin5_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin5_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_total__2->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_total__2->GetYaxis()->SetTitleOffset(1.48);
   met_rebin5_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin5_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin5_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin5_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin5_total_errors_fx3001[5] = {
   15.21509,
   35.68784,
   46.6766,
   61.25778,
   225.0539};
   Double_t met_rebin5_total_errors_fy3001[5] = {
   19.82232,
   384.0944,
   345.6316,
   350.6992,
   395.697};
   Double_t met_rebin5_total_errors_felx3001[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t met_rebin5_total_errors_fely3001[5] = {
   3.618544,
   11.6323,
   8.964508,
   7.603449,
   6.692319};
   Double_t met_rebin5_total_errors_fehx3001[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t met_rebin5_total_errors_fehy3001[5] = {
   3.618544,
   11.6323,
   8.964508,
   7.603449,
   6.692319};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,met_rebin5_total_errors_fx3001,met_rebin5_total_errors_fy3001,met_rebin5_total_errors_felx3001,met_rebin5_total_errors_fehx3001,met_rebin5_total_errors_fely3001,met_rebin5_total_errors_fehy3001);
   grae->SetName("met_rebin5_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin5_total_errors3001 = new TH1F("Graph_met_rebin5_total_errors3001","Graph",100,0,418);
   Graph_met_rebin5_total_errors3001->SetMinimum(14.5834);
   Graph_met_rebin5_total_errors3001->SetMaximum(441.0079);
   Graph_met_rebin5_total_errors3001->SetDirectory(0);
   Graph_met_rebin5_total_errors3001->SetStats(0);
   Graph_met_rebin5_total_errors3001->SetLineStyle(0);
   Graph_met_rebin5_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin5_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t met_rebin5_data_graph_fx3002[5] = {
   15.21509,
   35.68784,
   46.6766,
   61.25778,
   225.0539};
   Double_t met_rebin5_data_graph_fy3002[5] = {
   7,
   399,
   352,
   347,
   408};
   Double_t met_rebin5_data_graph_felx3002[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t met_rebin5_data_graph_fely3002[5] = {
   2.581513,
   19.96704,
   18.75315,
   18.61936,
   20.19116};
   Double_t met_rebin5_data_graph_fehx3002[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t met_rebin5_data_graph_fehy3002[5] = {
   3.770356,
   20.99213,
   19.77987,
   19.64626,
   21.21598};
   grae = new TGraphAsymmErrors(5,met_rebin5_data_graph_fx3002,met_rebin5_data_graph_fy3002,met_rebin5_data_graph_felx3002,met_rebin5_data_graph_fehx3002,met_rebin5_data_graph_fely3002,met_rebin5_data_graph_fehy3002);
   grae->SetName("met_rebin5_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_rebin5_data_graph3002 = new TH1F("Graph_met_rebin5_data_graph3002","Graph",100,0,418);
   Graph_met_rebin5_data_graph3002->SetMinimum(3.976639);
   Graph_met_rebin5_data_graph3002->SetMaximum(471.6957);
   Graph_met_rebin5_data_graph3002->SetDirectory(0);
   Graph_met_rebin5_data_graph3002->SetStats(0);
   Graph_met_rebin5_data_graph3002->SetLineStyle(0);
   Graph_met_rebin5_data_graph3002->SetMarkerStyle(20);
   Graph_met_rebin5_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin5_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin5_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin5_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin5_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin5_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin5_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin5_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin5_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin5_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("met_rebin5_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin5_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin5_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin5_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin5_total_errors","Total unc.","F");
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
   met_rebin5_canvas->cd();
  
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
   Double_t xAxis9[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1D *met_rebin5_total__3 = new TH1D("met_rebin5_total__3","dummy",5, xAxis9);
   met_rebin5_total__3->SetBinContent(1,1);
   met_rebin5_total__3->SetBinContent(2,1);
   met_rebin5_total__3->SetBinContent(3,1);
   met_rebin5_total__3->SetBinContent(4,1);
   met_rebin5_total__3->SetBinContent(5,1);
   met_rebin5_total__3->SetMinimum(0.5);
   met_rebin5_total__3->SetMaximum(2);
   met_rebin5_total__3->SetEntries(15157);

   ci = TColor::GetColor("#00cc00");
   met_rebin5_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_rebin5_total__3->SetMarkerColor(ci);
   met_rebin5_total__3->SetMarkerSize(1.1);
   met_rebin5_total__3->GetXaxis()->SetTitle("met");
   met_rebin5_total__3->GetXaxis()->SetMoreLogLabels();
   met_rebin5_total__3->GetXaxis()->SetLabelFont(42);
   met_rebin5_total__3->GetXaxis()->SetLabelOffset(0.015);
   met_rebin5_total__3->GetXaxis()->SetLabelSize(0.1);
   met_rebin5_total__3->GetXaxis()->SetTitleSize(0.14);
   met_rebin5_total__3->GetXaxis()->SetTitleFont(42);
   met_rebin5_total__3->GetYaxis()->SetTitle("Data/pred.");
   met_rebin5_total__3->GetYaxis()->SetDecimals();
   met_rebin5_total__3->GetYaxis()->SetNdivisions(505);
   met_rebin5_total__3->GetYaxis()->SetLabelFont(42);
   met_rebin5_total__3->GetYaxis()->SetLabelOffset(0.01);
   met_rebin5_total__3->GetYaxis()->SetLabelSize(0.11);
   met_rebin5_total__3->GetYaxis()->SetTitleSize(0.14);
   met_rebin5_total__3->GetYaxis()->SetTitleOffset(0.62);
   met_rebin5_total__3->GetYaxis()->SetTitleFont(42);
   met_rebin5_total__3->GetZaxis()->SetLabelFont(42);
   met_rebin5_total__3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_total__3->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_total__3->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_total__3->GetZaxis()->SetTitleFont(42);
   met_rebin5_total__3->Draw("AXIS");
   
   Double_t met_rebin5_total_errors_fx3003[5] = {
   15.21509,
   35.68784,
   46.6766,
   61.25778,
   225.0539};
   Double_t met_rebin5_total_errors_fy3003[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t met_rebin5_total_errors_felx3003[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t met_rebin5_total_errors_fely3003[5] = {
   0.182549,
   0.030285,
   0.0259366,
   0.02168083,
   0.01691274};
   Double_t met_rebin5_total_errors_fehx3003[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t met_rebin5_total_errors_fehy3003[5] = {
   0.182549,
   0.030285,
   0.0259366,
   0.02168083,
   0.01691274};
   grae = new TGraphAsymmErrors(5,met_rebin5_total_errors_fx3003,met_rebin5_total_errors_fy3003,met_rebin5_total_errors_felx3003,met_rebin5_total_errors_fehx3003,met_rebin5_total_errors_fely3003,met_rebin5_total_errors_fehy3003);
   grae->SetName("met_rebin5_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t met_rebin5_total_errors_fx3004[5] = {
   15.21509,
   35.68784,
   46.6766,
   61.25778,
   225.0539};
   Double_t met_rebin5_total_errors_fy3004[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t met_rebin5_total_errors_felx3004[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t met_rebin5_total_errors_fely3004[5] = {
   0.182549,
   0.030285,
   0.0259366,
   0.02168083,
   0.01691274};
   Double_t met_rebin5_total_errors_fehx3004[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t met_rebin5_total_errors_fehy3004[5] = {
   0.182549,
   0.030285,
   0.0259366,
   0.02168083,
   0.01691274};
   grae = new TGraphAsymmErrors(5,met_rebin5_total_errors_fx3004,met_rebin5_total_errors_fy3004,met_rebin5_total_errors_felx3004,met_rebin5_total_errors_fehx3004,met_rebin5_total_errors_fely3004,met_rebin5_total_errors_fehy3004);
   grae->SetName("met_rebin5_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[6] = {0, 30.43018, 40.94549, 52.40771, 70.10785, 380}; 
   
   TH1D *met_rebin5_total__4 = new TH1D("met_rebin5_total__4","dummy",5, xAxis10);
   met_rebin5_total__4->SetBinContent(1,1);
   met_rebin5_total__4->SetBinContent(2,1);
   met_rebin5_total__4->SetBinContent(3,1);
   met_rebin5_total__4->SetBinContent(4,1);
   met_rebin5_total__4->SetBinContent(5,1);
   met_rebin5_total__4->SetMinimum(0.5);
   met_rebin5_total__4->SetMaximum(2);
   met_rebin5_total__4->SetEntries(15157);

   ci = TColor::GetColor("#00cc00");
   met_rebin5_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_rebin5_total__4->SetMarkerColor(ci);
   met_rebin5_total__4->SetMarkerSize(1.1);
   met_rebin5_total__4->GetXaxis()->SetTitle("met");
   met_rebin5_total__4->GetXaxis()->SetMoreLogLabels();
   met_rebin5_total__4->GetXaxis()->SetLabelFont(42);
   met_rebin5_total__4->GetXaxis()->SetLabelOffset(0.015);
   met_rebin5_total__4->GetXaxis()->SetLabelSize(0.1);
   met_rebin5_total__4->GetXaxis()->SetTitleSize(0.14);
   met_rebin5_total__4->GetXaxis()->SetTitleFont(42);
   met_rebin5_total__4->GetYaxis()->SetTitle("Data/pred.");
   met_rebin5_total__4->GetYaxis()->SetDecimals();
   met_rebin5_total__4->GetYaxis()->SetNdivisions(505);
   met_rebin5_total__4->GetYaxis()->SetLabelFont(42);
   met_rebin5_total__4->GetYaxis()->SetLabelOffset(0.01);
   met_rebin5_total__4->GetYaxis()->SetLabelSize(0.11);
   met_rebin5_total__4->GetYaxis()->SetTitleSize(0.14);
   met_rebin5_total__4->GetYaxis()->SetTitleOffset(0.62);
   met_rebin5_total__4->GetYaxis()->SetTitleFont(42);
   met_rebin5_total__4->GetZaxis()->SetLabelFont(42);
   met_rebin5_total__4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_total__4->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_total__4->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_total__4->GetZaxis()->SetTitleFont(42);
   met_rebin5_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,380,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[5] = {
   15.21509,
   35.68784,
   46.6766,
   61.25778,
   225.0539};
   Double_t data_div_fy3005[5] = {
   0.3531373,
   1.038807,
   1.018425,
   0.989452,
   1.031092};
   Double_t data_div_felx3005[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t data_div_fely3005[5] = {
   0.1302326,
   0.05198473,
   0.05425762,
   0.0530921,
   0.05102683};
   Double_t data_div_fehx3005[5] = {
   15.21509,
   5.257655,
   5.731112,
   8.850067,
   154.9461};
   Double_t data_div_fehy3005[5] = {
   0.1902076,
   0.05465358,
   0.05722817,
   0.05602027,
   0.05361672};
   grae = new TGraphAsymmErrors(5,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_rebin5_data_graph3005 = new TH1F("Graph_met_rebin5_data_graph3005","Graph",100,0,418);
   Graph_met_rebin5_data_graph3005->SetMinimum(3.976639);
   Graph_met_rebin5_data_graph3005->SetMaximum(471.6957);
   Graph_met_rebin5_data_graph3005->SetDirectory(0);
   Graph_met_rebin5_data_graph3005->SetStats(0);
   Graph_met_rebin5_data_graph3005->SetLineStyle(0);
   Graph_met_rebin5_data_graph3005->SetMarkerStyle(20);
   Graph_met_rebin5_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin5_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin5_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin5_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin5_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin5_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin5_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin5_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin5_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("met_rebin5_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("met_rebin5_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   met_rebin5_canvas->cd();
   met_rebin5_canvas->Modified();
   met_rebin5_canvas->cd();
   met_rebin5_canvas->SetSelected(met_rebin5_canvas);
}
