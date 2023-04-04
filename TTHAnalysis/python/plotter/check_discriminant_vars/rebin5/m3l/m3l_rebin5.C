void m3l_rebin5()
{
//=========Macro generated from canvas: m3l_rebin5_canvas/m3l_rebin5
//=========  (Tue Apr  4 18:53:47 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin5_canvas = new TCanvas("m3l_rebin5_canvas", "m3l_rebin5",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin5_canvas->SetHighLightColor(2);
   m3l_rebin5_canvas->Range(-115.3846,-292.5684,525.641,1957.958);
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
   m3l_rebin5_total__1->SetBinContent(1,234.3319);
   m3l_rebin5_total__1->SetBinContent(2,716.1733);
   m3l_rebin5_total__1->SetBinContent(3,819.0268);
   m3l_rebin5_total__1->SetBinContent(4,703.2519);
   m3l_rebin5_total__1->SetBinContent(5,911.4631);
   m3l_rebin5_total__1->SetBinError(1,12.85681);
   m3l_rebin5_total__1->SetBinError(2,22.64617);
   m3l_rebin5_total__1->SetBinError(3,19.74224);
   m3l_rebin5_total__1->SetBinError(4,18.29859);
   m3l_rebin5_total__1->SetBinError(5,17.13763);
   m3l_rebin5_total__1->SetMinimum(0);
   m3l_rebin5_total__1->SetMaximum(1822.926);
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
   m3l_rebin5_stack_stack_1->SetMaximum(957.0363);
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
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(1,0.4398576);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(3,0.2199288);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(4,0.4398576);
   m3l_rebin5_fakes_VV_stack_1->SetBinContent(5,0.4398576);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(1,0.3110263);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(3,0.2199288);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(4,0.3110263);
   m3l_rebin5_fakes_VV_stack_1->SetBinError(5,0.3110263);
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
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(1,10.99278);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(2,25.38107);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(3,30.84489);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(4,26.58477);
   m3l_rebin5_fakes_TT_stack_2->SetBinContent(5,30.60011);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(1,1.333391);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(2,1.97241);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(3,2.1543);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(4,2.006548);
   m3l_rebin5_fakes_TT_stack_2->SetBinError(5,2.189166);
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
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(1,31.12742);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(2,97.27319);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(3,58.36392);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(4,50.58206);
   m3l_rebin5_fakes_DY_stack_3->SetBinContent(5,27.23649);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(1,11.00521);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(2,19.45464);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(3,15.0695);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(4,14.02894);
   m3l_rebin5_fakes_DY_stack_3->SetBinError(5,10.29443);
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
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(1,14.53165);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(2,42.76458);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(3,41.10382);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(4,27.81773);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinContent(5,39.02787);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(1,2.456297);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(2,4.213719);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(3,4.131089);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(4,3.398477);
   m3l_rebin5_prompt_ZZ_stack_4->SetBinError(5,4.025417);
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
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(1,177.2402);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(2,550.7545);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(3,688.4942);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(4,597.8275);
   m3l_rebin5_prompt_WZ_stack_5->SetBinContent(5,814.1588);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(1,6.022867);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(2,10.61698);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(3,11.87059);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(4,11.0614);
   m3l_rebin5_prompt_WZ_stack_5->SetBinError(5,12.90853);
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
   m3l_rebin5_total__2->SetBinContent(1,234.3319);
   m3l_rebin5_total__2->SetBinContent(2,716.1733);
   m3l_rebin5_total__2->SetBinContent(3,819.0268);
   m3l_rebin5_total__2->SetBinContent(4,703.2519);
   m3l_rebin5_total__2->SetBinContent(5,911.4631);
   m3l_rebin5_total__2->SetBinError(1,12.85681);
   m3l_rebin5_total__2->SetBinError(2,22.64617);
   m3l_rebin5_total__2->SetBinError(3,19.74224);
   m3l_rebin5_total__2->SetBinError(4,18.29859);
   m3l_rebin5_total__2->SetBinError(5,17.13763);
   m3l_rebin5_total__2->SetMinimum(0);
   m3l_rebin5_total__2->SetMaximum(1822.926);
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
   234.3319,
   716.1733,
   819.0268,
   703.2519,
   911.4631};
   Double_t m3l_rebin5_total_errors_felx3001[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fely3001[5] = {
   13.63814,
   57.18789,
   49.78667,
   41.68661,
   55.6074};
   Double_t m3l_rebin5_total_errors_fehx3001[5] = {
   62.50137,
   12.5022,
   16.26072,
   22.67216,
   136.0635};
   Double_t m3l_rebin5_total_errors_fehy3001[5] = {
   15.53346,
   45.04081,
   50.98395,
   45.37507,
   57.91762};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,m3l_rebin5_total_errors_fx3001,m3l_rebin5_total_errors_fy3001,m3l_rebin5_total_errors_felx3001,m3l_rebin5_total_errors_fehx3001,m3l_rebin5_total_errors_fely3001,m3l_rebin5_total_errors_fehy3001);
   grae->SetName("m3l_rebin5_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin5_total_errors3001 = new TH1F("Graph_m3l_rebin5_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin5_total_errors3001->SetMinimum(145.8251);
   Graph_m3l_rebin5_total_errors3001->SetMaximum(1044.249);
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
