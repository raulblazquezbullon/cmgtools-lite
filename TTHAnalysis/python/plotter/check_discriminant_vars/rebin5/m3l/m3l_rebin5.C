void m3l_rebin5()
{
//=========Macro generated from canvas: m3l_rebin5_canvas/m3l_rebin5
//=========  (Sun Feb 19 14:28:54 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin5_canvas = new TCanvas("m3l_rebin5_canvas", "m3l_rebin5",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin5_canvas->SetHighLightColor(2);
   m3l_rebin5_canvas->Range(-115.3846,-768.7902,525.641,5144.981);
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
   Double_t xAxis1[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_total__1 = new TH1D("m3l_rebin5_total__1","dummy",5, xAxis1);
   m3l_rebin5_total__1->SetBinContent(1,3.890928);
   m3l_rebin5_total__1->SetBinContent(2,15.54418);
   m3l_rebin5_total__1->SetBinContent(3,191.4191);
   m3l_rebin5_total__1->SetBinContent(4,778.3154);
   m3l_rebin5_total__1->SetBinContent(5,2395.077);
   m3l_rebin5_total__1->SetBinError(1,3.890928);
   m3l_rebin5_total__1->SetBinError(2,6.795733);
   m3l_rebin5_total__1->SetBinError(3,16.47263);
   m3l_rebin5_total__1->SetBinError(4,21.97016);
   m3l_rebin5_total__1->SetBinError(5,29.68304);
   m3l_rebin5_total__1->SetMinimum(0);
   m3l_rebin5_total__1->SetMaximum(4790.155);
   m3l_rebin5_total__1->SetEntries(15153);
   m3l_rebin5_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin5_total__1->SetFillColor(ci);
   m3l_rebin5_total__1->SetMarkerStyle(20);
   m3l_rebin5_total__1->SetMarkerSize(1.1);
   m3l_rebin5_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin5_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin5_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin5_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__1->GetYaxis()->SetLabelSize(0.05);
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
   Double_t xAxis2[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1F *m3l_rebin5_stack_stack_1 = new TH1F("m3l_rebin5_stack_stack_1","m3l_rebin5",5, xAxis2);
   m3l_rebin5_stack_stack_1->SetMinimum(0);
   m3l_rebin5_stack_stack_1->SetMaximum(2514.831);
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
   
   Double_t xAxis3[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_fakes_VV_stack_1 = new TH1D("m3l_rebin5_fakes_VV_stack_1","dummy",5, xAxis3);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(5,1.319573);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(4,0.2199288);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(5,0.5387133);
   m3l_rebin5_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin5_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin5_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin5_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis4[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_fakes_TT_stack_2 = new TH1D("m3l_rebin5_fakes_TT_stack_2","dummy",5, xAxis4);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(2,1.006083);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(3,6.779822);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(4,25.08014);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(5,91.53757);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(2,0.4214191);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(3,1.048217);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(4,1.949319);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(5,3.748577);
   m3l_rebin5_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin5_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin5_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin5_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis5[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_fakes_DY_stack_3 = new TH1D("m3l_rebin5_fakes_DY_stack_3","dummy",5, xAxis5);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(1,3.890928);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(2,11.67278);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(3,62.25484);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(4,85.60041);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(5,101.1641);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(1,3.890928);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(2,6.739285);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(3,15.56371);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(4,18.25007);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(5,19.83992);
   m3l_rebin5_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin5_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin5_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin5_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis6[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_prompt_ZZ_stack_4 = new TH1D("m3l_rebin5_prompt_ZZ_stack_4","dummy",5, xAxis6);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(3,14.11646);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(4,43.59496);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(5,107.5342);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(3,2.420953);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(4,4.254432);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(5,6.681852);
   m3l_rebin5_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin5_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin5_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin5_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis7[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_prompt_WZ_stack_5 = new TH1D("m3l_rebin5_prompt_WZ_stack_5","dummy",5, xAxis7);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(2,2.865315);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(3,108.268);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(4,623.82);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(5,2093.522);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(2,0.7657876);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(3,4.707303);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(4,11.29931);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(5,20.69955);
   m3l_rebin5_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin5_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin5_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin5_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis8[6] = {0, 125.0027, 150.0071, 182.5286, 227.8729, 500}; 
   
   TH1D *m3l_rebin5_total__2 = new TH1D("m3l_rebin5_total__2","dummy",5, xAxis8);
   m3l_rebin5_total__2->SetBinContent(1,3.890928);
   m3l_rebin5_total__2->SetBinContent(2,15.54418);
   m3l_rebin5_total__2->SetBinContent(3,191.4191);
   m3l_rebin5_total__2->SetBinContent(4,778.3154);
   m3l_rebin5_total__2->SetBinContent(5,2395.077);
   m3l_rebin5_total__2->SetBinError(1,3.890928);
   m3l_rebin5_total__2->SetBinError(2,6.795733);
   m3l_rebin5_total__2->SetBinError(3,16.47263);
   m3l_rebin5_total__2->SetBinError(4,21.97016);
   m3l_rebin5_total__2->SetBinError(5,29.68304);
   m3l_rebin5_total__2->SetMinimum(0);
   m3l_rebin5_total__2->SetMaximum(4790.155);
   m3l_rebin5_total__2->SetEntries(15153);
   m3l_rebin5_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin5_total__2->SetFillColor(ci);
   m3l_rebin5_total__2->SetMarkerStyle(20);
   m3l_rebin5_total__2->SetMarkerSize(1.1);
   m3l_rebin5_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin5_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin5_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin5_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin5_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin5_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin5_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin5_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin5_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin5_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin5_total__2->GetYaxis()->SetLabelSize(0.05);
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
   62.50137,
   137.5049,
   166.2679,
   205.2007,
   363.9365};
   Double_t m3l_rebin5_total_errors_fy3001[5] = {
   3.890928,
   15.54418,
   191.4191,
   778.3154,
   2395.077};
   Double_t m3l_rebin5_total_errors_felx3001[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fely3001[5] = {
   6.743312,
   5.699614,
   22.91703,
   55.48802,
   176.0476};
   Double_t m3l_rebin5_total_errors_fehx3001[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fehy3001[5] = {
   3.898669,
   17.89966,
   12.91284,
   54.77352,
   182.2711};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,m3l_rebin5_total_errors_fx3001,m3l_rebin5_total_errors_fy3001,m3l_rebin5_total_errors_felx3001,m3l_rebin5_total_errors_fehx3001,m3l_rebin5_total_errors_fely3001,m3l_rebin5_total_errors_fehy3001);
   grae->SetName("m3l_rebin5_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin5_total_errors3001 = new TH1F("Graph_m3l_rebin5_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin5_total_errors3001->SetMinimum(-260.8725);
   Graph_m3l_rebin5_total_errors3001->SetMaximum(2835.369);
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
   m3l_rebin5_canvas->Modified();
   m3l_rebin5_canvas->cd();
   m3l_rebin5_canvas->SetSelected(m3l_rebin5_canvas);
}
