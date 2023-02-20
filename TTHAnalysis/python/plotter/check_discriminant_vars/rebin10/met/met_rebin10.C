void met_rebin10()
{
//=========Macro generated from canvas: met_rebin10_canvas/met_rebin10
//=========  (Mon Feb 20 00:47:32 2023) by ROOT version 6.24/07
   TCanvas *met_rebin10_canvas = new TCanvas("met_rebin10_canvas", "met_rebin10",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin10_canvas->SetHighLightColor(2);
   met_rebin10_canvas->Range(-87.69231,-153.2378,399.4872,1025.515);
   met_rebin10_canvas->SetFillColor(0);
   met_rebin10_canvas->SetBorderMode(0);
   met_rebin10_canvas->SetBorderSize(2);
   met_rebin10_canvas->SetTickx(1);
   met_rebin10_canvas->SetTicky(1);
   met_rebin10_canvas->SetLeftMargin(0.18);
   met_rebin10_canvas->SetRightMargin(0.04);
   met_rebin10_canvas->SetTopMargin(0.06);
   met_rebin10_canvas->SetBottomMargin(0.13);
   met_rebin10_canvas->SetFrameFillStyle(0);
   met_rebin10_canvas->SetFrameBorderMode(0);
   met_rebin10_canvas->SetFrameFillStyle(0);
   met_rebin10_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_total__1 = new TH1D("met_rebin10_total__1","dummy",10, xAxis1);
   met_rebin10_total__1->SetBinContent(2,44.85387);
   met_rebin10_total__1->SetBinContent(3,436.7576);
   met_rebin10_total__1->SetBinContent(4,432.3696);
   met_rebin10_total__1->SetBinContent(5,417.8706);
   met_rebin10_total__1->SetBinContent(6,363.8681);
   met_rebin10_total__1->SetBinContent(7,316.1659);
   met_rebin10_total__1->SetBinContent(8,477.3949);
   met_rebin10_total__1->SetBinContent(9,458.8808);
   met_rebin10_total__1->SetBinContent(10,436.0857);
   met_rebin10_total__1->SetBinError(2,8.188027);
   met_rebin10_total__1->SetBinError(3,18.83781);
   met_rebin10_total__1->SetBinError(4,18.38366);
   met_rebin10_total__1->SetBinError(5,15.28286);
   met_rebin10_total__1->SetBinError(6,13.33585);
   met_rebin10_total__1->SetBinError(7,11.14078);
   met_rebin10_total__1->SetBinError(8,13.11094);
   met_rebin10_total__1->SetBinError(9,11.135);
   met_rebin10_total__1->SetBinError(10,10.25478);
   met_rebin10_total__1->SetMinimum(0);
   met_rebin10_total__1->SetMaximum(954.7897);
   met_rebin10_total__1->SetEntries(15153);
   met_rebin10_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin10_total__1->SetFillColor(ci);
   met_rebin10_total__1->SetMarkerStyle(20);
   met_rebin10_total__1->SetMarkerSize(1.1);
   met_rebin10_total__1->GetXaxis()->SetTitle("met");
   met_rebin10_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin10_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__1->GetYaxis()->SetTitle("Events");
   met_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin10_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin10_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin10_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin10_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin10_total__1->Draw("HIST");
   
   THStack *met_rebin10_stack = new THStack();
   met_rebin10_stack->SetName("met_rebin10_stack");
   met_rebin10_stack->SetTitle("met_rebin10");
   Double_t xAxis2[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1F *met_rebin10_stack_stack_1 = new TH1F("met_rebin10_stack_stack_1","met_rebin10",10, xAxis2);
   met_rebin10_stack_stack_1->SetMinimum(0);
   met_rebin10_stack_stack_1->SetMaximum(501.2646);
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
   met_rebin10_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin10_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->SetHistogram(met_rebin10_stack_stack_1);
   
   Double_t xAxis3[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_fakes_VV_stack_1 = new TH1D("met_rebin10_fakes_VV_stack_1","dummy",10, xAxis3);
   met_rebin10_fakes_VV_stack_1->SetBinContent(5,0.2199288);
   met_rebin10_fakes_VV_stack_1->SetBinContent(7,0.6597863);
   met_rebin10_fakes_VV_stack_1->SetBinContent(8,0.2199288);
   met_rebin10_fakes_VV_stack_1->SetBinContent(10,0.4398576);
   met_rebin10_fakes_VV_stack_1->SetBinError(5,0.2199288);
   met_rebin10_fakes_VV_stack_1->SetBinError(7,0.3809278);
   met_rebin10_fakes_VV_stack_1->SetBinError(8,0.2199288);
   met_rebin10_fakes_VV_stack_1->SetBinError(10,0.3110263);
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
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_fakes_VV_stack_1,"");
   Double_t xAxis4[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_fakes_TT_stack_2 = new TH1D("met_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   met_rebin10_fakes_TT_stack_2->SetBinContent(2,0.6018515);
   met_rebin10_fakes_TT_stack_2->SetBinContent(3,7.222218);
   met_rebin10_fakes_TT_stack_2->SetBinContent(4,8.877309);
   met_rebin10_fakes_TT_stack_2->SetBinContent(5,8.980615);
   met_rebin10_fakes_TT_stack_2->SetBinContent(6,8.529227);
   met_rebin10_fakes_TT_stack_2->SetBinContent(7,10.98379);
   met_rebin10_fakes_TT_stack_2->SetBinContent(8,19.91725);
   met_rebin10_fakes_TT_stack_2->SetBinContent(9,26.23669);
   met_rebin10_fakes_TT_stack_2->SetBinContent(10,33.05467);
   met_rebin10_fakes_TT_stack_2->SetBinError(2,0.3009257);
   met_rebin10_fakes_TT_stack_2->SetBinError(3,1.042437);
   met_rebin10_fakes_TT_stack_2->SetBinError(4,1.155727);
   met_rebin10_fakes_TT_stack_2->SetBinError(5,1.173655);
   met_rebin10_fakes_TT_stack_2->SetBinError(6,1.144355);
   met_rebin10_fakes_TT_stack_2->SetBinError(7,1.285555);
   met_rebin10_fakes_TT_stack_2->SetBinError(8,1.771946);
   met_rebin10_fakes_TT_stack_2->SetBinError(9,2.011307);
   met_rebin10_fakes_TT_stack_2->SetBinError(10,2.256163);
   met_rebin10_fakes_TT_stack_2->SetEntries(840);

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
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_fakes_TT_stack_2,"");
   Double_t xAxis5[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_fakes_DY_stack_3 = new TH1D("met_rebin10_fakes_DY_stack_3","dummy",10, xAxis5);
   met_rebin10_fakes_DY_stack_3->SetBinContent(2,15.56371);
   met_rebin10_fakes_DY_stack_3->SetBinContent(3,70.0367);
   met_rebin10_fakes_DY_stack_3->SetBinContent(4,66.14577);
   met_rebin10_fakes_DY_stack_3->SetBinContent(5,38.90928);
   met_rebin10_fakes_DY_stack_3->SetBinContent(6,27.23649);
   met_rebin10_fakes_DY_stack_3->SetBinContent(7,15.56371);
   met_rebin10_fakes_DY_stack_3->SetBinContent(8,19.45464);
   met_rebin10_fakes_DY_stack_3->SetBinContent(9,7.781856);
   met_rebin10_fakes_DY_stack_3->SetBinContent(10,3.890928);
   met_rebin10_fakes_DY_stack_3->SetBinError(2,7.781856);
   met_rebin10_fakes_DY_stack_3->SetBinError(3,16.50781);
   met_rebin10_fakes_DY_stack_3->SetBinError(4,16.04271);
   met_rebin10_fakes_DY_stack_3->SetBinError(5,12.30419);
   met_rebin10_fakes_DY_stack_3->SetBinError(6,10.29443);
   met_rebin10_fakes_DY_stack_3->SetBinError(7,7.781856);
   met_rebin10_fakes_DY_stack_3->SetBinError(8,8.700379);
   met_rebin10_fakes_DY_stack_3->SetBinError(9,5.502603);
   met_rebin10_fakes_DY_stack_3->SetBinError(10,3.890928);
   met_rebin10_fakes_DY_stack_3->SetEntries(76);

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
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_fakes_DY_stack_3,"");
   Double_t xAxis6[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_prompt_ZZ_stack_4 = new TH1D("met_rebin10_prompt_ZZ_stack_4","dummy",10, xAxis6);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(2,2.49114);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(3,36.53672);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(4,29.0633);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(5,24.08102);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(6,16.19241);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(7,12.4557);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(8,16.19241);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(9,12.87089);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(10,15.36203);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(2,1.017004);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(3,3.894828);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(4,3.473729);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(5,3.161993);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(6,2.592861);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(7,2.27409);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(8,2.592861);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(9,2.31168);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(10,2.525503);
   met_rebin10_prompt_ZZ_stack_4->SetEntries(402);

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
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_prompt_ZZ_stack_4,"");
   Double_t xAxis7[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_prompt_WZ_stack_5 = new TH1D("met_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(2,26.19717);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(3,322.9619);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(4,328.2832);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(5,345.6798);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(6,311.91);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(7,276.5029);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(8,421.6106);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(9,411.9914);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(10,383.3382);
   met_rebin10_prompt_WZ_stack_5->SetBinError(2,2.315524);
   met_rebin10_prompt_WZ_stack_5->SetBinError(3,8.130136);
   met_rebin10_prompt_WZ_stack_5->SetBinError(4,8.196841);
   met_rebin10_prompt_WZ_stack_5->SetBinError(5,8.411223);
   met_rebin10_prompt_WZ_stack_5->SetBinError(6,7.989817);
   met_rebin10_prompt_WZ_stack_5->SetBinError(7,7.52267);
   met_rebin10_prompt_WZ_stack_5->SetBinError(8,9.289192);
   met_rebin10_prompt_WZ_stack_5->SetBinError(9,9.182612);
   met_rebin10_prompt_WZ_stack_5->SetBinError(10,8.857542);
   met_rebin10_prompt_WZ_stack_5->SetEntries(13824);

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
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_prompt_WZ_stack_5,"");
   met_rebin10_stack->Draw("same hist");
   Double_t xAxis8[11] = {0, 25.21509, 30.43018, 35.64527, 40.94549, 46.67661, 52.40771, 58.13883, 70.10785, 92.33177, 380}; 
   
   TH1D *met_rebin10_total__2 = new TH1D("met_rebin10_total__2","dummy",10, xAxis8);
   met_rebin10_total__2->SetBinContent(2,44.85387);
   met_rebin10_total__2->SetBinContent(3,436.7576);
   met_rebin10_total__2->SetBinContent(4,432.3696);
   met_rebin10_total__2->SetBinContent(5,417.8706);
   met_rebin10_total__2->SetBinContent(6,363.8681);
   met_rebin10_total__2->SetBinContent(7,316.1659);
   met_rebin10_total__2->SetBinContent(8,477.3949);
   met_rebin10_total__2->SetBinContent(9,458.8808);
   met_rebin10_total__2->SetBinContent(10,436.0857);
   met_rebin10_total__2->SetBinError(2,8.188027);
   met_rebin10_total__2->SetBinError(3,18.83781);
   met_rebin10_total__2->SetBinError(4,18.38366);
   met_rebin10_total__2->SetBinError(5,15.28286);
   met_rebin10_total__2->SetBinError(6,13.33585);
   met_rebin10_total__2->SetBinError(7,11.14078);
   met_rebin10_total__2->SetBinError(8,13.11094);
   met_rebin10_total__2->SetBinError(9,11.135);
   met_rebin10_total__2->SetBinError(10,10.25478);
   met_rebin10_total__2->SetMinimum(0);
   met_rebin10_total__2->SetMaximum(954.7897);
   met_rebin10_total__2->SetEntries(15153);
   met_rebin10_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin10_total__2->SetFillColor(ci);
   met_rebin10_total__2->SetMarkerStyle(20);
   met_rebin10_total__2->SetMarkerSize(1.1);
   met_rebin10_total__2->GetXaxis()->SetTitle("met");
   met_rebin10_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin10_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__2->GetYaxis()->SetTitle("Events");
   met_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin10_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin10_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin10_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_total__2->GetZaxis()->SetTitleOffset(1);
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
   44.85387,
   436.7576,
   432.3696,
   417.8706,
   363.8681,
   316.1659,
   477.3949,
   458.8808,
   436.0857};
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
   27.01796,
   34.85083,
   41.8169,
   29.61673,
   26.22463,
   28.03144,
   38.54322,
   41.36637,
   37.41946};
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
   4.308682,
   37.15504,
   38.92744,
   30.95274,
   28.36592,
   24.5416,
   43.45227,
   44.59599,
   41.41102};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,met_rebin10_total_errors_fx3001,met_rebin10_total_errors_fy3001,met_rebin10_total_errors_felx3001,met_rebin10_total_errors_fehx3001,met_rebin10_total_errors_fely3001,met_rebin10_total_errors_fehy3001);
   grae->SetName("met_rebin10_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin10_total_errors3001 = new TH1F("Graph_met_rebin10_total_errors3001","Graph",100,0,415.4785);
   Graph_met_rebin10_total_errors3001->SetMinimum(16.05232);
   Graph_met_rebin10_total_errors3001->SetMaximum(571.1482);
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
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin10_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin10_prompt_WZ_stack_5","WZ","F");

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

   ci = TColor::GetColor("#00ffff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.952,"29.62 fb^{-1} (13.6 TeV)");
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
   met_rebin10_canvas->Modified();
   met_rebin10_canvas->cd();
   met_rebin10_canvas->SetSelected(met_rebin10_canvas);
}
