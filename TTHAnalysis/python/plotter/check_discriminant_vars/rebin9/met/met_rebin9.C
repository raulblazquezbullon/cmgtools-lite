void met_rebin9()
{
//=========Macro generated from canvas: met_rebin9_canvas/met_rebin9
//=========  (Thu Dec 15 19:54:18 2022) by ROOT version 6.12/07
   TCanvas *met_rebin9_canvas = new TCanvas("met_rebin9_canvas", "met_rebin9",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin9_canvas->SetHighLightColor(2);
   met_rebin9_canvas->Range(0,0,1,1);
   met_rebin9_canvas->SetFillColor(0);
   met_rebin9_canvas->SetBorderMode(0);
   met_rebin9_canvas->SetBorderSize(2);
   met_rebin9_canvas->SetTickx(1);
   met_rebin9_canvas->SetTicky(1);
   met_rebin9_canvas->SetLeftMargin(0.18);
   met_rebin9_canvas->SetRightMargin(0.04);
   met_rebin9_canvas->SetBottomMargin(0.13);
   met_rebin9_canvas->SetFrameFillStyle(0);
   met_rebin9_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-87.69231,-12.49964,399.4872,487.4861);
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
   Double_t xAxis1[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_total__1 = new TH1D("met_rebin9_total__1","dummy",9, xAxis1);
   met_rebin9_total__1->SetBinContent(2,63.903);
   met_rebin9_total__1->SetBinContent(3,206.2747);
   met_rebin9_total__1->SetBinContent(4,219.436);
   met_rebin9_total__1->SetBinContent(5,191.7142);
   met_rebin9_total__1->SetBinContent(6,163.0919);
   met_rebin9_total__1->SetBinContent(7,205.8562);
   met_rebin9_total__1->SetBinContent(8,228.7435);
   met_rebin9_total__1->SetBinContent(9,216.9251);
   met_rebin9_total__1->SetBinError(2,5.610916);
   met_rebin9_total__1->SetBinError(3,7.881294);
   met_rebin9_total__1->SetBinError(4,8.774224);
   met_rebin9_total__1->SetBinError(5,6.580667);
   met_rebin9_total__1->SetBinError(6,5.67606);
   met_rebin9_total__1->SetBinError(7,5.50388);
   met_rebin9_total__1->SetBinError(8,5.67634);
   met_rebin9_total__1->SetBinError(9,4.76924);
   met_rebin9_total__1->SetMinimum(0);
   met_rebin9_total__1->SetMaximum(457.487);
   met_rebin9_total__1->SetEntries(15152);
   met_rebin9_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   met_rebin9_total__1->SetFillColor(ci);
   met_rebin9_total__1->SetMarkerStyle(20);
   met_rebin9_total__1->SetMarkerSize(1.1);
   met_rebin9_total__1->GetXaxis()->SetTitle("met");
   met_rebin9_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin9_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin9_total__1->GetXaxis()->SetLabelOffset(999);
   met_rebin9_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin9_total__1->GetXaxis()->SetTitleOffset(999);
   met_rebin9_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin9_total__1->GetYaxis()->SetTitle("Events");
   met_rebin9_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin9_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_total__1->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_total__1->GetYaxis()->SetTitleOffset(1.48);
   met_rebin9_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin9_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin9_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin9_total__1->Draw("HIST");
   
   THStack *met_rebin9_stack = new THStack();
   met_rebin9_stack->SetName("met_rebin9_stack");
   met_rebin9_stack->SetTitle("met_rebin9");
   Double_t xAxis2[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1F *met_rebin9_stack_stack_1 = new TH1F("met_rebin9_stack_stack_1","met_rebin9",9, xAxis2);
   met_rebin9_stack_stack_1->SetMinimum(0);
   met_rebin9_stack_stack_1->SetMaximum(240.1807);
   met_rebin9_stack_stack_1->SetDirectory(0);
   met_rebin9_stack_stack_1->SetStats(0);
   met_rebin9_stack_stack_1->SetLineStyle(0);
   met_rebin9_stack_stack_1->SetMarkerStyle(20);
   met_rebin9_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin9_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin9_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin9_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin9_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin9_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->SetHistogram(met_rebin9_stack_stack_1);
   
   Double_t xAxis3[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_fakes_VV_stack_1 = new TH1D("met_rebin9_fakes_VV_stack_1","dummy",9, xAxis3);
   met_rebin9_fakes_VV_stack_1->SetBinContent(5,0.09719337);
   met_rebin9_fakes_VV_stack_1->SetBinContent(6,0.09719337);
   met_rebin9_fakes_VV_stack_1->SetBinContent(7,0.2915801);
   met_rebin9_fakes_VV_stack_1->SetBinContent(9,0.1943867);
   met_rebin9_fakes_VV_stack_1->SetBinError(5,0.09719337);
   met_rebin9_fakes_VV_stack_1->SetBinError(6,0.09719337);
   met_rebin9_fakes_VV_stack_1->SetBinError(7,0.1683439);
   met_rebin9_fakes_VV_stack_1->SetBinError(9,0.1374522);
   met_rebin9_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin9_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin9_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin9_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_fakes_TT_stack_2 = new TH1D("met_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   met_rebin9_fakes_TT_stack_2->SetBinContent(2,0.8644249);
   met_rebin9_fakes_TT_stack_2->SetBinContent(3,4.056148);
   met_rebin9_fakes_TT_stack_2->SetBinContent(4,4.056148);
   met_rebin9_fakes_TT_stack_2->SetBinContent(5,4.612916);
   met_rebin9_fakes_TT_stack_2->SetBinContent(6,4.588102);
   met_rebin9_fakes_TT_stack_2->SetBinContent(7,8.556915);
   met_rebin9_fakes_TT_stack_2->SetBinContent(8,11.39533);
   met_rebin9_fakes_TT_stack_2->SetBinContent(9,16.91435);
   met_rebin9_fakes_TT_stack_2->SetBinError(2,0.2397483);
   met_rebin9_fakes_TT_stack_2->SetBinError(3,0.5193365);
   met_rebin9_fakes_TT_stack_2->SetBinError(4,0.5193365);
   met_rebin9_fakes_TT_stack_2->SetBinError(5,0.563003);
   met_rebin9_fakes_TT_stack_2->SetBinError(6,0.5523425);
   met_rebin9_fakes_TT_stack_2->SetBinError(7,0.7692798);
   met_rebin9_fakes_TT_stack_2->SetBinError(8,0.8813662);
   met_rebin9_fakes_TT_stack_2->SetBinError(9,1.073607);
   met_rebin9_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   met_rebin9_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin9_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin9_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_fakes_DY_stack_3 = new TH1D("met_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   met_rebin9_fakes_DY_stack_3->SetBinContent(2,15.4757);
   met_rebin9_fakes_DY_stack_3->SetBinContent(3,25.79283);
   met_rebin9_fakes_DY_stack_3->SetBinContent(4,34.39044);
   met_rebin9_fakes_DY_stack_3->SetBinContent(5,15.4757);
   met_rebin9_fakes_DY_stack_3->SetBinContent(6,10.31713);
   met_rebin9_fakes_DY_stack_3->SetBinContent(7,6.878088);
   met_rebin9_fakes_DY_stack_3->SetBinContent(8,6.878088);
   met_rebin9_fakes_DY_stack_3->SetBinContent(9,1.719522);
   met_rebin9_fakes_DY_stack_3->SetBinError(2,5.158566);
   met_rebin9_fakes_DY_stack_3->SetBinError(3,6.65968);
   met_rebin9_fakes_DY_stack_3->SetBinError(4,7.689937);
   met_rebin9_fakes_DY_stack_3->SetBinError(5,5.158566);
   met_rebin9_fakes_DY_stack_3->SetBinError(6,4.211952);
   met_rebin9_fakes_DY_stack_3->SetBinError(7,3.439044);
   met_rebin9_fakes_DY_stack_3->SetBinError(8,3.439044);
   met_rebin9_fakes_DY_stack_3->SetBinError(9,1.719522);
   met_rebin9_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   met_rebin9_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin9_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin9_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_prompt_ZZ_stack_4 = new TH1D("met_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(2,5.504562);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(3,16.51369);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(4,13.02746);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(5,9.17427);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(6,8.256843);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(7,6.972446);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(8,6.238504);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(9,7.522902);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(2,1.004991);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(3,1.740695);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(4,1.546076);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(5,1.297438);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(6,1.230858);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(7,1.13108);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(8,1.069895);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(9,1.17488);
   met_rebin9_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   met_rebin9_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin9_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin9_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_prompt_WZ_stack_5 = new TH1D("met_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(2,42.05832);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(3,159.912);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(4,167.9619);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(5,162.3541);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(6,139.8326);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(7,183.1572);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(8,204.2316);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(9,190.5739);
   met_rebin9_prompt_WZ_stack_5->SetBinError(2,1.950408);
   met_rebin9_prompt_WZ_stack_5->SetBinError(3,3.80312);
   met_rebin9_prompt_WZ_stack_5->SetBinError(4,3.897668);
   met_rebin9_prompt_WZ_stack_5->SetBinError(5,3.83205);
   met_rebin9_prompt_WZ_stack_5->SetBinError(6,3.556343);
   met_rebin9_prompt_WZ_stack_5->SetBinError(7,4.07016);
   met_rebin9_prompt_WZ_stack_5->SetBinError(8,4.297945);
   met_rebin9_prompt_WZ_stack_5->SetBinError(9,4.15175);
   met_rebin9_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   met_rebin9_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin9_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin9_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_prompt_WZ_stack_5,"");
   met_rebin9_stack->Draw("same hist");
   Double_t xAxis8[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_total__2 = new TH1D("met_rebin9_total__2","dummy",9, xAxis8);
   met_rebin9_total__2->SetBinContent(2,63.903);
   met_rebin9_total__2->SetBinContent(3,206.2747);
   met_rebin9_total__2->SetBinContent(4,219.436);
   met_rebin9_total__2->SetBinContent(5,191.7142);
   met_rebin9_total__2->SetBinContent(6,163.0919);
   met_rebin9_total__2->SetBinContent(7,205.8562);
   met_rebin9_total__2->SetBinContent(8,228.7435);
   met_rebin9_total__2->SetBinContent(9,216.9251);
   met_rebin9_total__2->SetBinError(2,5.610916);
   met_rebin9_total__2->SetBinError(3,7.881294);
   met_rebin9_total__2->SetBinError(4,8.774224);
   met_rebin9_total__2->SetBinError(5,6.580667);
   met_rebin9_total__2->SetBinError(6,5.67606);
   met_rebin9_total__2->SetBinError(7,5.50388);
   met_rebin9_total__2->SetBinError(8,5.67634);
   met_rebin9_total__2->SetBinError(9,4.76924);
   met_rebin9_total__2->SetMinimum(0);
   met_rebin9_total__2->SetMaximum(457.487);
   met_rebin9_total__2->SetEntries(15152);
   met_rebin9_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   met_rebin9_total__2->SetFillColor(ci);
   met_rebin9_total__2->SetMarkerStyle(20);
   met_rebin9_total__2->SetMarkerSize(1.1);
   met_rebin9_total__2->GetXaxis()->SetTitle("met");
   met_rebin9_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin9_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin9_total__2->GetXaxis()->SetLabelOffset(999);
   met_rebin9_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin9_total__2->GetXaxis()->SetTitleOffset(999);
   met_rebin9_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin9_total__2->GetYaxis()->SetTitle("Events");
   met_rebin9_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin9_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_total__2->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_total__2->GetYaxis()->SetTitleOffset(1.48);
   met_rebin9_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin9_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin9_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin9_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin9_total_errors_fx3001[8] = {
   28.69182,
   34.48636,
   40.43814,
   46.6766,
   53.04451,
   61.50493,
   77.53659,
   234.1459};
   Double_t met_rebin9_total_errors_fy3001[8] = {
   63.903,
   206.2747,
   219.436,
   191.7142,
   163.0919,
   205.8562,
   228.7435,
   216.9251};
   Double_t met_rebin9_total_errors_felx3001[8] = {
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_total_errors_fely3001[8] = {
   5.610916,
   7.881294,
   8.774224,
   6.580667,
   5.67606,
   5.50388,
   5.67634,
   4.76924};
   Double_t met_rebin9_total_errors_fehx3001[8] = {
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_total_errors_fehy3001[8] = {
   5.610916,
   7.881294,
   8.774224,
   6.580667,
   5.67606,
   5.50388,
   5.67634,
   4.76924};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,met_rebin9_total_errors_fx3001,met_rebin9_total_errors_fy3001,met_rebin9_total_errors_felx3001,met_rebin9_total_errors_fehx3001,met_rebin9_total_errors_fely3001,met_rebin9_total_errors_fehy3001);
   grae->SetName("met_rebin9_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin9_total_errors3001 = new TH1F("Graph_met_rebin9_total_errors3001","Graph",100,0,415.4205);
   Graph_met_rebin9_total_errors3001->SetMinimum(40.67931);
   Graph_met_rebin9_total_errors3001->SetMaximum(252.0326);
   Graph_met_rebin9_total_errors3001->SetDirectory(0);
   Graph_met_rebin9_total_errors3001->SetStats(0);
   Graph_met_rebin9_total_errors3001->SetLineStyle(0);
   Graph_met_rebin9_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin9_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t met_rebin9_data_graph_fx3002[9] = {
   12.89727,
   28.69182,
   34.48636,
   40.43814,
   46.6766,
   53.04451,
   61.50493,
   77.53659,
   234.1459};
   Double_t met_rebin9_data_graph_fy3002[9] = {
   0,
   60,
   212,
   223,
   188,
   159,
   205,
   234,
   232};
   Double_t met_rebin9_data_graph_felx3002[9] = {
   12.89727,
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_data_graph_fely3002[9] = {
   0,
   7.72447,
   14.54904,
   14.9223,
   13.6994,
   12.59651,
   14.30644,
   15.28645,
   15.22089};
   Double_t met_rebin9_data_graph_fehx3002[9] = {
   12.89727,
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_data_graph_fehy3002[9] = {
   1.841055,
   8.789207,
   15.58346,
   15.95586,
   14.73595,
   13.63627,
   15.34145,
   16.31922,
   16.2538};
   grae = new TGraphAsymmErrors(9,met_rebin9_data_graph_fx3002,met_rebin9_data_graph_fy3002,met_rebin9_data_graph_felx3002,met_rebin9_data_graph_fehx3002,met_rebin9_data_graph_fely3002,met_rebin9_data_graph_fehy3002);
   grae->SetName("met_rebin9_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_rebin9_data_graph3002 = new TH1F("Graph_met_rebin9_data_graph3002","Graph",100,0,418);
   Graph_met_rebin9_data_graph3002->SetMinimum(0);
   Graph_met_rebin9_data_graph3002->SetMaximum(275.3511);
   Graph_met_rebin9_data_graph3002->SetDirectory(0);
   Graph_met_rebin9_data_graph3002->SetStats(0);
   Graph_met_rebin9_data_graph3002->SetLineStyle(0);
   Graph_met_rebin9_data_graph3002->SetMarkerStyle(20);
   Graph_met_rebin9_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin9_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin9_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin9_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin9_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin9_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin9_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin9_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin9_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin9_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("met_rebin9_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin9_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin9_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin9_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin9_total_errors","Total unc.","F");
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
   met_rebin9_canvas->cd();
  
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
   Double_t xAxis9[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_total__3 = new TH1D("met_rebin9_total__3","dummy",9, xAxis9);
   met_rebin9_total__3->SetBinContent(2,1);
   met_rebin9_total__3->SetBinContent(3,1);
   met_rebin9_total__3->SetBinContent(4,1);
   met_rebin9_total__3->SetBinContent(5,1);
   met_rebin9_total__3->SetBinContent(6,1);
   met_rebin9_total__3->SetBinContent(7,1);
   met_rebin9_total__3->SetBinContent(8,1);
   met_rebin9_total__3->SetBinContent(9,1);
   met_rebin9_total__3->SetMinimum(0.5);
   met_rebin9_total__3->SetMaximum(2);
   met_rebin9_total__3->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   met_rebin9_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_rebin9_total__3->SetMarkerColor(ci);
   met_rebin9_total__3->SetMarkerSize(1.1);
   met_rebin9_total__3->GetXaxis()->SetTitle("met");
   met_rebin9_total__3->GetXaxis()->SetMoreLogLabels();
   met_rebin9_total__3->GetXaxis()->SetLabelFont(42);
   met_rebin9_total__3->GetXaxis()->SetLabelOffset(0.015);
   met_rebin9_total__3->GetXaxis()->SetLabelSize(0.1);
   met_rebin9_total__3->GetXaxis()->SetTitleSize(0.14);
   met_rebin9_total__3->GetXaxis()->SetTitleFont(42);
   met_rebin9_total__3->GetYaxis()->SetTitle("Data/pred.");
   met_rebin9_total__3->GetYaxis()->SetDecimals();
   met_rebin9_total__3->GetYaxis()->SetNdivisions(505);
   met_rebin9_total__3->GetYaxis()->SetLabelFont(42);
   met_rebin9_total__3->GetYaxis()->SetLabelOffset(0.01);
   met_rebin9_total__3->GetYaxis()->SetLabelSize(0.11);
   met_rebin9_total__3->GetYaxis()->SetTitleSize(0.14);
   met_rebin9_total__3->GetYaxis()->SetTitleOffset(0.62);
   met_rebin9_total__3->GetYaxis()->SetTitleFont(42);
   met_rebin9_total__3->GetZaxis()->SetLabelFont(42);
   met_rebin9_total__3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_total__3->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_total__3->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_total__3->GetZaxis()->SetTitleFont(42);
   met_rebin9_total__3->Draw("AXIS");
   
   Double_t met_rebin9_total_errors_fx3003[8] = {
   28.69182,
   34.48636,
   40.43814,
   46.6766,
   53.04451,
   61.50493,
   77.53659,
   234.1459};
   Double_t met_rebin9_total_errors_fy3003[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t met_rebin9_total_errors_felx3003[8] = {
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_total_errors_fely3003[8] = {
   0.08780364,
   0.03820776,
   0.03998535,
   0.0343254,
   0.03480284,
   0.02673653,
   0.02481531,
   0.02198566};
   Double_t met_rebin9_total_errors_fehx3003[8] = {
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_total_errors_fehy3003[8] = {
   0.08780364,
   0.03820776,
   0.03998535,
   0.0343254,
   0.03480284,
   0.02673653,
   0.02481531,
   0.02198566};
   grae = new TGraphAsymmErrors(8,met_rebin9_total_errors_fx3003,met_rebin9_total_errors_fy3003,met_rebin9_total_errors_felx3003,met_rebin9_total_errors_fehx3003,met_rebin9_total_errors_fely3003,met_rebin9_total_errors_fehy3003);
   grae->SetName("met_rebin9_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t met_rebin9_total_errors_fx3004[8] = {
   28.69182,
   34.48636,
   40.43814,
   46.6766,
   53.04451,
   61.50493,
   77.53659,
   234.1459};
   Double_t met_rebin9_total_errors_fy3004[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t met_rebin9_total_errors_felx3004[8] = {
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_total_errors_fely3004[8] = {
   0.08780364,
   0.03820776,
   0.03998535,
   0.0343254,
   0.03480284,
   0.02673653,
   0.02481531,
   0.02198566};
   Double_t met_rebin9_total_errors_fehx3004[8] = {
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_total_errors_fehy3004[8] = {
   0.08780364,
   0.03820776,
   0.03998535,
   0.0343254,
   0.03480284,
   0.02673653,
   0.02481531,
   0.02198566};
   grae = new TGraphAsymmErrors(8,met_rebin9_total_errors_fx3004,met_rebin9_total_errors_fy3004,met_rebin9_total_errors_felx3004,met_rebin9_total_errors_fehx3004,met_rebin9_total_errors_fely3004,met_rebin9_total_errors_fehy3004);
   grae->SetName("met_rebin9_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_total__4 = new TH1D("met_rebin9_total__4","dummy",9, xAxis10);
   met_rebin9_total__4->SetBinContent(2,1);
   met_rebin9_total__4->SetBinContent(3,1);
   met_rebin9_total__4->SetBinContent(4,1);
   met_rebin9_total__4->SetBinContent(5,1);
   met_rebin9_total__4->SetBinContent(6,1);
   met_rebin9_total__4->SetBinContent(7,1);
   met_rebin9_total__4->SetBinContent(8,1);
   met_rebin9_total__4->SetBinContent(9,1);
   met_rebin9_total__4->SetMinimum(0.5);
   met_rebin9_total__4->SetMaximum(2);
   met_rebin9_total__4->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   met_rebin9_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_rebin9_total__4->SetMarkerColor(ci);
   met_rebin9_total__4->SetMarkerSize(1.1);
   met_rebin9_total__4->GetXaxis()->SetTitle("met");
   met_rebin9_total__4->GetXaxis()->SetMoreLogLabels();
   met_rebin9_total__4->GetXaxis()->SetLabelFont(42);
   met_rebin9_total__4->GetXaxis()->SetLabelOffset(0.015);
   met_rebin9_total__4->GetXaxis()->SetLabelSize(0.1);
   met_rebin9_total__4->GetXaxis()->SetTitleSize(0.14);
   met_rebin9_total__4->GetXaxis()->SetTitleFont(42);
   met_rebin9_total__4->GetYaxis()->SetTitle("Data/pred.");
   met_rebin9_total__4->GetYaxis()->SetDecimals();
   met_rebin9_total__4->GetYaxis()->SetNdivisions(505);
   met_rebin9_total__4->GetYaxis()->SetLabelFont(42);
   met_rebin9_total__4->GetYaxis()->SetLabelOffset(0.01);
   met_rebin9_total__4->GetYaxis()->SetLabelSize(0.11);
   met_rebin9_total__4->GetYaxis()->SetTitleSize(0.14);
   met_rebin9_total__4->GetYaxis()->SetTitleOffset(0.62);
   met_rebin9_total__4->GetYaxis()->SetTitleFont(42);
   met_rebin9_total__4->GetZaxis()->SetLabelFont(42);
   met_rebin9_total__4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_total__4->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_total__4->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_total__4->GetZaxis()->SetTitleFont(42);
   met_rebin9_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,380,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[9] = {
   12.89727,
   28.69182,
   34.48636,
   40.43814,
   46.6766,
   53.04451,
   61.50493,
   77.53659,
   234.1459};
   Double_t data_div_fy3005[9] = {
   0,
   0.938923,
   1.027756,
   1.016242,
   0.9806263,
   0.9749107,
   0.9958407,
   1.02298,
   1.069494};
   Double_t data_div_felx3005[9] = {
   12.89727,
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t data_div_fely3005[9] = {
   0,
   0.1208781,
   0.07053234,
   0.06800297,
   0.07145738,
   0.07723569,
   0.06949724,
   0.06682791,
   0.07016656};
   Double_t data_div_fehx3005[9] = {
   12.89727,
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t data_div_fehy3005[9] = {
   0,
   0.1375398,
   0.07554714,
   0.07271308,
   0.07686417,
   0.08361096,
   0.07452507,
   0.07134286,
   0.07492815};
   grae = new TGraphAsymmErrors(9,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_rebin9_data_graph3005 = new TH1F("Graph_met_rebin9_data_graph3005","Graph",100,0,418);
   Graph_met_rebin9_data_graph3005->SetMinimum(0);
   Graph_met_rebin9_data_graph3005->SetMaximum(275.3511);
   Graph_met_rebin9_data_graph3005->SetDirectory(0);
   Graph_met_rebin9_data_graph3005->SetStats(0);
   Graph_met_rebin9_data_graph3005->SetLineStyle(0);
   Graph_met_rebin9_data_graph3005->SetMarkerStyle(20);
   Graph_met_rebin9_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin9_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin9_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin9_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin9_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin9_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin9_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin9_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin9_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("met_rebin9_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("met_rebin9_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   met_rebin9_canvas->cd();
   met_rebin9_canvas->Modified();
   met_rebin9_canvas->cd();
   met_rebin9_canvas->SetSelected(met_rebin9_canvas);
}
