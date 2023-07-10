void met_rebin7()
{
//=========Macro generated from canvas: met_rebin7_canvas/met_rebin7
//=========  (Mon Jul 10 19:10:39 2023) by ROOT version 6.24/07
   TCanvas *met_rebin7_canvas = new TCanvas("met_rebin7_canvas", "met_rebin7",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin7_canvas->SetHighLightColor(2);
   met_rebin7_canvas->Range(-87.69231,-200.9633,399.4872,1344.908);
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
   Double_t xAxis1[8] = {0, 27.45212, 34.90423, 42.59617, 50.80673, 59.0173, 78.69694, 380}; 
   
   TH1D *met_rebin7_total__1 = new TH1D("met_rebin7_total__1","dummy",7, xAxis1);
   met_rebin7_total__1->SetBinContent(2,392.4905);
   met_rebin7_total__1->SetBinContent(3,567.0959);
   met_rebin7_total__1->SetBinContent(4,525.1279);
   met_rebin7_total__1->SetBinContent(5,413.9874);
   met_rebin7_total__1->SetBinContent(6,614.7179);
   met_rebin7_total__1->SetBinContent(7,626.0779);
   met_rebin7_total__1->SetBinError(2,18.37853);
   met_rebin7_total__1->SetBinError(3,19.02408);
   met_rebin7_total__1->SetBinError(4,16.15208);
   met_rebin7_total__1->SetBinError(5,12.5842);
   met_rebin7_total__1->SetBinError(6,13.99408);
   met_rebin7_total__1->SetBinError(7,12.04464);
   met_rebin7_total__1->SetMinimum(0);
   met_rebin7_total__1->SetMaximum(1252.156);
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
   Double_t xAxis2[8] = {0, 27.45212, 34.90423, 42.59617, 50.80673, 59.0173, 78.69694, 380}; 
   
   TH1F *met_rebin7_stack_stack_1 = new TH1F("met_rebin7_stack_stack_1","met_rebin7",7, xAxis2);
   met_rebin7_stack_stack_1->SetMinimum(0);
   met_rebin7_stack_stack_1->SetMaximum(657.3818);
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
   
   Double_t xAxis3[8] = {0, 27.45212, 34.90423, 42.59617, 50.80673, 59.0173, 78.69694, 380}; 
   
   TH1D *met_rebin7_fakes_VV_stack_1 = new TH1D("met_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   met_rebin7_fakes_VV_stack_1->SetBinContent(4,0.2026171);
   met_rebin7_fakes_VV_stack_1->SetBinContent(5,0.797968);
   met_rebin7_fakes_VV_stack_1->SetBinContent(7,0.4098757);
   met_rebin7_fakes_VV_stack_1->SetBinError(4,0.2026171);
   met_rebin7_fakes_VV_stack_1->SetBinError(5,0.3990729);
   met_rebin7_fakes_VV_stack_1->SetBinError(7,0.2898299);
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
   Double_t xAxis4[8] = {0, 27.45212, 34.90423, 42.59617, 50.80673, 59.0173, 78.69694, 380}; 
   
   TH1D *met_rebin7_fakes_TT_stack_2 = new TH1D("met_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   met_rebin7_fakes_TT_stack_2->SetBinContent(2,6.061521);
   met_rebin7_fakes_TT_stack_2->SetBinContent(3,11.6954);
   met_rebin7_fakes_TT_stack_2->SetBinContent(4,12.1922);
   met_rebin7_fakes_TT_stack_2->SetBinContent(5,13.05745);
   met_rebin7_fakes_TT_stack_2->SetBinContent(6,28.74352);
   met_rebin7_fakes_TT_stack_2->SetBinContent(7,44.75852);
   met_rebin7_fakes_TT_stack_2->SetBinError(2,0.9248764);
   met_rebin7_fakes_TT_stack_2->SetBinError(3,1.284572);
   met_rebin7_fakes_TT_stack_2->SetBinError(4,1.330728);
   met_rebin7_fakes_TT_stack_2->SetBinError(5,1.354709);
   met_rebin7_fakes_TT_stack_2->SetBinError(6,2.051922);
   met_rebin7_fakes_TT_stack_2->SetBinError(7,2.544144);
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
   Double_t xAxis5[8] = {0, 27.45212, 34.90423, 42.59617, 50.80673, 59.0173, 78.69694, 380}; 
   
   TH1D *met_rebin7_fakes_DY_stack_3 = new TH1D("met_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   met_rebin7_fakes_DY_stack_3->SetBinContent(2,75.53449);
   met_rebin7_fakes_DY_stack_3->SetBinContent(3,72.20394);
   met_rebin7_fakes_DY_stack_3->SetBinContent(4,46.37778);
   met_rebin7_fakes_DY_stack_3->SetBinContent(5,22.01686);
   met_rebin7_fakes_DY_stack_3->SetBinContent(6,21.98147);
   met_rebin7_fakes_DY_stack_3->SetBinContent(7,7.058068);
   met_rebin7_fakes_DY_stack_3->SetBinError(2,16.49182);
   met_rebin7_fakes_DY_stack_3->SetBinError(3,16.15333);
   met_rebin7_fakes_DY_stack_3->SetBinError(4,12.87241);
   met_rebin7_fakes_DY_stack_3->SetBinError(5,8.990073);
   met_rebin7_fakes_DY_stack_3->SetBinError(6,8.976672);
   met_rebin7_fakes_DY_stack_3->SetBinError(7,4.991215);
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
   Double_t xAxis6[8] = {0, 27.45212, 34.90423, 42.59617, 50.80673, 59.0173, 78.69694, 380}; 
   
   TH1D *met_rebin7_prompt_ZZ_stack_4 = new TH1D("met_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(2,30.72867);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(3,39.24872);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(4,24.7809);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(5,19.32702);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(6,20.41183);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(7,19.1114);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(2,3.438088);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(3,3.889139);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(4,3.099371);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(5,2.735208);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(6,2.805159);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(7,2.731484);
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
   Double_t xAxis7[8] = {0, 27.45212, 34.90423, 42.59617, 50.80673, 59.0173, 78.69694, 380}; 
   
   TH1D *met_rebin7_prompt_WZ_stack_5 = new TH1D("met_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(2,280.1658);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(3,443.9478);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(4,441.5744);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(5,358.7881);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(6,543.5811);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(7,554.74);
   met_rebin7_prompt_WZ_stack_5->SetBinError(2,7.287965);
   met_rebin7_prompt_WZ_stack_5->SetBinError(3,9.176604);
   met_rebin7_prompt_WZ_stack_5->SetBinError(4,9.152749);
   met_rebin7_prompt_WZ_stack_5->SetBinError(5,8.250144);
   met_rebin7_prompt_WZ_stack_5->SetBinError(6,10.15747);
   met_rebin7_prompt_WZ_stack_5->SetBinError(7,10.30259);
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
   Double_t xAxis8[8] = {0, 27.45212, 34.90423, 42.59617, 50.80673, 59.0173, 78.69694, 380}; 
   
   TH1D *met_rebin7_total__2 = new TH1D("met_rebin7_total__2","dummy",7, xAxis8);
   met_rebin7_total__2->SetBinContent(2,392.4905);
   met_rebin7_total__2->SetBinContent(3,567.0959);
   met_rebin7_total__2->SetBinContent(4,525.1279);
   met_rebin7_total__2->SetBinContent(5,413.9874);
   met_rebin7_total__2->SetBinContent(6,614.7179);
   met_rebin7_total__2->SetBinContent(7,626.0779);
   met_rebin7_total__2->SetBinError(2,18.37853);
   met_rebin7_total__2->SetBinError(3,19.02408);
   met_rebin7_total__2->SetBinError(4,16.15208);
   met_rebin7_total__2->SetBinError(5,12.5842);
   met_rebin7_total__2->SetBinError(6,13.99408);
   met_rebin7_total__2->SetBinError(7,12.04464);
   met_rebin7_total__2->SetMinimum(0);
   met_rebin7_total__2->SetMaximum(1252.156);
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
   31.17817,
   38.7502,
   46.70145,
   54.91202,
   68.85712,
   229.3485};
   Double_t met_rebin7_total_errors_fy3001[6] = {
   392.4905,
   567.0959,
   525.1279,
   413.9874,
   614.7179,
   626.0779};
   Double_t met_rebin7_total_errors_felx3001[6] = {
   3.726058,
   3.845968,
   4.105282,
   4.105284,
   9.839819,
   150.6515};
   Double_t met_rebin7_total_errors_fely3001[6] = {
   49.38109,
   47.39634,
   42.37282,
   43.97727,
   49.35853,
   58.83477};
   Double_t met_rebin7_total_errors_fehx3001[6] = {
   3.726058,
   3.845968,
   4.105282,
   4.105284,
   9.839819,
   150.6515};
   Double_t met_rebin7_total_errors_fehy3001[6] = {
   37.00015,
   51.62401,
   49.74094,
   38.71585,
   57.0813,
   59.59384};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,met_rebin7_total_errors_fx3001,met_rebin7_total_errors_fy3001,met_rebin7_total_errors_felx3001,met_rebin7_total_errors_fehx3001,met_rebin7_total_errors_fely3001,met_rebin7_total_errors_fehy3001);
   grae->SetName("met_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin7_total_errors3001 = new TH1F("Graph_met_rebin7_total_errors3001","Graph",100,0,415.2548);
   Graph_met_rebin7_total_errors3001->SetMinimum(308.8532);
   Graph_met_rebin7_total_errors3001->SetMaximum(719.928);
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
