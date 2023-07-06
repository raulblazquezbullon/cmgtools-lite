void m3l_rebin9()
{
//=========Macro generated from canvas: m3l_rebin9_canvas/m3l_rebin9
//=========  (Thu Jul  6 17:53:40 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin9_canvas = new TCanvas("m3l_rebin9_canvas", "m3l_rebin9",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin9_canvas->SetHighLightColor(2);
   m3l_rebin9_canvas->Range(-115.3846,-186.9151,525.641,1250.893);
   m3l_rebin9_canvas->SetFillColor(0);
   m3l_rebin9_canvas->SetBorderMode(0);
   m3l_rebin9_canvas->SetBorderSize(2);
   m3l_rebin9_canvas->SetTickx(1);
   m3l_rebin9_canvas->SetTicky(1);
   m3l_rebin9_canvas->SetLeftMargin(0.18);
   m3l_rebin9_canvas->SetRightMargin(0.04);
   m3l_rebin9_canvas->SetTopMargin(0.06);
   m3l_rebin9_canvas->SetBottomMargin(0.13);
   m3l_rebin9_canvas->SetFrameFillStyle(0);
   m3l_rebin9_canvas->SetFrameBorderMode(0);
   m3l_rebin9_canvas->SetFrameFillStyle(0);
   m3l_rebin9_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_total__1 = new TH1D("m3l_rebin9_total__1","dummy",9, xAxis1);
   m3l_rebin9_total__1->SetBinContent(1,53.58064);
   m3l_rebin9_total__1->SetBinContent(2,216.3742);
   m3l_rebin9_total__1->SetBinContent(3,374.6002);
   m3l_rebin9_total__1->SetBinContent(4,410.2362);
   m3l_rebin9_total__1->SetBinContent(5,420.8569);
   m3l_rebin9_total__1->SetBinContent(6,339.438);
   m3l_rebin9_total__1->SetBinContent(7,399.1998);
   m3l_rebin9_total__1->SetBinContent(8,342.8994);
   m3l_rebin9_total__1->SetBinContent(9,582.3123);
   m3l_rebin9_total__1->SetBinError(1,6.913001);
   m3l_rebin9_total__1->SetBinError(2,10.76333);
   m3l_rebin9_total__1->SetBinError(3,16.09114);
   m3l_rebin9_total__1->SetBinError(4,15.16929);
   m3l_rebin9_total__1->SetBinError(5,13.85603);
   m3l_rebin9_total__1->SetBinError(6,11.16173);
   m3l_rebin9_total__1->SetBinError(7,14.79543);
   m3l_rebin9_total__1->SetBinError(8,9.56855);
   m3l_rebin9_total__1->SetBinError(9,13.42156);
   m3l_rebin9_total__1->SetMinimum(0);
   m3l_rebin9_total__1->SetMaximum(1164.625);
   m3l_rebin9_total__1->SetEntries(15153);
   m3l_rebin9_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_total__1->SetFillColor(ci);
   m3l_rebin9_total__1->SetMarkerStyle(20);
   m3l_rebin9_total__1->SetMarkerSize(1.1);
   m3l_rebin9_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin9_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin9_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin9_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->Draw("HIST");
   
   THStack *m3l_rebin9_stack = new THStack();
   m3l_rebin9_stack->SetName("m3l_rebin9_stack");
   m3l_rebin9_stack->SetTitle("m3l_rebin9");
   Double_t xAxis2[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1F *m3l_rebin9_stack_stack_1 = new TH1F("m3l_rebin9_stack_stack_1","m3l_rebin9",9, xAxis2);
   m3l_rebin9_stack_stack_1->SetMinimum(0);
   m3l_rebin9_stack_stack_1->SetMaximum(611.4279);
   m3l_rebin9_stack_stack_1->SetDirectory(0);
   m3l_rebin9_stack_stack_1->SetStats(0);
   m3l_rebin9_stack_stack_1->SetLineStyle(0);
   m3l_rebin9_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->SetHistogram(m3l_rebin9_stack_stack_1);
   
   Double_t xAxis3[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_fakes_VV_stack_1 = new TH1D("m3l_rebin9_fakes_VV_stack_1","dummy",9, xAxis3);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(1,0.4031181);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(5,0.2060137);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(6,0.2026171);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(7,0.1938399);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(8,0.199151);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(9,0.205721);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(1,0.2850661);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(5,0.2060137);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(6,0.2026171);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(7,0.1938399);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(8,0.199151);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(9,0.205721);
   m3l_rebin9_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin9_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin9_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin9_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_fakes_TT_stack_2 = new TH1D("m3l_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(1,3.721713);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(2,8.629619);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(3,12.59451);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(4,16.40838);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(5,17.22959);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(6,11.61966);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(7,13.63483);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(8,16.68609);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(9,15.98422);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(1,0.7571756);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(2,1.126077);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(3,1.354468);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(4,1.517674);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(5,1.554496);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(6,1.276413);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(7,1.396055);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(8,1.546676);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(9,1.558367);
   m3l_rebin9_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin9_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin9_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin9_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_fakes_DY_stack_3 = new TH1D("m3l_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(1,10.90016);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(2,21.33497);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(3,54.00958);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(4,43.44544);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(5,32.15907);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(6,17.50628);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(7,40.37505);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(8,7.109632);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(9,18.33245);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(1,6.294354);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(2,8.715753);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(3,13.95137);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(4,12.54695);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(5,10.72798);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(6,7.835628);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(7,12.17611);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(8,5.029039);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(9,8.199856);
   m3l_rebin9_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin9_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin9_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin9_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_prompt_ZZ_stack_4 = new TH1D("m3l_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(1,1.515703);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(2,17.36753);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(3,22.12795);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(4,20.74605);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(5,21.56633);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(6,13.9022);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(7,16.1387);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(8,15.8673);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(9,24.37679);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(1,0.7587768);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(2,2.59095);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(3,2.907829);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(4,2.825127);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(5,2.883457);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(6,2.318295);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(7,2.491743);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(8,2.479275);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(9,3.097297);
   m3l_rebin9_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin9_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin9_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin9_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_prompt_WZ_stack_5 = new TH1D("m3l_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(1,37.03994);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(2,169.042);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(3,285.8682);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(4,329.6363);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(5,349.6959);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(6,296.2072);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(7,328.8574);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(8,303.0372);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(9,523.4131);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(1,2.63446);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(2,5.648343);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(3,7.348065);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(4,7.899165);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(5,8.131842);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(6,7.492818);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(7,7.902643);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(8,7.595212);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(9,10.04174);
   m3l_rebin9_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin9_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin9_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_prompt_WZ_stack_5,"");
   m3l_rebin9_stack->Draw("same hist");
   Double_t xAxis8[10] = {0, 113.8763, 127.7526, 141.6289, 157.1606, 175.2097, 193.2588, 220.9425, 260.5775, 500}; 
   
   TH1D *m3l_rebin9_total__2 = new TH1D("m3l_rebin9_total__2","dummy",9, xAxis8);
   m3l_rebin9_total__2->SetBinContent(1,53.58064);
   m3l_rebin9_total__2->SetBinContent(2,216.3742);
   m3l_rebin9_total__2->SetBinContent(3,374.6002);
   m3l_rebin9_total__2->SetBinContent(4,410.2362);
   m3l_rebin9_total__2->SetBinContent(5,420.8569);
   m3l_rebin9_total__2->SetBinContent(6,339.438);
   m3l_rebin9_total__2->SetBinContent(7,399.1998);
   m3l_rebin9_total__2->SetBinContent(8,342.8994);
   m3l_rebin9_total__2->SetBinContent(9,582.3123);
   m3l_rebin9_total__2->SetBinError(1,6.913001);
   m3l_rebin9_total__2->SetBinError(2,10.76333);
   m3l_rebin9_total__2->SetBinError(3,16.09114);
   m3l_rebin9_total__2->SetBinError(4,15.16929);
   m3l_rebin9_total__2->SetBinError(5,13.85603);
   m3l_rebin9_total__2->SetBinError(6,11.16173);
   m3l_rebin9_total__2->SetBinError(7,14.79543);
   m3l_rebin9_total__2->SetBinError(8,9.56855);
   m3l_rebin9_total__2->SetBinError(9,13.42156);
   m3l_rebin9_total__2->SetMinimum(0);
   m3l_rebin9_total__2->SetMaximum(1164.625);
   m3l_rebin9_total__2->SetEntries(15153);
   m3l_rebin9_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_total__2->SetFillColor(ci);
   m3l_rebin9_total__2->SetMarkerStyle(20);
   m3l_rebin9_total__2->SetMarkerSize(1.1);
   m3l_rebin9_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin9_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin9_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin9_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin9_total_errors_fx3001[9] = {
   56.93814,
   120.8144,
   134.6907,
   149.3948,
   166.1852,
   184.2343,
   207.1007,
   240.76,
   380.2888};
   Double_t m3l_rebin9_total_errors_fy3001[9] = {
   53.58064,
   216.3742,
   374.6002,
   410.2362,
   420.8569,
   339.438,
   399.1998,
   342.8994,
   582.3123};
   Double_t m3l_rebin9_total_errors_felx3001[9] = {
   56.93814,
   6.938148,
   6.938145,
   7.765884,
   9.024551,
   9.024544,
   13.84183,
   19.81753,
   119.7112};
   Double_t m3l_rebin9_total_errors_fely3001[9] = {
   4.635892,
   14.32066,
   34.56328,
   32.63375,
   28.24766,
   21.27095,
   26.75426,
   21.85459,
   36.11858};
   Double_t m3l_rebin9_total_errors_fehx3001[9] = {
   56.93814,
   6.938148,
   6.938145,
   7.765884,
   9.024551,
   9.024544,
   13.84183,
   19.81753,
   119.7112};
   Double_t m3l_rebin9_total_errors_fehy3001[9] = {
   5.552407,
   18.43336,
   30.69628,
   31.44505,
   30.01916,
   22.59596,
   30.61572,
   23.49875,
   38.20879};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,m3l_rebin9_total_errors_fx3001,m3l_rebin9_total_errors_fy3001,m3l_rebin9_total_errors_felx3001,m3l_rebin9_total_errors_fehx3001,m3l_rebin9_total_errors_fely3001,m3l_rebin9_total_errors_fehy3001);
   grae->SetName("m3l_rebin9_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin9_total_errors3001 = new TH1F("Graph_m3l_rebin9_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin9_total_errors3001->SetMinimum(44.05027);
   Graph_m3l_rebin9_total_errors3001->SetMaximum(677.6787);
   Graph_m3l_rebin9_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin9_total_errors3001->SetStats(0);
   Graph_m3l_rebin9_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin9_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin9_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin9_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin9_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin9_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin9_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin9_total_errors","Total unc.","F");
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
   m3l_rebin9_canvas->Modified();
   m3l_rebin9_canvas->cd();
   m3l_rebin9_canvas->SetSelected(m3l_rebin9_canvas);
}
