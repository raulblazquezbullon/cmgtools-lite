void met_rebin7()
{
//=========Macro generated from canvas: met_rebin7_canvas/met_rebin7
//=========  (Sat May  6 20:02:27 2023) by ROOT version 6.24/07
   TCanvas *met_rebin7_canvas = new TCanvas("met_rebin7_canvas", "met_rebin7",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin7_canvas->SetHighLightColor(2);
   met_rebin7_canvas->Range(-87.69231,-215.8172,399.4872,1444.315);
   met_rebin7_canvas->SetFillColor(0);
   met_rebin7_canvas->SetBorderMode(0);
   met_rebin7_canvas->SetBorderSize(2);
   met_rebin7_canvas->SetTickx(1);
   met_rebin7_canvas->SetTicky(1);
   met_rebin7_canvas->SetLeftMargin(0.18);
   met_rebin7_canvas->SetRightMargin(0.04);
   met_rebin7_canvas->SetTopMargin(0.06);
   met_rebin7_canvas->SetBottomMargin(0.13);
   met_rebin7_canvas->SetFrameFillStyle(0);
   met_rebin7_canvas->SetFrameBorderMode(0);
   met_rebin7_canvas->SetFrameFillStyle(0);
   met_rebin7_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 27.44255, 34.88511, 42.55996, 50.74529, 58.93061, 78.5716, 380}; 
   
   TH1D *met_rebin7_total__1 = new TH1D("met_rebin7_total__1","dummy",7, xAxis1);
   met_rebin7_total__1->SetBinContent(2,423.5349);
   met_rebin7_total__1->SetBinContent(3,609.0572);
   met_rebin7_total__1->SetBinContent(4,567.8602);
   met_rebin7_total__1->SetBinContent(5,446.6023);
   met_rebin7_total__1->SetBinContent(6,664.8389);
   met_rebin7_total__1->SetBinContent(7,672.3535);
   met_rebin7_total__1->SetBinError(2,19.86292);
   met_rebin7_total__1->SetBinError(3,20.4855);
   met_rebin7_total__1->SetBinError(4,17.54175);
   met_rebin7_total__1->SetBinError(5,13.45037);
   met_rebin7_total__1->SetBinError(6,15.01575);
   met_rebin7_total__1->SetBinError(7,12.96728);
   met_rebin7_total__1->SetMinimum(0);
   met_rebin7_total__1->SetMaximum(1344.707);
   met_rebin7_total__1->SetEntries(15153);
   met_rebin7_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin7_total__1->SetFillColor(ci);
   met_rebin7_total__1->SetMarkerStyle(20);
   met_rebin7_total__1->SetMarkerSize(1.1);
   met_rebin7_total__1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin7_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin7_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin7_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_total__1->GetXaxis()->SetLabelSize(0.04);
   met_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin7_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin7_total__1->GetYaxis()->SetTitle("Events");
   met_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_total__1->GetYaxis()->SetLabelSize(0.04);
   met_rebin7_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin7_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin7_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin7_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin7_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin7_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin7_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin7_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin7_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin7_total__1->Draw("HIST");
   
   THStack *met_rebin7_stack = new THStack();
   met_rebin7_stack->SetName("met_rebin7_stack");
   met_rebin7_stack->SetTitle("met_rebin7");
   Double_t xAxis2[8] = {0, 27.44255, 34.88511, 42.55996, 50.74529, 58.93061, 78.5716, 380}; 
   
   TH1F *met_rebin7_stack_stack_1 = new TH1F("met_rebin7_stack_stack_1","met_rebin7",7, xAxis2);
   met_rebin7_stack_stack_1->SetMinimum(0);
   met_rebin7_stack_stack_1->SetMaximum(705.9712);
   met_rebin7_stack_stack_1->SetDirectory(0);
   met_rebin7_stack_stack_1->SetStats(0);
   met_rebin7_stack_stack_1->SetLineStyle(0);
   met_rebin7_stack_stack_1->SetMarkerStyle(20);
   met_rebin7_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin7_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin7_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin7_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin7_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin7_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin7_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin7_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin7_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin7_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin7_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin7_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin7_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin7_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin7_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin7_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin7_stack->SetHistogram(met_rebin7_stack_stack_1);
   
   Double_t xAxis3[8] = {0, 27.44255, 34.88511, 42.55996, 50.74529, 58.93061, 78.5716, 380}; 
   
   TH1D *met_rebin7_fakes_VV_stack_1 = new TH1D("met_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   met_rebin7_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   met_rebin7_fakes_VV_stack_1->SetBinContent(5,0.8797151);
   met_rebin7_fakes_VV_stack_1->SetBinContent(7,0.4398576);
   met_rebin7_fakes_VV_stack_1->SetBinError(4,0.2199288);
   met_rebin7_fakes_VV_stack_1->SetBinError(5,0.4398576);
   met_rebin7_fakes_VV_stack_1->SetBinError(7,0.3110263);
   met_rebin7_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin7_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin7_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin7_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin7_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin7_stack->Add(met_rebin7_fakes_VV_stack_1,"");
   Double_t xAxis4[8] = {0, 27.44255, 34.88511, 42.55996, 50.74529, 58.93061, 78.5716, 380}; 
   
   TH1D *met_rebin7_fakes_TT_stack_2 = new TH1D("met_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   met_rebin7_fakes_TT_stack_2->SetBinContent(2,6.31944);
   met_rebin7_fakes_TT_stack_2->SetBinContent(3,12.63888);
   met_rebin7_fakes_TT_stack_2->SetBinContent(4,12.99596);
   met_rebin7_fakes_TT_stack_2->SetBinContent(5,13.99305);
   met_rebin7_fakes_TT_stack_2->SetBinContent(6,30.44965);
   met_rebin7_fakes_TT_stack_2->SetBinContent(7,48.00665);
   met_rebin7_fakes_TT_stack_2->SetBinError(2,0.9751108);
   met_rebin7_fakes_TT_stack_2->SetBinError(3,1.379015);
   met_rebin7_fakes_TT_stack_2->SetBinError(4,1.416983);
   met_rebin7_fakes_TT_stack_2->SetBinError(5,1.451011);
   met_rebin7_fakes_TT_stack_2->SetBinError(6,2.183989);
   met_rebin7_fakes_TT_stack_2->SetBinError(7,2.718901);
   met_rebin7_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin7_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin7_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin7_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin7_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin7_stack->Add(met_rebin7_fakes_TT_stack_2,"");
   Double_t xAxis5[8] = {0, 27.44255, 34.88511, 42.55996, 50.74529, 58.93061, 78.5716, 380}; 
   
   TH1D *met_rebin7_fakes_DY_stack_3 = new TH1D("met_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   met_rebin7_fakes_DY_stack_3->SetBinContent(2,81.70948);
   met_rebin7_fakes_DY_stack_3->SetBinContent(3,77.81856);
   met_rebin7_fakes_DY_stack_3->SetBinContent(4,50.58206);
   met_rebin7_fakes_DY_stack_3->SetBinContent(5,23.34557);
   met_rebin7_fakes_DY_stack_3->SetBinContent(6,23.34557);
   met_rebin7_fakes_DY_stack_3->SetBinContent(7,7.781856);
   met_rebin7_fakes_DY_stack_3->SetBinError(2,17.83047);
   met_rebin7_fakes_DY_stack_3->SetBinError(3,17.40076);
   met_rebin7_fakes_DY_stack_3->SetBinError(4,14.02894);
   met_rebin7_fakes_DY_stack_3->SetBinError(5,9.530788);
   met_rebin7_fakes_DY_stack_3->SetBinError(6,9.530788);
   met_rebin7_fakes_DY_stack_3->SetBinError(7,5.502603);
   met_rebin7_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin7_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin7_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin7_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin7_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin7_stack->Add(met_rebin7_fakes_DY_stack_3,"");
   Double_t xAxis6[8] = {0, 27.44255, 34.88511, 42.55996, 50.74529, 58.93061, 78.5716, 380}; 
   
   TH1D *met_rebin7_prompt_ZZ_stack_4 = new TH1D("met_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(2,33.2152);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(3,41.9342);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(4,26.98735);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(5,19.92912);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(6,22.83545);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(7,20.34431);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(2,3.713573);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(3,4.172608);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(4,3.347369);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(5,2.876521);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(6,3.079132);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(7,2.90633);
   met_rebin7_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin7_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin7_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin7_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin7_stack->Add(met_rebin7_prompt_ZZ_stack_4,"");
   Double_t xAxis7[8] = {0, 27.44255, 34.88511, 42.55996, 50.74529, 58.93061, 78.5716, 380}; 
   
   TH1D *met_rebin7_prompt_WZ_stack_5 = new TH1D("met_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(2,302.2907);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(3,476.6656);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(4,477.0749);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(5,388.4548);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(6,588.2082);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(7,595.7808);
   met_rebin7_prompt_WZ_stack_5->SetBinError(2,7.865649);
   met_rebin7_prompt_WZ_stack_5->SetBinError(3,9.877091);
   met_rebin7_prompt_WZ_stack_5->SetBinError(4,9.881331);
   met_rebin7_prompt_WZ_stack_5->SetBinError(5,8.916459);
   met_rebin7_prompt_WZ_stack_5->SetBinError(6,10.97205);
   met_rebin7_prompt_WZ_stack_5->SetBinError(7,11.04245);
   met_rebin7_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin7_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin7_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin7_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin7_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin7_stack->Add(met_rebin7_prompt_WZ_stack_5,"");
   met_rebin7_stack->Draw("same hist");
   Double_t xAxis8[8] = {0, 27.44255, 34.88511, 42.55996, 50.74529, 58.93061, 78.5716, 380}; 
   
   TH1D *met_rebin7_total__2 = new TH1D("met_rebin7_total__2","dummy",7, xAxis8);
   met_rebin7_total__2->SetBinContent(2,423.5349);
   met_rebin7_total__2->SetBinContent(3,609.0572);
   met_rebin7_total__2->SetBinContent(4,567.8602);
   met_rebin7_total__2->SetBinContent(5,446.6023);
   met_rebin7_total__2->SetBinContent(6,664.8389);
   met_rebin7_total__2->SetBinContent(7,672.3535);
   met_rebin7_total__2->SetBinError(2,19.86292);
   met_rebin7_total__2->SetBinError(3,20.4855);
   met_rebin7_total__2->SetBinError(4,17.54175);
   met_rebin7_total__2->SetBinError(5,13.45037);
   met_rebin7_total__2->SetBinError(6,15.01575);
   met_rebin7_total__2->SetBinError(7,12.96728);
   met_rebin7_total__2->SetMinimum(0);
   met_rebin7_total__2->SetMaximum(1344.707);
   met_rebin7_total__2->SetEntries(15153);
   met_rebin7_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin7_total__2->SetFillColor(ci);
   met_rebin7_total__2->SetMarkerStyle(20);
   met_rebin7_total__2->SetMarkerSize(1.1);
   met_rebin7_total__2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin7_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin7_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin7_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_total__2->GetXaxis()->SetLabelSize(0.04);
   met_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin7_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin7_total__2->GetYaxis()->SetTitle("Events");
   met_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_total__2->GetYaxis()->SetLabelSize(0.04);
   met_rebin7_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin7_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin7_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin7_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin7_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin7_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin7_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin7_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin7_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin7_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin7_total_errors_fx3001[6] = {
   31.16383,
   38.72254,
   46.65262,
   54.83795,
   68.7511,
   229.2858};
   Double_t met_rebin7_total_errors_fy3001[6] = {
   423.5349,
   609.0572,
   567.8602,
   446.6023,
   664.8389,
   672.3535};
   Double_t met_rebin7_total_errors_felx3001[6] = {
   3.721277,
   3.837427,
   4.092661,
   4.092661,
   9.820498,
   150.7142};
   Double_t met_rebin7_total_errors_fely3001[6] = {
   36.36963,
   38.63299,
   32.30906,
   29.53768,
   53.10552,
   59.62354};
   Double_t met_rebin7_total_errors_fehx3001[6] = {
   3.721277,
   3.837427,
   4.092661,
   4.092661,
   9.820498,
   150.7142};
   Double_t met_rebin7_total_errors_fehy3001[6] = {
   25.58527,
   38.60076,
   34.87792,
   30.88056,
   57.76319,
   65.15};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,met_rebin7_total_errors_fx3001,met_rebin7_total_errors_fy3001,met_rebin7_total_errors_felx3001,met_rebin7_total_errors_fehx3001,met_rebin7_total_errors_fely3001,met_rebin7_total_errors_fehy3001);
   grae->SetName("met_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin7_total_errors3001 = new TH1F("Graph_met_rebin7_total_errors3001","Graph",100,0,415.2557);
   Graph_met_rebin7_total_errors3001->SetMinimum(352.1314);
   Graph_met_rebin7_total_errors3001->SetMaximum(772.5373);
   Graph_met_rebin7_total_errors3001->SetDirectory(0);
   Graph_met_rebin7_total_errors3001->SetStats(0);
   Graph_met_rebin7_total_errors3001->SetLineStyle(0);
   Graph_met_rebin7_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin7_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin7_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin7_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin7_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin7_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin7_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin7_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin7_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin7_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin7_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin7_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin7_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin7_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin7_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin7_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin7_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin7_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin7_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin7_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin7_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin7_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin7_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin7_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin7_total_errors","Total unc.","F");
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
   met_rebin7_canvas->Modified();
   met_rebin7_canvas->cd();
   met_rebin7_canvas->SetSelected(met_rebin7_canvas);
}
