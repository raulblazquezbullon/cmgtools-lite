void m3l_rebin9()
{
//=========Macro generated from canvas: m3l_rebin9_canvas/m3l_rebin9
//=========  (Thu Dec 15 19:44:02 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin9_canvas = new TCanvas("m3l_rebin9_canvas", "m3l_rebin9",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin9_canvas->SetHighLightColor(2);
   m3l_rebin9_canvas->Range(0,0,1,1);
   m3l_rebin9_canvas->SetFillColor(0);
   m3l_rebin9_canvas->SetBorderMode(0);
   m3l_rebin9_canvas->SetBorderSize(2);
   m3l_rebin9_canvas->SetTickx(1);
   m3l_rebin9_canvas->SetTicky(1);
   m3l_rebin9_canvas->SetLeftMargin(0.18);
   m3l_rebin9_canvas->SetRightMargin(0.04);
   m3l_rebin9_canvas->SetBottomMargin(0.13);
   m3l_rebin9_canvas->SetFrameFillStyle(0);
   m3l_rebin9_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-41.5746,525.641,1621.409);
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
   Double_t xAxis1[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1D *m3l_rebin9_total__1 = new TH1D("m3l_rebin9_total__1","dummy",9, xAxis1);
   m3l_rebin9_total__1->SetBinContent(2,1.719522);
   m3l_rebin9_total__1->SetBinContent(3,5.922437);
   m3l_rebin9_total__1->SetBinContent(4,12.89879);
   m3l_rebin9_total__1->SetBinContent(5,45.68719);
   m3l_rebin9_total__1->SetBinContent(6,85.06785);
   m3l_rebin9_total__1->SetBinContent(7,223.9492);
   m3l_rebin9_total__1->SetBinContent(8,359.8843);
   m3l_rebin9_total__1->SetBinContent(9,760.8152);
   m3l_rebin9_total__1->SetBinError(2,1.719522);
   m3l_rebin9_total__1->SetBinError(3,2.989484);
   m3l_rebin9_total__1->SetBinError(4,3.904947);
   m3l_rebin9_total__1->SetBinError(5,5.446044);
   m3l_rebin9_total__1->SetBinError(6,4.996397);
   m3l_rebin9_total__1->SetBinError(7,7.951498);
   m3l_rebin9_total__1->SetBinError(8,8.871298);
   m3l_rebin9_total__1->SetBinError(9,10.37662);
   m3l_rebin9_total__1->SetMinimum(0);
   m3l_rebin9_total__1->SetMaximum(1521.63);
   m3l_rebin9_total__1->SetEntries(15152);
   m3l_rebin9_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin9_total__1->SetFillColor(ci);
   m3l_rebin9_total__1->SetMarkerStyle(20);
   m3l_rebin9_total__1->SetMarkerSize(1.1);
   m3l_rebin9_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin9_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin9_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin9_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin9_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin9_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->Draw("HIST");
   
   THStack *m3l_rebin9_stack = new THStack();
   m3l_rebin9_stack->SetName("m3l_rebin9_stack");
   m3l_rebin9_stack->SetTitle("m3l_rebin9");
   Double_t xAxis2[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1F *m3l_rebin9_stack_stack_1 = new TH1F("m3l_rebin9_stack_stack_1","m3l_rebin9",9, xAxis2);
   m3l_rebin9_stack_stack_1->SetMinimum(0);
   m3l_rebin9_stack_stack_1->SetMaximum(798.856);
   m3l_rebin9_stack_stack_1->SetDirectory(0);
   m3l_rebin9_stack_stack_1->SetStats(0);
   m3l_rebin9_stack_stack_1->SetLineStyle(0);
   m3l_rebin9_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->SetHistogram(m3l_rebin9_stack_stack_1);
   
   Double_t xAxis3[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1D *m3l_rebin9_fakes_VV_stack_1 = new TH1D("m3l_rebin9_fakes_VV_stack_1","dummy",9, xAxis3);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(7,0.09719337);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(8,0.1943867);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(9,0.3887735);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(7,0.09719337);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(8,0.1374522);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(9,0.1943867);
   m3l_rebin9_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin9_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin9_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin9_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1D *m3l_rebin9_fakes_TT_stack_2 = new TH1D("m3l_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(3,0.3116311);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(4,0.3989653);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(5,1.487687);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(6,3.216537);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(7,7.314365);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(8,11.57);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(9,30.74515);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(3,0.1607536);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(4,0.1628769);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(5,0.3303978);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(6,0.4734144);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(7,0.6973973);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(8,0.8871436);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(9,1.442617);
   m3l_rebin9_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin9_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin9_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin9_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1D *m3l_rebin9_fakes_DY_stack_3 = new TH1D("m3l_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(2,1.719522);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(3,5.158566);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(4,8.597611);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(5,15.4757);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(6,10.31713);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(7,25.79283);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(8,27.51235);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(9,22.35379);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(2,1.719522);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(3,2.9783);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(4,3.844968);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(5,5.158566);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(6,4.211952);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(7,6.65968);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(8,6.878088);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(9,6.199825);
   m3l_rebin9_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin9_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin9_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin9_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1D *m3l_rebin9_prompt_ZZ_stack_4 = new TH1D("m3l_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(4,0.917427);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(5,3.669708);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(6,5.688048);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(7,12.11004);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(8,17.06414);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(9,33.76132);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(4,0.4102858);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(5,0.8205717);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(6,1.021604);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(7,1.490643);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(8,1.769469);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(9,2.488917);
   m3l_rebin9_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin9_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin9_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin9_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1D *m3l_rebin9_prompt_WZ_stack_5 = new TH1D("m3l_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(3,0.45224);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(4,2.984784);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(5,25.05409);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(6,65.84614);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(7,178.6348);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(8,303.5435);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(9,673.5662);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(3,0.2022479);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(4,0.5195841);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(5,1.505355);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(6,2.44042);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(7,4.019597);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(8,5.239742);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(9,7.8053);
   m3l_rebin9_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin9_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin9_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin9_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_prompt_WZ_stack_5,"");
   m3l_rebin9_stack->Draw("same hist");
   Double_t xAxis8[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1D *m3l_rebin9_total__2 = new TH1D("m3l_rebin9_total__2","dummy",9, xAxis8);
   m3l_rebin9_total__2->SetBinContent(2,1.719522);
   m3l_rebin9_total__2->SetBinContent(3,5.922437);
   m3l_rebin9_total__2->SetBinContent(4,12.89879);
   m3l_rebin9_total__2->SetBinContent(5,45.68719);
   m3l_rebin9_total__2->SetBinContent(6,85.06785);
   m3l_rebin9_total__2->SetBinContent(7,223.9492);
   m3l_rebin9_total__2->SetBinContent(8,359.8843);
   m3l_rebin9_total__2->SetBinContent(9,760.8152);
   m3l_rebin9_total__2->SetBinError(2,1.719522);
   m3l_rebin9_total__2->SetBinError(3,2.989484);
   m3l_rebin9_total__2->SetBinError(4,3.904947);
   m3l_rebin9_total__2->SetBinError(5,5.446044);
   m3l_rebin9_total__2->SetBinError(6,4.996397);
   m3l_rebin9_total__2->SetBinError(7,7.951498);
   m3l_rebin9_total__2->SetBinError(8,8.871298);
   m3l_rebin9_total__2->SetBinError(9,10.37662);
   m3l_rebin9_total__2->SetMinimum(0);
   m3l_rebin9_total__2->SetMaximum(1521.63);
   m3l_rebin9_total__2->SetEntries(15152);
   m3l_rebin9_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin9_total__2->SetFillColor(ci);
   m3l_rebin9_total__2->SetMarkerStyle(20);
   m3l_rebin9_total__2->SetMarkerSize(1.1);
   m3l_rebin9_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin9_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin9_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin9_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin9_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin9_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin9_total_errors_fx3001[8] = {
   120.8356,
   134.726,
   149.4527,
   166.2679,
   184.3353,
   207.2748,
   241.148,
   380.5577};
   Double_t m3l_rebin9_total_errors_fy3001[8] = {
   1.719522,
   5.922437,
   12.89879,
   45.68719,
   85.06785,
   223.9492,
   359.8843,
   760.8152};
   Double_t m3l_rebin9_total_errors_felx3001[8] = {
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t m3l_rebin9_total_errors_fely3001[8] = {
   1.719522,
   2.989484,
   3.904947,
   5.446044,
   4.996397,
   7.951498,
   8.871298,
   10.37662};
   Double_t m3l_rebin9_total_errors_fehx3001[8] = {
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t m3l_rebin9_total_errors_fehy3001[8] = {
   1.719522,
   2.989484,
   3.904947,
   5.446044,
   4.996397,
   7.951498,
   8.871298,
   10.37662};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3l_rebin9_total_errors_fx3001,m3l_rebin9_total_errors_fy3001,m3l_rebin9_total_errors_felx3001,m3l_rebin9_total_errors_fehx3001,m3l_rebin9_total_errors_fely3001,m3l_rebin9_total_errors_fehy3001);
   grae->SetName("m3l_rebin9_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin9_total_errors3001 = new TH1F("Graph_m3l_rebin9_total_errors3001","Graph",100,75.27945,538.611);
   Graph_m3l_rebin9_total_errors3001->SetMinimum(0);
   Graph_m3l_rebin9_total_errors3001->SetMaximum(848.311);
   Graph_m3l_rebin9_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin9_total_errors3001->SetStats(0);
   Graph_m3l_rebin9_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin9_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin9_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin9_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin9_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin9_data_graph_fx3002[9] = {
   56.94521,
   120.8356,
   134.726,
   149.4527,
   166.2679,
   184.3353,
   207.2748,
   241.148,
   380.5577};
   Double_t m3l_rebin9_data_graph_fy3002[9] = {
   1,
   4,
   3,
   11,
   39,
   108,
   225,
   345,
   777};
   Double_t m3l_rebin9_data_graph_felx3002[9] = {
   56.94521,
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t m3l_rebin9_data_graph_fely3002[9] = {
   0.8272525,
   1.914367,
   1.632727,
   3.265636,
   6.218222,
   10.37641,
   14.98917,
   18.56557,
   27.86932};
   Double_t m3l_rebin9_data_graph_fehx3002[9] = {
   56.94521,
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t m3l_rebin9_data_graph_fehy3002[9] = {
   2.29957,
   3.162815,
   2.918242,
   4.416609,
   7.298524,
   11.42465,
   16.02258,
   19.59255,
   28.88731};
   grae = new TGraphAsymmErrors(9,m3l_rebin9_data_graph_fx3002,m3l_rebin9_data_graph_fy3002,m3l_rebin9_data_graph_felx3002,m3l_rebin9_data_graph_fehx3002,m3l_rebin9_data_graph_fely3002,m3l_rebin9_data_graph_fehy3002);
   grae->SetName("m3l_rebin9_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin9_data_graph3002 = new TH1F("Graph_m3l_rebin9_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin9_data_graph3002->SetMinimum(0.1554728);
   Graph_m3l_rebin9_data_graph3002->SetMaximum(886.4588);
   Graph_m3l_rebin9_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin9_data_graph3002->SetStats(0);
   Graph_m3l_rebin9_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin9_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin9_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin9_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin9_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin9_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin9_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin9_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin9_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin9_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin9_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin9_total_errors","Total unc.","F");
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
   m3l_rebin9_canvas->cd();
  
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
   Double_t xAxis9[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1D *m3l_rebin9_total__3 = new TH1D("m3l_rebin9_total__3","dummy",9, xAxis9);
   m3l_rebin9_total__3->SetBinContent(2,1);
   m3l_rebin9_total__3->SetBinContent(3,1);
   m3l_rebin9_total__3->SetBinContent(4,1);
   m3l_rebin9_total__3->SetBinContent(5,1);
   m3l_rebin9_total__3->SetBinContent(6,1);
   m3l_rebin9_total__3->SetBinContent(7,1);
   m3l_rebin9_total__3->SetBinContent(8,1);
   m3l_rebin9_total__3->SetBinContent(9,1);
   m3l_rebin9_total__3->SetMinimum(0.5);
   m3l_rebin9_total__3->SetMaximum(2);
   m3l_rebin9_total__3->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin9_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin9_total__3->SetMarkerColor(ci);
   m3l_rebin9_total__3->SetMarkerSize(1.1);
   m3l_rebin9_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin9_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin9_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin9_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin9_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin9_total__3->GetYaxis()->SetDecimals();
   m3l_rebin9_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin9_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin9_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin9_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin9_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin9_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__3->Draw("AXIS");
   
   Double_t m3l_rebin9_total_errors_fx3003[8] = {
   120.8356,
   134.726,
   149.4527,
   166.2679,
   184.3353,
   207.2748,
   241.148,
   380.5577};
   Double_t m3l_rebin9_total_errors_fy3003[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin9_total_errors_felx3003[8] = {
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t m3l_rebin9_total_errors_fely3003[8] = {
   1,
   0.5047726,
   0.3027376,
   0.1192029,
   0.05873425,
   0.03550581,
   0.02465042,
   0.01363881};
   Double_t m3l_rebin9_total_errors_fehx3003[8] = {
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t m3l_rebin9_total_errors_fehy3003[8] = {
   1,
   0.5047726,
   0.3027376,
   0.1192029,
   0.05873425,
   0.03550581,
   0.02465042,
   0.01363881};
   grae = new TGraphAsymmErrors(8,m3l_rebin9_total_errors_fx3003,m3l_rebin9_total_errors_fy3003,m3l_rebin9_total_errors_felx3003,m3l_rebin9_total_errors_fehx3003,m3l_rebin9_total_errors_fely3003,m3l_rebin9_total_errors_fehy3003);
   grae->SetName("m3l_rebin9_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin9_total_errors_fx3004[8] = {
   120.8356,
   134.726,
   149.4527,
   166.2679,
   184.3353,
   207.2748,
   241.148,
   380.5577};
   Double_t m3l_rebin9_total_errors_fy3004[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin9_total_errors_felx3004[8] = {
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t m3l_rebin9_total_errors_fely3004[8] = {
   1,
   0.5047726,
   0.3027376,
   0.1192029,
   0.05873425,
   0.03550581,
   0.02465042,
   0.01363881};
   Double_t m3l_rebin9_total_errors_fehx3004[8] = {
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t m3l_rebin9_total_errors_fehy3004[8] = {
   1,
   0.5047726,
   0.3027376,
   0.1192029,
   0.05873425,
   0.03550581,
   0.02465042,
   0.01363881};
   grae = new TGraphAsymmErrors(8,m3l_rebin9_total_errors_fx3004,m3l_rebin9_total_errors_fy3004,m3l_rebin9_total_errors_felx3004,m3l_rebin9_total_errors_fehx3004,m3l_rebin9_total_errors_fely3004,m3l_rebin9_total_errors_fehy3004);
   grae->SetName("m3l_rebin9_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[10] = {0, 113.8904, 127.7808, 141.6712, 157.2341, 175.3016, 193.369, 221.1806, 261.1154, 500}; 
   
   TH1D *m3l_rebin9_total__4 = new TH1D("m3l_rebin9_total__4","dummy",9, xAxis10);
   m3l_rebin9_total__4->SetBinContent(2,1);
   m3l_rebin9_total__4->SetBinContent(3,1);
   m3l_rebin9_total__4->SetBinContent(4,1);
   m3l_rebin9_total__4->SetBinContent(5,1);
   m3l_rebin9_total__4->SetBinContent(6,1);
   m3l_rebin9_total__4->SetBinContent(7,1);
   m3l_rebin9_total__4->SetBinContent(8,1);
   m3l_rebin9_total__4->SetBinContent(9,1);
   m3l_rebin9_total__4->SetMinimum(0.5);
   m3l_rebin9_total__4->SetMaximum(2);
   m3l_rebin9_total__4->SetEntries(15161);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin9_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin9_total__4->SetMarkerColor(ci);
   m3l_rebin9_total__4->SetMarkerSize(1.1);
   m3l_rebin9_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin9_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin9_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin9_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin9_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin9_total__4->GetYaxis()->SetDecimals();
   m3l_rebin9_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin9_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin9_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin9_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin9_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin9_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[9] = {
   56.94521,
   120.8356,
   134.726,
   149.4527,
   166.2679,
   184.3353,
   207.2748,
   241.148,
   380.5577};
   Double_t data_div_fy3005[9] = {
   0,
   2.326228,
   0.5065482,
   0.8527934,
   0.853631,
   1.269575,
   1.004692,
   0.9586413,
   1.021273};
   Double_t data_div_felx3005[9] = {
   56.94521,
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t data_div_fely3005[9] = {
   0,
   1.113313,
   0.2756849,
   0.2531739,
   0.1361043,
   0.121978,
   0.0669311,
   0.0515876,
   0.03663087};
   Double_t data_div_fehx3005[9] = {
   56.94521,
   6.94521,
   6.94521,
   7.781441,
   9.03373,
   9.03373,
   13.9058,
   19.96738,
   119.4423};
   Double_t data_div_fehy3005[9] = {
   0,
   1.839357,
   0.4927435,
   0.342405,
   0.1597499,
   0.1343004,
   0.07154561,
   0.05444125,
   0.03796889};
   grae = new TGraphAsymmErrors(9,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin9_data_graph3005 = new TH1F("Graph_m3l_rebin9_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin9_data_graph3005->SetMinimum(0.1554728);
   Graph_m3l_rebin9_data_graph3005->SetMaximum(886.4588);
   Graph_m3l_rebin9_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin9_data_graph3005->SetStats(0);
   Graph_m3l_rebin9_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin9_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin9_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin9_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin9_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin9_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin9_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin9_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin9_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin9_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin9_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin9_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin9_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin9_canvas->cd();
   m3l_rebin9_canvas->Modified();
   m3l_rebin9_canvas->cd();
   m3l_rebin9_canvas->SetSelected(m3l_rebin9_canvas);
}
