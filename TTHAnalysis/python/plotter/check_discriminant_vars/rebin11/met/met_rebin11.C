void met_rebin11()
{
//=========Macro generated from canvas: met_rebin11_canvas/met_rebin11
//=========  (Tue Apr  4 21:28:17 2023) by ROOT version 6.24/07
   TCanvas *met_rebin11_canvas = new TCanvas("met_rebin11_canvas", "met_rebin11",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin11_canvas->SetHighLightColor(2);
   met_rebin11_canvas->Range(-87.69231,-155.6907,399.4872,1041.93);
   met_rebin11_canvas->SetFillColor(0);
   met_rebin11_canvas->SetBorderMode(0);
   met_rebin11_canvas->SetBorderSize(2);
   met_rebin11_canvas->SetTickx(1);
   met_rebin11_canvas->SetTicky(1);
   met_rebin11_canvas->SetLeftMargin(0.18);
   met_rebin11_canvas->SetRightMargin(0.04);
   met_rebin11_canvas->SetTopMargin(0.06);
   met_rebin11_canvas->SetBottomMargin(0.13);
   met_rebin11_canvas->SetFrameFillStyle(0);
   met_rebin11_canvas->SetFrameBorderMode(0);
   met_rebin11_canvas->SetFrameFillStyle(0);
   met_rebin11_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[12] = {0, 24.73617, 29.47234, 34.20851, 38.94468, 44.0482, 49.25705, 54.46589, 59.67473, 72.74545, 95.39948, 380}; 
   
   TH1D *met_rebin11_total__1 = new TH1D("met_rebin11_total__1","dummy",11, xAxis1);
   met_rebin11_total__1->SetBinContent(3,368.9547);
   met_rebin11_total__1->SetBinContent(4,381.001);
   met_rebin11_total__1->SetBinContent(5,395.1603);
   met_rebin11_total__1->SetBinContent(6,359.7687);
   met_rebin11_total__1->SetBinContent(7,312.5619);
   met_rebin11_total__1->SetBinContent(8,261.4324);
   met_rebin11_total__1->SetBinContent(9,485.0365);
   met_rebin11_total__1->SetBinContent(10,418.8574);
   met_rebin11_total__1->SetBinContent(11,401.4741);
   met_rebin11_total__1->SetBinError(3,19.19073);
   met_rebin11_total__1->SetBinError(4,15.06727);
   met_rebin11_total__1->SetBinError(5,17.33696);
   met_rebin11_total__1->SetBinError(6,13.84668);
   met_rebin11_total__1->SetBinError(7,12.3358);
   met_rebin11_total__1->SetBinError(8,8.360966);
   met_rebin11_total__1->SetBinError(9,13.1551);
   met_rebin11_total__1->SetBinError(10,10.75921);
   met_rebin11_total__1->SetBinError(11,9.896305);
   met_rebin11_total__1->SetMinimum(0);
   met_rebin11_total__1->SetMaximum(970.073);
   met_rebin11_total__1->SetEntries(15153);
   met_rebin11_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin11_total__1->SetFillColor(ci);
   met_rebin11_total__1->SetMarkerStyle(20);
   met_rebin11_total__1->SetMarkerSize(1.1);
   met_rebin11_total__1->GetXaxis()->SetTitle("met");
   met_rebin11_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin11_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin11_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin11_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin11_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin11_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin11_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin11_total__1->GetYaxis()->SetTitle("Events");
   met_rebin11_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin11_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin11_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin11_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin11_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin11_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin11_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin11_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin11_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin11_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin11_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin11_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin11_total__1->Draw("HIST");
   
   THStack *met_rebin11_stack = new THStack();
   met_rebin11_stack->SetName("met_rebin11_stack");
   met_rebin11_stack->SetTitle("met_rebin11");
   Double_t xAxis2[12] = {0, 24.73617, 29.47234, 34.20851, 38.94468, 44.0482, 49.25705, 54.46589, 59.67473, 72.74545, 95.39948, 380}; 
   
   TH1F *met_rebin11_stack_stack_1 = new TH1F("met_rebin11_stack_stack_1","met_rebin11",11, xAxis2);
   met_rebin11_stack_stack_1->SetMinimum(0);
   met_rebin11_stack_stack_1->SetMaximum(509.2883);
   met_rebin11_stack_stack_1->SetDirectory(0);
   met_rebin11_stack_stack_1->SetStats(0);
   met_rebin11_stack_stack_1->SetLineStyle(0);
   met_rebin11_stack_stack_1->SetMarkerStyle(20);
   met_rebin11_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin11_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin11_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin11_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin11_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin11_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin11_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin11_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin11_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin11_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin11_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin11_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin11_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin11_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin11_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin11_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin11_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin11_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin11_stack->SetHistogram(met_rebin11_stack_stack_1);
   
   Double_t xAxis3[12] = {0, 24.73617, 29.47234, 34.20851, 38.94468, 44.0482, 49.25705, 54.46589, 59.67473, 72.74545, 95.39948, 380}; 
   
   TH1D *met_rebin11_fakes_VV_stack_1 = new TH1D("met_rebin11_fakes_VV_stack_1","dummy",11, xAxis3);
   met_rebin11_fakes_VV_stack_1->SetBinContent(6,0.2199288);
   met_rebin11_fakes_VV_stack_1->SetBinContent(8,0.8797151);
   met_rebin11_fakes_VV_stack_1->SetBinContent(11,0.4398576);
   met_rebin11_fakes_VV_stack_1->SetBinError(6,0.2199288);
   met_rebin11_fakes_VV_stack_1->SetBinError(8,0.4398576);
   met_rebin11_fakes_VV_stack_1->SetBinError(11,0.3110263);
   met_rebin11_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin11_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin11_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin11_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin11_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin11_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin11_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin11_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin11_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin11_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin11_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin11_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin11_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin11_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin11_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin11_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin11_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin11_stack->Add(met_rebin11_fakes_VV_stack_1,"");
   Double_t xAxis4[12] = {0, 24.73617, 29.47234, 34.20851, 38.94468, 44.0482, 49.25705, 54.46589, 59.67473, 72.74545, 95.39948, 380}; 
   
   TH1D *met_rebin11_fakes_TT_stack_2 = new TH1D("met_rebin11_fakes_TT_stack_2","dummy",11, xAxis4);
   met_rebin11_fakes_TT_stack_2->SetBinContent(3,5.416663);
   met_rebin11_fakes_TT_stack_2->SetBinContent(4,7.673606);
   met_rebin11_fakes_TT_stack_2->SetBinContent(5,7.974532);
   met_rebin11_fakes_TT_stack_2->SetBinContent(6,8.48207);
   met_rebin11_fakes_TT_stack_2->SetBinContent(7,7.222218);
   met_rebin11_fakes_TT_stack_2->SetBinContent(8,10.68286);
   met_rebin11_fakes_TT_stack_2->SetBinContent(9,22.47512);
   met_rebin11_fakes_TT_stack_2->SetBinContent(10,23.67882);
   met_rebin11_fakes_TT_stack_2->SetBinContent(11,30.79773);
   met_rebin11_fakes_TT_stack_2->SetBinError(3,0.9027772);
   met_rebin11_fakes_TT_stack_2->SetBinError(4,1.07452);
   met_rebin11_fakes_TT_stack_2->SetBinError(5,1.095386);
   met_rebin11_fakes_TT_stack_2->SetBinError(6,1.152679);
   met_rebin11_fakes_TT_stack_2->SetBinError(7,1.042437);
   met_rebin11_fakes_TT_stack_2->SetBinError(8,1.267823);
   met_rebin11_fakes_TT_stack_2->SetBinError(9,1.877407);
   met_rebin11_fakes_TT_stack_2->SetBinError(10,1.913242);
   met_rebin11_fakes_TT_stack_2->SetBinError(11,2.179607);
   met_rebin11_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin11_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin11_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin11_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin11_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin11_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin11_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin11_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin11_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin11_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin11_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin11_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin11_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin11_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin11_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin11_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin11_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin11_stack->Add(met_rebin11_fakes_TT_stack_2,"");
   Double_t xAxis5[12] = {0, 24.73617, 29.47234, 34.20851, 38.94468, 44.0482, 49.25705, 54.46589, 59.67473, 72.74545, 95.39948, 380}; 
   
   TH1D *met_rebin11_fakes_DY_stack_3 = new TH1D("met_rebin11_fakes_DY_stack_3","dummy",11, xAxis5);
   met_rebin11_fakes_DY_stack_3->SetBinContent(3,77.81856);
   met_rebin11_fakes_DY_stack_3->SetBinContent(4,38.90928);
   met_rebin11_fakes_DY_stack_3->SetBinContent(5,58.36392);
   met_rebin11_fakes_DY_stack_3->SetBinContent(6,31.12742);
   met_rebin11_fakes_DY_stack_3->SetBinContent(7,23.34557);
   met_rebin11_fakes_DY_stack_3->SetBinContent(8,3.890928);
   met_rebin11_fakes_DY_stack_3->SetBinContent(9,19.45464);
   met_rebin11_fakes_DY_stack_3->SetBinContent(10,7.781856);
   met_rebin11_fakes_DY_stack_3->SetBinContent(11,3.890928);
   met_rebin11_fakes_DY_stack_3->SetBinError(3,17.40076);
   met_rebin11_fakes_DY_stack_3->SetBinError(4,12.30419);
   met_rebin11_fakes_DY_stack_3->SetBinError(5,15.0695);
   met_rebin11_fakes_DY_stack_3->SetBinError(6,11.00521);
   met_rebin11_fakes_DY_stack_3->SetBinError(7,9.530788);
   met_rebin11_fakes_DY_stack_3->SetBinError(8,3.890928);
   met_rebin11_fakes_DY_stack_3->SetBinError(9,8.700379);
   met_rebin11_fakes_DY_stack_3->SetBinError(10,5.502603);
   met_rebin11_fakes_DY_stack_3->SetBinError(11,3.890928);
   met_rebin11_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin11_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin11_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin11_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin11_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin11_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin11_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin11_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin11_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin11_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin11_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin11_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin11_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin11_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin11_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin11_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin11_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin11_stack->Add(met_rebin11_fakes_DY_stack_3,"");
   Double_t xAxis6[12] = {0, 24.73617, 29.47234, 34.20851, 38.94468, 44.0482, 49.25705, 54.46589, 59.67473, 72.74545, 95.39948, 380}; 
   
   TH1D *met_rebin11_prompt_ZZ_stack_4 = new TH1D("met_rebin11_prompt_ZZ_stack_4","dummy",11, xAxis6);
   met_rebin11_prompt_ZZ_stack_4->SetBinContent(3,29.47849);
   met_rebin11_prompt_ZZ_stack_4->SetBinContent(4,28.64811);
   met_rebin11_prompt_ZZ_stack_4->SetBinContent(5,23.66583);
   met_rebin11_prompt_ZZ_stack_4->SetBinContent(6,17.85317);
   met_rebin11_prompt_ZZ_stack_4->SetBinContent(7,12.04051);
   met_rebin11_prompt_ZZ_stack_4->SetBinContent(8,12.4557);
   met_rebin11_prompt_ZZ_stack_4->SetBinContent(9,14.94684);
   met_rebin11_prompt_ZZ_stack_4->SetBinContent(10,12.04051);
   met_rebin11_prompt_ZZ_stack_4->SetBinContent(11,14.11646);
   met_rebin11_prompt_ZZ_stack_4->SetBinError(3,3.498454);
   met_rebin11_prompt_ZZ_stack_4->SetBinError(4,3.448828);
   met_rebin11_prompt_ZZ_stack_4->SetBinError(5,3.134616);
   met_rebin11_prompt_ZZ_stack_4->SetBinError(6,2.722583);
   met_rebin11_prompt_ZZ_stack_4->SetBinError(7,2.235867);
   met_rebin11_prompt_ZZ_stack_4->SetBinError(8,2.27409);
   met_rebin11_prompt_ZZ_stack_4->SetBinError(9,2.49114);
   met_rebin11_prompt_ZZ_stack_4->SetBinError(10,2.235867);
   met_rebin11_prompt_ZZ_stack_4->SetBinError(11,2.420953);
   met_rebin11_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin11_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin11_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin11_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin11_stack->Add(met_rebin11_prompt_ZZ_stack_4,"");
   Double_t xAxis7[12] = {0, 24.73617, 29.47234, 34.20851, 38.94468, 44.0482, 49.25705, 54.46589, 59.67473, 72.74545, 95.39948, 380}; 
   
   TH1D *met_rebin11_prompt_WZ_stack_5 = new TH1D("met_rebin11_prompt_WZ_stack_5","dummy",11, xAxis7);
   met_rebin11_prompt_WZ_stack_5->SetBinContent(3,256.241);
   met_rebin11_prompt_WZ_stack_5->SetBinContent(4,305.77);
   met_rebin11_prompt_WZ_stack_5->SetBinContent(5,305.156);
   met_rebin11_prompt_WZ_stack_5->SetBinContent(6,302.0861);
   met_rebin11_prompt_WZ_stack_5->SetBinContent(7,269.9536);
   met_rebin11_prompt_WZ_stack_5->SetBinContent(8,233.5232);
   met_rebin11_prompt_WZ_stack_5->SetBinContent(9,428.1599);
   met_rebin11_prompt_WZ_stack_5->SetBinContent(10,375.3563);
   met_rebin11_prompt_WZ_stack_5->SetBinContent(11,352.2291);
   met_rebin11_prompt_WZ_stack_5->SetBinError(3,7.241799);
   met_rebin11_prompt_WZ_stack_5->SetBinError(4,7.910786);
   met_rebin11_prompt_WZ_stack_5->SetBinError(5,7.902839);
   met_rebin11_prompt_WZ_stack_5->SetBinError(6,7.862986);
   met_rebin11_prompt_WZ_stack_5->SetBinError(7,7.433044);
   met_rebin11_prompt_WZ_stack_5->SetBinError(8,6.913328);
   met_rebin11_prompt_WZ_stack_5->SetBinError(9,9.361063);
   met_rebin11_prompt_WZ_stack_5->SetBinError(10,8.76484);
   met_rebin11_prompt_WZ_stack_5->SetBinError(11,8.490529);
   met_rebin11_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin11_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin11_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin11_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin11_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin11_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin11_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin11_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin11_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin11_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin11_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin11_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin11_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin11_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin11_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin11_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin11_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin11_stack->Add(met_rebin11_prompt_WZ_stack_5,"");
   met_rebin11_stack->Draw("same hist");
   Double_t xAxis8[12] = {0, 24.73617, 29.47234, 34.20851, 38.94468, 44.0482, 49.25705, 54.46589, 59.67473, 72.74545, 95.39948, 380}; 
   
   TH1D *met_rebin11_total__2 = new TH1D("met_rebin11_total__2","dummy",11, xAxis8);
   met_rebin11_total__2->SetBinContent(3,368.9547);
   met_rebin11_total__2->SetBinContent(4,381.001);
   met_rebin11_total__2->SetBinContent(5,395.1603);
   met_rebin11_total__2->SetBinContent(6,359.7687);
   met_rebin11_total__2->SetBinContent(7,312.5619);
   met_rebin11_total__2->SetBinContent(8,261.4324);
   met_rebin11_total__2->SetBinContent(9,485.0365);
   met_rebin11_total__2->SetBinContent(10,418.8574);
   met_rebin11_total__2->SetBinContent(11,401.4741);
   met_rebin11_total__2->SetBinError(3,19.19073);
   met_rebin11_total__2->SetBinError(4,15.06727);
   met_rebin11_total__2->SetBinError(5,17.33696);
   met_rebin11_total__2->SetBinError(6,13.84668);
   met_rebin11_total__2->SetBinError(7,12.3358);
   met_rebin11_total__2->SetBinError(8,8.360966);
   met_rebin11_total__2->SetBinError(9,13.1551);
   met_rebin11_total__2->SetBinError(10,10.75921);
   met_rebin11_total__2->SetBinError(11,9.896305);
   met_rebin11_total__2->SetMinimum(0);
   met_rebin11_total__2->SetMaximum(970.073);
   met_rebin11_total__2->SetEntries(15153);
   met_rebin11_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin11_total__2->SetFillColor(ci);
   met_rebin11_total__2->SetMarkerStyle(20);
   met_rebin11_total__2->SetMarkerSize(1.1);
   met_rebin11_total__2->GetXaxis()->SetTitle("met");
   met_rebin11_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin11_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin11_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin11_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin11_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin11_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin11_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin11_total__2->GetYaxis()->SetTitle("Events");
   met_rebin11_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin11_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin11_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin11_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin11_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin11_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin11_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin11_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin11_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin11_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin11_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin11_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin11_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin11_total_errors_fx3001[9] = {
   31.84043,
   36.5766,
   41.49644,
   46.65262,
   51.86147,
   57.07031,
   66.21009,
   84.07246,
   237.6997};
   Double_t met_rebin11_total_errors_fy3001[9] = {
   368.9547,
   381.001,
   395.1603,
   359.7687,
   312.5619,
   261.4324,
   485.0365,
   418.8574,
   401.4741};
   Double_t met_rebin11_total_errors_felx3001[9] = {
   2.368085,
   2.368086,
   2.55176,
   2.604422,
   2.60442,
   2.604422,
   6.535358,
   11.32701,
   142.3003};
   Double_t met_rebin11_total_errors_fely3001[9] = {
   30.95277,
   28.9752,
   22.61511,
   20.78289,
   18.98079,
   15.644,
   45.96848,
   37.42903,
   32.78623};
   Double_t met_rebin11_total_errors_fehx3001[9] = {
   2.368085,
   2.368086,
   2.55176,
   2.604422,
   2.60442,
   2.604422,
   6.535358,
   11.32701,
   142.3003};
   Double_t met_rebin11_total_errors_fehy3001[9] = {
   22.2915,
   27.36743,
   23.83201,
   22.42251,
   22.12334,
   23.39698,
   34.01252,
   39.7882,
   44.2947};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,met_rebin11_total_errors_fx3001,met_rebin11_total_errors_fy3001,met_rebin11_total_errors_felx3001,met_rebin11_total_errors_fehx3001,met_rebin11_total_errors_fely3001,met_rebin11_total_errors_fehy3001);
   grae->SetName("met_rebin11_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin11_total_errors3001 = new TH1F("Graph_met_rebin11_total_errors3001","Graph",100,0,415.0528);
   Graph_met_rebin11_total_errors3001->SetMinimum(218.4623);
   Graph_met_rebin11_total_errors3001->SetMaximum(546.3751);
   Graph_met_rebin11_total_errors3001->SetDirectory(0);
   Graph_met_rebin11_total_errors3001->SetStats(0);
   Graph_met_rebin11_total_errors3001->SetLineStyle(0);
   Graph_met_rebin11_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin11_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin11_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin11_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin11_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin11_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin11_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin11_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin11_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin11_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin11_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin11_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin11_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin11_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin11_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin11_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin11_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin11_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin11_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin11_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin11_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin11_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin11_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin11_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin11_total_errors","Total unc.","F");

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
   met_rebin11_canvas->Modified();
   met_rebin11_canvas->cd();
   met_rebin11_canvas->SetSelected(met_rebin11_canvas);
}
