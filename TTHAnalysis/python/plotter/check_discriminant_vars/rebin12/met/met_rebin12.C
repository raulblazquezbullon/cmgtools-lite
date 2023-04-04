void met_rebin12()
{
//=========Macro generated from canvas: met_rebin12_canvas/met_rebin12
//=========  (Tue Apr  4 21:28:05 2023) by ROOT version 6.24/07
   TCanvas *met_rebin12_canvas = new TCanvas("met_rebin12_canvas", "met_rebin12",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin12_canvas->SetHighLightColor(2);
   met_rebin12_canvas->Range(-87.69231,-134.2583,399.4872,898.4981);
   met_rebin12_canvas->SetFillColor(0);
   met_rebin12_canvas->SetBorderMode(0);
   met_rebin12_canvas->SetBorderSize(2);
   met_rebin12_canvas->SetTickx(1);
   met_rebin12_canvas->SetTicky(1);
   met_rebin12_canvas->SetLeftMargin(0.18);
   met_rebin12_canvas->SetRightMargin(0.04);
   met_rebin12_canvas->SetTopMargin(0.06);
   met_rebin12_canvas->SetBottomMargin(0.13);
   met_rebin12_canvas->SetFrameFillStyle(0);
   met_rebin12_canvas->SetFrameBorderMode(0);
   met_rebin12_canvas->SetFrameFillStyle(0);
   met_rebin12_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[13] = {0, 24.34149, 28.68298, 33.02447, 37.36596, 41.87785, 46.65263, 51.42739, 56.20217, 62.54967, 75.01117, 98.15121, 380}; 
   
   TH1D *met_rebin12_total__1 = new TH1D("met_rebin12_total__1","dummy",12, xAxis1);
   met_rebin12_total__1->SetBinContent(3,267.2717);
   met_rebin12_total__1->SetBinContent(4,342.0387);
   met_rebin12_total__1->SetBinContent(5,377.5641);
   met_rebin12_total__1->SetBinContent(6,342.9305);
   met_rebin12_total__1->SetBinContent(7,311.6057);
   met_rebin12_total__1->SetBinContent(8,266.8292);
   met_rebin12_total__1->SetBinContent(9,297.5616);
   met_rebin12_total__1->SetBinContent(10,418.2664);
   met_rebin12_total__1->SetBinContent(11,384.9617);
   met_rebin12_total__1->SetBinContent(12,375.2175);
   met_rebin12_total__1->SetBinError(3,16.99623);
   met_rebin12_total__1->SetBinError(4,13.78223);
   met_rebin12_total__1->SetBinError(5,18.04197);
   met_rebin12_total__1->SetBinError(6,13.73604);
   met_rebin12_total__1->SetBinError(7,12.33323);
   met_rebin12_total__1->SetBinError(8,10.69311);
   met_rebin12_total__1->SetBinError(9,9.573987);
   met_rebin12_total__1->SetBinError(10,12.00975);
   met_rebin12_total__1->SetBinError(11,10.41848);
   met_rebin12_total__1->SetBinError(12,9.619512);
   met_rebin12_total__1->SetMinimum(0);
   met_rebin12_total__1->SetMaximum(836.5327);
   met_rebin12_total__1->SetEntries(15153);
   met_rebin12_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin12_total__1->SetFillColor(ci);
   met_rebin12_total__1->SetMarkerStyle(20);
   met_rebin12_total__1->SetMarkerSize(1.1);
   met_rebin12_total__1->GetXaxis()->SetTitle("met");
   met_rebin12_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin12_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin12_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin12_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin12_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin12_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin12_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin12_total__1->GetYaxis()->SetTitle("Events");
   met_rebin12_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin12_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin12_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin12_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin12_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin12_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin12_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin12_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin12_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin12_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin12_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin12_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin12_total__1->Draw("HIST");
   
   THStack *met_rebin12_stack = new THStack();
   met_rebin12_stack->SetName("met_rebin12_stack");
   met_rebin12_stack->SetTitle("met_rebin12");
   Double_t xAxis2[13] = {0, 24.34149, 28.68298, 33.02447, 37.36596, 41.87785, 46.65263, 51.42739, 56.20217, 62.54967, 75.01117, 98.15121, 380}; 
   
   TH1F *met_rebin12_stack_stack_1 = new TH1F("met_rebin12_stack_stack_1","met_rebin12",12, xAxis2);
   met_rebin12_stack_stack_1->SetMinimum(0);
   met_rebin12_stack_stack_1->SetMaximum(439.1797);
   met_rebin12_stack_stack_1->SetDirectory(0);
   met_rebin12_stack_stack_1->SetStats(0);
   met_rebin12_stack_stack_1->SetLineStyle(0);
   met_rebin12_stack_stack_1->SetMarkerStyle(20);
   met_rebin12_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin12_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin12_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin12_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin12_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin12_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin12_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin12_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin12_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin12_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin12_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin12_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin12_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin12_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin12_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin12_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin12_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin12_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin12_stack->SetHistogram(met_rebin12_stack_stack_1);
   
   Double_t xAxis3[13] = {0, 24.34149, 28.68298, 33.02447, 37.36596, 41.87785, 46.65263, 51.42739, 56.20217, 62.54967, 75.01117, 98.15121, 380}; 
   
   TH1D *met_rebin12_fakes_VV_stack_1 = new TH1D("met_rebin12_fakes_VV_stack_1","dummy",12, xAxis3);
   met_rebin12_fakes_VV_stack_1->SetBinContent(6,0.2199288);
   met_rebin12_fakes_VV_stack_1->SetBinContent(8,0.2199288);
   met_rebin12_fakes_VV_stack_1->SetBinContent(9,0.6597863);
   met_rebin12_fakes_VV_stack_1->SetBinContent(12,0.4398576);
   met_rebin12_fakes_VV_stack_1->SetBinError(6,0.2199288);
   met_rebin12_fakes_VV_stack_1->SetBinError(8,0.2199288);
   met_rebin12_fakes_VV_stack_1->SetBinError(9,0.3809278);
   met_rebin12_fakes_VV_stack_1->SetBinError(12,0.3110263);
   met_rebin12_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin12_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin12_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin12_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin12_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin12_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin12_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin12_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin12_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin12_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin12_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin12_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin12_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin12_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin12_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin12_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin12_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin12_stack->Add(met_rebin12_fakes_VV_stack_1,"");
   Double_t xAxis4[13] = {0, 24.34149, 28.68298, 33.02447, 37.36596, 41.87785, 46.65263, 51.42739, 56.20217, 62.54967, 75.01117, 98.15121, 380}; 
   
   TH1D *met_rebin12_fakes_TT_stack_2 = new TH1D("met_rebin12_fakes_TT_stack_2","dummy",12, xAxis4);
   met_rebin12_fakes_TT_stack_2->SetBinContent(3,3.912035);
   met_rebin12_fakes_TT_stack_2->SetBinContent(4,7.222218);
   met_rebin12_fakes_TT_stack_2->SetBinContent(5,7.372681);
   met_rebin12_fakes_TT_stack_2->SetBinContent(6,7.175061);
   met_rebin12_fakes_TT_stack_2->SetBinContent(7,6.874135);
   met_rebin12_fakes_TT_stack_2->SetBinContent(8,8.124995);
   met_rebin12_fakes_TT_stack_2->SetBinContent(9,12.44126);
   met_rebin12_fakes_TT_stack_2->SetBinContent(10,19.21209);
   met_rebin12_fakes_TT_stack_2->SetBinContent(11,23.97975);
   met_rebin12_fakes_TT_stack_2->SetBinContent(12,28.0894);
   met_rebin12_fakes_TT_stack_2->SetBinError(3,0.7672131);
   met_rebin12_fakes_TT_stack_2->SetBinError(4,1.042437);
   met_rebin12_fakes_TT_stack_2->SetBinError(5,1.05324);
   met_rebin12_fakes_TT_stack_2->SetBinError(6,1.051568);
   met_rebin12_fakes_TT_stack_2->SetBinError(7,1.029815);
   met_rebin12_fakes_TT_stack_2->SetBinError(8,1.105672);
   met_rebin12_fakes_TT_stack_2->SetBinError(9,1.41022);
   met_rebin12_fakes_TT_stack_2->SetBinError(10,1.7079);
   met_rebin12_fakes_TT_stack_2->SetBinError(11,1.925038);
   met_rebin12_fakes_TT_stack_2->SetBinError(12,2.084031);
   met_rebin12_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin12_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin12_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin12_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin12_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin12_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin12_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin12_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin12_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin12_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin12_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin12_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin12_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin12_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin12_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin12_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin12_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin12_stack->Add(met_rebin12_fakes_TT_stack_2,"");
   Double_t xAxis5[13] = {0, 24.34149, 28.68298, 33.02447, 37.36596, 41.87785, 46.65263, 51.42739, 56.20217, 62.54967, 75.01117, 98.15121, 380}; 
   
   TH1D *met_rebin12_fakes_DY_stack_3 = new TH1D("met_rebin12_fakes_DY_stack_3","dummy",12, xAxis5);
   met_rebin12_fakes_DY_stack_3->SetBinContent(3,62.25484);
   met_rebin12_fakes_DY_stack_3->SetBinContent(4,31.12742);
   met_rebin12_fakes_DY_stack_3->SetBinContent(5,66.14577);
   met_rebin12_fakes_DY_stack_3->SetBinContent(6,31.12742);
   met_rebin12_fakes_DY_stack_3->SetBinContent(7,23.34557);
   met_rebin12_fakes_DY_stack_3->SetBinContent(8,15.56371);
   met_rebin12_fakes_DY_stack_3->SetBinContent(9,7.781856);
   met_rebin12_fakes_DY_stack_3->SetBinContent(10,15.56371);
   met_rebin12_fakes_DY_stack_3->SetBinContent(11,7.781856);
   met_rebin12_fakes_DY_stack_3->SetBinContent(12,3.890928);
   met_rebin12_fakes_DY_stack_3->SetBinError(3,15.56371);
   met_rebin12_fakes_DY_stack_3->SetBinError(4,11.00521);
   met_rebin12_fakes_DY_stack_3->SetBinError(5,16.04271);
   met_rebin12_fakes_DY_stack_3->SetBinError(6,11.00521);
   met_rebin12_fakes_DY_stack_3->SetBinError(7,9.530788);
   met_rebin12_fakes_DY_stack_3->SetBinError(8,7.781856);
   met_rebin12_fakes_DY_stack_3->SetBinError(9,5.502603);
   met_rebin12_fakes_DY_stack_3->SetBinError(10,7.781856);
   met_rebin12_fakes_DY_stack_3->SetBinError(11,5.502603);
   met_rebin12_fakes_DY_stack_3->SetBinError(12,3.890928);
   met_rebin12_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin12_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin12_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin12_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin12_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin12_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin12_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin12_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin12_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin12_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin12_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin12_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin12_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin12_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin12_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin12_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin12_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin12_stack->Add(met_rebin12_fakes_DY_stack_3,"");
   Double_t xAxis6[13] = {0, 24.34149, 28.68298, 33.02447, 37.36596, 41.87785, 46.65263, 51.42739, 56.20217, 62.54967, 75.01117, 98.15121, 380}; 
   
   TH1D *met_rebin12_prompt_ZZ_stack_4 = new TH1D("met_rebin12_prompt_ZZ_stack_4","dummy",12, xAxis6);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(3,23.25064);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(4,26.57216);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(5,22.83545);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(6,19.51393);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(7,12.4557);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(8,13.28608);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(9,12.4557);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(10,10.79494);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(11,10.79494);
   met_rebin12_prompt_ZZ_stack_4->SetBinContent(12,13.28608);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(3,3.106998);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(4,3.32152);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(5,3.079132);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(6,2.8464);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(7,2.27409);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(8,2.34867);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(9,2.27409);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(10,2.117062);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(11,2.117062);
   met_rebin12_prompt_ZZ_stack_4->SetBinError(12,2.34867);
   met_rebin12_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin12_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin12_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin12_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin12_stack->Add(met_rebin12_prompt_ZZ_stack_4,"");
   Double_t xAxis7[13] = {0, 24.34149, 28.68298, 33.02447, 37.36596, 41.87785, 46.65263, 51.42739, 56.20217, 62.54967, 75.01117, 98.15121, 380}; 
   
   TH1D *met_rebin12_prompt_WZ_stack_5 = new TH1D("met_rebin12_prompt_WZ_stack_5","dummy",12, xAxis7);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(3,177.8542);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(4,277.1169);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(5,281.2102);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(6,284.8942);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(7,268.9303);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(8,229.6345);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(9,264.223);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(10,372.6956);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(11,342.4051);
   met_rebin12_prompt_WZ_stack_5->SetBinContent(12,329.5112);
   met_rebin12_prompt_WZ_stack_5->SetBinError(3,6.03329);
   met_rebin12_prompt_WZ_stack_5->SetBinError(4,7.531018);
   met_rebin12_prompt_WZ_stack_5->SetBinError(5,7.586434);
   met_rebin12_prompt_WZ_stack_5->SetBinError(6,7.635965);
   met_rebin12_prompt_WZ_stack_5->SetBinError(7,7.418943);
   met_rebin12_prompt_WZ_stack_5->SetBinError(8,6.855526);
   met_rebin12_prompt_WZ_stack_5->SetBinError(9,7.353726);
   met_rebin12_prompt_WZ_stack_5->SetBinError(10,8.733721);
   met_rebin12_prompt_WZ_stack_5->SetBinError(11,8.371288);
   met_rebin12_prompt_WZ_stack_5->SetBinError(12,8.212157);
   met_rebin12_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin12_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin12_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin12_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin12_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin12_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin12_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin12_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin12_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin12_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin12_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin12_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin12_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin12_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin12_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin12_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin12_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin12_stack->Add(met_rebin12_prompt_WZ_stack_5,"");
   met_rebin12_stack->Draw("same hist");
   Double_t xAxis8[13] = {0, 24.34149, 28.68298, 33.02447, 37.36596, 41.87785, 46.65263, 51.42739, 56.20217, 62.54967, 75.01117, 98.15121, 380}; 
   
   TH1D *met_rebin12_total__2 = new TH1D("met_rebin12_total__2","dummy",12, xAxis8);
   met_rebin12_total__2->SetBinContent(3,267.2717);
   met_rebin12_total__2->SetBinContent(4,342.0387);
   met_rebin12_total__2->SetBinContent(5,377.5641);
   met_rebin12_total__2->SetBinContent(6,342.9305);
   met_rebin12_total__2->SetBinContent(7,311.6057);
   met_rebin12_total__2->SetBinContent(8,266.8292);
   met_rebin12_total__2->SetBinContent(9,297.5616);
   met_rebin12_total__2->SetBinContent(10,418.2664);
   met_rebin12_total__2->SetBinContent(11,384.9617);
   met_rebin12_total__2->SetBinContent(12,375.2175);
   met_rebin12_total__2->SetBinError(3,16.99623);
   met_rebin12_total__2->SetBinError(4,13.78223);
   met_rebin12_total__2->SetBinError(5,18.04197);
   met_rebin12_total__2->SetBinError(6,13.73604);
   met_rebin12_total__2->SetBinError(7,12.33323);
   met_rebin12_total__2->SetBinError(8,10.69311);
   met_rebin12_total__2->SetBinError(9,9.573987);
   met_rebin12_total__2->SetBinError(10,12.00975);
   met_rebin12_total__2->SetBinError(11,10.41848);
   met_rebin12_total__2->SetBinError(12,9.619512);
   met_rebin12_total__2->SetMinimum(0);
   met_rebin12_total__2->SetMaximum(836.5327);
   met_rebin12_total__2->SetEntries(15153);
   met_rebin12_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin12_total__2->SetFillColor(ci);
   met_rebin12_total__2->SetMarkerStyle(20);
   met_rebin12_total__2->SetMarkerSize(1.1);
   met_rebin12_total__2->GetXaxis()->SetTitle("met");
   met_rebin12_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin12_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin12_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin12_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin12_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin12_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin12_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin12_total__2->GetYaxis()->SetTitle("Events");
   met_rebin12_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin12_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin12_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin12_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin12_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin12_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin12_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin12_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin12_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin12_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin12_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin12_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin12_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin12_total_errors_fx3001[10] = {
   30.85373,
   35.19522,
   39.62191,
   44.26524,
   49.04001,
   53.81478,
   59.37592,
   68.78042,
   86.58119,
   239.0756};
   Double_t met_rebin12_total_errors_fy3001[10] = {
   267.2717,
   342.0387,
   377.5641,
   342.9305,
   311.6057,
   266.8292,
   297.5616,
   418.2664,
   384.9617,
   375.2175};
   Double_t met_rebin12_total_errors_felx3001[10] = {
   2.170746,
   2.170744,
   2.255947,
   2.387386,
   2.387384,
   2.387386,
   3.173752,
   6.230749,
   11.57002,
   140.9244};
   Double_t met_rebin12_total_errors_fely3001[10] = {
   26.00414,
   20.17162,
   30.9703,
   19.52403,
   17.73897,
   17.983,
   20.75002,
   36.10841,
   29.79011,
   37.74102};
   Double_t met_rebin12_total_errors_fehx3001[10] = {
   2.170746,
   2.170744,
   2.255947,
   2.387386,
   2.387384,
   2.387386,
   3.173752,
   6.230749,
   11.57002,
   140.9244};
   Double_t met_rebin12_total_errors_fehy3001[10] = {
   16.16356,
   33.64498,
   22.76042,
   23.41968,
   21.75074,
   16.08333,
   22.7061,
   33.99831,
   39.01461,
   39.50852};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,met_rebin12_total_errors_fx3001,met_rebin12_total_errors_fy3001,met_rebin12_total_errors_felx3001,met_rebin12_total_errors_fehx3001,met_rebin12_total_errors_fely3001,met_rebin12_total_errors_fehy3001);
   grae->SetName("met_rebin12_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin12_total_errors3001 = new TH1F("Graph_met_rebin12_total_errors3001","Graph",100,0,415.1317);
   Graph_met_rebin12_total_errors3001->SetMinimum(220.1679);
   Graph_met_rebin12_total_errors3001->SetMaximum(473.3644);
   Graph_met_rebin12_total_errors3001->SetDirectory(0);
   Graph_met_rebin12_total_errors3001->SetStats(0);
   Graph_met_rebin12_total_errors3001->SetLineStyle(0);
   Graph_met_rebin12_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin12_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin12_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin12_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin12_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin12_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin12_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin12_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin12_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin12_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin12_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin12_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin12_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin12_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin12_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin12_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin12_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin12_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin12_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin12_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin12_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin12_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin12_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin12_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin12_total_errors","Total unc.","F");

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
   met_rebin12_canvas->Modified();
   met_rebin12_canvas->cd();
   met_rebin12_canvas->SetSelected(met_rebin12_canvas);
}
