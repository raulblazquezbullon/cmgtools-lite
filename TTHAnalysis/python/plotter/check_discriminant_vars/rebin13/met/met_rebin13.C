void met_rebin13()
{
//=========Macro generated from canvas: met_rebin13_canvas/met_rebin13
//=========  (Tue Apr  4 21:29:06 2023) by ROOT version 6.24/07
   TCanvas *met_rebin13_canvas = new TCanvas("met_rebin13_canvas", "met_rebin13",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin13_canvas->SetHighLightColor(2);
   met_rebin13_canvas->Range(-87.69231,-117.3737,399.4872,785.5012);
   met_rebin13_canvas->SetFillColor(0);
   met_rebin13_canvas->SetBorderMode(0);
   met_rebin13_canvas->SetBorderSize(2);
   met_rebin13_canvas->SetTickx(1);
   met_rebin13_canvas->SetTicky(1);
   met_rebin13_canvas->SetLeftMargin(0.18);
   met_rebin13_canvas->SetRightMargin(0.04);
   met_rebin13_canvas->SetTopMargin(0.06);
   met_rebin13_canvas->SetBottomMargin(0.13);
   met_rebin13_canvas->SetFrameFillStyle(0);
   met_rebin13_canvas->SetFrameBorderMode(0);
   met_rebin13_canvas->SetFrameFillStyle(0);
   met_rebin13_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[14] = {0, 24.00753, 28.01506, 32.02259, 36.03012, 40.0414, 44.44888, 48.85637, 53.26385, 57.67133, 65.42541, 76.92833, 100.6686, 380}; 
   
   TH1D *met_rebin13_total__1 = new TH1D("met_rebin13_total__1","dummy",13, xAxis1);
   met_rebin13_total__1->SetBinContent(3,176.2033);
   met_rebin13_total__1->SetBinContent(4,334.2371);
   met_rebin13_total__1->SetBinContent(5,334.8747);
   met_rebin13_total__1->SetBinContent(6,324.4688);
   met_rebin13_total__1->SetBinContent(7,310.0748);
   met_rebin13_total__1->SetBinContent(8,261.2323);
   met_rebin13_total__1->SetBinContent(9,247.8726);
   met_rebin13_total__1->SetBinContent(10,334.7192);
   met_rebin13_total__1->SetBinContent(11,349.1747);
   met_rebin13_total__1->SetBinContent(12,365.6643);
   met_rebin13_total__1->SetBinContent(13,345.7252);
   met_rebin13_total__1->SetBinError(3,13.51281);
   met_rebin13_total__1->SetBinError(4,16.12569);
   met_rebin13_total__1->SetBinError(5,15.64481);
   met_rebin13_total__1->SetBinError(6,14.61815);
   met_rebin13_total__1->SetBinError(7,12.91574);
   met_rebin13_total__1->SetBinError(8,11.27414);
   met_rebin13_total__1->SetBinError(9,9.775132);
   met_rebin13_total__1->SetBinError(10,9.972373);
   met_rebin13_total__1->SetBinError(11,11.40241);
   met_rebin13_total__1->SetBinError(12,9.483673);
   met_rebin13_total__1->SetBinError(13,9.299234);
   met_rebin13_total__1->SetMinimum(0);
   met_rebin13_total__1->SetMaximum(731.3287);
   met_rebin13_total__1->SetEntries(15153);
   met_rebin13_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin13_total__1->SetFillColor(ci);
   met_rebin13_total__1->SetMarkerStyle(20);
   met_rebin13_total__1->SetMarkerSize(1.1);
   met_rebin13_total__1->GetXaxis()->SetTitle("met");
   met_rebin13_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin13_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin13_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin13_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin13_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin13_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin13_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin13_total__1->GetYaxis()->SetTitle("Events");
   met_rebin13_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin13_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin13_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin13_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin13_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin13_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin13_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin13_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin13_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin13_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin13_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin13_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin13_total__1->Draw("HIST");
   
   THStack *met_rebin13_stack = new THStack();
   met_rebin13_stack->SetName("met_rebin13_stack");
   met_rebin13_stack->SetTitle("met_rebin13");
   Double_t xAxis2[14] = {0, 24.00753, 28.01506, 32.02259, 36.03012, 40.0414, 44.44888, 48.85637, 53.26385, 57.67133, 65.42541, 76.92833, 100.6686, 380}; 
   
   TH1F *met_rebin13_stack_stack_1 = new TH1F("met_rebin13_stack_stack_1","met_rebin13",13, xAxis2);
   met_rebin13_stack_stack_1->SetMinimum(0);
   met_rebin13_stack_stack_1->SetMaximum(383.9475);
   met_rebin13_stack_stack_1->SetDirectory(0);
   met_rebin13_stack_stack_1->SetStats(0);
   met_rebin13_stack_stack_1->SetLineStyle(0);
   met_rebin13_stack_stack_1->SetMarkerStyle(20);
   met_rebin13_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin13_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin13_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin13_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin13_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin13_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin13_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin13_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin13_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin13_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin13_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin13_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin13_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin13_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin13_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin13_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin13_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin13_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin13_stack->SetHistogram(met_rebin13_stack_stack_1);
   
   Double_t xAxis3[14] = {0, 24.00753, 28.01506, 32.02259, 36.03012, 40.0414, 44.44888, 48.85637, 53.26385, 57.67133, 65.42541, 76.92833, 100.6686, 380}; 
   
   TH1D *met_rebin13_fakes_VV_stack_1 = new TH1D("met_rebin13_fakes_VV_stack_1","dummy",13, xAxis3);
   met_rebin13_fakes_VV_stack_1->SetBinContent(7,0.2199288);
   met_rebin13_fakes_VV_stack_1->SetBinContent(9,0.6597863);
   met_rebin13_fakes_VV_stack_1->SetBinContent(10,0.2199288);
   met_rebin13_fakes_VV_stack_1->SetBinContent(12,0.2199288);
   met_rebin13_fakes_VV_stack_1->SetBinContent(13,0.2199288);
   met_rebin13_fakes_VV_stack_1->SetBinError(7,0.2199288);
   met_rebin13_fakes_VV_stack_1->SetBinError(9,0.3809278);
   met_rebin13_fakes_VV_stack_1->SetBinError(10,0.2199288);
   met_rebin13_fakes_VV_stack_1->SetBinError(12,0.2199288);
   met_rebin13_fakes_VV_stack_1->SetBinError(13,0.2199288);
   met_rebin13_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin13_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin13_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin13_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin13_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin13_stack->Add(met_rebin13_fakes_VV_stack_1,"");
   Double_t xAxis4[14] = {0, 24.00753, 28.01506, 32.02259, 36.03012, 40.0414, 44.44888, 48.85637, 53.26385, 57.67133, 65.42541, 76.92833, 100.6686, 380}; 
   
   TH1D *met_rebin13_fakes_TT_stack_2 = new TH1D("met_rebin13_fakes_TT_stack_2","dummy",13, xAxis4);
   met_rebin13_fakes_TT_stack_2->SetBinContent(3,2.407406);
   met_rebin13_fakes_TT_stack_2->SetBinContent(4,6.168978);
   met_rebin13_fakes_TT_stack_2->SetBinContent(5,6.469903);
   met_rebin13_fakes_TT_stack_2->SetBinContent(6,6.31944);
   met_rebin13_fakes_TT_stack_2->SetBinContent(7,7.325524);
   met_rebin13_fakes_TT_stack_2->SetBinContent(8,6.874135);
   met_rebin13_fakes_TT_stack_2->SetBinContent(9,9.027772);
   met_rebin13_fakes_TT_stack_2->SetBinContent(10,13.79543);
   met_rebin13_fakes_TT_stack_2->SetBinContent(11,16.65422);
   met_rebin13_fakes_TT_stack_2->SetBinContent(12,24.13021);
   met_rebin13_fakes_TT_stack_2->SetBinContent(13,25.23061);
   met_rebin13_fakes_TT_stack_2->SetBinError(3,0.6018515);
   met_rebin13_fakes_TT_stack_2->SetBinError(4,0.9634324);
   met_rebin13_fakes_TT_stack_2->SetBinError(5,0.986651);
   met_rebin13_fakes_TT_stack_2->SetBinError(6,0.9751108);
   met_rebin13_fakes_TT_stack_2->SetBinError(7,1.062278);
   met_rebin13_fakes_TT_stack_2->SetBinError(8,1.029815);
   met_rebin13_fakes_TT_stack_2->SetBinError(9,1.16548);
   met_rebin13_fakes_TT_stack_2->SetBinError(10,1.4807);
   met_rebin13_fakes_TT_stack_2->SetBinError(11,1.605408);
   met_rebin13_fakes_TT_stack_2->SetBinError(12,1.919149);
   met_rebin13_fakes_TT_stack_2->SetBinError(13,1.978141);
   met_rebin13_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin13_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin13_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin13_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin13_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin13_stack->Add(met_rebin13_fakes_TT_stack_2,"");
   Double_t xAxis5[14] = {0, 24.00753, 28.01506, 32.02259, 36.03012, 40.0414, 44.44888, 48.85637, 53.26385, 57.67133, 65.42541, 76.92833, 100.6686, 380}; 
   
   TH1D *met_rebin13_fakes_DY_stack_3 = new TH1D("met_rebin13_fakes_DY_stack_3","dummy",13, xAxis5);
   met_rebin13_fakes_DY_stack_3->SetBinContent(3,38.90928);
   met_rebin13_fakes_DY_stack_3->SetBinContent(4,50.58206);
   met_rebin13_fakes_DY_stack_3->SetBinContent(5,46.69113);
   met_rebin13_fakes_DY_stack_3->SetBinContent(6,38.90928);
   met_rebin13_fakes_DY_stack_3->SetBinContent(7,27.23649);
   met_rebin13_fakes_DY_stack_3->SetBinContent(8,19.45464);
   met_rebin13_fakes_DY_stack_3->SetBinContent(9,11.67278);
   met_rebin13_fakes_DY_stack_3->SetBinContent(10,7.781856);
   met_rebin13_fakes_DY_stack_3->SetBinContent(11,15.56371);
   met_rebin13_fakes_DY_stack_3->SetBinContent(12,3.890928);
   met_rebin13_fakes_DY_stack_3->SetBinContent(13,3.890928);
   met_rebin13_fakes_DY_stack_3->SetBinError(3,12.30419);
   met_rebin13_fakes_DY_stack_3->SetBinError(4,14.02894);
   met_rebin13_fakes_DY_stack_3->SetBinError(5,13.47857);
   met_rebin13_fakes_DY_stack_3->SetBinError(6,12.30419);
   met_rebin13_fakes_DY_stack_3->SetBinError(7,10.29443);
   met_rebin13_fakes_DY_stack_3->SetBinError(8,8.700379);
   met_rebin13_fakes_DY_stack_3->SetBinError(9,6.739285);
   met_rebin13_fakes_DY_stack_3->SetBinError(10,5.502603);
   met_rebin13_fakes_DY_stack_3->SetBinError(11,7.781856);
   met_rebin13_fakes_DY_stack_3->SetBinError(12,3.890928);
   met_rebin13_fakes_DY_stack_3->SetBinError(13,3.890928);
   met_rebin13_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin13_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin13_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin13_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin13_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin13_stack->Add(met_rebin13_fakes_DY_stack_3,"");
   Double_t xAxis6[14] = {0, 24.00753, 28.01506, 32.02259, 36.03012, 40.0414, 44.44888, 48.85637, 53.26385, 57.67133, 65.42541, 76.92833, 100.6686, 380}; 
   
   TH1D *met_rebin13_prompt_ZZ_stack_4 = new TH1D("met_rebin13_prompt_ZZ_stack_4","dummy",13, xAxis6);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(3,15.36203);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(4,26.15697);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(5,21.17469);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(6,19.92912);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(7,15.77722);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(8,10.79494);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(9,10.79494);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(10,13.70127);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(11,9.549371);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(12,9.549371);
   met_rebin13_prompt_ZZ_stack_4->SetBinContent(13,12.4557);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(3,2.525503);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(4,3.295469);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(5,2.96505);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(6,2.876521);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(7,2.559403);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(8,2.117062);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(9,2.117062);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(10,2.385085);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(11,1.991182);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(12,1.991182);
   met_rebin13_prompt_ZZ_stack_4->SetBinError(13,2.27409);
   met_rebin13_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin13_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin13_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin13_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin13_stack->Add(met_rebin13_prompt_ZZ_stack_4,"");
   Double_t xAxis7[14] = {0, 24.00753, 28.01506, 32.02259, 36.03012, 40.0414, 44.44888, 48.85637, 53.26385, 57.67133, 65.42541, 76.92833, 100.6686, 380}; 
   
   TH1D *met_rebin13_prompt_WZ_stack_5 = new TH1D("met_rebin13_prompt_WZ_stack_5","dummy",13, xAxis7);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(3,119.5246);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(4,251.3291);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(5,260.539);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(6,259.311);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(7,259.5157);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(8,224.1086);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(9,215.7173);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(10,299.2207);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(11,307.4074);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(12,327.8739);
   met_rebin13_prompt_WZ_stack_5->SetBinContent(13,303.928);
   met_rebin13_prompt_WZ_stack_5->SetBinError(3,4.945962);
   met_rebin13_prompt_WZ_stack_5->SetBinError(4,7.172053);
   met_rebin13_prompt_WZ_stack_5->SetBinError(5,7.302281);
   met_rebin13_prompt_WZ_stack_5->SetBinError(6,7.285052);
   met_rebin13_prompt_WZ_stack_5->SetBinError(7,7.287926);
   met_rebin13_prompt_WZ_stack_5->SetBinError(8,6.772537);
   met_rebin13_prompt_WZ_stack_5->SetBinError(9,6.644536);
   met_rebin13_prompt_WZ_stack_5->SetBinError(10,7.825607);
   met_rebin13_prompt_WZ_stack_5->SetBinError(11,7.931938);
   met_rebin13_prompt_WZ_stack_5->SetBinError(12,8.191729);
   met_rebin13_prompt_WZ_stack_5->SetBinError(13,7.886922);
   met_rebin13_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin13_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin13_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin13_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin13_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin13_stack->Add(met_rebin13_prompt_WZ_stack_5,"");
   met_rebin13_stack->Draw("same hist");
   Double_t xAxis8[14] = {0, 24.00753, 28.01506, 32.02259, 36.03012, 40.0414, 44.44888, 48.85637, 53.26385, 57.67133, 65.42541, 76.92833, 100.6686, 380}; 
   
   TH1D *met_rebin13_total__2 = new TH1D("met_rebin13_total__2","dummy",13, xAxis8);
   met_rebin13_total__2->SetBinContent(3,176.2033);
   met_rebin13_total__2->SetBinContent(4,334.2371);
   met_rebin13_total__2->SetBinContent(5,334.8747);
   met_rebin13_total__2->SetBinContent(6,324.4688);
   met_rebin13_total__2->SetBinContent(7,310.0748);
   met_rebin13_total__2->SetBinContent(8,261.2323);
   met_rebin13_total__2->SetBinContent(9,247.8726);
   met_rebin13_total__2->SetBinContent(10,334.7192);
   met_rebin13_total__2->SetBinContent(11,349.1747);
   met_rebin13_total__2->SetBinContent(12,365.6643);
   met_rebin13_total__2->SetBinContent(13,345.7252);
   met_rebin13_total__2->SetBinError(3,13.51281);
   met_rebin13_total__2->SetBinError(4,16.12569);
   met_rebin13_total__2->SetBinError(5,15.64481);
   met_rebin13_total__2->SetBinError(6,14.61815);
   met_rebin13_total__2->SetBinError(7,12.91574);
   met_rebin13_total__2->SetBinError(8,11.27414);
   met_rebin13_total__2->SetBinError(9,9.775132);
   met_rebin13_total__2->SetBinError(10,9.972373);
   met_rebin13_total__2->SetBinError(11,11.40241);
   met_rebin13_total__2->SetBinError(12,9.483673);
   met_rebin13_total__2->SetBinError(13,9.299234);
   met_rebin13_total__2->SetMinimum(0);
   met_rebin13_total__2->SetMaximum(731.3287);
   met_rebin13_total__2->SetEntries(15153);
   met_rebin13_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin13_total__2->SetFillColor(ci);
   met_rebin13_total__2->SetMarkerStyle(20);
   met_rebin13_total__2->SetMarkerSize(1.1);
   met_rebin13_total__2->GetXaxis()->SetTitle("met");
   met_rebin13_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin13_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin13_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin13_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin13_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin13_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin13_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin13_total__2->GetYaxis()->SetTitle("Events");
   met_rebin13_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin13_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin13_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin13_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin13_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin13_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin13_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin13_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin13_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin13_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin13_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin13_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin13_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin13_total_errors_fx3001[11] = {
   30.01882,
   34.02635,
   38.03576,
   42.24514,
   46.65262,
   51.06011,
   55.46759,
   61.54837,
   71.17687,
   88.79846,
   240.3343};
   Double_t met_rebin13_total_errors_fy3001[11] = {
   176.2033,
   334.2371,
   334.8747,
   324.4688,
   310.0748,
   261.2323,
   247.8726,
   334.7192,
   349.1747,
   365.6643,
   345.7252};
   Double_t met_rebin13_total_errors_felx3001[11] = {
   2.003764,
   2.003765,
   2.005644,
   2.203739,
   2.203741,
   2.203741,
   2.203739,
   3.877041,
   5.751461,
   11.87013,
   139.6657};
   Double_t met_rebin13_total_errors_fely3001[11] = {
   13.97111,
   22.76819,
   32.00802,
   18.46716,
   20.87748,
   14.87316,
   21.06274,
   23.72298,
   29.34695,
   29.07221,
   34.80245};
   Double_t met_rebin13_total_errors_fehx3001[11] = {
   2.003764,
   2.003765,
   2.005644,
   2.203739,
   2.203741,
   2.203741,
   2.203739,
   3.877041,
   5.751461,
   11.87013,
   139.6657};
   Double_t met_rebin13_total_errors_fehy3001[11] = {
   10.69882,
   20.189,
   20.78547,
   23.47014,
   18.69595,
   26.64466,
   14.93068,
   30.59614,
   27.63325,
   36.35293,
   42.3358};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,met_rebin13_total_errors_fx3001,met_rebin13_total_errors_fy3001,met_rebin13_total_errors_felx3001,met_rebin13_total_errors_fehx3001,met_rebin13_total_errors_fely3001,met_rebin13_total_errors_fehy3001);
   grae->SetName("met_rebin13_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin13_total_errors3001 = new TH1F("Graph_met_rebin13_total_errors3001","Graph",100,0,415.1985);
   Graph_met_rebin13_total_errors3001->SetMinimum(138.2537);
   Graph_met_rebin13_total_errors3001->SetMaximum(425.9958);
   Graph_met_rebin13_total_errors3001->SetDirectory(0);
   Graph_met_rebin13_total_errors3001->SetStats(0);
   Graph_met_rebin13_total_errors3001->SetLineStyle(0);
   Graph_met_rebin13_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin13_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin13_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin13_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin13_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin13_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin13_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin13_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin13_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin13_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin13_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin13_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin13_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin13_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin13_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin13_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin13_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin13_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin13_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin13_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin13_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin13_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin13_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin13_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin13_total_errors","Total unc.","F");

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
   met_rebin13_canvas->Modified();
   met_rebin13_canvas->cd();
   met_rebin13_canvas->SetSelected(met_rebin13_canvas);
}
