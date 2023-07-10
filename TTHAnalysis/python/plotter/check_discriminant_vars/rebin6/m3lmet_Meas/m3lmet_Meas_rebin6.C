void m3lmet_Meas_rebin6()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin6_canvas/m3lmet_Meas_rebin6
//=========  (Mon Jul 10 19:24:51 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin6_canvas = new TCanvas("m3lmet_Meas_rebin6_canvas", "m3lmet_Meas_rebin6",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin6_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin6_canvas->Range(-115.3846,-290.8014,525.641,1946.132);
   m3lmet_Meas_rebin6_canvas->SetFillColor(0);
   m3lmet_Meas_rebin6_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin6_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin6_canvas->SetTickx(1);
   m3lmet_Meas_rebin6_canvas->SetTicky(1);
   m3lmet_Meas_rebin6_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin6_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin6_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin6_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin6_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin6_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin6_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin6_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[7] = {0, 175.5873, 206.2585, 234.7342, 269.2283, 317.5774, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_total__1 = new TH1D("m3lmet_Meas_rebin6_total__1","dummy",6, xAxis1);
   m3lmet_Meas_rebin6_total__1->SetBinContent(1,140.594);
   m3lmet_Meas_rebin6_total__1->SetBinContent(2,373.7949);
   m3lmet_Meas_rebin6_total__1->SetBinContent(3,532.6212);
   m3lmet_Meas_rebin6_total__1->SetBinContent(4,608.3642);
   m3lmet_Meas_rebin6_total__1->SetBinContent(5,578.165);
   m3lmet_Meas_rebin6_total__1->SetBinContent(6,905.9582);
   m3lmet_Meas_rebin6_total__1->SetBinError(1,15.79298);
   m3lmet_Meas_rebin6_total__1->SetBinError(2,15.65704);
   m3lmet_Meas_rebin6_total__1->SetBinError(3,15.82166);
   m3lmet_Meas_rebin6_total__1->SetBinError(4,15.99263);
   m3lmet_Meas_rebin6_total__1->SetBinError(5,14.20066);
   m3lmet_Meas_rebin6_total__1->SetBinError(6,16.04793);
   m3lmet_Meas_rebin6_total__1->SetMinimum(0);
   m3lmet_Meas_rebin6_total__1->SetMaximum(1811.916);
   m3lmet_Meas_rebin6_total__1->SetEntries(15153);
   m3lmet_Meas_rebin6_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin6_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin6_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin6_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin6_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin6_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin6_stack = new THStack();
   m3lmet_Meas_rebin6_stack->SetName("m3lmet_Meas_rebin6_stack");
   m3lmet_Meas_rebin6_stack->SetTitle("m3lmet_Meas_rebin6");
   Double_t xAxis2[7] = {0, 175.5873, 206.2585, 234.7342, 269.2283, 317.5774, 500}; 
   
   TH1F *m3lmet_Meas_rebin6_stack_stack_1 = new TH1F("m3lmet_Meas_rebin6_stack_stack_1","m3lmet_Meas_rebin6",6, xAxis2);
   m3lmet_Meas_rebin6_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin6_stack_stack_1->SetMaximum(951.2561);
   m3lmet_Meas_rebin6_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin6_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin6_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin6_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->SetHistogram(m3lmet_Meas_rebin6_stack_stack_1);
   
   Double_t xAxis3[7] = {0, 175.5873, 206.2585, 234.7342, 269.2283, 317.5774, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin6_fakes_VV_stack_1","dummy",6, xAxis3);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(2,0.199256);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(3,0.4064792);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(5,0.5990046);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinContent(6,0.205721);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(2,0.199256);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(3,0.2874255);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(5,0.3459432);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetBinError(6,0.205721);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_fakes_VV_stack_1,"");
   Double_t xAxis4[7] = {0, 175.5873, 206.2585, 234.7342, 269.2283, 317.5774, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin6_fakes_TT_stack_2","dummy",6, xAxis4);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(1,4.620592);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(2,14.01138);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(3,16.71697);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(4,20.60691);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(5,26.2587);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinContent(6,34.29406);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(1,0.8470202);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(2,1.415503);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(3,1.533399);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(4,1.723693);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(5,1.935779);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetBinError(6,2.236937);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_fakes_TT_stack_2,"");
   Double_t xAxis5[7] = {0, 175.5873, 206.2585, 234.7342, 269.2283, 317.5774, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin6_fakes_DY_stack_3","dummy",6, xAxis5);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(1,64.78637);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(2,50.149);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(3,42.91303);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(4,39.77872);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(5,25.50776);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinContent(6,22.03772);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(1,15.28021);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(2,13.41191);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(3,12.39294);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(4,11.9991);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(5,9.645036);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetBinError(6,8.998272);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_fakes_DY_stack_3,"");
   Double_t xAxis6[7] = {0, 175.5873, 206.2585, 234.7342, 269.2283, 317.5774, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin6_prompt_ZZ_stack_4","dummy",6, xAxis6);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(1,9.531776);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(2,25.17446);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(3,25.69587);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(4,26.18237);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(5,24.47059);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinContent(6,42.55348);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(1,1.908223);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(2,3.101342);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(3,3.141308);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(4,3.177215);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(5,3.084238);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetBinError(6,4.077813);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_prompt_ZZ_stack_4,"");
   Double_t xAxis7[7] = {0, 175.5873, 206.2585, 234.7342, 269.2283, 317.5774, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin6_prompt_WZ_stack_5","dummy",6, xAxis7);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(1,61.65522);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(2,284.2608);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(3,446.8888);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(4,521.7962);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(5,501.329);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinContent(6,806.8672);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(1,3.402174);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(2,7.321339);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(3,9.189026);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(4,9.935794);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(5,9.759739);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetBinError(6,12.44557);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_stack->Add(m3lmet_Meas_rebin6_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin6_stack->Draw("same hist");
   Double_t xAxis8[7] = {0, 175.5873, 206.2585, 234.7342, 269.2283, 317.5774, 500}; 
   
   TH1D *m3lmet_Meas_rebin6_total__2 = new TH1D("m3lmet_Meas_rebin6_total__2","dummy",6, xAxis8);
   m3lmet_Meas_rebin6_total__2->SetBinContent(1,140.594);
   m3lmet_Meas_rebin6_total__2->SetBinContent(2,373.7949);
   m3lmet_Meas_rebin6_total__2->SetBinContent(3,532.6212);
   m3lmet_Meas_rebin6_total__2->SetBinContent(4,608.3642);
   m3lmet_Meas_rebin6_total__2->SetBinContent(5,578.165);
   m3lmet_Meas_rebin6_total__2->SetBinContent(6,905.9582);
   m3lmet_Meas_rebin6_total__2->SetBinError(1,15.79298);
   m3lmet_Meas_rebin6_total__2->SetBinError(2,15.65704);
   m3lmet_Meas_rebin6_total__2->SetBinError(3,15.82166);
   m3lmet_Meas_rebin6_total__2->SetBinError(4,15.99263);
   m3lmet_Meas_rebin6_total__2->SetBinError(5,14.20066);
   m3lmet_Meas_rebin6_total__2->SetBinError(6,16.04793);
   m3lmet_Meas_rebin6_total__2->SetMinimum(0);
   m3lmet_Meas_rebin6_total__2->SetMaximum(1811.916);
   m3lmet_Meas_rebin6_total__2->SetEntries(15153);
   m3lmet_Meas_rebin6_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin6_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin6_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin6_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin6_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin6_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin6_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin6_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin6_total_errors_fx3001[6] = {
   87.79367,
   190.9229,
   220.4963,
   251.9813,
   293.4029,
   408.7887};
   Double_t m3lmet_Meas_rebin6_total_errors_fy3001[6] = {
   140.594,
   373.7949,
   532.6212,
   608.3642,
   578.165,
   905.9582};
   Double_t m3lmet_Meas_rebin6_total_errors_felx3001[6] = {
   87.79367,
   15.33557,
   14.23785,
   17.24707,
   24.17453,
   91.2113};
   Double_t m3lmet_Meas_rebin6_total_errors_fely3001[6] = {
   22.90768,
   30.87652,
   38.72592,
   47.34371,
   45.01487,
   70.91596};
   Double_t m3lmet_Meas_rebin6_total_errors_fehx3001[6] = {
   87.79367,
   15.33557,
   14.23785,
   17.24707,
   24.17453,
   91.2113};
   Double_t m3lmet_Meas_rebin6_total_errors_fehy3001[6] = {
   24.32743,
   32.23135,
   42.01988,
   49.27927,
   49.25261,
   72.77576};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,m3lmet_Meas_rebin6_total_errors_fx3001,m3lmet_Meas_rebin6_total_errors_fy3001,m3lmet_Meas_rebin6_total_errors_felx3001,m3lmet_Meas_rebin6_total_errors_fehx3001,m3lmet_Meas_rebin6_total_errors_fely3001,m3lmet_Meas_rebin6_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin6_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin6_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin6_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetMinimum(31.58152);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetMaximum(1064.839);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin6_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin6_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin6_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin6_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin6_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin6_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin6_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin6_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin6_canvas->Modified();
   m3lmet_Meas_rebin6_canvas->cd();
   m3lmet_Meas_rebin6_canvas->SetSelected(m3lmet_Meas_rebin6_canvas);
}
