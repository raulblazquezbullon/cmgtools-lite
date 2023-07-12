void m3l()
{
//=========Macro generated from canvas: m3l_canvas/m3l
//=========  (Wed Jul 12 04:26:59 2023) by ROOT version 6.24/07
   TCanvas *m3l_canvas = new TCanvas("m3l_canvas", "m3l",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_canvas->SetHighLightColor(2);
   m3l_canvas->Range(0,0,1,1);
   m3l_canvas->SetFillColor(0);
   m3l_canvas->SetBorderMode(0);
   m3l_canvas->SetBorderSize(2);
   m3l_canvas->SetTickx(1);
   m3l_canvas->SetTicky(1);
   m3l_canvas->SetLeftMargin(0.18);
   m3l_canvas->SetRightMargin(0.04);
   m3l_canvas->SetBottomMargin(0.13);
   m3l_canvas->SetFrameFillStyle(0);
   m3l_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-5.903436,525.641,230.234);
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
   
   TH1D *m3l_total__1 = new TH1D("m3l_total__1","dummy",10,0,500);
   m3l_total__1->SetBinContent(3,132.4548);
   m3l_total__1->SetBinContent(4,154.5299);
   m3l_total__1->SetBinContent(5,77.08423);
   m3l_total__1->SetBinContent(6,42.23619);
   m3l_total__1->SetBinContent(7,20.38103);
   m3l_total__1->SetBinContent(8,10.91307);
   m3l_total__1->SetBinContent(9,8.084248);
   m3l_total__1->SetBinContent(10,16.93068);
   m3l_total__1->SetBinError(3,9.60546);
   m3l_total__1->SetBinError(4,9.157923);
   m3l_total__1->SetBinError(5,5.08834);
   m3l_total__1->SetBinError(6,2.836833);
   m3l_total__1->SetBinError(7,1.99722);
   m3l_total__1->SetBinError(8,1.450537);
   m3l_total__1->SetBinError(9,1.284115);
   m3l_total__1->SetBinError(10,1.817638);
   m3l_total__1->SetMinimum(0);
   m3l_total__1->SetMaximum(216.0657);
   m3l_total__1->SetEntries(2341);
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
   m3l_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_total__1->GetXaxis()->SetLabelSize(0.06);
   m3l_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_total__1->GetXaxis()->SetTitleFont(42);
   m3l_total__1->GetYaxis()->SetTitle("Events");
   m3l_total__1->GetYaxis()->SetLabelFont(42);
   m3l_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_total__1->GetYaxis()->SetLabelSize(0.06);
   m3l_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_total__1->GetYaxis()->SetTitleOffset(1.48);
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
   m3l_stack_stack_1->SetMaximum(162.2564);
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
   m3l_fakes_VV_stack_1->SetBinContent(5,0.1938399);
   m3l_fakes_VV_stack_1->SetBinContent(9,0.205721);
   m3l_fakes_VV_stack_1->SetBinError(5,0.1938399);
   m3l_fakes_VV_stack_1->SetBinError(9,0.205721);
   m3l_fakes_VV_stack_1->SetEntries(6);

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
   m3l_fakes_TT_stack_2->SetBinContent(3,2.937004);
   m3l_fakes_TT_stack_2->SetBinContent(4,4.15538);
   m3l_fakes_TT_stack_2->SetBinContent(5,1.227741);
   m3l_fakes_TT_stack_2->SetBinContent(6,0.9434161);
   m3l_fakes_TT_stack_2->SetBinContent(7,0.8472321);
   m3l_fakes_TT_stack_2->SetBinContent(8,0.4261208);
   m3l_fakes_TT_stack_2->SetBinContent(10,0.1455691);
   m3l_fakes_TT_stack_2->SetBinError(3,0.626556);
   m3l_fakes_TT_stack_2->SetBinError(4,0.7469291);
   m3l_fakes_TT_stack_2->SetBinError(5,0.4097904);
   m3l_fakes_TT_stack_2->SetBinError(6,0.3911157);
   m3l_fakes_TT_stack_2->SetBinError(7,0.3463098);
   m3l_fakes_TT_stack_2->SetBinError(8,0.2465148);
   m3l_fakes_TT_stack_2->SetBinError(10,0.1455691);
   m3l_fakes_TT_stack_2->SetEntries(86);

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
   m3l_fakes_DY_stack_3->SetBinContent(3,20.68774);
   m3l_fakes_DY_stack_3->SetBinContent(4,17.12461);
   m3l_fakes_DY_stack_3->SetBinContent(5,3.460478);
   m3l_fakes_DY_stack_3->SetBinError(3,8.450213);
   m3l_fakes_DY_stack_3->SetBinError(4,7.662778);
   m3l_fakes_DY_stack_3->SetBinError(5,3.460478);
   m3l_fakes_DY_stack_3->SetEntries(16);

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
   m3l_prompt_ZZ_stack_4->SetBinContent(3,6.459963);
   m3l_prompt_ZZ_stack_4->SetBinContent(4,4.38784);
   m3l_prompt_ZZ_stack_4->SetBinContent(5,3.648692);
   m3l_prompt_ZZ_stack_4->SetBinContent(6,1.836779);
   m3l_prompt_ZZ_stack_4->SetBinContent(7,1.172042);
   m3l_prompt_ZZ_stack_4->SetBinContent(8,0.3887213);
   m3l_prompt_ZZ_stack_4->SetBinContent(9,0.4238748);
   m3l_prompt_ZZ_stack_4->SetBinError(3,1.523959);
   m3l_prompt_ZZ_stack_4->SetBinError(4,1.266959);
   m3l_prompt_ZZ_stack_4->SetBinError(5,1.154021);
   m3l_prompt_ZZ_stack_4->SetBinError(6,0.8217002);
   m3l_prompt_ZZ_stack_4->SetBinError(7,0.6771152);
   m3l_prompt_ZZ_stack_4->SetBinError(8,0.3887213);
   m3l_prompt_ZZ_stack_4->SetBinError(9,0.4238748);
   m3l_prompt_ZZ_stack_4->SetEntries(54);

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
   m3l_prompt_WZ_stack_5->SetBinContent(3,102.3701);
   m3l_prompt_WZ_stack_5->SetBinContent(4,128.8621);
   m3l_prompt_WZ_stack_5->SetBinContent(5,68.55348);
   m3l_prompt_WZ_stack_5->SetBinContent(6,39.456);
   m3l_prompt_WZ_stack_5->SetBinContent(7,18.36175);
   m3l_prompt_WZ_stack_5->SetBinContent(8,10.09823);
   m3l_prompt_WZ_stack_5->SetBinContent(9,7.454652);
   m3l_prompt_WZ_stack_5->SetBinContent(10,16.78511);
   m3l_prompt_WZ_stack_5->SetBinError(3,4.259549);
   m3l_prompt_WZ_stack_5->SetBinError(4,4.794402);
   m3l_prompt_WZ_stack_5->SetBinError(5,3.518384);
   m3l_prompt_WZ_stack_5->SetBinError(6,2.686905);
   m3l_prompt_WZ_stack_5->SetBinError(7,1.846746);
   m3l_prompt_WZ_stack_5->SetBinError(8,1.375567);
   m3l_prompt_WZ_stack_5->SetBinError(9,1.194555);
   m3l_prompt_WZ_stack_5->SetBinError(10,1.8118);
   m3l_prompt_WZ_stack_5->SetEntries(2179);

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
   m3l_total__2->SetBinContent(3,132.4548);
   m3l_total__2->SetBinContent(4,154.5299);
   m3l_total__2->SetBinContent(5,77.08423);
   m3l_total__2->SetBinContent(6,42.23619);
   m3l_total__2->SetBinContent(7,20.38103);
   m3l_total__2->SetBinContent(8,10.91307);
   m3l_total__2->SetBinContent(9,8.084248);
   m3l_total__2->SetBinContent(10,16.93068);
   m3l_total__2->SetBinError(3,9.60546);
   m3l_total__2->SetBinError(4,9.157923);
   m3l_total__2->SetBinError(5,5.08834);
   m3l_total__2->SetBinError(6,2.836833);
   m3l_total__2->SetBinError(7,1.99722);
   m3l_total__2->SetBinError(8,1.450537);
   m3l_total__2->SetBinError(9,1.284115);
   m3l_total__2->SetBinError(10,1.817638);
   m3l_total__2->SetMinimum(0);
   m3l_total__2->SetMaximum(216.0657);
   m3l_total__2->SetEntries(2341);
   m3l_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_total__2->SetFillColor(ci);
   m3l_total__2->SetMarkerStyle(20);
   m3l_total__2->SetMarkerSize(1.1);
   m3l_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_total__2->GetXaxis()->SetLabelFont(42);
   m3l_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_total__2->GetXaxis()->SetLabelSize(0.06);
   m3l_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_total__2->GetXaxis()->SetTitleFont(42);
   m3l_total__2->GetYaxis()->SetTitle("Events");
   m3l_total__2->GetYaxis()->SetLabelFont(42);
   m3l_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_total__2->GetYaxis()->SetLabelSize(0.06);
   m3l_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_total__2->GetYaxis()->SetTitleOffset(1.48);
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
   132.4548,
   154.5299,
   77.08423,
   42.23619,
   20.38103,
   10.91307,
   8.084248,
   16.93068};
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
   16.78142,
   17.56034,
   10.40113,
   4.743824,
   2.042537,
   1.971191,
   1.593906,
   2.471581};
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
   14.47891,
   18.31263,
   10.67139,
   5.179807,
   1.920342,
   1.959874,
   1.54594,
   2.963191};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3l_total_errors_fx3001,m3l_total_errors_fy3001,m3l_total_errors_felx3001,m3l_total_errors_fehx3001,m3l_total_errors_fely3001,m3l_total_errors_fehy3001);
   grae->SetName("m3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_total_errors3001 = new TH1F("Graph_m3l_total_errors3001","Graph",100,60,540);
   Graph_m3l_total_errors3001->SetMinimum(5.841308);
   Graph_m3l_total_errors3001->SetMaximum(189.4778);
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
   
   Double_t m3l_data_graph_fx3002[10] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3l_data_graph_fy3002[10] = {
   0,
   0,
   118,
   149,
   75,
   46,
   34,
   11,
   8,
   15};
   Double_t m3l_data_graph_felx3002[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_data_graph_fely3002[10] = {
   0,
   0,
   10.84759,
   12.1931,
   8.641077,
   6.757713,
   5.80224,
   3.265636,
   2.768432,
   3.829449};
   Double_t m3l_data_graph_fehx3002[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_data_graph_fehy3002[10] = {
   1.841055,
   1.841055,
   11.89374,
   13.23417,
   9.698975,
   7.831652,
   6.888243,
   4.416609,
   3.94522,
   4.958839};
   grae = new TGraphAsymmErrors(10,m3l_data_graph_fx3002,m3l_data_graph_fy3002,m3l_data_graph_felx3002,m3l_data_graph_fehx3002,m3l_data_graph_fely3002,m3l_data_graph_fehy3002);
   grae->SetName("m3l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_data_graph3002 = new TH1F("Graph_m3l_data_graph3002","Graph",100,0,550);
   Graph_m3l_data_graph3002->SetMinimum(0);
   Graph_m3l_data_graph3002->SetMaximum(178.4576);
   Graph_m3l_data_graph3002->SetDirectory(0);
   Graph_m3l_data_graph3002->SetStats(0);
   Graph_m3l_data_graph3002->SetLineStyle(0);
   Graph_m3l_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_data_graph3002->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_total_errors","Total unc.","F");
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
   pad1->Modified();
   m3l_canvas->cd();
  
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
   
   TH1D *m3l_total__3 = new TH1D("m3l_total__3","dummy",10,0,500);
   m3l_total__3->SetBinContent(3,1);
   m3l_total__3->SetBinContent(4,1);
   m3l_total__3->SetBinContent(5,1);
   m3l_total__3->SetBinContent(6,1);
   m3l_total__3->SetBinContent(7,1);
   m3l_total__3->SetBinContent(8,1);
   m3l_total__3->SetBinContent(9,1);
   m3l_total__3->SetBinContent(10,1);
   m3l_total__3->SetMinimum(0.5);
   m3l_total__3->SetMaximum(2);
   m3l_total__3->SetEntries(2351);

   ci = TColor::GetColor("#ffcc00");
   m3l_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_total__3->SetMarkerColor(ci);
   m3l_total__3->SetMarkerSize(1.1);
   m3l_total__3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_total__3->GetXaxis()->SetLabelFont(42);
   m3l_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_total__3->GetXaxis()->SetLabelSize(0.06);
   m3l_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_total__3->GetXaxis()->SetTitleOffset(1);
   m3l_total__3->GetXaxis()->SetTitleFont(42);
   m3l_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_total__3->GetYaxis()->SetDecimals();
   m3l_total__3->GetYaxis()->SetNdivisions(505);
   m3l_total__3->GetYaxis()->SetLabelFont(42);
   m3l_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_total__3->GetYaxis()->SetLabelSize(0.06);
   m3l_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_total__3->GetYaxis()->SetTitleFont(42);
   m3l_total__3->GetZaxis()->SetLabelFont(42);
   m3l_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_total__3->GetZaxis()->SetTitleOffset(1);
   m3l_total__3->GetZaxis()->SetTitleFont(42);
   m3l_total__3->Draw("AXIS");
   
   Double_t m3l_total_errors_fx3003[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3l_total_errors_fy3003[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_total_errors_felx3003[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fely3003[8] = {
   0.1266955,
   0.1136371,
   0.134932,
   0.1123166,
   0.1002176,
   0.1806266,
   0.197162,
   0.1459824};
   Double_t m3l_total_errors_fehx3003[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fehy3003[8] = {
   0.1093121,
   0.1185054,
   0.138438,
   0.1226391,
   0.09422204,
   0.1795895,
   0.1912286,
   0.175019};
   grae = new TGraphAsymmErrors(8,m3l_total_errors_fx3003,m3l_total_errors_fy3003,m3l_total_errors_felx3003,m3l_total_errors_fehx3003,m3l_total_errors_fely3003,m3l_total_errors_fehy3003);
   grae->SetName("m3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(1001);
   grae->Draw("e2");
   
   Double_t m3l_total_errors_fx3004[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3l_total_errors_fy3004[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_total_errors_felx3004[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fely3004[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t m3l_total_errors_fehx3004[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3l_total_errors_fehy3004[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(8,m3l_total_errors_fx3004,m3l_total_errors_fy3004,m3l_total_errors_felx3004,m3l_total_errors_fehx3004,m3l_total_errors_fely3004,m3l_total_errors_fehy3004);
   grae->SetName("m3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *m3l_total__4 = new TH1D("m3l_total__4","dummy",10,0,500);
   m3l_total__4->SetBinContent(3,1);
   m3l_total__4->SetBinContent(4,1);
   m3l_total__4->SetBinContent(5,1);
   m3l_total__4->SetBinContent(6,1);
   m3l_total__4->SetBinContent(7,1);
   m3l_total__4->SetBinContent(8,1);
   m3l_total__4->SetBinContent(9,1);
   m3l_total__4->SetBinContent(10,1);
   m3l_total__4->SetMinimum(0.5);
   m3l_total__4->SetMaximum(2);
   m3l_total__4->SetEntries(2351);

   ci = TColor::GetColor("#ffcc00");
   m3l_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_total__4->SetMarkerColor(ci);
   m3l_total__4->SetMarkerSize(1.1);
   m3l_total__4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_total__4->GetXaxis()->SetLabelFont(42);
   m3l_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_total__4->GetXaxis()->SetLabelSize(0.06);
   m3l_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_total__4->GetXaxis()->SetTitleOffset(1);
   m3l_total__4->GetXaxis()->SetTitleFont(42);
   m3l_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_total__4->GetYaxis()->SetDecimals();
   m3l_total__4->GetYaxis()->SetNdivisions(505);
   m3l_total__4->GetYaxis()->SetLabelFont(42);
   m3l_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_total__4->GetYaxis()->SetLabelSize(0.06);
   m3l_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_total__4->GetYaxis()->SetTitleFont(42);
   m3l_total__4->GetZaxis()->SetLabelFont(42);
   m3l_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_total__4->GetZaxis()->SetTitleOffset(1);
   m3l_total__4->GetZaxis()->SetTitleFont(42);
   m3l_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[10] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t data_div_fy3005[10] = {
   0,
   0,
   0.89087,
   0.9642145,
   0.9729616,
   1.089113,
   1.668218,
   1.007965,
   0.9895787,
   0.8859656};
   Double_t data_div_felx3005[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t data_div_fely3005[10] = {
   0,
   0,
   0.08189657,
   0.07890445,
   0.1120991,
   0.1599982,
   0.2846883,
   0.2992407,
   0.3424477,
   0.226184};
   Double_t data_div_fehx3005[10] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t data_div_fehy3005[10] = {
   0,
   0,
   0.08979475,
   0.08564145,
   0.1258231,
   0.1854251,
   0.3379733,
   0.4047081,
   0.4880132,
   0.2928907};
   grae = new TGraphAsymmErrors(10,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3005 = new TH1F("Graph_data_div3005","Graph",100,0,550);
   Graph_data_div3005->SetMinimum(0);
   Graph_data_div3005->SetMaximum(178.4576);
   Graph_data_div3005->SetDirectory(0);
   Graph_data_div3005->SetStats(0);
   Graph_data_div3005->SetLineStyle(0);
   Graph_data_div3005->SetMarkerStyle(20);
   Graph_data_div3005->GetXaxis()->SetLabelFont(42);
   Graph_data_div3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_div3005->GetXaxis()->SetLabelSize(0.05);
   Graph_data_div3005->GetXaxis()->SetTitleSize(0.06);
   Graph_data_div3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_div3005->GetXaxis()->SetTitleFont(42);
   Graph_data_div3005->GetYaxis()->SetLabelFont(42);
   Graph_data_div3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_div3005->GetYaxis()->SetLabelSize(0.05);
   Graph_data_div3005->GetYaxis()->SetTitleSize(0.06);
   Graph_data_div3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_data_div3005->GetYaxis()->SetTitleFont(42);
   Graph_data_div3005->GetZaxis()->SetLabelFont(42);
   Graph_data_div3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_div3005->GetZaxis()->SetLabelSize(0.05);
   Graph_data_div3005->GetZaxis()->SetTitleSize(0.06);
   Graph_data_div3005->GetZaxis()->SetTitleOffset(1);
   Graph_data_div3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_div3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_canvas->cd();
   m3l_canvas->Modified();
   m3l_canvas->cd();
   m3l_canvas->SetSelected(m3l_canvas);
}
