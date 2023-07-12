void m3lmet_Meas()
{
//=========Macro generated from canvas: m3lmet_Meas_canvas/m3lmet_Meas
//=========  (Wed Jul 12 04:38:42 2023) by ROOT version 6.24/07
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
   pad1->Range(-115.3846,-8.805749,525.641,343.4242);
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
   m3lmet_Meas_total__9->SetBinContent(3,8.571589);
   m3lmet_Meas_total__9->SetBinContent(4,133.4726);
   m3lmet_Meas_total__9->SetBinContent(5,273.2356);
   m3lmet_Meas_total__9->SetBinContent(6,207.8659);
   m3lmet_Meas_total__9->SetBinContent(7,116.8949);
   m3lmet_Meas_total__9->SetBinContent(8,67.3953);
   m3lmet_Meas_total__9->SetBinContent(9,38.83268);
   m3lmet_Meas_total__9->SetBinContent(10,21.71253);
   m3lmet_Meas_total__9->SetBinContent(11,50.38283);
   m3lmet_Meas_total__9->SetBinError(3,5.21952);
   m3lmet_Meas_total__9->SetBinError(4,14.15833);
   m3lmet_Meas_total__9->SetBinError(5,13.76224);
   m3lmet_Meas_total__9->SetBinError(6,10.14204);
   m3lmet_Meas_total__9->SetBinError(7,5.986778);
   m3lmet_Meas_total__9->SetBinError(8,5.074976);
   m3lmet_Meas_total__9->SetBinError(9,2.775822);
   m3lmet_Meas_total__9->SetBinError(10,2.054428);
   m3lmet_Meas_total__9->SetBinError(11,3.210373);
   m3lmet_Meas_total__9->SetMinimum(0);
   m3lmet_Meas_total__9->SetMaximum(322.2904);
   m3lmet_Meas_total__9->SetEntries(4191);
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
   m3lmet_Meas_stack_stack_3->SetMaximum(286.8974);
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
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(4,0.199256);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(5,0.4064792);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(7,0.2060137);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(4,0.199256);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(5,0.2874255);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(7,0.2060137);
   m3lmet_Meas_fakes_VV_stack_1->SetEntries(4);

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
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(3,0.2725714);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(4,3.96952);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(5,9.325091);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(6,8.100464);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(7,6.577581);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(8,3.270603);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(9,2.435321);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(10,0.5674491);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(11,1.151856);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(3,0.1927436);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(4,0.7557034);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(5,1.155814);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(6,1.063754);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(7,0.959692);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(8,0.6821913);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(9,0.5909366);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(10,0.2838511);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(11,0.4513496);
   m3lmet_Meas_fakes_TT_stack_2->SetEntries(258);

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
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(3,7.349754);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(4,50.68775);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(5,39.73724);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(6,18.18469);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(7,3.649153);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(8,3.684952);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(3,5.198655);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(4,13.54949);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(5,11.98211);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(6,8.133007);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(7,3.649153);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(8,3.684952);
   m3lmet_Meas_fakes_DY_stack_3->SetEntries(34);

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
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(4,7.291009);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(5,10.77665);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(6,5.803682);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(7,6.59288);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(8,0.7612348);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(9,1.945424);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(10,0.3829664);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(11,2.391997);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(4,1.672752);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(5,2.03676);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(6,1.498664);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(7,1.599232);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(8,0.5382747);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(9,0.870232);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(10,0.3829664);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(11,0.9768565);
   m3lmet_Meas_prompt_ZZ_stack_4->SetEntries(93);

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
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(3,0.9492634);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(4,71.32504);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(5,212.9901);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(6,175.7771);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(7,99.86931);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(8,59.67851);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(9,34.45194);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(10,20.76212);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(11,46.83897);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(3,0.4245293);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(4,3.668884);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(5,6.34518);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(6,5.773878);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(7,4.35938);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(8,3.379554);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(9,2.568789);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(10,1.998359);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(11,3.024654);
   m3lmet_Meas_prompt_WZ_stack_5->SetEntries(3802);

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
   
   TH1D *m3lmet_Meas_total__10 = new TH1D("m3lmet_Meas_total__10","dummy",10,0,500);
   m3lmet_Meas_total__10->SetBinContent(3,8.571589);
   m3lmet_Meas_total__10->SetBinContent(4,133.4726);
   m3lmet_Meas_total__10->SetBinContent(5,273.2356);
   m3lmet_Meas_total__10->SetBinContent(6,207.8659);
   m3lmet_Meas_total__10->SetBinContent(7,116.8949);
   m3lmet_Meas_total__10->SetBinContent(8,67.3953);
   m3lmet_Meas_total__10->SetBinContent(9,38.83268);
   m3lmet_Meas_total__10->SetBinContent(10,21.71253);
   m3lmet_Meas_total__10->SetBinContent(11,50.38283);
   m3lmet_Meas_total__10->SetBinError(3,5.21952);
   m3lmet_Meas_total__10->SetBinError(4,14.15833);
   m3lmet_Meas_total__10->SetBinError(5,13.76224);
   m3lmet_Meas_total__10->SetBinError(6,10.14204);
   m3lmet_Meas_total__10->SetBinError(7,5.986778);
   m3lmet_Meas_total__10->SetBinError(8,5.074976);
   m3lmet_Meas_total__10->SetBinError(9,2.775822);
   m3lmet_Meas_total__10->SetBinError(10,2.054428);
   m3lmet_Meas_total__10->SetBinError(11,3.210373);
   m3lmet_Meas_total__10->SetMinimum(0);
   m3lmet_Meas_total__10->SetMaximum(322.2904);
   m3lmet_Meas_total__10->SetEntries(4191);
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
   8.571589,
   133.4726,
   273.2356,
   207.8659,
   116.8949,
   67.3953,
   38.83268,
   21.71253};
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
   5.718329,
   27.4281,
   17.01234,
   19.45146,
   8.456404,
   4.784028,
   2.999852,
   1.444965};
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
   12.66526,
   16.9285,
   19.73618,
   13.36925,
   5.495801,
   3.696188,
   1.845555,
   2.475376};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3011,m3lmet_Meas_total_errors_fy3011,m3lmet_Meas_total_errors_felx3011,m3lmet_Meas_total_errors_fehx3011,m3lmet_Meas_total_errors_fely3011,m3lmet_Meas_total_errors_fehy3011);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_total_errors3011 = new TH1F("Graph_m3lmet_Meas_total_errors3011","Graph",100,60,540);
   Graph_m3lmet_Meas_total_errors3011->SetMinimum(2.567933);
   Graph_m3lmet_Meas_total_errors3011->SetMaximum(321.9836);
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
   0,
   15,
   125,
   227,
   201,
   109,
   83,
   35,
   19};
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
   0,
   3.829449,
   11.1656,
   15.05574,
   14.16595,
   10.42448,
   9.092228,
   5.887788,
   4.320299};
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
   1.841055,
   4.958839,
   12.21044,
   16.089,
   15.2013,
   11.4725,
   10.14726,
   6.972554,
   5.435307};
   grae = new TGraphAsymmErrors(10,m3lmet_Meas_data_graph_fx3012,m3lmet_Meas_data_graph_fy3012,m3lmet_Meas_data_graph_felx3012,m3lmet_Meas_data_graph_fehx3012,m3lmet_Meas_data_graph_fely3012,m3lmet_Meas_data_graph_fehy3012);
   grae->SetName("m3lmet_Meas_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_data_graph3012 = new TH1F("Graph_m3lmet_Meas_data_graph3012","Graph",100,0,550);
   Graph_m3lmet_Meas_data_graph3012->SetMinimum(0);
   Graph_m3lmet_Meas_data_graph3012->SetMaximum(267.3979);
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
   entry=leg->AddEntry("m3lmet_Meas_prompt_WZ_stack_5","WZ","F");

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
   m3lmet_Meas_total__11->SetBinContent(11,50.38283);
   m3lmet_Meas_total__11->SetBinError(11,3.210373);
   m3lmet_Meas_total__11->SetMinimum(0.5);
   m3lmet_Meas_total__11->SetMaximum(2);
   m3lmet_Meas_total__11->SetEntries(4201);

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
   0.667126,
   0.2054962,
   0.06226255,
   0.09357696,
   0.07234192,
   0.07098459,
   0.07725069,
   0.06654982};
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
   1.477586,
   0.1268313,
   0.07223136,
   0.06431669,
   0.04701488,
   0.0548434,
   0.04752582,
   0.1140068};
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
   m3lmet_Meas_total__12->SetBinContent(11,50.38283);
   m3lmet_Meas_total__12->SetBinError(11,3.210373);
   m3lmet_Meas_total__12->SetMinimum(0.5);
   m3lmet_Meas_total__12->SetMaximum(2);
   m3lmet_Meas_total__12->SetEntries(4201);

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
   1.749967,
   0.936522,
   0.8307849,
   0.9669696,
   0.9324612,
   1.23154,
   0.9013026,
   0.8750706};
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
   0.4467607,
   0.08365463,
   0.05510167,
   0.06814945,
   0.08917822,
   0.1349089,
   0.1516194,
   0.1989772};
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
   0.5785204,
   0.09148275,
   0.05888327,
   0.07313033,
   0.09814371,
   0.1505634,
   0.1795537,
   0.2503304};
   grae = new TGraphAsymmErrors(10,data_div_fx3015,data_div_fy3015,data_div_felx3015,data_div_fehx3015,data_div_fely3015,data_div_fehy3015);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3015 = new TH1F("Graph_data_div3015","Graph",100,0,550);
   Graph_data_div3015->SetMinimum(0);
   Graph_data_div3015->SetMaximum(267.3979);
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
