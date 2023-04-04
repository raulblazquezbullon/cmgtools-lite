void m3lmet_Meas_rebin15()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin15_canvas/m3lmet_Meas_rebin15
//=========  (Tue Apr  4 21:32:41 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin15_canvas = new TCanvas("m3lmet_Meas_rebin15_canvas", "m3lmet_Meas_rebin15",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin15_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin15_canvas->Range(-115.3846,-181.6192,525.641,1215.452);
   m3lmet_Meas_rebin15_canvas->SetFillColor(0);
   m3lmet_Meas_rebin15_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin15_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin15_canvas->SetTickx(1);
   m3lmet_Meas_rebin15_canvas->SetTicky(1);
   m3lmet_Meas_rebin15_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin15_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin15_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin15_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin15_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin15_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin15_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin15_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[16] = {0, 156.6753, 169.1064, 181.5374, 193.9685, 205.8435, 217.1944, 228.5454, 239.8963, 251.8312, 268.4968, 285.1623, 303.0159, 330.5132, 370.7912, 500}; 
   
   TH1D *m3lmet_Meas_rebin15_total__1 = new TH1D("m3lmet_Meas_rebin15_total__1","dummy",15, xAxis1);
   m3lmet_Meas_rebin15_total__1->SetBinContent(1,45.30573);
   m3lmet_Meas_rebin15_total__1->SetBinContent(2,56.29242);
   m3lmet_Meas_rebin15_total__1->SetBinContent(3,100.6063);
   m3lmet_Meas_rebin15_total__1->SetBinContent(4,155.7541);
   m3lmet_Meas_rebin15_total__1->SetBinContent(5,194.4183);
   m3lmet_Meas_rebin15_total__1->SetBinContent(6,214.5172);
   m3lmet_Meas_rebin15_total__1->SetBinContent(7,233.881);
   m3lmet_Meas_rebin15_total__1->SetBinContent(8,243.3143);
   m3lmet_Meas_rebin15_total__1->SetBinContent(9,245.4576);
   m3lmet_Meas_rebin15_total__1->SetBinContent(10,292.9412);
   m3lmet_Meas_rebin15_total__1->SetBinContent(11,254.8481);
   m3lmet_Meas_rebin15_total__1->SetBinContent(12,228.3531);
   m3lmet_Meas_rebin15_total__1->SetBinContent(13,268.8162);
   m3lmet_Meas_rebin15_total__1->SetBinContent(14,283.9276);
   m3lmet_Meas_rebin15_total__1->SetBinContent(15,565.8138);
   m3lmet_Meas_rebin15_total__1->SetBinError(1,11.77895);
   m3lmet_Meas_rebin15_total__1->SetBinError(2,9.194173);
   m3lmet_Meas_rebin15_total__1->SetBinError(3,10.36686);
   m3lmet_Meas_rebin15_total__1->SetBinError(4,10.94786);
   m3lmet_Meas_rebin15_total__1->SetBinError(5,11.33352);
   m3lmet_Meas_rebin15_total__1->SetBinError(6,10.15824);
   m3lmet_Meas_rebin15_total__1->SetBinError(7,11.64199);
   m3lmet_Meas_rebin15_total__1->SetBinError(8,10.4632);
   m3lmet_Meas_rebin15_total__1->SetBinError(9,10.45425);
   m3lmet_Meas_rebin15_total__1->SetBinError(10,11.57144);
   m3lmet_Meas_rebin15_total__1->SetBinError(11,10.52167);
   m3lmet_Meas_rebin15_total__1->SetBinError(12,8.780306);
   m3lmet_Meas_rebin15_total__1->SetBinError(13,9.291707);
   m3lmet_Meas_rebin15_total__1->SetBinError(14,10.83575);
   m3lmet_Meas_rebin15_total__1->SetBinError(15,11.59502);
   m3lmet_Meas_rebin15_total__1->SetMinimum(0);
   m3lmet_Meas_rebin15_total__1->SetMaximum(1131.628);
   m3lmet_Meas_rebin15_total__1->SetEntries(15153);
   m3lmet_Meas_rebin15_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin15_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin15_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin15_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin15_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin15_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin15_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin15_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin15_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin15_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin15_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin15_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin15_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin15_stack = new THStack();
   m3lmet_Meas_rebin15_stack->SetName("m3lmet_Meas_rebin15_stack");
   m3lmet_Meas_rebin15_stack->SetTitle("m3lmet_Meas_rebin15");
   Double_t xAxis2[16] = {0, 156.6753, 169.1064, 181.5374, 193.9685, 205.8435, 217.1944, 228.5454, 239.8963, 251.8312, 268.4968, 285.1623, 303.0159, 330.5132, 370.7912, 500}; 
   
   TH1F *m3lmet_Meas_rebin15_stack_stack_1 = new TH1F("m3lmet_Meas_rebin15_stack_stack_1","m3lmet_Meas_rebin15",15, xAxis2);
   m3lmet_Meas_rebin15_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin15_stack_stack_1->SetMaximum(594.1045);
   m3lmet_Meas_rebin15_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin15_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin15_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin15_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin15_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin15_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin15_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin15_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_stack->SetHistogram(m3lmet_Meas_rebin15_stack_stack_1);
   
   Double_t xAxis3[16] = {0, 156.6753, 169.1064, 181.5374, 193.9685, 205.8435, 217.1944, 228.5454, 239.8963, 251.8312, 268.4968, 285.1623, 303.0159, 330.5132, 370.7912, 500}; 
   
   TH1D *m3lmet_Meas_rebin15_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin15_fakes_VV_stack_1","dummy",15, xAxis3);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetBinContent(5,0.2199288);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetBinContent(8,0.4398576);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetBinContent(13,0.6597863);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetBinContent(15,0.2199288);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetBinError(5,0.2199288);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetBinError(8,0.3110263);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetBinError(13,0.3809278);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetBinError(15,0.2199288);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_stack->Add(m3lmet_Meas_rebin15_fakes_VV_stack_1,"");
   Double_t xAxis4[16] = {0, 156.6753, 169.1064, 181.5374, 193.9685, 205.8435, 217.1944, 228.5454, 239.8963, 251.8312, 268.4968, 285.1623, 303.0159, 330.5132, 370.7912, 500}; 
   
   TH1D *m3lmet_Meas_rebin15_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin15_fakes_TT_stack_2","dummy",15, xAxis4);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(1,1.457472);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(2,2.360249);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(3,3.516795);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(4,5.369507);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(5,6.921292);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(6,6.620366);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(7,7.372681);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(8,7.523143);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(9,9.328698);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(10,8.877309);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(11,12.18749);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(12,10.43809);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(13,11.28472);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(14,11.13425);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinContent(15,20.01156);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(1,0.495491);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(2,0.617532);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(3,0.7626132);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(4,0.9133057);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(5,1.020489);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(6,0.9980578);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(7,1.05324);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(8,1.063933);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(9,1.222366);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(10,1.155727);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(11,1.354166);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(12,1.273961);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(13,1.303047);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(14,1.294331);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetBinError(15,1.773931);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_stack->Add(m3lmet_Meas_rebin15_fakes_TT_stack_2,"");
   Double_t xAxis5[16] = {0, 156.6753, 169.1064, 181.5374, 193.9685, 205.8435, 217.1944, 228.5454, 239.8963, 251.8312, 268.4968, 285.1623, 303.0159, 330.5132, 370.7912, 500}; 
   
   TH1D *m3lmet_Meas_rebin15_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin15_fakes_DY_stack_3","dummy",15, xAxis5);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(1,35.01835);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(2,19.45464);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(3,23.34557);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(4,23.34557);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(5,23.34557);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(6,15.56371);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(7,23.34557);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(8,15.56371);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(9,15.56371);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(10,19.45464);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(11,15.56371);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(12,7.781856);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(13,7.781856);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(14,15.56371);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinContent(15,3.890928);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(1,11.67278);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(2,8.700379);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(3,9.530788);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(4,9.530788);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(5,9.530788);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(6,7.781856);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(7,9.530788);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(8,7.781856);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(9,7.781856);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(10,8.700379);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(11,7.781856);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(12,5.502603);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(13,5.502603);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(14,7.781856);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetBinError(15,3.890928);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_stack->Add(m3lmet_Meas_rebin15_fakes_DY_stack_3,"");
   Double_t xAxis6[16] = {0, 156.6753, 169.1064, 181.5374, 193.9685, 205.8435, 217.1944, 228.5454, 239.8963, 251.8312, 268.4968, 285.1623, 303.0159, 330.5132, 370.7912, 500}; 
   
   TH1D *m3lmet_Meas_rebin15_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin15_prompt_ZZ_stack_4","dummy",15, xAxis6);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(1,2.07595);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(2,6.643041);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(3,4.567091);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(4,10.37975);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(5,14.11646);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(6,10.79494);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(7,9.549371);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(8,12.87089);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(9,9.964561);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(10,12.87089);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(11,8.718991);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(12,10.37975);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(13,15.36203);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(14,12.04051);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinContent(15,24.9114);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(1,0.9283932);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(2,1.66076);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(3,1.37703);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(4,2.07595);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(5,2.420953);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(6,2.117062);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(7,1.991182);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(8,2.31168);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(9,2.034008);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(10,2.31168);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(11,1.90264);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(12,2.07595);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(13,2.525503);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(14,2.235867);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetBinError(15,3.216048);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_stack->Add(m3lmet_Meas_rebin15_prompt_ZZ_stack_4,"");
   Double_t xAxis7[16] = {0, 156.6753, 169.1064, 181.5374, 193.9685, 205.8435, 217.1944, 228.5454, 239.8963, 251.8312, 268.4968, 285.1623, 303.0159, 330.5132, 370.7912, 500}; 
   
   TH1D *m3lmet_Meas_rebin15_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin15_prompt_WZ_stack_5","dummy",15, xAxis7);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(1,6.753957);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(2,27.83449);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(3,69.17689);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(4,116.6593);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(5,149.815);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(6,181.5382);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(7,193.6134);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(8,206.9167);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(9,210.6006);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(10,251.7384);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(11,218.3779);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(12,199.7534);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(13,233.7278);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(14,245.1891);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinContent(15,516.78);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(1,1.175713);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(2,2.386788);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(3,3.762727);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(4,4.886318);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(5,5.537323);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(6,6.095455);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(7,6.294915);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(8,6.507586);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(9,6.565261);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(10,7.177891);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(11,6.685387);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(12,6.39395);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(13,6.916357);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(14,7.083905);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetBinError(15,10.28431);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_stack->Add(m3lmet_Meas_rebin15_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin15_stack->Draw("same hist");
   Double_t xAxis8[16] = {0, 156.6753, 169.1064, 181.5374, 193.9685, 205.8435, 217.1944, 228.5454, 239.8963, 251.8312, 268.4968, 285.1623, 303.0159, 330.5132, 370.7912, 500}; 
   
   TH1D *m3lmet_Meas_rebin15_total__2 = new TH1D("m3lmet_Meas_rebin15_total__2","dummy",15, xAxis8);
   m3lmet_Meas_rebin15_total__2->SetBinContent(1,45.30573);
   m3lmet_Meas_rebin15_total__2->SetBinContent(2,56.29242);
   m3lmet_Meas_rebin15_total__2->SetBinContent(3,100.6063);
   m3lmet_Meas_rebin15_total__2->SetBinContent(4,155.7541);
   m3lmet_Meas_rebin15_total__2->SetBinContent(5,194.4183);
   m3lmet_Meas_rebin15_total__2->SetBinContent(6,214.5172);
   m3lmet_Meas_rebin15_total__2->SetBinContent(7,233.881);
   m3lmet_Meas_rebin15_total__2->SetBinContent(8,243.3143);
   m3lmet_Meas_rebin15_total__2->SetBinContent(9,245.4576);
   m3lmet_Meas_rebin15_total__2->SetBinContent(10,292.9412);
   m3lmet_Meas_rebin15_total__2->SetBinContent(11,254.8481);
   m3lmet_Meas_rebin15_total__2->SetBinContent(12,228.3531);
   m3lmet_Meas_rebin15_total__2->SetBinContent(13,268.8162);
   m3lmet_Meas_rebin15_total__2->SetBinContent(14,283.9276);
   m3lmet_Meas_rebin15_total__2->SetBinContent(15,565.8138);
   m3lmet_Meas_rebin15_total__2->SetBinError(1,11.77895);
   m3lmet_Meas_rebin15_total__2->SetBinError(2,9.194173);
   m3lmet_Meas_rebin15_total__2->SetBinError(3,10.36686);
   m3lmet_Meas_rebin15_total__2->SetBinError(4,10.94786);
   m3lmet_Meas_rebin15_total__2->SetBinError(5,11.33352);
   m3lmet_Meas_rebin15_total__2->SetBinError(6,10.15824);
   m3lmet_Meas_rebin15_total__2->SetBinError(7,11.64199);
   m3lmet_Meas_rebin15_total__2->SetBinError(8,10.4632);
   m3lmet_Meas_rebin15_total__2->SetBinError(9,10.45425);
   m3lmet_Meas_rebin15_total__2->SetBinError(10,11.57144);
   m3lmet_Meas_rebin15_total__2->SetBinError(11,10.52167);
   m3lmet_Meas_rebin15_total__2->SetBinError(12,8.780306);
   m3lmet_Meas_rebin15_total__2->SetBinError(13,9.291707);
   m3lmet_Meas_rebin15_total__2->SetBinError(14,10.83575);
   m3lmet_Meas_rebin15_total__2->SetBinError(15,11.59502);
   m3lmet_Meas_rebin15_total__2->SetMinimum(0);
   m3lmet_Meas_rebin15_total__2->SetMaximum(1131.628);
   m3lmet_Meas_rebin15_total__2->SetEntries(15153);
   m3lmet_Meas_rebin15_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin15_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin15_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin15_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin15_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin15_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin15_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin15_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin15_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin15_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin15_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin15_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin15_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin15_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin15_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin15_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin15_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin15_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin15_total_errors_fx3001[15] = {
   78.33766,
   162.8909,
   175.3219,
   187.753,
   199.906,
   211.519,
   222.8699,
   234.2208,
   245.8638,
   260.164,
   276.8295,
   294.0891,
   316.7645,
   350.6522,
   435.3956};
   Double_t m3lmet_Meas_rebin15_total_errors_fy3001[15] = {
   45.30573,
   56.29242,
   100.6063,
   155.7541,
   194.4183,
   214.5172,
   233.881,
   243.3143,
   245.4576,
   292.9412,
   254.8481,
   228.3531,
   268.8162,
   283.9276,
   565.8138};
   Double_t m3lmet_Meas_rebin15_total_errors_felx3001[15] = {
   78.33766,
   6.21553,
   6.21553,
   6.215538,
   5.9375,
   5.675461,
   5.675468,
   5.675461,
   5.967453,
   8.332779,
   8.332779,
   8.926788,
   13.74863,
   20.13901,
   64.60442};
   Double_t m3lmet_Meas_rebin15_total_errors_fely3001[15] = {
   4.004425,
   6.04589,
   12.17348,
   17.29075,
   11.11003,
   13.03481,
   13.31704,
   13.85931,
   14.49803,
   22.75608,
   18.96066,
   15.90915,
   17.46132,
   18.2476,
   36.22896};
   Double_t m3lmet_Meas_rebin15_total_errors_fehx3001[15] = {
   78.33766,
   6.21553,
   6.21553,
   6.215538,
   5.9375,
   5.675461,
   5.675468,
   5.675461,
   5.967453,
   8.332779,
   8.332779,
   8.926788,
   13.74863,
   20.13901,
   64.60442};
   Double_t m3lmet_Meas_rebin15_total_errors_fehy3001[15] = {
   3.847422,
   5.217609,
   6.075988,
   9.399717,
   12.10664,
   13.02565,
   18.31909,
   16.05654,
   14.81717,
   19.02256,
   15.44105,
   21.01899,
   19.99,
   18.38489,
   39.88367};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,m3lmet_Meas_rebin15_total_errors_fx3001,m3lmet_Meas_rebin15_total_errors_fy3001,m3lmet_Meas_rebin15_total_errors_felx3001,m3lmet_Meas_rebin15_total_errors_fehx3001,m3lmet_Meas_rebin15_total_errors_fely3001,m3lmet_Meas_rebin15_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin15_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin15_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin15_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin15_total_errors3001->SetMinimum(37.17117);
   Graph_m3lmet_Meas_rebin15_total_errors3001->SetMaximum(662.1371);
   Graph_m3lmet_Meas_rebin15_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin15_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin15_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin15_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin15_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin15_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin15_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin15_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin15_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin15_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin15_total_errors","Total unc.","F");

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
   m3lmet_Meas_rebin15_canvas->Modified();
   m3lmet_Meas_rebin15_canvas->cd();
   m3lmet_Meas_rebin15_canvas->SetSelected(m3lmet_Meas_rebin15_canvas);
}
