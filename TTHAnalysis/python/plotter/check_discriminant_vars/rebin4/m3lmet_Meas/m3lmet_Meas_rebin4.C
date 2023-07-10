void m3lmet_Meas_rebin4()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin4_canvas/m3lmet_Meas_rebin4
//=========  (Mon Jul 10 19:17:46 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin4_canvas = new TCanvas("m3lmet_Meas_rebin4_canvas", "m3lmet_Meas_rebin4",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin4_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin4_canvas->Range(-115.3846,-384.8493,525.641,2575.53);
   m3lmet_Meas_rebin4_canvas->SetFillColor(0);
   m3lmet_Meas_rebin4_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin4_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin4_canvas->SetTickx(1);
   m3lmet_Meas_rebin4_canvas->SetTicky(1);
   m3lmet_Meas_rebin4_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin4_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin4_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin4_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin4_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin4_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin4_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin4_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[5] = {0, 191.2321, 234.7342, 289.9529, 500}; 
   
   TH1D *m3lmet_Meas_rebin4_total__1 = new TH1D("m3lmet_Meas_rebin4_total__1","dummy",4, xAxis1);
   m3lmet_Meas_rebin4_total__1->SetBinContent(1,289.2047);
   m3lmet_Meas_rebin4_total__1->SetBinContent(2,757.8054);
   m3lmet_Meas_rebin4_total__1->SetBinContent(3,893.5338);
   m3lmet_Meas_rebin4_total__1->SetBinContent(4,1198.954);
   m3lmet_Meas_rebin4_total__1->SetBinError(1,18.51756);
   m3lmet_Meas_rebin4_total__1->SetBinError(2,20.04959);
   m3lmet_Meas_rebin4_total__1->SetBinError(3,19.03342);
   m3lmet_Meas_rebin4_total__1->SetBinError(4,18.77999);
   m3lmet_Meas_rebin4_total__1->SetMinimum(0);
   m3lmet_Meas_rebin4_total__1->SetMaximum(2397.907);
   m3lmet_Meas_rebin4_total__1->SetEntries(15153);
   m3lmet_Meas_rebin4_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin4_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin4_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin4_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin4_total__1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin4_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin4_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_total__1->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin4_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin4_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin4_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin4_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_total__1->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin4_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin4_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin4_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin4_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin4_stack = new THStack();
   m3lmet_Meas_rebin4_stack->SetName("m3lmet_Meas_rebin4_stack");
   m3lmet_Meas_rebin4_stack->SetTitle("m3lmet_Meas_rebin4");
   Double_t xAxis2[5] = {0, 191.2321, 234.7342, 289.9529, 500}; 
   
   TH1F *m3lmet_Meas_rebin4_stack_stack_1 = new TH1F("m3lmet_Meas_rebin4_stack_stack_1","m3lmet_Meas_rebin4",4, xAxis2);
   m3lmet_Meas_rebin4_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin4_stack_stack_1->SetMaximum(1258.901);
   m3lmet_Meas_rebin4_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin4_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin4_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin4_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin4_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin4_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin4_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin4_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_stack->SetHistogram(m3lmet_Meas_rebin4_stack_stack_1);
   
   Double_t xAxis3[5] = {0, 191.2321, 234.7342, 289.9529, 500}; 
   
   TH1D *m3lmet_Meas_rebin4_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin4_fakes_VV_stack_1","dummy",4, xAxis3);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->SetBinContent(2,0.6057352);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->SetBinContent(4,0.8047257);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->SetBinError(2,0.3497376);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->SetBinError(4,0.4024895);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin4_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin4_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_stack->Add(m3lmet_Meas_rebin4_fakes_VV_stack_1,"");
   Double_t xAxis4[5] = {0, 191.2321, 234.7342, 289.9529, 500}; 
   
   TH1D *m3lmet_Meas_rebin4_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin4_fakes_TT_stack_2","dummy",4, xAxis4);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetBinContent(1,10.28967);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetBinContent(2,25.05928);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetBinContent(3,33.56711);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetBinContent(4,47.59255);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetBinError(1,1.249056);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetBinError(2,1.874104);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetBinError(3,2.190601);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetBinError(4,2.631257);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin4_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_stack->Add(m3lmet_Meas_rebin4_fakes_TT_stack_2,"");
   Double_t xAxis5[5] = {0, 191.2321, 234.7342, 289.9529, 500}; 
   
   TH1D *m3lmet_Meas_rebin4_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin4_fakes_DY_stack_3","dummy",4, xAxis5);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetBinContent(1,83.08982);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetBinContent(2,74.75859);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetBinContent(3,54.37756);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetBinContent(4,32.94664);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetBinError(1,17.33483);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetBinError(2,16.32337);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetBinError(3,14.04671);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetBinError(4,10.98472);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin4_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_stack->Add(m3lmet_Meas_rebin4_fakes_DY_stack_3,"");
   Double_t xAxis6[5] = {0, 191.2321, 234.7342, 289.9529, 500}; 
   
   TH1D *m3lmet_Meas_rebin4_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin4_prompt_ZZ_stack_4","dummy",4, xAxis6);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetBinContent(1,20.60675);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetBinContent(2,39.79535);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetBinContent(3,38.60556);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetBinContent(4,54.60089);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetBinError(1,2.806839);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetBinError(2,3.905011);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetBinError(3,3.862861);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetBinError(4,4.616718);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin4_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_stack->Add(m3lmet_Meas_rebin4_prompt_ZZ_stack_4,"");
   Double_t xAxis7[5] = {0, 191.2321, 234.7342, 289.9529, 500}; 
   
   TH1D *m3lmet_Meas_rebin4_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin4_prompt_WZ_stack_5","dummy",4, xAxis7);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetBinContent(1,175.2184);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetBinContent(2,617.5865);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetBinContent(3,766.9835);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetBinContent(4,1063.009);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetBinError(1,5.741511);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetBinError(2,10.80046);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetBinError(3,12.05158);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetBinError(4,14.26969);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin4_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_stack->Add(m3lmet_Meas_rebin4_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin4_stack->Draw("same hist");
   Double_t xAxis8[5] = {0, 191.2321, 234.7342, 289.9529, 500}; 
   
   TH1D *m3lmet_Meas_rebin4_total__2 = new TH1D("m3lmet_Meas_rebin4_total__2","dummy",4, xAxis8);
   m3lmet_Meas_rebin4_total__2->SetBinContent(1,289.2047);
   m3lmet_Meas_rebin4_total__2->SetBinContent(2,757.8054);
   m3lmet_Meas_rebin4_total__2->SetBinContent(3,893.5338);
   m3lmet_Meas_rebin4_total__2->SetBinContent(4,1198.954);
   m3lmet_Meas_rebin4_total__2->SetBinError(1,18.51756);
   m3lmet_Meas_rebin4_total__2->SetBinError(2,20.04959);
   m3lmet_Meas_rebin4_total__2->SetBinError(3,19.03342);
   m3lmet_Meas_rebin4_total__2->SetBinError(4,18.77999);
   m3lmet_Meas_rebin4_total__2->SetMinimum(0);
   m3lmet_Meas_rebin4_total__2->SetMaximum(2397.907);
   m3lmet_Meas_rebin4_total__2->SetEntries(15153);
   m3lmet_Meas_rebin4_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin4_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin4_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin4_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin4_total__2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin4_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin4_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_total__2->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin4_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin4_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin4_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin4_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_total__2->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin4_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin4_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin4_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin4_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin4_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin4_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin4_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin4_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin4_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin4_total_errors_fx3001[4] = {
   95.61607,
   212.9832,
   262.3436,
   394.9765};
   Double_t m3lmet_Meas_rebin4_total_errors_fy3001[4] = {
   289.2047,
   757.8054,
   893.5338,
   1198.954};
   Double_t m3lmet_Meas_rebin4_total_errors_felx3001[4] = {
   95.61607,
   21.75103,
   27.60938,
   105.0235};
   Double_t m3lmet_Meas_rebin4_total_errors_fely3001[4] = {
   36.45986,
   56.08724,
   70.53627,
   92.00291};
   Double_t m3lmet_Meas_rebin4_total_errors_fehx3001[4] = {
   95.61607,
   21.75103,
   27.60938,
   105.0235};
   Double_t m3lmet_Meas_rebin4_total_errors_fehy3001[4] = {
   35.17771,
   61.24875,
   73.77359,
   96.68919};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,m3lmet_Meas_rebin4_total_errors_fx3001,m3lmet_Meas_rebin4_total_errors_fy3001,m3lmet_Meas_rebin4_total_errors_felx3001,m3lmet_Meas_rebin4_total_errors_fehx3001,m3lmet_Meas_rebin4_total_errors_fely3001,m3lmet_Meas_rebin4_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin4_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin4_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin4_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin4_total_errors3001->SetMinimum(148.455);
   Graph_m3lmet_Meas_rebin4_total_errors3001->SetMaximum(1399.933);
   Graph_m3lmet_Meas_rebin4_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin4_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin4_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin4_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin4_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin4_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin4_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin4_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin4_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin4_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin4_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin4_canvas->Modified();
   m3lmet_Meas_rebin4_canvas->cd();
   m3lmet_Meas_rebin4_canvas->SetSelected(m3lmet_Meas_rebin4_canvas);
}
