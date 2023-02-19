void m3l_rebin10()
{
//=========Macro generated from canvas: m3l_rebin10_canvas/m3l_rebin10
//=========  (Thu Dec 15 19:45:18 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin10_canvas = new TCanvas("m3l_rebin10_canvas", "m3l_rebin10",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin10_canvas->SetHighLightColor(2);
   m3l_rebin10_canvas->Range(0,0,1,1);
   m3l_rebin10_canvas->SetFillColor(0);
   m3l_rebin10_canvas->SetBorderMode(0);
   m3l_rebin10_canvas->SetBorderSize(2);
   m3l_rebin10_canvas->SetTickx(1);
   m3l_rebin10_canvas->SetTicky(1);
   m3l_rebin10_canvas->SetLeftMargin(0.18);
   m3l_rebin10_canvas->SetRightMargin(0.04);
   m3l_rebin10_canvas->SetBottomMargin(0.13);
   m3l_rebin10_canvas->SetFrameFillStyle(0);
   m3l_rebin10_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-38.43457,525.641,1498.948);
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
   Double_t xAxis1[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1D *m3l_rebin10_total__1 = new TH1D("m3l_rebin10_total__1","dummy",10, xAxis1);
   m3l_rebin10_total__1->SetBinContent(2,1.719522);
   m3l_rebin10_total__1->SetBinContent(3,5.651093);
   m3l_rebin10_total__1->SetBinContent(4,1.218364);
   m3l_rebin10_total__1->SetBinContent(5,30.65251);
   m3l_rebin10_total__1->SetBinContent(6,53.94155);
   m3l_rebin10_total__1->SetBinContent(7,96.41484);
   m3l_rebin10_total__1->SetBinContent(8,247.547);
   m3l_rebin10_total__1->SetBinContent(9,355.447);
   m3l_rebin10_total__1->SetBinContent(10,703.3526);
   m3l_rebin10_total__1->SetBinError(2,1.719522);
   m3l_rebin10_total__1->SetBinError(3,2.985376);
   m3l_rebin10_total__1->SetBinError(4,0.3271285);
   m3l_rebin10_total__1->SetBinError(5,5.571606);
   m3l_rebin10_total__1->SetBinError(6,4.685321);
   m3l_rebin10_total__1->SetBinError(7,5.630864);
   m3l_rebin10_total__1->SetBinError(8,7.909728);
   m3l_rebin10_total__1->SetBinError(9,8.353522);
   m3l_rebin10_total__1->SetBinError(10,10.11648);
   m3l_rebin10_total__1->SetMinimum(0);
   m3l_rebin10_total__1->SetMaximum(1406.705);
   m3l_rebin10_total__1->SetEntries(15152);
   m3l_rebin10_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin10_total__1->SetFillColor(ci);
   m3l_rebin10_total__1->SetMarkerStyle(20);
   m3l_rebin10_total__1->SetMarkerSize(1.1);
   m3l_rebin10_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin10_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin10_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin10_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_total__1->Draw("HIST");
   
   THStack *m3l_rebin10_stack = new THStack();
   m3l_rebin10_stack->SetName("m3l_rebin10_stack");
   m3l_rebin10_stack->SetTitle("m3l_rebin10");
   Double_t xAxis2[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1F *m3l_rebin10_stack_stack_1 = new TH1F("m3l_rebin10_stack_stack_1","m3l_rebin10",10, xAxis2);
   m3l_rebin10_stack_stack_1->SetMinimum(0);
   m3l_rebin10_stack_stack_1->SetMaximum(738.5203);
   m3l_rebin10_stack_stack_1->SetDirectory(0);
   m3l_rebin10_stack_stack_1->SetStats(0);
   m3l_rebin10_stack_stack_1->SetLineStyle(0);
   m3l_rebin10_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->SetHistogram(m3l_rebin10_stack_stack_1);
   
   Double_t xAxis3[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1D *m3l_rebin10_fakes_VV_stack_1 = new TH1D("m3l_rebin10_fakes_VV_stack_1","dummy",10, xAxis3);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(8,0.09719337);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(9,0.1943867);
   m3l_rebin10_fakes_VV_stack_1->SetBinContent(10,0.3887735);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(8,0.09719337);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(9,0.1374522);
   m3l_rebin10_fakes_VV_stack_1->SetBinError(10,0.1943867);
   m3l_rebin10_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin10_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin10_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin10_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_fakes_VV_stack_1,"");
   Double_t xAxis4[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1D *m3l_rebin10_fakes_TT_stack_2 = new TH1D("m3l_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(3,0.3116311);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(4,0.1329884);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(5,0.8435849);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(6,2.152629);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(7,3.237377);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(8,7.846319);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(9,12.03545);
   m3l_rebin10_fakes_TT_stack_2->SetBinContent(10,28.48434);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(3,0.1607536);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(4,0.09403703);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(5,0.2474138);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(6,0.3916344);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(7,0.4694539);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(8,0.7223122);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(9,0.9044192);
   m3l_rebin10_fakes_TT_stack_2->SetBinError(10,1.389537);
   m3l_rebin10_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin10_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin10_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin10_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_fakes_TT_stack_2,"");
   Double_t xAxis5[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1D *m3l_rebin10_fakes_DY_stack_3 = new TH1D("m3l_rebin10_fakes_DY_stack_3","dummy",10, xAxis5);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(2,1.719522);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(3,5.158566);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(5,17.19522);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(6,10.31713);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(7,13.75618);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(8,24.07331);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(9,22.35379);
   m3l_rebin10_fakes_DY_stack_3->SetBinContent(10,22.35379);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(2,1.719522);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(3,2.9783);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(5,5.437606);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(6,4.211952);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(7,4.863543);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(8,6.433863);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(9,6.199825);
   m3l_rebin10_fakes_DY_stack_3->SetBinError(10,6.199825);
   m3l_rebin10_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin10_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin10_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin10_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_fakes_DY_stack_3,"");
   Double_t xAxis6[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1D *m3l_rebin10_prompt_ZZ_stack_4 = new TH1D("m3l_rebin10_prompt_ZZ_stack_4","dummy",10, xAxis6);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(5,2.935767);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(6,3.302737);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(7,6.972446);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(8,12.29352);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(9,15.96323);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinContent(10,31.74298);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(5,0.7339416);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(6,0.7784627);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(7,1.13108);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(8,1.501893);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(9,1.711438);
   m3l_rebin10_prompt_ZZ_stack_4->SetBinError(10,2.413374);
   m3l_rebin10_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin10_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin10_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin10_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_prompt_ZZ_stack_4,"");
   Double_t xAxis7[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1D *m3l_rebin10_prompt_WZ_stack_5 = new TH1D("m3l_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(3,0.180896);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(4,1.085376);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(5,9.677935);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(6,38.16905);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(7,72.44884);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(8,203.2366);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(9,304.9002);
   m3l_rebin10_prompt_WZ_stack_5->SetBinContent(10,620.3828);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(3,0.1279128);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(4,0.313321);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(5,0.9356013);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(6,1.85804);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(7,2.559854);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(8,4.287464);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(9,5.251439);
   m3l_rebin10_prompt_WZ_stack_5->SetBinError(10,7.490819);
   m3l_rebin10_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin10_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin10_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin10_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_stack->Add(m3l_rebin10_prompt_WZ_stack_5,"");
   m3l_rebin10_stack->Draw("same hist");
   Double_t xAxis8[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1D *m3l_rebin10_total__2 = new TH1D("m3l_rebin10_total__2","dummy",10, xAxis8);
   m3l_rebin10_total__2->SetBinContent(2,1.719522);
   m3l_rebin10_total__2->SetBinContent(3,5.651093);
   m3l_rebin10_total__2->SetBinContent(4,1.218364);
   m3l_rebin10_total__2->SetBinContent(5,30.65251);
   m3l_rebin10_total__2->SetBinContent(6,53.94155);
   m3l_rebin10_total__2->SetBinContent(7,96.41484);
   m3l_rebin10_total__2->SetBinContent(8,247.547);
   m3l_rebin10_total__2->SetBinContent(9,355.447);
   m3l_rebin10_total__2->SetBinContent(10,703.3526);
   m3l_rebin10_total__2->SetBinError(2,1.719522);
   m3l_rebin10_total__2->SetBinError(3,2.985376);
   m3l_rebin10_total__2->SetBinError(4,0.3271285);
   m3l_rebin10_total__2->SetBinError(5,5.571606);
   m3l_rebin10_total__2->SetBinError(6,4.685321);
   m3l_rebin10_total__2->SetBinError(7,5.630864);
   m3l_rebin10_total__2->SetBinError(8,7.909728);
   m3l_rebin10_total__2->SetBinError(9,8.353522);
   m3l_rebin10_total__2->SetBinError(10,10.11648);
   m3l_rebin10_total__2->SetMinimum(0);
   m3l_rebin10_total__2->SetMaximum(1406.705);
   m3l_rebin10_total__2->SetEntries(15152);
   m3l_rebin10_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin10_total__2->SetFillColor(ci);
   m3l_rebin10_total__2->SetMarkerStyle(20);
   m3l_rebin10_total__2->SetMarkerSize(1.1);
   m3l_rebin10_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin10_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin10_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin10_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin10_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin10_total_errors_fx3001[9] = {
   118.7521,
   131.2534,
   143.7556,
   158.1375,
   174.3982,
   190.6589,
   213.3311,
   248.5004,
   384.564};
   Double_t m3l_rebin10_total_errors_fy3001[9] = {
   1.719522,
   5.651093,
   1.218364,
   30.65251,
   53.94155,
   96.41484,
   247.547,
   355.447,
   703.3526};
   Double_t m3l_rebin10_total_errors_felx3001[9] = {
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t m3l_rebin10_total_errors_fely3001[9] = {
   1.719522,
   2.985376,
   0.3271285,
   5.571606,
   4.685321,
   5.630864,
   7.909728,
   8.353522,
   10.11648};
   Double_t m3l_rebin10_total_errors_fehx3001[9] = {
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t m3l_rebin10_total_errors_fehy3001[9] = {
   1.719522,
   2.985376,
   0.3271285,
   5.571606,
   4.685321,
   5.630864,
   7.909728,
   8.353522,
   10.11648};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,m3l_rebin10_total_errors_fx3001,m3l_rebin10_total_errors_fy3001,m3l_rebin10_total_errors_felx3001,m3l_rebin10_total_errors_fehx3001,m3l_rebin10_total_errors_fely3001,m3l_rebin10_total_errors_fehy3001);
   grae->SetName("m3l_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin10_total_errors3001 = new TH1F("Graph_m3l_rebin10_total_errors3001","Graph",100,73.75151,538.7499);
   Graph_m3l_rebin10_total_errors3001->SetMinimum(0);
   Graph_m3l_rebin10_total_errors3001->SetMaximum(784.816);
   Graph_m3l_rebin10_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin10_total_errors3001->SetStats(0);
   Graph_m3l_rebin10_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin10_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin10_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin10_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin10_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin10_data_graph_fx3002[10] = {
   56.25069,
   118.7521,
   131.2534,
   143.7556,
   158.1375,
   174.3982,
   190.6589,
   213.3311,
   248.5004,
   384.564};
   Double_t m3l_rebin10_data_graph_fy3002[10] = {
   0,
   3,
   4,
   4,
   19,
   61,
   113,
   252,
   348,
   709};
   Double_t m3l_rebin10_data_graph_felx3002[10] = {
   56.25069,
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t m3l_rebin10_data_graph_fely3002[10] = {
   0,
   1.632727,
   1.914367,
   1.914367,
   4.320299,
   7.788934,
   10.61461,
   15.86431,
   18.64619,
   26.62135};
   Double_t m3l_rebin10_data_graph_fehx3002[10] = {
   56.25069,
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t m3l_rebin10_data_graph_fehy3002[10] = {
   1.841055,
   2.918242,
   3.162815,
   3.162815,
   5.435307,
   8.853137,
   11.66178,
   16.89588,
   19.67306,
   27.64017};
   grae = new TGraphAsymmErrors(10,m3l_rebin10_data_graph_fx3002,m3l_rebin10_data_graph_fy3002,m3l_rebin10_data_graph_felx3002,m3l_rebin10_data_graph_fehx3002,m3l_rebin10_data_graph_fely3002,m3l_rebin10_data_graph_fehy3002);
   grae->SetName("m3l_rebin10_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin10_data_graph3002 = new TH1F("Graph_m3l_rebin10_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin10_data_graph3002->SetMinimum(0);
   Graph_m3l_rebin10_data_graph3002->SetMaximum(810.3042);
   Graph_m3l_rebin10_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin10_data_graph3002->SetStats(0);
   Graph_m3l_rebin10_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin10_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin10_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin10_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin10_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin10_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin10_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin10_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin10_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin10_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin10_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin10_total_errors","Total unc.","F");
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
   m3l_rebin10_canvas->cd();
  
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
   Double_t xAxis9[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1D *m3l_rebin10_total__3 = new TH1D("m3l_rebin10_total__3","dummy",10, xAxis9);
   m3l_rebin10_total__3->SetBinContent(2,1);
   m3l_rebin10_total__3->SetBinContent(3,1);
   m3l_rebin10_total__3->SetBinContent(4,1);
   m3l_rebin10_total__3->SetBinContent(5,1);
   m3l_rebin10_total__3->SetBinContent(6,1);
   m3l_rebin10_total__3->SetBinContent(7,1);
   m3l_rebin10_total__3->SetBinContent(8,1);
   m3l_rebin10_total__3->SetBinContent(9,1);
   m3l_rebin10_total__3->SetBinContent(10,1);
   m3l_rebin10_total__3->SetMinimum(0.5);
   m3l_rebin10_total__3->SetMaximum(2);
   m3l_rebin10_total__3->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin10_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin10_total__3->SetMarkerColor(ci);
   m3l_rebin10_total__3->SetMarkerSize(1.1);
   m3l_rebin10_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin10_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin10_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin10_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin10_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin10_total__3->GetYaxis()->SetDecimals();
   m3l_rebin10_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin10_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin10_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin10_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin10_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin10_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_total__3->Draw("AXIS");
   
   Double_t m3l_rebin10_total_errors_fx3003[9] = {
   118.7521,
   131.2534,
   143.7556,
   158.1375,
   174.3982,
   190.6589,
   213.3311,
   248.5004,
   384.564};
   Double_t m3l_rebin10_total_errors_fy3003[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin10_total_errors_felx3003[9] = {
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t m3l_rebin10_total_errors_fely3003[9] = {
   1,
   0.528283,
   0.2684981,
   0.1817667,
   0.08685922,
   0.05840246,
   0.03195243,
   0.02350145,
   0.01438323};
   Double_t m3l_rebin10_total_errors_fehx3003[9] = {
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t m3l_rebin10_total_errors_fehy3003[9] = {
   1,
   0.528283,
   0.2684981,
   0.1817667,
   0.08685922,
   0.05840246,
   0.03195243,
   0.02350145,
   0.01438323};
   grae = new TGraphAsymmErrors(9,m3l_rebin10_total_errors_fx3003,m3l_rebin10_total_errors_fy3003,m3l_rebin10_total_errors_felx3003,m3l_rebin10_total_errors_fehx3003,m3l_rebin10_total_errors_fely3003,m3l_rebin10_total_errors_fehy3003);
   grae->SetName("m3l_rebin10_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin10_total_errors_fx3004[9] = {
   118.7521,
   131.2534,
   143.7556,
   158.1375,
   174.3982,
   190.6589,
   213.3311,
   248.5004,
   384.564};
   Double_t m3l_rebin10_total_errors_fy3004[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3l_rebin10_total_errors_felx3004[9] = {
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t m3l_rebin10_total_errors_fely3004[9] = {
   1,
   0.528283,
   0.2684981,
   0.1817667,
   0.08685922,
   0.05840246,
   0.03195243,
   0.02350145,
   0.01438323};
   Double_t m3l_rebin10_total_errors_fehx3004[9] = {
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t m3l_rebin10_total_errors_fehy3004[9] = {
   1,
   0.528283,
   0.2684981,
   0.1817667,
   0.08685922,
   0.05840246,
   0.03195243,
   0.02350145,
   0.01438323};
   grae = new TGraphAsymmErrors(9,m3l_rebin10_total_errors_fx3004,m3l_rebin10_total_errors_fy3004,m3l_rebin10_total_errors_felx3004,m3l_rebin10_total_errors_fehx3004,m3l_rebin10_total_errors_fely3004,m3l_rebin10_total_errors_fehy3004);
   grae->SetName("m3l_rebin10_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[11] = {0, 112.5014, 125.0027, 137.5041, 150.0071, 166.2679, 182.5286, 198.7893, 227.8729, 269.128, 500}; 
   
   TH1D *m3l_rebin10_total__4 = new TH1D("m3l_rebin10_total__4","dummy",10, xAxis10);
   m3l_rebin10_total__4->SetBinContent(2,1);
   m3l_rebin10_total__4->SetBinContent(3,1);
   m3l_rebin10_total__4->SetBinContent(4,1);
   m3l_rebin10_total__4->SetBinContent(5,1);
   m3l_rebin10_total__4->SetBinContent(6,1);
   m3l_rebin10_total__4->SetBinContent(7,1);
   m3l_rebin10_total__4->SetBinContent(8,1);
   m3l_rebin10_total__4->SetBinContent(9,1);
   m3l_rebin10_total__4->SetBinContent(10,1);
   m3l_rebin10_total__4->SetMinimum(0.5);
   m3l_rebin10_total__4->SetMaximum(2);
   m3l_rebin10_total__4->SetEntries(15162);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin10_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin10_total__4->SetMarkerColor(ci);
   m3l_rebin10_total__4->SetMarkerSize(1.1);
   m3l_rebin10_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin10_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin10_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin10_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin10_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin10_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin10_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin10_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin10_total__4->GetYaxis()->SetDecimals();
   m3l_rebin10_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin10_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin10_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin10_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin10_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin10_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin10_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin10_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin10_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin10_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin10_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin10_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin10_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[10] = {
   56.25069,
   118.7521,
   131.2534,
   143.7556,
   158.1375,
   174.3982,
   190.6589,
   213.3311,
   248.5004,
   384.564};
   Double_t data_div_fy3005[10] = {
   0,
   1.744671,
   0.7078276,
   3.28309,
   0.6198514,
   1.130854,
   1.172019,
   1.017989,
   0.9790488,
   1.008029};
   Double_t data_div_felx3005[10] = {
   56.25069,
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t data_div_fely3005[10] = {
   0,
   0.9495236,
   0.3387605,
   1.57126,
   0.1409444,
   0.1443958,
   0.1100932,
   0.06408605,
   0.05245843,
   0.03784922};
   Double_t data_div_fehx3005[10] = {
   56.25069,
   6.250687,
   6.250687,
   6.251511,
   8.130363,
   8.130356,
   8.130356,
   14.54181,
   20.62753,
   115.436};
   Double_t data_div_fehy3005[10] = {
   0,
   1.697124,
   0.559682,
   2.595952,
   0.1773201,
   0.1641246,
   0.1209542,
   0.06825324,
   0.05534738,
   0.03929775};
   grae = new TGraphAsymmErrors(10,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin10_data_graph3005 = new TH1F("Graph_m3l_rebin10_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin10_data_graph3005->SetMinimum(0);
   Graph_m3l_rebin10_data_graph3005->SetMaximum(810.3042);
   Graph_m3l_rebin10_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin10_data_graph3005->SetStats(0);
   Graph_m3l_rebin10_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin10_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin10_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin10_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin10_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin10_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin10_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin10_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin10_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin10_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin10_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin10_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin10_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin10_canvas->cd();
   m3l_rebin10_canvas->Modified();
   m3l_rebin10_canvas->cd();
   m3l_rebin10_canvas->SetSelected(m3l_rebin10_canvas);
}
