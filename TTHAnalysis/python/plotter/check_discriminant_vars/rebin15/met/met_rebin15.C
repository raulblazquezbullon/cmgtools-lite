void met_rebin15()
{
//=========Macro generated from canvas: met_rebin15_canvas/met_rebin15
//=========  (Tue Apr  4 21:28:44 2023) by ROOT version 6.24/07
   TCanvas *met_rebin15_canvas = new TCanvas("met_rebin15_canvas", "met_rebin15",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin15_canvas->SetHighLightColor(2);
   met_rebin15_canvas->Range(-87.69231,-124.6119,399.4872,833.9411);
   met_rebin15_canvas->SetFillColor(0);
   met_rebin15_canvas->SetBorderMode(0);
   met_rebin15_canvas->SetBorderSize(2);
   met_rebin15_canvas->SetTickx(1);
   met_rebin15_canvas->SetTicky(1);
   met_rebin15_canvas->SetLeftMargin(0.18);
   met_rebin15_canvas->SetRightMargin(0.04);
   met_rebin15_canvas->SetTopMargin(0.06);
   met_rebin15_canvas->SetBottomMargin(0.13);
   met_rebin15_canvas->SetFrameFillStyle(0);
   met_rebin15_canvas->SetFrameBorderMode(0);
   met_rebin15_canvas->SetFrameFillStyle(0);
   met_rebin15_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[16] = {0, 23.47319, 26.94638, 30.41958, 33.89277, 37.36596, 40.9229, 44.74272, 48.56253, 52.38235, 56.20217, 60.05737, 70.02657, 79.99577, 105.862, 380}; 
   
   TH1D *met_rebin15_total__1 = new TH1D("met_rebin15_total__1","dummy",15, xAxis1);
   met_rebin15_total__1->SetBinContent(3,44.44454);
   met_rebin15_total__1->SetBinContent(4,296.7159);
   met_rebin15_total__1->SetBinContent(5,268.15);
   met_rebin15_total__1->SetBinContent(6,303.6473);
   met_rebin15_total__1->SetBinContent(7,279.7144);
   met_rebin15_total__1->SetBinContent(8,264.5601);
   met_rebin15_total__1->SetBinContent(9,236.6457);
   met_rebin15_total__1->SetBinContent(10,214.3621);
   met_rebin15_total__1->SetBinContent(11,190.78);
   met_rebin15_total__1->SetBinContent(12,388.214);
   met_rebin15_total__1->SetBinContent(13,250.8863);
   met_rebin15_total__1->SetBinContent(14,347.1243);
   met_rebin15_total__1->SetBinContent(15,299.0025);
   met_rebin15_total__1->SetBinError(3,8.182909);
   met_rebin15_total__1->SetBinError(4,16.76681);
   met_rebin15_total__1->SetBinError(5,11.43397);
   met_rebin15_total__1->SetBinError(6,16.75813);
   met_rebin15_total__1->SetBinError(7,12.67711);
   met_rebin15_total__1->SetBinError(8,11.93801);
   met_rebin15_total__1->SetBinError(9,10.39317);
   met_rebin15_total__1->SetBinError(10,9.410871);
   met_rebin15_total__1->SetBinError(11,7.381176);
   met_rebin15_total__1->SetBinError(12,12.36631);
   met_rebin15_total__1->SetBinError(13,8.177419);
   met_rebin15_total__1->SetBinError(14,9.273603);
   met_rebin15_total__1->SetBinError(15,8.757725);
   met_rebin15_total__1->SetMinimum(0);
   met_rebin15_total__1->SetMaximum(776.4279);
   met_rebin15_total__1->SetEntries(15153);
   met_rebin15_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin15_total__1->SetFillColor(ci);
   met_rebin15_total__1->SetMarkerStyle(20);
   met_rebin15_total__1->SetMarkerSize(1.1);
   met_rebin15_total__1->GetXaxis()->SetTitle("met");
   met_rebin15_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin15_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin15_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin15_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin15_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin15_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin15_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin15_total__1->GetYaxis()->SetTitle("Events");
   met_rebin15_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin15_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin15_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin15_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin15_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin15_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin15_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin15_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin15_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin15_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin15_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin15_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin15_total__1->Draw("HIST");
   
   THStack *met_rebin15_stack = new THStack();
   met_rebin15_stack->SetName("met_rebin15_stack");
   met_rebin15_stack->SetTitle("met_rebin15");
   Double_t xAxis2[16] = {0, 23.47319, 26.94638, 30.41958, 33.89277, 37.36596, 40.9229, 44.74272, 48.56253, 52.38235, 56.20217, 60.05737, 70.02657, 79.99577, 105.862, 380}; 
   
   TH1F *met_rebin15_stack_stack_1 = new TH1F("met_rebin15_stack_stack_1","met_rebin15",15, xAxis2);
   met_rebin15_stack_stack_1->SetMinimum(0);
   met_rebin15_stack_stack_1->SetMaximum(407.6247);
   met_rebin15_stack_stack_1->SetDirectory(0);
   met_rebin15_stack_stack_1->SetStats(0);
   met_rebin15_stack_stack_1->SetLineStyle(0);
   met_rebin15_stack_stack_1->SetMarkerStyle(20);
   met_rebin15_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin15_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin15_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin15_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin15_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin15_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin15_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin15_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin15_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin15_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin15_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin15_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin15_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin15_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin15_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin15_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin15_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin15_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin15_stack->SetHistogram(met_rebin15_stack_stack_1);
   
   Double_t xAxis3[16] = {0, 23.47319, 26.94638, 30.41958, 33.89277, 37.36596, 40.9229, 44.74272, 48.56253, 52.38235, 56.20217, 60.05737, 70.02657, 79.99577, 105.862, 380}; 
   
   TH1D *met_rebin15_fakes_VV_stack_1 = new TH1D("met_rebin15_fakes_VV_stack_1","dummy",15, xAxis3);
   met_rebin15_fakes_VV_stack_1->SetBinContent(8,0.2199288);
   met_rebin15_fakes_VV_stack_1->SetBinContent(10,0.2199288);
   met_rebin15_fakes_VV_stack_1->SetBinContent(11,0.6597863);
   met_rebin15_fakes_VV_stack_1->SetBinContent(14,0.2199288);
   met_rebin15_fakes_VV_stack_1->SetBinContent(15,0.2199288);
   met_rebin15_fakes_VV_stack_1->SetBinError(8,0.2199288);
   met_rebin15_fakes_VV_stack_1->SetBinError(10,0.2199288);
   met_rebin15_fakes_VV_stack_1->SetBinError(11,0.3809278);
   met_rebin15_fakes_VV_stack_1->SetBinError(14,0.2199288);
   met_rebin15_fakes_VV_stack_1->SetBinError(15,0.2199288);
   met_rebin15_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin15_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin15_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin15_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin15_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin15_stack->Add(met_rebin15_fakes_VV_stack_1,"");
   Double_t xAxis4[16] = {0, 23.47319, 26.94638, 30.41958, 33.89277, 37.36596, 40.9229, 44.74272, 48.56253, 52.38235, 56.20217, 60.05737, 70.02657, 79.99577, 105.862, 380}; 
   
   TH1D *met_rebin15_fakes_TT_stack_2 = new TH1D("met_rebin15_fakes_TT_stack_2","dummy",15, xAxis4);
   met_rebin15_fakes_TT_stack_2->SetBinContent(3,0.6018515);
   met_rebin15_fakes_TT_stack_2->SetBinContent(4,4.664349);
   met_rebin15_fakes_TT_stack_2->SetBinContent(5,5.868052);
   met_rebin15_fakes_TT_stack_2->SetBinContent(6,5.567126);
   met_rebin15_fakes_TT_stack_2->SetBinContent(7,4.814812);
   met_rebin15_fakes_TT_stack_2->SetBinContent(8,6.272284);
   met_rebin15_fakes_TT_stack_2->SetBinContent(9,6.422747);
   met_rebin15_fakes_TT_stack_2->SetBinContent(10,6.469903);
   met_rebin15_fakes_TT_stack_2->SetBinContent(11,8.275458);
   met_rebin15_fakes_TT_stack_2->SetBinContent(12,16.15568);
   met_rebin15_fakes_TT_stack_2->SetBinContent(13,12.93981);
   met_rebin15_fakes_TT_stack_2->SetBinContent(14,24.43113);
   met_rebin15_fakes_TT_stack_2->SetBinContent(15,21.92042);
   met_rebin15_fakes_TT_stack_2->SetBinError(3,0.3009257);
   met_rebin15_fakes_TT_stack_2->SetBinError(4,0.8377418);
   met_rebin15_fakes_TT_stack_2->SetBinError(5,0.9396403);
   met_rebin15_fakes_TT_stack_2->SetBinError(6,0.9152299);
   met_rebin15_fakes_TT_stack_2->SetBinError(7,0.8511465);
   met_rebin15_fakes_TT_stack_2->SetBinError(8,0.9848663);
   met_rebin15_fakes_TT_stack_2->SetBinError(9,0.9962935);
   met_rebin15_fakes_TT_stack_2->SetBinError(10,0.986651);
   met_rebin15_fakes_TT_stack_2->SetBinError(11,1.13597);
   met_rebin15_fakes_TT_stack_2->SetBinError(12,1.590138);
   met_rebin15_fakes_TT_stack_2->SetBinError(13,1.411467);
   met_rebin15_fakes_TT_stack_2->SetBinError(14,1.942598);
   met_rebin15_fakes_TT_stack_2->SetBinError(15,1.835675);
   met_rebin15_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin15_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin15_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin15_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin15_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin15_stack->Add(met_rebin15_fakes_TT_stack_2,"");
   Double_t xAxis5[16] = {0, 23.47319, 26.94638, 30.41958, 33.89277, 37.36596, 40.9229, 44.74272, 48.56253, 52.38235, 56.20217, 60.05737, 70.02657, 79.99577, 105.862, 380}; 
   
   TH1D *met_rebin15_fakes_DY_stack_3 = new TH1D("met_rebin15_fakes_DY_stack_3","dummy",15, xAxis5);
   met_rebin15_fakes_DY_stack_3->SetBinContent(3,15.56371);
   met_rebin15_fakes_DY_stack_3->SetBinContent(4,58.36392);
   met_rebin15_fakes_DY_stack_3->SetBinContent(5,19.45464);
   met_rebin15_fakes_DY_stack_3->SetBinContent(6,58.36392);
   met_rebin15_fakes_DY_stack_3->SetBinContent(7,27.23649);
   met_rebin15_fakes_DY_stack_3->SetBinContent(8,23.34557);
   met_rebin15_fakes_DY_stack_3->SetBinContent(9,15.56371);
   met_rebin15_fakes_DY_stack_3->SetBinContent(10,11.67278);
   met_rebin15_fakes_DY_stack_3->SetBinContent(11,3.890928);
   met_rebin15_fakes_DY_stack_3->SetBinContent(12,19.45464);
   met_rebin15_fakes_DY_stack_3->SetBinContent(13,3.890928);
   met_rebin15_fakes_DY_stack_3->SetBinContent(14,3.890928);
   met_rebin15_fakes_DY_stack_3->SetBinContent(15,3.890928);
   met_rebin15_fakes_DY_stack_3->SetBinError(3,7.781856);
   met_rebin15_fakes_DY_stack_3->SetBinError(4,15.0695);
   met_rebin15_fakes_DY_stack_3->SetBinError(5,8.700379);
   met_rebin15_fakes_DY_stack_3->SetBinError(6,15.0695);
   met_rebin15_fakes_DY_stack_3->SetBinError(7,10.29443);
   met_rebin15_fakes_DY_stack_3->SetBinError(8,9.530788);
   met_rebin15_fakes_DY_stack_3->SetBinError(9,7.781856);
   met_rebin15_fakes_DY_stack_3->SetBinError(10,6.739285);
   met_rebin15_fakes_DY_stack_3->SetBinError(11,3.890928);
   met_rebin15_fakes_DY_stack_3->SetBinError(12,8.700379);
   met_rebin15_fakes_DY_stack_3->SetBinError(13,3.890928);
   met_rebin15_fakes_DY_stack_3->SetBinError(14,3.890928);
   met_rebin15_fakes_DY_stack_3->SetBinError(15,3.890928);
   met_rebin15_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin15_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin15_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin15_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin15_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin15_stack->Add(met_rebin15_fakes_DY_stack_3,"");
   Double_t xAxis6[16] = {0, 23.47319, 26.94638, 30.41958, 33.89277, 37.36596, 40.9229, 44.74272, 48.56253, 52.38235, 56.20217, 60.05737, 70.02657, 79.99577, 105.862, 380}; 
   
   TH1D *met_rebin15_prompt_ZZ_stack_4 = new TH1D("met_rebin15_prompt_ZZ_stack_4","dummy",15, xAxis6);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(3,2.49114);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(4,26.15697);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(5,21.17469);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(6,18.26836);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(7,15.77722);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(8,12.4557);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(9,12.04051);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(10,9.549371);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(11,7.058231);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(12,12.04051);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(13,8.718991);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(14,8.718991);
   met_rebin15_prompt_ZZ_stack_4->SetBinContent(15,10.79494);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(3,1.017004);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(4,3.295469);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(5,2.96505);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(6,2.754059);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(7,2.559403);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(8,2.27409);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(9,2.235867);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(10,1.991182);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(11,1.711872);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(12,2.235867);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(13,1.90264);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(14,1.90264);
   met_rebin15_prompt_ZZ_stack_4->SetBinError(15,2.117062);
   met_rebin15_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin15_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin15_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin15_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin15_stack->Add(met_rebin15_prompt_ZZ_stack_4,"");
   Double_t xAxis7[16] = {0, 23.47319, 26.94638, 30.41958, 33.89277, 37.36596, 40.9229, 44.74272, 48.56253, 52.38235, 56.20217, 60.05737, 70.02657, 79.99577, 105.862, 380}; 
   
   TH1D *met_rebin15_prompt_WZ_stack_5 = new TH1D("met_rebin15_prompt_WZ_stack_5","dummy",15, xAxis7);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(3,25.78783);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(4,207.5307);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(5,221.6526);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(6,221.4479);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(7,231.8858);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(8,222.2666);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(9,202.6187);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(10,186.4501);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(11,170.8956);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(12,340.5631);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(13,225.3366);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(14,309.8633);
   met_rebin15_prompt_WZ_stack_5->SetBinContent(15,262.1763);
   met_rebin15_prompt_WZ_stack_5->SetBinError(3,2.297363);
   met_rebin15_prompt_WZ_stack_5->SetBinError(4,6.517234);
   met_rebin15_prompt_WZ_stack_5->SetBinError(5,6.735325);
   met_rebin15_prompt_WZ_stack_5->SetBinError(6,6.732215);
   met_rebin15_prompt_WZ_stack_5->SetBinError(7,6.889049);
   met_rebin15_prompt_WZ_stack_5->SetBinError(8,6.744647);
   met_rebin15_prompt_WZ_stack_5->SetBinError(9,6.439645);
   met_rebin15_prompt_WZ_stack_5->SetBinError(10,6.177369);
   met_rebin15_prompt_WZ_stack_5->SetBinError(11,5.914085);
   met_rebin15_prompt_WZ_stack_5->SetBinError(12,8.348741);
   met_rebin15_prompt_WZ_stack_5->SetBinError(13,6.791067);
   met_rebin15_prompt_WZ_stack_5->SetBinError(14,7.96356);
   met_rebin15_prompt_WZ_stack_5->SetBinError(15,7.32519);
   met_rebin15_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin15_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin15_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin15_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin15_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin15_stack->Add(met_rebin15_prompt_WZ_stack_5,"");
   met_rebin15_stack->Draw("same hist");
   Double_t xAxis8[16] = {0, 23.47319, 26.94638, 30.41958, 33.89277, 37.36596, 40.9229, 44.74272, 48.56253, 52.38235, 56.20217, 60.05737, 70.02657, 79.99577, 105.862, 380}; 
   
   TH1D *met_rebin15_total__2 = new TH1D("met_rebin15_total__2","dummy",15, xAxis8);
   met_rebin15_total__2->SetBinContent(3,44.44454);
   met_rebin15_total__2->SetBinContent(4,296.7159);
   met_rebin15_total__2->SetBinContent(5,268.15);
   met_rebin15_total__2->SetBinContent(6,303.6473);
   met_rebin15_total__2->SetBinContent(7,279.7144);
   met_rebin15_total__2->SetBinContent(8,264.5601);
   met_rebin15_total__2->SetBinContent(9,236.6457);
   met_rebin15_total__2->SetBinContent(10,214.3621);
   met_rebin15_total__2->SetBinContent(11,190.78);
   met_rebin15_total__2->SetBinContent(12,388.214);
   met_rebin15_total__2->SetBinContent(13,250.8863);
   met_rebin15_total__2->SetBinContent(14,347.1243);
   met_rebin15_total__2->SetBinContent(15,299.0025);
   met_rebin15_total__2->SetBinError(3,8.182909);
   met_rebin15_total__2->SetBinError(4,16.76681);
   met_rebin15_total__2->SetBinError(5,11.43397);
   met_rebin15_total__2->SetBinError(6,16.75813);
   met_rebin15_total__2->SetBinError(7,12.67711);
   met_rebin15_total__2->SetBinError(8,11.93801);
   met_rebin15_total__2->SetBinError(9,10.39317);
   met_rebin15_total__2->SetBinError(10,9.410871);
   met_rebin15_total__2->SetBinError(11,7.381176);
   met_rebin15_total__2->SetBinError(12,12.36631);
   met_rebin15_total__2->SetBinError(13,8.177419);
   met_rebin15_total__2->SetBinError(14,9.273603);
   met_rebin15_total__2->SetBinError(15,8.757725);
   met_rebin15_total__2->SetMinimum(0);
   met_rebin15_total__2->SetMaximum(776.4279);
   met_rebin15_total__2->SetEntries(15153);
   met_rebin15_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin15_total__2->SetFillColor(ci);
   met_rebin15_total__2->SetMarkerStyle(20);
   met_rebin15_total__2->SetMarkerSize(1.1);
   met_rebin15_total__2->GetXaxis()->SetTitle("met");
   met_rebin15_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin15_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin15_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin15_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin15_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin15_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin15_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin15_total__2->GetYaxis()->SetTitle("Events");
   met_rebin15_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin15_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin15_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin15_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin15_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin15_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin15_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin15_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin15_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin15_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin15_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin15_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin15_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin15_total_errors_fx3001[13] = {
   28.68298,
   32.15617,
   35.62936,
   39.14443,
   42.83281,
   46.65263,
   50.47244,
   54.29226,
   58.12977,
   65.04197,
   75.01117,
   92.92886,
   242.931};
   Double_t met_rebin15_total_errors_fy3001[13] = {
   44.44454,
   296.7159,
   268.15,
   303.6473,
   279.7144,
   264.5601,
   236.6457,
   214.3621,
   190.78,
   388.214,
   250.8863,
   347.1243,
   299.0025};
   Double_t met_rebin15_total_errors_felx3001[13] = {
   1.736596,
   1.736596,
   1.736595,
   1.778469,
   1.90991,
   1.909908,
   1.909908,
   1.909908,
   1.927603,
   4.9846,
   4.9846,
   12.93309,
   137.069};
   Double_t met_rebin15_total_errors_fely3001[13] = {
   8.188605,
   23.44418,
   15.75155,
   26.80751,
   15.91737,
   15.14299,
   13.85875,
   15.08808,
   12.28769,
   36.76324,
   16.10262,
   32.11874,
   28.23437};
   Double_t met_rebin15_total_errors_fehx3001[13] = {
   1.736596,
   1.736596,
   1.736595,
   1.778469,
   1.90991,
   1.909908,
   1.909908,
   1.909908,
   1.927603,
   4.9846,
   4.9846,
   12.93309,
   137.069};
   Double_t met_rebin15_total_errors_fehy3001[13] = {
   2.681392,
   18.3324,
   21.79193,
   18.30646,
   18.17689,
   16.88558,
   18.82238,
   12.91419,
   15.71006,
   28.21915,
   34.02551,
   23.63362,
   37.1727};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,met_rebin15_total_errors_fx3001,met_rebin15_total_errors_fy3001,met_rebin15_total_errors_felx3001,met_rebin15_total_errors_fehx3001,met_rebin15_total_errors_fely3001,met_rebin15_total_errors_fehy3001);
   grae->SetName("met_rebin15_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin15_total_errors3001 = new TH1F("Graph_met_rebin15_total_errors3001","Graph",100,0,415.3054);
   Graph_met_rebin15_total_errors3001->SetMinimum(32.63034);
   Graph_met_rebin15_total_errors3001->SetMaximum(454.4508);
   Graph_met_rebin15_total_errors3001->SetDirectory(0);
   Graph_met_rebin15_total_errors3001->SetStats(0);
   Graph_met_rebin15_total_errors3001->SetLineStyle(0);
   Graph_met_rebin15_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin15_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin15_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin15_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin15_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin15_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin15_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin15_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin15_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin15_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin15_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin15_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin15_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin15_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin15_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin15_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin15_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin15_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin15_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin15_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin15_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin15_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin15_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin15_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin15_total_errors","Total unc.","F");

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
   met_rebin15_canvas->Modified();
   met_rebin15_canvas->cd();
   met_rebin15_canvas->SetSelected(met_rebin15_canvas);
}
