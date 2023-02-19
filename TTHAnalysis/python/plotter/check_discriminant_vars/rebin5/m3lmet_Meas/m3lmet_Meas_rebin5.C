void m3lmet_Meas_rebin5()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin5_canvas/m3lmet_Meas_rebin5
//=========  (Thu Dec 15 19:59:12 2022) by ROOT version 6.12/07
   TCanvas *m3lmet_Meas_rebin5_canvas = new TCanvas("m3lmet_Meas_rebin5_canvas", "m3lmet_Meas_rebin5",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin5_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin5_canvas->Range(0,0,1,1);
   m3lmet_Meas_rebin5_canvas->SetFillColor(0);
   m3lmet_Meas_rebin5_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin5_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin5_canvas->SetTickx(1);
   m3lmet_Meas_rebin5_canvas->SetTicky(1);
   m3lmet_Meas_rebin5_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin5_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin5_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin5_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin5_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-27.02598,525.641,1054.013);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.18);
   pad1->SetRightMargin(0.04);
   pad1->SetTopMargin(0.06);
   pad1->SetBottomMargin(0.025);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1D *m3lmet_Meas_rebin5_total__1 = new TH1D("m3lmet_Meas_rebin5_total__1","dummy",5, xAxis1);
   m3lmet_Meas_rebin5_total__1->SetBinContent(1,89.36046);
   m3lmet_Meas_rebin5_total__1->SetBinContent(2,249.5539);
   m3lmet_Meas_rebin5_total__1->SetBinContent(3,319.3628);
   m3lmet_Meas_rebin5_total__1->SetBinContent(4,343.0919);
   m3lmet_Meas_rebin5_total__1->SetBinContent(5,494.5754);
   m3lmet_Meas_rebin5_total__1->SetBinError(1,8.037174);
   m3lmet_Meas_rebin5_total__1->SetBinError(2,8.285405);
   m3lmet_Meas_rebin5_total__1->SetBinError(3,8.318475);
   m3lmet_Meas_rebin5_total__1->SetBinError(4,7.926961);
   m3lmet_Meas_rebin5_total__1->SetBinError(5,8.129475);
   m3lmet_Meas_rebin5_total__1->SetMinimum(0);
   m3lmet_Meas_rebin5_total__1->SetMaximum(989.1508);
   m3lmet_Meas_rebin5_total__1->SetEntries(15152);
   m3lmet_Meas_rebin5_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin5_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin5_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin5_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin5_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin5_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin5_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__1->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin5_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin5_total__1->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin5_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin5_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_total__1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin5_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin5_stack = new THStack();
   m3lmet_Meas_rebin5_stack->SetName("m3lmet_Meas_rebin5_stack");
   m3lmet_Meas_rebin5_stack->SetTitle("m3lmet_Meas_rebin5");
   Double_t xAxis2[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1F *m3lmet_Meas_rebin5_stack_stack_1 = new TH1F("m3lmet_Meas_rebin5_stack_stack_1","m3lmet_Meas_rebin5",5, xAxis2);
   m3lmet_Meas_rebin5_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin5_stack_stack_1->SetMaximum(519.3042);
   m3lmet_Meas_rebin5_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin5_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin5_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin5_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin5_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin5_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin5_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_stack->SetHistogram(m3lmet_Meas_rebin5_stack_stack_1);
   
   Double_t xAxis3[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1D *m3lmet_Meas_rebin5_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin5_fakes_VV_stack_1","dummy",5, xAxis3);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetBinContent(2,0.09719337);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetBinContent(3,0.1943867);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetBinContent(5,0.3887735);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetBinError(2,0.09719337);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetBinError(3,0.1374522);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetBinError(5,0.1943867);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_stack->Add(m3lmet_Meas_rebin5_fakes_VV_stack_1,"");
   Double_t xAxis4[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1D *m3lmet_Meas_rebin5_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin5_fakes_TT_stack_2","dummy",5, xAxis4);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinContent(1,3.241351);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinContent(2,8.357432);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinContent(3,10.70557);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinContent(4,13.92211);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinContent(5,18.81787);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinError(1,0.48581);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinError(2,0.7488932);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinError(3,0.8541338);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinError(4,0.9674605);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetBinError(5,1.130402);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_stack->Add(m3lmet_Meas_rebin5_fakes_TT_stack_2,"");
   Double_t xAxis5[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1D *m3lmet_Meas_rebin5_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin5_fakes_DY_stack_3","dummy",5, xAxis5);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinContent(1,34.39044);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinContent(2,27.51235);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinContent(3,24.07331);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinContent(4,18.91474);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinContent(5,12.03665);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinError(1,7.689937);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinError(2,6.878088);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinError(3,6.433863);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinError(4,5.70301);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetBinError(5,4.549428);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_stack->Add(m3lmet_Meas_rebin5_fakes_DY_stack_3,"");
   Double_t xAxis6[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1D *m3lmet_Meas_rebin5_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin5_prompt_ZZ_stack_4","dummy",5, xAxis6);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinContent(1,5.871533);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinContent(2,15.59626);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinContent(3,14.31186);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinContent(4,14.12838);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinContent(5,23.30265);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinError(1,1.03795);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinError(2,1.691652);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinError(3,1.620499);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinError(4,1.610078);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetBinError(5,2.067776);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_stack->Add(m3lmet_Meas_rebin5_prompt_ZZ_stack_4,"");
   Double_t xAxis7[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1D *m3lmet_Meas_rebin5_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin5_prompt_WZ_stack_5","dummy",5, xAxis7);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinContent(1,45.85713);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinContent(2,197.9907);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinContent(3,270.0777);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinContent(4,296.1267);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinContent(5,440.0295);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinError(1,2.036587);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinError(2,4.231768);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinError(3,4.942468);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinError(4,5.175333);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetBinError(5,6.308707);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_stack->Add(m3lmet_Meas_rebin5_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin5_stack->Draw("same hist");
   Double_t xAxis8[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1D *m3lmet_Meas_rebin5_total__2 = new TH1D("m3lmet_Meas_rebin5_total__2","dummy",5, xAxis8);
   m3lmet_Meas_rebin5_total__2->SetBinContent(1,89.36046);
   m3lmet_Meas_rebin5_total__2->SetBinContent(2,249.5539);
   m3lmet_Meas_rebin5_total__2->SetBinContent(3,319.3628);
   m3lmet_Meas_rebin5_total__2->SetBinContent(4,343.0919);
   m3lmet_Meas_rebin5_total__2->SetBinContent(5,494.5754);
   m3lmet_Meas_rebin5_total__2->SetBinError(1,8.037174);
   m3lmet_Meas_rebin5_total__2->SetBinError(2,8.285405);
   m3lmet_Meas_rebin5_total__2->SetBinError(3,8.318475);
   m3lmet_Meas_rebin5_total__2->SetBinError(4,7.926961);
   m3lmet_Meas_rebin5_total__2->SetBinError(5,8.129475);
   m3lmet_Meas_rebin5_total__2->SetMinimum(0);
   m3lmet_Meas_rebin5_total__2->SetMaximum(989.1508);
   m3lmet_Meas_rebin5_total__2->SetEntries(15152);
   m3lmet_Meas_rebin5_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin5_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin5_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin5_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin5_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin5_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin5_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__2->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin5_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin5_total__2->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin5_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin5_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_total__2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin5_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin5_total_errors_fx3001[5] = {
   90.76872,
   199.3659,
   234.5128,
   277.4236,
   401.5079};
   Double_t m3lmet_Meas_rebin5_total_errors_fy3001[5] = {
   89.36046,
   249.5539,
   319.3628,
   343.0919,
   494.5754};
   Double_t m3lmet_Meas_rebin5_total_errors_felx3001[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t m3lmet_Meas_rebin5_total_errors_fely3001[5] = {
   8.037174,
   8.285405,
   8.318475,
   7.926961,
   8.129475};
   Double_t m3lmet_Meas_rebin5_total_errors_fehx3001[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t m3lmet_Meas_rebin5_total_errors_fehy3001[5] = {
   8.037174,
   8.285405,
   8.318475,
   7.926961,
   8.129475};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,m3lmet_Meas_rebin5_total_errors_fx3001,m3lmet_Meas_rebin5_total_errors_fy3001,m3lmet_Meas_rebin5_total_errors_felx3001,m3lmet_Meas_rebin5_total_errors_fehx3001,m3lmet_Meas_rebin5_total_errors_fely3001,m3lmet_Meas_rebin5_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin5_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin5_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin5_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin5_total_errors3001->SetMinimum(39.18512);
   Graph_m3lmet_Meas_rebin5_total_errors3001->SetMaximum(544.843);
   Graph_m3lmet_Meas_rebin5_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin5_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin5_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin5_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin5_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin5_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_rebin5_data_graph_fx3002[5] = {
   90.76872,
   199.3659,
   234.5128,
   277.4236,
   401.5079};
   Double_t m3lmet_Meas_rebin5_data_graph_fy3002[5] = {
   89,
   276,
   296,
   349,
   503};
   Double_t m3lmet_Meas_rebin5_data_graph_felx3002[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t m3lmet_Meas_rebin5_data_graph_fely3002[5] = {
   9.416416,
   16.60353,
   17.1953,
   18.67299,
   22.42069};
   Double_t m3lmet_Meas_rebin5_data_graph_fehx3002[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t m3lmet_Meas_rebin5_data_graph_fehy3002[5] = {
   10.46956,
   17.6337,
   18.22443,
   19.69982,
   23.44304};
   grae = new TGraphAsymmErrors(5,m3lmet_Meas_rebin5_data_graph_fx3002,m3lmet_Meas_rebin5_data_graph_fy3002,m3lmet_Meas_rebin5_data_graph_felx3002,m3lmet_Meas_rebin5_data_graph_fehx3002,m3lmet_Meas_rebin5_data_graph_fely3002,m3lmet_Meas_rebin5_data_graph_fehy3002);
   grae->SetName("m3lmet_Meas_rebin5_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin5_data_graph3002 = new TH1F("Graph_m3lmet_Meas_rebin5_data_graph3002","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin5_data_graph3002->SetMinimum(34.89764);
   Graph_m3lmet_Meas_rebin5_data_graph3002->SetMaximum(571.129);
   Graph_m3lmet_Meas_rebin5_data_graph3002->SetDirectory(0);
   Graph_m3lmet_Meas_rebin5_data_graph3002->SetStats(0);
   Graph_m3lmet_Meas_rebin5_data_graph3002->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin5_data_graph3002->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin5_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin5_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin5_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin5_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin5_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin5_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin5_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin5_total_errors","Total unc.","F");
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
   TLatex *   tex = new TLatex(0.96,0.952,"13.09 fb^{-1} (13.6 TeV)");
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
   pad1->Modified();
   m3lmet_Meas_rebin5_canvas->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0,0,1,1);
   pad2->SetFillColor(0);
   pad2->SetFillStyle(4000);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.18);
   pad2->SetRightMargin(0.04);
   pad2->SetTopMargin(0.06);
   pad2->SetBottomMargin(0.3);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   Double_t xAxis9[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1D *m3lmet_Meas_rebin5_total__3 = new TH1D("m3lmet_Meas_rebin5_total__3","dummy",5, xAxis9);
   m3lmet_Meas_rebin5_total__3->SetBinContent(1,1);
   m3lmet_Meas_rebin5_total__3->SetBinContent(2,1);
   m3lmet_Meas_rebin5_total__3->SetBinContent(3,1);
   m3lmet_Meas_rebin5_total__3->SetBinContent(4,1);
   m3lmet_Meas_rebin5_total__3->SetBinContent(5,1);
   m3lmet_Meas_rebin5_total__3->SetMinimum(0.5);
   m3lmet_Meas_rebin5_total__3->SetMaximum(2);
   m3lmet_Meas_rebin5_total__3->SetEntries(15157);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin5_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin5_total__3->SetMarkerColor(ci);
   m3lmet_Meas_rebin5_total__3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin5_total__3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin5_total__3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin5_total__3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin5_total__3->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin5_total__3->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin5_total__3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin5_total__3->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin5_total__3->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin5_total__3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin5_total__3->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin5_total__3->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin5_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin5_total__3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_total__3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_total__3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_total__3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__3->Draw("AXIS");
   
   Double_t m3lmet_Meas_rebin5_total_errors_fx3003[5] = {
   90.76872,
   199.3659,
   234.5128,
   277.4236,
   401.5079};
   Double_t m3lmet_Meas_rebin5_total_errors_fy3003[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin5_total_errors_felx3003[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t m3lmet_Meas_rebin5_total_errors_fely3003[5] = {
   0.08994105,
   0.03320086,
   0.0260471,
   0.02310448,
   0.01643728};
   Double_t m3lmet_Meas_rebin5_total_errors_fehx3003[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t m3lmet_Meas_rebin5_total_errors_fehy3003[5] = {
   0.08994105,
   0.03320086,
   0.0260471,
   0.02310448,
   0.01643728};
   grae = new TGraphAsymmErrors(5,m3lmet_Meas_rebin5_total_errors_fx3003,m3lmet_Meas_rebin5_total_errors_fy3003,m3lmet_Meas_rebin5_total_errors_felx3003,m3lmet_Meas_rebin5_total_errors_fehx3003,m3lmet_Meas_rebin5_total_errors_fely3003,m3lmet_Meas_rebin5_total_errors_fehy3003);
   grae->SetName("m3lmet_Meas_rebin5_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_rebin5_total_errors_fx3004[5] = {
   90.76872,
   199.3659,
   234.5128,
   277.4236,
   401.5079};
   Double_t m3lmet_Meas_rebin5_total_errors_fy3004[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin5_total_errors_felx3004[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t m3lmet_Meas_rebin5_total_errors_fely3004[5] = {
   0.08994105,
   0.03320086,
   0.0260471,
   0.02310448,
   0.01643728};
   Double_t m3lmet_Meas_rebin5_total_errors_fehx3004[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t m3lmet_Meas_rebin5_total_errors_fehy3004[5] = {
   0.08994105,
   0.03320086,
   0.0260471,
   0.02310448,
   0.01643728};
   grae = new TGraphAsymmErrors(5,m3lmet_Meas_rebin5_total_errors_fx3004,m3lmet_Meas_rebin5_total_errors_fy3004,m3lmet_Meas_rebin5_total_errors_felx3004,m3lmet_Meas_rebin5_total_errors_fehx3004,m3lmet_Meas_rebin5_total_errors_fely3004,m3lmet_Meas_rebin5_total_errors_fehy3004);
   grae->SetName("m3lmet_Meas_rebin5_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[6] = {0, 181.5374, 217.1944, 251.8312, 303.0159, 500}; 
   
   TH1D *m3lmet_Meas_rebin5_total__4 = new TH1D("m3lmet_Meas_rebin5_total__4","dummy",5, xAxis10);
   m3lmet_Meas_rebin5_total__4->SetBinContent(1,1);
   m3lmet_Meas_rebin5_total__4->SetBinContent(2,1);
   m3lmet_Meas_rebin5_total__4->SetBinContent(3,1);
   m3lmet_Meas_rebin5_total__4->SetBinContent(4,1);
   m3lmet_Meas_rebin5_total__4->SetBinContent(5,1);
   m3lmet_Meas_rebin5_total__4->SetMinimum(0.5);
   m3lmet_Meas_rebin5_total__4->SetMaximum(2);
   m3lmet_Meas_rebin5_total__4->SetEntries(15157);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin5_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin5_total__4->SetMarkerColor(ci);
   m3lmet_Meas_rebin5_total__4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin5_total__4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin5_total__4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin5_total__4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin5_total__4->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin5_total__4->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin5_total__4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin5_total__4->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin5_total__4->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin5_total__4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin5_total__4->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin5_total__4->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin5_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin5_total__4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin5_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin5_total__4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin5_total__4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin5_total__4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin5_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[5] = {
   90.76872,
   199.3659,
   234.5128,
   277.4236,
   401.5079};
   Double_t data_div_fy3005[5] = {
   0.9959663,
   1.105974,
   0.9268455,
   1.01722,
   1.017034};
   Double_t data_div_felx3005[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t data_div_fely3005[5] = {
   0.1053756,
   0.06653286,
   0.05384251,
   0.05442561,
   0.0453332};
   Double_t data_div_fehx3005[5] = {
   90.76872,
   17.8285,
   17.31838,
   25.59235,
   98.49205};
   Double_t data_div_fehy3005[5] = {
   0.117161,
   0.07066091,
   0.05706497,
   0.05741848,
   0.04740033};
   grae = new TGraphAsymmErrors(5,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin5_data_graph3005 = new TH1F("Graph_m3lmet_Meas_rebin5_data_graph3005","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin5_data_graph3005->SetMinimum(34.89764);
   Graph_m3lmet_Meas_rebin5_data_graph3005->SetMaximum(571.129);
   Graph_m3lmet_Meas_rebin5_data_graph3005->SetDirectory(0);
   Graph_m3lmet_Meas_rebin5_data_graph3005->SetStats(0);
   Graph_m3lmet_Meas_rebin5_data_graph3005->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin5_data_graph3005->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin5_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin5_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin5_total_errors","stat. unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin5_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3lmet_Meas_rebin5_canvas->cd();
   m3lmet_Meas_rebin5_canvas->Modified();
   m3lmet_Meas_rebin5_canvas->cd();
   m3lmet_Meas_rebin5_canvas->SetSelected(m3lmet_Meas_rebin5_canvas);
}
