void met_rebin4()
{
//=========Macro generated from canvas: met_rebin4_canvas/met_rebin4
//=========  (Sat May  6 19:57:59 2023) by ROOT version 6.24/07
   TCanvas *met_rebin4_canvas = new TCanvas("met_rebin4_canvas", "met_rebin4",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin4_canvas->SetHighLightColor(2);
   met_rebin4_canvas->Range(-87.69231,-378.2664,399.4872,2531.476);
   met_rebin4_canvas->SetFillColor(0);
   met_rebin4_canvas->SetBorderMode(0);
   met_rebin4_canvas->SetBorderSize(2);
   met_rebin4_canvas->SetTickx(1);
   met_rebin4_canvas->SetTicky(1);
   met_rebin4_canvas->SetLeftMargin(0.18);
   met_rebin4_canvas->SetRightMargin(0.04);
   met_rebin4_canvas->SetTopMargin(0.06);
   met_rebin4_canvas->SetBottomMargin(0.13);
   met_rebin4_canvas->SetFrameFillStyle(0);
   met_rebin4_canvas->SetFrameBorderMode(0);
   met_rebin4_canvas->SetFrameFillStyle(0);
   met_rebin4_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[5] = {0, 33.02447, 46.65263, 62.54967, 380}; 
   
   TH1D *met_rebin4_total__1 = new TH1D("met_rebin4_total__1","dummy",4, xAxis1);
   met_rebin4_total__1->SetBinContent(1,267.2717);
   met_rebin4_total__1->SetBinContent(2,1062.533);
   met_rebin4_total__1->SetBinContent(3,875.9965);
   met_rebin4_total__1->SetBinContent(4,1178.446);
   met_rebin4_total__1->SetBinError(1,16.99623);
   met_rebin4_total__1->SetBinError(2,26.53566);
   met_rebin4_total__1->SetBinError(3,18.92386);
   met_rebin4_total__1->SetBinError(4,18.58262);
   met_rebin4_total__1->SetMinimum(0);
   met_rebin4_total__1->SetMaximum(2356.891);
   met_rebin4_total__1->SetEntries(15153);
   met_rebin4_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin4_total__1->SetFillColor(ci);
   met_rebin4_total__1->SetMarkerStyle(20);
   met_rebin4_total__1->SetMarkerSize(1.1);
   met_rebin4_total__1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin4_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin4_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin4_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin4_total__1->GetXaxis()->SetLabelSize(0.04);
   met_rebin4_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin4_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin4_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin4_total__1->GetYaxis()->SetTitle("Events");
   met_rebin4_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin4_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin4_total__1->GetYaxis()->SetLabelSize(0.04);
   met_rebin4_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin4_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin4_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin4_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin4_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin4_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin4_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin4_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin4_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin4_total__1->Draw("HIST");
   
   THStack *met_rebin4_stack = new THStack();
   met_rebin4_stack->SetName("met_rebin4_stack");
   met_rebin4_stack->SetTitle("met_rebin4");
   Double_t xAxis2[5] = {0, 33.02447, 46.65263, 62.54967, 380}; 
   
   TH1F *met_rebin4_stack_stack_1 = new TH1F("met_rebin4_stack_stack_1","met_rebin4",4, xAxis2);
   met_rebin4_stack_stack_1->SetMinimum(0);
   met_rebin4_stack_stack_1->SetMaximum(1237.368);
   met_rebin4_stack_stack_1->SetDirectory(0);
   met_rebin4_stack_stack_1->SetStats(0);
   met_rebin4_stack_stack_1->SetLineStyle(0);
   met_rebin4_stack_stack_1->SetMarkerStyle(20);
   met_rebin4_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin4_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin4_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin4_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin4_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin4_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin4_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin4_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin4_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin4_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin4_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin4_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin4_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin4_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin4_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin4_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin4_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin4_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin4_stack->SetHistogram(met_rebin4_stack_stack_1);
   
   Double_t xAxis3[5] = {0, 33.02447, 46.65263, 62.54967, 380}; 
   
   TH1D *met_rebin4_fakes_VV_stack_1 = new TH1D("met_rebin4_fakes_VV_stack_1","dummy",4, xAxis3);
   met_rebin4_fakes_VV_stack_1->SetBinContent(2,0.2199288);
   met_rebin4_fakes_VV_stack_1->SetBinContent(3,0.8797151);
   met_rebin4_fakes_VV_stack_1->SetBinContent(4,0.4398576);
   met_rebin4_fakes_VV_stack_1->SetBinError(2,0.2199288);
   met_rebin4_fakes_VV_stack_1->SetBinError(3,0.4398576);
   met_rebin4_fakes_VV_stack_1->SetBinError(4,0.3110263);
   met_rebin4_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin4_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin4_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin4_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin4_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin4_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin4_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin4_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin4_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin4_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin4_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin4_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin4_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin4_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin4_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin4_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin4_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin4_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin4_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin4_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin4_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin4_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin4_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin4_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin4_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin4_stack->Add(met_rebin4_fakes_VV_stack_1,"");
   Double_t xAxis4[5] = {0, 33.02447, 46.65263, 62.54967, 380}; 
   
   TH1D *met_rebin4_fakes_TT_stack_2 = new TH1D("met_rebin4_fakes_TT_stack_2","dummy",4, xAxis4);
   met_rebin4_fakes_TT_stack_2->SetBinContent(1,3.912035);
   met_rebin4_fakes_TT_stack_2->SetBinContent(2,21.76996);
   met_rebin4_fakes_TT_stack_2->SetBinContent(3,27.44039);
   met_rebin4_fakes_TT_stack_2->SetBinContent(4,71.28124);
   met_rebin4_fakes_TT_stack_2->SetBinError(1,0.7672131);
   met_rebin4_fakes_TT_stack_2->SetBinError(2,1.817082);
   met_rebin4_fakes_TT_stack_2->SetBinError(3,2.066821);
   met_rebin4_fakes_TT_stack_2->SetBinError(4,3.311477);
   met_rebin4_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin4_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin4_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin4_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin4_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin4_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin4_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin4_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin4_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin4_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin4_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin4_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin4_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin4_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin4_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin4_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin4_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin4_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin4_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin4_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin4_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin4_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin4_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin4_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin4_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin4_stack->Add(met_rebin4_fakes_TT_stack_2,"");
   Double_t xAxis5[5] = {0, 33.02447, 46.65263, 62.54967, 380}; 
   
   TH1D *met_rebin4_fakes_DY_stack_3 = new TH1D("met_rebin4_fakes_DY_stack_3","dummy",4, xAxis5);
   met_rebin4_fakes_DY_stack_3->SetBinContent(1,62.25484);
   met_rebin4_fakes_DY_stack_3->SetBinContent(2,128.4006);
   met_rebin4_fakes_DY_stack_3->SetBinContent(3,46.69113);
   met_rebin4_fakes_DY_stack_3->SetBinContent(4,27.23649);
   met_rebin4_fakes_DY_stack_3->SetBinError(1,15.56371);
   met_rebin4_fakes_DY_stack_3->SetBinError(2,22.35168);
   met_rebin4_fakes_DY_stack_3->SetBinError(3,13.47857);
   met_rebin4_fakes_DY_stack_3->SetBinError(4,10.29443);
   met_rebin4_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin4_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin4_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin4_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin4_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin4_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin4_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin4_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin4_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin4_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin4_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin4_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin4_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin4_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin4_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin4_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin4_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin4_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin4_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin4_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin4_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin4_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin4_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin4_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin4_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin4_stack->Add(met_rebin4_fakes_DY_stack_3,"");
   Double_t xAxis6[5] = {0, 33.02447, 46.65263, 62.54967, 380}; 
   
   TH1D *met_rebin4_prompt_ZZ_stack_4 = new TH1D("met_rebin4_prompt_ZZ_stack_4","dummy",4, xAxis6);
   met_rebin4_prompt_ZZ_stack_4->SetBinContent(1,23.25064);
   met_rebin4_prompt_ZZ_stack_4->SetBinContent(2,68.92155);
   met_rebin4_prompt_ZZ_stack_4->SetBinContent(3,38.19749);
   met_rebin4_prompt_ZZ_stack_4->SetBinContent(4,34.87596);
   met_rebin4_prompt_ZZ_stack_4->SetBinError(1,3.106998);
   met_rebin4_prompt_ZZ_stack_4->SetBinError(2,5.34935);
   met_rebin4_prompt_ZZ_stack_4->SetBinError(3,3.982363);
   met_rebin4_prompt_ZZ_stack_4->SetBinError(4,3.80528);
   met_rebin4_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin4_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin4_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin4_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin4_stack->Add(met_rebin4_prompt_ZZ_stack_4,"");
   Double_t xAxis7[5] = {0, 33.02447, 46.65263, 62.54967, 380}; 
   
   TH1D *met_rebin4_prompt_WZ_stack_5 = new TH1D("met_rebin4_prompt_WZ_stack_5","dummy",4, xAxis7);
   met_rebin4_prompt_WZ_stack_5->SetBinContent(1,177.8542);
   met_rebin4_prompt_WZ_stack_5->SetBinContent(2,843.2213);
   met_rebin4_prompt_WZ_stack_5->SetBinContent(3,762.7878);
   met_rebin4_prompt_WZ_stack_5->SetBinContent(4,1044.612);
   met_rebin4_prompt_WZ_stack_5->SetBinError(1,6.03329);
   met_rebin4_prompt_WZ_stack_5->SetBinError(2,13.1369);
   met_rebin4_prompt_WZ_stack_5->SetBinError(3,12.49465);
   met_rebin4_prompt_WZ_stack_5->SetBinError(4,14.62176);
   met_rebin4_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin4_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin4_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin4_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin4_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin4_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin4_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin4_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin4_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin4_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin4_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin4_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin4_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin4_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin4_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin4_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin4_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin4_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin4_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin4_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin4_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin4_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin4_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin4_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin4_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin4_stack->Add(met_rebin4_prompt_WZ_stack_5,"");
   met_rebin4_stack->Draw("same hist");
   Double_t xAxis8[5] = {0, 33.02447, 46.65263, 62.54967, 380}; 
   
   TH1D *met_rebin4_total__2 = new TH1D("met_rebin4_total__2","dummy",4, xAxis8);
   met_rebin4_total__2->SetBinContent(1,267.2717);
   met_rebin4_total__2->SetBinContent(2,1062.533);
   met_rebin4_total__2->SetBinContent(3,875.9965);
   met_rebin4_total__2->SetBinContent(4,1178.446);
   met_rebin4_total__2->SetBinError(1,16.99623);
   met_rebin4_total__2->SetBinError(2,26.53566);
   met_rebin4_total__2->SetBinError(3,18.92386);
   met_rebin4_total__2->SetBinError(4,18.58262);
   met_rebin4_total__2->SetMinimum(0);
   met_rebin4_total__2->SetMaximum(2356.891);
   met_rebin4_total__2->SetEntries(15153);
   met_rebin4_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin4_total__2->SetFillColor(ci);
   met_rebin4_total__2->SetMarkerStyle(20);
   met_rebin4_total__2->SetMarkerSize(1.1);
   met_rebin4_total__2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin4_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin4_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin4_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin4_total__2->GetXaxis()->SetLabelSize(0.04);
   met_rebin4_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin4_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin4_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin4_total__2->GetYaxis()->SetTitle("Events");
   met_rebin4_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin4_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin4_total__2->GetYaxis()->SetLabelSize(0.04);
   met_rebin4_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin4_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin4_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin4_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin4_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin4_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin4_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin4_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin4_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin4_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin4_total_errors_fx3001[4] = {
   16.51224,
   39.83855,
   54.60115,
   221.2748};
   Double_t met_rebin4_total_errors_fy3001[4] = {
   267.2717,
   1062.533,
   875.9965,
   1178.446};
   Double_t met_rebin4_total_errors_felx3001[4] = {
   16.51224,
   6.814077,
   7.948523,
   158.7252};
   Double_t met_rebin4_total_errors_fely3001[4] = {
   26.00414,
   61.75106,
   50.9541,
   103.1855};
   Double_t met_rebin4_total_errors_fehx3001[4] = {
   16.51224,
   6.814077,
   7.948523,
   158.7252};
   Double_t met_rebin4_total_errors_fehy3001[4] = {
   16.16356,
   65.33652,
   54.503,
   111.9533};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,met_rebin4_total_errors_fx3001,met_rebin4_total_errors_fy3001,met_rebin4_total_errors_felx3001,met_rebin4_total_errors_fehx3001,met_rebin4_total_errors_fely3001,met_rebin4_total_errors_fehy3001);
   grae->SetName("met_rebin4_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin4_total_errors3001 = new TH1F("Graph_met_rebin4_total_errors3001","Graph",100,0,418);
   Graph_met_rebin4_total_errors3001->SetMinimum(136.3544);
   Graph_met_rebin4_total_errors3001->SetMaximum(1395.312);
   Graph_met_rebin4_total_errors3001->SetDirectory(0);
   Graph_met_rebin4_total_errors3001->SetStats(0);
   Graph_met_rebin4_total_errors3001->SetLineStyle(0);
   Graph_met_rebin4_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin4_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin4_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin4_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin4_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin4_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin4_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin4_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin4_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin4_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin4_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin4_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin4_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin4_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin4_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin4_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin4_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin4_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin4_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin4_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin4_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin4_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin4_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin4_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin4_total_errors","Total unc.","F");
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
   met_rebin4_canvas->Modified();
   met_rebin4_canvas->cd();
   met_rebin4_canvas->SetSelected(met_rebin4_canvas);
}
