void m3l()
{
//=========Macro generated from canvas: m3l_canvas/m3l
//=========  (Tue Apr  4 18:42:51 2023) by ROOT version 6.24/07
   TCanvas *m3l_canvas = new TCanvas("m3l_canvas", "m3l",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_canvas->SetHighLightColor(2);
   m3l_canvas->Range(-115.3846,-192.3792,525.641,1287.461);
   m3l_canvas->SetFillColor(0);
   m3l_canvas->SetBorderMode(0);
   m3l_canvas->SetBorderSize(2);
   m3l_canvas->SetTickx(1);
   m3l_canvas->SetTicky(1);
   m3l_canvas->SetLeftMargin(0.18);
   m3l_canvas->SetRightMargin(0.04);
   m3l_canvas->SetTopMargin(0.06);
   m3l_canvas->SetBottomMargin(0.13);
   m3l_canvas->SetFrameFillStyle(0);
   m3l_canvas->SetFrameBorderMode(0);
   m3l_canvas->SetFrameFillStyle(0);
   m3l_canvas->SetFrameBorderMode(0);
   
   TH1D *m3l_total__1 = new TH1D("m3l_total__1","dummy",10,0,500);
   m3l_total__1->SetBinContent(3,950.5052);
   m3l_total__1->SetBinContent(4,1141.591);
   m3l_total__1->SetBinContent(5,596.4591);
   m3l_total__1->SetBinContent(6,297.8793);
   m3l_total__1->SetBinContent(7,148.1567);
   m3l_total__1->SetBinContent(8,77.66273);
   m3l_total__1->SetBinContent(9,58.74061);
   m3l_total__1->SetBinContent(10,113.2523);
   m3l_total__1->SetBinError(3,26.04125);
   m3l_total__1->SetBinError(4,22.68865);
   m3l_total__1->SetBinError(5,16.86009);
   m3l_total__1->SetBinError(6,10.97004);
   m3l_total__1->SetBinError(7,5.597652);
   m3l_total__1->SetBinError(8,4.055531);
   m3l_total__1->SetBinError(9,3.573712);
   m3l_total__1->SetBinError(10,6.193622);
   m3l_total__1->SetMinimum(0);
   m3l_total__1->SetEntries(15149);
   m3l_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_total__1->SetFillColor(ci);
   m3l_total__1->SetMarkerStyle(20);
   m3l_total__1->SetMarkerSize(1.1);
   m3l_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_total__1->GetXaxis()->SetLabelFont(42);
   m3l_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_total__1->GetXaxis()->SetTitleFont(42);
   m3l_total__1->GetYaxis()->SetTitle("Events");
   m3l_total__1->GetYaxis()->SetLabelFont(42);
   m3l_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_total__1->GetYaxis()->SetTitleFont(42);
   m3l_total__1->GetZaxis()->SetLabelFont(42);
   m3l_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_total__1->GetZaxis()->SetTitleFont(42);
   m3l_total__1->Draw("HIST");
   
   THStack *m3l_stack = new THStack();
   m3l_stack->SetName("m3l_stack");
   m3l_stack->SetTitle("m3l");
   
   TH1F *m3l_stack_stack_1 = new TH1F("m3l_stack_stack_1","m3l",10,0,500);
   m3l_stack_stack_1->SetMinimum(0);
   m3l_stack_stack_1->SetMaximum(1198.671);
   m3l_stack_stack_1->SetDirectory(0);
   m3l_stack_stack_1->SetStats(0);
   m3l_stack_stack_1->SetLineStyle(0);
   m3l_stack_stack_1->SetMarkerStyle(20);
   m3l_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_stack->SetHistogram(m3l_stack_stack_1);
   
   
   TH1D *m3l_fakes_VV_stack_1 = new TH1D("m3l_fakes_VV_stack_1","dummy",10,0,500);
   m3l_fakes_VV_stack_1->SetBinContent(3,0.4398576);
   m3l_fakes_VV_stack_1->SetBinContent(4,0.4398576);
   m3l_fakes_VV_stack_1->SetBinContent(5,0.2199288);
   m3l_fakes_VV_stack_1->SetBinContent(6,0.2199288);
   m3l_fakes_VV_stack_1->SetBinContent(9,0.2199288);
   m3l_fakes_VV_stack_1->SetBinError(3,0.3110263);
   m3l_fakes_VV_stack_1->SetBinError(4,0.3110263);
   m3l_fakes_VV_stack_1->SetBinError(5,0.2199288);
   m3l_fakes_VV_stack_1->SetBinError(6,0.2199288);
   m3l_fakes_VV_stack_1->SetBinError(9,0.2199288);
   m3l_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_fakes_VV_stack_1->SetFillColor(ci);
   m3l_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_fakes_VV_stack_1,"");
   
   TH1D *m3l_fakes_TT_stack_2 = new TH1D("m3l_fakes_TT_stack_2","dummy",10,0,500);
   m3l_fakes_TT_stack_2->SetBinContent(3,36.37385);
   m3l_fakes_TT_stack_2->SetBinContent(4,44.38655);
   m3l_fakes_TT_stack_2->SetBinContent(5,22.77604);
   m3l_fakes_TT_stack_2->SetBinContent(6,10.33478);
   m3l_fakes_TT_stack_2->SetBinContent(7,4.814812);
   m3l_fakes_TT_stack_2->SetBinContent(8,2.708332);
   m3l_fakes_TT_stack_2->SetBinContent(9,0.7523143);
   m3l_fakes_TT_stack_2->SetBinContent(10,2.256943);
   m3l_fakes_TT_stack_2->SetBinError(3,2.380826);
   m3l_fakes_TT_stack_2->SetBinError(4,2.584285);
   m3l_fakes_TT_stack_2->SetBinError(5,1.86531);
   m3l_fakes_TT_stack_2->SetBinError(6,1.257464);
   m3l_fakes_TT_stack_2->SetBinError(7,0.9275154);
   m3l_fakes_TT_stack_2->SetBinError(8,0.6383599);
   m3l_fakes_TT_stack_2->SetBinError(9,0.3364452);
   m3l_fakes_TT_stack_2->SetBinError(10,0.5827402);
   m3l_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_fakes_TT_stack_2->SetFillColor(ci);
   m3l_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_fakes_TT_stack_2,"");
   
   TH1D *m3l_fakes_DY_stack_3 = new TH1D("m3l_fakes_DY_stack_3","dummy",10,0,500);
   m3l_fakes_DY_stack_3->SetBinContent(3,128.4006);
   m3l_fakes_DY_stack_3->SetBinContent(4,73.92763);
   m3l_fakes_DY_stack_3->SetBinContent(5,42.80021);
   m3l_fakes_DY_stack_3->SetBinContent(6,15.56371);
   m3l_fakes_DY_stack_3->SetBinContent(10,3.890928);
   m3l_fakes_DY_stack_3->SetBinError(3,22.35168);
   m3l_fakes_DY_stack_3->SetBinError(4,16.96016);
   m3l_fakes_DY_stack_3->SetBinError(5,12.90475);
   m3l_fakes_DY_stack_3->SetBinError(6,7.781856);
   m3l_fakes_DY_stack_3->SetBinError(10,3.890928);
   m3l_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_fakes_DY_stack_3->SetFillColor(ci);
   m3l_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_fakes_DY_stack_3,"");
   
   TH1D *m3l_prompt_ZZ_stack_4 = new TH1D("m3l_prompt_ZZ_stack_4","dummy",10,0,500);
   m3l_prompt_ZZ_stack_4->SetBinContent(3,57.29623);
   m3l_prompt_ZZ_stack_4->SetBinContent(4,52.31395);
   m3l_prompt_ZZ_stack_4->SetBinContent(5,26.57216);
   m3l_prompt_ZZ_stack_4->SetBinContent(6,12.04051);
   m3l_prompt_ZZ_stack_4->SetBinContent(7,5.397471);
   m3l_prompt_ZZ_stack_4->SetBinContent(8,3.32152);
   m3l_prompt_ZZ_stack_4->SetBinContent(9,3.736711);
   m3l_prompt_ZZ_stack_4->SetBinContent(10,4.567091);
   m3l_prompt_ZZ_stack_4->SetBinError(3,4.877379);
   m3l_prompt_ZZ_stack_4->SetBinError(4,4.660497);
   m3l_prompt_ZZ_stack_4->SetBinError(5,3.32152);
   m3l_prompt_ZZ_stack_4->SetBinError(6,2.235867);
   m3l_prompt_ZZ_stack_4->SetBinError(7,1.496989);
   m3l_prompt_ZZ_stack_4->SetBinError(8,1.174335);
   m3l_prompt_ZZ_stack_4->SetBinError(9,1.24557);
   m3l_prompt_ZZ_stack_4->SetBinError(10,1.37703);
   m3l_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_prompt_ZZ_stack_4,"");
   
   TH1D *m3l_prompt_WZ_stack_5 = new TH1D("m3l_prompt_WZ_stack_5","dummy",10,0,500);
   m3l_prompt_WZ_stack_5->SetBinContent(3,727.9947);
   m3l_prompt_WZ_stack_5->SetBinContent(4,970.5231);
   m3l_prompt_WZ_stack_5->SetBinContent(5,504.0908);
   m3l_prompt_WZ_stack_5->SetBinContent(6,259.7203);
   m3l_prompt_WZ_stack_5->SetBinContent(7,137.9444);
   m3l_prompt_WZ_stack_5->SetBinContent(8,71.63287);
   m3l_prompt_WZ_stack_5->SetBinContent(9,54.03165);
   m3l_prompt_WZ_stack_5->SetBinContent(10,102.5373);
   m3l_prompt_WZ_stack_5->SetBinError(3,12.20636);
   m3l_prompt_WZ_stack_5->SetBinError(4,14.0937);
   m3l_prompt_WZ_stack_5->SetBinError(5,10.15726);
   m3l_prompt_WZ_stack_5->SetBinError(6,7.290799);
   m3l_prompt_WZ_stack_5->SetBinError(7,5.313422);
   m3l_prompt_WZ_stack_5->SetBinError(8,3.828938);
   m3l_prompt_WZ_stack_5->SetBinError(9,3.325418);
   m3l_prompt_WZ_stack_5->SetBinError(10,4.581031);
   m3l_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_stack->Add(m3l_prompt_WZ_stack_5,"");
   m3l_stack->Draw("same hist");
   
   TH1D *m3l_total__2 = new TH1D("m3l_total__2","dummy",10,0,500);
   m3l_total__2->SetBinContent(3,950.5052);
   m3l_total__2->SetBinContent(4,1141.591);
   m3l_total__2->SetBinContent(5,596.4591);
   m3l_total__2->SetBinContent(6,297.8793);
   m3l_total__2->SetBinContent(7,148.1567);
   m3l_total__2->SetBinContent(8,77.66273);
   m3l_total__2->SetBinContent(9,58.74061);
   m3l_total__2->SetBinContent(10,113.2523);
   m3l_total__2->SetBinError(3,26.04125);
   m3l_total__2->SetBinError(4,22.68865);
   m3l_total__2->SetBinError(5,16.86009);
   m3l_total__2->SetBinError(6,10.97004);
   m3l_total__2->SetBinError(7,5.597652);
   m3l_total__2->SetBinError(8,4.055531);
   m3l_total__2->SetBinError(9,3.573712);
   m3l_total__2->SetBinError(10,6.193622);
   m3l_total__2->SetMinimum(0);
   m3l_total__2->SetEntries(15149);
   m3l_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_total__2->SetFillColor(ci);
   m3l_total__2->SetMarkerStyle(20);
   m3l_total__2->SetMarkerSize(1.1);
   m3l_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_total__2->GetXaxis()->SetLabelFont(42);
   m3l_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_total__2->GetXaxis()->SetTitleFont(42);
   m3l_total__2->GetYaxis()->SetTitle("Events");
   m3l_total__2->GetYaxis()->SetLabelFont(42);
   m3l_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_total__2->GetYaxis()->SetTitleFont(42);
   m3l_total__2->GetZaxis()->SetLabelFont(42);
   m3l_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_total__2->GetZaxis()->SetTitleFont(42);
   m3l_total__2->Draw("AXIS SAME");
   
   Double_t m3l_total_errors_fx3001[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3l_total_errors_fy3001[8] = {
   950.5052,
   1141.591,
   596.4591,
   297.8793,
   148.1567,
   77.66273,
   58.74061,
   113.2523};
   Double_t m3l_total_errors_felx3001[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fely3001[8] = {
   77.24252,
   70.92583,
   37.47474,
   18.71915,
   9.336267,
   5.048167,
   3.635909,
   6.81766};
   Double_t m3l_total_errors_fehx3001[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fehy3001[8] = {
   57.36371,
   68.78132,
   35.93505,
   17.93113,
   8.916868,
   4.673927,
   3.541135,
   6.817209};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3l_total_errors_fx3001,m3l_total_errors_fy3001,m3l_total_errors_felx3001,m3l_total_errors_fehx3001,m3l_total_errors_fely3001,m3l_total_errors_fehy3001);
   grae->SetName("m3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_total_errors3001 = new TH1F("Graph_m3l_total_errors3001","Graph",100,60,540);
   Graph_m3l_total_errors3001->SetMinimum(49.59423);
   Graph_m3l_total_errors3001->SetMaximum(1325.899);
   Graph_m3l_total_errors3001->SetDirectory(0);
   Graph_m3l_total_errors3001->SetStats(0);
   Graph_m3l_total_errors3001->SetLineStyle(0);
   Graph_m3l_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_total_errors","Total unc.","F");

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
   m3l_canvas->Modified();
   m3l_canvas->cd();
   m3l_canvas->SetSelected(m3l_canvas);
}
