void m3lmet_Meas_rebin10()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin10_canvas/m3lmet_Meas_rebin10
//=========  (Sat May  6 16:40:00 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin10_canvas = new TCanvas("m3lmet_Meas_rebin10_canvas", "m3lmet_Meas_rebin10",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin10_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin10_canvas->Range(-115.3846,-238.9413,525.641,1599.069);
   m3lmet_Meas_rebin10_canvas->SetFillColor(0);
   m3lmet_Meas_rebin10_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin10_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin10_canvas->SetTickx(1);
   m3lmet_Meas_rebin10_canvas->SetTicky(1);
   m3lmet_Meas_rebin10_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin10_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin10_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin10_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin10_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin10_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin10_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin10_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_total__1 = new TH1D("m3lmet_Meas_rebin10_total__1","dummy",10, xAxis1);
   m3lmet_Meas_rebin10_total__1->SetBinContent(1,68.57076);
   m3lmet_Meas_rebin10_total__1->SetBinContent(2,133.6337);
   m3lmet_Meas_rebin10_total__1->SetBinContent(3,250.1595);
   m3lmet_Meas_rebin10_total__1->SetBinContent(4,314.53);
   m3lmet_Meas_rebin10_total__1->SetBinContent(5,354.6752);
   m3lmet_Meas_rebin10_total__1->SetBinContent(6,367.9778);
   m3lmet_Meas_rebin10_total__1->SetBinContent(7,427.0597);
   m3lmet_Meas_rebin10_total__1->SetBinContent(8,349.0827);
   m3lmet_Meas_rebin10_total__1->SetBinContent(9,374.1636);
   m3lmet_Meas_rebin10_total__1->SetBinContent(10,744.3941);
   m3lmet_Meas_rebin10_total__1->SetBinError(1,13.68154);
   m3lmet_Meas_rebin10_total__1->SetBinError(2,11.98181);
   m3lmet_Meas_rebin10_total__1->SetBinError(3,13.54943);
   m3lmet_Meas_rebin10_total__1->SetBinError(4,12.9579);
   m3lmet_Meas_rebin10_total__1->SetBinError(5,13.25814);
   m3lmet_Meas_rebin10_total__1->SetBinError(6,13.36142);
   m3lmet_Meas_rebin10_total__1->SetBinError(7,12.74034);
   m3lmet_Meas_rebin10_total__1->SetBinError(8,12.62463);
   m3lmet_Meas_rebin10_total__1->SetBinError(9,11.10717);
   m3lmet_Meas_rebin10_total__1->SetBinError(10,14.65689);
   m3lmet_Meas_rebin10_total__1->SetMinimum(0);
   m3lmet_Meas_rebin10_total__1->SetMaximum(1488.788);
   m3lmet_Meas_rebin10_total__1->SetEntries(15153);
   m3lmet_Meas_rebin10_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin10_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin10_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin10_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin10_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin10_stack = new THStack();
   m3lmet_Meas_rebin10_stack->SetName("m3lmet_Meas_rebin10_stack");
   m3lmet_Meas_rebin10_stack->SetTitle("m3lmet_Meas_rebin10");
   Double_t xAxis2[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1F *m3lmet_Meas_rebin10_stack_stack_1 = new TH1F("m3lmet_Meas_rebin10_stack_stack_1","m3lmet_Meas_rebin10",10, xAxis2);
   m3lmet_Meas_rebin10_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin10_stack_stack_1->SetMaximum(781.6138);
   m3lmet_Meas_rebin10_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin10_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin10_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin10_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin10_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->SetHistogram(m3lmet_Meas_rebin10_stack_stack_1);
   
   Double_t xAxis3[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin10_fakes_VV_stack_1","dummy",10, xAxis3);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(3,0.2199288);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(5,0.4398576);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(9,0.6597863);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(10,0.2199288);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(3,0.2199288);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(5,0.3110263);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(9,0.3809278);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(10,0.2199288);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_fakes_VV_stack_1,"");
   Double_t xAxis4[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(1,2.360249);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(2,4.974267);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(3,8.980615);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(4,9.930549);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(5,11.58564);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(6,12.63888);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(7,15.19675);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(8,16.30614);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(9,16.24999);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(10,26.18054);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(1,0.617532);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(2,0.909445);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(3,1.173655);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(4,1.222366);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(5,1.320306);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(6,1.411467);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(7,1.512133);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(8,1.583004);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(9,1.563656);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(10,2.018671);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_fakes_TT_stack_2,"");
   Double_t xAxis5[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin10_fakes_DY_stack_3","dummy",10, xAxis5);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(1,46.69113);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(2,31.12742);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(3,35.01835);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(4,27.23649);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(5,27.23649);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(6,27.23649);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(7,19.45464);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(8,23.34557);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(9,11.67278);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(10,15.56371);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(1,13.47857);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(2,11.00521);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(3,11.67278);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(4,10.29443);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(5,10.29443);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(6,10.29443);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(7,8.700379);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(8,9.530788);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(9,6.739285);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(10,7.781856);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_fakes_DY_stack_3,"");
   Double_t xAxis6[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin10_prompt_ZZ_stack_4","dummy",10, xAxis6);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(1,5.397471);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(2,7.888611);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(3,17.85317);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(4,17.43798);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(5,16.19241);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(6,16.19241);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(7,19.09874);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(8,12.87089);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(9,22.00507);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(10,30.30887);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(1,1.496989);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(2,1.809771);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(3,2.722583);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(4,2.690739);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(5,2.592861);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(6,2.592861);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(7,2.815956);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(8,2.31168);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(9,3.022629);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(10,3.547385);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_prompt_ZZ_stack_4,"");
   Double_t xAxis7[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(1,14.12191);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(2,89.64342);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(3,188.0875);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(4,259.925);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(5,299.2207);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(6,311.91);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(7,373.3096);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(8,296.5601);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(9,323.5759);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(10,672.121);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(1,1.700078);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(2,4.283329);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(3,6.204433);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(4,7.293671);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(5,7.825607);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(6,7.989817);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(7,8.740912);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(8,7.790737);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(9,8.137861);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(10,11.72859);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_stack->Add(m3lmet_Meas_rebin10_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin10_stack->Draw("same hist");
   Double_t xAxis8[11] = {0, 162.8909, 181.5374, 200.1681, 217.1944, 234.2208, 251.8312, 276.8295, 303.0159, 344.2618, 500}; 
   
   TH1D *m3lmet_Meas_rebin10_total__2 = new TH1D("m3lmet_Meas_rebin10_total__2","dummy",10, xAxis8);
   m3lmet_Meas_rebin10_total__2->SetBinContent(1,68.57076);
   m3lmet_Meas_rebin10_total__2->SetBinContent(2,133.6337);
   m3lmet_Meas_rebin10_total__2->SetBinContent(3,250.1595);
   m3lmet_Meas_rebin10_total__2->SetBinContent(4,314.53);
   m3lmet_Meas_rebin10_total__2->SetBinContent(5,354.6752);
   m3lmet_Meas_rebin10_total__2->SetBinContent(6,367.9778);
   m3lmet_Meas_rebin10_total__2->SetBinContent(7,427.0597);
   m3lmet_Meas_rebin10_total__2->SetBinContent(8,349.0827);
   m3lmet_Meas_rebin10_total__2->SetBinContent(9,374.1636);
   m3lmet_Meas_rebin10_total__2->SetBinContent(10,744.3941);
   m3lmet_Meas_rebin10_total__2->SetBinError(1,13.68154);
   m3lmet_Meas_rebin10_total__2->SetBinError(2,11.98181);
   m3lmet_Meas_rebin10_total__2->SetBinError(3,13.54943);
   m3lmet_Meas_rebin10_total__2->SetBinError(4,12.9579);
   m3lmet_Meas_rebin10_total__2->SetBinError(5,13.25814);
   m3lmet_Meas_rebin10_total__2->SetBinError(6,13.36142);
   m3lmet_Meas_rebin10_total__2->SetBinError(7,12.74034);
   m3lmet_Meas_rebin10_total__2->SetBinError(8,12.62463);
   m3lmet_Meas_rebin10_total__2->SetBinError(9,11.10717);
   m3lmet_Meas_rebin10_total__2->SetBinError(10,14.65689);
   m3lmet_Meas_rebin10_total__2->SetMinimum(0);
   m3lmet_Meas_rebin10_total__2->SetMaximum(1488.788);
   m3lmet_Meas_rebin10_total__2->SetEntries(15153);
   m3lmet_Meas_rebin10_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin10_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin10_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin10_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin10_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin10_total_errors_fx3001[10] = {
   81.44543,
   172.2141,
   190.8528,
   208.6813,
   225.7076,
   243.026,
   264.3304,
   289.9227,
   323.6388,
   422.1309};
   Double_t m3lmet_Meas_rebin10_total_errors_fy3001[10] = {
   68.57076,
   133.6337,
   250.1595,
   314.53,
   354.6752,
   367.9778,
   427.0597,
   349.0827,
   374.1636,
   744.3941};
   Double_t m3lmet_Meas_rebin10_total_errors_felx3001[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_total_errors_fely3001[10] = {
   8.538838,
   8.701485,
   18.10505,
   19.33095,
   20.20664,
   20.92878,
   31.30281,
   26.24505,
   22.00889,
   50.73594};
   Double_t m3lmet_Meas_rebin10_total_errors_fehx3001[10] = {
   81.44543,
   9.323296,
   9.315308,
   8.513191,
   8.513199,
   8.805183,
   12.49916,
   13.09319,
   20.62294,
   77.86911};
   Double_t m3lmet_Meas_rebin10_total_errors_fehy3001[10] = {
   4.146631,
   8.081187,
   15.10674,
   18.95666,
   26.60193,
   22.24543,
   28.20904,
   24.79559,
   24.90253,
   53.17178};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,m3lmet_Meas_rebin10_total_errors_fx3001,m3lmet_Meas_rebin10_total_errors_fy3001,m3lmet_Meas_rebin10_total_errors_felx3001,m3lmet_Meas_rebin10_total_errors_fehx3001,m3lmet_Meas_rebin10_total_errors_fely3001,m3lmet_Meas_rebin10_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin10_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin10_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetMinimum(54.02873);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetMaximum(871.3192);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin10_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin10_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin10_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin10_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin10_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin10_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin10_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin10_canvas->Modified();
   m3lmet_Meas_rebin10_canvas->cd();
   m3lmet_Meas_rebin10_canvas->SetSelected(m3lmet_Meas_rebin10_canvas);
}
