void met_rebin8()
{
//=========Macro generated from canvas: met_rebin8_canvas/met_rebin8
//=========  (Sat May  6 16:33:14 2023) by ROOT version 6.24/07
   TCanvas *met_rebin8_canvas = new TCanvas("met_rebin8_canvas", "met_rebin8",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin8_canvas->SetHighLightColor(2);
   met_rebin8_canvas->Range(-87.69231,-189.8072,399.4872,1270.248);
   met_rebin8_canvas->SetFillColor(0);
   met_rebin8_canvas->SetBorderMode(0);
   met_rebin8_canvas->SetBorderSize(2);
   met_rebin8_canvas->SetTickx(1);
   met_rebin8_canvas->SetTicky(1);
   met_rebin8_canvas->SetLeftMargin(0.18);
   met_rebin8_canvas->SetRightMargin(0.04);
   met_rebin8_canvas->SetTopMargin(0.06);
   met_rebin8_canvas->SetBottomMargin(0.13);
   met_rebin8_canvas->SetFrameFillStyle(0);
   met_rebin8_canvas->SetFrameBorderMode(0);
   met_rebin8_canvas->SetFrameFillStyle(0);
   met_rebin8_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[9] = {0, 26.51224, 33.02447, 39.53671, 46.65263, 53.81478, 62.54967, 83.01665, 380}; 
   
   TH1D *met_rebin8_total__1 = new TH1D("met_rebin8_total__1","dummy",8, xAxis1);
   met_rebin8_total__1->SetBinContent(2,267.2717);
   met_rebin8_total__1->SetBinContent(3,534.8797);
   met_rebin8_total__1->SetBinContent(4,527.6536);
   met_rebin8_total__1->SetBinContent(5,452.0244);
   met_rebin8_total__1->SetBinContent(6,423.9721);
   met_rebin8_total__1->SetBinContent(7,591.3224);
   met_rebin8_total__1->SetBinContent(8,587.1231);
   met_rebin8_total__1->SetBinError(2,16.99623);
   met_rebin8_total__1->SetBinError(3,18.98503);
   met_rebin8_total__1->SetBinError(4,18.53942);
   met_rebin8_total__1->SetBinError(5,15.46762);
   met_rebin8_total__1->SetBinError(6,10.90253);
   met_rebin8_total__1->SetBinError(7,13.95751);
   met_rebin8_total__1->SetBinError(8,12.26791);
   met_rebin8_total__1->SetMinimum(0);
   met_rebin8_total__1->SetMaximum(1182.645);
   met_rebin8_total__1->SetEntries(15153);
   met_rebin8_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin8_total__1->SetFillColor(ci);
   met_rebin8_total__1->SetMarkerStyle(20);
   met_rebin8_total__1->SetMarkerSize(1.1);
   met_rebin8_total__1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin8_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin8_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin8_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin8_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin8_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin8_total__1->GetYaxis()->SetTitle("Events");
   met_rebin8_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin8_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin8_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin8_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin8_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin8_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin8_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin8_total__1->Draw("HIST");
   
   THStack *met_rebin8_stack = new THStack();
   met_rebin8_stack->SetName("met_rebin8_stack");
   met_rebin8_stack->SetTitle("met_rebin8");
   Double_t xAxis2[9] = {0, 26.51224, 33.02447, 39.53671, 46.65263, 53.81478, 62.54967, 83.01665, 380}; 
   
   TH1F *met_rebin8_stack_stack_1 = new TH1F("met_rebin8_stack_stack_1","met_rebin8",8, xAxis2);
   met_rebin8_stack_stack_1->SetMinimum(0);
   met_rebin8_stack_stack_1->SetMaximum(620.8886);
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
   met_rebin8_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin8_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->SetHistogram(met_rebin8_stack_stack_1);
   
   Double_t xAxis3[9] = {0, 26.51224, 33.02447, 39.53671, 46.65263, 53.81478, 62.54967, 83.01665, 380}; 
   
   TH1D *met_rebin8_fakes_VV_stack_1 = new TH1D("met_rebin8_fakes_VV_stack_1","dummy",8, xAxis3);
   met_rebin8_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   met_rebin8_fakes_VV_stack_1->SetBinContent(6,0.8797151);
   met_rebin8_fakes_VV_stack_1->SetBinContent(8,0.4398576);
   met_rebin8_fakes_VV_stack_1->SetBinError(4,0.2199288);
   met_rebin8_fakes_VV_stack_1->SetBinError(6,0.4398576);
   met_rebin8_fakes_VV_stack_1->SetBinError(8,0.3110263);
   met_rebin8_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin8_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin8_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin8_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_fakes_VV_stack_1,"");
   Double_t xAxis4[9] = {0, 26.51224, 33.02447, 39.53671, 46.65263, 53.81478, 62.54967, 83.01665, 380}; 
   
   TH1D *met_rebin8_fakes_TT_stack_2 = new TH1D("met_rebin8_fakes_TT_stack_2","dummy",8, xAxis4);
   met_rebin8_fakes_TT_stack_2->SetBinContent(2,3.912035);
   met_rebin8_fakes_TT_stack_2->SetBinContent(3,10.38194);
   met_rebin8_fakes_TT_stack_2->SetBinContent(4,11.38802);
   met_rebin8_fakes_TT_stack_2->SetBinContent(5,10.48524);
   met_rebin8_fakes_TT_stack_2->SetBinContent(6,16.95515);
   met_rebin8_fakes_TT_stack_2->SetBinContent(7,28.04224);
   met_rebin8_fakes_TT_stack_2->SetBinContent(8,43.23899);
   met_rebin8_fakes_TT_stack_2->SetBinError(2,0.7672131);
   met_rebin8_fakes_TT_stack_2->SetBinError(3,1.249838);
   met_rebin8_fakes_TT_stack_2->SetBinError(4,1.318973);
   met_rebin8_fakes_TT_stack_2->SetBinError(5,1.266434);
   met_rebin8_fakes_TT_stack_2->SetBinError(6,1.633368);
   met_rebin8_fakes_TT_stack_2->SetBinError(7,2.077745);
   met_rebin8_fakes_TT_stack_2->SetBinError(8,2.578537);
   met_rebin8_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin8_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin8_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin8_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_fakes_TT_stack_2,"");
   Double_t xAxis5[9] = {0, 26.51224, 33.02447, 39.53671, 46.65263, 53.81478, 62.54967, 83.01665, 380}; 
   
   TH1D *met_rebin8_fakes_DY_stack_3 = new TH1D("met_rebin8_fakes_DY_stack_3","dummy",8, xAxis5);
   met_rebin8_fakes_DY_stack_3->SetBinContent(2,62.25484);
   met_rebin8_fakes_DY_stack_3->SetBinContent(3,66.14577);
   met_rebin8_fakes_DY_stack_3->SetBinContent(4,62.25484);
   met_rebin8_fakes_DY_stack_3->SetBinContent(5,38.90928);
   met_rebin8_fakes_DY_stack_3->SetBinContent(6,7.781856);
   met_rebin8_fakes_DY_stack_3->SetBinContent(7,19.45464);
   met_rebin8_fakes_DY_stack_3->SetBinContent(8,7.781856);
   met_rebin8_fakes_DY_stack_3->SetBinError(2,15.56371);
   met_rebin8_fakes_DY_stack_3->SetBinError(3,16.04271);
   met_rebin8_fakes_DY_stack_3->SetBinError(4,15.56371);
   met_rebin8_fakes_DY_stack_3->SetBinError(5,12.30419);
   met_rebin8_fakes_DY_stack_3->SetBinError(6,5.502603);
   met_rebin8_fakes_DY_stack_3->SetBinError(7,8.700379);
   met_rebin8_fakes_DY_stack_3->SetBinError(8,5.502603);
   met_rebin8_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin8_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin8_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin8_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_fakes_DY_stack_3,"");
   Double_t xAxis6[9] = {0, 26.51224, 33.02447, 39.53671, 46.65263, 53.81478, 62.54967, 83.01665, 380}; 
   
   TH1D *met_rebin8_prompt_ZZ_stack_4 = new TH1D("met_rebin8_prompt_ZZ_stack_4","dummy",8, xAxis6);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(2,23.25064);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(3,36.53672);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(4,32.38482);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(5,18.26836);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(6,19.92912);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(7,16.6076);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(8,18.26836);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(2,3.106998);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(3,3.894828);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(4,3.666859);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(5,2.754059);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(6,2.876521);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(7,2.625892);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(8,2.754059);
   met_rebin8_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin8_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin8_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin8_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_prompt_ZZ_stack_4,"");
   Double_t xAxis7[9] = {0, 26.51224, 33.02447, 39.53671, 46.65263, 53.81478, 62.54967, 83.01665, 380}; 
   
   TH1D *met_rebin8_prompt_WZ_stack_5 = new TH1D("met_rebin8_prompt_WZ_stack_5","dummy",8, xAxis7);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(2,177.8542);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(3,421.8153);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(4,421.406);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(5,384.3615);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(6,378.4262);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(7,527.2179);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(8,517.394);
   met_rebin8_prompt_WZ_stack_5->SetBinError(2,6.03329);
   met_rebin8_prompt_WZ_stack_5->SetBinError(3,9.291446);
   met_rebin8_prompt_WZ_stack_5->SetBinError(4,9.286937);
   met_rebin8_prompt_WZ_stack_5->SetBinError(5,8.869357);
   met_rebin8_prompt_WZ_stack_5->SetBinError(6,8.80061);
   met_rebin8_prompt_WZ_stack_5->SetBinError(7,10.38765);
   met_rebin8_prompt_WZ_stack_5->SetBinError(8,10.29041);
   met_rebin8_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin8_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin8_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin8_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
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
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_prompt_WZ_stack_5,"");
   met_rebin8_stack->Draw("same hist");
   Double_t xAxis8[9] = {0, 26.51224, 33.02447, 39.53671, 46.65263, 53.81478, 62.54967, 83.01665, 380}; 
   
   TH1D *met_rebin8_total__2 = new TH1D("met_rebin8_total__2","dummy",8, xAxis8);
   met_rebin8_total__2->SetBinContent(2,267.2717);
   met_rebin8_total__2->SetBinContent(3,534.8797);
   met_rebin8_total__2->SetBinContent(4,527.6536);
   met_rebin8_total__2->SetBinContent(5,452.0244);
   met_rebin8_total__2->SetBinContent(6,423.9721);
   met_rebin8_total__2->SetBinContent(7,591.3224);
   met_rebin8_total__2->SetBinContent(8,587.1231);
   met_rebin8_total__2->SetBinError(2,16.99623);
   met_rebin8_total__2->SetBinError(3,18.98503);
   met_rebin8_total__2->SetBinError(4,18.53942);
   met_rebin8_total__2->SetBinError(5,15.46762);
   met_rebin8_total__2->SetBinError(6,10.90253);
   met_rebin8_total__2->SetBinError(7,13.95751);
   met_rebin8_total__2->SetBinError(8,12.26791);
   met_rebin8_total__2->SetMinimum(0);
   met_rebin8_total__2->SetMaximum(1182.645);
   met_rebin8_total__2->SetEntries(15153);
   met_rebin8_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin8_total__2->SetFillColor(ci);
   met_rebin8_total__2->SetMarkerStyle(20);
   met_rebin8_total__2->SetMarkerSize(1.1);
   met_rebin8_total__2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin8_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin8_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin8_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin8_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin8_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin8_total__2->GetYaxis()->SetTitle("Events");
   met_rebin8_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin8_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin8_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin8_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin8_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin8_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin8_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin8_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin8_total_errors_fx3001[7] = {
   29.76835,
   36.28059,
   43.09467,
   50.2337,
   58.18223,
   72.78316,
   231.5083};
   Double_t met_rebin8_total_errors_fy3001[7] = {
   267.2717,
   534.8797,
   527.6536,
   452.0244,
   423.9721,
   591.3224,
   587.1231};
   Double_t met_rebin8_total_errors_felx3001[7] = {
   3.256118,
   3.256117,
   3.557961,
   3.581078,
   4.367445,
   10.23349,
   148.4917};
   Double_t met_rebin8_total_errors_fely3001[7] = {
   26.00414,
   42.45507,
   30.03669,
   25.88458,
   27.66791,
   47.39019,
   56.11143};
   Double_t met_rebin8_total_errors_fehx3001[7] = {
   3.256118,
   3.256117,
   3.557961,
   3.581078,
   4.367445,
   10.23349,
   148.4917};
   Double_t met_rebin8_total_errors_fehy3001[7] = {
   16.16356,
   34.01913,
   36.16276,
   27.38882,
   30.46951,
   53.06276,
   59.03172};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,met_rebin8_total_errors_fx3001,met_rebin8_total_errors_fy3001,met_rebin8_total_errors_felx3001,met_rebin8_total_errors_fehx3001,met_rebin8_total_errors_fely3001,met_rebin8_total_errors_fehy3001);
   grae->SetName("met_rebin8_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin8_total_errors3001 = new TH1F("Graph_met_rebin8_total_errors3001","Graph",100,0,415.3488);
   Graph_met_rebin8_total_errors3001->SetMinimum(200.7788);
   Graph_met_rebin8_total_errors3001->SetMaximum(686.6435);
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
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin8_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin8_prompt_WZ_stack_5","WZ","F");

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
      tex = new TLatex(0.2813,0.952,"Academic");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0342);
   tex->SetLineWidth(2);
   tex->Draw();
   met_rebin8_canvas->Modified();
   met_rebin8_canvas->cd();
   met_rebin8_canvas->SetSelected(met_rebin8_canvas);
}
