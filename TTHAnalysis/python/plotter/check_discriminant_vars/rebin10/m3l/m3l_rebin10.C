void m3l_rebin10()
{
//=========Macro generated from canvas: m3l_rebin10_canvas/m3l_rebin10
//=========  (Sat May  6 19:56:13 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin10_canvas = new TCanvas("m3l_rebin10_canvas", "m3l_rebin10",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin10_canvas->SetHighLightColor(2);
   m3l_rebin10_canvas->Range(-115.3846,-179.8377,525.641,1203.529);
   m3l_rebin10_canvas->SetFillColor(0);
   m3l_rebin10_canvas->SetBorderMode(0);
   m3l_rebin10_canvas->SetBorderSize(2);
   m3l_rebin10_canvas->SetTickx(1);
   m3l_rebin10_canvas->SetTicky(1);
   m3l_rebin10_canvas->SetLeftMargin(0.18);
   m3l_rebin10_canvas->SetRightMargin(0.04);
   m3l_rebin10_canvas->SetTopMargin(0.06);
   m3l_rebin10_canvas->SetBottomMargin(0.13);
   m3l_rebin10_canvas->SetFrameFillStyle(0);
   m3l_rebin10_canvas->SetFrameBorderMode(0);
   m3l_rebin10_canvas->SetFrameFillStyle(0);
   m3l_rebin10_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[11] = {0, 112.4887, 124.9773, 137.466, 149.9547, 166.1852, 182.4294, 198.6736, 227.6279, 268.669, 500}; 
   
   TH1D *m3l_rebin10_total__1 = new TH1D("m3l_rebin10_total__1","dummy",10, xAxis1);
   m3l_rebin10_total__1->SetBinContent(1,44.41214);
   m3l_rebin10_total__1->SetBinContent(2,189.5104);
   m3l_rebin10_total__1->SetBinContent(3,355.1929);
   m3l_rebin10_total__1->SetBinContent(4,360.3664);
   m3l_rebin10_total__1->SetBinContent(5,434.7157);
   m3l_rebin10_total__1->SetBinContent(6,382.5233);
   m3l_rebin10_total__1->SetBinContent(7,301.0811);
   m3l_rebin10_total__1->SetBinContent(8,402.9836);
   m3l_rebin10_total__1->SetBinContent(9,353.1978);
   m3l_rebin10_total__1->SetBinContent(10,560.2636);
   m3l_rebin10_total__1->SetBinError(1,6.16523);
   m3l_rebin10_total__1->SetBinError(2,11.27846);
   m3l_rebin10_total__1->SetBinError(3,17.51306);
   m3l_rebin10_total__1->SetBinError(4,14.35327);
   m3l_rebin10_total__1->SetBinError(5,14.88048);
   m3l_rebin10_total__1->SetBinError(6,12.96031);
   m3l_rebin10_total__1->SetBinError(7,10.97384);
   m3l_rebin10_total__1->SetBinError(8,14.64555);
   m3l_rebin10_total__1->SetBinError(9,11.49825);
   m3l_rebin10_total__1->SetBinError(10,12.72702);
   m3l_rebin10_total__1->SetMinimum(0);
   m3l_rebin10_total__1->SetMaximum(1120.527);
   m3l_rebin10_total__1->SetEntries(15153);
   m3l_rebin10_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin10_total__1->SetFillColor(ci);
   m3l_rebin10_total__1->SetMarkerStyle(20);
   m3l_rebin10_total__1->SetMarkerSize(1.1);
   m3l_rebin10_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin10_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin10_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_total__1->Draw("HIST");
   
   THStack *m3l_rebin10_stack = new THStack();
   m3l_rebin10_stack->SetName("m3l_rebin10_stack");
   m3l_rebin10_stack->SetTitle("m3l_rebin10");
   Double_t xAxis2[11] = {0, 112.4887, 124.9773, 137.466, 149.9547, 166.1852, 182.4294, 198.6736, 227.6279, 268.669, 500}; 
   
   TH1F *m3l_rebin10_stack_stack_1 = new TH1F("m3l_rebin10_stack_stack_1","m3l_rebin10",10, xAxis2);
   m3l_rebin10_stack_stack_1->SetMinimum(0);
   m3l_rebin10_stack_stack_1->SetMaximum(588.2768);
   m3l_rebin10_stack_stack_1->SetDirectory(0);
   m3l_rebin10_stack_stack_1->SetStats(0);
   m3l_rebin10_stack_stack_1->SetLineStyle(0);
   m3l_rebin10_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->SetHistogram(m3l_rebin10_stack_stack_1);
   
   Double_t xAxis3[11] = {0, 112.4887, 124.9773, 137.466, 149.9547, 166.1852, 182.4294, 198.6736, 227.6279, 268.669, 500}; 
   
   TH1D *m3l_rebin10_fakes_VV_stack_1 = new TH1D("m3l_rebin10_fakes_VV_stack_1","dummy",10, xAxis3);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(1,0.4398576);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(5,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(7,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(8,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(9,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(10,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(1,0.3110263);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(5,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(7,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(8,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(9,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(10,0.2199288);
   m3l_rebin10_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin10_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin10_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin10_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_fakes_VV_stack_1,"");
   Double_t xAxis4[11] = {0, 112.4887, 124.9773, 137.466, 149.9547, 166.1852, 182.4294, 198.6736, 227.6279, 268.669, 500}; 
   
   TH1D *m3l_rebin10_fakes_TT_stack_2 = new TH1D("m3l_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(1,3.21587);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(2,7.776912);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(3,11.38802);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(4,13.99305);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(5,18.50693);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(6,12.18749);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(7,12.33796);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(8,14.24682);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(9,15.2529);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(10,15.49768);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(1,0.7323256);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(2,1.114285);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(3,1.336027);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(4,1.451011);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(5,1.668714);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(6,1.354166);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(7,1.362499);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(8,1.473035);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(9,1.532131);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(10,1.570878);
   m3l_rebin10_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin10_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin10_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin10_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_fakes_TT_stack_2,"");
   Double_t xAxis5[11] = {0, 112.4887, 124.9773, 137.466, 149.9547, 166.1852, 182.4294, 198.6736, 227.6279, 268.669, 500}; 
   
   TH1D *m3l_rebin10_fakes_DY_stack_3 = new TH1D("m3l_rebin10_fakes_DY_stack_3","dummy",10, xAxis5);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(1,7.781856);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(2,23.34557);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(3,62.25484);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(4,35.01835);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(5,35.01835);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(6,23.34557);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(7,15.56371);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(8,35.01835);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(9,15.56371);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(10,11.67278);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(1,5.502603);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(2,9.530788);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(3,15.56371);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(4,11.67278);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(5,11.67278);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(6,9.530788);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(7,7.781856);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(8,11.67278);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(9,7.781856);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(10,6.739285);
   m3l_rebin10_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin10_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin10_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin10_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_fakes_DY_stack_3,"");
   Double_t xAxis6[11] = {0, 112.4887, 124.9773, 137.466, 149.9547, 166.1852, 182.4294, 198.6736, 227.6279, 268.669, 500}; 
   
   TH1D *m3l_rebin10_prompt_ZZ_stack_4 = new TH1D("m3l_rebin10_prompt_ZZ_stack_4","dummy",10, xAxis6);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(1,1.66076);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(2,12.87089);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(3,24.08102);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(4,18.68355);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(5,20.7595);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(6,20.34431);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(7,9.964561);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(8,17.43798);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(9,15.77722);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(10,23.66583);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(1,0.8303801);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(2,2.31168);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(3,3.161993);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(4,2.78518);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(5,2.935837);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(6,2.90633);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(7,2.034008);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(8,2.690739);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(9,2.559403);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(10,3.134616);
   m3l_rebin10_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin10_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin10_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin10_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_prompt_ZZ_stack_4,"");
   Double_t xAxis7[11] = {0, 112.4887, 124.9773, 137.466, 149.9547, 166.1852, 182.4294, 198.6736, 227.6279, 268.669, 500}; 
   
   TH1D *m3l_rebin10_prompt_WZ_stack_5 = new TH1D("m3l_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(1,31.3138);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(2,145.5171);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(3,257.469);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(4,292.6715);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(5,360.211);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(6,326.6459);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(7,262.995);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(8,336.0605);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(9,306.384);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(10,509.2074);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(1,2.531571);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(2,5.457316);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(3,7.259131);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(4,7.73949);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(5,8.586193);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(6,8.176374);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(7,7.336618);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(8,8.293367);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(9,7.918724);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(10,10.20868);
   m3l_rebin10_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin10_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin10_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin10_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_prompt_WZ_stack_5,"");
   m3l_rebin10_stack->Draw("same hist");
   Double_t xAxis8[11] = {0, 112.4887, 124.9773, 137.466, 149.9547, 166.1852, 182.4294, 198.6736, 227.6279, 268.669, 500}; 
   
   TH1D *m3l_rebin10_total__2 = new TH1D("m3l_rebin10_total__2","dummy",10, xAxis8);
   m3l_rebin10_total__2->SetBinContent(1,44.41214);
   m3l_rebin10_total__2->SetBinContent(2,189.5104);
   m3l_rebin10_total__2->SetBinContent(3,355.1929);
   m3l_rebin10_total__2->SetBinContent(4,360.3664);
   m3l_rebin10_total__2->SetBinContent(5,434.7157);
   m3l_rebin10_total__2->SetBinContent(6,382.5233);
   m3l_rebin10_total__2->SetBinContent(7,301.0811);
   m3l_rebin10_total__2->SetBinContent(8,402.9836);
   m3l_rebin10_total__2->SetBinContent(9,353.1978);
   m3l_rebin10_total__2->SetBinContent(10,560.2636);
   m3l_rebin10_total__2->SetBinError(1,6.16523);
   m3l_rebin10_total__2->SetBinError(2,11.27846);
   m3l_rebin10_total__2->SetBinError(3,17.51306);
   m3l_rebin10_total__2->SetBinError(4,14.35327);
   m3l_rebin10_total__2->SetBinError(5,14.88048);
   m3l_rebin10_total__2->SetBinError(6,12.96031);
   m3l_rebin10_total__2->SetBinError(7,10.97384);
   m3l_rebin10_total__2->SetBinError(8,14.64555);
   m3l_rebin10_total__2->SetBinError(9,11.49825);
   m3l_rebin10_total__2->SetBinError(10,12.72702);
   m3l_rebin10_total__2->SetMinimum(0);
   m3l_rebin10_total__2->SetMaximum(1120.527);
   m3l_rebin10_total__2->SetEntries(15153);
   m3l_rebin10_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin10_total__2->SetFillColor(ci);
   m3l_rebin10_total__2->SetMarkerStyle(20);
   m3l_rebin10_total__2->SetMarkerSize(1.1);
   m3l_rebin10_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin10_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin10_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin10_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin10_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin10_total_errors_fx3001[10] = {
   56.24433,
   118.733,
   131.2217,
   143.7103,
   158.0699,
   174.3073,
   190.5515,
   213.1507,
   248.1485,
   384.3345};
   Double_t m3l_rebin10_total_errors_fy3001[10] = {
   44.41214,
   189.5104,
   355.1929,
   360.3664,
   434.7157,
   382.5233,
   301.0811,
   402.9836,
   353.1978,
   560.2636};
   Double_t m3l_rebin10_total_errors_felx3001[10] = {
   56.24433,
   6.244331,
   6.244331,
   6.244331,
   8.115273,
   8.122093,
   8.122086,
   14.4772,
   20.52053,
   115.6655};
   Double_t m3l_rebin10_total_errors_fely3001[10] = {
   2.543812,
   11.09697,
   31.09556,
   26.31116,
   25.96826,
   23.79211,
   17.69226,
   23.93018,
   22.21561,
   33.73409};
   Double_t m3l_rebin10_total_errors_fehx3001[10] = {
   56.24433,
   6.244331,
   6.244331,
   6.244331,
   8.115273,
   8.122093,
   8.122086,
   14.4772,
   20.52053,
   115.6655};
   Double_t m3l_rebin10_total_errors_fehy3001[10] = {
   2.80751,
   12.73392,
   22.82073,
   22.2753,
   27.54511,
   23.40715,
   18.95187,
   26.55057,
   22.78266,
   35.35213};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,m3l_rebin10_total_errors_fx3001,m3l_rebin10_total_errors_fy3001,m3l_rebin10_total_errors_felx3001,m3l_rebin10_total_errors_fehx3001,m3l_rebin10_total_errors_fely3001,m3l_rebin10_total_errors_fehy3001);
   grae->SetName("m3l_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin10_total_errors3001 = new TH1F("Graph_m3l_rebin10_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin10_total_errors3001->SetMinimum(37.6815);
   Graph_m3l_rebin10_total_errors3001->SetMaximum(650.9905);
   Graph_m3l_rebin10_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin10_total_errors3001->SetStats(0);
   Graph_m3l_rebin10_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin10_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin10_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin10_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin10_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin10_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin10_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin10_total_errors","Total unc.","F");
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
   m3l_rebin10_canvas->Modified();
   m3l_rebin10_canvas->cd();
   m3l_rebin10_canvas->SetSelected(m3l_rebin10_canvas);
}
