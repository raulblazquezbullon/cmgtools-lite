void m3lmet_Meas_rebin10()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin10_canvas/m3lmet_Meas_rebin10
//=========  (Thu Jul  6 18:04:43 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin10_canvas = new TCanvas("m3lmet_Meas_rebin10_canvas", "m3lmet_Meas_rebin10",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin10_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin10_canvas->Range(-115.3846,-224.7181,525.641,1503.883);
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
   m3lmet_Meas_rebin10_total__1->SetBinContent(1,62.91722);
   m3lmet_Meas_rebin10_total__1->SetBinContent(2,123.1527);
   m3lmet_Meas_rebin10_total__1->SetBinContent(3,229.8091);
   m3lmet_Meas_rebin10_total__1->SetBinContent(4,289.4775);
   m3lmet_Meas_rebin10_total__1->SetBinContent(5,327.6894);
   m3lmet_Meas_rebin10_total__1->SetBinContent(6,340.1028);
   m3lmet_Meas_rebin10_total__1->SetBinContent(7,394.5947);
   m3lmet_Meas_rebin10_total__1->SetBinContent(8,324.3708);
   m3lmet_Meas_rebin10_total__1->SetBinContent(9,347.2999);
   m3lmet_Meas_rebin10_total__1->SetBinContent(10,700.0834);
   m3lmet_Meas_rebin10_total__1->SetBinError(1,12.54246);
   m3lmet_Meas_rebin10_total__1->SetBinError(2,11.26141);
   m3lmet_Meas_rebin10_total__1->SetBinError(3,12.38677);
   m3lmet_Meas_rebin10_total__1->SetBinError(4,11.85745);
   m3lmet_Meas_rebin10_total__1->SetBinError(5,12.32676);
   m3lmet_Meas_rebin10_total__1->SetBinError(6,12.35004);
   m3lmet_Meas_rebin10_total__1->SetBinError(7,11.83984);
   m3lmet_Meas_rebin10_total__1->SetBinError(8,11.82594);
   m3lmet_Meas_rebin10_total__1->SetBinError(9,10.34381);
   m3lmet_Meas_rebin10_total__1->SetBinError(10,13.79056);
   m3lmet_Meas_rebin10_total__1->SetMinimum(0);
   m3lmet_Meas_rebin10_total__1->SetMaximum(1400.167);
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
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__1->GetYaxis()->SetLabelSize(0.04);
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
   m3lmet_Meas_rebin10_stack_stack_1->SetMaximum(735.0876);
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
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(3,0.199256);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(5,0.4064792);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(9,0.5990046);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinContent(10,0.205721);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(3,0.199256);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(5,0.2874255);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(9,0.3459432);
   m3lmet_Meas_rebin10_fakes_VV_stack_1->SetBinError(10,0.205721);
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
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(1,2.178127);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(2,4.621766);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(3,8.35031);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(4,9.236543);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(5,10.81878);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(6,11.77338);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(7,14.1609);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(8,15.28831);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(9,15.19294);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinContent(10,24.88756);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(1,0.5708988);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(2,0.8477604);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(3,1.091383);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(4,1.137496);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(5,1.233774);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(6,1.315739);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(7,1.40986);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(8,1.484154);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(9,1.462653);
   m3lmet_Meas_rebin10_fakes_TT_stack_2->SetBinError(10,1.918821);
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
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(1,42.76215);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(2,29.38996);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(3,31.91615);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(4,24.80561);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(5,25.41719);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(6,25.14761);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(7,18.18845);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(8,21.99368);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(9,10.92182);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinContent(10,14.62999);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(1,12.35433);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(2,10.39167);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(3,10.64744);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(4,9.379906);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(5,9.608716);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(6,9.509128);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(7,8.136935);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(8,8.982088);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(9,6.307667);
   m3lmet_Meas_rebin10_fakes_DY_stack_3->SetBinError(10,7.316493);
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
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(1,4.963198);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(2,7.259134);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(3,16.31382);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(4,16.02067);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(5,15.08473);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(6,15.04385);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(7,17.67712);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(8,12.08502);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(9,20.44847);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinContent(10,28.71253);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(1,1.378194);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(2,1.666836);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(3,2.49007);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(4,2.473281);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(5,2.417182);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(6,2.410507);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(7,2.60796);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(8,2.171246);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(9,2.810171);
   m3lmet_Meas_rebin10_prompt_ZZ_stack_4->SetBinError(10,3.361811);
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
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(1,13.01375);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(2,81.88183);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(3,173.0296);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(4,239.4146);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(5,275.9623);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(6,288.1379);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(7,344.5682);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(8,275.0038);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(9,300.1377);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinContent(10,631.6476);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(1,1.567897);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(2,3.916076);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(3,5.712525);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(4,6.723502);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(5,7.223155);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(6,7.386357);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(7,8.073602);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(8,7.228961);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(9,7.553255);
   m3lmet_Meas_rebin10_prompt_WZ_stack_5->SetBinError(10,11.02826);
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
   m3lmet_Meas_rebin10_total__2->SetBinContent(1,62.91722);
   m3lmet_Meas_rebin10_total__2->SetBinContent(2,123.1527);
   m3lmet_Meas_rebin10_total__2->SetBinContent(3,229.8091);
   m3lmet_Meas_rebin10_total__2->SetBinContent(4,289.4775);
   m3lmet_Meas_rebin10_total__2->SetBinContent(5,327.6894);
   m3lmet_Meas_rebin10_total__2->SetBinContent(6,340.1028);
   m3lmet_Meas_rebin10_total__2->SetBinContent(7,394.5947);
   m3lmet_Meas_rebin10_total__2->SetBinContent(8,324.3708);
   m3lmet_Meas_rebin10_total__2->SetBinContent(9,347.2999);
   m3lmet_Meas_rebin10_total__2->SetBinContent(10,700.0834);
   m3lmet_Meas_rebin10_total__2->SetBinError(1,12.54246);
   m3lmet_Meas_rebin10_total__2->SetBinError(2,11.26141);
   m3lmet_Meas_rebin10_total__2->SetBinError(3,12.38677);
   m3lmet_Meas_rebin10_total__2->SetBinError(4,11.85745);
   m3lmet_Meas_rebin10_total__2->SetBinError(5,12.32676);
   m3lmet_Meas_rebin10_total__2->SetBinError(6,12.35004);
   m3lmet_Meas_rebin10_total__2->SetBinError(7,11.83984);
   m3lmet_Meas_rebin10_total__2->SetBinError(8,11.82594);
   m3lmet_Meas_rebin10_total__2->SetBinError(9,10.34381);
   m3lmet_Meas_rebin10_total__2->SetBinError(10,13.79056);
   m3lmet_Meas_rebin10_total__2->SetMinimum(0);
   m3lmet_Meas_rebin10_total__2->SetMaximum(1400.167);
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
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin10_total__2->GetYaxis()->SetLabelSize(0.04);
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
   62.91722,
   123.1527,
   229.8091,
   289.4775,
   327.6894,
   340.1028,
   394.5947,
   324.3708,
   347.2999,
   700.0834};
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
   13.00571,
   11.25832,
   19.23001,
   19.35918,
   20.49682,
   21.13773,
   29.92364,
   25.89993,
   21.32225,
   48.52205};
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
   14.00881,
   12.63286,
   18.43892,
   20.21698,
   26.86273,
   23.37239,
   27.86749,
   25.46592,
   24.49091,
   51.29422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,m3lmet_Meas_rebin10_total_errors_fx3001,m3lmet_Meas_rebin10_total_errors_fy3001,m3lmet_Meas_rebin10_total_errors_felx3001,m3lmet_Meas_rebin10_total_errors_fehx3001,m3lmet_Meas_rebin10_total_errors_fely3001,m3lmet_Meas_rebin10_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin10_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin10_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetMinimum(44.92036);
   Graph_m3lmet_Meas_rebin10_total_errors3001->SetMaximum(821.5243);
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
   m3lmet_Meas_rebin10_canvas->Modified();
   m3lmet_Meas_rebin10_canvas->cd();
   m3lmet_Meas_rebin10_canvas->SetSelected(m3lmet_Meas_rebin10_canvas);
}
