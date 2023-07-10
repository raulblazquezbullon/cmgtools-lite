void m3l_rebin8()
{
//=========Macro generated from canvas: m3l_rebin8_canvas/m3l_rebin8
//=========  (Mon Jul 10 18:56:32 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin8_canvas = new TCanvas("m3l_rebin8_canvas", "m3l_rebin8",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin8_canvas->SetHighLightColor(2);
   m3l_rebin8_canvas->Range(-115.3846,-205.4833,525.641,1375.158);
   m3l_rebin8_canvas->SetFillColor(0);
   m3l_rebin8_canvas->SetBorderMode(0);
   m3l_rebin8_canvas->SetBorderSize(2);
   m3l_rebin8_canvas->SetTickx(1);
   m3l_rebin8_canvas->SetTicky(1);
   m3l_rebin8_canvas->SetLeftMargin(0.18);
   m3l_rebin8_canvas->SetRightMargin(0.04);
   m3l_rebin8_canvas->SetTopMargin(0.06);
   m3l_rebin8_canvas->SetBottomMargin(0.13);
   m3l_rebin8_canvas->SetFrameFillStyle(0);
   m3l_rebin8_canvas->SetFrameBorderMode(0);
   m3l_rebin8_canvas->SetFrameFillStyle(0);
   m3l_rebin8_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[9] = {0, 115.6847, 131.3693, 147.054, 166.5587, 186.9468, 213.4547, 252.0472, 500}; 
   
   TH1D *m3l_rebin8_total__1 = new TH1D("m3l_rebin8_total__1","dummy",8, xAxis1);
   m3l_rebin8_total__1->SetBinContent(1,67.98915);
   m3l_rebin8_total__1->SetBinContent(2,305.0881);
   m3l_rebin8_total__1->SetBinContent(3,424.1392);
   m3l_rebin8_total__1->SetBinContent(4,487.9719);
   m3l_rebin8_total__1->SetBinContent(5,423.8602);
   m3l_rebin8_total__1->SetBinContent(6,421.435);
   m3l_rebin8_total__1->SetBinContent(7,368.8542);
   m3l_rebin8_total__1->SetBinContent(8,640.1597);
   m3l_rebin8_total__1->SetBinError(1,7.103932);
   m3l_rebin8_total__1->SetBinError(2,15.20844);
   m3l_rebin8_total__1->SetBinError(3,15.68943);
   m3l_rebin8_total__1->SetBinError(4,15.52499);
   m3l_rebin8_total__1->SetBinError(5,12.43417);
   m3l_rebin8_total__1->SetBinError(6,14.90499);
   m3l_rebin8_total__1->SetBinError(7,11.06922);
   m3l_rebin8_total__1->SetBinError(8,13.84213);
   m3l_rebin8_total__1->SetMinimum(0);
   m3l_rebin8_total__1->SetMaximum(1280.319);
   m3l_rebin8_total__1->SetEntries(15153);
   m3l_rebin8_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin8_total__1->SetFillColor(ci);
   m3l_rebin8_total__1->SetMarkerStyle(20);
   m3l_rebin8_total__1->SetMarkerSize(1.1);
   m3l_rebin8_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin8_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin8_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin8_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin8_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin8_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin8_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin8_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin8_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_total__1->Draw("HIST");
   
   THStack *m3l_rebin8_stack = new THStack();
   m3l_rebin8_stack->SetName("m3l_rebin8_stack");
   m3l_rebin8_stack->SetTitle("m3l_rebin8");
   Double_t xAxis2[9] = {0, 115.6847, 131.3693, 147.054, 166.5587, 186.9468, 213.4547, 252.0472, 500}; 
   
   TH1F *m3l_rebin8_stack_stack_1 = new TH1F("m3l_rebin8_stack_stack_1","m3l_rebin8",8, xAxis2);
   m3l_rebin8_stack_stack_1->SetMinimum(0);
   m3l_rebin8_stack_stack_1->SetMaximum(672.1677);
   m3l_rebin8_stack_stack_1->SetDirectory(0);
   m3l_rebin8_stack_stack_1->SetStats(0);
   m3l_rebin8_stack_stack_1->SetLineStyle(0);
   m3l_rebin8_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->SetHistogram(m3l_rebin8_stack_stack_1);
   
   Double_t xAxis3[9] = {0, 115.6847, 131.3693, 147.054, 166.5587, 186.9468, 213.4547, 252.0472, 500}; 
   
   TH1D *m3l_rebin8_fakes_VV_stack_1 = new TH1D("m3l_rebin8_fakes_VV_stack_1","dummy",8, xAxis3);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(1,0.4031181);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(4,0.2060137);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(6,0.2026171);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(7,0.1938399);
   m3l_rebin8_fakes_VV_stack_1->SetBinContent(8,0.404872);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(1,0.2850661);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(4,0.2060137);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(6,0.2026171);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(7,0.1938399);
   m3l_rebin8_fakes_VV_stack_1->SetBinError(8,0.2863255);
   m3l_rebin8_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin8_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin8_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin8_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_fakes_VV_stack_1,"");
   Double_t xAxis4[9] = {0, 115.6847, 131.3693, 147.054, 166.5587, 186.9468, 213.4547, 252.0472, 500}; 
   
   TH1D *m3l_rebin8_fakes_TT_stack_2 = new TH1D("m3l_rebin8_fakes_TT_stack_2","dummy",8, xAxis4);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(1,4.265472);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(2,10.43233);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(3,16.38792);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(4,20.24548);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(5,14.80521);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(6,15.29235);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(7,15.5242);
   m3l_rebin8_fakes_TT_stack_2->SetBinContent(8,19.55566);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(1,0.8045493);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(2,1.243955);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(3,1.529303);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(4,1.688002);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(5,1.439104);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(6,1.475902);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(7,1.491168);
   m3l_rebin8_fakes_TT_stack_2->SetBinError(8,1.714329);
   m3l_rebin8_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin8_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin8_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin8_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_fakes_TT_stack_2,"");
   Double_t xAxis5[9] = {0, 115.6847, 131.3693, 147.054, 166.5587, 186.9468, 213.4547, 252.0472, 500}; 
   
   TH1D *m3l_rebin8_fakes_DY_stack_3 = new TH1D("m3l_rebin8_fakes_DY_stack_3","dummy",8, xAxis5);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(1,10.90016);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(2,50.03476);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(3,47.08672);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(4,42.87667);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(5,21.17878);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(6,40.26058);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(7,14.50249);
   m3l_rebin8_fakes_DY_stack_3->SetBinContent(8,18.33245);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(1,6.294354);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(2,13.37991);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(3,13.06494);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(4,12.38583);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(5,8.65306);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(6,12.14286);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(7,7.253869);
   m3l_rebin8_fakes_DY_stack_3->SetBinError(8,8.199856);
   m3l_rebin8_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin8_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin8_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin8_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_fakes_DY_stack_3,"");
   Double_t xAxis6[9] = {0, 115.6847, 131.3693, 147.054, 166.5587, 186.9468, 213.4547, 252.0472, 500}; 
   
   TH1D *m3l_rebin8_prompt_ZZ_stack_4 = new TH1D("m3l_rebin8_prompt_ZZ_stack_4","dummy",8, xAxis6);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(1,1.515703);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(2,23.08501);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(3,25.63513);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(4,22.27961);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(5,21.22332);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(6,16.14813);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(7,16.23488);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinContent(8,27.48677);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(1,0.7587768);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(2,2.982577);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(3,3.134385);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(4,2.927105);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(5,2.863055);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(6,2.493374);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(7,2.506387);
   m3l_rebin8_prompt_ZZ_stack_4->SetBinError(8,3.28686);
   m3l_rebin8_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin8_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin8_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin8_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_prompt_ZZ_stack_4,"");
   Double_t xAxis7[9] = {0, 115.6847, 131.3693, 147.054, 166.5587, 186.9468, 213.4547, 252.0472, 500}; 
   
   TH1D *m3l_rebin8_prompt_WZ_stack_5 = new TH1D("m3l_rebin8_prompt_WZ_stack_5","dummy",8, xAxis7);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(1,50.9047);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(2,221.536);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(3,335.0295);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(4,402.3641);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(5,366.6529);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(6,349.5314);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(7,322.3988);
   m3l_rebin8_prompt_WZ_stack_5->SetBinContent(8,574.3799);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(1,3.089118);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(2,6.467731);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(3,7.956268);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(4,8.726785);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(5,8.334563);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(6,8.140841);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(7,7.833635);
   m3l_rebin8_prompt_WZ_stack_5->SetBinError(8,10.51392);
   m3l_rebin8_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin8_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin8_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin8_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_stack->Add(m3l_rebin8_prompt_WZ_stack_5,"");
   m3l_rebin8_stack->Draw("same hist");
   Double_t xAxis8[9] = {0, 115.6847, 131.3693, 147.054, 166.5587, 186.9468, 213.4547, 252.0472, 500}; 
   
   TH1D *m3l_rebin8_total__2 = new TH1D("m3l_rebin8_total__2","dummy",8, xAxis8);
   m3l_rebin8_total__2->SetBinContent(1,67.98915);
   m3l_rebin8_total__2->SetBinContent(2,305.0881);
   m3l_rebin8_total__2->SetBinContent(3,424.1392);
   m3l_rebin8_total__2->SetBinContent(4,487.9719);
   m3l_rebin8_total__2->SetBinContent(5,423.8602);
   m3l_rebin8_total__2->SetBinContent(6,421.435);
   m3l_rebin8_total__2->SetBinContent(7,368.8542);
   m3l_rebin8_total__2->SetBinContent(8,640.1597);
   m3l_rebin8_total__2->SetBinError(1,7.103932);
   m3l_rebin8_total__2->SetBinError(2,15.20844);
   m3l_rebin8_total__2->SetBinError(3,15.68943);
   m3l_rebin8_total__2->SetBinError(4,15.52499);
   m3l_rebin8_total__2->SetBinError(5,12.43417);
   m3l_rebin8_total__2->SetBinError(6,14.90499);
   m3l_rebin8_total__2->SetBinError(7,11.06922);
   m3l_rebin8_total__2->SetBinError(8,13.84213);
   m3l_rebin8_total__2->SetMinimum(0);
   m3l_rebin8_total__2->SetMaximum(1280.319);
   m3l_rebin8_total__2->SetEntries(15153);
   m3l_rebin8_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin8_total__2->SetFillColor(ci);
   m3l_rebin8_total__2->SetMarkerStyle(20);
   m3l_rebin8_total__2->SetMarkerSize(1.1);
   m3l_rebin8_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin8_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin8_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin8_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin8_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin8_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin8_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin8_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin8_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin8_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin8_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin8_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin8_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin8_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin8_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin8_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin8_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin8_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin8_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin8_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin8_total_errors_fx3001[8] = {
   57.84233,
   123.527,
   139.2116,
   156.8063,
   176.7528,
   200.2008,
   232.751,
   376.0236};
   Double_t m3l_rebin8_total_errors_fy3001[8] = {
   67.98915,
   305.0881,
   424.1392,
   487.9719,
   423.8602,
   421.435,
   368.8542,
   640.1597};
   Double_t m3l_rebin8_total_errors_felx3001[8] = {
   57.84233,
   7.842327,
   7.842331,
   9.752357,
   10.19408,
   13.25395,
   19.29623,
   123.9764};
   Double_t m3l_rebin8_total_errors_fely3001[8] = {
   6.085473,
   26.68383,
   38.88281,
   37.2868,
   32.79504,
   31.38991,
   27.17433,
   50.17373};
   Double_t m3l_rebin8_total_errors_fehx3001[8] = {
   57.84233,
   7.842327,
   7.842331,
   9.752357,
   10.19408,
   13.25395,
   19.29623,
   123.9764};
   Double_t m3l_rebin8_total_errors_fehy3001[8] = {
   6.979631,
   30.26483,
   37.16247,
   39.07773,
   33.55379,
   34.66182,
   29.56814,
   51.0023};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3l_rebin8_total_errors_fx3001,m3l_rebin8_total_errors_fy3001,m3l_rebin8_total_errors_felx3001,m3l_rebin8_total_errors_fehx3001,m3l_rebin8_total_errors_fely3001,m3l_rebin8_total_errors_fehy3001);
   grae->SetName("m3l_rebin8_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin8_total_errors3001 = new TH1F("Graph_m3l_rebin8_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin8_total_errors3001->SetMinimum(55.71331);
   Graph_m3l_rebin8_total_errors3001->SetMaximum(754.0878);
   Graph_m3l_rebin8_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin8_total_errors3001->SetStats(0);
   Graph_m3l_rebin8_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin8_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin8_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin8_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin8_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin8_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin8_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin8_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin8_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin8_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin8_total_errors","Total unc.","F");
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
   m3l_rebin8_canvas->Modified();
   m3l_rebin8_canvas->cd();
   m3l_rebin8_canvas->SetSelected(m3l_rebin8_canvas);
}
