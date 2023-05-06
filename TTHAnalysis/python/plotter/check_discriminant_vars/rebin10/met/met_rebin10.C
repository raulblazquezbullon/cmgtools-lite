void met_rebin10()
{
//=========Macro generated from canvas: met_rebin10_canvas/met_rebin10
//=========  (Sat May  6 20:03:25 2023) by ROOT version 6.24/07
   TCanvas *met_rebin10_canvas = new TCanvas("met_rebin10_canvas", "met_rebin10",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin10_canvas->SetHighLightColor(2);
   met_rebin10_canvas->Range(-87.69231,-152.8437,399.4872,1022.877);
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
   Double_t xAxis1[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_total__1 = new TH1D("met_rebin10_total__1","dummy",10, xAxis1);
   met_rebin10_total__1->SetBinContent(2,44.44454);
   met_rebin10_total__1->SetBinContent(3,436.1978);
   met_rebin10_total__1->SetBinContent(4,432.3154);
   met_rebin10_total__1->SetBinContent(5,416.8473);
   met_rebin10_total__1->SetBinContent(6,364.0728);
   met_rebin10_total__1->SetBinContent(7,317.1892);
   met_rebin10_total__1->SetBinContent(8,476.1669);
   met_rebin10_total__1->SetBinContent(9,458.1163);
   met_rebin10_total__1->SetBinContent(10,438.8968);
   met_rebin10_total__1->SetBinError(2,8.182909);
   met_rebin10_total__1->SetBinError(3,18.83499);
   met_rebin10_total__1->SetBinError(4,18.38314);
   met_rebin10_total__1->SetBinError(5,15.27601);
   met_rebin10_total__1->SetBinError(6,13.33742);
   met_rebin10_total__1->SetBinError(7,11.15018);
   met_rebin10_total__1->SetBinError(8,13.10135);
   met_rebin10_total__1->SetBinError(9,11.12834);
   met_rebin10_total__1->SetBinError(10,10.2824);
   met_rebin10_total__1->SetMinimum(0);
   met_rebin10_total__1->SetMaximum(952.3337);
   met_rebin10_total__1->SetEntries(15153);
   met_rebin10_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin10_total__1->SetFillColor(ci);
   met_rebin10_total__1->SetMarkerStyle(20);
   met_rebin10_total__1->SetMarkerSize(1.1);
   met_rebin10_total__1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin10_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetXaxis()->SetLabelSize(0.04);
   met_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin10_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__1->GetYaxis()->SetTitle("Events");
   met_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetYaxis()->SetLabelSize(0.04);
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
   Double_t xAxis2[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1F *met_rebin10_stack_stack_1 = new TH1F("met_rebin10_stack_stack_1","met_rebin10",10, xAxis2);
   met_rebin10_stack_stack_1->SetMinimum(0);
   met_rebin10_stack_stack_1->SetMaximum(499.9752);
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
   
   Double_t xAxis3[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
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
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   Double_t xAxis4[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_fakes_TT_stack_2 = new TH1D("met_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   met_rebin10_fakes_TT_stack_2->SetBinContent(2,0.6018515);
   met_rebin10_fakes_TT_stack_2->SetBinContent(3,7.071755);
   met_rebin10_fakes_TT_stack_2->SetBinContent(4,9.027772);
   met_rebin10_fakes_TT_stack_2->SetBinContent(5,8.980615);
   met_rebin10_fakes_TT_stack_2->SetBinContent(6,8.529227);
   met_rebin10_fakes_TT_stack_2->SetBinContent(7,10.98379);
   met_rebin10_fakes_TT_stack_2->SetBinContent(8,19.91725);
   met_rebin10_fakes_TT_stack_2->SetBinContent(9,26.08623);
   met_rebin10_fakes_TT_stack_2->SetBinContent(10,33.20514);
   met_rebin10_fakes_TT_stack_2->SetBinError(2,0.3009257);
   met_rebin10_fakes_TT_stack_2->SetBinError(3,1.031521);
   met_rebin10_fakes_TT_stack_2->SetBinError(4,1.16548);
   met_rebin10_fakes_TT_stack_2->SetBinError(5,1.173655);
   met_rebin10_fakes_TT_stack_2->SetBinError(6,1.144355);
   met_rebin10_fakes_TT_stack_2->SetBinError(7,1.285555);
   met_rebin10_fakes_TT_stack_2->SetBinError(8,1.771946);
   met_rebin10_fakes_TT_stack_2->SetBinError(9,2.005672);
   met_rebin10_fakes_TT_stack_2->SetBinError(10,2.261175);
   met_rebin10_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin10_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin10_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin10_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   Double_t xAxis5[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
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
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   Double_t xAxis6[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
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
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   Double_t xAxis7[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_prompt_WZ_stack_5 = new TH1D("met_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(2,25.78783);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(3,322.5526);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(4,328.0786);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(5,344.6565);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(6,312.1147);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(7,277.5262);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(8,420.3826);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(9,411.3774);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(10,385.9989);
   met_rebin10_prompt_WZ_stack_5->SetBinError(2,2.297363);
   met_rebin10_prompt_WZ_stack_5->SetBinError(3,8.124983);
   met_rebin10_prompt_WZ_stack_5->SetBinError(4,8.194285);
   met_rebin10_prompt_WZ_stack_5->SetBinError(5,8.398764);
   met_rebin10_prompt_WZ_stack_5->SetBinError(6,7.992438);
   met_rebin10_prompt_WZ_stack_5->SetBinError(7,7.536578);
   met_rebin10_prompt_WZ_stack_5->SetBinError(8,9.275654);
   met_rebin10_prompt_WZ_stack_5->SetBinError(9,9.175767);
   met_rebin10_prompt_WZ_stack_5->SetBinError(10,8.888228);
   met_rebin10_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin10_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin10_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin10_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   Double_t xAxis8[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_total__2 = new TH1D("met_rebin10_total__2","dummy",10, xAxis8);
   met_rebin10_total__2->SetBinContent(2,44.44454);
   met_rebin10_total__2->SetBinContent(3,436.1978);
   met_rebin10_total__2->SetBinContent(4,432.3154);
   met_rebin10_total__2->SetBinContent(5,416.8473);
   met_rebin10_total__2->SetBinContent(6,364.0728);
   met_rebin10_total__2->SetBinContent(7,317.1892);
   met_rebin10_total__2->SetBinContent(8,476.1669);
   met_rebin10_total__2->SetBinContent(9,458.1163);
   met_rebin10_total__2->SetBinContent(10,438.8968);
   met_rebin10_total__2->SetBinError(2,8.182909);
   met_rebin10_total__2->SetBinError(3,18.83499);
   met_rebin10_total__2->SetBinError(4,18.38314);
   met_rebin10_total__2->SetBinError(5,15.27601);
   met_rebin10_total__2->SetBinError(6,13.33742);
   met_rebin10_total__2->SetBinError(7,11.15018);
   met_rebin10_total__2->SetBinError(8,13.10135);
   met_rebin10_total__2->SetBinError(9,11.12834);
   met_rebin10_total__2->SetBinError(10,10.2824);
   met_rebin10_total__2->SetMinimum(0);
   met_rebin10_total__2->SetMaximum(952.3337);
   met_rebin10_total__2->SetEntries(15153);
   met_rebin10_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin10_total__2->SetFillColor(ci);
   met_rebin10_total__2->SetMarkerStyle(20);
   met_rebin10_total__2->SetMarkerSize(1.1);
   met_rebin10_total__2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin10_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetXaxis()->SetLabelSize(0.04);
   met_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin10_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__2->GetYaxis()->SetTitle("Events");
   met_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetYaxis()->SetLabelSize(0.04);
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
   27.81468,
   33.02447,
   38.27613,
   43.78776,
   49.51749,
   55.24721,
   64.06932,
   81.06198,
   236.0487};
   Double_t met_rebin10_total_errors_fy3001[9] = {
   44.44454,
   436.1978,
   432.3154,
   416.8473,
   364.0728,
   317.1892,
   476.1669,
   458.1163,
   438.8968};
   Double_t met_rebin10_total_errors_felx3001[9] = {
   2.604895,
   2.604894,
   2.646767,
   2.864864,
   2.864862,
   2.864862,
   5.957249,
   11.03541,
   143.9513};
   Double_t met_rebin10_total_errors_fely3001[9] = {
   8.188605,
   29.38331,
   34.99441,
   23.75993,
   20.70795,
   24.72758,
   38.3412,
   37.84256,
   37.42889};
   Double_t met_rebin10_total_errors_fehx3001[9] = {
   2.604895,
   2.604894,
   2.646767,
   2.864864,
   2.864862,
   2.864862,
   5.957249,
   11.03541,
   143.9513};
   Double_t met_rebin10_total_errors_fehy3001[9] = {
   2.681392,
   26.36003,
   27.46527,
   28.42906,
   24.20498,
   19.10492,
   42.60648,
   44.4372,
   47.29032};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,met_rebin10_total_errors_fx3001,met_rebin10_total_errors_fy3001,met_rebin10_total_errors_felx3001,met_rebin10_total_errors_fehx3001,met_rebin10_total_errors_fely3001,met_rebin10_total_errors_fehy3001);
   grae->SetName("met_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin10_total_errors3001 = new TH1F("Graph_met_rebin10_total_errors3001","Graph",100,0,415.479);
   Graph_met_rebin10_total_errors3001->SetMinimum(32.63034);
   Graph_met_rebin10_total_errors3001->SetMaximum(567.0251);
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
      tex = new TLatex(0.2813,0.952,"Academic");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0342);
   tex->SetLineWidth(2);
   tex->Draw();
   met_rebin10_canvas->Modified();
   met_rebin10_canvas->cd();
   met_rebin10_canvas->SetSelected(met_rebin10_canvas);
}
