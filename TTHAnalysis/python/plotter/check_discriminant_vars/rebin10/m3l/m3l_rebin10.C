void m3l_rebin10()
{
//=========Macro generated from canvas: m3l_rebin10_canvas/m3l_rebin10
//=========  (Thu Jul  6 17:53:31 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin10_canvas = new TCanvas("m3l_rebin10_canvas", "m3l_rebin10",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin10_canvas->SetHighLightColor(2);
   m3l_rebin10_canvas->Range(-115.3846,-169.3457,525.641,1133.313);
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
   m3l_rebin10_total__1->SetBinContent(1,40.7177);
   m3l_rebin10_total__1->SetBinContent(2,174.4395);
   m3l_rebin10_total__1->SetBinContent(3,327.7858);
   m3l_rebin10_total__1->SetBinContent(4,332.7152);
   m3l_rebin10_total__1->SetBinContent(5,401.5267);
   m3l_rebin10_total__1->SetBinContent(6,353.1407);
   m3l_rebin10_total__1->SetBinContent(7,278.8818);
   m3l_rebin10_total__1->SetBinContent(8,374.3176);
   m3l_rebin10_total__1->SetBinContent(9,328.3957);
   m3l_rebin10_total__1->SetBinContent(10,527.5769);
   m3l_rebin10_total__1->SetBinError(1,5.67378);
   m3l_rebin10_total__1->SetBinError(2,10.36108);
   m3l_rebin10_total__1->SetBinError(3,16.21756);
   m3l_rebin10_total__1->SetBinError(4,13.29505);
   m3l_rebin10_total__1->SetBinError(5,13.71378);
   m3l_rebin10_total__1->SetBinError(6,11.86871);
   m3l_rebin10_total__1->SetBinError(7,10.24994);
   m3l_rebin10_total__1->SetBinError(8,13.72804);
   m3l_rebin10_total__1->SetBinError(9,10.73078);
   m3l_rebin10_total__1->SetBinError(10,11.95531);
   m3l_rebin10_total__1->SetMinimum(0);
   m3l_rebin10_total__1->SetMaximum(1055.154);
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
   m3l_rebin10_stack_stack_1->SetMaximum(553.9557);
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
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(1,0.4031181);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(5,0.2060137);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(7,0.2026171);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(8,0.1938399);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(9,0.199151);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(10,0.205721);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(1,0.2850661);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(5,0.2060137);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(7,0.2026171);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(8,0.1938399);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(9,0.199151);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(10,0.205721);
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
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(1,3.024344);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(2,7.24062);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(3,10.56629);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(4,13.04166);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(5,17.32008);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(6,11.32608);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(7,11.4922);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(8,13.365);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(9,14.3631);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(10,14.76924);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(1,0.6898536);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(2,1.036741);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(3,1.241428);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(4,1.352946);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(5,1.562499);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(6,1.259246);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(7,1.270151);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(8,1.382829);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(9,1.442553);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(10,1.496247);
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
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(1,7.16965);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(2,21.39751);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(3,57.67755);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(4,32.47444);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(5,32.17917);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(6,21.17878);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(7,14.64855);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(8,33.0049);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(9,14.5764);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(10,10.86568);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(1,5.069731);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(2,8.742257);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(3,14.42549);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(4,10.82984);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(5,10.73466);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(6,8.65306);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(7,7.326737);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(8,11.00434);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(9,7.291627);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(10,6.273838);
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
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(1,1.515703);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(2,11.94572);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(3,22.23891);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(4,17.19847);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(5,19.23525);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(6,18.85859);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(7,9.324941);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(8,16.10941);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(9,14.71936);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(10,22.46218);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(1,0.7587768);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(2,2.147509);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(3,2.922217);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(4,2.5657);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(5,2.721885);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(6,2.695236);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(7,1.904606);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(8,2.487307);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(9,2.389048);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(10,2.976375);
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
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(1,28.60488);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(2,133.8557);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(3,237.3031);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(4,270.0006);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(5,332.5862);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(6,301.7773);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(7,243.2135);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(8,311.6445);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(9,284.5376);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(10,479.274);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(1,2.314456);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(2,5.023782);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(3,6.695817);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(4,7.145599);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(5,7.933631);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(6,7.559159);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(7,6.789573);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(8,7.69592);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(9,7.358922);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(10,9.613974);
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
   m3l_rebin10_total__2->SetBinContent(1,40.7177);
   m3l_rebin10_total__2->SetBinContent(2,174.4395);
   m3l_rebin10_total__2->SetBinContent(3,327.7858);
   m3l_rebin10_total__2->SetBinContent(4,332.7152);
   m3l_rebin10_total__2->SetBinContent(5,401.5267);
   m3l_rebin10_total__2->SetBinContent(6,353.1407);
   m3l_rebin10_total__2->SetBinContent(7,278.8818);
   m3l_rebin10_total__2->SetBinContent(8,374.3176);
   m3l_rebin10_total__2->SetBinContent(9,328.3957);
   m3l_rebin10_total__2->SetBinContent(10,527.5769);
   m3l_rebin10_total__2->SetBinError(1,5.67378);
   m3l_rebin10_total__2->SetBinError(2,10.36108);
   m3l_rebin10_total__2->SetBinError(3,16.21756);
   m3l_rebin10_total__2->SetBinError(4,13.29505);
   m3l_rebin10_total__2->SetBinError(5,13.71378);
   m3l_rebin10_total__2->SetBinError(6,11.86871);
   m3l_rebin10_total__2->SetBinError(7,10.24994);
   m3l_rebin10_total__2->SetBinError(8,13.72804);
   m3l_rebin10_total__2->SetBinError(9,10.73078);
   m3l_rebin10_total__2->SetBinError(10,11.95531);
   m3l_rebin10_total__2->SetMinimum(0);
   m3l_rebin10_total__2->SetMaximum(1055.154);
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
   40.7177,
   174.4395,
   327.7858,
   332.7152,
   401.5267,
   353.1407,
   278.8818,
   374.3176,
   328.3957,
   527.5769};
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
   3.37951,
   12.09975,
   32.94257,
   26.40977,
   26.60177,
   23.27409,
   17.47908,
   24.65731,
   21.7351,
   32.31267};
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
   4.091934,
   14.50605,
   29.36209,
   24.68272,
   29.49477,
   23.74748,
   19.23862,
   28.37475,
   22.90138,
   34.17792};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,m3l_rebin10_total_errors_fx3001,m3l_rebin10_total_errors_fy3001,m3l_rebin10_total_errors_felx3001,m3l_rebin10_total_errors_fehx3001,m3l_rebin10_total_errors_fely3001,m3l_rebin10_total_errors_fehy3001);
   grae->SetName("m3l_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin10_total_errors3001 = new TH1F("Graph_m3l_rebin10_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin10_total_errors3001->SetMinimum(33.60437);
   Graph_m3l_rebin10_total_errors3001->SetMaximum(614.1964);
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
