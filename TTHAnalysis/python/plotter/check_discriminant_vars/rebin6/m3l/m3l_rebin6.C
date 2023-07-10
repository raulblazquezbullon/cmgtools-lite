void m3l_rebin6()
{
//=========Macro generated from canvas: m3l_rebin6_canvas/m3l_rebin6
//=========  (Mon Jul 10 18:56:01 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin6_canvas = new TCanvas("m3l_rebin6_canvas", "m3l_rebin6",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin6_canvas->SetHighLightColor(2);
   m3l_rebin6_canvas->Range(-115.3846,-242.6639,525.641,1623.981);
   m3l_rebin6_canvas->SetFillColor(0);
   m3l_rebin6_canvas->SetBorderMode(0);
   m3l_rebin6_canvas->SetBorderSize(2);
   m3l_rebin6_canvas->SetTickx(1);
   m3l_rebin6_canvas->SetTicky(1);
   m3l_rebin6_canvas->SetLeftMargin(0.18);
   m3l_rebin6_canvas->SetRightMargin(0.04);
   m3l_rebin6_canvas->SetTopMargin(0.06);
   m3l_rebin6_canvas->SetBottomMargin(0.13);
   m3l_rebin6_canvas->SetFrameFillStyle(0);
   m3l_rebin6_canvas->SetFrameBorderMode(0);
   m3l_rebin6_canvas->SetFrameFillStyle(0);
   m3l_rebin6_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[7] = {0, 120.9129, 141.8257, 166.5587, 193.7429, 238.387, 500}; 
   
   TH1D *m3l_rebin6_total__1 = new TH1D("m3l_rebin6_total__1","dummy",6, xAxis1);
   m3l_rebin6_total__1->SetBinContent(1,146.0752);
   m3l_rebin6_total__1->SetBinContent(2,503.7507);
   m3l_rebin6_total__1->SetBinContent(3,635.3626);
   m3l_rebin6_total__1->SetBinContent(4,536.9799);
   m3l_rebin6_total__1->SetBinContent(5,561.3379);
   m3l_rebin6_total__1->SetBinContent(6,755.9914);
   m3l_rebin6_total__1->SetBinError(1,10.09082);
   m3l_rebin6_total__1->SetBinError(2,17.93796);
   m3l_rebin6_total__1->SetBinError(3,18.58362);
   m3l_rebin6_total__1->SetBinError(4,14.20205);
   m3l_rebin6_total__1->SetBinError(5,15.83561);
   m3l_rebin6_total__1->SetBinError(6,15.44132);
   m3l_rebin6_total__1->SetMinimum(0);
   m3l_rebin6_total__1->SetMaximum(1511.983);
   m3l_rebin6_total__1->SetEntries(15153);
   m3l_rebin6_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin6_total__1->SetFillColor(ci);
   m3l_rebin6_total__1->SetMarkerStyle(20);
   m3l_rebin6_total__1->SetMarkerSize(1.1);
   m3l_rebin6_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin6_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin6_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin6_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin6_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin6_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin6_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin6_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin6_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin6_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_total__1->Draw("HIST");
   
   THStack *m3l_rebin6_stack = new THStack();
   m3l_rebin6_stack->SetName("m3l_rebin6_stack");
   m3l_rebin6_stack->SetTitle("m3l_rebin6");
   Double_t xAxis2[7] = {0, 120.9129, 141.8257, 166.5587, 193.7429, 238.387, 500}; 
   
   TH1F *m3l_rebin6_stack_stack_1 = new TH1F("m3l_rebin6_stack_stack_1","m3l_rebin6",6, xAxis2);
   m3l_rebin6_stack_stack_1->SetMinimum(0);
   m3l_rebin6_stack_stack_1->SetMaximum(793.7909);
   m3l_rebin6_stack_stack_1->SetDirectory(0);
   m3l_rebin6_stack_stack_1->SetStats(0);
   m3l_rebin6_stack_stack_1->SetLineStyle(0);
   m3l_rebin6_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin6_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->SetHistogram(m3l_rebin6_stack_stack_1);
   
   Double_t xAxis3[7] = {0, 120.9129, 141.8257, 166.5587, 193.7429, 238.387, 500}; 
   
   TH1D *m3l_rebin6_fakes_VV_stack_1 = new TH1D("m3l_rebin6_fakes_VV_stack_1","dummy",6, xAxis3);
   m3l_rebin6_fakes_VV_stack_1->SetBinContent(1,0.4031181);
   m3l_rebin6_fakes_VV_stack_1->SetBinContent(3,0.2060137);
   m3l_rebin6_fakes_VV_stack_1->SetBinContent(4,0.2026171);
   m3l_rebin6_fakes_VV_stack_1->SetBinContent(5,0.1938399);
   m3l_rebin6_fakes_VV_stack_1->SetBinContent(6,0.404872);
   m3l_rebin6_fakes_VV_stack_1->SetBinError(1,0.2850661);
   m3l_rebin6_fakes_VV_stack_1->SetBinError(3,0.2060137);
   m3l_rebin6_fakes_VV_stack_1->SetBinError(4,0.2026171);
   m3l_rebin6_fakes_VV_stack_1->SetBinError(5,0.1938399);
   m3l_rebin6_fakes_VV_stack_1->SetBinError(6,0.2863255);
   m3l_rebin6_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin6_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin6_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin6_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_fakes_VV_stack_1,"");
   Double_t xAxis4[7] = {0, 120.9129, 141.8257, 166.5587, 193.7429, 238.387, 500}; 
   
   TH1D *m3l_rebin6_fakes_TT_stack_2 = new TH1D("m3l_rebin6_fakes_TT_stack_2","dummy",6, xAxis4);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(1,8.071722);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(2,17.42765);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(3,25.83183);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(4,19.31115);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(5,21.2005);
   m3l_rebin6_fakes_TT_stack_2->SetBinContent(6,24.66577);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(1,1.088295);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(2,1.602561);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(3,1.905322);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(4,1.645093);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(5,1.743681);
   m3l_rebin6_fakes_TT_stack_2->SetBinError(6,1.914434);
   m3l_rebin6_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin6_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin6_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin6_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_fakes_TT_stack_2,"");
   Double_t xAxis5[7] = {0, 120.9129, 141.8257, 166.5587, 193.7429, 238.387, 500}; 
   
   TH1D *m3l_rebin6_fakes_DY_stack_3 = new TH1D("m3l_rebin6_fakes_DY_stack_3","dummy",6, xAxis5);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(1,21.55838);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(2,64.68632);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(3,64.65361);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(4,28.45717);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(5,40.37505);
   m3l_rebin6_fakes_DY_stack_3->SetBinContent(6,25.44208);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(1,8.803589);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(2,15.25519);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(3,15.24855);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(4,10.06947);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(5,12.17611);
   m3l_rebin6_fakes_DY_stack_3->SetBinError(6,9.619193);
   m3l_rebin6_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin6_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin6_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin6_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_fakes_DY_stack_3,"");
   Double_t xAxis6[7] = {0, 120.9129, 141.8257, 166.5587, 193.7429, 238.387, 500}; 
   
   TH1D *m3l_rebin6_prompt_ZZ_stack_4 = new TH1D("m3l_rebin6_prompt_ZZ_stack_4","dummy",6, xAxis6);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(1,6.182);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(2,35.18484);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(3,31.14861);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(4,25.0893);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(5,23.09025);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinContent(6,32.91355);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(1,1.546693);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(2,3.671302);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(3,3.463105);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(4,3.113553);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(5,2.982696);
   m3l_rebin6_prompt_ZZ_stack_4->SetBinError(6,3.592873);
   m3l_rebin6_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin6_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin6_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin6_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_prompt_ZZ_stack_4,"");
   Double_t xAxis7[7] = {0, 120.9129, 141.8257, 166.5587, 193.7429, 238.387, 500}; 
   
   TH1D *m3l_rebin6_prompt_WZ_stack_5 = new TH1D("m3l_rebin6_prompt_WZ_stack_5","dummy",6, xAxis7);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(1,109.8599);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(2,386.4518);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(3,513.5225);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(4,463.9197);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(5,476.4782);
   m3l_rebin6_prompt_WZ_stack_5->SetBinContent(6,672.5651);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(1,4.545717);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(2,8.544169);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(3,9.857322);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(4,9.373497);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(5,9.514956);
   m3l_rebin6_prompt_WZ_stack_5->SetBinError(6,11.36881);
   m3l_rebin6_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin6_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin6_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin6_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_stack->Add(m3l_rebin6_prompt_WZ_stack_5,"");
   m3l_rebin6_stack->Draw("same hist");
   Double_t xAxis8[7] = {0, 120.9129, 141.8257, 166.5587, 193.7429, 238.387, 500}; 
   
   TH1D *m3l_rebin6_total__2 = new TH1D("m3l_rebin6_total__2","dummy",6, xAxis8);
   m3l_rebin6_total__2->SetBinContent(1,146.0752);
   m3l_rebin6_total__2->SetBinContent(2,503.7507);
   m3l_rebin6_total__2->SetBinContent(3,635.3626);
   m3l_rebin6_total__2->SetBinContent(4,536.9799);
   m3l_rebin6_total__2->SetBinContent(5,561.3379);
   m3l_rebin6_total__2->SetBinContent(6,755.9914);
   m3l_rebin6_total__2->SetBinError(1,10.09082);
   m3l_rebin6_total__2->SetBinError(2,17.93796);
   m3l_rebin6_total__2->SetBinError(3,18.58362);
   m3l_rebin6_total__2->SetBinError(4,14.20205);
   m3l_rebin6_total__2->SetBinError(5,15.83561);
   m3l_rebin6_total__2->SetBinError(6,15.44132);
   m3l_rebin6_total__2->SetMinimum(0);
   m3l_rebin6_total__2->SetMaximum(1511.983);
   m3l_rebin6_total__2->SetEntries(15153);
   m3l_rebin6_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin6_total__2->SetFillColor(ci);
   m3l_rebin6_total__2->SetMarkerStyle(20);
   m3l_rebin6_total__2->SetMarkerSize(1.1);
   m3l_rebin6_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin6_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin6_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin6_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin6_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin6_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin6_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin6_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin6_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin6_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin6_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin6_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin6_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin6_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin6_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin6_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin6_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin6_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin6_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin6_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin6_total_errors_fx3001[6] = {
   60.45644,
   131.3693,
   154.1922,
   180.1508,
   216.0649,
   369.1935};
   Double_t m3l_rebin6_total_errors_fy3001[6] = {
   146.0752,
   503.7507,
   635.3626,
   536.9799,
   561.3379,
   755.9914};
   Double_t m3l_rebin6_total_errors_felx3001[6] = {
   60.45644,
   10.45644,
   12.36647,
   13.59211,
   22.32204,
   130.8065};
   Double_t m3l_rebin6_total_errors_fely3001[6] = {
   13.40791,
   42.9907,
   51.60068,
   40.79624,
   40.16986,
   60.17925};
   Double_t m3l_rebin6_total_errors_fehx3001[6] = {
   60.45644,
   10.45644,
   12.36647,
   13.59211,
   22.32204,
   130.8065};
   Double_t m3l_rebin6_total_errors_fehy3001[6] = {
   14.19343,
   46.57371,
   51.91877,
   42.40179,
   44.33429,
   61.61314};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,m3l_rebin6_total_errors_fx3001,m3l_rebin6_total_errors_fy3001,m3l_rebin6_total_errors_felx3001,m3l_rebin6_total_errors_fehx3001,m3l_rebin6_total_errors_fely3001,m3l_rebin6_total_errors_fehy3001);
   grae->SetName("m3l_rebin6_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin6_total_errors3001 = new TH1F("Graph_m3l_rebin6_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin6_total_errors3001->SetMinimum(64.17352);
   Graph_m3l_rebin6_total_errors3001->SetMaximum(886.0982);
   Graph_m3l_rebin6_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin6_total_errors3001->SetStats(0);
   Graph_m3l_rebin6_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin6_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin6_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin6_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin6_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin6_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin6_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin6_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin6_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin6_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin6_total_errors","Total unc.","F");
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
   m3l_rebin6_canvas->Modified();
   m3l_rebin6_canvas->cd();
   m3l_rebin6_canvas->SetSelected(m3l_rebin6_canvas);
}
