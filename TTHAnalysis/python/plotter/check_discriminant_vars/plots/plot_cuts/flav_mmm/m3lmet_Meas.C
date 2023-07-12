void m3lmet_Meas()
{
//=========Macro generated from canvas: m3lmet_Meas_canvas/m3lmet_Meas
//=========  (Wed Jul 12 04:41:31 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_canvas = new TCanvas("m3lmet_Meas_canvas", "m3lmet_Meas",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_canvas->SetHighLightColor(2);
   m3lmet_Meas_canvas->Range(0,0,1,1);
   m3lmet_Meas_canvas->SetFillColor(0);
   m3lmet_Meas_canvas->SetBorderMode(0);
   m3lmet_Meas_canvas->SetBorderSize(2);
   m3lmet_Meas_canvas->SetTickx(1);
   m3lmet_Meas_canvas->SetTicky(1);
   m3lmet_Meas_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_canvas->SetRightMargin(0.04);
   m3lmet_Meas_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-13.08526,525.641,510.325);
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
   
   TH1D *m3lmet_Meas_total__9 = new TH1D("m3lmet_Meas_total__9","dummy",10,0,500);
   m3lmet_Meas_total__9->SetBinContent(3,1.489933);
   m3lmet_Meas_total__9->SetBinContent(4,137.8695);
   m3lmet_Meas_total__9->SetBinContent(5,354.2728);
   m3lmet_Meas_total__9->SetBinContent(6,276.8706);
   m3lmet_Meas_total__9->SetBinContent(7,161.964);
   m3lmet_Meas_total__9->SetBinContent(8,94.23253);
   m3lmet_Meas_total__9->SetBinContent(9,52.49464);
   m3lmet_Meas_total__9->SetBinContent(10,30.47711);
   m3lmet_Meas_total__9->SetBinContent(11,76.40506);
   m3lmet_Meas_total__9->SetBinError(3,0.5331951);
   m3lmet_Meas_total__9->SetBinError(4,9.714989);
   m3lmet_Meas_total__9->SetBinError(5,11.17299);
   m3lmet_Meas_total__9->SetBinError(6,10.47538);
   m3lmet_Meas_total__9->SetBinError(7,8.506183);
   m3lmet_Meas_total__9->SetBinError(8,5.566747);
   m3lmet_Meas_total__9->SetBinError(9,3.306029);
   m3lmet_Meas_total__9->SetBinError(10,2.477038);
   m3lmet_Meas_total__9->SetBinError(11,4.023389);
   m3lmet_Meas_total__9->SetMinimum(0);
   m3lmet_Meas_total__9->SetMaximum(478.9204);
   m3lmet_Meas_total__9->SetEntries(5668);
   m3lmet_Meas_total__9->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__9->SetFillColor(ci);
   m3lmet_Meas_total__9->SetMarkerStyle(20);
   m3lmet_Meas_total__9->SetMarkerSize(1.1);
   m3lmet_Meas_total__9->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__9->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__9->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__9->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_total__9->GetXaxis()->SetLabelSize(0.06);
   m3lmet_Meas_total__9->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__9->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_total__9->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__9->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_total__9->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__9->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__9->GetYaxis()->SetLabelSize(0.06);
   m3lmet_Meas_total__9->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__9->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_total__9->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__9->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__9->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__9->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__9->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__9->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__9->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__9->Draw("HIST");
   
   THStack *m3lmet_Meas_stack = new THStack();
   m3lmet_Meas_stack->SetName("m3lmet_Meas_stack");
   m3lmet_Meas_stack->SetTitle("m3lmet_Meas");
   
   TH1F *m3lmet_Meas_stack_stack_3 = new TH1F("m3lmet_Meas_stack_stack_3","m3lmet_Meas",10,0,500);
   m3lmet_Meas_stack_stack_3->SetMinimum(0);
   m3lmet_Meas_stack_stack_3->SetMaximum(371.9865);
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
   
   
   TH1D *m3lmet_Meas_fakes_TT_stack_1 = new TH1D("m3lmet_Meas_fakes_TT_stack_1","dummy",10,0,500);
   m3lmet_Meas_fakes_TT_stack_1->SetBinContent(3,0.5241102);
   m3lmet_Meas_fakes_TT_stack_1->SetBinContent(4,6.067991);
   m3lmet_Meas_fakes_TT_stack_1->SetBinContent(5,13.27368);
   m3lmet_Meas_fakes_TT_stack_1->SetBinContent(6,11.49243);
   m3lmet_Meas_fakes_TT_stack_1->SetBinContent(7,7.352197);
   m3lmet_Meas_fakes_TT_stack_1->SetBinContent(8,3.742558);
   m3lmet_Meas_fakes_TT_stack_1->SetBinContent(9,2.882175);
   m3lmet_Meas_fakes_TT_stack_1->SetBinContent(10,1.295733);
   m3lmet_Meas_fakes_TT_stack_1->SetBinContent(11,1.722707);
   m3lmet_Meas_fakes_TT_stack_1->SetBinError(3,0.3125805);
   m3lmet_Meas_fakes_TT_stack_1->SetBinError(4,0.9732464);
   m3lmet_Meas_fakes_TT_stack_1->SetBinError(5,1.39876);
   m3lmet_Meas_fakes_TT_stack_1->SetBinError(6,1.296919);
   m3lmet_Meas_fakes_TT_stack_1->SetBinError(7,1.029577);
   m3lmet_Meas_fakes_TT_stack_1->SetBinError(8,0.7612344);
   m3lmet_Meas_fakes_TT_stack_1->SetBinError(9,0.644533);
   m3lmet_Meas_fakes_TT_stack_1->SetBinError(10,0.4319364);
   m3lmet_Meas_fakes_TT_stack_1->SetBinError(11,0.5368679);
   m3lmet_Meas_fakes_TT_stack_1->SetEntries(338);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_fakes_TT_stack_1->SetFillColor(ci);
   m3lmet_Meas_fakes_TT_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_fakes_TT_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_fakes_TT_stack_1->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_fakes_TT_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_fakes_TT_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_TT_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_TT_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_TT_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_TT_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_fakes_TT_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_TT_stack_1->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_fakes_TT_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_TT_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_TT_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_TT_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_TT_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_fakes_TT_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_TT_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_TT_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_TT_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_TT_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_TT_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_fakes_TT_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_fakes_TT_stack_1,"");
   
   TH1D *m3lmet_Meas_fakes_DY_stack_2 = new TH1D("m3lmet_Meas_fakes_DY_stack_2","dummy",10,0,500);
   m3lmet_Meas_fakes_DY_stack_2->SetBinContent(4,18.56848);
   m3lmet_Meas_fakes_DY_stack_2->SetBinContent(5,14.86062);
   m3lmet_Meas_fakes_DY_stack_2->SetBinContent(6,14.97802);
   m3lmet_Meas_fakes_DY_stack_2->SetBinContent(7,11.17204);
   m3lmet_Meas_fakes_DY_stack_2->SetBinContent(8,3.571277);
   m3lmet_Meas_fakes_DY_stack_2->SetBinError(4,8.304797);
   m3lmet_Meas_fakes_DY_stack_2->SetBinError(5,7.430325);
   m3lmet_Meas_fakes_DY_stack_2->SetBinError(6,7.489146);
   m3lmet_Meas_fakes_DY_stack_2->SetBinError(7,6.450416);
   m3lmet_Meas_fakes_DY_stack_2->SetBinError(8,3.571277);
   m3lmet_Meas_fakes_DY_stack_2->SetEntries(17);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_fakes_DY_stack_2->SetFillColor(ci);
   m3lmet_Meas_fakes_DY_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_fakes_DY_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_fakes_DY_stack_2->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_fakes_DY_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_fakes_DY_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_DY_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_DY_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_DY_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_DY_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_fakes_DY_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_DY_stack_2->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_fakes_DY_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_DY_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_DY_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_DY_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_DY_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_fakes_DY_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_fakes_DY_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_fakes_DY_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_fakes_DY_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_fakes_DY_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_fakes_DY_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_fakes_DY_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_fakes_DY_stack_2,"");
   
   TH1D *m3lmet_Meas_prompt_ZZ_stack_3 = new TH1D("m3lmet_Meas_prompt_ZZ_stack_3","dummy",10,0,500);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinContent(4,11.49407);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinContent(5,18.65237);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinContent(6,14.63979);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinContent(7,7.938058);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinContent(8,3.19268);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinContent(9,3.959752);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinContent(10,1.182855);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinContent(11,6.345074);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinError(4,2.134572);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinError(5,2.720936);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinError(6,2.406934);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinError(7,1.775107);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinError(8,1.128808);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinError(9,1.252344);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinError(10,0.6829791);
   m3lmet_Meas_prompt_ZZ_stack_3->SetBinError(11,1.586356);
   m3lmet_Meas_prompt_ZZ_stack_3->SetEntries(170);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_prompt_ZZ_stack_3->SetFillColor(ci);
   m3lmet_Meas_prompt_ZZ_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_prompt_ZZ_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_prompt_ZZ_stack_3->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_prompt_ZZ_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_prompt_ZZ_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_ZZ_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_ZZ_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_ZZ_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_ZZ_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_prompt_ZZ_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_ZZ_stack_3->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_prompt_ZZ_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_ZZ_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_ZZ_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_ZZ_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_ZZ_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_prompt_ZZ_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_ZZ_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_ZZ_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_ZZ_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_ZZ_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_ZZ_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_prompt_ZZ_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_prompt_ZZ_stack_3,"");
   
   TH1D *m3lmet_Meas_prompt_WZ_stack_4 = new TH1D("m3lmet_Meas_prompt_WZ_stack_4","dummy",10,0,500);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinContent(3,0.9658225);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinContent(4,101.7389);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinContent(5,307.4862);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinContent(6,235.7604);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinContent(7,135.5017);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinContent(8,83.72602);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinContent(9,45.65271);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinContent(10,27.99852);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinContent(11,68.33728);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinError(3,0.4319612);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinError(4,4.461811);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinError(5,7.763121);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinError(6,6.794917);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinError(7,5.151335);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinError(8,4.047341);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinError(9,2.990993);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinError(10,2.341514);
   m3lmet_Meas_prompt_WZ_stack_4->SetBinError(11,3.658266);
   m3lmet_Meas_prompt_WZ_stack_4->SetEntries(5143);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_prompt_WZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_prompt_WZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_prompt_WZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_prompt_WZ_stack_4->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_prompt_WZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_prompt_WZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_WZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_WZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_WZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_WZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_prompt_WZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_WZ_stack_4->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_prompt_WZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_WZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_WZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_WZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_WZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_prompt_WZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_prompt_WZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_prompt_WZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_prompt_WZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_prompt_WZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_prompt_WZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_prompt_WZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->Add(m3lmet_Meas_prompt_WZ_stack_4,"");
   m3lmet_Meas_stack->Draw("same hist");
   
   TH1D *m3lmet_Meas_total__10 = new TH1D("m3lmet_Meas_total__10","dummy",10,0,500);
   m3lmet_Meas_total__10->SetBinContent(3,1.489933);
   m3lmet_Meas_total__10->SetBinContent(4,137.8695);
   m3lmet_Meas_total__10->SetBinContent(5,354.2728);
   m3lmet_Meas_total__10->SetBinContent(6,276.8706);
   m3lmet_Meas_total__10->SetBinContent(7,161.964);
   m3lmet_Meas_total__10->SetBinContent(8,94.23253);
   m3lmet_Meas_total__10->SetBinContent(9,52.49464);
   m3lmet_Meas_total__10->SetBinContent(10,30.47711);
   m3lmet_Meas_total__10->SetBinContent(11,76.40506);
   m3lmet_Meas_total__10->SetBinError(3,0.5331951);
   m3lmet_Meas_total__10->SetBinError(4,9.714989);
   m3lmet_Meas_total__10->SetBinError(5,11.17299);
   m3lmet_Meas_total__10->SetBinError(6,10.47538);
   m3lmet_Meas_total__10->SetBinError(7,8.506183);
   m3lmet_Meas_total__10->SetBinError(8,5.566747);
   m3lmet_Meas_total__10->SetBinError(9,3.306029);
   m3lmet_Meas_total__10->SetBinError(10,2.477038);
   m3lmet_Meas_total__10->SetBinError(11,4.023389);
   m3lmet_Meas_total__10->SetMinimum(0);
   m3lmet_Meas_total__10->SetMaximum(478.9204);
   m3lmet_Meas_total__10->SetEntries(5668);
   m3lmet_Meas_total__10->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__10->SetFillColor(ci);
   m3lmet_Meas_total__10->SetMarkerStyle(20);
   m3lmet_Meas_total__10->SetMarkerSize(1.1);
   m3lmet_Meas_total__10->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__10->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__10->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__10->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_total__10->GetXaxis()->SetLabelSize(0.06);
   m3lmet_Meas_total__10->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__10->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_total__10->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__10->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_total__10->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__10->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__10->GetYaxis()->SetLabelSize(0.06);
   m3lmet_Meas_total__10->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__10->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_total__10->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__10->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__10->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__10->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__10->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__10->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__10->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__10->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_total_errors_fx3011[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3011[8] = {
   1.489933,
   137.8695,
   354.2728,
   276.8706,
   161.964,
   94.23253,
   52.49464,
   30.47711};
   Double_t m3lmet_Meas_total_errors_felx3011[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3011[8] = {
   0.3393207,
   10.72,
   13.71177,
   11.79477,
   6.869947,
   12.29677,
   2.583164,
   1.454222};
   Double_t m3lmet_Meas_total_errors_fehx3011[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3011[8] = {
   0.261287,
   8.005002,
   11.41196,
   10.33371,
   7.731652,
   3.371368,
   1.929545,
   0.8741696};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3011,m3lmet_Meas_total_errors_fy3011,m3lmet_Meas_total_errors_felx3011,m3lmet_Meas_total_errors_fehx3011,m3lmet_Meas_total_errors_fely3011,m3lmet_Meas_total_errors_fehy3011);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_total_errors3011 = new TH1F("Graph_m3lmet_Meas_total_errors3011","Graph",100,60,540);
   Graph_m3lmet_Meas_total_errors3011->SetMinimum(1.035551);
   Graph_m3lmet_Meas_total_errors3011->SetMaximum(402.1382);
   Graph_m3lmet_Meas_total_errors3011->SetDirectory(0);
   Graph_m3lmet_Meas_total_errors3011->SetStats(0);
   Graph_m3lmet_Meas_total_errors3011->SetLineStyle(0);
   Graph_m3lmet_Meas_total_errors3011->SetMarkerStyle(20);
   Graph_m3lmet_Meas_total_errors3011->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3011->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3011->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_total_errors3011->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_total_errors3011->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3011->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3011->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3011->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_total_errors3011->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_total_errors3011->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3011->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3011->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3011->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_total_errors3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_total_errors3011);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_data_graph_fx3012[10] = {
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
   Double_t m3lmet_Meas_data_graph_fy3012[10] = {
   0,
   1,
   4,
   158,
   343,
   256,
   160,
   100,
   53,
   41};
   Double_t m3lmet_Meas_data_graph_felx3012[10] = {
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
   Double_t m3lmet_Meas_data_graph_fely3012[10] = {
   0,
   0.8272525,
   1.914367,
   12.55675,
   18.51163,
   15.98989,
   12.63615,
   9.983457,
   7.257208,
   6.377022};
   Double_t m3lmet_Meas_data_graph_fehx3012[10] = {
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
   Double_t m3lmet_Meas_data_graph_fehy3012[10] = {
   1.841055,
   2.29957,
   3.162815,
   13.59664,
   19.53869,
   17.02121,
   13.67578,
   11.03359,
   8.326089,
   7.45534};
   grae = new TGraphAsymmErrors(10,m3lmet_Meas_data_graph_fx3012,m3lmet_Meas_data_graph_fy3012,m3lmet_Meas_data_graph_felx3012,m3lmet_Meas_data_graph_fehx3012,m3lmet_Meas_data_graph_fely3012,m3lmet_Meas_data_graph_fehy3012);
   grae->SetName("m3lmet_Meas_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_data_graph3012 = new TH1F("Graph_m3lmet_Meas_data_graph3012","Graph",100,0,550);
   Graph_m3lmet_Meas_data_graph3012->SetMinimum(0);
   Graph_m3lmet_Meas_data_graph3012->SetMaximum(398.7926);
   Graph_m3lmet_Meas_data_graph3012->SetDirectory(0);
   Graph_m3lmet_Meas_data_graph3012->SetStats(0);
   Graph_m3lmet_Meas_data_graph3012->SetLineStyle(0);
   Graph_m3lmet_Meas_data_graph3012->SetMarkerStyle(20);
   Graph_m3lmet_Meas_data_graph3012->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_data_graph3012->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_data_graph3012->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3012->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_data_graph3012->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_data_graph3012->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3012->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_data_graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_data_graph3012);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3lmet_Meas_prompt_WZ_stack_4","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_prompt_ZZ_stack_3","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_fakes_DY_stack_2","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_fakes_TT_stack_1","Fakes TT","F");

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
   m3lmet_Meas_canvas->cd();
  
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
   
   TH1D *m3lmet_Meas_total__11 = new TH1D("m3lmet_Meas_total__11","dummy",10,0,500);
   m3lmet_Meas_total__11->SetBinContent(3,1);
   m3lmet_Meas_total__11->SetBinContent(4,1);
   m3lmet_Meas_total__11->SetBinContent(5,1);
   m3lmet_Meas_total__11->SetBinContent(6,1);
   m3lmet_Meas_total__11->SetBinContent(7,1);
   m3lmet_Meas_total__11->SetBinContent(8,1);
   m3lmet_Meas_total__11->SetBinContent(9,1);
   m3lmet_Meas_total__11->SetBinContent(10,1);
   m3lmet_Meas_total__11->SetBinContent(11,76.40506);
   m3lmet_Meas_total__11->SetBinError(11,4.023389);
   m3lmet_Meas_total__11->SetMinimum(0.5);
   m3lmet_Meas_total__11->SetMaximum(2);
   m3lmet_Meas_total__11->SetEntries(5678);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__11->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_total__11->SetMarkerColor(ci);
   m3lmet_Meas_total__11->SetMarkerSize(1.1);
   m3lmet_Meas_total__11->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__11->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__11->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__11->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_total__11->GetXaxis()->SetLabelSize(0.06);
   m3lmet_Meas_total__11->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__11->GetXaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__11->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__11->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_total__11->GetYaxis()->SetDecimals();
   m3lmet_Meas_total__11->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_total__11->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__11->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_total__11->GetYaxis()->SetLabelSize(0.06);
   m3lmet_Meas_total__11->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__11->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_total__11->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__11->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__11->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__11->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__11->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__11->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__11->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__11->Draw("AXIS");
   
   Double_t m3lmet_Meas_total_errors_fx3013[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3013[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_total_errors_felx3013[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3013[8] = {
   0.2277423,
   0.07775467,
   0.038704,
   0.0426003,
   0.04241651,
   0.1304939,
   0.04920815,
   0.04771523};
   Double_t m3lmet_Meas_total_errors_fehx3013[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3013[8] = {
   0.1753684,
   0.05806218,
   0.03221236,
   0.03732323,
   0.04773685,
   0.03577711,
   0.03675699,
   0.02868283};
   grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3013,m3lmet_Meas_total_errors_fy3013,m3lmet_Meas_total_errors_felx3013,m3lmet_Meas_total_errors_fehx3013,m3lmet_Meas_total_errors_fely3013,m3lmet_Meas_total_errors_fehy3013);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(1001);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_total_errors_fx3014[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3014[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_total_errors_felx3014[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3014[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t m3lmet_Meas_total_errors_fehx3014[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3014[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3014,m3lmet_Meas_total_errors_fy3014,m3lmet_Meas_total_errors_felx3014,m3lmet_Meas_total_errors_fehx3014,m3lmet_Meas_total_errors_fely3014,m3lmet_Meas_total_errors_fehy3014);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *m3lmet_Meas_total__12 = new TH1D("m3lmet_Meas_total__12","dummy",10,0,500);
   m3lmet_Meas_total__12->SetBinContent(3,1);
   m3lmet_Meas_total__12->SetBinContent(4,1);
   m3lmet_Meas_total__12->SetBinContent(5,1);
   m3lmet_Meas_total__12->SetBinContent(6,1);
   m3lmet_Meas_total__12->SetBinContent(7,1);
   m3lmet_Meas_total__12->SetBinContent(8,1);
   m3lmet_Meas_total__12->SetBinContent(9,1);
   m3lmet_Meas_total__12->SetBinContent(10,1);
   m3lmet_Meas_total__12->SetBinContent(11,76.40506);
   m3lmet_Meas_total__12->SetBinError(11,4.023389);
   m3lmet_Meas_total__12->SetMinimum(0.5);
   m3lmet_Meas_total__12->SetMaximum(2);
   m3lmet_Meas_total__12->SetEntries(5678);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__12->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_total__12->SetMarkerColor(ci);
   m3lmet_Meas_total__12->SetMarkerSize(1.1);
   m3lmet_Meas_total__12->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__12->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__12->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__12->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_total__12->GetXaxis()->SetLabelSize(0.06);
   m3lmet_Meas_total__12->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__12->GetXaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__12->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__12->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_total__12->GetYaxis()->SetDecimals();
   m3lmet_Meas_total__12->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_total__12->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__12->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_total__12->GetYaxis()->SetLabelSize(0.06);
   m3lmet_Meas_total__12->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__12->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_total__12->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__12->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__12->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__12->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__12->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__12->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__12->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__12->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3015[10] = {
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
   Double_t data_div_fy3015[10] = {
   0,
   0,
   2.684685,
   1.146011,
   0.9681804,
   0.9246195,
   0.9878738,
   1.061205,
   1.009627,
   1.345272};
   Double_t data_div_felx3015[10] = {
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
   Double_t data_div_fely3015[10] = {
   0,
   0,
   1.284868,
   0.09107712,
   0.05225246,
   0.05775219,
   0.07801824,
   0.1059449,
   0.1382467,
   0.2092397};
   Double_t data_div_fehx3015[10] = {
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
   Double_t data_div_fehy3015[10] = {
   0,
   0,
   2.122791,
   0.09861962,
   0.05515153,
   0.06147713,
   0.08443713,
   0.117089,
   0.1586084,
   0.244621};
   grae = new TGraphAsymmErrors(10,data_div_fx3015,data_div_fy3015,data_div_felx3015,data_div_fehx3015,data_div_fely3015,data_div_fehy3015);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3015 = new TH1F("Graph_data_div3015","Graph",100,0,550);
   Graph_data_div3015->SetMinimum(0);
   Graph_data_div3015->SetMaximum(398.7926);
   Graph_data_div3015->SetDirectory(0);
   Graph_data_div3015->SetStats(0);
   Graph_data_div3015->SetLineStyle(0);
   Graph_data_div3015->SetMarkerStyle(20);
   Graph_data_div3015->GetXaxis()->SetLabelFont(42);
   Graph_data_div3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_div3015->GetXaxis()->SetLabelSize(0.05);
   Graph_data_div3015->GetXaxis()->SetTitleSize(0.06);
   Graph_data_div3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_div3015->GetXaxis()->SetTitleFont(42);
   Graph_data_div3015->GetYaxis()->SetLabelFont(42);
   Graph_data_div3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_div3015->GetYaxis()->SetLabelSize(0.05);
   Graph_data_div3015->GetYaxis()->SetTitleSize(0.06);
   Graph_data_div3015->GetYaxis()->SetTitleOffset(1.35);
   Graph_data_div3015->GetYaxis()->SetTitleFont(42);
   Graph_data_div3015->GetZaxis()->SetLabelFont(42);
   Graph_data_div3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_div3015->GetZaxis()->SetLabelSize(0.05);
   Graph_data_div3015->GetZaxis()->SetTitleSize(0.06);
   Graph_data_div3015->GetZaxis()->SetTitleOffset(1);
   Graph_data_div3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_div3015);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3lmet_Meas_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3lmet_Meas_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3lmet_Meas_canvas->cd();
   m3lmet_Meas_canvas->Modified();
   m3lmet_Meas_canvas->cd();
   m3lmet_Meas_canvas->SetSelected(m3lmet_Meas_canvas);
}
