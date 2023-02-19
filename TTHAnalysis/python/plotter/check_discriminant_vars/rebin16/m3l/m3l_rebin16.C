void m3l_rebin16()
{
//=========Macro generated from canvas: m3l_rebin16_canvas/m3l_rebin16
//=========  (Thu Dec  8 14:34:18 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin16_canvas = new TCanvas("m3l_rebin16_canvas", "m3l_rebin16",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin16_canvas->SetHighLightColor(2);
   m3l_rebin16_canvas->Range(0,0,1,1);
   m3l_rebin16_canvas->SetFillColor(0);
   m3l_rebin16_canvas->SetBorderMode(0);
   m3l_rebin16_canvas->SetBorderSize(2);
   m3l_rebin16_canvas->SetTickx(1);
   m3l_rebin16_canvas->SetTicky(1);
   m3l_rebin16_canvas->SetLeftMargin(0.18);
   m3l_rebin16_canvas->SetRightMargin(0.04);
   m3l_rebin16_canvas->SetBottomMargin(0.13);
   m3l_rebin16_canvas->SetFrameFillStyle(0);
   m3l_rebin16_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-29.0598,525.641,1133.332);
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
   Double_t xAxis1[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1D *m3l_rebin16_total__1 = new TH1D("m3l_rebin16_total__1","dummy",16, xAxis1);
   m3l_rebin16_total__1->SetBinContent(4,1.786016);
   m3l_rebin16_total__1->SetBinContent(5,5.675047);
   m3l_rebin16_total__1->SetBinContent(6,0.7661244);
   m3l_rebin16_total__1->SetBinContent(7,11.15651);
   m3l_rebin16_total__1->SetBinContent(8,19.85779);
   m3l_rebin16_total__1->SetBinContent(9,30.583);
   m3l_rebin16_total__1->SetBinContent(10,43.44674);
   m3l_rebin16_total__1->SetBinContent(11,63.54731);
   m3l_rebin16_total__1->SetBinContent(12,123.3111);
   m3l_rebin16_total__1->SetBinContent(13,171.3433);
   m3l_rebin16_total__1->SetBinContent(14,181.1327);
   m3l_rebin16_total__1->SetBinContent(15,311.5446);
   m3l_rebin16_total__1->SetBinContent(16,531.7943);
   m3l_rebin16_total__1->SetBinError(4,1.720807);
   m3l_rebin16_total__1->SetBinError(5,2.986006);
   m3l_rebin16_total__1->SetBinError(6,0.2571164);
   m3l_rebin16_total__1->SetBinError(7,3.880936);
   m3l_rebin16_total__1->SetBinError(8,4.001732);
   m3l_rebin16_total__1->SetBinError(9,3.758128);
   m3l_rebin16_total__1->SetBinError(10,3.545637);
   m3l_rebin16_total__1->SetBinError(11,5.072842);
   m3l_rebin16_total__1->SetBinError(12,5.342488);
   m3l_rebin16_total__1->SetBinError(13,6.422118);
   m3l_rebin16_total__1->SetBinError(14,6.05685);
   m3l_rebin16_total__1->SetBinError(15,7.371754);
   m3l_rebin16_total__1->SetBinError(16,8.66628);
   m3l_rebin16_total__1->SetMinimum(0);
   m3l_rebin16_total__1->SetMaximum(1063.589);
   m3l_rebin16_total__1->SetEntries(15152);
   m3l_rebin16_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin16_total__1->SetFillColor(ci);
   m3l_rebin16_total__1->SetMarkerStyle(20);
   m3l_rebin16_total__1->SetMarkerSize(1.1);
   m3l_rebin16_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin16_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin16_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin16_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin16_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin16_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin16_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin16_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin16_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin16_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin16_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin16_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_total__1->Draw("HIST");
   
   THStack *m3l_rebin16_stack = new THStack();
   m3l_rebin16_stack->SetName("m3l_rebin16_stack");
   m3l_rebin16_stack->SetTitle("m3l_rebin16");
   Double_t xAxis2[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1F *m3l_rebin16_stack_stack_1 = new TH1F("m3l_rebin16_stack_stack_1","m3l_rebin16",16, xAxis2);
   m3l_rebin16_stack_stack_1->SetMinimum(0);
   m3l_rebin16_stack_stack_1->SetMaximum(558.384);
   m3l_rebin16_stack_stack_1->SetDirectory(0);
   m3l_rebin16_stack_stack_1->SetStats(0);
   m3l_rebin16_stack_stack_1->SetLineStyle(0);
   m3l_rebin16_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin16_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin16_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin16_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin16_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin16_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin16_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin16_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin16_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin16_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_stack->SetHistogram(m3l_rebin16_stack_stack_1);
   
   Double_t xAxis3[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1D *m3l_rebin16_fakes_VV_stack_1 = new TH1D("m3l_rebin16_fakes_VV_stack_1","dummy",16, xAxis3);
   m3l_rebin16_fakes_VV_stack_1->SetBinContent(12,0.09719337);
   m3l_rebin16_fakes_VV_stack_1->SetBinContent(13,0.1943867);
   m3l_rebin16_fakes_VV_stack_1->SetBinContent(16,0.3887735);
   m3l_rebin16_fakes_VV_stack_1->SetBinError(12,0.09719337);
   m3l_rebin16_fakes_VV_stack_1->SetBinError(13,0.1374522);
   m3l_rebin16_fakes_VV_stack_1->SetBinError(16,0.1943867);
   m3l_rebin16_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin16_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin16_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin16_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin16_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin16_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin16_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin16_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin16_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin16_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin16_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin16_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin16_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin16_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin16_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin16_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_stack->Add(m3l_rebin16_fakes_VV_stack_1,"");
   Double_t xAxis4[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1D *m3l_rebin16_fakes_TT_stack_2 = new TH1D("m3l_rebin16_fakes_TT_stack_2","dummy",16, xAxis4);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(4,0.06649422);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(5,0.2451369);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(6,0.1329884);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(7,0.1994827);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(8,0.6441022);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(9,0.9765733);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(10,1.886652);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(11,2.061321);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(12,4.25563);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(13,5.519021);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(14,5.98448);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(15,12.23494);
   m3l_rebin16_fakes_TT_stack_2->SetBinContent(16,20.83751);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(4,0.06649422);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(5,0.1463565);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(6,0.09403703);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(7,0.1151714);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(8,0.2189729);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(9,0.2646819);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(10,0.3683634);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(11,0.3702242);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(12,0.5319538);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(13,0.6057912);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(14,0.6446854);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(15,0.9019715);
   m3l_rebin16_fakes_TT_stack_2->SetBinError(16,1.19262);
   m3l_rebin16_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin16_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin16_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin16_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin16_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin16_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin16_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin16_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin16_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin16_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin16_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin16_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin16_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin16_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin16_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin16_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_stack->Add(m3l_rebin16_fakes_TT_stack_2,"");
   Double_t xAxis5[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1D *m3l_rebin16_fakes_DY_stack_3 = new TH1D("m3l_rebin16_fakes_DY_stack_3","dummy",16, xAxis5);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(4,1.719522);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(5,5.158566);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(7,8.597611);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(8,8.597611);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(9,6.878088);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(10,5.158566);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(11,12.03665);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(12,10.31713);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(13,15.4757);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(14,12.03665);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(15,15.4757);
   m3l_rebin16_fakes_DY_stack_3->SetBinContent(16,15.4757);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(4,1.719522);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(5,2.9783);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(7,3.844968);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(8,3.844968);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(9,3.439044);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(10,2.9783);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(11,4.549428);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(12,4.211952);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(13,5.158566);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(14,4.549428);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(15,5.158566);
   m3l_rebin16_fakes_DY_stack_3->SetBinError(16,5.158566);
   m3l_rebin16_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin16_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin16_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin16_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin16_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin16_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin16_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin16_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin16_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin16_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin16_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin16_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin16_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin16_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin16_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin16_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_stack->Add(m3l_rebin16_fakes_DY_stack_3,"");
   Double_t xAxis6[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1D *m3l_rebin16_prompt_ZZ_stack_4 = new TH1D("m3l_rebin16_prompt_ZZ_stack_4","dummy",16, xAxis6);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(7,0.5504562);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(8,2.38531);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(9,1.834854);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(10,2.935767);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(11,4.587135);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(12,7.339416);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(13,7.155931);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(14,8.8073);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(15,13.39443);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinContent(16,24.22007);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(7,0.3178061);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(8,0.6615661);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(9,0.5802318);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(10,0.7339416);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(11,0.917427);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(12,1.160464);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(13,1.145866);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(14,1.271224);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(15,1.5677);
   m3l_rebin16_prompt_ZZ_stack_4->SetBinError(16,2.108087);
   m3l_rebin16_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin16_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin16_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin16_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin16_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin16_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin16_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin16_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin16_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin16_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin16_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin16_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin16_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin16_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin16_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin16_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_stack->Add(m3l_rebin16_prompt_ZZ_stack_4,"");
   Double_t xAxis7[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1D *m3l_rebin16_prompt_WZ_stack_5 = new TH1D("m3l_rebin16_prompt_WZ_stack_5","dummy",16, xAxis7);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(5,0.271344);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(6,0.6331359);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(7,1.80896);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(8,8.230767);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(9,20.89349);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(10,33.46576);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(11,44.8622);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(12,101.3017);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(13,142.9983);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(14,154.3043);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(15,270.4395);
   m3l_rebin16_prompt_WZ_stack_5->SetBinContent(16,470.8722);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(5,0.1566605);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(6,0.2393029);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(7,0.4044957);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(8,0.8628188);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(9,1.37469);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(10,1.739802);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(11,2.014372);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(12,3.026969);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(13,3.596374);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(14,3.735841);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(15,4.945777);
   m3l_rebin16_prompt_WZ_stack_5->SetBinError(16,6.526059);
   m3l_rebin16_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin16_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin16_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin16_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin16_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin16_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin16_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin16_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin16_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin16_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin16_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin16_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin16_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin16_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin16_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin16_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_stack->Add(m3l_rebin16_prompt_WZ_stack_5,"");
   m3l_rebin16_stack->Draw("same hist");
   Double_t xAxis8[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1D *m3l_rebin16_total__2 = new TH1D("m3l_rebin16_total__2","dummy",16, xAxis8);
   m3l_rebin16_total__2->SetBinContent(4,1.786016);
   m3l_rebin16_total__2->SetBinContent(5,5.675047);
   m3l_rebin16_total__2->SetBinContent(6,0.7661244);
   m3l_rebin16_total__2->SetBinContent(7,11.15651);
   m3l_rebin16_total__2->SetBinContent(8,19.85779);
   m3l_rebin16_total__2->SetBinContent(9,30.583);
   m3l_rebin16_total__2->SetBinContent(10,43.44674);
   m3l_rebin16_total__2->SetBinContent(11,63.54731);
   m3l_rebin16_total__2->SetBinContent(12,123.3111);
   m3l_rebin16_total__2->SetBinContent(13,171.3433);
   m3l_rebin16_total__2->SetBinContent(14,181.1327);
   m3l_rebin16_total__2->SetBinContent(15,311.5446);
   m3l_rebin16_total__2->SetBinContent(16,531.7943);
   m3l_rebin16_total__2->SetBinError(4,1.720807);
   m3l_rebin16_total__2->SetBinError(5,2.986006);
   m3l_rebin16_total__2->SetBinError(6,0.2571164);
   m3l_rebin16_total__2->SetBinError(7,3.880936);
   m3l_rebin16_total__2->SetBinError(8,4.001732);
   m3l_rebin16_total__2->SetBinError(9,3.758128);
   m3l_rebin16_total__2->SetBinError(10,3.545637);
   m3l_rebin16_total__2->SetBinError(11,5.072842);
   m3l_rebin16_total__2->SetBinError(12,5.342488);
   m3l_rebin16_total__2->SetBinError(13,6.422118);
   m3l_rebin16_total__2->SetBinError(14,6.05685);
   m3l_rebin16_total__2->SetBinError(15,7.371754);
   m3l_rebin16_total__2->SetBinError(16,8.66628);
   m3l_rebin16_total__2->SetMinimum(0);
   m3l_rebin16_total__2->SetMaximum(1063.589);
   m3l_rebin16_total__2->SetEntries(15152);
   m3l_rebin16_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin16_total__2->SetFillColor(ci);
   m3l_rebin16_total__2->SetMarkerStyle(20);
   m3l_rebin16_total__2->SetMarkerSize(1.1);
   m3l_rebin16_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin16_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin16_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin16_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin16_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin16_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin16_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin16_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin16_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin16_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin16_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin16_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin16_total_errors_fx3001[13] = {
   127.3468,
   135.1601,
   142.9735,
   151.4925,
   161.1864,
   171.3493,
   181.5123,
   191.6752,
   204.786,
   222.2263,
   241.3685,
   273.635,
   398.0851};
   Double_t m3l_rebin16_total_errors_fy3001[13] = {
   1.786016,
   5.675047,
   0.7661244,
   11.15651,
   19.85779,
   30.583,
   43.44674,
   63.54731,
   123.3111,
   171.3433,
   181.1327,
   311.5446,
   531.7943};
   Double_t m3l_rebin16_total_errors_felx3001[13] = {
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t m3l_rebin16_total_errors_fely3001[13] = {
   1.720807,
   2.986006,
   0.2571164,
   3.880936,
   4.001732,
   3.758128,
   3.545637,
   5.072842,
   5.342488,
   6.422118,
   6.05685,
   7.371754,
   8.66628};
   Double_t m3l_rebin16_total_errors_fehx3001[13] = {
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t m3l_rebin16_total_errors_fehy3001[13] = {
   1.720807,
   2.986006,
   0.2571164,
   3.880936,
   4.001732,
   3.758128,
   3.545637,
   5.072842,
   5.342488,
   6.422118,
   6.05685,
   7.371754,
   8.66628};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,m3l_rebin16_total_errors_fx3001,m3l_rebin16_total_errors_fy3001,m3l_rebin16_total_errors_felx3001,m3l_rebin16_total_errors_fehx3001,m3l_rebin16_total_errors_fely3001,m3l_rebin16_total_errors_fehy3001);
   grae->SetName("m3l_rebin16_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin16_total_errors3001 = new TH1F("Graph_m3l_rebin16_total_errors3001","Graph",100,85.78409,537.656);
   Graph_m3l_rebin16_total_errors3001->SetMinimum(0.05868813);
   Graph_m3l_rebin16_total_errors3001->SetMaximum(594.5001);
   Graph_m3l_rebin16_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin16_total_errors3001->SetStats(0);
   Graph_m3l_rebin16_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin16_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin16_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin16_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin16_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin16_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin16_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin16_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin16_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin16_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin16_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin16_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin16_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin16_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin16_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin16_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin16_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin16_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin16_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin16_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin16_data_graph_fx3002[16] = {
   53.90668,
   111.72,
   119.5334,
   127.3468,
   135.1601,
   142.9735,
   151.4925,
   161.1864,
   171.3493,
   181.5123,
   191.6752,
   204.786,
   222.2263,
   241.3685,
   273.635,
   398.0851};
   Double_t m3l_rebin16_data_graph_fy3002[16] = {
   0,
   1,
   0,
   5,
   1,
   3,
   5,
   15,
   35,
   52,
   69,
   139,
   156,
   170,
   318,
   544};
   Double_t m3l_rebin16_data_graph_felx3002[16] = {
   53.90668,
   3.906677,
   3.906681,
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t m3l_rebin16_data_graph_fely3002[16] = {
   0,
   0.8272525,
   0,
   2.159724,
   0.8272525,
   1.632727,
   2.159724,
   3.829449,
   5.887788,
   7.187977,
   8.28661,
   11.77587,
   12.47686,
   13.02584,
   17.82356,
   23.31714};
   Double_t m3l_rebin16_data_graph_fehx3002[16] = {
   53.90668,
   3.906677,
   3.906681,
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t m3l_rebin16_data_graph_fehy3002[16] = {
   1.841055,
   2.29957,
   1.841055,
   3.382539,
   2.29957,
   2.918242,
   3.382539,
   4.958839,
   6.972554,
   8.257518,
   9.346974,
   12.8184,
   13.51699,
   14.06429,
   18.85166,
   24.33863};
   grae = new TGraphAsymmErrors(16,m3l_rebin16_data_graph_fx3002,m3l_rebin16_data_graph_fy3002,m3l_rebin16_data_graph_felx3002,m3l_rebin16_data_graph_fehx3002,m3l_rebin16_data_graph_fely3002,m3l_rebin16_data_graph_fehy3002);
   grae->SetName("m3l_rebin16_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin16_data_graph3002 = new TH1F("Graph_m3l_rebin16_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin16_data_graph3002->SetMinimum(0);
   Graph_m3l_rebin16_data_graph3002->SetMaximum(625.1725);
   Graph_m3l_rebin16_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin16_data_graph3002->SetStats(0);
   Graph_m3l_rebin16_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin16_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin16_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin16_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin16_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin16_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin16_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin16_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin16_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin16_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin16_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin16_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin16_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin16_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin16_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin16_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin16_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin16_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin16_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin16_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin16_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin16_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin16_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin16_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin16_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin16_total_errors","Total unc.","F");
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
   m3l_rebin16_canvas->cd();
  
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
   Double_t xAxis9[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1D *m3l_rebin16_total__3 = new TH1D("m3l_rebin16_total__3","dummy",16, xAxis9);
   m3l_rebin16_total__3->SetBinContent(4,1);
   m3l_rebin16_total__3->SetBinContent(5,1);
   m3l_rebin16_total__3->SetBinContent(6,1);
   m3l_rebin16_total__3->SetBinContent(7,1);
   m3l_rebin16_total__3->SetBinContent(8,1);
   m3l_rebin16_total__3->SetBinContent(9,1);
   m3l_rebin16_total__3->SetBinContent(10,1);
   m3l_rebin16_total__3->SetBinContent(11,1);
   m3l_rebin16_total__3->SetBinContent(12,1);
   m3l_rebin16_total__3->SetBinContent(13,1);
   m3l_rebin16_total__3->SetBinContent(14,1);
   m3l_rebin16_total__3->SetBinContent(15,1);
   m3l_rebin16_total__3->SetBinContent(16,1);
   m3l_rebin16_total__3->SetMinimum(0.5);
   m3l_rebin16_total__3->SetMaximum(2);
   m3l_rebin16_total__3->SetEntries(15168);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin16_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin16_total__3->SetMarkerColor(ci);
   m3l_rebin16_total__3->SetMarkerSize(1.1);
   m3l_rebin16_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin16_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin16_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin16_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin16_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin16_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin16_total__3->GetYaxis()->SetDecimals();
   m3l_rebin16_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin16_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin16_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin16_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin16_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin16_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_total__3->Draw("AXIS");
   
   Double_t m3l_rebin16_total_errors_fx3003[13] = {
   127.3468,
   135.1601,
   142.9735,
   151.4925,
   161.1864,
   171.3493,
   181.5123,
   191.6752,
   204.786,
   222.2263,
   241.3685,
   273.635,
   398.0851};
   Double_t m3l_rebin16_total_errors_fy3003[13] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin16_total_errors_felx3003[13] = {
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t m3l_rebin16_total_errors_fely3003[13] = {
   0.9634891,
   0.5261641,
   0.3356066,
   0.3478629,
   0.2015195,
   0.1228829,
   0.08160881,
   0.0798278,
   0.04332527,
   0.037481,
   0.03343874,
   0.02366196,
   0.0162963};
   Double_t m3l_rebin16_total_errors_fehx3003[13] = {
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t m3l_rebin16_total_errors_fehy3003[13] = {
   0.9634891,
   0.5261641,
   0.3356066,
   0.3478629,
   0.2015195,
   0.1228829,
   0.08160881,
   0.0798278,
   0.04332527,
   0.037481,
   0.03343874,
   0.02366196,
   0.0162963};
   grae = new TGraphAsymmErrors(13,m3l_rebin16_total_errors_fx3003,m3l_rebin16_total_errors_fy3003,m3l_rebin16_total_errors_felx3003,m3l_rebin16_total_errors_fehx3003,m3l_rebin16_total_errors_fely3003,m3l_rebin16_total_errors_fehy3003);
   grae->SetName("m3l_rebin16_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin16_total_errors_fx3004[13] = {
   127.3468,
   135.1601,
   142.9735,
   151.4925,
   161.1864,
   171.3493,
   181.5123,
   191.6752,
   204.786,
   222.2263,
   241.3685,
   273.635,
   398.0851};
   Double_t m3l_rebin16_total_errors_fy3004[13] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin16_total_errors_felx3004[13] = {
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t m3l_rebin16_total_errors_fely3004[13] = {
   0.9634891,
   0.5261641,
   0.3356066,
   0.3478629,
   0.2015195,
   0.1228829,
   0.08160881,
   0.0798278,
   0.04332527,
   0.037481,
   0.03343874,
   0.02366196,
   0.0162963};
   Double_t m3l_rebin16_total_errors_fehx3004[13] = {
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t m3l_rebin16_total_errors_fehy3004[13] = {
   0.9634891,
   0.5261641,
   0.3356066,
   0.3478629,
   0.2015195,
   0.1228829,
   0.08160881,
   0.0798278,
   0.04332527,
   0.037481,
   0.03343874,
   0.02366196,
   0.0162963};
   grae = new TGraphAsymmErrors(13,m3l_rebin16_total_errors_fx3004,m3l_rebin16_total_errors_fy3004,m3l_rebin16_total_errors_felx3004,m3l_rebin16_total_errors_fehx3004,m3l_rebin16_total_errors_fely3004,m3l_rebin16_total_errors_fehy3004);
   grae->SetName("m3l_rebin16_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[17] = {0, 107.8134, 115.6267, 123.4401, 131.2534, 139.0668, 146.8802, 156.1049, 166.2679, 176.4308, 186.5938, 196.7567, 212.8153, 231.6373, 251.0998, 296.1703, 500}; 
   
   TH1D *m3l_rebin16_total__4 = new TH1D("m3l_rebin16_total__4","dummy",16, xAxis10);
   m3l_rebin16_total__4->SetBinContent(4,1);
   m3l_rebin16_total__4->SetBinContent(5,1);
   m3l_rebin16_total__4->SetBinContent(6,1);
   m3l_rebin16_total__4->SetBinContent(7,1);
   m3l_rebin16_total__4->SetBinContent(8,1);
   m3l_rebin16_total__4->SetBinContent(9,1);
   m3l_rebin16_total__4->SetBinContent(10,1);
   m3l_rebin16_total__4->SetBinContent(11,1);
   m3l_rebin16_total__4->SetBinContent(12,1);
   m3l_rebin16_total__4->SetBinContent(13,1);
   m3l_rebin16_total__4->SetBinContent(14,1);
   m3l_rebin16_total__4->SetBinContent(15,1);
   m3l_rebin16_total__4->SetBinContent(16,1);
   m3l_rebin16_total__4->SetMinimum(0.5);
   m3l_rebin16_total__4->SetMaximum(2);
   m3l_rebin16_total__4->SetEntries(15168);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin16_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin16_total__4->SetMarkerColor(ci);
   m3l_rebin16_total__4->SetMarkerSize(1.1);
   m3l_rebin16_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin16_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin16_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin16_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin16_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin16_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin16_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin16_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin16_total__4->GetYaxis()->SetDecimals();
   m3l_rebin16_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin16_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin16_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin16_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin16_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin16_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin16_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin16_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin16_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin16_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin16_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin16_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin16_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[16] = {
   53.90668,
   111.72,
   119.5334,
   127.3468,
   135.1601,
   142.9735,
   151.4925,
   161.1864,
   171.3493,
   181.5123,
   191.6752,
   204.786,
   222.2263,
   241.3685,
   273.635,
   398.0851};
   Double_t data_div_fy3005[16] = {
   0,
   0,
   0,
   2.799526,
   0.17621,
   3.915813,
   0.4481689,
   0.7553711,
   1.144427,
   1.196868,
   1.085805,
   1.12723,
   0.9104528,
   0.9385384,
   1.020721,
   1.022952};
   Double_t data_div_felx3005[16] = {
   53.90668,
   3.906677,
   3.906681,
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t data_div_fely3005[16] = {
   0,
   0,
   0,
   1.209241,
   0.1457701,
   2.131151,
   0.1935842,
   0.1928437,
   0.1925183,
   0.1654434,
   0.1304006,
   0.09549727,
   0.07281789,
   0.07191327,
   0.0572103,
   0.04384616};
   Double_t data_div_fehx3005[16] = {
   53.90668,
   3.906677,
   3.906681,
   3.906677,
   3.906677,
   3.906685,
   4.612381,
   5.081474,
   5.081467,
   5.081474,
   5.081474,
   8.029312,
   9.410988,
   9.731232,
   22.53525,
   101.9149};
   Double_t data_div_fehy3005[16] = {
   0,
   0,
   0,
   1.893902,
   0.4052072,
   3.809097,
   0.3031897,
   0.2497176,
   0.2279879,
   0.1900607,
   0.1470869,
   0.1039517,
   0.07888837,
   0.07764634,
   0.06051033,
   0.045767};
   grae = new TGraphAsymmErrors(16,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin16_data_graph3005 = new TH1F("Graph_m3l_rebin16_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin16_data_graph3005->SetMinimum(0);
   Graph_m3l_rebin16_data_graph3005->SetMaximum(625.1725);
   Graph_m3l_rebin16_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin16_data_graph3005->SetStats(0);
   Graph_m3l_rebin16_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin16_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin16_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin16_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin16_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin16_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin16_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin16_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin16_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin16_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin16_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin16_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin16_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin16_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin16_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin16_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin16_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin16_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin16_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin16_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin16_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin16_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin16_canvas->cd();
   m3l_rebin16_canvas->Modified();
   m3l_rebin16_canvas->cd();
   m3l_rebin16_canvas->SetSelected(m3l_rebin16_canvas);
}
