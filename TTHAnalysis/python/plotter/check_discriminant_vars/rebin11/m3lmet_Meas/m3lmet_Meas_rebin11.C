void m3lmet_Meas_rebin11()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin11_canvas/m3lmet_Meas_rebin11
//=========  (Tue Apr  4 21:31:05 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin11_canvas = new TCanvas("m3lmet_Meas_rebin11_canvas", "m3lmet_Meas_rebin11",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin11_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin11_canvas->Range(-115.3846,-228.9242,525.641,1532.031);
   m3lmet_Meas_rebin11_canvas->SetFillColor(0);
   m3lmet_Meas_rebin11_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin11_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin11_canvas->SetTickx(1);
   m3lmet_Meas_rebin11_canvas->SetTicky(1);
   m3lmet_Meas_rebin11_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin11_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin11_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin11_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin11_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin11_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin11_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin11_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[12] = {0, 161.1957, 178.1472, 195.0986, 211.003, 226.4816, 241.9601, 260.9215, 283.6473, 310.5152, 348.0114, 500}; 
   
   TH1D *m3lmet_Meas_rebin11_total__1 = new TH1D("m3lmet_Meas_rebin11_total__1","dummy",11, xAxis1);
   m3lmet_Meas_rebin11_total__1->SetBinContent(1,61.7124);
   m3lmet_Meas_rebin11_total__1->SetBinContent(2,108.0421);
   m3lmet_Meas_rebin11_total__1->SetBinContent(3,204.0347);
   m3lmet_Meas_rebin11_total__1->SetBinContent(4,270.8766);
   m3lmet_Meas_rebin11_total__1->SetBinContent(5,314.1063);
   m3lmet_Meas_rebin11_total__1->SetBinContent(6,329.7736);
   m3lmet_Meas_rebin11_total__1->SetBinContent(7,372.2414);
   m3lmet_Meas_rebin11_total__1->SetBinContent(8,353.3844);
   m3lmet_Meas_rebin11_total__1->SetBinContent(9,331.3177);
   m3lmet_Meas_rebin11_total__1->SetBinContent(10,325.571);
   m3lmet_Meas_rebin11_total__1->SetBinContent(11,713.1868);
   m3lmet_Meas_rebin11_total__1->SetBinError(1,13.09071);
   m3lmet_Meas_rebin11_total__1->SetBinError(2,11.12033);
   m3lmet_Meas_rebin11_total__1->SetBinError(3,12.61856);
   m3lmet_Meas_rebin11_total__1->SetBinError(4,13.14607);
   m3lmet_Meas_rebin11_total__1->SetBinError(5,13.47653);
   m3lmet_Meas_rebin11_total__1->SetBinError(6,11.92158);
   m3lmet_Meas_rebin11_total__1->SetBinError(7,13.92829);
   m3lmet_Meas_rebin11_total__1->SetBinError(8,10.82044);
   m3lmet_Meas_rebin11_total__1->SetBinError(9,10.63632);
   m3lmet_Meas_rebin11_total__1->SetBinError(10,11.28911);
   m3lmet_Meas_rebin11_total__1->SetBinError(11,13.92726);
   m3lmet_Meas_rebin11_total__1->SetMinimum(0);
   m3lmet_Meas_rebin11_total__1->SetMaximum(1426.374);
   m3lmet_Meas_rebin11_total__1->SetEntries(15153);
   m3lmet_Meas_rebin11_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin11_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin11_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin11_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin11_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin11_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin11_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin11_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin11_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin11_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin11_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin11_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin11_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin11_stack = new THStack();
   m3lmet_Meas_rebin11_stack->SetName("m3lmet_Meas_rebin11_stack");
   m3lmet_Meas_rebin11_stack->SetTitle("m3lmet_Meas_rebin11");
   Double_t xAxis2[12] = {0, 161.1957, 178.1472, 195.0986, 211.003, 226.4816, 241.9601, 260.9215, 283.6473, 310.5152, 348.0114, 500}; 
   
   TH1F *m3lmet_Meas_rebin11_stack_stack_1 = new TH1F("m3lmet_Meas_rebin11_stack_stack_1","m3lmet_Meas_rebin11",11, xAxis2);
   m3lmet_Meas_rebin11_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin11_stack_stack_1->SetMaximum(748.8462);
   m3lmet_Meas_rebin11_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin11_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin11_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin11_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin11_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin11_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin11_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin11_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_stack->SetHistogram(m3lmet_Meas_rebin11_stack_stack_1);
   
   Double_t xAxis3[12] = {0, 161.1957, 178.1472, 195.0986, 211.003, 226.4816, 241.9601, 260.9215, 283.6473, 310.5152, 348.0114, 500}; 
   
   TH1D *m3lmet_Meas_rebin11_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin11_fakes_VV_stack_1","dummy",11, xAxis3);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetBinContent(6,0.4398576);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetBinContent(10,0.6597863);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetBinContent(11,0.2199288);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetBinError(4,0.2199288);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetBinError(6,0.3110263);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetBinError(10,0.3809278);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetBinError(11,0.2199288);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin11_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_stack->Add(m3lmet_Meas_rebin11_fakes_VV_stack_1,"");
   Double_t xAxis4[12] = {0, 161.1957, 178.1472, 195.0986, 211.003, 226.4816, 241.9601, 260.9215, 283.6473, 310.5152, 348.0114, 500}; 
   
   TH1D *m3lmet_Meas_rebin11_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin11_fakes_TT_stack_2","dummy",11, xAxis4);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(1,2.059323);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(2,3.968184);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(3,7.127904);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(4,9.479161);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(5,8.726846);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(6,10.83333);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(7,12.78934);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(8,14.89582);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(9,15.10244);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(10,14.14351);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinContent(11,25.27776);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(1,0.5797134);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(2,0.8059132);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(3,1.060621);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(4,1.194262);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(5,1.145891);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(6,1.27672);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(7,1.419464);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(8,1.497087);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(9,1.524725);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(10,1.458792);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetBinError(11,1.984742);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin11_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_stack->Add(m3lmet_Meas_rebin11_fakes_TT_stack_2,"");
   Double_t xAxis5[12] = {0, 161.1957, 178.1472, 195.0986, 211.003, 226.4816, 241.9601, 260.9215, 283.6473, 310.5152, 348.0114, 500}; 
   
   TH1D *m3lmet_Meas_rebin11_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin11_fakes_DY_stack_3","dummy",11, xAxis5);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(1,42.80021);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(2,27.23649);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(3,31.12742);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(4,31.12742);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(5,31.12742);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(6,19.45464);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(7,31.12742);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(8,11.67278);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(9,11.67278);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(10,15.56371);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinContent(11,11.67278);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(1,12.90475);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(2,10.29443);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(3,11.00521);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(4,11.00521);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(5,11.00521);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(6,8.700379);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(7,11.00521);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(8,6.739285);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(9,6.739285);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(10,7.781856);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetBinError(11,6.739285);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin11_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_stack->Add(m3lmet_Meas_rebin11_fakes_DY_stack_3,"");
   Double_t xAxis6[12] = {0, 161.1957, 178.1472, 195.0986, 211.003, 226.4816, 241.9601, 260.9215, 283.6473, 310.5152, 348.0114, 500}; 
   
   TH1D *m3lmet_Meas_rebin11_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin11_prompt_ZZ_stack_4","dummy",11, xAxis6);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(1,4.982281);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(2,6.227851);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(3,14.53165);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(4,14.94684);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(5,14.53165);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(6,16.6076);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(7,17.43798);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(8,12.04051);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(9,14.53165);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(10,19.92912);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinContent(11,29.47849);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(1,1.438261);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(2,1.608024);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(3,2.456297);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(4,2.49114);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(5,2.456297);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(6,2.625892);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(7,2.690739);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(8,2.235867);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(9,2.456297);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(10,2.876521);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetBinError(11,3.498454);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin11_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_stack->Add(m3lmet_Meas_rebin11_prompt_ZZ_stack_4,"");
   Double_t xAxis7[12] = {0, 161.1957, 178.1472, 195.0986, 211.003, 226.4816, 241.9601, 260.9215, 283.6473, 310.5152, 348.0114, 500}; 
   
   TH1D *m3lmet_Meas_rebin11_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin11_prompt_WZ_stack_5","dummy",11, xAxis7);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(1,11.87059);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(2,70.60955);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(3,151.2477);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(4,215.1033);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(5,259.7203);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(6,282.4382);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(7,310.8867);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(8,314.7753);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(9,290.0108);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(10,275.2749);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinContent(11,646.5378);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(1,1.558685);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(2,3.80149);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(3,5.563736);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(4,6.635073);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(5,7.290799);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(6,7.60298);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(7,7.976699);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(8,8.026431);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(9,7.70423);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(10,7.505947);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetBinError(11,11.50321);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin11_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_stack->Add(m3lmet_Meas_rebin11_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin11_stack->Draw("same hist");
   Double_t xAxis8[12] = {0, 161.1957, 178.1472, 195.0986, 211.003, 226.4816, 241.9601, 260.9215, 283.6473, 310.5152, 348.0114, 500}; 
   
   TH1D *m3lmet_Meas_rebin11_total__2 = new TH1D("m3lmet_Meas_rebin11_total__2","dummy",11, xAxis8);
   m3lmet_Meas_rebin11_total__2->SetBinContent(1,61.7124);
   m3lmet_Meas_rebin11_total__2->SetBinContent(2,108.0421);
   m3lmet_Meas_rebin11_total__2->SetBinContent(3,204.0347);
   m3lmet_Meas_rebin11_total__2->SetBinContent(4,270.8766);
   m3lmet_Meas_rebin11_total__2->SetBinContent(5,314.1063);
   m3lmet_Meas_rebin11_total__2->SetBinContent(6,329.7736);
   m3lmet_Meas_rebin11_total__2->SetBinContent(7,372.2414);
   m3lmet_Meas_rebin11_total__2->SetBinContent(8,353.3844);
   m3lmet_Meas_rebin11_total__2->SetBinContent(9,331.3177);
   m3lmet_Meas_rebin11_total__2->SetBinContent(10,325.571);
   m3lmet_Meas_rebin11_total__2->SetBinContent(11,713.1868);
   m3lmet_Meas_rebin11_total__2->SetBinError(1,13.09071);
   m3lmet_Meas_rebin11_total__2->SetBinError(2,11.12033);
   m3lmet_Meas_rebin11_total__2->SetBinError(3,12.61856);
   m3lmet_Meas_rebin11_total__2->SetBinError(4,13.14607);
   m3lmet_Meas_rebin11_total__2->SetBinError(5,13.47653);
   m3lmet_Meas_rebin11_total__2->SetBinError(6,11.92158);
   m3lmet_Meas_rebin11_total__2->SetBinError(7,13.92829);
   m3lmet_Meas_rebin11_total__2->SetBinError(8,10.82044);
   m3lmet_Meas_rebin11_total__2->SetBinError(9,10.63632);
   m3lmet_Meas_rebin11_total__2->SetBinError(10,11.28911);
   m3lmet_Meas_rebin11_total__2->SetBinError(11,13.92726);
   m3lmet_Meas_rebin11_total__2->SetMinimum(0);
   m3lmet_Meas_rebin11_total__2->SetMaximum(1426.374);
   m3lmet_Meas_rebin11_total__2->SetEntries(15153);
   m3lmet_Meas_rebin11_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin11_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin11_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin11_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin11_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin11_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin11_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin11_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin11_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin11_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin11_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin11_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin11_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin11_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin11_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin11_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin11_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin11_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin11_total_errors_fx3001[11] = {
   80.59785,
   169.6714,
   186.6229,
   203.0508,
   218.7423,
   234.2208,
   251.4408,
   272.2844,
   297.0812,
   329.2633,
   424.0057};
   Double_t m3lmet_Meas_rebin11_total_errors_fy3001[11] = {
   61.7124,
   108.0421,
   204.0347,
   270.8766,
   314.1063,
   329.7736,
   372.2414,
   353.3844,
   331.3177,
   325.571,
   713.1868};
   Double_t m3lmet_Meas_rebin11_total_errors_felx3001[11] = {
   80.59785,
   8.475723,
   8.475731,
   7.952209,
   7.739265,
   7.739273,
   9.480698,
   11.36288,
   13.43394,
   18.74812,
   75.99429};
   Double_t m3lmet_Meas_rebin11_total_errors_fely3001[11] = {
   12.44715,
   6.168104,
   21.88972,
   16.18663,
   17.877,
   19.03982,
   25.78269,
   20.08393,
   25.70559,
   21.24639,
   46.36446};
   Double_t m3lmet_Meas_rebin11_total_errors_fehx3001[11] = {
   80.59785,
   8.475723,
   8.475731,
   7.952209,
   7.739265,
   7.739273,
   9.480698,
   11.36288,
   13.43394,
   18.74812,
   75.99429};
   Double_t m3lmet_Meas_rebin11_total_errors_fehy3001[11] = {
   3.734442,
   9.065433,
   12.31948,
   16.33065,
   25.36288,
   19.8975,
   22.43799,
   28.04601,
   24.46951,
   22.29012,
   49.46802};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,m3lmet_Meas_rebin11_total_errors_fx3001,m3lmet_Meas_rebin11_total_errors_fy3001,m3lmet_Meas_rebin11_total_errors_felx3001,m3lmet_Meas_rebin11_total_errors_fehx3001,m3lmet_Meas_rebin11_total_errors_fely3001,m3lmet_Meas_rebin11_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin11_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin11_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin11_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin11_total_errors3001->SetMinimum(44.33873);
   Graph_m3lmet_Meas_rebin11_total_errors3001->SetMaximum(833.9938);
   Graph_m3lmet_Meas_rebin11_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin11_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin11_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin11_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin11_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin11_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin11_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin11_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin11_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin11_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin11_total_errors","Total unc.","F");

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
   m3lmet_Meas_rebin11_canvas->Modified();
   m3lmet_Meas_rebin11_canvas->cd();
   m3lmet_Meas_rebin11_canvas->SetSelected(m3lmet_Meas_rebin11_canvas);
}
