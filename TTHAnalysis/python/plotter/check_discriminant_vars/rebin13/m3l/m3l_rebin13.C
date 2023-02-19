void m3l_rebin13()
{
//=========Macro generated from canvas: m3l_rebin13_canvas/m3l_rebin13
//=========  (Thu Dec  8 14:30:17 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin13_canvas = new TCanvas("m3l_rebin13_canvas", "m3l_rebin13",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin13_canvas->SetHighLightColor(2);
   m3l_rebin13_canvas->Range(0,0,1,1);
   m3l_rebin13_canvas->SetFillColor(0);
   m3l_rebin13_canvas->SetBorderMode(0);
   m3l_rebin13_canvas->SetBorderSize(2);
   m3l_rebin13_canvas->SetTickx(1);
   m3l_rebin13_canvas->SetTicky(1);
   m3l_rebin13_canvas->SetLeftMargin(0.18);
   m3l_rebin13_canvas->SetRightMargin(0.04);
   m3l_rebin13_canvas->SetBottomMargin(0.13);
   m3l_rebin13_canvas->SetFrameFillStyle(0);
   m3l_rebin13_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-32.31943,525.641,1260.458);
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
   Double_t xAxis1[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_total__1 = new TH1D("m3l_rebin13_total__1","dummy",13, xAxis1);
   m3l_rebin13_total__1->SetBinContent(3,1.786016);
   m3l_rebin13_total__1->SetBinContent(4,5.675047);
   m3l_rebin13_total__1->SetBinContent(5,0.8565724);
   m3l_rebin13_total__1->SetBinContent(6,17.32175);
   m3l_rebin13_total__1->SetBinContent(7,33.96692);
   m3l_rebin13_total__1->SetBinContent(8,46.46112);
   m3l_rebin13_total__1->SetBinContent(9,75.32383);
   m3l_rebin13_total__1->SetBinContent(10,170.5654);
   m3l_rebin13_total__1->SetBinContent(11,215.6402);
   m3l_rebin13_total__1->SetBinContent(12,336.9021);
   m3l_rebin13_total__1->SetBinContent(13,591.4455);
   m3l_rebin13_total__1->SetBinError(3,1.720807);
   m3l_rebin13_total__1->SetBinError(4,2.986006);
   m3l_rebin13_total__1->SetBinError(5,0.2725613);
   m3l_rebin13_total__1->SetBinError(6,4.61897);
   m3l_rebin13_total__1->SetBinError(7,4.785724);
   m3l_rebin13_total__1->SetBinError(8,3.571505);
   m3l_rebin13_total__1->SetBinError(9,5.192694);
   m3l_rebin13_total__1->SetBinError(10,6.64249);
   m3l_rebin13_total__1->SetBinError(11,6.745443);
   m3l_rebin13_total__1->SetBinError(12,8.065509);
   m3l_rebin13_total__1->SetBinError(13,8.987805);
   m3l_rebin13_total__1->SetMinimum(0);
   m3l_rebin13_total__1->SetMaximum(1182.891);
   m3l_rebin13_total__1->SetEntries(15152);
   m3l_rebin13_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin13_total__1->SetFillColor(ci);
   m3l_rebin13_total__1->SetMarkerStyle(20);
   m3l_rebin13_total__1->SetMarkerSize(1.1);
   m3l_rebin13_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin13_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin13_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin13_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin13_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin13_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_total__1->Draw("HIST");
   
   THStack *m3l_rebin13_stack = new THStack();
   m3l_rebin13_stack->SetName("m3l_rebin13_stack");
   m3l_rebin13_stack->SetTitle("m3l_rebin13");
   Double_t xAxis2[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1F *m3l_rebin13_stack_stack_1 = new TH1F("m3l_rebin13_stack_stack_1","m3l_rebin13",13, xAxis2);
   m3l_rebin13_stack_stack_1->SetMinimum(0);
   m3l_rebin13_stack_stack_1->SetMaximum(621.0178);
   m3l_rebin13_stack_stack_1->SetDirectory(0);
   m3l_rebin13_stack_stack_1->SetStats(0);
   m3l_rebin13_stack_stack_1->SetLineStyle(0);
   m3l_rebin13_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->SetHistogram(m3l_rebin13_stack_stack_1);
   
   Double_t xAxis3[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_fakes_VV_stack_1 = new TH1D("m3l_rebin13_fakes_VV_stack_1","dummy",13, xAxis3);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(10,0.09719337);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(11,0.1943867);
   m3l_rebin13_fakes_VV_stack_1->SetBinContent(13,0.3887735);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(10,0.09719337);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(11,0.1374522);
   m3l_rebin13_fakes_VV_stack_1->SetBinError(13,0.1943867);
   m3l_rebin13_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin13_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin13_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin13_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_fakes_VV_stack_1,"");
   Double_t xAxis4[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_fakes_TT_stack_2 = new TH1D("m3l_rebin13_fakes_TT_stack_2","dummy",13, xAxis4);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(3,0.06649422);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(4,0.2451369);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(5,0.1329884);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(6,0.4654596);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(7,0.9100791);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(8,2.019641);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(9,2.505941);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(10,5.718503);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(11,6.44994);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(12,13.16586);
   m3l_rebin13_fakes_TT_stack_2->SetBinContent(13,23.36429);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(3,0.06649422);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(4,0.1463565);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(5,0.09403703);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(6,0.1759272);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(7,0.2561934);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(8,0.380177);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(9,0.4144281);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(10,0.6166421);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(11,0.6548922);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(12,0.9450605);
   m3l_rebin13_fakes_TT_stack_2->SetBinError(13,1.261094);
   m3l_rebin13_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin13_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin13_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin13_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_fakes_TT_stack_2,"");
   Double_t xAxis5[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_fakes_DY_stack_3 = new TH1D("m3l_rebin13_fakes_DY_stack_3","dummy",13, xAxis5);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(3,1.719522);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(4,5.158566);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(6,12.03665);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(7,12.03665);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(8,5.158566);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(9,12.03665);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(10,17.19522);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(11,15.4757);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(12,20.63427);
   m3l_rebin13_fakes_DY_stack_3->SetBinContent(13,15.4757);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(3,1.719522);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(4,2.9783);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(6,4.549428);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(7,4.549428);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(8,2.9783);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(9,4.549428);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(10,5.437606);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(11,5.158566);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(12,5.956599);
   m3l_rebin13_fakes_DY_stack_3->SetBinError(13,5.158566);
   m3l_rebin13_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin13_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin13_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin13_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_fakes_DY_stack_3,"");
   Double_t xAxis6[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_prompt_ZZ_stack_4 = new TH1D("m3l_rebin13_prompt_ZZ_stack_4","dummy",13, xAxis6);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(6,1.834854);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(7,2.568796);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(8,2.01834);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(9,6.421989);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(10,8.8073);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(11,10.0917);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(12,13.57792);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinContent(13,27.88978);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(6,0.5802318);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(7,0.6865395);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(8,0.6085523);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(9,1.085514);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(10,1.271224);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(11,1.360764);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(12,1.578401);
   m3l_rebin13_prompt_ZZ_stack_4->SetBinError(13,2.26216);
   m3l_rebin13_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin13_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin13_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin13_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_prompt_ZZ_stack_4,"");
   Double_t xAxis7[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_prompt_WZ_stack_5 = new TH1D("m3l_rebin13_prompt_WZ_stack_5","dummy",13, xAxis7);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(4,0.271344);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(5,0.7235839);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(6,2.984784);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(7,18.45139);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(8,37.26457);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(9,54.35924);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(10,138.7472);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(11,183.4285);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(12,289.524);
   m3l_rebin13_prompt_WZ_stack_5->SetBinContent(13,524.327);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(4,0.1566605);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(5,0.2558255);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(6,0.5195841);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(7,1.291856);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(8,1.835894);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(9,2.21736);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(10,3.542514);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(11,4.073173);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(12,5.11731);
   m3l_rebin13_prompt_WZ_stack_5->SetBinError(13,6.886532);
   m3l_rebin13_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin13_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin13_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin13_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin13_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin13_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_stack->Add(m3l_rebin13_prompt_WZ_stack_5,"");
   m3l_rebin13_stack->Draw("same hist");
   Double_t xAxis8[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_total__2 = new TH1D("m3l_rebin13_total__2","dummy",13, xAxis8);
   m3l_rebin13_total__2->SetBinContent(3,1.786016);
   m3l_rebin13_total__2->SetBinContent(4,5.675047);
   m3l_rebin13_total__2->SetBinContent(5,0.8565724);
   m3l_rebin13_total__2->SetBinContent(6,17.32175);
   m3l_rebin13_total__2->SetBinContent(7,33.96692);
   m3l_rebin13_total__2->SetBinContent(8,46.46112);
   m3l_rebin13_total__2->SetBinContent(9,75.32383);
   m3l_rebin13_total__2->SetBinContent(10,170.5654);
   m3l_rebin13_total__2->SetBinContent(11,215.6402);
   m3l_rebin13_total__2->SetBinContent(12,336.9021);
   m3l_rebin13_total__2->SetBinContent(13,591.4455);
   m3l_rebin13_total__2->SetBinError(3,1.720807);
   m3l_rebin13_total__2->SetBinError(4,2.986006);
   m3l_rebin13_total__2->SetBinError(5,0.2725613);
   m3l_rebin13_total__2->SetBinError(6,4.61897);
   m3l_rebin13_total__2->SetBinError(7,4.785724);
   m3l_rebin13_total__2->SetBinError(8,3.571505);
   m3l_rebin13_total__2->SetBinError(9,5.192694);
   m3l_rebin13_total__2->SetBinError(10,6.64249);
   m3l_rebin13_total__2->SetBinError(11,6.745443);
   m3l_rebin13_total__2->SetBinError(12,8.065509);
   m3l_rebin13_total__2->SetBinError(13,8.987805);
   m3l_rebin13_total__2->SetMinimum(0);
   m3l_rebin13_total__2->SetMaximum(1182.891);
   m3l_rebin13_total__2->SetEntries(15152);
   m3l_rebin13_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin13_total__2->SetFillColor(ci);
   m3l_rebin13_total__2->SetMarkerStyle(20);
   m3l_rebin13_total__2->SetMarkerSize(1.1);
   m3l_rebin13_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin13_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin13_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin13_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin13_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin13_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin13_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin13_total_errors_fx3001[11] = {
   124.0411,
   133.6575,
   143.274,
   154.048,
   166.2679,
   178.7761,
   191.2843,
   208.0726,
   230.1895,
   263.7708,
   392.8847};
   Double_t m3l_rebin13_total_errors_fy3001[11] = {
   1.786016,
   5.675047,
   0.8565724,
   17.32175,
   33.96692,
   46.46112,
   75.32383,
   170.5654,
   215.6402,
   336.9021,
   591.4455};
   Double_t m3l_rebin13_total_errors_felx3001[11] = {
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_total_errors_fely3001[11] = {
   1.720807,
   2.986006,
   0.2725613,
   4.61897,
   4.785724,
   3.571505,
   5.192694,
   6.64249,
   6.745443,
   8.065509,
   8.987805};
   Double_t m3l_rebin13_total_errors_fehx3001[11] = {
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_total_errors_fehy3001[11] = {
   1.720807,
   2.986006,
   0.2725613,
   4.61897,
   4.785724,
   3.571505,
   5.192694,
   6.64249,
   6.745443,
   8.065509,
   8.987805};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,m3l_rebin13_total_errors_fx3001,m3l_rebin13_total_errors_fy3001,m3l_rebin13_total_errors_felx3001,m3l_rebin13_total_errors_fehx3001,m3l_rebin13_total_errors_fely3001,m3l_rebin13_total_errors_fehy3001);
   grae->SetName("m3l_rebin13_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin13_total_errors3001 = new TH1F("Graph_m3l_rebin13_total_errors3001","Graph",100,81.15617,538.0767);
   Graph_m3l_rebin13_total_errors3001->SetMinimum(0.05868813);
   Graph_m3l_rebin13_total_errors3001->SetMaximum(660.4702);
   Graph_m3l_rebin13_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin13_total_errors3001->SetStats(0);
   Graph_m3l_rebin13_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin13_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin13_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin13_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin13_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin13_data_graph_fx3002[13] = {
   54.80822,
   114.4247,
   124.0411,
   133.6575,
   143.274,
   154.048,
   166.2679,
   178.7761,
   191.2843,
   208.0726,
   230.1895,
   263.7708,
   392.8847};
   Double_t m3l_rebin13_data_graph_fy3002[13] = {
   0,
   1,
   4,
   2,
   3,
   12,
   25,
   63,
   83,
   179,
   194,
   347,
   600};
   Double_t m3l_rebin13_data_graph_felx3002[13] = {
   54.80822,
   4.80822,
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_data_graph_fely3002[13] = {
   0,
   0.8272525,
   1.914367,
   1.29183,
   1.632727,
   3.415326,
   4.966428,
   7.916287,
   9.092228,
   13.36686,
   13.91667,
   18.61936,
   24.4886};
   Double_t m3l_rebin13_data_graph_fehx3002[13] = {
   54.80822,
   4.80822,
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_data_graph_fehy3002[13] = {
   1.841055,
   2.29957,
   3.162815,
   2.63791,
   2.918242,
   4.559911,
   6.066714,
   8.979462,
   10.14726,
   14.40433,
   14.95266,
   19.64626,
   25.50906};
   grae = new TGraphAsymmErrors(13,m3l_rebin13_data_graph_fx3002,m3l_rebin13_data_graph_fy3002,m3l_rebin13_data_graph_felx3002,m3l_rebin13_data_graph_fehx3002,m3l_rebin13_data_graph_fely3002,m3l_rebin13_data_graph_fehy3002);
   grae->SetName("m3l_rebin13_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin13_data_graph3002 = new TH1F("Graph_m3l_rebin13_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin13_data_graph3002->SetMinimum(0);
   Graph_m3l_rebin13_data_graph3002->SetMaximum(688.06);
   Graph_m3l_rebin13_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin13_data_graph3002->SetStats(0);
   Graph_m3l_rebin13_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin13_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin13_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin13_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin13_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin13_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin13_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin13_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin13_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin13_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin13_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin13_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin13_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin13_total_errors","Total unc.","F");
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
   m3l_rebin13_canvas->cd();
  
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
   Double_t xAxis9[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_total__3 = new TH1D("m3l_rebin13_total__3","dummy",13, xAxis9);
   m3l_rebin13_total__3->SetBinContent(3,1);
   m3l_rebin13_total__3->SetBinContent(4,1);
   m3l_rebin13_total__3->SetBinContent(5,1);
   m3l_rebin13_total__3->SetBinContent(6,1);
   m3l_rebin13_total__3->SetBinContent(7,1);
   m3l_rebin13_total__3->SetBinContent(8,1);
   m3l_rebin13_total__3->SetBinContent(9,1);
   m3l_rebin13_total__3->SetBinContent(10,1);
   m3l_rebin13_total__3->SetBinContent(11,1);
   m3l_rebin13_total__3->SetBinContent(12,1);
   m3l_rebin13_total__3->SetBinContent(13,1);
   m3l_rebin13_total__3->SetMinimum(0.5);
   m3l_rebin13_total__3->SetMaximum(2);
   m3l_rebin13_total__3->SetEntries(15165);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin13_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin13_total__3->SetMarkerColor(ci);
   m3l_rebin13_total__3->SetMarkerSize(1.1);
   m3l_rebin13_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin13_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin13_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin13_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin13_total__3->GetYaxis()->SetDecimals();
   m3l_rebin13_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin13_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin13_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin13_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin13_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin13_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_total__3->Draw("AXIS");
   
   Double_t m3l_rebin13_total_errors_fx3003[11] = {
   124.0411,
   133.6575,
   143.274,
   154.048,
   166.2679,
   178.7761,
   191.2843,
   208.0726,
   230.1895,
   263.7708,
   392.8847};
   Double_t m3l_rebin13_total_errors_fy3003[11] = {
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
   Double_t m3l_rebin13_total_errors_felx3003[11] = {
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_total_errors_fely3003[11] = {
   0.9634891,
   0.5261641,
   0.3182,
   0.2666572,
   0.1408937,
   0.07687083,
   0.06893826,
   0.03894394,
   0.031281,
   0.02394022,
   0.01519634};
   Double_t m3l_rebin13_total_errors_fehx3003[11] = {
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_total_errors_fehy3003[11] = {
   0.9634891,
   0.5261641,
   0.3182,
   0.2666572,
   0.1408937,
   0.07687083,
   0.06893826,
   0.03894394,
   0.031281,
   0.02394022,
   0.01519634};
   grae = new TGraphAsymmErrors(11,m3l_rebin13_total_errors_fx3003,m3l_rebin13_total_errors_fy3003,m3l_rebin13_total_errors_felx3003,m3l_rebin13_total_errors_fehx3003,m3l_rebin13_total_errors_fely3003,m3l_rebin13_total_errors_fehy3003);
   grae->SetName("m3l_rebin13_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin13_total_errors_fx3004[11] = {
   124.0411,
   133.6575,
   143.274,
   154.048,
   166.2679,
   178.7761,
   191.2843,
   208.0726,
   230.1895,
   263.7708,
   392.8847};
   Double_t m3l_rebin13_total_errors_fy3004[11] = {
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
   Double_t m3l_rebin13_total_errors_felx3004[11] = {
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_total_errors_fely3004[11] = {
   0.9634891,
   0.5261641,
   0.3182,
   0.2666572,
   0.1408937,
   0.07687083,
   0.06893826,
   0.03894394,
   0.031281,
   0.02394022,
   0.01519634};
   Double_t m3l_rebin13_total_errors_fehx3004[11] = {
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t m3l_rebin13_total_errors_fehy3004[11] = {
   0.9634891,
   0.5261641,
   0.3182,
   0.2666572,
   0.1408937,
   0.07687083,
   0.06893826,
   0.03894394,
   0.031281,
   0.02394022,
   0.01519634};
   grae = new TGraphAsymmErrors(11,m3l_rebin13_total_errors_fx3004,m3l_rebin13_total_errors_fy3004,m3l_rebin13_total_errors_felx3004,m3l_rebin13_total_errors_fehx3004,m3l_rebin13_total_errors_fely3004,m3l_rebin13_total_errors_fehy3004);
   grae->SetName("m3l_rebin13_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[14] = {0, 109.6164, 119.2329, 128.8493, 138.4658, 148.0822, 160.0137, 172.522, 185.0302, 197.5385, 218.6067, 241.7722, 285.7694, 500}; 
   
   TH1D *m3l_rebin13_total__4 = new TH1D("m3l_rebin13_total__4","dummy",13, xAxis10);
   m3l_rebin13_total__4->SetBinContent(3,1);
   m3l_rebin13_total__4->SetBinContent(4,1);
   m3l_rebin13_total__4->SetBinContent(5,1);
   m3l_rebin13_total__4->SetBinContent(6,1);
   m3l_rebin13_total__4->SetBinContent(7,1);
   m3l_rebin13_total__4->SetBinContent(8,1);
   m3l_rebin13_total__4->SetBinContent(9,1);
   m3l_rebin13_total__4->SetBinContent(10,1);
   m3l_rebin13_total__4->SetBinContent(11,1);
   m3l_rebin13_total__4->SetBinContent(12,1);
   m3l_rebin13_total__4->SetBinContent(13,1);
   m3l_rebin13_total__4->SetMinimum(0.5);
   m3l_rebin13_total__4->SetMaximum(2);
   m3l_rebin13_total__4->SetEntries(15165);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin13_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin13_total__4->SetMarkerColor(ci);
   m3l_rebin13_total__4->SetMarkerSize(1.1);
   m3l_rebin13_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin13_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin13_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin13_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin13_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin13_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin13_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin13_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin13_total__4->GetYaxis()->SetDecimals();
   m3l_rebin13_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin13_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin13_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin13_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin13_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin13_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin13_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin13_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin13_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin13_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin13_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin13_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin13_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[13] = {
   54.80822,
   114.4247,
   124.0411,
   133.6575,
   143.274,
   154.048,
   166.2679,
   178.7761,
   191.2843,
   208.0726,
   230.1895,
   263.7708,
   392.8847};
   Double_t data_div_fy3005[13] = {
   0,
   0,
   2.239621,
   0.35242,
   3.502331,
   0.6927706,
   0.7360102,
   1.355973,
   1.101909,
   1.049451,
   0.8996465,
   1.029973,
   1.014464};
   Double_t data_div_felx3005[13] = {
   54.80822,
   4.80822,
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t data_div_fely3005[13] = {
   0,
   0,
   1.071864,
   0.2276333,
   1.906117,
   0.1971698,
   0.1462137,
   0.1703852,
   0.1207085,
   0.07836795,
   0.06453652,
   0.05526638,
   0.04140465};
   Double_t data_div_fehx3005[13] = {
   54.80822,
   4.80822,
   4.80822,
   4.80822,
   4.80822,
   5.965767,
   6.254128,
   6.25412,
   6.25412,
   10.53412,
   11.58275,
   21.99859,
   107.1153};
   Double_t data_div_fehy3005[13] = {
   0,
   0,
   1.770877,
   0.4648261,
   3.406884,
   0.2632477,
   0.1786065,
   0.1932683,
   0.1347152,
   0.08445047,
   0.06934076,
   0.05831447,
   0.04313003};
   grae = new TGraphAsymmErrors(13,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin13_data_graph3005 = new TH1F("Graph_m3l_rebin13_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin13_data_graph3005->SetMinimum(0);
   Graph_m3l_rebin13_data_graph3005->SetMaximum(688.06);
   Graph_m3l_rebin13_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin13_data_graph3005->SetStats(0);
   Graph_m3l_rebin13_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin13_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin13_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin13_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin13_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin13_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin13_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin13_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin13_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin13_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin13_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin13_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin13_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin13_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin13_canvas->cd();
   m3l_rebin13_canvas->Modified();
   m3l_rebin13_canvas->cd();
   m3l_rebin13_canvas->SetSelected(m3l_rebin13_canvas);
}
