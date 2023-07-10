void m3l_rebin5()
{
//=========Macro generated from canvas: m3l_rebin5_canvas/m3l_rebin5
//=========  (Mon Jul 10 18:53:53 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin5_canvas = new TCanvas("m3l_rebin5_canvas", "m3l_rebin5",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin5_canvas->SetHighLightColor(2);
   m3l_rebin5_canvas->Range(-115.3846,-272.7642,525.641,1825.422);
   m3l_rebin5_canvas->SetFillColor(0);
   m3l_rebin5_canvas->SetBorderMode(0);
   m3l_rebin5_canvas->SetBorderSize(2);
   m3l_rebin5_canvas->SetTickx(1);
   m3l_rebin5_canvas->SetTicky(1);
   m3l_rebin5_canvas->SetLeftMargin(0.18);
   m3l_rebin5_canvas->SetRightMargin(0.04);
   m3l_rebin5_canvas->SetTopMargin(0.06);
   m3l_rebin5_canvas->SetBottomMargin(0.13);
   m3l_rebin5_canvas->SetFrameFillStyle(0);
   m3l_rebin5_canvas->SetFrameBorderMode(0);
   m3l_rebin5_canvas->SetFrameFillStyle(0);
   m3l_rebin5_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0, 125.0955, 150.2482, 182.8692, 228.4141, 500}; 
   
   TH1D *m3l_rebin5_total__1 = new TH1D("m3l_rebin5_total__1","dummy",5, xAxis1);
   m3l_rebin5_total__1->SetBinContent(1,217.7665);
   m3l_rebin5_total__1->SetBinContent(2,664.1596);
   m3l_rebin5_total__1->SetBinContent(3,758.7202);
   m3l_rebin5_total__1->SetBinContent(4,649.0859);
   m3l_rebin5_total__1->SetBinContent(5,849.7653);
   m3l_rebin5_total__1->SetBinError(1,11.83656);
   m3l_rebin5_total__1->SetBinError(2,20.98754);
   m3l_rebin5_total__1->SetBinError(3,18.15735);
   m3l_rebin5_total__1->SetBinError(4,17.10964);
   m3l_rebin5_total__1->SetBinError(5,16.02608);
   m3l_rebin5_total__1->SetMinimum(0);
   m3l_rebin5_total__1->SetMaximum(1699.531);
   m3l_rebin5_total__1->SetEntries(15153);
   m3l_rebin5_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin5_total__1->SetFillColor(ci);
   m3l_rebin5_total__1->SetMarkerStyle(20);
   m3l_rebin5_total__1->SetMarkerSize(1.1);
   m3l_rebin5_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin5_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin5_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin5_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin5_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin5_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin5_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin5_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin5_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin5_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_total__1->Draw("HIST");
   
   THStack *m3l_rebin5_stack = new THStack();
   m3l_rebin5_stack->SetName("m3l_rebin5_stack");
   m3l_rebin5_stack->SetTitle("m3l_rebin5");
   Double_t xAxis2[6] = {0, 125.0955, 150.2482, 182.8692, 228.4141, 500}; 
   
   TH1F *m3l_rebin5_stack_stack_1 = new TH1F("m3l_rebin5_stack_stack_1","m3l_rebin5",5, xAxis2);
   m3l_rebin5_stack_stack_1->SetMinimum(0);
   m3l_rebin5_stack_stack_1->SetMaximum(892.2536);
   m3l_rebin5_stack_stack_1->SetDirectory(0);
   m3l_rebin5_stack_stack_1->SetStats(0);
   m3l_rebin5_stack_stack_1->SetLineStyle(0);
   m3l_rebin5_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin5_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->SetHistogram(m3l_rebin5_stack_stack_1);
   
   Double_t xAxis3[6] = {0, 125.0955, 150.2482, 182.8692, 228.4141, 500}; 
   
   TH1D *m3l_rebin5_fakes_VV_stack_1 = new TH1D("m3l_rebin5_fakes_VV_stack_1","dummy",5, xAxis3);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(1,0.4031181);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(3,0.2060137);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(4,0.3964571);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(5,0.404872);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(1,0.2850661);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(3,0.2060137);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(4,0.2804062);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(5,0.2863255);
   m3l_rebin5_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin5_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin5_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin5_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_fakes_VV_stack_1,"");
   Double_t xAxis4[6] = {0, 125.0955, 150.2482, 182.8692, 228.4141, 500}; 
   
   TH1D *m3l_rebin5_fakes_TT_stack_2 = new TH1D("m3l_rebin5_fakes_TT_stack_2","dummy",5, xAxis4);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(1,10.40299);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(2,23.61543);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(3,29.04709);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(4,24.58879);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(5,28.85431);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(1,1.252909);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(2,1.836771);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(3,2.0201);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(4,1.867977);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(5,2.069059);
   m3l_rebin5_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin5_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin5_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin5_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_fakes_TT_stack_2,"");
   Double_t xAxis5[6] = {0, 125.0955, 150.2482, 182.8692, 228.4141, 500}; 
   
   TH1D *m3l_rebin5_fakes_DY_stack_3 = new TH1D("m3l_rebin5_fakes_DY_stack_3","dummy",5, xAxis5);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(1,28.56716);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(2,90.15198);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(3,53.35795);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(4,47.65344);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(5,25.44208);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(1,10.1059);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(2,18.0383);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(3,13.78798);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(4,13.22031);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(5,9.619193);
   m3l_rebin5_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin5_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin5_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin5_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_fakes_DY_stack_3,"");
   Double_t xAxis6[6] = {0, 125.0955, 150.2482, 182.8692, 228.4141, 500}; 
   
   TH1D *m3l_rebin5_prompt_ZZ_stack_4 = new TH1D("m3l_rebin5_prompt_ZZ_stack_4","dummy",5, xAxis6);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(1,13.83858);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(2,39.44843);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(3,38.09145);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(4,25.42255);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(5,36.80754);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(1,2.308632);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(2,3.889809);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(3,3.830288);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(4,3.131334);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(5,3.798221);
   m3l_rebin5_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin5_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin5_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin5_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_prompt_ZZ_stack_4,"");
   Double_t xAxis7[6] = {0, 125.0955, 150.2482, 182.8692, 228.4141, 500}; 
   
   TH1D *m3l_rebin5_prompt_WZ_stack_5 = new TH1D("m3l_rebin5_prompt_WZ_stack_5","dummy",5, xAxis7);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(1,164.5546);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(2,510.9438);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(3,638.0177);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(4,551.0247);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(5,758.2565);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(1,5.567238);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(2,9.82813);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(3,10.9903);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(4,10.22692);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(5,12.06304);
   m3l_rebin5_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin5_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin5_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin5_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_stack->Add(m3l_rebin5_prompt_WZ_stack_5,"");
   m3l_rebin5_stack->Draw("same hist");
   Double_t xAxis8[6] = {0, 125.0955, 150.2482, 182.8692, 228.4141, 500}; 
   
   TH1D *m3l_rebin5_total__2 = new TH1D("m3l_rebin5_total__2","dummy",5, xAxis8);
   m3l_rebin5_total__2->SetBinContent(1,217.7665);
   m3l_rebin5_total__2->SetBinContent(2,664.1596);
   m3l_rebin5_total__2->SetBinContent(3,758.7202);
   m3l_rebin5_total__2->SetBinContent(4,649.0859);
   m3l_rebin5_total__2->SetBinContent(5,849.7653);
   m3l_rebin5_total__2->SetBinError(1,11.83656);
   m3l_rebin5_total__2->SetBinError(2,20.98754);
   m3l_rebin5_total__2->SetBinError(3,18.15735);
   m3l_rebin5_total__2->SetBinError(4,17.10964);
   m3l_rebin5_total__2->SetBinError(5,16.02608);
   m3l_rebin5_total__2->SetMinimum(0);
   m3l_rebin5_total__2->SetMaximum(1699.531);
   m3l_rebin5_total__2->SetEntries(15153);
   m3l_rebin5_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin5_total__2->SetFillColor(ci);
   m3l_rebin5_total__2->SetMarkerStyle(20);
   m3l_rebin5_total__2->SetMarkerSize(1.1);
   m3l_rebin5_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin5_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin5_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin5_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin5_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin5_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin5_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin5_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin5_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin5_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin5_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin5_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin5_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin5_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin5_total_errors_fx3001[5] = {
   62.54773,
   137.6718,
   166.5587,
   205.6416,
   364.207};
   Double_t m3l_rebin5_total_errors_fy3001[5] = {
   217.7665,
   664.1596,
   758.7202,
   649.0859,
   849.7653};
   Double_t m3l_rebin5_total_errors_felx3001[5] = {
   62.54773,
   12.57635,
   16.31053,
   22.77243,
   135.793};
   Double_t m3l_rebin5_total_errors_fely3001[5] = {
   18.78261,
   61.75847,
   56.47073,
   46.5949,
   66.44757};
   Double_t m3l_rebin5_total_errors_fehx3001[5] = {
   62.54773,
   12.57635,
   16.31053,
   22.77243,
   135.793};
   Double_t m3l_rebin5_total_errors_fehy3001[5] = {
   20.15505,
   60.77485,
   59.819,
   51.4808,
   68.47957};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,m3l_rebin5_total_errors_fx3001,m3l_rebin5_total_errors_fy3001,m3l_rebin5_total_errors_felx3001,m3l_rebin5_total_errors_fehx3001,m3l_rebin5_total_errors_fely3001,m3l_rebin5_total_errors_fehy3001);
   grae->SetName("m3l_rebin5_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin5_total_errors3001 = new TH1F("Graph_m3l_rebin5_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin5_total_errors3001->SetMinimum(127.0577);
   Graph_m3l_rebin5_total_errors3001->SetMaximum(990.171);
   Graph_m3l_rebin5_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin5_total_errors3001->SetStats(0);
   Graph_m3l_rebin5_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin5_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin5_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin5_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin5_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin5_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin5_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin5_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin5_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin5_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin5_total_errors","Total unc.","F");
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
   m3l_rebin5_canvas->Modified();
   m3l_rebin5_canvas->cd();
   m3l_rebin5_canvas->SetSelected(m3l_rebin5_canvas);
}
