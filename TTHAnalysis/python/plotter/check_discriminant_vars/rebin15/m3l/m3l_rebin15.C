void m3l_rebin15()
{
//=========Macro generated from canvas: m3l_rebin15_canvas/m3l_rebin15
//=========  (Tue Apr  4 21:28:36 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin15_canvas = new TCanvas("m3l_rebin15_canvas", "m3l_rebin15",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin15_canvas->SetHighLightColor(2);
   m3l_rebin15_canvas->Range(-115.3846,-138.4654,525.641,926.6532);
   m3l_rebin15_canvas->SetFillColor(0);
   m3l_rebin15_canvas->SetBorderMode(0);
   m3l_rebin15_canvas->SetBorderSize(2);
   m3l_rebin15_canvas->SetTickx(1);
   m3l_rebin15_canvas->SetTicky(1);
   m3l_rebin15_canvas->SetLeftMargin(0.18);
   m3l_rebin15_canvas->SetRightMargin(0.04);
   m3l_rebin15_canvas->SetTopMargin(0.06);
   m3l_rebin15_canvas->SetBottomMargin(0.13);
   m3l_rebin15_canvas->SetFrameFillStyle(0);
   m3l_rebin15_canvas->SetFrameBorderMode(0);
   m3l_rebin15_canvas->SetFrameFillStyle(0);
   m3l_rebin15_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_total__1 = new TH1D("m3l_rebin15_total__1","dummy",15, xAxis1);
   m3l_rebin15_total__1->SetBinContent(1,22.92978);
   m3l_rebin15_total__1->SetBinContent(2,63.77145);
   m3l_rebin15_total__1->SetBinContent(3,147.6307);
   m3l_rebin15_total__1->SetBinContent(4,237.1551);
   m3l_rebin15_total__1->SetBinContent(5,229.8842);
   m3l_rebin15_total__1->SetBinContent(6,249.134);
   m3l_rebin15_total__1->SetBinContent(7,284.7359);
   m3l_rebin15_total__1->SetBinContent(8,286.8397);
   m3l_rebin15_total__1->SetBinContent(9,247.4511);
   m3l_rebin15_total__1->SetBinContent(10,198.9325);
   m3l_rebin15_total__1->SetBinContent(11,252.415);
   m3l_rebin15_total__1->SetBinContent(12,251.9045);
   m3l_rebin15_total__1->SetBinContent(13,198.0202);
   m3l_rebin15_total__1->SetBinContent(14,282.0698);
   m3l_rebin15_total__1->SetBinContent(15,431.3731);
   m3l_rebin15_total__1->SetBinError(1,5.787212);
   m3l_rebin15_total__1->SetBinError(2,5.252154);
   m3l_rebin15_total__1->SetBinError(3,10.20885);
   m3l_rebin15_total__1->SetBinError(4,15.87615);
   m3l_rebin15_total__1->SetBinError(5,8.866383);
   m3l_rebin15_total__1->SetBinError(6,13.49757);
   m3l_rebin15_total__1->SetBinError(7,11.49049);
   m3l_rebin15_total__1->SetBinError(8,11.52357);
   m3l_rebin15_total__1->SetBinError(9,11.17729);
   m3l_rebin15_total__1->SetBinError(10,8.387722);
   m3l_rebin15_total__1->SetBinError(11,11.79929);
   m3l_rebin15_total__1->SetBinError(12,11.19202);
   m3l_rebin15_total__1->SetBinError(13,8.406917);
   m3l_rebin15_total__1->SetBinError(14,10.13411);
   m3l_rebin15_total__1->SetBinError(15,10.96914);
   m3l_rebin15_total__1->SetMinimum(0);
   m3l_rebin15_total__1->SetMaximum(862.7461);
   m3l_rebin15_total__1->SetEntries(15153);
   m3l_rebin15_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin15_total__1->SetFillColor(ci);
   m3l_rebin15_total__1->SetMarkerStyle(20);
   m3l_rebin15_total__1->SetMarkerSize(1.1);
   m3l_rebin15_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin15_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin15_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin15_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin15_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin15_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin15_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_total__1->Draw("HIST");
   
   THStack *m3l_rebin15_stack = new THStack();
   m3l_rebin15_stack->SetName("m3l_rebin15_stack");
   m3l_rebin15_stack->SetTitle("m3l_rebin15");
   Double_t xAxis2[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1F *m3l_rebin15_stack_stack_1 = new TH1F("m3l_rebin15_stack_stack_1","m3l_rebin15",15, xAxis2);
   m3l_rebin15_stack_stack_1->SetMinimum(0);
   m3l_rebin15_stack_stack_1->SetMaximum(452.9417);
   m3l_rebin15_stack_stack_1->SetDirectory(0);
   m3l_rebin15_stack_stack_1->SetStats(0);
   m3l_rebin15_stack_stack_1->SetLineStyle(0);
   m3l_rebin15_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin15_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->SetHistogram(m3l_rebin15_stack_stack_1);
   
   Double_t xAxis3[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_fakes_VV_stack_1 = new TH1D("m3l_rebin15_fakes_VV_stack_1","dummy",15, xAxis3);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(1,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(2,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(8,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(10,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(12,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(14,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinContent(15,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(1,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(2,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(8,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(10,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(12,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(14,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetBinError(15,0.2199288);
   m3l_rebin15_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin15_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin15_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin15_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin15_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_fakes_VV_stack_1,"");
   Double_t xAxis4[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_fakes_TT_stack_2 = new TH1D("m3l_rebin15_fakes_TT_stack_2","dummy",15, xAxis4);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(1,1.203703);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(2,3.968184);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(3,5.820895);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(4,6.874135);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(5,9.027772);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(6,9.479161);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(7,12.33796);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(8,11.13425);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(9,7.372681);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(10,8.275458);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(11,9.328698);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(12,8.980615);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(13,8.980615);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(14,9.883393);
   m3l_rebin15_fakes_TT_stack_2->SetBinContent(15,11.7361);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(1,0.4255733);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(2,0.8059132);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(3,0.973305);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(4,1.029815);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(5,1.184746);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(6,1.194262);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(7,1.362499);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(8,1.294331);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(9,1.05324);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(10,1.115862);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(11,1.184746);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(12,1.173655);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(13,1.173655);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(14,1.230162);
   m3l_rebin15_fakes_TT_stack_2->SetBinError(15,1.379015);
   m3l_rebin15_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin15_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin15_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin15_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin15_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_fakes_TT_stack_2,"");
   Double_t xAxis5[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_fakes_DY_stack_3 = new TH1D("m3l_rebin15_fakes_DY_stack_3","dummy",15, xAxis5);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(1,7.781856);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(2,3.890928);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(3,19.45464);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(4,54.47299);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(5,7.781856);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(6,35.01835);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(7,19.45464);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(8,19.45464);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(9,19.45464);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(10,7.781856);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(11,23.34557);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(12,19.45464);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(13,7.781856);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(14,11.67278);
   m3l_rebin15_fakes_DY_stack_3->SetBinContent(15,7.781856);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(1,5.502603);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(2,3.890928);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(3,8.700379);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(4,14.55852);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(5,5.502603);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(6,11.67278);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(7,8.700379);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(8,8.700379);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(9,8.700379);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(10,5.502603);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(11,9.530788);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(12,8.700379);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(13,5.502603);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(14,6.739285);
   m3l_rebin15_fakes_DY_stack_3->SetBinError(15,5.502603);
   m3l_rebin15_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin15_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin15_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin15_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin15_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_fakes_DY_stack_3,"");
   Double_t xAxis6[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_prompt_ZZ_stack_4 = new TH1D("m3l_rebin15_prompt_ZZ_stack_4","dummy",15, xAxis6);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(1,0.8303801);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(2,1.66076);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(3,12.04051);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(4,14.53165);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(5,15.77722);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(6,12.4557);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(7,12.87089);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(8,14.11646);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(9,14.11646);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(10,6.643041);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(11,9.549371);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(12,11.62532);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(13,9.134181);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(14,11.62532);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinContent(15,18.26836);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(1,0.5871674);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(2,0.8303801);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(3,2.235867);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(4,2.456297);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(5,2.559403);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(6,2.27409);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(7,2.31168);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(8,2.420953);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(9,2.420953);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(10,1.66076);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(11,1.991182);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(12,2.196979);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(13,1.947414);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(14,2.196979);
   m3l_rebin15_prompt_ZZ_stack_4->SetBinError(15,2.754059);
   m3l_rebin15_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin15_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin15_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin15_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin15_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_prompt_ZZ_stack_4,"");
   Double_t xAxis7[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_prompt_WZ_stack_5 = new TH1D("m3l_rebin15_prompt_WZ_stack_5","dummy",15, xAxis7);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(1,12.89392);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(2,54.03165);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(3,110.3146);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(4,161.2763);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(5,197.2974);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(6,192.1808);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(7,240.0725);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(8,241.9144);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(9,206.5073);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(10,176.0122);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(11,210.1913);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(12,211.624);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(13,172.1236);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(14,248.6684);
   m3l_rebin15_prompt_WZ_stack_5->SetBinContent(15,393.3668);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(1,1.624481);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(2,3.325418);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(3,4.751587);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(4,5.74523);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(5,6.354521);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(6,6.271582);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(7,7.009602);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(8,7.036441);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(9,6.501146);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(10,6.001966);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(11,6.558878);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(12,6.581193);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(13,5.935295);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(14,7.13399);
   m3l_rebin15_prompt_WZ_stack_5->SetBinError(15,8.972656);
   m3l_rebin15_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin15_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin15_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin15_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin15_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin15_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin15_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_stack->Add(m3l_rebin15_prompt_WZ_stack_5,"");
   m3l_rebin15_stack->Draw("same hist");
   Double_t xAxis8[16] = {0, 108.3343, 116.6685, 125.0027, 133.337, 141.6712, 150.0071, 160.8476, 171.6881, 182.5286, 193.369, 207.7961, 227.8729, 247.9497, 293.1656, 500}; 
   
   TH1D *m3l_rebin15_total__2 = new TH1D("m3l_rebin15_total__2","dummy",15, xAxis8);
   m3l_rebin15_total__2->SetBinContent(1,22.92978);
   m3l_rebin15_total__2->SetBinContent(2,63.77145);
   m3l_rebin15_total__2->SetBinContent(3,147.6307);
   m3l_rebin15_total__2->SetBinContent(4,237.1551);
   m3l_rebin15_total__2->SetBinContent(5,229.8842);
   m3l_rebin15_total__2->SetBinContent(6,249.134);
   m3l_rebin15_total__2->SetBinContent(7,284.7359);
   m3l_rebin15_total__2->SetBinContent(8,286.8397);
   m3l_rebin15_total__2->SetBinContent(9,247.4511);
   m3l_rebin15_total__2->SetBinContent(10,198.9325);
   m3l_rebin15_total__2->SetBinContent(11,252.415);
   m3l_rebin15_total__2->SetBinContent(12,251.9045);
   m3l_rebin15_total__2->SetBinContent(13,198.0202);
   m3l_rebin15_total__2->SetBinContent(14,282.0698);
   m3l_rebin15_total__2->SetBinContent(15,431.3731);
   m3l_rebin15_total__2->SetBinError(1,5.787212);
   m3l_rebin15_total__2->SetBinError(2,5.252154);
   m3l_rebin15_total__2->SetBinError(3,10.20885);
   m3l_rebin15_total__2->SetBinError(4,15.87615);
   m3l_rebin15_total__2->SetBinError(5,8.866383);
   m3l_rebin15_total__2->SetBinError(6,13.49757);
   m3l_rebin15_total__2->SetBinError(7,11.49049);
   m3l_rebin15_total__2->SetBinError(8,11.52357);
   m3l_rebin15_total__2->SetBinError(9,11.17729);
   m3l_rebin15_total__2->SetBinError(10,8.387722);
   m3l_rebin15_total__2->SetBinError(11,11.79929);
   m3l_rebin15_total__2->SetBinError(12,11.19202);
   m3l_rebin15_total__2->SetBinError(13,8.406917);
   m3l_rebin15_total__2->SetBinError(14,10.13411);
   m3l_rebin15_total__2->SetBinError(15,10.96914);
   m3l_rebin15_total__2->SetMinimum(0);
   m3l_rebin15_total__2->SetMaximum(862.7461);
   m3l_rebin15_total__2->SetEntries(15153);
   m3l_rebin15_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin15_total__2->SetFillColor(ci);
   m3l_rebin15_total__2->SetMarkerStyle(20);
   m3l_rebin15_total__2->SetMarkerSize(1.1);
   m3l_rebin15_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin15_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin15_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin15_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin15_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin15_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin15_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin15_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin15_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin15_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin15_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin15_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin15_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin15_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin15_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin15_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin15_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin15_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin15_total_errors_fx3001[15] = {
   54.16713,
   112.5014,
   120.8356,
   129.1699,
   137.5041,
   145.8392,
   155.4274,
   166.2679,
   177.1083,
   187.9488,
   200.5826,
   217.8345,
   237.9113,
   270.5576,
   396.5828};
   Double_t m3l_rebin15_total_errors_fy3001[15] = {
   22.92978,
   63.77145,
   147.6307,
   237.1551,
   229.8842,
   249.134,
   284.7359,
   286.8397,
   247.4511,
   198.9325,
   252.415,
   251.9045,
   198.0202,
   282.0698,
   431.3731};
   Double_t m3l_rebin15_total_errors_felx3001[15] = {
   54.16713,
   4.167122,
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_total_errors_fely3001[15] = {
   1.310947,
   3.673474,
   8.705351,
   19.8622,
   16.40487,
   21.12081,
   16.9071,
   17.05176,
   16.0769,
   11.71831,
   15.21103,
   14.79357,
   12.54722,
   17.26551,
   25.87878};
   Double_t m3l_rebin15_total_errors_fehx3001[15] = {
   54.16713,
   4.167122,
   4.167126,
   4.167122,
   4.16713,
   4.167946,
   5.420242,
   5.420235,
   5.420242,
   5.420235,
   7.213539,
   10.03839,
   10.03838,
   22.60794,
   103.4172};
   Double_t m3l_rebin15_total_errors_fehy3001[15] = {
   1.40325,
   3.868817,
   10.63866,
   15.42866,
   14.59284,
   15.21351,
   18.2421,
   17.83922,
   15.07055,
   12.42077,
   17.26499,
   15.92346,
   12.75635,
   17.92731,
   27.25872};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,m3l_rebin15_total_errors_fx3001,m3l_rebin15_total_errors_fy3001,m3l_rebin15_total_errors_felx3001,m3l_rebin15_total_errors_fehx3001,m3l_rebin15_total_errors_fely3001,m3l_rebin15_total_errors_fehy3001);
   grae->SetName("m3l_rebin15_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin15_total_errors3001 = new TH1F("Graph_m3l_rebin15_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin15_total_errors3001->SetMinimum(19.45695);
   Graph_m3l_rebin15_total_errors3001->SetMaximum(502.3331);
   Graph_m3l_rebin15_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin15_total_errors3001->SetStats(0);
   Graph_m3l_rebin15_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin15_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin15_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin15_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin15_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin15_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin15_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin15_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin15_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin15_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin15_total_errors","Total unc.","F");

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
   m3l_rebin15_canvas->Modified();
   m3l_rebin15_canvas->cd();
   m3l_rebin15_canvas->SetSelected(m3l_rebin15_canvas);
}
