void m3l_rebin13()
{
//=========Macro generated from canvas: m3l_rebin13_canvas/m3l_rebin13
//=========  (Tue Apr  4 21:28:28 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin13_canvas = new TCanvas("m3l_rebin13_canvas", "m3l_rebin13",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin13_canvas->SetHighLightColor(2);
   m3l_rebin13_canvas->Range(-115.3846,-149.6681,525.641,1001.625);
   m3l_rebin13_canvas->SetFillColor(0);
   m3l_rebin13_canvas->SetBorderMode(0);
   m3l_rebin13_canvas->SetBorderSize(2);
   m3l_rebin13_canvas->SetTickx(1);
   m3l_rebin13_canvas->SetTicky(1);
   m3l_rebin13_canvas->SetLeftMargin(0.18);
   m3l_rebin13_canvas->SetRightMargin(0.04);
   m3l_rebin13_canvas->SetTopMargin(0.06);
   m3l_rebin13_canvas->SetBottomMargin(0.13);
   m3l_rebin13_canvas->SetFrameFillStyle(0);
   m3l_rebin13_canvas->SetFrameBorderMode(0);
   m3l_rebin13_canvas->SetFrameFillStyle(0);
   m3l_rebin13_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_total__1 = new TH1D("m3l_rebin13_total__1","dummy",13, xAxis1);
   m3l_rebin13_total__1->SetBinContent(1,27.02309);
   m3l_rebin13_total__1->SetBinContent(2,103.6186);
   m3l_rebin13_total__1->SetBinContent(3,194.5708);
   m3l_rebin13_total__1->SetBinContent(4,288.8718);
   m3l_rebin13_total__1->SetBinContent(5,280.8088);
   m3l_rebin13_total__1->SetBinContent(6,314.4116);
   m3l_rebin13_total__1->SetBinContent(7,328.035);
   m3l_rebin13_total__1->SetBinContent(8,280.378);
   m3l_rebin13_total__1->SetBinContent(9,231.4004);
   m3l_rebin13_total__1->SetBinContent(10,316.085);
   m3l_rebin13_total__1->SetBinContent(11,244.9212);
   m3l_rebin13_total__1->SetBinContent(12,307.8492);
   m3l_rebin13_total__1->SetBinContent(13,466.2737);
   m3l_rebin13_total__1->SetBinError(1,5.859145);
   m3l_rebin13_total__1->SetBinError(2,8.041767);
   m3l_rebin13_total__1->SetBinError(3,11.37998);
   m3l_rebin13_total__1->SetBinError(4,15.76927);
   m3l_rebin13_total__1->SetBinError(5,12.67179);
   m3l_rebin13_total__1->SetBinError(6,11.7639);
   m3l_rebin13_total__1->SetBinError(7,13.05162);
   m3l_rebin13_total__1->SetBinError(8,11.47195);
   m3l_rebin13_total__1->SetBinError(9,10.27675);
   m3l_rebin13_total__1->SetBinError(10,13.48384);
   m3l_rebin13_total__1->SetBinError(11,8.139225);
   m3l_rebin13_total__1->SetBinError(12,11.70103);
   m3l_rebin13_total__1->SetBinError(13,11.30335);
   m3l_rebin13_total__1->SetMinimum(0);
   m3l_rebin13_total__1->SetMaximum(932.5474);
   m3l_rebin13_total__1->SetEntries(15153);
   m3l_rebin13_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin13_total__1->SetFillColor(ci);
   m3l_rebin13_total__1->SetMarkerStyle(20);
   m3l_rebin13_total__1->SetMarkerSize(1.1);
   m3l_rebin13_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin13_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin13_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin13_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin13_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin13_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin13_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_total__1->Draw("HIST");
   
   THStack *m3l_rebin13_stack = new THStack();
   m3l_rebin13_stack->SetName("m3l_rebin13_stack");
   m3l_rebin13_stack->SetTitle("m3l_rebin13");
   Double_t xAxis2[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1F *m3l_rebin13_stack_stack_1 = new TH1F("m3l_rebin13_stack_stack_1","m3l_rebin13",13, xAxis2);
   m3l_rebin13_stack_stack_1->SetMinimum(0);
   m3l_rebin13_stack_stack_1->SetMaximum(489.5874);
   m3l_rebin13_stack_stack_1->SetDirectory(0);
   m3l_rebin13_stack_stack_1->SetStats(0);
   m3l_rebin13_stack_stack_1->SetLineStyle(0);
   m3l_rebin13_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->SetHistogram(m3l_rebin13_stack_stack_1);
   
   Double_t xAxis3[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_fakes_VV_stack_1 = new TH1D("m3l_rebin13_fakes_VV_stack_1","dummy",13, xAxis3);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(1,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(2,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(7,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(9,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(10,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(12,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(13,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(1,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(2,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(7,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(9,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(10,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(12,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(13,0.2199288);
   m3l_rebin13_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin13_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin13_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin13_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_fakes_VV_stack_1,"");
   Double_t xAxis4[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_fakes_TT_stack_2 = new TH1D("m3l_rebin13_fakes_TT_stack_2","dummy",13, xAxis4);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(1,1.203703);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(2,5.924201);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(3,7.024598);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(4,8.830152);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(5,11.43518);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(6,13.54166);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(7,12.78934);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(8,8.576383);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(9,9.629624);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(10,9.883393);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(11,11.23756);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(12,11.68895);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(13,12.63888);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(1,0.4255733);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(2,0.9714958);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(3,1.062278);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(4,1.18326);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(5,1.311705);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(6,1.427416);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(7,1.387199);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(8,1.13597);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(9,1.203703);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(10,1.230162);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(11,1.310363);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(12,1.336027);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(13,1.427416);
   m3l_rebin13_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin13_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin13_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin13_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_fakes_TT_stack_2,"");
   Double_t xAxis5[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_fakes_DY_stack_3 = new TH1D("m3l_rebin13_fakes_DY_stack_3","dummy",13, xAxis5);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(1,7.781856);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(2,11.67278);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(3,23.34557);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(4,50.58206);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(5,27.23649);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(6,19.45464);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(7,27.23649);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(8,19.45464);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(9,15.56371);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(10,31.12742);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(11,3.890928);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(12,19.45464);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(13,7.781856);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(1,5.502603);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(2,6.739285);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(3,9.530788);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(4,14.02894);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(5,10.29443);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(6,8.700379);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(7,10.29443);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(8,8.700379);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(9,7.781856);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(10,11.00521);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(11,3.890928);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(12,8.700379);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(13,5.502603);
   m3l_rebin13_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin13_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin13_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin13_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_fakes_DY_stack_3,"");
   Double_t xAxis6[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_prompt_ZZ_stack_4 = new TH1D("m3l_rebin13_prompt_ZZ_stack_4","dummy",13, xAxis6);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(1,0.8303801);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(2,3.32152);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(3,18.68355);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(4,16.6076);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(5,15.77722);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(6,14.53165);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(7,16.6076);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(8,14.11646);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(9,6.643041);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(10,13.70127);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(11,11.21013);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(12,13.28608);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(13,19.92912);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(1,0.5871674);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(2,1.174335);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(3,2.78518);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(4,2.625892);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(5,2.559403);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(6,2.456297);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(7,2.625892);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(8,2.420953);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(9,1.66076);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(10,2.385085);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(11,2.157391);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(12,2.34867);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(13,2.876521);
   m3l_rebin13_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin13_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin13_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin13_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_prompt_ZZ_stack_4,"");
   Double_t xAxis7[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_prompt_WZ_stack_5 = new TH1D("m3l_rebin13_prompt_WZ_stack_5","dummy",13, xAxis7);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(1,16.98722);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(2,82.48014);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(3,145.5171);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(4,212.852);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(5,226.3599);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(6,266.8836);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(7,271.1816);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(8,238.2305);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(9,199.3441);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(10,261.153);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(11,218.5826);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(12,263.1996);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(13,425.7039);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(1,1.86459);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(2,4.108628);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(3,5.457316);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(4,6.600259);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(5,6.806469);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(6,7.390658);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(7,7.449931);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(8,6.982659);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(9,6.387395);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(10,7.31088);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(11,6.688519);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(12,7.339472);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(13,9.334176);
   m3l_rebin13_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin13_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin13_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin13_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_prompt_WZ_stack_5,"");
   m3l_rebin13_stack->Draw("same hist");
   Double_t xAxis8[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_total__2 = new TH1D("m3l_rebin13_total__2","dummy",13, xAxis8);
   m3l_rebin13_total__2->SetBinContent(1,27.02309);
   m3l_rebin13_total__2->SetBinContent(2,103.6186);
   m3l_rebin13_total__2->SetBinContent(3,194.5708);
   m3l_rebin13_total__2->SetBinContent(4,288.8718);
   m3l_rebin13_total__2->SetBinContent(5,280.8088);
   m3l_rebin13_total__2->SetBinContent(6,314.4116);
   m3l_rebin13_total__2->SetBinContent(7,328.035);
   m3l_rebin13_total__2->SetBinContent(8,280.378);
   m3l_rebin13_total__2->SetBinContent(9,231.4004);
   m3l_rebin13_total__2->SetBinContent(10,316.085);
   m3l_rebin13_total__2->SetBinContent(11,244.9212);
   m3l_rebin13_total__2->SetBinContent(12,307.8492);
   m3l_rebin13_total__2->SetBinContent(13,466.2737);
   m3l_rebin13_total__2->SetBinError(1,5.859145);
   m3l_rebin13_total__2->SetBinError(2,8.041767);
   m3l_rebin13_total__2->SetBinError(3,11.37998);
   m3l_rebin13_total__2->SetBinError(4,15.76927);
   m3l_rebin13_total__2->SetBinError(5,12.67179);
   m3l_rebin13_total__2->SetBinError(6,11.7639);
   m3l_rebin13_total__2->SetBinError(7,13.05162);
   m3l_rebin13_total__2->SetBinError(8,11.47195);
   m3l_rebin13_total__2->SetBinError(9,10.27675);
   m3l_rebin13_total__2->SetBinError(10,13.48384);
   m3l_rebin13_total__2->SetBinError(11,8.139225);
   m3l_rebin13_total__2->SetBinError(12,11.70103);
   m3l_rebin13_total__2->SetBinError(13,11.30335);
   m3l_rebin13_total__2->SetMinimum(0);
   m3l_rebin13_total__2->SetMaximum(932.5474);
   m3l_rebin13_total__2->SetEntries(15153);
   m3l_rebin13_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin13_total__2->SetFillColor(ci);
   m3l_rebin13_total__2->SetMarkerStyle(20);
   m3l_rebin13_total__2->SetMarkerSize(1.1);
   m3l_rebin13_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin13_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin13_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin13_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin13_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin13_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin13_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin13_total_errors_fx3001[13] = {
   54.80822,
   114.4247,
   124.0411,
   133.6575,
   143.274,
   154.048,
   166.2679,
   178.7761,
   191.2843,
   208.0726,
   230.1895,
   263.7708,
   392.8847};
   Double_t m3l_rebin13_total_errors_fy3001[13] = {
   27.02309,
   103.6186,
   194.5708,
   288.8718,
   280.8088,
   314.4116,
   328.035,
   280.378,
   231.4004,
   316.085,
   244.9212,
   307.8492,
   466.2737};
   Double_t m3l_rebin13_total_errors_felx3001[13] = {
   54.80822,
   4.80822,
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_total_errors_fely3001[13] = {
   1.543574,
   10.54609,
   11.1244,
   25.51599,
   17.7321,
   22.38745,
   19.30407,
   18.3357,
   13.36067,
   18.78114,
   15.48514,
   18.9405,
   27.95105};
   Double_t m3l_rebin13_total_errors_fehx3001[13] = {
   54.80822,
   4.80822,
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_total_errors_fehy3001[13] = {
   1.685182,
   7.498137,
   13.48671,
   17.81705,
   17.5258,
   19.93484,
   20.29814,
   17.02669,
   14.65274,
   20.89108,
   16.11037,
   19.73628,
   29.20684};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,m3l_rebin13_total_errors_fx3001,m3l_rebin13_total_errors_fy3001,m3l_rebin13_total_errors_felx3001,m3l_rebin13_total_errors_fehx3001,m3l_rebin13_total_errors_fely3001,m3l_rebin13_total_errors_fehy3001);
   grae->SetName("m3l_rebin13_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin13_total_errors3001 = new TH1F("Graph_m3l_rebin13_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin13_total_errors3001->SetMinimum(22.93157);
   Graph_m3l_rebin13_total_errors3001->SetMaximum(542.4807);
   Graph_m3l_rebin13_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin13_total_errors3001->SetStats(0);
   Graph_m3l_rebin13_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin13_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin13_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin13_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin13_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin13_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin13_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin13_total_errors","Total unc.","F");

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
   m3l_rebin13_canvas->Modified();
   m3l_rebin13_canvas->cd();
   m3l_rebin13_canvas->SetSelected(m3l_rebin13_canvas);
}
