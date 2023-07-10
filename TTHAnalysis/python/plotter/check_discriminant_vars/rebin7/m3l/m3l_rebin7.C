void m3l_rebin7()
{
//=========Macro generated from canvas: m3l_rebin7_canvas/m3l_rebin7
//=========  (Mon Jul 10 19:04:25 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin7_canvas = new TCanvas("m3l_rebin7_canvas", "m3l_rebin7",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin7_canvas->SetHighLightColor(2);
   m3l_rebin7_canvas->Range(-115.3846,-222.4111,525.641,1488.444);
   m3l_rebin7_canvas->SetFillColor(0);
   m3l_rebin7_canvas->SetBorderMode(0);
   m3l_rebin7_canvas->SetBorderSize(2);
   m3l_rebin7_canvas->SetTickx(1);
   m3l_rebin7_canvas->SetTicky(1);
   m3l_rebin7_canvas->SetLeftMargin(0.18);
   m3l_rebin7_canvas->SetRightMargin(0.04);
   m3l_rebin7_canvas->SetTopMargin(0.06);
   m3l_rebin7_canvas->SetBottomMargin(0.13);
   m3l_rebin7_canvas->SetFrameFillStyle(0);
   m3l_rebin7_canvas->SetFrameBorderMode(0);
   m3l_rebin7_canvas->SetFrameFillStyle(0);
   m3l_rebin7_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 117.9253, 135.8506, 154.9083, 178.2091, 202.7695, 245.5105, 500}; 
   
   TH1D *m3l_rebin7_total__1 = new TH1D("m3l_rebin7_total__1","dummy",7, xAxis1);
   m3l_rebin7_total__1->SetBinContent(1,96.20095);
   m3l_rebin7_total__1->SetBinContent(2,406.2466);
   m3l_rebin7_total__1->SetBinContent(3,495.6063);
   m3l_rebin7_total__1->SetBinContent(4,543.4023);
   m3l_rebin7_total__1->SetBinContent(5,436.612);
   m3l_rebin7_total__1->SetBinContent(6,468.5331);
   m3l_rebin7_total__1->SetBinContent(7,692.8962);
   m3l_rebin7_total__1->SetBinError(1,7.472754);
   m3l_rebin7_total__1->SetBinError(2,18.39161);
   m3l_rebin7_total__1->SetBinError(3,15.30041);
   m3l_rebin7_total__1->SetBinError(4,15.84108);
   m3l_rebin7_total__1->SetBinError(5,13.20203);
   m3l_rebin7_total__1->SetBinError(6,13.89348);
   m3l_rebin7_total__1->SetBinError(7,14.60777);
   m3l_rebin7_total__1->SetMinimum(0);
   m3l_rebin7_total__1->SetMaximum(1385.792);
   m3l_rebin7_total__1->SetEntries(15153);
   m3l_rebin7_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_total__1->SetFillColor(ci);
   m3l_rebin7_total__1->SetMarkerStyle(20);
   m3l_rebin7_total__1->SetMarkerSize(1.1);
   m3l_rebin7_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin7_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin7_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->Draw("HIST");
   
   THStack *m3l_rebin7_stack = new THStack();
   m3l_rebin7_stack->SetName("m3l_rebin7_stack");
   m3l_rebin7_stack->SetTitle("m3l_rebin7");
   Double_t xAxis2[8] = {0, 117.9253, 135.8506, 154.9083, 178.2091, 202.7695, 245.5105, 500}; 
   
   TH1F *m3l_rebin7_stack_stack_1 = new TH1F("m3l_rebin7_stack_stack_1","m3l_rebin7",7, xAxis2);
   m3l_rebin7_stack_stack_1->SetMinimum(0);
   m3l_rebin7_stack_stack_1->SetMaximum(727.541);
   m3l_rebin7_stack_stack_1->SetDirectory(0);
   m3l_rebin7_stack_stack_1->SetStats(0);
   m3l_rebin7_stack_stack_1->SetLineStyle(0);
   m3l_rebin7_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->SetHistogram(m3l_rebin7_stack_stack_1);
   
   Double_t xAxis3[8] = {0, 117.9253, 135.8506, 154.9083, 178.2091, 202.7695, 245.5105, 500}; 
   
   TH1D *m3l_rebin7_fakes_VV_stack_1 = new TH1D("m3l_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(1,0.4031181);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(4,0.2060137);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(5,0.2026171);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(6,0.1938399);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(7,0.404872);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(1,0.2850661);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(4,0.2060137);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(5,0.2026171);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(6,0.1938399);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(7,0.2863255);
   m3l_rebin7_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin7_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin7_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin7_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_fakes_VV_stack_1,"");
   Double_t xAxis4[8] = {0, 117.9253, 135.8506, 154.9083, 178.2091, 202.7695, 245.5105, 500}; 
   
   TH1D *m3l_rebin7_fakes_TT_stack_2 = new TH1D("m3l_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(1,5.820092);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(2,13.60903);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(3,21.07628);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(4,19.61923);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(5,16.26989);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(6,18.13882);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(7,21.97527);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(1,0.9312226);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(2,1.424029);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(3,1.721644);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(4,1.65909);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(5,1.511804);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(6,1.616684);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(7,1.812115);
   m3l_rebin7_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin7_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin7_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin7_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_fakes_TT_stack_2,"");
   Double_t xAxis5[8] = {0, 117.9253, 135.8506, 154.9083, 178.2091, 202.7695, 245.5105, 500}; 
   
   TH1D *m3l_rebin7_fakes_DY_stack_3 = new TH1D("m3l_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(1,10.90016);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(2,75.34454);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(3,39.69872);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(4,42.64974);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(5,25.61621);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(6,29.17032);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(7,21.79293);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(1,6.294354);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(2,16.45008);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(3,11.97447);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(4,12.32347);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(5,9.686286);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(6,10.31535);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(7,8.900144);
   m3l_rebin7_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin7_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin7_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin7_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_fakes_DY_stack_3,"");
   Double_t xAxis6[8] = {0, 117.9253, 135.8506, 154.9083, 178.2091, 202.7695, 245.5105, 500}; 
   
   TH1D *m3l_rebin7_prompt_ZZ_stack_4 = new TH1D("m3l_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(1,2.27592);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(2,29.14574);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(3,28.00954);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(4,26.94871);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(5,16.9738);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(6,20.05683);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(7,30.19801);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(1,0.9302023);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(2,3.346029);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(3,3.280482);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(4,3.222586);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(5,2.560583);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(6,2.782804);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(7,3.443086);
   m3l_rebin7_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin7_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin7_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin7_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_prompt_ZZ_stack_4,"");
   Double_t xAxis7[8] = {0, 117.9253, 135.8506, 154.9083, 178.2091, 202.7695, 245.5105, 500}; 
   
   TH1D *m3l_rebin7_prompt_WZ_stack_5 = new TH1D("m3l_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(1,76.80166);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(2,288.1472);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(3,406.8218);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(4,453.9786);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(5,377.5495);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(6,400.9733);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(7,618.5251);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(1,3.795978);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(2,7.377149);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(3,8.77434);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(4,9.267786);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(5,8.460862);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(6,8.730811);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(7,10.90659);
   m3l_rebin7_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin7_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin7_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_prompt_WZ_stack_5,"");
   m3l_rebin7_stack->Draw("same hist");
   Double_t xAxis8[8] = {0, 117.9253, 135.8506, 154.9083, 178.2091, 202.7695, 245.5105, 500}; 
   
   TH1D *m3l_rebin7_total__2 = new TH1D("m3l_rebin7_total__2","dummy",7, xAxis8);
   m3l_rebin7_total__2->SetBinContent(1,96.20095);
   m3l_rebin7_total__2->SetBinContent(2,406.2466);
   m3l_rebin7_total__2->SetBinContent(3,495.6063);
   m3l_rebin7_total__2->SetBinContent(4,543.4023);
   m3l_rebin7_total__2->SetBinContent(5,436.612);
   m3l_rebin7_total__2->SetBinContent(6,468.5331);
   m3l_rebin7_total__2->SetBinContent(7,692.8962);
   m3l_rebin7_total__2->SetBinError(1,7.472754);
   m3l_rebin7_total__2->SetBinError(2,18.39161);
   m3l_rebin7_total__2->SetBinError(3,15.30041);
   m3l_rebin7_total__2->SetBinError(4,15.84108);
   m3l_rebin7_total__2->SetBinError(5,13.20203);
   m3l_rebin7_total__2->SetBinError(6,13.89348);
   m3l_rebin7_total__2->SetBinError(7,14.60777);
   m3l_rebin7_total__2->SetMinimum(0);
   m3l_rebin7_total__2->SetMaximum(1385.792);
   m3l_rebin7_total__2->SetEntries(15153);
   m3l_rebin7_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_total__2->SetFillColor(ci);
   m3l_rebin7_total__2->SetMarkerStyle(20);
   m3l_rebin7_total__2->SetMarkerSize(1.1);
   m3l_rebin7_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin7_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin7_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin7_total_errors_fx3001[7] = {
   58.96266,
   126.888,
   145.3795,
   166.5587,
   190.4893,
   224.14,
   372.7552};
   Double_t m3l_rebin7_total_errors_fy3001[7] = {
   96.20095,
   406.2466,
   495.6063,
   543.4023,
   436.612,
   468.5331,
   692.8962};
   Double_t m3l_rebin7_total_errors_felx3001[7] = {
   58.96266,
   8.962662,
   9.528824,
   11.65038,
   12.28021,
   21.3705,
   127.2448};
   Double_t m3l_rebin7_total_errors_fely3001[7] = {
   7.733526,
   37.84482,
   42.82076,
   40.47029,
   31.68506,
   33.641,
   55.91975};
   Double_t m3l_rebin7_total_errors_fehx3001[7] = {
   58.96266,
   8.962662,
   9.528824,
   11.65038,
   12.28021,
   21.3705,
   127.2448};
   Double_t m3l_rebin7_total_errors_fehy3001[7] = {
   9.215416,
   41.86553,
   39.65326,
   43.10772,
   34.36098,
   36.87541,
   57.07128};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,m3l_rebin7_total_errors_fx3001,m3l_rebin7_total_errors_fy3001,m3l_rebin7_total_errors_felx3001,m3l_rebin7_total_errors_fehx3001,m3l_rebin7_total_errors_fely3001,m3l_rebin7_total_errors_fehy3001);
   grae->SetName("m3l_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin7_total_errors3001 = new TH1F("Graph_m3l_rebin7_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin7_total_errors3001->SetMinimum(22.31742);
   Graph_m3l_rebin7_total_errors3001->SetMaximum(816.1175);
   Graph_m3l_rebin7_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin7_total_errors3001->SetStats(0);
   Graph_m3l_rebin7_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin7_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin7_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin7_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin7_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin7_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin7_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin7_total_errors","Total unc.","F");
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
   m3l_rebin7_canvas->Modified();
   m3l_rebin7_canvas->cd();
   m3l_rebin7_canvas->SetSelected(m3l_rebin7_canvas);
}
