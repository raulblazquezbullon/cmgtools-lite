void m3l_rebin14()
{
//=========Macro generated from canvas: m3l_rebin14_canvas/m3l_rebin14
//=========  (Tue Apr  4 21:28:45 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin14_canvas = new TCanvas("m3l_rebin14_canvas", "m3l_rebin14",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin14_canvas->SetHighLightColor(2);
   m3l_rebin14_canvas->Range(-115.3846,-144.376,525.641,966.2084);
   m3l_rebin14_canvas->SetFillColor(0);
   m3l_rebin14_canvas->SetBorderMode(0);
   m3l_rebin14_canvas->SetBorderSize(2);
   m3l_rebin14_canvas->SetTickx(1);
   m3l_rebin14_canvas->SetTicky(1);
   m3l_rebin14_canvas->SetLeftMargin(0.18);
   m3l_rebin14_canvas->SetRightMargin(0.04);
   m3l_rebin14_canvas->SetTopMargin(0.06);
   m3l_rebin14_canvas->SetBottomMargin(0.13);
   m3l_rebin14_canvas->SetFrameFillStyle(0);
   m3l_rebin14_canvas->SetFrameBorderMode(0);
   m3l_rebin14_canvas->SetFrameFillStyle(0);
   m3l_rebin14_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_total__1 = new TH1D("m3l_rebin14_total__1","dummy",14, xAxis1);
   m3l_rebin14_total__1->SetBinContent(1,23.95311);
   m3l_rebin14_total__1->SetBinContent(2,79.76526);
   m3l_rebin14_total__1->SetBinContent(3,168.5015);
   m3l_rebin14_total__1->SetBinContent(4,269.5357);
   m3l_rebin14_total__1->SetBinContent(5,247.3044);
   m3l_rebin14_total__1->SetBinContent(6,284.9253);
   m3l_rebin14_total__1->SetBinContent(7,312.6141);
   m3l_rebin14_total__1->SetBinContent(8,277.8673);
   m3l_rebin14_total__1->SetBinContent(9,238.9362);
   m3l_rebin14_total__1->SetBinContent(10,229.5339);
   m3l_rebin14_total__1->SetBinContent(11,292.8838);
   m3l_rebin14_total__1->SetBinContent(12,217.2502);
   m3l_rebin14_total__1->SetBinContent(13,291.3896);
   m3l_rebin14_total__1->SetBinContent(14,449.7867);
   m3l_rebin14_total__1->SetBinError(1,5.805279);
   m3l_rebin14_total__1->SetBinError(2,5.549902);
   m3l_rebin14_total__1->SetBinError(3,11.11424);
   m3l_rebin14_total__1->SetBinError(4,16.53262);
   m3l_rebin14_total__1->SetBinError(5,9.062587);
   m3l_rebin14_total__1->SetBinError(6,13.77421);
   m3l_rebin14_total__1->SetBinError(7,12.90867);
   m3l_rebin14_total__1->SetBinError(8,11.45538);
   m3l_rebin14_total__1->SetBinError(9,9.678621);
   m3l_rebin14_total__1->SetBinError(10,10.27211);
   m3l_rebin14_total__1->SetBinError(11,12.74566);
   m3l_rebin14_total__1->SetBinError(12,7.766838);
   m3l_rebin14_total__1->SetBinError(13,10.92022);
   m3l_rebin14_total__1->SetBinError(14,11.14206);
   m3l_rebin14_total__1->SetMinimum(0);
   m3l_rebin14_total__1->SetMaximum(899.5733);
   m3l_rebin14_total__1->SetEntries(15153);
   m3l_rebin14_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin14_total__1->SetFillColor(ci);
   m3l_rebin14_total__1->SetMarkerStyle(20);
   m3l_rebin14_total__1->SetMarkerSize(1.1);
   m3l_rebin14_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin14_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin14_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin14_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin14_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin14_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin14_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_total__1->Draw("HIST");
   
   THStack *m3l_rebin14_stack = new THStack();
   m3l_rebin14_stack->SetName("m3l_rebin14_stack");
   m3l_rebin14_stack->SetTitle("m3l_rebin14");
   Double_t xAxis2[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1F *m3l_rebin14_stack_stack_1 = new TH1F("m3l_rebin14_stack_stack_1","m3l_rebin14",14, xAxis2);
   m3l_rebin14_stack_stack_1->SetMinimum(0);
   m3l_rebin14_stack_stack_1->SetMaximum(472.276);
   m3l_rebin14_stack_stack_1->SetDirectory(0);
   m3l_rebin14_stack_stack_1->SetStats(0);
   m3l_rebin14_stack_stack_1->SetLineStyle(0);
   m3l_rebin14_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin14_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->SetHistogram(m3l_rebin14_stack_stack_1);
   
   Double_t xAxis3[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_fakes_VV_stack_1 = new TH1D("m3l_rebin14_fakes_VV_stack_1","dummy",14, xAxis3);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(1,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(2,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(7,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(10,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(11,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(13,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinContent(14,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(1,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(2,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(7,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(10,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(11,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(13,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetBinError(14,0.2199288);
   m3l_rebin14_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin14_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin14_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin14_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin14_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_fakes_VV_stack_1,"");
   Double_t xAxis4[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_fakes_TT_stack_2 = new TH1D("m3l_rebin14_fakes_TT_stack_2","dummy",14, xAxis4);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(1,1.203703);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(2,5.021424);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(3,5.971358);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(4,8.529227);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(5,10.68286);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(6,11.88657);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(7,11.7361);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(8,9.328698);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(9,8.124995);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(10,9.178235);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(11,10.03386);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(12,9.582467);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(13,10.78617);
   m3l_rebin14_fakes_TT_stack_2->SetBinContent(14,12.33796);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(1,0.4255733);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(2,0.8988713);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(3,0.9848663);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(4,1.16397);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(5,1.267823);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(6,1.337343);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(7,1.328852);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(8,1.184746);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(9,1.105672);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(10,1.175153);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(11,1.23933);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(12,1.211619);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(13,1.284186);
   m3l_rebin14_fakes_TT_stack_2->SetBinError(14,1.411467);
   m3l_rebin14_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin14_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin14_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin14_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin14_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_fakes_TT_stack_2,"");
   Double_t xAxis5[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_fakes_DY_stack_3 = new TH1D("m3l_rebin14_fakes_DY_stack_3","dummy",14, xAxis5);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(1,7.781856);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(2,3.890928);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(3,23.34557);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(4,58.36392);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(5,7.781856);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(6,35.01835);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(7,27.23649);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(8,19.45464);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(9,11.67278);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(10,15.56371);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(11,27.23649);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(12,3.890928);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(13,15.56371);
   m3l_rebin14_fakes_DY_stack_3->SetBinContent(14,7.781856);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(1,5.502603);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(2,3.890928);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(3,9.530788);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(4,15.0695);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(5,5.502603);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(6,11.67278);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(7,10.29443);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(8,8.700379);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(9,6.739285);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(10,7.781856);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(11,10.29443);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(12,3.890928);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(13,7.781856);
   m3l_rebin14_fakes_DY_stack_3->SetBinError(14,5.502603);
   m3l_rebin14_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin14_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin14_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin14_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin14_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_fakes_DY_stack_3,"");
   Double_t xAxis6[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_prompt_ZZ_stack_4 = new TH1D("m3l_rebin14_prompt_ZZ_stack_4","dummy",14, xAxis6);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(1,0.8303801);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(2,1.66076);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(3,15.36203);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(4,16.19241);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(5,16.19241);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(6,14.11646);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(7,13.70127);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(8,14.94684);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(9,10.37975);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(10,7.888611);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(11,12.4557);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(12,9.549371);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(13,13.28608);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinContent(14,18.68355);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(1,0.5871674);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(2,0.8303801);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(3,2.525503);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(4,2.592861);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(5,2.592861);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(6,2.420953);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(7,2.385085);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(8,2.49114);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(9,2.07595);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(10,1.809771);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(11,2.27409);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(12,1.991182);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(13,2.34867);
   m3l_rebin14_prompt_ZZ_stack_4->SetBinError(14,2.78518);
   m3l_rebin14_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin14_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin14_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin14_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin14_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_prompt_ZZ_stack_4,"");
   Double_t xAxis7[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_prompt_WZ_stack_5 = new TH1D("m3l_rebin14_prompt_WZ_stack_5","dummy",14, xAxis7);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(1,13.91724);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(2,68.97222);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(3,123.8225);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(4,186.4501);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(5,212.6473);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(6,223.9039);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(7,259.7203);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(8,234.1372);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(9,208.7587);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(10,196.6834);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(11,242.9378);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(12,194.2274);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(13,251.5337);
   m3l_rebin14_prompt_WZ_stack_5->SetBinContent(14,410.7634);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(1,1.687714);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(2,3.757156);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(3,5.034102);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(4,6.177369);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(5,6.597085);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(6,6.769444);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(7,7.290799);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(8,6.92241);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(9,6.536487);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(10,6.344626);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(11,7.051308);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(12,6.304889);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(13,7.174973);
   m3l_rebin14_prompt_WZ_stack_5->SetBinError(14,9.168916);
   m3l_rebin14_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin14_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin14_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin14_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin14_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin14_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin14_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_stack->Add(m3l_rebin14_prompt_WZ_stack_5,"");
   m3l_rebin14_stack->Draw("same hist");
   Double_t xAxis8[15] = {0, 108.9296, 117.8591, 126.7887, 135.7182, 144.6478, 154.6531, 166.2679, 177.8827, 189.4975, 202.0599, 223.5707, 245.0816, 289.7316, 500}; 
   
   TH1D *m3l_rebin14_total__2 = new TH1D("m3l_rebin14_total__2","dummy",14, xAxis8);
   m3l_rebin14_total__2->SetBinContent(1,23.95311);
   m3l_rebin14_total__2->SetBinContent(2,79.76526);
   m3l_rebin14_total__2->SetBinContent(3,168.5015);
   m3l_rebin14_total__2->SetBinContent(4,269.5357);
   m3l_rebin14_total__2->SetBinContent(5,247.3044);
   m3l_rebin14_total__2->SetBinContent(6,284.9253);
   m3l_rebin14_total__2->SetBinContent(7,312.6141);
   m3l_rebin14_total__2->SetBinContent(8,277.8673);
   m3l_rebin14_total__2->SetBinContent(9,238.9362);
   m3l_rebin14_total__2->SetBinContent(10,229.5339);
   m3l_rebin14_total__2->SetBinContent(11,292.8838);
   m3l_rebin14_total__2->SetBinContent(12,217.2502);
   m3l_rebin14_total__2->SetBinContent(13,291.3896);
   m3l_rebin14_total__2->SetBinContent(14,449.7867);
   m3l_rebin14_total__2->SetBinError(1,5.805279);
   m3l_rebin14_total__2->SetBinError(2,5.549902);
   m3l_rebin14_total__2->SetBinError(3,11.11424);
   m3l_rebin14_total__2->SetBinError(4,16.53262);
   m3l_rebin14_total__2->SetBinError(5,9.062587);
   m3l_rebin14_total__2->SetBinError(6,13.77421);
   m3l_rebin14_total__2->SetBinError(7,12.90867);
   m3l_rebin14_total__2->SetBinError(8,11.45538);
   m3l_rebin14_total__2->SetBinError(9,9.678621);
   m3l_rebin14_total__2->SetBinError(10,10.27211);
   m3l_rebin14_total__2->SetBinError(11,12.74566);
   m3l_rebin14_total__2->SetBinError(12,7.766838);
   m3l_rebin14_total__2->SetBinError(13,10.92022);
   m3l_rebin14_total__2->SetBinError(14,11.14206);
   m3l_rebin14_total__2->SetMinimum(0);
   m3l_rebin14_total__2->SetMaximum(899.5733);
   m3l_rebin14_total__2->SetEntries(15153);
   m3l_rebin14_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin14_total__2->SetFillColor(ci);
   m3l_rebin14_total__2->SetMarkerStyle(20);
   m3l_rebin14_total__2->SetMarkerSize(1.1);
   m3l_rebin14_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin14_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin14_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin14_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin14_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin14_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin14_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin14_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin14_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin14_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin14_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin14_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin14_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin14_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin14_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin14_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin14_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin14_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin14_total_errors_fx3001[14] = {
   54.46478,
   113.3943,
   122.3239,
   131.2534,
   140.183,
   149.6504,
   160.4605,
   172.0753,
   183.6901,
   195.7787,
   212.8153,
   234.3262,
   267.4066,
   394.8658};
   Double_t m3l_rebin14_total_errors_fy3001[14] = {
   23.95311,
   79.76526,
   168.5015,
   269.5357,
   247.3044,
   284.9253,
   312.6141,
   277.8673,
   238.9362,
   229.5339,
   292.8838,
   217.2502,
   291.3896,
   449.7867};
   Double_t m3l_rebin14_total_errors_felx3001[14] = {
   54.46478,
   4.464779,
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_total_errors_fely3001[14] = {
   1.369053,
   4.643736,
   9.827348,
   26.11391,
   14.91481,
   23.70854,
   18.39315,
   17.27327,
   14.53716,
   13.48566,
   17.18444,
   13.89287,
   17.91415,
   26.93297};
   Double_t m3l_rebin14_total_errors_fehx3001[14] = {
   54.46478,
   4.464779,
   4.464775,
   4.464779,
   4.464775,
   5.002647,
   5.807404,
   5.807396,
   5.807396,
   6.281227,
   10.75542,
   10.75542,
   22.32501,
   105.1342};
   Double_t m3l_rebin14_total_errors_fehy3001[14] = {
   1.464189,
   4.851372,
   11.72539,
   17.77381,
   15.71901,
   17.18953,
   20.58942,
   16.77647,
   15.53092,
   14.22784,
   19.51752,
   14.03937,
   18.95884,
   28.25468};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(14,m3l_rebin14_total_errors_fx3001,m3l_rebin14_total_errors_fy3001,m3l_rebin14_total_errors_felx3001,m3l_rebin14_total_errors_fehx3001,m3l_rebin14_total_errors_fely3001,m3l_rebin14_total_errors_fehy3001);
   grae->SetName("m3l_rebin14_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin14_total_errors3001 = new TH1F("Graph_m3l_rebin14_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin14_total_errors3001->SetMinimum(20.32565);
   Graph_m3l_rebin14_total_errors3001->SetMaximum(523.5871);
   Graph_m3l_rebin14_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin14_total_errors3001->SetStats(0);
   Graph_m3l_rebin14_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin14_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin14_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin14_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin14_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin14_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin14_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin14_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin14_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin14_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin14_total_errors","Total unc.","F");

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
   m3l_rebin14_canvas->Modified();
   m3l_rebin14_canvas->cd();
   m3l_rebin14_canvas->SetSelected(m3l_rebin14_canvas);
}
