void m3lmet_Meas_rebin3()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin3_canvas/m3lmet_Meas_rebin3
//=========  (Thu Dec 15 19:56:43 2022) by ROOT version 6.12/07
   TCanvas *m3lmet_Meas_rebin3_canvas = new TCanvas("m3lmet_Meas_rebin3_canvas", "m3lmet_Meas_rebin3",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin3_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin3_canvas->Range(0,0,1,1);
   m3lmet_Meas_rebin3_canvas->SetFillColor(0);
   m3lmet_Meas_rebin3_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin3_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin3_canvas->SetTickx(1);
   m3lmet_Meas_rebin3_canvas->SetTicky(1);
   m3lmet_Meas_rebin3_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin3_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin3_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin3_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin3_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-38.69986,525.641,1509.295);
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
   Double_t xAxis1[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_total__1 = new TH1D("m3lmet_Meas_rebin3_total__1","dummy",3, xAxis1);
   m3lmet_Meas_rebin3_total__1->SetBinContent(1,244.1125);
   m3lmet_Meas_rebin3_total__1->SetBinContent(2,543.6245);
   m3lmet_Meas_rebin3_total__1->SetBinContent(3,708.2075);
   m3lmet_Meas_rebin3_total__1->SetBinError(1,10.63441);
   m3lmet_Meas_rebin3_total__1->SetBinError(2,10.74714);
   m3lmet_Meas_rebin3_total__1->SetBinError(3,10.13777);
   m3lmet_Meas_rebin3_total__1->SetMinimum(0);
   m3lmet_Meas_rebin3_total__1->SetMaximum(1416.415);
   m3lmet_Meas_rebin3_total__1->SetEntries(15152);
   m3lmet_Meas_rebin3_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin3_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin3_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin3_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin3_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin3_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin3_stack = new THStack();
   m3lmet_Meas_rebin3_stack->SetName("m3lmet_Meas_rebin3_stack");
   m3lmet_Meas_rebin3_stack->SetTitle("m3lmet_Meas_rebin3");
   Double_t xAxis2[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1F *m3lmet_Meas_rebin3_stack_stack_1 = new TH1F("m3lmet_Meas_rebin3_stack_stack_1","m3lmet_Meas_rebin3",3, xAxis2);
   m3lmet_Meas_rebin3_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin3_stack_stack_1->SetMaximum(743.6179);
   m3lmet_Meas_rebin3_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin3_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin3_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin3_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->SetHistogram(m3lmet_Meas_rebin3_stack_stack_1);
   
   Double_t xAxis3[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin3_fakes_VV_stack_1","dummy",3, xAxis3);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinContent(1,0.09719337);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinContent(2,0.1943867);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinContent(3,0.3887735);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinError(1,0.09719337);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinError(2,0.1374522);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetBinError(3,0.1943867);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_fakes_VV_stack_1,"");
   Double_t xAxis4[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin3_fakes_TT_stack_2","dummy",3, xAxis4);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinContent(1,8.673038);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinContent(2,17.55448);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinContent(3,28.81681);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinError(1,0.7760845);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinError(2,1.088557);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetBinError(3,1.397469);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_fakes_TT_stack_2,"");
   Double_t xAxis5[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin3_fakes_DY_stack_3","dummy",3, xAxis5);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinContent(1,55.02471);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinContent(2,39.54901);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinContent(3,22.35379);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinError(1,9.727086);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinError(2,8.246538);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetBinError(3,6.199825);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_fakes_DY_stack_3,"");
   Double_t xAxis6[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin3_prompt_ZZ_stack_4","dummy",3, xAxis6);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinContent(1,16.69717);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinContent(2,24.77053);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinContent(3,31.74298);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinError(1,1.750339);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinError(2,2.131908);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetBinError(3,2.413374);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_prompt_ZZ_stack_4,"");
   Double_t xAxis7[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin3_prompt_WZ_stack_5","dummy",3, xAxis7);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinContent(1,163.6204);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinContent(2,461.5561);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinContent(3,624.9052);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinError(1,3.846965);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinError(2,6.461178);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetBinError(3,7.518073);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_stack->Add(m3lmet_Meas_rebin3_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin3_stack->Draw("same hist");
   Double_t xAxis8[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_total__2 = new TH1D("m3lmet_Meas_rebin3_total__2","dummy",3, xAxis8);
   m3lmet_Meas_rebin3_total__2->SetBinContent(1,244.1125);
   m3lmet_Meas_rebin3_total__2->SetBinContent(2,543.6245);
   m3lmet_Meas_rebin3_total__2->SetBinContent(3,708.2075);
   m3lmet_Meas_rebin3_total__2->SetBinError(1,10.63441);
   m3lmet_Meas_rebin3_total__2->SetBinError(2,10.74714);
   m3lmet_Meas_rebin3_total__2->SetBinError(3,10.13777);
   m3lmet_Meas_rebin3_total__2->SetMinimum(0);
   m3lmet_Meas_rebin3_total__2->SetMaximum(1416.415);
   m3lmet_Meas_rebin3_total__2->SetEntries(15152);
   m3lmet_Meas_rebin3_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin3_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin3_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin3_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_rebin3_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_rebin3_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin3_total_errors_fx3001[3] = {
   102.9218,
   237.1701,
   384.2484};
   Double_t m3lmet_Meas_rebin3_total_errors_fy3001[3] = {
   244.1125,
   543.6245,
   708.2075};
   Double_t m3lmet_Meas_rebin3_total_errors_felx3001[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_total_errors_fely3001[3] = {
   10.63441,
   10.74714,
   10.13777};
   Double_t m3lmet_Meas_rebin3_total_errors_fehx3001[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_total_errors_fehy3001[3] = {
   10.63441,
   10.74714,
   10.13777};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,m3lmet_Meas_rebin3_total_errors_fx3001,m3lmet_Meas_rebin3_total_errors_fy3001,m3lmet_Meas_rebin3_total_errors_felx3001,m3lmet_Meas_rebin3_total_errors_fehx3001,m3lmet_Meas_rebin3_total_errors_fely3001,m3lmet_Meas_rebin3_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin3_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin3_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin3_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetMinimum(184.9914);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetMaximum(766.832);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin3_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin3_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_rebin3_data_graph_fx3002[3] = {
   102.9218,
   237.1701,
   384.2484};
   Double_t m3lmet_Meas_rebin3_data_graph_fy3002[3] = {
   270,
   532,
   711};
   Double_t m3lmet_Meas_rebin3_data_graph_felx3002[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_data_graph_fely3002[3] = {
   16.42185,
   23.05837,
   26.65889};
   Double_t m3lmet_Meas_rebin3_data_graph_fehx3002[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_data_graph_fehy3002[3] = {
   17.45235,
   24.0801,
   27.67769};
   grae = new TGraphAsymmErrors(3,m3lmet_Meas_rebin3_data_graph_fx3002,m3lmet_Meas_rebin3_data_graph_fy3002,m3lmet_Meas_rebin3_data_graph_felx3002,m3lmet_Meas_rebin3_data_graph_fehx3002,m3lmet_Meas_rebin3_data_graph_fely3002,m3lmet_Meas_rebin3_data_graph_fehy3002);
   grae->SetName("m3lmet_Meas_rebin3_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin3_data_graph3002 = new TH1F("Graph_m3lmet_Meas_rebin3_data_graph3002","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin3_data_graph3002->SetMinimum(205.0682);
   Graph_m3lmet_Meas_rebin3_data_graph3002->SetMaximum(787.1876);
   Graph_m3lmet_Meas_rebin3_data_graph3002->SetDirectory(0);
   Graph_m3lmet_Meas_rebin3_data_graph3002->SetStats(0);
   Graph_m3lmet_Meas_rebin3_data_graph3002->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin3_data_graph3002->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin3_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin3_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_rebin3_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin3_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin3_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin3_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin3_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin3_canvas->cd();
  
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
   Double_t xAxis9[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_total__3 = new TH1D("m3lmet_Meas_rebin3_total__3","dummy",3, xAxis9);
   m3lmet_Meas_rebin3_total__3->SetBinContent(1,1);
   m3lmet_Meas_rebin3_total__3->SetBinContent(2,1);
   m3lmet_Meas_rebin3_total__3->SetBinContent(3,1);
   m3lmet_Meas_rebin3_total__3->SetMinimum(0.5);
   m3lmet_Meas_rebin3_total__3->SetMaximum(2);
   m3lmet_Meas_rebin3_total__3->SetEntries(15155);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin3_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin3_total__3->SetMarkerColor(ci);
   m3lmet_Meas_rebin3_total__3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_total__3->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin3_total__3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_total__3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin3_total__3->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin3_total__3->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin3_total__3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin3_total__3->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin3_total__3->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin3_total__3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin3_total__3->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin3_total__3->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin3_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin3_total__3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_total__3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__3->Draw("AXIS");
   
   Double_t m3lmet_Meas_rebin3_total_errors_fx3003[3] = {
   102.9218,
   237.1701,
   384.2484};
   Double_t m3lmet_Meas_rebin3_total_errors_fy3003[3] = {
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin3_total_errors_felx3003[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_total_errors_fely3003[3] = {
   0.04356358,
   0.01976942,
   0.01431468};
   Double_t m3lmet_Meas_rebin3_total_errors_fehx3003[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_total_errors_fehy3003[3] = {
   0.04356358,
   0.01976942,
   0.01431468};
   grae = new TGraphAsymmErrors(3,m3lmet_Meas_rebin3_total_errors_fx3003,m3lmet_Meas_rebin3_total_errors_fy3003,m3lmet_Meas_rebin3_total_errors_felx3003,m3lmet_Meas_rebin3_total_errors_fehx3003,m3lmet_Meas_rebin3_total_errors_fely3003,m3lmet_Meas_rebin3_total_errors_fehy3003);
   grae->SetName("m3lmet_Meas_rebin3_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_rebin3_total_errors_fx3004[3] = {
   102.9218,
   237.1701,
   384.2484};
   Double_t m3lmet_Meas_rebin3_total_errors_fy3004[3] = {
   1,
   1,
   1};
   Double_t m3lmet_Meas_rebin3_total_errors_felx3004[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_total_errors_fely3004[3] = {
   0.04356358,
   0.01976942,
   0.01431468};
   Double_t m3lmet_Meas_rebin3_total_errors_fehx3004[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t m3lmet_Meas_rebin3_total_errors_fehy3004[3] = {
   0.04356358,
   0.01976942,
   0.01431468};
   grae = new TGraphAsymmErrors(3,m3lmet_Meas_rebin3_total_errors_fx3004,m3lmet_Meas_rebin3_total_errors_fy3004,m3lmet_Meas_rebin3_total_errors_felx3004,m3lmet_Meas_rebin3_total_errors_fehx3004,m3lmet_Meas_rebin3_total_errors_fely3004,m3lmet_Meas_rebin3_total_errors_fehy3004);
   grae->SetName("m3lmet_Meas_rebin3_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[4] = {0, 205.8435, 268.4968, 500}; 
   
   TH1D *m3lmet_Meas_rebin3_total__4 = new TH1D("m3lmet_Meas_rebin3_total__4","dummy",3, xAxis10);
   m3lmet_Meas_rebin3_total__4->SetBinContent(1,1);
   m3lmet_Meas_rebin3_total__4->SetBinContent(2,1);
   m3lmet_Meas_rebin3_total__4->SetBinContent(3,1);
   m3lmet_Meas_rebin3_total__4->SetMinimum(0.5);
   m3lmet_Meas_rebin3_total__4->SetMaximum(2);
   m3lmet_Meas_rebin3_total__4->SetEntries(15155);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin3_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_rebin3_total__4->SetMarkerColor(ci);
   m3lmet_Meas_rebin3_total__4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin3_total__4->GetXaxis()->SetTitle("m3lmet_Meas");
   m3lmet_Meas_rebin3_total__4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin3_total__4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_rebin3_total__4->GetXaxis()->SetLabelSize(0.1);
   m3lmet_Meas_rebin3_total__4->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin3_total__4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_rebin3_total__4->GetYaxis()->SetDecimals();
   m3lmet_Meas_rebin3_total__4->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_rebin3_total__4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_rebin3_total__4->GetYaxis()->SetLabelSize(0.11);
   m3lmet_Meas_rebin3_total__4->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_rebin3_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_rebin3_total__4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin3_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin3_total__4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin3_total__4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin3_total__4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin3_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[3] = {
   102.9218,
   237.1701,
   384.2484};
   Double_t data_div_fy3005[3] = {
   1.106047,
   0.9786167,
   1.003943};
   Double_t data_div_felx3005[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t data_div_fely3005[3] = {
   0.06727163,
   0.04241599,
   0.03764276};
   Double_t data_div_fehx3005[3] = {
   102.9218,
   31.32662,
   115.7516};
   Double_t data_div_fehy3005[3] = {
   0.07149306,
   0.04429547,
   0.03908132};
   grae = new TGraphAsymmErrors(3,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_rebin3_data_graph3005 = new TH1F("Graph_m3lmet_Meas_rebin3_data_graph3005","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin3_data_graph3005->SetMinimum(205.0682);
   Graph_m3lmet_Meas_rebin3_data_graph3005->SetMaximum(787.1876);
   Graph_m3lmet_Meas_rebin3_data_graph3005->SetDirectory(0);
   Graph_m3lmet_Meas_rebin3_data_graph3005->SetStats(0);
   Graph_m3lmet_Meas_rebin3_data_graph3005->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin3_data_graph3005->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin3_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin3_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_rebin3_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3lmet_Meas_rebin3_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3lmet_Meas_rebin3_canvas->cd();
   m3lmet_Meas_rebin3_canvas->Modified();
   m3lmet_Meas_rebin3_canvas->cd();
   m3lmet_Meas_rebin3_canvas->SetSelected(m3lmet_Meas_rebin3_canvas);
}
