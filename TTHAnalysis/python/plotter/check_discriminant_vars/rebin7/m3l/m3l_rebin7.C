void m3l_rebin7()
{
//=========Macro generated from canvas: m3l_rebin7_canvas/m3l_rebin7
//=========  (Thu May  4 18:43:27 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin7_canvas = new TCanvas("m3l_rebin7_canvas", "m3l_rebin7",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin7_canvas->SetHighLightColor(2);
   m3l_rebin7_canvas->Range(-115.3846,-237.9084,525.641,1592.156);
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
   Double_t xAxis1[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_total__1 = new TH1D("m3l_rebin7_total__1","dummy",7, xAxis1);
   m3l_rebin7_total__1->SetBinContent(1,103.7184);
   m3l_rebin7_total__1->SetBinContent(2,438.0372);
   m3l_rebin7_total__1->SetBinContent(3,532.2297);
   m3l_rebin7_total__1->SetBinContent(4,590.4815);
   m3l_rebin7_total__1->SetBinContent(5,468.4701);
   m3l_rebin7_total__1->SetBinContent(6,510.1339);
   m3l_rebin7_total__1->SetBinContent(7,741.1763);
   m3l_rebin7_total__1->SetBinError(1,8.031356);
   m3l_rebin7_total__1->SetBinError(2,19.92119);
   m3l_rebin7_total__1->SetBinError(3,16.48815);
   m3l_rebin7_total__1->SetBinError(4,17.25861);
   m3l_rebin7_total__1->SetBinError(5,14.11354);
   m3l_rebin7_total__1->SetBinError(6,14.92567);
   m3l_rebin7_total__1->SetBinError(7,15.60118);
   m3l_rebin7_total__1->SetMinimum(0);
   m3l_rebin7_total__1->SetMaximum(1482.353);
   m3l_rebin7_total__1->SetEntries(15153);
   m3l_rebin7_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_total__1->SetFillColor(ci);
   m3l_rebin7_total__1->SetMarkerStyle(20);
   m3l_rebin7_total__1->SetMarkerSize(1.1);
   m3l_rebin7_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetYaxis()->SetLabelSize(0.05);
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
   Double_t xAxis2[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1F *m3l_rebin7_stack_stack_1 = new TH1F("m3l_rebin7_stack_stack_1","m3l_rebin7",7, xAxis2);
   m3l_rebin7_stack_stack_1->SetMinimum(0);
   m3l_rebin7_stack_stack_1->SetMaximum(778.2351);
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
   
   Double_t xAxis3[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_fakes_VV_stack_1 = new TH1D("m3l_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(1,0.4398576);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(5,0.2199288);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(6,0.2199288);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(7,0.4398576);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(1,0.3110263);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(4,0.2199288);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(5,0.2199288);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(6,0.2199288);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(7,0.3110263);
   m3l_rebin7_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin7_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin7_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin7_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis4[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_fakes_TT_stack_2 = new TH1D("m3l_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(1,6.225127);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(2,14.50058);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(3,22.56943);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(4,21.0648);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(5,17.30323);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(6,19.61632);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(7,23.12412);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(1,0.9945261);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(2,1.524725);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(3,1.842786);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(4,1.780301);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(5,1.613534);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(6,1.733194);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(7,1.908238);
   m3l_rebin7_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin7_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin7_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin7_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis5[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_fakes_DY_stack_3 = new TH1D("m3l_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(1,11.67278);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(2,81.70948);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(3,42.80021);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(4,46.69113);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(5,27.23649);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(6,31.12742);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(7,23.34557);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(1,6.739285);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(2,17.83047);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(3,12.90475);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(4,13.47857);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(5,10.29443);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(6,11.00521);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(7,9.530788);
   m3l_rebin7_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin7_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin7_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin7_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis6[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_prompt_ZZ_stack_4 = new TH1D("m3l_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(1,2.49114);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(2,31.55444);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(3,30.30887);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(4,28.64811);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(5,18.26836);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(6,22.00507);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(7,31.96963);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(1,1.017004);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(2,3.619543);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(3,3.547385);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(4,3.448828);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(5,2.754059);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(6,3.022629);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(7,3.643278);
   m3l_rebin7_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin7_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin7_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin7_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis7[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_prompt_WZ_stack_5 = new TH1D("m3l_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(1,82.88947);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(2,310.2727);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(3,436.5512);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(4,493.8575);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(5,405.4421);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(6,437.1652);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(7,662.2971);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(1,4.118811);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(2,7.968818);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(3,9.452349);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(4,10.05363);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(5,9.109333);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(6,9.458994);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(7,11.64256);
   m3l_rebin7_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin7_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin7_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
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
   Double_t xAxis8[8] = {0, 117.8591, 135.7182, 154.6531, 177.8827, 202.0599, 245.0816, 500}; 
   
   TH1D *m3l_rebin7_total__2 = new TH1D("m3l_rebin7_total__2","dummy",7, xAxis8);
   m3l_rebin7_total__2->SetBinContent(1,103.7184);
   m3l_rebin7_total__2->SetBinContent(2,438.0372);
   m3l_rebin7_total__2->SetBinContent(3,532.2297);
   m3l_rebin7_total__2->SetBinContent(4,590.4815);
   m3l_rebin7_total__2->SetBinContent(5,468.4701);
   m3l_rebin7_total__2->SetBinContent(6,510.1339);
   m3l_rebin7_total__2->SetBinContent(7,741.1763);
   m3l_rebin7_total__2->SetBinError(1,8.031356);
   m3l_rebin7_total__2->SetBinError(2,19.92119);
   m3l_rebin7_total__2->SetBinError(3,16.48815);
   m3l_rebin7_total__2->SetBinError(4,17.25861);
   m3l_rebin7_total__2->SetBinError(5,14.11354);
   m3l_rebin7_total__2->SetBinError(6,14.92567);
   m3l_rebin7_total__2->SetBinError(7,15.60118);
   m3l_rebin7_total__2->SetMinimum(0);
   m3l_rebin7_total__2->SetMaximum(1482.353);
   m3l_rebin7_total__2->SetEntries(15153);
   m3l_rebin7_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_total__2->SetFillColor(ci);
   m3l_rebin7_total__2->SetMarkerStyle(20);
   m3l_rebin7_total__2->SetMarkerSize(1.1);
   m3l_rebin7_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin7_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetYaxis()->SetLabelSize(0.05);
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
   58.92955,
   126.7887,
   145.1856,
   166.2679,
   189.9713,
   223.5707,
   372.5408};
   Double_t m3l_rebin7_total_errors_fy3001[7] = {
   103.7184,
   438.0372,
   532.2297,
   590.4815,
   468.4701,
   510.1339,
   741.1763};
   Double_t m3l_rebin7_total_errors_felx3001[7] = {
   58.92955,
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_total_errors_fely3001[7] = {
   5.986094,
   34.03279,
   37.55136,
   35.55763,
   27.97947,
   30.88185,
   44.81828};
   Double_t m3l_rebin7_total_errors_fehx3001[7] = {
   58.92955,
   8.929554,
   9.467422,
   11.6148,
   12.08862,
   21.51083,
   127.4592};
   Double_t m3l_rebin7_total_errors_fehy3001[7] = {
   6.311964,
   29.45993,
   32.60709,
   36.77666,
   29.67753,
   33.5354,
   47.15625};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,m3l_rebin7_total_errors_fx3001,m3l_rebin7_total_errors_fy3001,m3l_rebin7_total_errors_felx3001,m3l_rebin7_total_errors_fehx3001,m3l_rebin7_total_errors_fely3001,m3l_rebin7_total_errors_fehy3001);
   grae->SetName("m3l_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin7_total_errors3001 = new TH1F("Graph_m3l_rebin7_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin7_total_errors3001->SetMinimum(28.67226);
   Graph_m3l_rebin7_total_errors3001->SetMaximum(857.3925);
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
   m3l_rebin7_canvas->Modified();
   m3l_rebin7_canvas->cd();
   m3l_rebin7_canvas->SetSelected(m3l_rebin7_canvas);
}
