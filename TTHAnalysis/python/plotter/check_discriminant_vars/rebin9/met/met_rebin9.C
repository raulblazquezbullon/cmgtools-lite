void met_rebin9()
{
//=========Macro generated from canvas: met_rebin9_canvas/met_rebin9
//=========  (Mon Jul 10 19:16:49 2023) by ROOT version 6.24/07
   TCanvas *met_rebin9_canvas = new TCanvas("met_rebin9_canvas", "met_rebin9",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin9_canvas->SetHighLightColor(2);
   met_rebin9_canvas->Range(-87.69231,-153.5289,399.4872,1027.462);
   met_rebin9_canvas->SetFillColor(0);
   met_rebin9_canvas->SetBorderMode(0);
   met_rebin9_canvas->SetBorderSize(2);
   met_rebin9_canvas->SetTickx(1);
   met_rebin9_canvas->SetTicky(1);
   met_rebin9_canvas->SetLeftMargin(0.18);
   met_rebin9_canvas->SetRightMargin(0.04);
   met_rebin9_canvas->SetTopMargin(0.06);
   met_rebin9_canvas->SetBottomMargin(0.13);
   met_rebin9_canvas->SetFrameFillStyle(0);
   met_rebin9_canvas->SetFrameBorderMode(0);
   met_rebin9_canvas->SetFrameFillStyle(0);
   met_rebin9_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[10] = {0, 25.79609, 31.59218, 37.38827, 43.50845, 49.89445, 56.28045, 66.89751, 88.35711, 380}; 
   
   TH1D *met_rebin9_total__1 = new TH1D("met_rebin9_total__1","dummy",9, xAxis1);
   met_rebin9_total__1->SetBinContent(2,133.8556);
   met_rebin9_total__1->SetBinContent(3,432.1492);
   met_rebin9_total__1->SetBinContent(4,460.8251);
   met_rebin9_total__1->SetBinContent(5,401.6972);
   met_rebin9_total__1->SetBinContent(6,342.1893);
   met_rebin9_total__1->SetBinContent(7,432.8449);
   met_rebin9_total__1->SetBinContent(8,478.3015);
   met_rebin9_total__1->SetBinContent(9,457.6347);
   met_rebin9_total__1->SetBinError(2,11.68046);
   met_rebin9_total__1->SetBinError(3,16.57859);
   met_rebin9_total__1->SetBinError(4,18.42652);
   met_rebin9_total__1->SetBinError(5,13.65913);
   met_rebin9_total__1->SetBinError(6,11.96644);
   met_rebin9_total__1->SetBinError(7,11.69152);
   met_rebin9_total__1->SetBinError(8,11.88398);
   met_rebin9_total__1->SetBinError(9,10.06665);
   met_rebin9_total__1->SetMinimum(0);
   met_rebin9_total__1->SetMaximum(956.603);
   met_rebin9_total__1->SetEntries(15153);
   met_rebin9_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin9_total__1->SetFillColor(ci);
   met_rebin9_total__1->SetMarkerStyle(20);
   met_rebin9_total__1->SetMarkerSize(1.1);
   met_rebin9_total__1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin9_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin9_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin9_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_total__1->GetXaxis()->SetLabelSize(0.04);
   met_rebin9_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin9_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin9_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin9_total__1->GetYaxis()->SetTitle("Events");
   met_rebin9_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin9_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_total__1->GetYaxis()->SetLabelSize(0.04);
   met_rebin9_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin9_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin9_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin9_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin9_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin9_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin9_total__1->Draw("HIST");
   
   THStack *met_rebin9_stack = new THStack();
   met_rebin9_stack->SetName("met_rebin9_stack");
   met_rebin9_stack->SetTitle("met_rebin9");
   Double_t xAxis2[10] = {0, 25.79609, 31.59218, 37.38827, 43.50845, 49.89445, 56.28045, 66.89751, 88.35711, 380}; 
   
   TH1F *met_rebin9_stack_stack_1 = new TH1F("met_rebin9_stack_stack_1","met_rebin9",9, xAxis2);
   met_rebin9_stack_stack_1->SetMinimum(0);
   met_rebin9_stack_stack_1->SetMaximum(502.2166);
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
   met_rebin9_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin9_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->SetHistogram(met_rebin9_stack_stack_1);
   
   Double_t xAxis3[10] = {0, 25.79609, 31.59218, 37.38827, 43.50845, 49.89445, 56.28045, 66.89751, 88.35711, 380}; 
   
   TH1D *met_rebin9_fakes_VV_stack_1 = new TH1D("met_rebin9_fakes_VV_stack_1","dummy",9, xAxis3);
   met_rebin9_fakes_VV_stack_1->SetBinContent(5,0.2026171);
   met_rebin9_fakes_VV_stack_1->SetBinContent(6,0.199151);
   met_rebin9_fakes_VV_stack_1->SetBinContent(7,0.598817);
   met_rebin9_fakes_VV_stack_1->SetBinContent(9,0.4098757);
   met_rebin9_fakes_VV_stack_1->SetBinError(5,0.2026171);
   met_rebin9_fakes_VV_stack_1->SetBinError(6,0.199151);
   met_rebin9_fakes_VV_stack_1->SetBinError(7,0.3458295);
   met_rebin9_fakes_VV_stack_1->SetBinError(9,0.2898299);
   met_rebin9_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin9_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin9_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin9_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {0, 25.79609, 31.59218, 37.38827, 43.50845, 49.89445, 56.28045, 66.89751, 88.35711, 380}; 
   
   TH1D *met_rebin9_fakes_TT_stack_2 = new TH1D("met_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   met_rebin9_fakes_TT_stack_2->SetBinContent(2,1.831054);
   met_rebin9_fakes_TT_stack_2->SetBinContent(3,8.578365);
   met_rebin9_fakes_TT_stack_2->SetBinContent(4,8.758882);
   met_rebin9_fakes_TT_stack_2->SetBinContent(5,9.53542);
   met_rebin9_fakes_TT_stack_2->SetBinContent(6,9.678002);
   met_rebin9_fakes_TT_stack_2->SetBinContent(7,18.34746);
   met_rebin9_fakes_TT_stack_2->SetBinContent(8,24.13506);
   met_rebin9_fakes_TT_stack_2->SetBinContent(9,35.64438);
   met_rebin9_fakes_TT_stack_2->SetBinError(2,0.5080805);
   met_rebin9_fakes_TT_stack_2->SetBinError(3,1.099055);
   met_rebin9_fakes_TT_stack_2->SetBinError(4,1.11303);
   met_rebin9_fakes_TT_stack_2->SetBinError(5,1.182699);
   met_rebin9_fakes_TT_stack_2->SetBinError(6,1.165714);
   met_rebin9_fakes_TT_stack_2->SetBinError(7,1.636135);
   met_rebin9_fakes_TT_stack_2->SetBinError(8,1.868029);
   met_rebin9_fakes_TT_stack_2->SetBinError(9,2.272798);
   met_rebin9_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin9_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin9_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin9_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {0, 25.79609, 31.59218, 37.38827, 43.50845, 49.89445, 56.28045, 66.89751, 88.35711, 380}; 
   
   TH1D *met_rebin9_fakes_DY_stack_3 = new TH1D("met_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   met_rebin9_fakes_DY_stack_3->SetBinContent(2,32.15621);
   met_rebin9_fakes_DY_stack_3->SetBinContent(3,54.31342);
   met_rebin9_fakes_DY_stack_3->SetBinContent(4,72.19523);
   met_rebin9_fakes_DY_stack_3->SetBinContent(5,31.86075);
   met_rebin9_fakes_DY_stack_3->SetBinContent(6,21.83256);
   met_rebin9_fakes_DY_stack_3->SetBinContent(7,14.88918);
   met_rebin9_fakes_DY_stack_3->SetBinContent(8,14.35112);
   met_rebin9_fakes_DY_stack_3->SetBinContent(9,3.57414);
   met_rebin9_fakes_DY_stack_3->SetBinError(2,10.72257);
   met_rebin9_fakes_DY_stack_3->SetBinError(3,14.0311);
   met_rebin9_fakes_DY_stack_3->SetBinError(4,16.15154);
   met_rebin9_fakes_DY_stack_3->SetBinError(5,10.6301);
   met_rebin9_fakes_DY_stack_3->SetBinError(6,8.914254);
   met_rebin9_fakes_DY_stack_3->SetBinError(7,7.445014);
   met_rebin9_fakes_DY_stack_3->SetBinError(8,7.179135);
   met_rebin9_fakes_DY_stack_3->SetBinError(9,3.57414);
   met_rebin9_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin9_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin9_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin9_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {0, 25.79609, 31.59218, 37.38827, 43.50845, 49.89445, 56.28045, 66.89751, 88.35711, 380}; 
   
   TH1D *met_rebin9_prompt_ZZ_stack_4 = new TH1D("met_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(2,11.51117);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(3,34.61082);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(4,27.35629);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(5,19.34944);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(6,17.37759);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(7,14.56319);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(8,13.19301);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(9,15.64703);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(2,2.103122);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(3,3.6512);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(4,3.248792);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(5,2.737938);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(6,2.592298);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(7,2.364245);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(8,2.26328);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(9,2.475035);
   met_rebin9_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin9_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin9_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin9_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {0, 25.79609, 31.59218, 37.38827, 43.50845, 49.89445, 56.28045, 66.89751, 88.35711, 380}; 
   
   TH1D *met_rebin9_prompt_WZ_stack_5 = new TH1D("met_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(2,88.35719);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(3,334.6466);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(4,352.5147);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(5,340.7489);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(6,293.102);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(7,384.4463);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(8,426.6223);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(9,402.3593);
   met_rebin9_prompt_WZ_stack_5->SetBinError(2,4.096159);
   met_rebin9_prompt_WZ_stack_5->SetBinError(3,7.964828);
   met_rebin9_prompt_WZ_stack_5->SetBinError(4,8.177448);
   met_rebin9_prompt_WZ_stack_5->SetBinError(5,8.039707);
   met_rebin9_prompt_WZ_stack_5->SetBinError(6,7.457428);
   met_rebin9_prompt_WZ_stack_5->SetBinError(7,8.536817);
   met_rebin9_prompt_WZ_stack_5->SetBinError(8,9.004282);
   met_rebin9_prompt_WZ_stack_5->SetBinError(9,8.785649);
   met_rebin9_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin9_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin9_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin9_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_prompt_WZ_stack_5,"");
   met_rebin9_stack->Draw("same hist");
   Double_t xAxis8[10] = {0, 25.79609, 31.59218, 37.38827, 43.50845, 49.89445, 56.28045, 66.89751, 88.35711, 380}; 
   
   TH1D *met_rebin9_total__2 = new TH1D("met_rebin9_total__2","dummy",9, xAxis8);
   met_rebin9_total__2->SetBinContent(2,133.8556);
   met_rebin9_total__2->SetBinContent(3,432.1492);
   met_rebin9_total__2->SetBinContent(4,460.8251);
   met_rebin9_total__2->SetBinContent(5,401.6972);
   met_rebin9_total__2->SetBinContent(6,342.1893);
   met_rebin9_total__2->SetBinContent(7,432.8449);
   met_rebin9_total__2->SetBinContent(8,478.3015);
   met_rebin9_total__2->SetBinContent(9,457.6347);
   met_rebin9_total__2->SetBinError(2,11.68046);
   met_rebin9_total__2->SetBinError(3,16.57859);
   met_rebin9_total__2->SetBinError(4,18.42652);
   met_rebin9_total__2->SetBinError(5,13.65913);
   met_rebin9_total__2->SetBinError(6,11.96644);
   met_rebin9_total__2->SetBinError(7,11.69152);
   met_rebin9_total__2->SetBinError(8,11.88398);
   met_rebin9_total__2->SetBinError(9,10.06665);
   met_rebin9_total__2->SetMinimum(0);
   met_rebin9_total__2->SetMaximum(956.603);
   met_rebin9_total__2->SetEntries(15153);
   met_rebin9_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin9_total__2->SetFillColor(ci);
   met_rebin9_total__2->SetMarkerStyle(20);
   met_rebin9_total__2->SetMarkerSize(1.1);
   met_rebin9_total__2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin9_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin9_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin9_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_total__2->GetXaxis()->SetLabelSize(0.04);
   met_rebin9_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin9_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin9_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin9_total__2->GetYaxis()->SetTitle("Events");
   met_rebin9_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin9_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_total__2->GetYaxis()->SetLabelSize(0.04);
   met_rebin9_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin9_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin9_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin9_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin9_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin9_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin9_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin9_total_errors_fx3001[8] = {
   28.69413,
   34.49022,
   40.44836,
   46.70145,
   53.08745,
   61.58898,
   77.62731,
   234.1786};
   Double_t met_rebin9_total_errors_fy3001[8] = {
   133.8556,
   432.1492,
   460.8251,
   401.6972,
   342.1893,
   432.8449,
   478.3015,
   457.6347};
   Double_t met_rebin9_total_errors_felx3001[8] = {
   2.898046,
   2.898044,
   3.060093,
   3.192997,
   3.192999,
   5.308531,
   10.7298,
   145.8214};
   Double_t met_rebin9_total_errors_fely3001[8] = {
   41.71403,
   33.64235,
   48.36928,
   29.62545,
   32.459,
   36.02165,
   46.664,
   41.57993};
   Double_t met_rebin9_total_errors_fehx3001[8] = {
   2.898046,
   2.898044,
   3.060093,
   3.192997,
   3.192999,
   5.308531,
   10.7298,
   145.8214};
   Double_t met_rebin9_total_errors_fehy3001[8] = {
   14.01866,
   54.89959,
   43.51792,
   41.75828,
   26.22241,
   41.78365,
   45.72169,
   50.18319};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,met_rebin9_total_errors_fx3001,met_rebin9_total_errors_fy3001,met_rebin9_total_errors_felx3001,met_rebin9_total_errors_fehx3001,met_rebin9_total_errors_fely3001,met_rebin9_total_errors_fehy3001);
   grae->SetName("met_rebin9_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin9_total_errors3001 = new TH1F("Graph_met_rebin9_total_errors3001","Graph",100,0,415.4204);
   Graph_met_rebin9_total_errors3001->SetMinimum(48.95344);
   Graph_met_rebin9_total_errors3001->SetMaximum(567.2113);
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
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin9_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin9_prompt_WZ_stack_5","WZ","F");

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
   met_rebin9_canvas->Modified();
   met_rebin9_canvas->cd();
   met_rebin9_canvas->SetSelected(met_rebin9_canvas);
}
