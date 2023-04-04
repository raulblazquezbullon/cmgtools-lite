void m3lmet_Meas_rebin14()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin14_canvas/m3lmet_Meas_rebin14
//=========  (Tue Apr  4 21:30:03 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin14_canvas = new TCanvas("m3lmet_Meas_rebin14_canvas", "m3lmet_Meas_rebin14",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin14_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin14_canvas->Range(-115.3846,-191.2626,525.641,1279.989);
   m3lmet_Meas_rebin14_canvas->SetFillColor(0);
   m3lmet_Meas_rebin14_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin14_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin14_canvas->SetTickx(1);
   m3lmet_Meas_rebin14_canvas->SetTicky(1);
   m3lmet_Meas_rebin14_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin14_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin14_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin14_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin14_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin14_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin14_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin14_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[15] = {0, 157.5633, 170.8822, 184.2012, 197.5202, 209.8974, 222.0591, 234.2208, 246.3826, 262.5448, 280.4007, 298.2567, 326.585, 365.6933, 500}; 
   
   TH1D *m3lmet_Meas_rebin14_total__1 = new TH1D("m3lmet_Meas_rebin14_total__1","dummy",14, xAxis1);
   m3lmet_Meas_rebin14_total__1->SetBinContent(1,46.47952);
   m3lmet_Meas_rebin14_total__1->SetBinContent(2,64.90594);
   m3lmet_Meas_rebin14_total__1->SetBinContent(3,114.7582);
   m3lmet_Meas_rebin14_total__1->SetBinContent(4,184.1031);
   m3lmet_Meas_rebin14_total__1->SetBinContent(5,218.1605);
   m3lmet_Meas_rebin14_total__1->SetBinContent(6,235.5937);
   m3lmet_Meas_rebin14_total__1->SetBinContent(7,257.5682);
   m3lmet_Meas_rebin14_total__1->SetBinContent(8,260.132);
   m3lmet_Meas_rebin14_total__1->SetBinContent(9,306.053);
   m3lmet_Meas_rebin14_total__1->SetBinContent(10,274.8776);
   m3lmet_Meas_rebin14_total__1->SetBinContent(11,245.027);
   m3lmet_Meas_rebin14_total__1->SetBinContent(12,294.8482);
   m3lmet_Meas_rebin14_total__1->SetBinContent(13,285.8834);
   m3lmet_Meas_rebin14_total__1->SetBinContent(14,595.8567);
   m3lmet_Meas_rebin14_total__1->SetBinError(1,11.78879);
   m3lmet_Meas_rebin14_total__1->SetBinError(2,9.303652);
   m3lmet_Meas_rebin14_total__1->SetBinError(3,10.50291);
   m3lmet_Meas_rebin14_total__1->SetBinError(4,12.45766);
   m3lmet_Meas_rebin14_total__1->SetBinError(5,11.51831);
   m3lmet_Meas_rebin14_total__1->SetBinError(6,11.04089);
   m3lmet_Meas_rebin14_total__1->SetBinError(7,10.60235);
   m3lmet_Meas_rebin14_total__1->SetBinError(8,11.88064);
   m3lmet_Meas_rebin14_total__1->SetBinError(9,12.30382);
   m3lmet_Meas_rebin14_total__1->SetBinError(10,7.60309);
   m3lmet_Meas_rebin14_total__1->SetBinError(11,11.11225);
   m3lmet_Meas_rebin14_total__1->SetBinError(12,10.27787);
   m3lmet_Meas_rebin14_total__1->SetBinError(13,10.86552);
   m3lmet_Meas_rebin14_total__1->SetBinError(14,11.87022);
   m3lmet_Meas_rebin14_total__1->SetMinimum(0);
   m3lmet_Meas_rebin14_total__1->SetMaximum(1191.713);
   m3lmet_Meas_rebin14_total__1->SetEntries(15153);
   m3lmet_Meas_rebin14_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin14_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin14_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin14_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin14_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin14_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin14_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin14_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin14_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin14_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin14_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin14_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin14_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin14_stack = new THStack();
   m3lmet_Meas_rebin14_stack->SetName("m3lmet_Meas_rebin14_stack");
   m3lmet_Meas_rebin14_stack->SetTitle("m3lmet_Meas_rebin14");
   Double_t xAxis2[15] = {0, 157.5633, 170.8822, 184.2012, 197.5202, 209.8974, 222.0591, 234.2208, 246.3826, 262.5448, 280.4007, 298.2567, 326.585, 365.6933, 500}; 
   
   TH1F *m3lmet_Meas_rebin14_stack_stack_1 = new TH1F("m3lmet_Meas_rebin14_stack_stack_1","m3lmet_Meas_rebin14",14, xAxis2);
   m3lmet_Meas_rebin14_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin14_stack_stack_1->SetMaximum(625.6496);
   m3lmet_Meas_rebin14_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin14_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin14_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin14_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin14_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin14_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin14_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin14_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_stack->SetHistogram(m3lmet_Meas_rebin14_stack_stack_1);
   
   Double_t xAxis3[15] = {0, 157.5633, 170.8822, 184.2012, 197.5202, 209.8974, 222.0591, 234.2208, 246.3826, 262.5448, 280.4007, 298.2567, 326.585, 365.6933, 500}; 
   
   TH1D *m3lmet_Meas_rebin14_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin14_fakes_VV_stack_1","dummy",14, xAxis3);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetBinContent(5,0.2199288);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetBinContent(7,0.4398576);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetBinContent(12,0.6597863);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetBinContent(14,0.2199288);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetBinError(5,0.2199288);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetBinError(7,0.3110263);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetBinError(12,0.3809278);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetBinError(14,0.2199288);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_stack->Add(m3lmet_Meas_rebin14_fakes_VV_stack_1,"");
   Double_t xAxis4[15] = {0, 157.5633, 170.8822, 184.2012, 197.5202, 209.8974, 222.0591, 234.2208, 246.3826, 262.5448, 280.4007, 298.2567, 326.585, 365.6933, 500}; 
   
   TH1D *m3lmet_Meas_rebin14_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin14_fakes_TT_stack_2","dummy",14, xAxis4);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(1,1.607935);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(2,2.360249);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(3,4.570035);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(4,5.820895);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(5,7.372681);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(6,7.222218);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(7,8.877309);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(8,7.824069);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(9,10.08101);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(10,11.7361);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(11,10.93663);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(12,13.79543);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(13,11.43518);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinContent(14,20.76388);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(1,0.5178324);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(2,0.617532);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(3,0.860263);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(4,0.9497602);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(5,1.05324);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(6,1.042437);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(7,1.155727);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(8,1.125961);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(9,1.231592);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(10,1.328852);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(11,1.292971);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(12,1.449798);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(13,1.311705);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetBinError(14,1.805554);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_stack->Add(m3lmet_Meas_rebin14_fakes_TT_stack_2,"");
   Double_t xAxis5[15] = {0, 157.5633, 170.8822, 184.2012, 197.5202, 209.8974, 222.0591, 234.2208, 246.3826, 262.5448, 280.4007, 298.2567, 326.585, 365.6933, 500}; 
   
   TH1D *m3lmet_Meas_rebin14_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin14_fakes_DY_stack_3","dummy",14, xAxis5);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(1,35.01835);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(2,19.45464);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(3,23.34557);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(4,31.12742);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(5,23.34557);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(6,19.45464);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(7,15.56371);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(8,23.34557);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(9,23.34557);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(11,19.45464);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(12,11.67278);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(13,15.56371);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinContent(14,3.890928);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(1,11.67278);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(2,8.700379);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(3,9.530788);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(4,11.00521);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(5,9.530788);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(6,8.700379);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(7,7.781856);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(8,9.530788);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(9,9.530788);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(11,8.700379);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(12,6.739285);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(13,7.781856);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetBinError(14,3.890928);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_stack->Add(m3lmet_Meas_rebin14_fakes_DY_stack_3,"");
   Double_t xAxis6[15] = {0, 157.5633, 170.8822, 184.2012, 197.5202, 209.8974, 222.0591, 234.2208, 246.3826, 262.5448, 280.4007, 298.2567, 326.585, 365.6933, 500}; 
   
   TH1D *m3lmet_Meas_rebin14_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin14_prompt_ZZ_stack_4","dummy",14, xAxis6);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(1,2.07595);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(2,7.888611);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(3,4.567091);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(4,14.53165);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(5,11.21013);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(6,11.21013);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(7,13.28608);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(8,10.37975);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(9,15.36203);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(10,10.37975);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(11,10.37975);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(12,14.11646);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(13,13.28608);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinContent(14,26.57216);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(1,0.9283932);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(2,1.809771);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(3,1.37703);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(4,2.456297);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(5,2.157391);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(6,2.157391);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(7,2.34867);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(8,2.07595);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(9,2.525503);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(10,2.07595);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(11,2.07595);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(12,2.420953);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(13,2.34867);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetBinError(14,3.32152);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_stack->Add(m3lmet_Meas_rebin14_prompt_ZZ_stack_4,"");
   Double_t xAxis7[15] = {0, 157.5633, 170.8822, 184.2012, 197.5202, 209.8974, 222.0591, 234.2208, 246.3826, 262.5448, 280.4007, 298.2567, 326.585, 365.6933, 500}; 
   
   TH1D *m3lmet_Meas_rebin14_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin14_prompt_WZ_stack_5","dummy",14, xAxis7);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(1,7.777283);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(2,35.20244);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(3,82.27547);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(4,132.6231);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(5,176.0122);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(6,197.7067);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(7,219.4013);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(8,218.5826);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(9,257.2643);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(10,252.7617);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(11,204.256);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(12,254.6037);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(13,245.5984);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinContent(14,544.4098);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(1,1.261642);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(2,2.684161);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(3,4.103528);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(4,5.209929);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(5,6.001966);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(6,6.36111);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(7,6.701032);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(8,6.688519);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(9,7.256245);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(10,7.192466);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(11,6.465611);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(12,7.218626);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(13,7.089816);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetBinError(14,10.55565);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_stack->Add(m3lmet_Meas_rebin14_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin14_stack->Draw("same hist");
   Double_t xAxis8[15] = {0, 157.5633, 170.8822, 184.2012, 197.5202, 209.8974, 222.0591, 234.2208, 246.3826, 262.5448, 280.4007, 298.2567, 326.585, 365.6933, 500}; 
   
   TH1D *m3lmet_Meas_rebin14_total__2 = new TH1D("m3lmet_Meas_rebin14_total__2","dummy",14, xAxis8);
   m3lmet_Meas_rebin14_total__2->SetBinContent(1,46.47952);
   m3lmet_Meas_rebin14_total__2->SetBinContent(2,64.90594);
   m3lmet_Meas_rebin14_total__2->SetBinContent(3,114.7582);
   m3lmet_Meas_rebin14_total__2->SetBinContent(4,184.1031);
   m3lmet_Meas_rebin14_total__2->SetBinContent(5,218.1605);
   m3lmet_Meas_rebin14_total__2->SetBinContent(6,235.5937);
   m3lmet_Meas_rebin14_total__2->SetBinContent(7,257.5682);
   m3lmet_Meas_rebin14_total__2->SetBinContent(8,260.132);
   m3lmet_Meas_rebin14_total__2->SetBinContent(9,306.053);
   m3lmet_Meas_rebin14_total__2->SetBinContent(10,274.8776);
   m3lmet_Meas_rebin14_total__2->SetBinContent(11,245.027);
   m3lmet_Meas_rebin14_total__2->SetBinContent(12,294.8482);
   m3lmet_Meas_rebin14_total__2->SetBinContent(13,285.8834);
   m3lmet_Meas_rebin14_total__2->SetBinContent(14,595.8567);
   m3lmet_Meas_rebin14_total__2->SetBinError(1,11.78879);
   m3lmet_Meas_rebin14_total__2->SetBinError(2,9.303652);
   m3lmet_Meas_rebin14_total__2->SetBinError(3,10.50291);
   m3lmet_Meas_rebin14_total__2->SetBinError(4,12.45766);
   m3lmet_Meas_rebin14_total__2->SetBinError(5,11.51831);
   m3lmet_Meas_rebin14_total__2->SetBinError(6,11.04089);
   m3lmet_Meas_rebin14_total__2->SetBinError(7,10.60235);
   m3lmet_Meas_rebin14_total__2->SetBinError(8,11.88064);
   m3lmet_Meas_rebin14_total__2->SetBinError(9,12.30382);
   m3lmet_Meas_rebin14_total__2->SetBinError(10,7.60309);
   m3lmet_Meas_rebin14_total__2->SetBinError(11,11.11225);
   m3lmet_Meas_rebin14_total__2->SetBinError(12,10.27787);
   m3lmet_Meas_rebin14_total__2->SetBinError(13,10.86552);
   m3lmet_Meas_rebin14_total__2->SetBinError(14,11.87022);
   m3lmet_Meas_rebin14_total__2->SetMinimum(0);
   m3lmet_Meas_rebin14_total__2->SetMaximum(1191.713);
   m3lmet_Meas_rebin14_total__2->SetEntries(15153);
   m3lmet_Meas_rebin14_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin14_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin14_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin14_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin14_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin14_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin14_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin14_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin14_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin14_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin14_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin14_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin14_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin14_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin14_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin14_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin14_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin14_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin14_total_errors_fx3001[14] = {
   78.78163,
   164.2228,
   177.5417,
   190.8607,
   203.7088,
   215.9783,
   228.14,
   240.3017,
   254.4637,
   271.4727,
   289.3287,
   312.4208,
   346.1392,
   432.8467};
   Double_t m3lmet_Meas_rebin14_total_errors_fy3001[14] = {
   46.47952,
   64.90594,
   114.7582,
   184.1031,
   218.1605,
   235.5937,
   257.5682,
   260.132,
   306.053,
   274.8776,
   245.027,
   294.8482,
   285.8834,
   595.8567};
   Double_t m3lmet_Meas_rebin14_total_errors_felx3001[14] = {
   78.78163,
   6.659492,
   6.6595,
   6.6595,
   6.188591,
   6.080849,
   6.080856,
   6.080856,
   8.081108,
   8.927979,
   8.927979,
   14.16415,
   19.55417,
   67.15334};
   Double_t m3lmet_Meas_rebin14_total_errors_fely3001[14] = {
   4.486001,
   4.093171,
   9.888825,
   16.81762,
   15.97765,
   13.4046,
   14.68061,
   14.79296,
   29.67299,
   15.62013,
   20.23252,
   20.07346,
   18.25028,
   38.10682};
   Double_t m3lmet_Meas_rebin14_total_errors_fehx3001[14] = {
   78.78163,
   6.659492,
   6.6595,
   6.6595,
   6.188591,
   6.080849,
   6.080856,
   6.080856,
   8.081108,
   8.927979,
   8.927979,
   14.16415,
   19.55417,
   67.15334};
   Double_t m3lmet_Meas_rebin14_total_errors_fehy3001[14] = {
   7.412777,
   4.257524,
   6.928631,
   11.11599,
   13.15172,
   19.00877,
   16.64391,
   15.69433,
   18.49814,
   24.67936,
   15.08277,
   23.30383,
   18.55184,
   41.15551};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,m3lmet_Meas_rebin14_total_errors_fx3001,m3lmet_Meas_rebin14_total_errors_fy3001,m3lmet_Meas_rebin14_total_errors_felx3001,m3lmet_Meas_rebin14_total_errors_fehx3001,m3lmet_Meas_rebin14_total_errors_fely3001,m3lmet_Meas_rebin14_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin14_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin14_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin14_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin14_total_errors3001->SetMinimum(37.79417);
   Graph_m3lmet_Meas_rebin14_total_errors3001->SetMaximum(696.5141);
   Graph_m3lmet_Meas_rebin14_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin14_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin14_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin14_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin14_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin14_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin14_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin14_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin14_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin14_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin14_total_errors","Total unc.","F");

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
   m3lmet_Meas_rebin14_canvas->Modified();
   m3lmet_Meas_rebin14_canvas->cd();
   m3lmet_Meas_rebin14_canvas->SetSelected(m3lmet_Meas_rebin14_canvas);
}
