void m3lmet_Meas_rebin8()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin8_canvas/m3lmet_Meas_rebin8
//=========  (Thu May  4 19:14:04 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin8_canvas = new TCanvas("m3lmet_Meas_rebin8_canvas", "m3lmet_Meas_rebin8",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin8_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin8_canvas->Range(-115.3846,-263.9499,525.641,1766.434);
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
   m3lmet_Meas_rebin8_total__1->SetBinContent(1,94.02009);
   m3lmet_Meas_rebin8_total__1->SetBinContent(2,215.2284);
   m3lmet_Meas_rebin8_total__1->SetBinContent(3,371.5211);
   m3lmet_Meas_rebin8_total__1->SetBinContent(4,440.7996);
   m3lmet_Meas_rebin8_total__1->SetBinContent(5,494.4332);
   m3lmet_Meas_rebin8_total__1->SetBinContent(6,478.0963);
   m3lmet_Meas_rebin8_total__1->SetBinContent(7,467.8429);
   m3lmet_Meas_rebin8_total__1->SetBinContent(8,822.3054);
   m3lmet_Meas_rebin8_total__1->SetBinError(1,14.88274);
   m3lmet_Meas_rebin8_total__1->SetBinError(2,13.25786);
   m3lmet_Meas_rebin8_total__1->SetBinError(3,15.42491);
   m3lmet_Meas_rebin8_total__1->SetBinError(4,14.92737);
   m3lmet_Meas_rebin8_total__1->SetBinError(5,16.65025);
   m3lmet_Meas_rebin8_total__1->SetBinError(6,12.584);
   m3lmet_Meas_rebin8_total__1->SetBinError(7,12.53186);
   m3lmet_Meas_rebin8_total__1->SetBinError(8,15.67748);
   m3lmet_Meas_rebin8_total__1->SetMinimum(0);
   m3lmet_Meas_rebin8_total__1->SetMaximum(1644.611);
   m3lmet_Meas_rebin8_total__1->SetEntries(15153);
   m3lmet_Meas_rebin8_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin8_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin8_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin8_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin8_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__1->GetYaxis()->SetLabelSize(0.05);
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
   m3lmet_Meas_rebin8_stack_stack_1->SetMaximum(863.4206);
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
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(3,0.2199288);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(4,0.4398576);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(7,0.6597863);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinContent(8,0.2199288);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(3,0.2199288);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(4,0.3110263);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(7,0.3809278);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetBinError(8,0.2199288);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(1,3.21587);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(2,7.682599);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(3,12.78934);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(4,14.14351);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(5,16.40045);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(6,19.56017);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(7,20.66956);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinContent(8,29.94211);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(1,0.7323256);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(2,1.111123);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(3,1.387199);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(4,1.458792);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(5,1.599442);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(6,1.715541);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(7,1.778323);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetBinError(8,2.1543);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(1,54.47299);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(2,35.01835);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(3,42.80021);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(4,35.01835);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(5,46.69113);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(6,15.56371);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(7,15.56371);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinContent(8,19.45464);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(1,14.55852);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(2,11.67278);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(3,12.90475);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(4,11.67278);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(5,13.47857);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(6,7.781856);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(7,7.781856);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetBinError(8,8.700379);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(1,7.473421);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(2,14.11646);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(3,22.83545);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(4,20.34431);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(5,22.42026);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(6,19.92912);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(7,23.66583);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinContent(8,34.46077);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(1,1.761502);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(2,2.420953);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(3,3.079132);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(4,2.90633);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(5,3.051011);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(6,2.876521);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(7,3.134616);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetBinError(8,3.782561);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(1,28.85781);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(2,158.411);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(3,292.8761);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(4,370.8536);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(5,408.9214);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(6,423.0433);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(7,407.2841);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinContent(8,738.2279);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(1,2.430266);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(2,5.693965);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(3,7.742196);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(4,8.712112);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(5,9.148335);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(6,9.304961);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(7,9.130002);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetBinError(8,12.29185);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
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
   m3lmet_Meas_rebin8_total__2->SetBinContent(1,94.02009);
   m3lmet_Meas_rebin8_total__2->SetBinContent(2,215.2284);
   m3lmet_Meas_rebin8_total__2->SetBinContent(3,371.5211);
   m3lmet_Meas_rebin8_total__2->SetBinContent(4,440.7996);
   m3lmet_Meas_rebin8_total__2->SetBinContent(5,494.4332);
   m3lmet_Meas_rebin8_total__2->SetBinContent(6,478.0963);
   m3lmet_Meas_rebin8_total__2->SetBinContent(7,467.8429);
   m3lmet_Meas_rebin8_total__2->SetBinContent(8,822.3054);
   m3lmet_Meas_rebin8_total__2->SetBinError(1,14.88274);
   m3lmet_Meas_rebin8_total__2->SetBinError(2,13.25786);
   m3lmet_Meas_rebin8_total__2->SetBinError(3,15.42491);
   m3lmet_Meas_rebin8_total__2->SetBinError(4,14.92737);
   m3lmet_Meas_rebin8_total__2->SetBinError(5,16.65025);
   m3lmet_Meas_rebin8_total__2->SetBinError(6,12.584);
   m3lmet_Meas_rebin8_total__2->SetBinError(7,12.53186);
   m3lmet_Meas_rebin8_total__2->SetBinError(8,15.67748);
   m3lmet_Meas_rebin8_total__2->SetMinimum(0);
   m3lmet_Meas_rebin8_total__2->SetMaximum(1644.611);
   m3lmet_Meas_rebin8_total__2->SetEntries(15153);
   m3lmet_Meas_rebin8_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin8_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin8_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin8_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin8_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin8_total__2->GetYaxis()->SetLabelSize(0.05);
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
   94.02009,
   215.2284,
   371.5211,
   440.7996,
   494.4332,
   478.0963,
   467.8429,
   822.3054};
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
   13.62987,
   17.15972,
   22.94916,
   25.09868,
   37.93289,
   27.3772,
   32.51799,
   52.05798};
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
   8.749495,
   13.00309,
   22.40616,
   29.60044,
   29.79569,
   35.26612,
   36.0678,
   56.7656};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3lmet_Meas_rebin8_total_errors_fx3001,m3lmet_Meas_rebin8_total_errors_fy3001,m3lmet_Meas_rebin8_total_errors_felx3001,m3lmet_Meas_rebin8_total_errors_fehx3001,m3lmet_Meas_rebin8_total_errors_fely3001,m3lmet_Meas_rebin8_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin8_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin8_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin8_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetMinimum(0.5221475);
   Graph_m3lmet_Meas_rebin8_total_errors3001->SetMaximum(958.9391);
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
   m3lmet_Meas_rebin8_canvas->Modified();
   m3lmet_Meas_rebin8_canvas->cd();
   m3lmet_Meas_rebin8_canvas->SetSelected(m3lmet_Meas_rebin8_canvas);
}
