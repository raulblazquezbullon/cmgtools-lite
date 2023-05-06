void met_rebin7()
{
//=========Macro generated from canvas: met_rebin7_canvas/met_rebin7
//=========  (Thu May  4 18:55:39 2023) by ROOT version 6.24/07
   TCanvas *met_rebin7_canvas = new TCanvas("met_rebin7_canvas", "met_rebin7",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin7_canvas->SetHighLightColor(2);
   met_rebin7_canvas->Range(-87.69231,-215.423,399.4872,1441.677);
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
   Double_t xAxis1[8] = {0, 27.45013, 34.90026, 42.58295, 50.77026, 58.95756, 78.66157, 380}; 
   
   TH1D *met_rebin7_total__1 = new TH1D("met_rebin7_total__1","dummy",7, xAxis1);
   met_rebin7_total__1->SetBinContent(2,424.1489);
   met_rebin7_total__1->SetBinContent(3,610.2911);
   met_rebin7_total__1->SetBinContent(4,567.6497);
   met_rebin7_total__1->SetBinContent(5,446.1988);
   met_rebin7_total__1->SetBinContent(6,664.833);
   met_rebin7_total__1->SetBinContent(7,671.1255);
   met_rebin7_total__1->SetBinError(2,19.86608);
   met_rebin7_total__1->SetBinError(3,20.49379);
   met_rebin7_total__1->SetBinError(4,17.53803);
   met_rebin7_total__1->SetBinError(5,13.45055);
   met_rebin7_total__1->SetBinError(6,15.01279);
   met_rebin7_total__1->SetBinError(7,12.95758);
   met_rebin7_total__1->SetMinimum(0);
   met_rebin7_total__1->SetMaximum(1342.251);
   met_rebin7_total__1->SetEntries(15153);
   met_rebin7_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin7_total__1->SetFillColor(ci);
   met_rebin7_total__1->SetMarkerStyle(20);
   met_rebin7_total__1->SetMarkerSize(1.1);
   met_rebin7_total__1->GetXaxis()->SetTitle("met");
   met_rebin7_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin7_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin7_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin7_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin7_total__1->GetYaxis()->SetTitle("Events");
   met_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_total__1->GetYaxis()->SetLabelSize(0.05);
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
   Double_t xAxis2[8] = {0, 27.45013, 34.90026, 42.58295, 50.77026, 58.95756, 78.66157, 380}; 
   
   TH1F *met_rebin7_stack_stack_1 = new TH1F("met_rebin7_stack_stack_1","met_rebin7",7, xAxis2);
   met_rebin7_stack_stack_1->SetMinimum(0);
   met_rebin7_stack_stack_1->SetMaximum(704.6818);
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
   
   Double_t xAxis3[8] = {0, 27.45013, 34.90026, 42.58295, 50.77026, 58.95756, 78.66157, 380}; 
   
   TH1D *met_rebin7_fakes_VV_stack_1 = new TH1D("met_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   met_rebin7_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   met_rebin7_fakes_VV_stack_1->SetBinContent(5,0.8797151);
   met_rebin7_fakes_VV_stack_1->SetBinContent(7,0.4398576);
   met_rebin7_fakes_VV_stack_1->SetBinError(4,0.2199288);
   met_rebin7_fakes_VV_stack_1->SetBinError(5,0.4398576);
   met_rebin7_fakes_VV_stack_1->SetBinError(7,0.3110263);
   met_rebin7_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin7_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin7_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin7_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
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
   Double_t xAxis4[8] = {0, 27.45013, 34.90026, 42.58295, 50.77026, 58.95756, 78.66157, 380}; 
   
   TH1D *met_rebin7_fakes_TT_stack_2 = new TH1D("met_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   met_rebin7_fakes_TT_stack_2->SetBinContent(2,6.31944);
   met_rebin7_fakes_TT_stack_2->SetBinContent(3,12.63888);
   met_rebin7_fakes_TT_stack_2->SetBinContent(4,12.99596);
   met_rebin7_fakes_TT_stack_2->SetBinContent(5,13.99305);
   met_rebin7_fakes_TT_stack_2->SetBinContent(6,30.44965);
   met_rebin7_fakes_TT_stack_2->SetBinContent(7,48.00665);
   met_rebin7_fakes_TT_stack_2->SetBinError(2,0.9751108);
   met_rebin7_fakes_TT_stack_2->SetBinError(3,1.379015);
   met_rebin7_fakes_TT_stack_2->SetBinError(4,1.416983);
   met_rebin7_fakes_TT_stack_2->SetBinError(5,1.451011);
   met_rebin7_fakes_TT_stack_2->SetBinError(6,2.183989);
   met_rebin7_fakes_TT_stack_2->SetBinError(7,2.718901);
   met_rebin7_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin7_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin7_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin7_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
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
   Double_t xAxis5[8] = {0, 27.45013, 34.90026, 42.58295, 50.77026, 58.95756, 78.66157, 380}; 
   
   TH1D *met_rebin7_fakes_DY_stack_3 = new TH1D("met_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   met_rebin7_fakes_DY_stack_3->SetBinContent(2,81.70948);
   met_rebin7_fakes_DY_stack_3->SetBinContent(3,77.81856);
   met_rebin7_fakes_DY_stack_3->SetBinContent(4,50.58206);
   met_rebin7_fakes_DY_stack_3->SetBinContent(5,23.34557);
   met_rebin7_fakes_DY_stack_3->SetBinContent(6,23.34557);
   met_rebin7_fakes_DY_stack_3->SetBinContent(7,7.781856);
   met_rebin7_fakes_DY_stack_3->SetBinError(2,17.83047);
   met_rebin7_fakes_DY_stack_3->SetBinError(3,17.40076);
   met_rebin7_fakes_DY_stack_3->SetBinError(4,14.02894);
   met_rebin7_fakes_DY_stack_3->SetBinError(5,9.530788);
   met_rebin7_fakes_DY_stack_3->SetBinError(6,9.530788);
   met_rebin7_fakes_DY_stack_3->SetBinError(7,5.502603);
   met_rebin7_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin7_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin7_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin7_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
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
   Double_t xAxis6[8] = {0, 27.45013, 34.90026, 42.58295, 50.77026, 58.95756, 78.66157, 380}; 
   
   TH1D *met_rebin7_prompt_ZZ_stack_4 = new TH1D("met_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(2,33.2152);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(3,42.34939);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(4,26.57216);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(5,20.34431);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(6,22.42026);
   met_rebin7_prompt_ZZ_stack_4->SetBinContent(7,20.34431);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(2,3.713573);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(3,4.193214);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(4,3.32152);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(5,2.90633);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(6,3.051011);
   met_rebin7_prompt_ZZ_stack_4->SetBinError(7,2.90633);
   met_rebin7_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin7_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin7_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin7_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
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
   Double_t xAxis7[8] = {0, 27.45013, 34.90026, 42.58295, 50.77026, 58.95756, 78.66157, 380}; 
   
   TH1D *met_rebin7_prompt_WZ_stack_5 = new TH1D("met_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(2,302.9047);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(3,477.4843);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(4,477.2796);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(5,387.6362);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(6,588.6176);
   met_rebin7_prompt_WZ_stack_5->SetBinContent(7,594.5529);
   met_rebin7_prompt_WZ_stack_5->SetBinError(2,7.873633);
   met_rebin7_prompt_WZ_stack_5->SetBinError(3,9.88557);
   met_rebin7_prompt_WZ_stack_5->SetBinError(4,9.883451);
   met_rebin7_prompt_WZ_stack_5->SetBinError(5,8.907059);
   met_rebin7_prompt_WZ_stack_5->SetBinError(6,10.97587);
   met_rebin7_prompt_WZ_stack_5->SetBinError(7,11.03106);
   met_rebin7_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin7_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin7_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin7_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
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
   Double_t xAxis8[8] = {0, 27.45013, 34.90026, 42.58295, 50.77026, 58.95756, 78.66157, 380}; 
   
   TH1D *met_rebin7_total__2 = new TH1D("met_rebin7_total__2","dummy",7, xAxis8);
   met_rebin7_total__2->SetBinContent(2,424.1489);
   met_rebin7_total__2->SetBinContent(3,610.2911);
   met_rebin7_total__2->SetBinContent(4,567.6497);
   met_rebin7_total__2->SetBinContent(5,446.1988);
   met_rebin7_total__2->SetBinContent(6,664.833);
   met_rebin7_total__2->SetBinContent(7,671.1255);
   met_rebin7_total__2->SetBinError(2,19.86608);
   met_rebin7_total__2->SetBinError(3,20.49379);
   met_rebin7_total__2->SetBinError(4,17.53803);
   met_rebin7_total__2->SetBinError(5,13.45055);
   met_rebin7_total__2->SetBinError(6,15.01279);
   met_rebin7_total__2->SetBinError(7,12.95758);
   met_rebin7_total__2->SetMinimum(0);
   met_rebin7_total__2->SetMaximum(1342.251);
   met_rebin7_total__2->SetEntries(15153);
   met_rebin7_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin7_total__2->SetFillColor(ci);
   met_rebin7_total__2->SetMarkerStyle(20);
   met_rebin7_total__2->SetMarkerSize(1.1);
   met_rebin7_total__2->GetXaxis()->SetTitle("met");
   met_rebin7_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin7_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin7_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin7_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin7_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin7_total__2->GetYaxis()->SetTitle("Events");
   met_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin7_total__2->GetYaxis()->SetLabelSize(0.05);
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
   31.17519,
   38.74161,
   46.67661,
   54.86391,
   68.80956,
   229.3308};
   Double_t met_rebin7_total_errors_fy3001[6] = {
   424.1489,
   610.2911,
   567.6497,
   446.1988,
   664.833,
   671.1255};
   Double_t met_rebin7_total_errors_felx3001[6] = {
   3.725064,
   3.841349,
   4.093651,
   4.093651,
   9.852005,
   150.6692};
   Double_t met_rebin7_total_errors_fely3001[6] = {
   36.39285,
   38.54194,
   32.29565,
   29.11203,
   52.52912,
   60.05224};
   Double_t met_rebin7_total_errors_fehx3001[6] = {
   3.725064,
   3.841349,
   4.093651,
   4.093651,
   9.852005,
   150.6692};
   Double_t met_rebin7_total_errors_fehy3001[6] = {
   25.6223,
   38.67069,
   34.61916,
   31.29883,
   57.14102,
   64.98171};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,met_rebin7_total_errors_fx3001,met_rebin7_total_errors_fy3001,met_rebin7_total_errors_felx3001,met_rebin7_total_errors_fehx3001,met_rebin7_total_errors_fely3001,met_rebin7_total_errors_fehy3001);
   grae->SetName("met_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin7_total_errors3001 = new TH1F("Graph_met_rebin7_total_errors3001","Graph",100,0,415.255);
   Graph_met_rebin7_total_errors3001->SetMinimum(352.9209);
   Graph_met_rebin7_total_errors3001->SetMaximum(770.9424);
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
