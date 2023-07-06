void m3lmet_Meas_rebin8()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin8_canvas/m3lmet_Meas_rebin8
//=========  (Thu Jul  6 18:03:39 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin8_canvas = new TCanvas("m3lmet_Meas_rebin8_canvas", "m3lmet_Meas_rebin8",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin8_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin8_canvas->Range(-115.3846,-247.9639,525.641,1659.45);
   m3lmet_Meas_rebin8_canvas->SetFillColor(0);
   m3lmet_Meas_rebin8_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin8_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin8_canvas->SetTickx(1);
   m3lmet_Meas_rebin8_canvas->SetTicky(1);
   m3lmet_Meas_rebin8_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin8_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin8_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin8_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin8_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin8_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin8_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin8_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_total__1 = new TH1D("m3lmet_Meas_rebin8_total__1","dummy",8, xAxis1);
   m3lmet_Meas_rebin8_total__1->SetBinContent(1,86.30732);
   m3lmet_Meas_rebin8_total__1->SetBinContent(2,198.6429);
   m3lmet_Meas_rebin8_total__1->SetBinContent(3,341.1375);
   m3lmet_Meas_rebin8_total__1->SetBinContent(4,406.9583);
   m3lmet_Meas_rebin8_total__1->SetBinContent(5,457.2788);
   m3lmet_Meas_rebin8_total__1->SetBinContent(6,442.2525);
   m3lmet_Meas_rebin8_total__1->SetBinContent(7,434.4175);
   m3lmet_Meas_rebin8_total__1->SetBinContent(8,772.5028);
   m3lmet_Meas_rebin8_total__1->SetBinError(1,13.67107);
   m3lmet_Meas_rebin8_total__1->SetBinError(2,12.45284);
   m3lmet_Meas_rebin8_total__1->SetBinError(3,14.0587);
   m3lmet_Meas_rebin8_total__1->SetBinError(4,13.80198);
   m3lmet_Meas_rebin8_total__1->SetBinError(5,15.44186);
   m3lmet_Meas_rebin8_total__1->SetBinError(6,11.70804);
   m3lmet_Meas_rebin8_total__1->SetBinError(7,11.69563);
   m3lmet_Meas_rebin8_total__1->SetBinError(8,14.74501);
   m3lmet_Meas_rebin8_total__1->SetMinimum(0);
   m3lmet_Meas_rebin8_total__1->SetMaximum(1545.006);
   m3lmet_Meas_rebin8_total__1->SetEntries(15153);
   m3lmet_Meas_rebin8_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin8_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin8_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin8_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin8_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin8_stack = new THStack();
   m3lmet_Meas_rebin8_stack->SetName("m3lmet_Meas_rebin8_stack");
   m3lmet_Meas_rebin8_stack->SetTitle("m3lmet_Meas_rebin8");
   Double_t xAxis2[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1F *m3lmet_Meas_rebin8_stack_stack_1 = new TH1F("m3lmet_Meas_rebin8_stack_stack_1","m3lmet_Meas_rebin8",8, xAxis2);
   m3lmet_Meas_rebin8_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin8_stack_stack_1->SetMaximum(811.1279);
   m3lmet_Meas_rebin8_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin8_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin8_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin8_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin8_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->SetHistogram(m3lmet_Meas_rebin8_stack_stack_1);
   
   Double_t xAxis3[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin8_fakes_VV_stack_1","dummy",8, xAxis3);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(3,0.199256);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(4,0.4064792);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(7,0.5990046);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(8,0.205721);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(3,0.199256);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(4,0.2874255);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(7,0.3459432);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(8,0.205721);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_fakes_VV_stack_1,"");
   Double_t xAxis4[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin8_fakes_TT_stack_2","dummy",8, xAxis4);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(1,2.975049);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(2,7.169053);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(3,11.84274);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(4,13.21868);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(5,15.27217);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(6,18.29723);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(7,19.31096);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(8,28.42272);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(1,0.6792335);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(2,1.038072);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(3,1.285122);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(4,1.364312);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(5,1.490436);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(6,1.605611);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(7,1.661627);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(8,2.045099);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_fakes_TT_stack_2,"");
   Double_t xAxis5[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin8_fakes_DY_stack_3","dummy",8, xAxis5);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(1,50.00293);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(2,33.08689);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(3,38.82276);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(4,32.37848);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(5,43.33606);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(6,14.59885);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(7,14.63001);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(8,18.31663);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(1,13.37327);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(2,11.02961);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(3,11.71392);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(4,10.7973);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(5,12.51532);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(6,7.302842);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(7,7.317222);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(8,8.192825);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_fakes_DY_stack_3,"");
   Double_t xAxis6[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin8_prompt_ZZ_stack_4","dummy",8, xAxis6);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(1,6.849204);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(2,13.01282);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(3,20.8926);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(4,18.88693);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(5,20.81175);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(6,18.55435);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(7,22.05359);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(8,32.5473);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(1,1.616149);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(2,2.233568);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(3,2.819132);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(4,2.699968);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(5,2.833902);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(6,2.679563);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(7,2.922379);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(8,3.574044);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_prompt_ZZ_stack_4,"");
   Double_t xAxis7[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin8_prompt_WZ_stack_5","dummy",8, xAxis7);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(1,26.48014);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(2,145.3741);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(3,269.3801);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(4,342.0677);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(5,377.8588);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(6,390.8021);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(7,377.8239);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(8,693.0104);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(1,2.231717);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(2,5.230157);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(3,7.126863);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(4,8.04233);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(5,8.45963);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(6,8.601672);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(7,8.474962);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(8,11.54532);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_stack->Add(m3lmet_Meas_rebin8_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin8_stack->Draw("same hist");
   Double_t xAxis8[9] = {0, 167.5525, 190.8607, 212.9379, 234.2208, 258.0808, 289.3287, 333.9503, 500}; 
   
   TH1D *m3lmet_Meas_rebin8_total__2 = new TH1D("m3lmet_Meas_rebin8_total__2","dummy",8, xAxis8);
   m3lmet_Meas_rebin8_total__2->SetBinContent(1,86.30732);
   m3lmet_Meas_rebin8_total__2->SetBinContent(2,198.6429);
   m3lmet_Meas_rebin8_total__2->SetBinContent(3,341.1375);
   m3lmet_Meas_rebin8_total__2->SetBinContent(4,406.9583);
   m3lmet_Meas_rebin8_total__2->SetBinContent(5,457.2788);
   m3lmet_Meas_rebin8_total__2->SetBinContent(6,442.2525);
   m3lmet_Meas_rebin8_total__2->SetBinContent(7,434.4175);
   m3lmet_Meas_rebin8_total__2->SetBinContent(8,772.5028);
   m3lmet_Meas_rebin8_total__2->SetBinError(1,13.67107);
   m3lmet_Meas_rebin8_total__2->SetBinError(2,12.45284);
   m3lmet_Meas_rebin8_total__2->SetBinError(3,14.0587);
   m3lmet_Meas_rebin8_total__2->SetBinError(4,13.80198);
   m3lmet_Meas_rebin8_total__2->SetBinError(5,15.44186);
   m3lmet_Meas_rebin8_total__2->SetBinError(6,11.70804);
   m3lmet_Meas_rebin8_total__2->SetBinError(7,11.69563);
   m3lmet_Meas_rebin8_total__2->SetBinError(8,14.74501);
   m3lmet_Meas_rebin8_total__2->SetMinimum(0);
   m3lmet_Meas_rebin8_total__2->SetMaximum(1545.006);
   m3lmet_Meas_rebin8_total__2->SetEntries(15153);
   m3lmet_Meas_rebin8_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin8_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin8_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin8_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin8_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin8_total_errors_fx3001[8] = {
   83.77625,
   179.2066,
   201.8993,
   223.5793,
   246.1508,
   273.7047,
   311.6395,
   416.9752};
   Double_t m3lmet_Meas_rebin8_total_errors_fy3001[8] = {
   86.30732,
   198.6429,
   341.1375,
   406.9583,
   457.2788,
   442.2525,
   434.4175,
   772.5028};
   Double_t m3lmet_Meas_rebin8_total_errors_felx3001[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_total_errors_fely3001[8] = {
   17.59599,
   18.54086,
   24.06752,
   25.4901,
   37.54712,
   26.41804,
   31.18507,
   50.03513};
   Double_t m3lmet_Meas_rebin8_total_errors_fehx3001[8] = {
   83.77625,
   11.65412,
   11.03855,
   10.64149,
   11.92997,
   15.62396,
   22.31081,
   83.02484};
   Double_t m3lmet_Meas_rebin8_total_errors_fehy3001[8] = {
   17.76371,
   17.0264,
   25.61624,
   30.58121,
   32.68954,
   33.99627,
   35.16897,
   55.03437};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3lmet_Meas_rebin8_total_errors_fx3001,m3lmet_Meas_rebin8_total_errors_fy3001,m3lmet_Meas_rebin8_total_errors_felx3001,m3lmet_Meas_rebin8_total_errors_fehx3001,m3lmet_Meas_rebin8_total_errors_fely3001,m3lmet_Meas_rebin8_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin8_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin8_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin8_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetMinimum(61.8402);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetMaximum(903.4197);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin8_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin8_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin8_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin8_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin8_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin8_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin8_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin8_canvas->Modified();
   m3lmet_Meas_rebin8_canvas->cd();
   m3lmet_Meas_rebin8_canvas->SetSelected(m3lmet_Meas_rebin8_canvas);
}
