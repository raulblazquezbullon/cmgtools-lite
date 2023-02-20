void met_rebin9()
{
//=========Macro generated from canvas: met_rebin9_canvas/met_rebin9
//=========  (Mon Feb 20 00:08:20 2023) by ROOT version 6.24/07
   TCanvas *met_rebin9_canvas = new TCanvas("met_rebin9_canvas", "met_rebin9",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin9_canvas->SetHighLightColor(2);
   met_rebin9_canvas->Range(-87.69231,-166.1432,399.4872,1111.881);
   met_rebin9_canvas->SetFillColor(0);
   met_rebin9_canvas->SetBorderMode(0);
   met_rebin9_canvas->SetBorderSize(2);
   met_rebin9_canvas->SetTickx(1);
   met_rebin9_canvas->SetTicky(1);
   met_rebin9_canvas->SetLeftMargin(0.18);
   met_rebin9_canvas->SetRightMargin(0.04);
   met_rebin9_canvas->SetTopMargin(0.06);
   met_rebin9_canvas->SetBottomMargin(0.13);
   met_rebin9_canvas->SetFrameFillStyle(0);
   met_rebin9_canvas->SetFrameBorderMode(0);
   met_rebin9_canvas->SetFrameFillStyle(0);
   met_rebin9_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_total__1 = new TH1D("met_rebin9_total__1","dummy",9, xAxis1);
   met_rebin9_total__1->SetBinContent(2,144.5995);
   met_rebin9_total__1->SetBinContent(3,466.7576);
   met_rebin9_total__1->SetBinContent(4,496.5388);
   met_rebin9_total__1->SetBinContent(5,433.455);
   met_rebin9_total__1->SetBinContent(6,369.0436);
   met_rebin9_total__1->SetBinContent(7,465.8106);
   met_rebin9_total__1->SetBinContent(8,517.5998);
   met_rebin9_total__1->SetBinContent(9,490.442);
   met_rebin9_total__1->SetBinError(2,12.69636);
   met_rebin9_total__1->SetBinError(3,17.83376);
   met_rebin9_total__1->SetBinError(4,19.85428);
   met_rebin9_total__1->SetBinError(5,14.88854);
   met_rebin9_total__1->SetBinError(6,12.84377);
   met_rebin9_total__1->SetBinError(7,12.45416);
   met_rebin9_total__1->SetBinError(8,12.8444);
   met_rebin9_total__1->SetBinError(9,10.78383);
   met_rebin9_total__1->SetMinimum(0);
   met_rebin9_total__1->SetMaximum(1035.2);
   met_rebin9_total__1->SetEntries(15153);
   met_rebin9_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin9_total__1->SetFillColor(ci);
   met_rebin9_total__1->SetMarkerStyle(20);
   met_rebin9_total__1->SetMarkerSize(1.1);
   met_rebin9_total__1->GetXaxis()->SetTitle("met");
   met_rebin9_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin9_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin9_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin9_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin9_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin9_total__1->GetYaxis()->SetTitle("Events");
   met_rebin9_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin9_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin9_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin9_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin9_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin9_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin9_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin9_total__1->Draw("HIST");
   
   THStack *met_rebin9_stack = new THStack();
   met_rebin9_stack->SetName("met_rebin9_stack");
   met_rebin9_stack->SetTitle("met_rebin9");
   Double_t xAxis2[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1F *met_rebin9_stack_stack_1 = new TH1F("met_rebin9_stack_stack_1","met_rebin9",9, xAxis2);
   met_rebin9_stack_stack_1->SetMinimum(0);
   met_rebin9_stack_stack_1->SetMaximum(543.4798);
   met_rebin9_stack_stack_1->SetDirectory(0);
   met_rebin9_stack_stack_1->SetStats(0);
   met_rebin9_stack_stack_1->SetLineStyle(0);
   met_rebin9_stack_stack_1->SetMarkerStyle(20);
   met_rebin9_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin9_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin9_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin9_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin9_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin9_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin9_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->SetHistogram(met_rebin9_stack_stack_1);
   
   Double_t xAxis3[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_fakes_VV_stack_1 = new TH1D("met_rebin9_fakes_VV_stack_1","dummy",9, xAxis3);
   met_rebin9_fakes_VV_stack_1->SetBinContent(5,0.2199288);
   met_rebin9_fakes_VV_stack_1->SetBinContent(6,0.2199288);
   met_rebin9_fakes_VV_stack_1->SetBinContent(7,0.6597863);
   met_rebin9_fakes_VV_stack_1->SetBinContent(9,0.4398576);
   met_rebin9_fakes_VV_stack_1->SetBinError(5,0.2199288);
   met_rebin9_fakes_VV_stack_1->SetBinError(6,0.2199288);
   met_rebin9_fakes_VV_stack_1->SetBinError(7,0.3809278);
   met_rebin9_fakes_VV_stack_1->SetBinError(9,0.3110263);
   met_rebin9_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin9_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin9_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin9_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_fakes_TT_stack_2 = new TH1D("met_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   met_rebin9_fakes_TT_stack_2->SetBinContent(2,1.956017);
   met_rebin9_fakes_TT_stack_2->SetBinContent(3,9.178235);
   met_rebin9_fakes_TT_stack_2->SetBinContent(4,9.178235);
   met_rebin9_fakes_TT_stack_2->SetBinContent(5,10.28762);
   met_rebin9_fakes_TT_stack_2->SetBinContent(6,10.38194);
   met_rebin9_fakes_TT_stack_2->SetBinContent(7,19.36255);
   met_rebin9_fakes_TT_stack_2->SetBinContent(8,25.7853);
   met_rebin9_fakes_TT_stack_2->SetBinContent(9,38.27372);
   met_rebin9_fakes_TT_stack_2->SetBinError(2,0.5425016);
   met_rebin9_fakes_TT_stack_2->SetBinError(3,1.175153);
   met_rebin9_fakes_TT_stack_2->SetBinError(4,1.175153);
   met_rebin9_fakes_TT_stack_2->SetBinError(5,1.265044);
   met_rebin9_fakes_TT_stack_2->SetBinError(6,1.249838);
   met_rebin9_fakes_TT_stack_2->SetBinError(7,1.740723);
   met_rebin9_fakes_TT_stack_2->SetBinError(8,1.994352);
   met_rebin9_fakes_TT_stack_2->SetBinError(9,2.429354);
   met_rebin9_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin9_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin9_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin9_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_fakes_DY_stack_3 = new TH1D("met_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   met_rebin9_fakes_DY_stack_3->SetBinContent(2,35.01835);
   met_rebin9_fakes_DY_stack_3->SetBinContent(3,58.36392);
   met_rebin9_fakes_DY_stack_3->SetBinContent(4,77.81856);
   met_rebin9_fakes_DY_stack_3->SetBinContent(5,35.01835);
   met_rebin9_fakes_DY_stack_3->SetBinContent(6,23.34557);
   met_rebin9_fakes_DY_stack_3->SetBinContent(7,15.56371);
   met_rebin9_fakes_DY_stack_3->SetBinContent(8,15.56371);
   met_rebin9_fakes_DY_stack_3->SetBinContent(9,3.890928);
   met_rebin9_fakes_DY_stack_3->SetBinError(2,11.67278);
   met_rebin9_fakes_DY_stack_3->SetBinError(3,15.0695);
   met_rebin9_fakes_DY_stack_3->SetBinError(4,17.40076);
   met_rebin9_fakes_DY_stack_3->SetBinError(5,11.67278);
   met_rebin9_fakes_DY_stack_3->SetBinError(6,9.530788);
   met_rebin9_fakes_DY_stack_3->SetBinError(7,7.781856);
   met_rebin9_fakes_DY_stack_3->SetBinError(8,7.781856);
   met_rebin9_fakes_DY_stack_3->SetBinError(9,3.890928);
   met_rebin9_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin9_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin9_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin9_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_prompt_ZZ_stack_4 = new TH1D("met_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(2,12.4557);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(3,37.36711);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(4,29.47849);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(5,20.7595);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(6,18.68355);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(7,15.77722);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(8,14.11646);
   met_rebin9_prompt_ZZ_stack_4->SetBinContent(9,16.6076);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(2,2.27409);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(3,3.938839);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(4,3.498454);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(5,2.935837);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(6,2.78518);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(7,2.559403);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(8,2.420953);
   met_rebin9_prompt_ZZ_stack_4->SetBinError(9,2.625892);
   met_rebin9_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin9_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin9_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin9_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_prompt_WZ_stack_5 = new TH1D("met_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(2,95.16939);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(3,361.8483);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(4,380.0636);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(5,367.1696);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(6,316.4126);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(7,414.4473);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(8,462.1344);
   met_rebin9_prompt_WZ_stack_5->SetBinContent(9,431.2299);
   met_rebin9_prompt_WZ_stack_5->SetBinError(2,4.413375);
   met_rebin9_prompt_WZ_stack_5->SetBinError(3,8.605685);
   met_rebin9_prompt_WZ_stack_5->SetBinError(4,8.819628);
   met_rebin9_prompt_WZ_stack_5->SetBinError(5,8.668731);
   met_rebin9_prompt_WZ_stack_5->SetBinError(6,8.047279);
   met_rebin9_prompt_WZ_stack_5->SetBinError(7,9.209941);
   met_rebin9_prompt_WZ_stack_5->SetBinError(8,9.725374);
   met_rebin9_prompt_WZ_stack_5->SetBinError(9,9.394563);
   met_rebin9_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin9_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin9_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin9_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin9_stack->Add(met_rebin9_prompt_WZ_stack_5,"");
   met_rebin9_stack->Draw("same hist");
   Double_t xAxis8[10] = {0, 25.79454, 31.58909, 37.38363, 43.49265, 49.86055, 56.22846, 66.78139, 88.29178, 380}; 
   
   TH1D *met_rebin9_total__2 = new TH1D("met_rebin9_total__2","dummy",9, xAxis8);
   met_rebin9_total__2->SetBinContent(2,144.5995);
   met_rebin9_total__2->SetBinContent(3,466.7576);
   met_rebin9_total__2->SetBinContent(4,496.5388);
   met_rebin9_total__2->SetBinContent(5,433.455);
   met_rebin9_total__2->SetBinContent(6,369.0436);
   met_rebin9_total__2->SetBinContent(7,465.8106);
   met_rebin9_total__2->SetBinContent(8,517.5998);
   met_rebin9_total__2->SetBinContent(9,490.442);
   met_rebin9_total__2->SetBinError(2,12.69636);
   met_rebin9_total__2->SetBinError(3,17.83376);
   met_rebin9_total__2->SetBinError(4,19.85428);
   met_rebin9_total__2->SetBinError(5,14.88854);
   met_rebin9_total__2->SetBinError(6,12.84377);
   met_rebin9_total__2->SetBinError(7,12.45416);
   met_rebin9_total__2->SetBinError(8,12.8444);
   met_rebin9_total__2->SetBinError(9,10.78383);
   met_rebin9_total__2->SetMinimum(0);
   met_rebin9_total__2->SetMaximum(1035.2);
   met_rebin9_total__2->SetEntries(15153);
   met_rebin9_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin9_total__2->SetFillColor(ci);
   met_rebin9_total__2->SetMarkerStyle(20);
   met_rebin9_total__2->SetMarkerSize(1.1);
   met_rebin9_total__2->GetXaxis()->SetTitle("met");
   met_rebin9_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin9_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin9_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin9_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin9_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin9_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin9_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin9_total__2->GetYaxis()->SetTitle("Events");
   met_rebin9_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin9_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin9_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin9_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin9_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin9_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin9_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin9_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin9_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin9_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin9_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin9_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin9_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin9_total_errors_fx3001[8] = {
   28.69182,
   34.48636,
   40.43814,
   46.6766,
   53.04451,
   61.50493,
   77.53659,
   234.1459};
   Double_t met_rebin9_total_errors_fy3001[8] = {
   144.5995,
   466.7576,
   496.5388,
   433.455,
   369.0436,
   465.8106,
   517.5998,
   490.442};
   Double_t met_rebin9_total_errors_felx3001[8] = {
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_total_errors_fely3001[8] = {
   44.37969,
   32.7111,
   47.3059,
   30.3338,
   32.84694,
   37.10116,
   48.28028,
   45.09777};
   Double_t met_rebin9_total_errors_fehx3001[8] = {
   2.897273,
   2.897271,
   3.05451,
   3.18395,
   3.183952,
   5.276468,
   10.75519,
   145.8541};
   Double_t met_rebin9_total_errors_fehy3001[8] = {
   10.33401,
   55.59952,
   38.9657,
   39.48324,
   26.24382,
   43.4937,
   50.57127,
   51.00153};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,met_rebin9_total_errors_fx3001,met_rebin9_total_errors_fy3001,met_rebin9_total_errors_felx3001,met_rebin9_total_errors_fehx3001,met_rebin9_total_errors_fely3001,met_rebin9_total_errors_fehy3001);
   grae->SetName("met_rebin9_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin9_total_errors3001 = new TH1F("Graph_met_rebin9_total_errors3001","Graph",100,0,415.4205);
   Graph_met_rebin9_total_errors3001->SetMinimum(53.42463);
   Graph_met_rebin9_total_errors3001->SetMaximum(614.9662);
   Graph_met_rebin9_total_errors3001->SetDirectory(0);
   Graph_met_rebin9_total_errors3001->SetStats(0);
   Graph_met_rebin9_total_errors3001->SetLineStyle(0);
   Graph_met_rebin9_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin9_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin9_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin9_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin9_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin9_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin9_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin9_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin9_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin9_total_errors","Total unc.","F");

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
   met_rebin9_canvas->Modified();
   met_rebin9_canvas->cd();
   met_rebin9_canvas->SetSelected(met_rebin9_canvas);
}
