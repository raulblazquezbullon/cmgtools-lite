void m3lmet_Meas()
{
//=========Macro generated from canvas: m3lmet_Meas_canvas/m3lmet_Meas
//=========  (Tue Apr  4 18:43:56 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_canvas = new TCanvas("m3lmet_Meas_canvas", "m3lmet_Meas",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_canvas->SetHighLightColor(2);
   m3lmet_Meas_canvas->Range(-115.3846,-168.2151,525.641,1125.747);
   m3lmet_Meas_canvas->SetFillColor(0);
   m3lmet_Meas_canvas->SetBorderMode(0);
   m3lmet_Meas_canvas->SetBorderSize(2);
   m3lmet_Meas_canvas->SetTickx(1);
   m3lmet_Meas_canvas->SetTicky(1);
   m3lmet_Meas_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_canvas->SetRightMargin(0.04);
   m3lmet_Meas_canvas->SetTopMargin(0.06);
   m3lmet_Meas_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_canvas->SetFrameBorderMode(0);
   
   TH1D *m3lmet_Meas_total__5 = new TH1D("m3lmet_Meas_total__5","dummy",10,0,500);
   m3lmet_Meas_total__5->SetBinContent(3,19.43511);
   m3lmet_Meas_total__5->SetBinContent(4,431.4962);
   m3lmet_Meas_total__5->SetBinContent(5,998.1993);
   m3lmet_Meas_total__5->SetBinContent(6,779.4889);
   m3lmet_Meas_total__5->SetBinContent(7,453.9378);
   m3lmet_Meas_total__5->SetBinContent(8,263.916);
   m3lmet_Meas_total__5->SetBinContent(9,143.4057);
   m3lmet_Meas_total__5->SetBinContent(10,82.60503);
   m3lmet_Meas_total__5->SetBinContent(11,211.7631);
   m3lmet_Meas_total__5->SetBinError(3,7.830792);
   m3lmet_Meas_total__5->SetBinError(4,21.27724);
   m3lmet_Meas_total__5->SetBinError(5,22.34907);
   m3lmet_Meas_total__5->SetBinError(6,17.96254);
   m3lmet_Meas_total__5->SetBinError(7,12.98762);
   m3lmet_Meas_total__5->SetBinError(8,9.147517);
   m3lmet_Meas_total__5->SetBinError(9,5.551463);
   m3lmet_Meas_total__5->SetBinError(10,4.154464);
   m3lmet_Meas_total__5->SetBinError(11,7.734976);
   m3lmet_Meas_total__5->SetMinimum(0);
   m3lmet_Meas_total__5->SetEntries(15125);
   m3lmet_Meas_total__5->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__5->SetFillColor(ci);
   m3lmet_Meas_total__5->SetMarkerStyle(20);
   m3lmet_Meas_total__5->SetMarkerSize(1.1);
   m3lmet_Meas_total__5->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__5->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__5->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_total__5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__5->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_total__5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__5->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__5->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_total__5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__5->Draw("HIST");
   
   THStack *m3lmet_Meas_stack = new THStack();
   m3lmet_Meas_stack->SetName("m3lmet_Meas_stack");
   m3lmet_Meas_stack->SetTitle("m3lmet_Meas");
   
   TH1F *m3lmet_Meas_stack_stack_3 = new TH1F("m3lmet_Meas_stack_stack_3","m3lmet_Meas",10,0,500);
   m3lmet_Meas_stack_stack_3->SetMinimum(0);
   m3lmet_Meas_stack_stack_3->SetMaximum(1048.109);
   m3lmet_Meas_stack_stack_3->SetDirectory(0);
   m3lmet_Meas_stack_stack_3->SetStats(0);
   m3lmet_Meas_stack_stack_3->SetLineStyle(0);
   m3lmet_Meas_stack_stack_3->SetMarkerStyle(20);
   m3lmet_Meas_stack_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_stack_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_stack_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_stack_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_stack_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_stack_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_stack_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_stack_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_stack_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_stack_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_stack_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_stack_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_stack_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_stack_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_stack_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_stack_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_stack_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_stack_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->SetHistogram(m3lmet_Meas_stack_stack_3);
   
   
   TH1D *m3lmet_Meas_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_fakes_VV_stack_1","dummy",10,0,500);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(4,0.2199288);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(5,0.4398576);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(7,0.6597863);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(11,0.2199288);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(4,0.2199288);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(5,0.3110263);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(7,0.3809278);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(11,0.2199288);
   m3lmet_Meas_fakes_VV_stack_1->SetEntries(7);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_fakes_VV_stack_1,"");
   
   TH1D *m3lmet_Meas_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_fakes_TT_stack_2","dummy",10,0,500);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(3,1.006083);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(4,15.30905);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(5,32.04859);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(6,31.35243);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(7,20.46295);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(8,10.23147);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(9,6.770829);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(10,3.15972);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(11,4.062497);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(3,0.4214191);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(4,1.551872);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(5,2.216456);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(6,2.183989);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(7,1.754683);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(8,1.258863);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(9,1.009336);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(10,0.6895075);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(11,0.8377418);
   m3lmet_Meas_fakes_TT_stack_2->SetEntries(832);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_fakes_TT_stack_2,"");
   
   TH1D *m3lmet_Meas_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_fakes_DY_stack_3","dummy",10,0,500);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(3,15.56371);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(4,97.27319);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(5,77.81856);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(6,42.80021);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(7,19.45464);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(8,7.781856);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(11,3.890928);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(3,7.781856);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(4,19.45464);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(5,17.40076);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(6,12.90475);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(7,8.700379);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(8,5.502603);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(11,3.890928);
   m3lmet_Meas_fakes_DY_stack_3->SetEntries(68);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_fakes_DY_stack_3,"");
   
   TH1D *m3lmet_Meas_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_prompt_ZZ_stack_4","dummy",10,0,500);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(4,31.13925);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(5,47.33167);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(6,33.2152);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(7,24.49621);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(8,7.058231);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(9,8.718991);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(10,2.49114);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(11,10.79494);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(4,3.595651);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(5,4.433017);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(6,3.713573);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(7,3.189135);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(8,1.711872);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(9,1.90264);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(10,1.017004);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(11,2.117062);
   m3lmet_Meas_prompt_ZZ_stack_4->SetEntries(398);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_prompt_ZZ_stack_4,"");
   
   TH1D *m3lmet_Meas_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_prompt_WZ_stack_5","dummy",10,0,500);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(3,2.865315);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(4,287.5548);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(5,840.5606);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(6,672.121);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(7,388.8642);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(8,238.8445);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(9,127.9158);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(10,76.95417);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(11,192.7948);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(3,0.7657876);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(4,7.671539);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(5,13.11616);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(6,11.72859);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(7,8.921156);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(8,6.991651);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(9,5.116634);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(10,3.968608);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(11,6.281593);
   m3lmet_Meas_prompt_WZ_stack_5->SetEntries(13820);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_prompt_WZ_stack_5,"");
   m3lmet_Meas_stack->Draw("same hist");
   
   TH1D *m3lmet_Meas_total__6 = new TH1D("m3lmet_Meas_total__6","dummy",10,0,500);
   m3lmet_Meas_total__6->SetBinContent(3,19.43511);
   m3lmet_Meas_total__6->SetBinContent(4,431.4962);
   m3lmet_Meas_total__6->SetBinContent(5,998.1993);
   m3lmet_Meas_total__6->SetBinContent(6,779.4889);
   m3lmet_Meas_total__6->SetBinContent(7,453.9378);
   m3lmet_Meas_total__6->SetBinContent(8,263.916);
   m3lmet_Meas_total__6->SetBinContent(9,143.4057);
   m3lmet_Meas_total__6->SetBinContent(10,82.60503);
   m3lmet_Meas_total__6->SetBinContent(11,211.7631);
   m3lmet_Meas_total__6->SetBinError(3,7.830792);
   m3lmet_Meas_total__6->SetBinError(4,21.27724);
   m3lmet_Meas_total__6->SetBinError(5,22.34907);
   m3lmet_Meas_total__6->SetBinError(6,17.96254);
   m3lmet_Meas_total__6->SetBinError(7,12.98762);
   m3lmet_Meas_total__6->SetBinError(8,9.147517);
   m3lmet_Meas_total__6->SetBinError(9,5.551463);
   m3lmet_Meas_total__6->SetBinError(10,4.154464);
   m3lmet_Meas_total__6->SetBinError(11,7.734976);
   m3lmet_Meas_total__6->SetMinimum(0);
   m3lmet_Meas_total__6->SetEntries(15125);
   m3lmet_Meas_total__6->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__6->SetFillColor(ci);
   m3lmet_Meas_total__6->SetMarkerStyle(20);
   m3lmet_Meas_total__6->SetMarkerSize(1.1);
   m3lmet_Meas_total__6->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__6->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__6->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__6->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__6->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__6->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__6->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_total__6->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__6->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_total__6->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__6->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__6->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__6->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__6->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_total__6->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__6->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__6->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__6->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__6->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__6->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__6->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__6->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_total_errors_fx3003[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3003[8] = {
   19.43511,
   431.4962,
   998.1993,
   779.4889,
   453.9378,
   263.916,
   143.4057,
   82.60503};
   Double_t m3lmet_Meas_total_errors_felx3003[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3003[8] = {
   1.1065,
   40.93868,
   60.08469,
   59.9231,
   27.95559,
   19.18154,
   12.34756,
   4.825534};
   Double_t m3lmet_Meas_total_errors_fehx3003[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3003[8] = {
   1.260505,
   26.07051,
   60.17939,
   47.42959,
   28.94878,
   17.16027,
   8.702955,
   5.380577};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3003,m3lmet_Meas_total_errors_fy3003,m3lmet_Meas_total_errors_felx3003,m3lmet_Meas_total_errors_fehx3003,m3lmet_Meas_total_errors_fely3003,m3lmet_Meas_total_errors_fehy3003);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_total_errors3003 = new TH1F("Graph_m3lmet_Meas_total_errors3003","Graph",100,60,540);
   Graph_m3lmet_Meas_total_errors3003->SetMinimum(16.49575);
   Graph_m3lmet_Meas_total_errors3003->SetMaximum(1162.384);
   Graph_m3lmet_Meas_total_errors3003->SetDirectory(0);
   Graph_m3lmet_Meas_total_errors3003->SetStats(0);
   Graph_m3lmet_Meas_total_errors3003->SetLineStyle(0);
   Graph_m3lmet_Meas_total_errors3003->SetMarkerStyle(20);
   Graph_m3lmet_Meas_total_errors3003->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3003->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3003->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_total_errors3003->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_total_errors3003->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3003->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3003->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3003->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_total_errors3003->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_total_errors3003->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3003->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3003->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3003->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_total_errors3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_total_errors3003);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_total_errors","Total unc.","F");

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
   m3lmet_Meas_canvas->Modified();
   m3lmet_Meas_canvas->cd();
   m3lmet_Meas_canvas->SetSelected(m3lmet_Meas_canvas);
}
