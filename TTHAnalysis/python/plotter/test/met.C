void met()
{
//=========Macro generated from canvas: met_canvas/met
//=========  (Tue Apr  4 18:43:20 2023) by ROOT version 6.24/07
   TCanvas *met_canvas = new TCanvas("met_canvas", "met",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_canvas->SetHighLightColor(2);
   met_canvas->Range(-92.3077,-211.1427,420.5128,1413.032);
   met_canvas->SetFillColor(0);
   met_canvas->SetBorderMode(0);
   met_canvas->SetBorderSize(2);
   met_canvas->SetTickx(1);
   met_canvas->SetTicky(1);
   met_canvas->SetLeftMargin(0.18);
   met_canvas->SetRightMargin(0.04);
   met_canvas->SetTopMargin(0.06);
   met_canvas->SetBottomMargin(0.13);
   met_canvas->SetFrameFillStyle(0);
   met_canvas->SetFrameBorderMode(0);
   met_canvas->SetFrameFillStyle(0);
   met_canvas->SetFrameBorderMode(0);
   
   TH1D *met_total__3 = new TH1D("met_total__3","dummy",20,0,400);
   met_total__3->SetBinContent(2,841.8841);
   met_total__3->SetBinContent(3,1252.935);
   met_total__3->SetBinContent(4,643.3015);
   met_total__3->SetBinContent(5,290.7313);
   met_total__3->SetBinContent(6,151.5051);
   met_total__3->SetBinContent(7,77.80667);
   met_total__3->SetBinContent(8,43.8695);
   met_total__3->SetBinContent(9,24.14456);
   met_total__3->SetBinContent(10,15.22893);
   met_total__3->SetBinContent(11,12.77923);
   met_total__3->SetBinContent(12,7.819341);
   met_total__3->SetBinContent(13,5.676427);
   met_total__3->SetBinContent(14,3.370906);
   met_total__3->SetBinContent(15,3.629774);
   met_total__3->SetBinContent(16,3.274646);
   met_total__3->SetBinContent(17,1.432657);
   met_total__3->SetBinContent(18,0.8186614);
   met_total__3->SetBinContent(19,0.9691243);
   met_total__3->SetBinContent(20,3.06998);
   met_total__3->SetBinError(2,26.20329);
   met_total__3->SetBinError(3,25.02539);
   met_total__3->SetBinError(4,14.86134);
   met_total__3->SetBinError(5,8.614456);
   met_total__3->SetBinError(6,6.768451);
   met_total__3->SetBinError(7,4.03902);
   met_total__3->SetBinError(8,3.030083);
   met_total__3->SetBinError(9,2.286974);
   met_total__3->SetBinError(10,1.791674);
   met_total__3->SetBinError(11,1.629092);
   met_total__3->SetBinError(12,1.255341);
   met_total__3->SetBinError(13,1.074064);
   met_total__3->SetBinError(14,0.8207294);
   met_total__3->SetBinError(15,0.857166);
   met_total__3->SetBinError(16,0.8186614);
   met_total__3->SetBinError(17,0.5414936);
   met_total__3->SetBinError(18,0.4093307);
   met_total__3->SetBinError(19,0.4361086);
   met_total__3->SetBinError(20,0.7926655);
   met_total__3->SetMinimum(0);
   met_total__3->SetEntries(15149);
   met_total__3->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_total__3->SetFillColor(ci);
   met_total__3->SetMarkerStyle(20);
   met_total__3->SetMarkerSize(1.1);
   met_total__3->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__3->GetXaxis()->SetMoreLogLabels();
   met_total__3->GetXaxis()->SetLabelFont(42);
   met_total__3->GetXaxis()->SetLabelOffset(0.007);
   met_total__3->GetXaxis()->SetLabelSize(0.05);
   met_total__3->GetXaxis()->SetTitleSize(0.05);
   met_total__3->GetXaxis()->SetTitleOffset(1.1);
   met_total__3->GetXaxis()->SetTitleFont(42);
   met_total__3->GetYaxis()->SetTitle("Events");
   met_total__3->GetYaxis()->SetLabelFont(42);
   met_total__3->GetYaxis()->SetLabelOffset(0.007);
   met_total__3->GetYaxis()->SetLabelSize(0.05);
   met_total__3->GetYaxis()->SetTitleSize(0.05);
   met_total__3->GetYaxis()->SetTitleOffset(2);
   met_total__3->GetYaxis()->SetTitleFont(42);
   met_total__3->GetZaxis()->SetLabelFont(42);
   met_total__3->GetZaxis()->SetLabelOffset(0.007);
   met_total__3->GetZaxis()->SetLabelSize(0.05);
   met_total__3->GetZaxis()->SetTitleSize(0.06);
   met_total__3->GetZaxis()->SetTitleOffset(1);
   met_total__3->GetZaxis()->SetTitleFont(42);
   met_total__3->Draw("HIST");
   
   THStack *met_stack = new THStack();
   met_stack->SetName("met_stack");
   met_stack->SetTitle("met");
   
   TH1F *met_stack_stack_2 = new TH1F("met_stack_stack_2","met",20,0,400);
   met_stack_stack_2->SetMinimum(0);
   met_stack_stack_2->SetMaximum(1315.581);
   met_stack_stack_2->SetDirectory(0);
   met_stack_stack_2->SetStats(0);
   met_stack_stack_2->SetLineStyle(0);
   met_stack_stack_2->SetMarkerStyle(20);
   met_stack_stack_2->GetXaxis()->SetLabelFont(42);
   met_stack_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_stack_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_stack_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_stack_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_stack_stack_2->GetXaxis()->SetTitleFont(42);
   met_stack_stack_2->GetYaxis()->SetLabelFont(42);
   met_stack_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_stack_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_stack_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_stack_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_stack_stack_2->GetYaxis()->SetTitleFont(42);
   met_stack_stack_2->GetZaxis()->SetLabelFont(42);
   met_stack_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_stack_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_stack_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_stack_stack_2->GetZaxis()->SetTitleOffset(1);
   met_stack_stack_2->GetZaxis()->SetTitleFont(42);
   met_stack->SetHistogram(met_stack_stack_2);
   
   
   TH1D *met_fakes_VV_stack_1 = new TH1D("met_fakes_VV_stack_1","dummy",20,0,400);
   met_fakes_VV_stack_1->SetBinContent(3,1.099644);
   met_fakes_VV_stack_1->SetBinContent(6,0.4398576);
   met_fakes_VV_stack_1->SetBinError(3,0.4917757);
   met_fakes_VV_stack_1->SetBinError(6,0.3110263);
   met_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_fakes_VV_stack_1->SetFillColor(ci);
   met_fakes_VV_stack_1->SetMarkerStyle(0);
   met_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_VV_stack_1,"");
   
   TH1D *met_fakes_TT_stack_2 = new TH1D("met_fakes_TT_stack_2","dummy",20,0,400);
   met_fakes_TT_stack_2->SetBinContent(2,14.89582);
   met_fakes_TT_stack_2->SetBinContent(3,33.75983);
   met_fakes_TT_stack_2->SetBinContent(4,29.39641);
   met_fakes_TT_stack_2->SetBinContent(5,20.06771);
   met_fakes_TT_stack_2->SetBinContent(6,12.63888);
   met_fakes_TT_stack_2->SetBinContent(7,5.717589);
   met_fakes_TT_stack_2->SetBinContent(8,2.708332);
   met_fakes_TT_stack_2->SetBinContent(9,1.607935);
   met_fakes_TT_stack_2->SetBinContent(10,1.504629);
   met_fakes_TT_stack_2->SetBinContent(11,0.9027772);
   met_fakes_TT_stack_2->SetBinContent(12,0.4513886);
   met_fakes_TT_stack_2->SetBinContent(13,0.1504629);
   met_fakes_TT_stack_2->SetBinContent(14,0.3009257);
   met_fakes_TT_stack_2->SetBinContent(15,0.1504629);
   met_fakes_TT_stack_2->SetBinContent(19,0.1504629);
   met_fakes_TT_stack_2->SetBinError(2,1.497087);
   met_fakes_TT_stack_2->SetBinError(3,2.265399);
   met_fakes_TT_stack_2->SetBinError(4,2.147402);
   met_fakes_TT_stack_2->SetBinError(5,1.752677);
   met_fakes_TT_stack_2->SetBinError(6,1.411467);
   met_fakes_TT_stack_2->SetBinError(7,0.9275154);
   met_fakes_TT_stack_2->SetBinError(8,0.6383599);
   met_fakes_TT_stack_2->SetBinError(9,0.5178324);
   met_fakes_TT_stack_2->SetBinError(10,0.4758054);
   met_fakes_TT_stack_2->SetBinError(11,0.3685573);
   met_fakes_TT_stack_2->SetBinError(12,0.2606093);
   met_fakes_TT_stack_2->SetBinError(13,0.1504629);
   met_fakes_TT_stack_2->SetBinError(14,0.2127866);
   met_fakes_TT_stack_2->SetBinError(15,0.1504629);
   met_fakes_TT_stack_2->SetBinError(19,0.1504629);
   met_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_fakes_TT_stack_2->SetFillColor(ci);
   met_fakes_TT_stack_2->SetMarkerStyle(0);
   met_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_TT_stack_2,"");
   
   TH1D *met_fakes_DY_stack_3 = new TH1D("met_fakes_DY_stack_3","dummy",20,0,400);
   met_fakes_DY_stack_3->SetBinContent(2,136.1825);
   met_fakes_DY_stack_3->SetBinContent(3,97.27319);
   met_fakes_DY_stack_3->SetBinContent(4,23.34557);
   met_fakes_DY_stack_3->SetBinContent(5,3.890928);
   met_fakes_DY_stack_3->SetBinContent(6,3.890928);
   met_fakes_DY_stack_3->SetBinError(2,23.01904);
   met_fakes_DY_stack_3->SetBinError(3,19.45464);
   met_fakes_DY_stack_3->SetBinError(4,9.530788);
   met_fakes_DY_stack_3->SetBinError(5,3.890928);
   met_fakes_DY_stack_3->SetBinError(6,3.890928);
   met_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   met_fakes_DY_stack_3->SetFillColor(ci);
   met_fakes_DY_stack_3->SetMarkerStyle(0);
   met_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_DY_stack_3,"");
   
   TH1D *met_prompt_ZZ_stack_4 = new TH1D("met_prompt_ZZ_stack_4","dummy",20,0,400);
   met_prompt_ZZ_stack_4->SetBinContent(2,62.27851);
   met_prompt_ZZ_stack_4->SetBinContent(3,61.86332);
   met_prompt_ZZ_stack_4->SetBinContent(4,21.58988);
   met_prompt_ZZ_stack_4->SetBinContent(5,6.643041);
   met_prompt_ZZ_stack_4->SetBinContent(6,4.982281);
   met_prompt_ZZ_stack_4->SetBinContent(7,3.32152);
   met_prompt_ZZ_stack_4->SetBinContent(8,1.66076);
   met_prompt_ZZ_stack_4->SetBinContent(9,1.66076);
   met_prompt_ZZ_stack_4->SetBinContent(10,0.8303801);
   met_prompt_ZZ_stack_4->SetBinContent(11,0.4151901);
   met_prompt_ZZ_stack_4->SetBinError(2,5.085019);
   met_prompt_ZZ_stack_4->SetBinError(3,5.068041);
   met_prompt_ZZ_stack_4->SetBinError(4,2.993978);
   met_prompt_ZZ_stack_4->SetBinError(5,1.66076);
   met_prompt_ZZ_stack_4->SetBinError(6,1.438261);
   met_prompt_ZZ_stack_4->SetBinError(7,1.174335);
   met_prompt_ZZ_stack_4->SetBinError(8,0.8303801);
   met_prompt_ZZ_stack_4->SetBinError(9,0.8303801);
   met_prompt_ZZ_stack_4->SetBinError(10,0.5871674);
   met_prompt_ZZ_stack_4->SetBinError(11,0.4151901);
   met_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_prompt_ZZ_stack_4->SetFillColor(ci);
   met_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_prompt_ZZ_stack_4,"");
   
   TH1D *met_prompt_WZ_stack_5 = new TH1D("met_prompt_WZ_stack_5","dummy",20,0,400);
   met_prompt_WZ_stack_5->SetBinContent(2,628.5273);
   met_prompt_WZ_stack_5->SetBinContent(3,1058.939);
   met_prompt_WZ_stack_5->SetBinContent(4,568.9697);
   met_prompt_WZ_stack_5->SetBinContent(5,260.1297);
   met_prompt_WZ_stack_5->SetBinContent(6,129.5532);
   met_prompt_WZ_stack_5->SetBinContent(7,68.76756);
   met_prompt_WZ_stack_5->SetBinContent(8,39.50041);
   met_prompt_WZ_stack_5->SetBinContent(9,20.87587);
   met_prompt_WZ_stack_5->SetBinContent(10,12.89392);
   met_prompt_WZ_stack_5->SetBinContent(11,11.46126);
   met_prompt_WZ_stack_5->SetBinContent(12,7.367953);
   met_prompt_WZ_stack_5->SetBinContent(13,5.525965);
   met_prompt_WZ_stack_5->SetBinContent(14,3.06998);
   met_prompt_WZ_stack_5->SetBinContent(15,3.479311);
   met_prompt_WZ_stack_5->SetBinContent(16,3.274646);
   met_prompt_WZ_stack_5->SetBinContent(17,1.432657);
   met_prompt_WZ_stack_5->SetBinContent(18,0.8186614);
   met_prompt_WZ_stack_5->SetBinContent(19,0.8186614);
   met_prompt_WZ_stack_5->SetBinContent(20,3.06998);
   met_prompt_WZ_stack_5->SetBinError(2,11.34186);
   met_prompt_WZ_stack_5->SetBinError(3,14.72169);
   met_prompt_WZ_stack_5->SetBinError(4,10.79113);
   met_prompt_WZ_stack_5->SetBinError(5,7.296542);
   met_prompt_WZ_stack_5->SetBinError(6,5.149276);
   met_prompt_WZ_stack_5->SetBinError(7,3.751578);
   met_prompt_WZ_stack_5->SetBinError(8,2.843302);
   met_prompt_WZ_stack_5->SetBinError(9,2.067019);
   met_prompt_WZ_stack_5->SetBinError(10,1.624481);
   met_prompt_WZ_stack_5->SetBinError(11,1.531575);
   met_prompt_WZ_stack_5->SetBinError(12,1.227992);
   met_prompt_WZ_stack_5->SetBinError(13,1.063472);
   met_prompt_WZ_stack_5->SetBinError(14,0.7926655);
   met_prompt_WZ_stack_5->SetBinError(15,0.8438569);
   met_prompt_WZ_stack_5->SetBinError(16,0.8186614);
   met_prompt_WZ_stack_5->SetBinError(17,0.5414936);
   met_prompt_WZ_stack_5->SetBinError(18,0.4093307);
   met_prompt_WZ_stack_5->SetBinError(19,0.4093307);
   met_prompt_WZ_stack_5->SetBinError(20,0.7926655);
   met_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_prompt_WZ_stack_5->SetFillColor(ci);
   met_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_prompt_WZ_stack_5,"");
   met_stack->Draw("same hist");
   
   TH1D *met_total__4 = new TH1D("met_total__4","dummy",20,0,400);
   met_total__4->SetBinContent(2,841.8841);
   met_total__4->SetBinContent(3,1252.935);
   met_total__4->SetBinContent(4,643.3015);
   met_total__4->SetBinContent(5,290.7313);
   met_total__4->SetBinContent(6,151.5051);
   met_total__4->SetBinContent(7,77.80667);
   met_total__4->SetBinContent(8,43.8695);
   met_total__4->SetBinContent(9,24.14456);
   met_total__4->SetBinContent(10,15.22893);
   met_total__4->SetBinContent(11,12.77923);
   met_total__4->SetBinContent(12,7.819341);
   met_total__4->SetBinContent(13,5.676427);
   met_total__4->SetBinContent(14,3.370906);
   met_total__4->SetBinContent(15,3.629774);
   met_total__4->SetBinContent(16,3.274646);
   met_total__4->SetBinContent(17,1.432657);
   met_total__4->SetBinContent(18,0.8186614);
   met_total__4->SetBinContent(19,0.9691243);
   met_total__4->SetBinContent(20,3.06998);
   met_total__4->SetBinError(2,26.20329);
   met_total__4->SetBinError(3,25.02539);
   met_total__4->SetBinError(4,14.86134);
   met_total__4->SetBinError(5,8.614456);
   met_total__4->SetBinError(6,6.768451);
   met_total__4->SetBinError(7,4.03902);
   met_total__4->SetBinError(8,3.030083);
   met_total__4->SetBinError(9,2.286974);
   met_total__4->SetBinError(10,1.791674);
   met_total__4->SetBinError(11,1.629092);
   met_total__4->SetBinError(12,1.255341);
   met_total__4->SetBinError(13,1.074064);
   met_total__4->SetBinError(14,0.8207294);
   met_total__4->SetBinError(15,0.857166);
   met_total__4->SetBinError(16,0.8186614);
   met_total__4->SetBinError(17,0.5414936);
   met_total__4->SetBinError(18,0.4093307);
   met_total__4->SetBinError(19,0.4361086);
   met_total__4->SetBinError(20,0.7926655);
   met_total__4->SetMinimum(0);
   met_total__4->SetEntries(15149);
   met_total__4->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_total__4->SetFillColor(ci);
   met_total__4->SetMarkerStyle(20);
   met_total__4->SetMarkerSize(1.1);
   met_total__4->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__4->GetXaxis()->SetMoreLogLabels();
   met_total__4->GetXaxis()->SetLabelFont(42);
   met_total__4->GetXaxis()->SetLabelOffset(0.007);
   met_total__4->GetXaxis()->SetLabelSize(0.05);
   met_total__4->GetXaxis()->SetTitleSize(0.05);
   met_total__4->GetXaxis()->SetTitleOffset(1.1);
   met_total__4->GetXaxis()->SetTitleFont(42);
   met_total__4->GetYaxis()->SetTitle("Events");
   met_total__4->GetYaxis()->SetLabelFont(42);
   met_total__4->GetYaxis()->SetLabelOffset(0.007);
   met_total__4->GetYaxis()->SetLabelSize(0.05);
   met_total__4->GetYaxis()->SetTitleSize(0.05);
   met_total__4->GetYaxis()->SetTitleOffset(2);
   met_total__4->GetYaxis()->SetTitleFont(42);
   met_total__4->GetZaxis()->SetLabelFont(42);
   met_total__4->GetZaxis()->SetLabelOffset(0.007);
   met_total__4->GetZaxis()->SetLabelSize(0.05);
   met_total__4->GetZaxis()->SetTitleSize(0.06);
   met_total__4->GetZaxis()->SetTitleOffset(1);
   met_total__4->GetZaxis()->SetTitleFont(42);
   met_total__4->Draw("AXIS SAME");
   
   Double_t met_total_errors_fx3002[19] = {
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t met_total_errors_fy3002[19] = {
   841.8841,
   1252.935,
   643.3015,
   290.7313,
   151.5051,
   77.80667,
   43.8695,
   24.14456,
   15.22893,
   12.77923,
   7.819341,
   5.676427,
   3.370906,
   3.629774,
   3.274646,
   1.432657,
   0.8186614,
   0.9691243,
   3.06998};
   Double_t met_total_errors_felx3002[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fely3002[19] = {
   141.089,
   71.26672,
   53.07913,
   23.23375,
   22.46704,
   5.923963,
   4.040736,
   2.777086,
   0.8860798,
   1.929244,
   0.6536908,
   1.270541,
   0.2166206,
   0.6993969,
   1.040282,
   0.08303663,
   0.0573235,
   0.616476,
   0.1814364};
   Double_t met_total_errors_fehx3002[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fehy3002[19] = {
   50.8327,
   78.67498,
   59.14269,
   20.20286,
   20.66526,
   7.751959,
   4.593239,
   2.177481,
   1.808597,
   1.19933,
   0.9994732,
   0.4012434,
   0.9021195,
   0.2254437,
   0.2848323,
   0.2227128,
   0.4137297,
   0.2128654,
   0.1916135};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,met_total_errors_fx3002,met_total_errors_fy3002,met_total_errors_felx3002,met_total_errors_fehx3002,met_total_errors_fely3002,met_total_errors_fehy3002);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_total_errors3002 = new TH1F("Graph_met_total_errors3002","Graph",100,0,438);
   Graph_met_total_errors3002->SetMinimum(0.3173835);
   Graph_met_total_errors3002->SetMaximum(1464.735);
   Graph_met_total_errors3002->SetDirectory(0);
   Graph_met_total_errors3002->SetStats(0);
   Graph_met_total_errors3002->SetLineStyle(0);
   Graph_met_total_errors3002->SetMarkerStyle(20);
   Graph_met_total_errors3002->GetXaxis()->SetLabelFont(42);
   Graph_met_total_errors3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_total_errors3002->GetXaxis()->SetLabelSize(0.05);
   Graph_met_total_errors3002->GetXaxis()->SetTitleSize(0.06);
   Graph_met_total_errors3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_total_errors3002->GetXaxis()->SetTitleFont(42);
   Graph_met_total_errors3002->GetYaxis()->SetLabelFont(42);
   Graph_met_total_errors3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_total_errors3002->GetYaxis()->SetLabelSize(0.05);
   Graph_met_total_errors3002->GetYaxis()->SetTitleSize(0.06);
   Graph_met_total_errors3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_total_errors3002->GetYaxis()->SetTitleFont(42);
   Graph_met_total_errors3002->GetZaxis()->SetLabelFont(42);
   Graph_met_total_errors3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_total_errors3002->GetZaxis()->SetLabelSize(0.05);
   Graph_met_total_errors3002->GetZaxis()->SetTitleSize(0.06);
   Graph_met_total_errors3002->GetZaxis()->SetTitleOffset(1);
   Graph_met_total_errors3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_total_errors3002);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_total_errors","Total unc.","F");

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
   met_canvas->Modified();
   met_canvas->cd();
   met_canvas->SetSelected(met_canvas);
}
