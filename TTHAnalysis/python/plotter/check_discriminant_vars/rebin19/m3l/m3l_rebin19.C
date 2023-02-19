void m3l_rebin19()
{
//=========Macro generated from canvas: m3l_rebin19_canvas/m3l_rebin19
//=========  (Thu Dec  8 14:38:00 2022) by ROOT version 6.12/07
   TCanvas *m3l_rebin19_canvas = new TCanvas("m3l_rebin19_canvas", "m3l_rebin19",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin19_canvas->SetHighLightColor(2);
   m3l_rebin19_canvas->Range(0,0,1,1);
   m3l_rebin19_canvas->SetFillColor(0);
   m3l_rebin19_canvas->SetBorderMode(0);
   m3l_rebin19_canvas->SetBorderSize(2);
   m3l_rebin19_canvas->SetTickx(1);
   m3l_rebin19_canvas->SetTicky(1);
   m3l_rebin19_canvas->SetLeftMargin(0.18);
   m3l_rebin19_canvas->SetRightMargin(0.04);
   m3l_rebin19_canvas->SetBottomMargin(0.13);
   m3l_rebin19_canvas->SetFrameFillStyle(0);
   m3l_rebin19_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-115.3846,-24.64293,525.641,961.0743);
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
   Double_t xAxis1[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1D *m3l_rebin19_total__1 = new TH1D("m3l_rebin19_total__1","dummy",19, xAxis1);
   m3l_rebin19_total__1->SetBinContent(4,1.719522);
   m3l_rebin19_total__1->SetBinContent(5,1.786016);
   m3l_rebin19_total__1->SetBinContent(6,3.955525);
   m3l_rebin19_total__1->SetBinContent(7,0.7661244);
   m3l_rebin19_total__1->SetBinContent(8,8.370386);
   m3l_rebin19_total__1->SetBinContent(9,11.46772);
   m3l_rebin19_total__1->SetBinContent(10,19.89054);
   m3l_rebin19_total__1->SetBinContent(11,31.92778);
   m3l_rebin19_total__1->SetBinContent(12,37.0267);
   m3l_rebin19_total__1->SetBinContent(13,56.69741);
   m3l_rebin19_total__1->SetBinContent(14,92.95511);
   m3l_rebin19_total__1->SetBinContent(15,139.239);
   m3l_rebin19_total__1->SetBinContent(16,149.8098);
   m3l_rebin19_total__1->SetBinContent(17,209.333);
   m3l_rebin19_total__1->SetBinContent(18,280.0342);
   m3l_rebin19_total__1->SetBinContent(19,450.9656);
   m3l_rebin19_total__1->SetBinError(4,1.719522);
   m3l_rebin19_total__1->SetBinError(5,1.720807);
   m3l_rebin19_total__1->SetBinError(6,2.441204);
   m3l_rebin19_total__1->SetBinError(7,0.2571164);
   m3l_rebin19_total__1->SetBinError(8,3.460619);
   m3l_rebin19_total__1->SetBinError(9,3.104225);
   m3l_rebin19_total__1->SetBinError(10,3.21869);
   m3l_rebin19_total__1->SetBinError(11,4.118377);
   m3l_rebin19_total__1->SetBinError(12,3.029675);
   m3l_rebin19_total__1->SetBinError(13,5.008791);
   m3l_rebin19_total__1->SetBinError(14,4.778056);
   m3l_rebin19_total__1->SetBinError(15,5.957362);
   m3l_rebin19_total__1->SetBinError(16,5.307584);
   m3l_rebin19_total__1->SetBinError(17,6.694257);
   m3l_rebin19_total__1->SetBinError(18,6.547475);
   m3l_rebin19_total__1->SetBinError(19,7.877165);
   m3l_rebin19_total__1->SetMinimum(0);
   m3l_rebin19_total__1->SetMaximum(901.9313);
   m3l_rebin19_total__1->SetEntries(15152);
   m3l_rebin19_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   m3l_rebin19_total__1->SetFillColor(ci);
   m3l_rebin19_total__1->SetMarkerStyle(20);
   m3l_rebin19_total__1->SetMarkerSize(1.1);
   m3l_rebin19_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin19_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin19_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_total__1->GetXaxis()->SetLabelOffset(999);
   m3l_rebin19_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin19_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin19_total__1->GetXaxis()->SetTitleOffset(999);
   m3l_rebin19_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin19_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin19_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin19_total__1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin19_total__1->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin19_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_total__1->Draw("HIST");
   
   THStack *m3l_rebin19_stack = new THStack();
   m3l_rebin19_stack->SetName("m3l_rebin19_stack");
   m3l_rebin19_stack->SetTitle("m3l_rebin19");
   Double_t xAxis2[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1F *m3l_rebin19_stack_stack_1 = new TH1F("m3l_rebin19_stack_stack_1","m3l_rebin19",19, xAxis2);
   m3l_rebin19_stack_stack_1->SetMinimum(0);
   m3l_rebin19_stack_stack_1->SetMaximum(473.5139);
   m3l_rebin19_stack_stack_1->SetDirectory(0);
   m3l_rebin19_stack_stack_1->SetStats(0);
   m3l_rebin19_stack_stack_1->SetLineStyle(0);
   m3l_rebin19_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin19_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin19_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin19_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin19_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin19_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin19_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin19_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin19_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin19_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_stack->SetHistogram(m3l_rebin19_stack_stack_1);
   
   Double_t xAxis3[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1D *m3l_rebin19_fakes_VV_stack_1 = new TH1D("m3l_rebin19_fakes_VV_stack_1","dummy",19, xAxis3);
   m3l_rebin19_fakes_VV_stack_1->SetBinContent(14,0.09719337);
   m3l_rebin19_fakes_VV_stack_1->SetBinContent(16,0.1943867);
   m3l_rebin19_fakes_VV_stack_1->SetBinContent(18,0.09719337);
   m3l_rebin19_fakes_VV_stack_1->SetBinContent(19,0.2915801);
   m3l_rebin19_fakes_VV_stack_1->SetBinError(14,0.09719337);
   m3l_rebin19_fakes_VV_stack_1->SetBinError(16,0.1374522);
   m3l_rebin19_fakes_VV_stack_1->SetBinError(18,0.09719337);
   m3l_rebin19_fakes_VV_stack_1->SetBinError(19,0.1683439);
   m3l_rebin19_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin19_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin19_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin19_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin19_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin19_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin19_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin19_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin19_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin19_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin19_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin19_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin19_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin19_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin19_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin19_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_stack->Add(m3l_rebin19_fakes_VV_stack_1,"");
   Double_t xAxis4[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1D *m3l_rebin19_fakes_TT_stack_2 = new TH1D("m3l_rebin19_fakes_TT_stack_2","dummy",19, xAxis4);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(5,0.06649422);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(6,0.2451369);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(7,0.1329884);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(8,0.1329884);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(9,0.3989653);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(10,0.7770907);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(11,0.9765733);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(12,1.620676);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(13,1.72885);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(14,3.324711);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(15,3.923159);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(16,5.053561);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(17,7.048388);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(18,12.59222);
   m3l_rebin19_fakes_TT_stack_2->SetBinContent(19,17.02252);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(5,0.06649422);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(6,0.1463565);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(7,0.09403703);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(8,0.09403703);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(9,0.1628769);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(10,0.2383109);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(11,0.2646819);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(12,0.3435195);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(13,0.3390553);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(14,0.4701852);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(15,0.5107518);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(16,0.5796832);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(17,0.6973973);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(18,0.9206249);
   m3l_rebin19_fakes_TT_stack_2->SetBinError(19,1.076303);
   m3l_rebin19_fakes_TT_stack_2->SetEntries(841);

   ci = TColor::GetColor("#666666");
   m3l_rebin19_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin19_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin19_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin19_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin19_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin19_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin19_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin19_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin19_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin19_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin19_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin19_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin19_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin19_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin19_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_stack->Add(m3l_rebin19_fakes_TT_stack_2,"");
   Double_t xAxis5[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1D *m3l_rebin19_fakes_DY_stack_3 = new TH1D("m3l_rebin19_fakes_DY_stack_3","dummy",19, xAxis5);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(4,1.719522);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(5,1.719522);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(6,3.439044);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(8,6.878088);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(9,5.158566);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(10,5.158566);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(11,8.597611);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(12,3.439044);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(13,12.03665);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(14,8.597611);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(15,13.75618);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(16,8.597611);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(17,15.4757);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(18,10.31713);
   m3l_rebin19_fakes_DY_stack_3->SetBinContent(19,12.03665);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(4,1.719522);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(5,1.719522);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(6,2.431771);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(8,3.439044);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(9,2.9783);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(10,2.9783);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(11,3.844968);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(12,2.431771);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(13,4.549428);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(14,3.844968);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(15,4.863543);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(16,3.844968);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(17,5.158566);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(18,4.211952);
   m3l_rebin19_fakes_DY_stack_3->SetBinError(19,4.549428);
   m3l_rebin19_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin19_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin19_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin19_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin19_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin19_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin19_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin19_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin19_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin19_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin19_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin19_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin19_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin19_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin19_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin19_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_stack->Add(m3l_rebin19_fakes_DY_stack_3,"");
   Double_t xAxis6[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1D *m3l_rebin19_prompt_ZZ_stack_4 = new TH1D("m3l_rebin19_prompt_ZZ_stack_4","dummy",19, xAxis6);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(8,0.1834854);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(9,2.201825);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(10,1.834854);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(11,0.917427);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(12,2.752281);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(13,4.220164);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(14,5.321077);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(15,6.238504);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(16,7.889873);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(17,8.8073);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(18,11.00912);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinContent(19,21.83476);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(8,0.1834854);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(9,0.6356121);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(10,0.5802318);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(11,0.4102858);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(12,0.7106359);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(13,0.8799651);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(14,0.9880992);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(15,1.069895);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(16,1.203194);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(17,1.271224);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(18,1.421272);
   m3l_rebin19_prompt_ZZ_stack_4->SetBinError(19,2.00159);
   m3l_rebin19_prompt_ZZ_stack_4->SetEntries(403);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin19_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin19_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin19_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin19_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin19_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin19_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin19_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin19_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin19_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin19_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin19_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin19_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin19_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin19_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin19_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_stack->Add(m3l_rebin19_prompt_ZZ_stack_4,"");
   Double_t xAxis7[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1D *m3l_rebin19_prompt_WZ_stack_5 = new TH1D("m3l_rebin19_prompt_WZ_stack_5","dummy",19, xAxis7);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(6,0.271344);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(7,0.6331359);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(8,1.175824);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(9,3.708368);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(10,12.12003);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(11,21.43617);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(12,29.2147);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(13,38.71174);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(14,75.61452);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(15,115.3212);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(16,128.0744);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(17,178.0016);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(18,246.0185);
   m3l_rebin19_prompt_WZ_stack_5->SetBinContent(19,399.7801);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(6,0.1566605);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(7,0.2393029);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(8,0.3261149);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(9,0.5791497);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(10,1.047011);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(11,1.392429);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(12,1.625549);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(13,1.871203);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(14,2.615183);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(15,3.229639);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(16,3.403538);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(17,4.012467);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(18,4.71719);
   m3l_rebin19_prompt_WZ_stack_5->SetBinError(19,6.013261);
   m3l_rebin19_prompt_WZ_stack_5->SetEntries(13825);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin19_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin19_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin19_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin19_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin19_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin19_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin19_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin19_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin19_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin19_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin19_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin19_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin19_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin19_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin19_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_stack->Add(m3l_rebin19_prompt_WZ_stack_5,"");
   m3l_rebin19_stack->Draw("same hist");
   Double_t xAxis8[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1D *m3l_rebin19_total__2 = new TH1D("m3l_rebin19_total__2","dummy",19, xAxis8);
   m3l_rebin19_total__2->SetBinContent(4,1.719522);
   m3l_rebin19_total__2->SetBinContent(5,1.786016);
   m3l_rebin19_total__2->SetBinContent(6,3.955525);
   m3l_rebin19_total__2->SetBinContent(7,0.7661244);
   m3l_rebin19_total__2->SetBinContent(8,8.370386);
   m3l_rebin19_total__2->SetBinContent(9,11.46772);
   m3l_rebin19_total__2->SetBinContent(10,19.89054);
   m3l_rebin19_total__2->SetBinContent(11,31.92778);
   m3l_rebin19_total__2->SetBinContent(12,37.0267);
   m3l_rebin19_total__2->SetBinContent(13,56.69741);
   m3l_rebin19_total__2->SetBinContent(14,92.95511);
   m3l_rebin19_total__2->SetBinContent(15,139.239);
   m3l_rebin19_total__2->SetBinContent(16,149.8098);
   m3l_rebin19_total__2->SetBinContent(17,209.333);
   m3l_rebin19_total__2->SetBinContent(18,280.0342);
   m3l_rebin19_total__2->SetBinContent(19,450.9656);
   m3l_rebin19_total__2->SetBinError(4,1.719522);
   m3l_rebin19_total__2->SetBinError(5,1.720807);
   m3l_rebin19_total__2->SetBinError(6,2.441204);
   m3l_rebin19_total__2->SetBinError(7,0.2571164);
   m3l_rebin19_total__2->SetBinError(8,3.460619);
   m3l_rebin19_total__2->SetBinError(9,3.104225);
   m3l_rebin19_total__2->SetBinError(10,3.21869);
   m3l_rebin19_total__2->SetBinError(11,4.118377);
   m3l_rebin19_total__2->SetBinError(12,3.029675);
   m3l_rebin19_total__2->SetBinError(13,5.008791);
   m3l_rebin19_total__2->SetBinError(14,4.778056);
   m3l_rebin19_total__2->SetBinError(15,5.957362);
   m3l_rebin19_total__2->SetBinError(16,5.307584);
   m3l_rebin19_total__2->SetBinError(17,6.694257);
   m3l_rebin19_total__2->SetBinError(18,6.547475);
   m3l_rebin19_total__2->SetBinError(19,7.877165);
   m3l_rebin19_total__2->SetMinimum(0);
   m3l_rebin19_total__2->SetMaximum(901.9313);
   m3l_rebin19_total__2->SetEntries(15152);
   m3l_rebin19_total__2->SetDirectory(0);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin19_total__2->SetFillColor(ci);
   m3l_rebin19_total__2->SetMarkerStyle(20);
   m3l_rebin19_total__2->SetMarkerSize(1.1);
   m3l_rebin19_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin19_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin19_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_total__2->GetXaxis()->SetLabelOffset(999);
   m3l_rebin19_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin19_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin19_total__2->GetXaxis()->SetTitleOffset(999);
   m3l_rebin19_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin19_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin19_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin19_total__2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin19_total__2->GetYaxis()->SetTitleOffset(1.48);
   m3l_rebin19_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin19_total_errors_fx3001[16] = {
   123.0288,
   129.6085,
   136.1882,
   142.7679,
   149.7441,
   157.7096,
   166.2679,
   174.8261,
   183.3844,
   191.9427,
   202.5373,
   216.7778,
   232.6279,
   252.9428,
   288.8735,
   406.2072};
   Double_t m3l_rebin19_total_errors_fy3001[16] = {
   1.719522,
   1.786016,
   3.955525,
   0.7661244,
   8.370386,
   11.46772,
   19.89054,
   31.92778,
   37.0267,
   56.69741,
   92.95511,
   139.239,
   149.8098,
   209.333,
   280.0342,
   450.9656};
   Double_t m3l_rebin19_total_errors_felx3001[16] = {
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t m3l_rebin19_total_errors_fely3001[16] = {
   1.719522,
   1.720807,
   2.441204,
   0.2571164,
   3.460619,
   3.104225,
   3.21869,
   4.118377,
   3.029675,
   5.008791,
   4.778056,
   5.957362,
   5.307584,
   6.694257,
   6.547475,
   7.877165};
   Double_t m3l_rebin19_total_errors_fehx3001[16] = {
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t m3l_rebin19_total_errors_fehy3001[16] = {
   1.719522,
   1.720807,
   2.441204,
   0.2571164,
   3.460619,
   3.104225,
   3.21869,
   4.118377,
   3.029675,
   5.008791,
   4.778056,
   5.957362,
   5.307584,
   6.694257,
   6.547475,
   7.877165};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,m3l_rebin19_total_errors_fx3001,m3l_rebin19_total_errors_fy3001,m3l_rebin19_total_errors_felx3001,m3l_rebin19_total_errors_fehx3001,m3l_rebin19_total_errors_fely3001,m3l_rebin19_total_errors_fehy3001);
   grae->SetName("m3l_rebin19_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin19_total_errors3001 = new TH1F("Graph_m3l_rebin19_total_errors3001","Graph",100,81.71292,538.0261);
   Graph_m3l_rebin19_total_errors3001->SetMinimum(0);
   Graph_m3l_rebin19_total_errors3001->SetMaximum(504.7271);
   Graph_m3l_rebin19_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin19_total_errors3001->SetStats(0);
   Graph_m3l_rebin19_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin19_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin19_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin19_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin19_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin19_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin19_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin19_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin19_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin19_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin19_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin19_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin19_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin19_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin19_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin19_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin19_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin19_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin19_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin19_total_errors3001);
   
   grae->Draw("pe2 ");
   
   Double_t m3l_rebin19_data_graph_fx3002[19] = {
   53.28984,
   109.8695,
   116.4492,
   123.0288,
   129.6085,
   136.1882,
   142.7679,
   149.7441,
   157.7096,
   166.2679,
   174.8261,
   183.3844,
   191.9427,
   202.5373,
   216.7778,
   232.6279,
   252.9428,
   288.8735,
   406.2072};
   Double_t m3l_rebin19_data_graph_fy3002[19] = {
   0,
   0,
   1,
   3,
   3,
   0,
   2,
   4,
   11,
   15,
   35,
   52,
   55,
   112,
   129,
   132,
   222,
   286,
   451};
   Double_t m3l_rebin19_data_graph_felx3002[19] = {
   53.28984,
   3.289833,
   3.289837,
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t m3l_rebin19_data_graph_fely3002[19] = {
   0,
   0,
   0.8272525,
   1.632727,
   1.632727,
   0,
   1.29183,
   1.914367,
   3.265636,
   3.829449,
   5.887788,
   7.187977,
   7.393726,
   10.5674,
   11.34331,
   11.47479,
   14.88875,
   16.90201,
   21.22934};
   Double_t m3l_rebin19_data_graph_fehx3002[19] = {
   53.28984,
   3.289833,
   3.289837,
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t m3l_rebin19_data_graph_fehy3002[19] = {
   1.841055,
   1.841055,
   2.29957,
   2.918242,
   2.918242,
   1.841055,
   2.63791,
   3.162815,
   4.416609,
   4.958839,
   6.972554,
   8.257518,
   8.461342,
   11.61477,
   12.38745,
   12.51843,
   15.92239,
   17.93164,
   22.25294};
   grae = new TGraphAsymmErrors(19,m3l_rebin19_data_graph_fx3002,m3l_rebin19_data_graph_fy3002,m3l_rebin19_data_graph_felx3002,m3l_rebin19_data_graph_fehx3002,m3l_rebin19_data_graph_fely3002,m3l_rebin19_data_graph_fehy3002);
   grae->SetName("m3l_rebin19_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin19_data_graph3002 = new TH1F("Graph_m3l_rebin19_data_graph3002","Graph",100,0,550);
   Graph_m3l_rebin19_data_graph3002->SetMinimum(0);
   Graph_m3l_rebin19_data_graph3002->SetMaximum(520.5782);
   Graph_m3l_rebin19_data_graph3002->SetDirectory(0);
   Graph_m3l_rebin19_data_graph3002->SetStats(0);
   Graph_m3l_rebin19_data_graph3002->SetLineStyle(0);
   Graph_m3l_rebin19_data_graph3002->SetMarkerStyle(20);
   Graph_m3l_rebin19_data_graph3002->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin19_data_graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin19_data_graph3002->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin19_data_graph3002->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin19_data_graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin19_data_graph3002->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin19_data_graph3002->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin19_data_graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin19_data_graph3002->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin19_data_graph3002->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin19_data_graph3002->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin19_data_graph3002->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin19_data_graph3002->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin19_data_graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin19_data_graph3002->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin19_data_graph3002->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin19_data_graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin19_data_graph3002);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin19_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("m3l_rebin19_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin19_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin19_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin19_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin19_total_errors","Total unc.","F");
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
   m3l_rebin19_canvas->cd();
  
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
   Double_t xAxis9[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1D *m3l_rebin19_total__3 = new TH1D("m3l_rebin19_total__3","dummy",19, xAxis9);
   m3l_rebin19_total__3->SetBinContent(4,1);
   m3l_rebin19_total__3->SetBinContent(5,1);
   m3l_rebin19_total__3->SetBinContent(6,1);
   m3l_rebin19_total__3->SetBinContent(7,1);
   m3l_rebin19_total__3->SetBinContent(8,1);
   m3l_rebin19_total__3->SetBinContent(9,1);
   m3l_rebin19_total__3->SetBinContent(10,1);
   m3l_rebin19_total__3->SetBinContent(11,1);
   m3l_rebin19_total__3->SetBinContent(12,1);
   m3l_rebin19_total__3->SetBinContent(13,1);
   m3l_rebin19_total__3->SetBinContent(14,1);
   m3l_rebin19_total__3->SetBinContent(15,1);
   m3l_rebin19_total__3->SetBinContent(16,1);
   m3l_rebin19_total__3->SetBinContent(17,1);
   m3l_rebin19_total__3->SetBinContent(18,1);
   m3l_rebin19_total__3->SetBinContent(19,1);
   m3l_rebin19_total__3->SetMinimum(0.5);
   m3l_rebin19_total__3->SetMaximum(2);
   m3l_rebin19_total__3->SetEntries(15171);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin19_total__3->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin19_total__3->SetMarkerColor(ci);
   m3l_rebin19_total__3->SetMarkerSize(1.1);
   m3l_rebin19_total__3->GetXaxis()->SetTitle("m3l");
   m3l_rebin19_total__3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin19_total__3->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_total__3->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin19_total__3->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin19_total__3->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin19_total__3->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_total__3->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin19_total__3->GetYaxis()->SetDecimals();
   m3l_rebin19_total__3->GetYaxis()->SetNdivisions(505);
   m3l_rebin19_total__3->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_total__3->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin19_total__3->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin19_total__3->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin19_total__3->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin19_total__3->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_total__3->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_total__3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_total__3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_total__3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_total__3->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_total__3->Draw("AXIS");
   
   Double_t m3l_rebin19_total_errors_fx3003[16] = {
   123.0288,
   129.6085,
   136.1882,
   142.7679,
   149.7441,
   157.7096,
   166.2679,
   174.8261,
   183.3844,
   191.9427,
   202.5373,
   216.7778,
   232.6279,
   252.9428,
   288.8735,
   406.2072};
   Double_t m3l_rebin19_total_errors_fy3003[16] = {
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
   1,
   1,
   1,
   1};
   Double_t m3l_rebin19_total_errors_felx3003[16] = {
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t m3l_rebin19_total_errors_fely3003[16] = {
   1,
   0.9634891,
   0.617163,
   0.3356066,
   0.413436,
   0.2706924,
   0.1618201,
   0.1289904,
   0.08182407,
   0.08834251,
   0.05140176,
   0.04278514,
   0.03542882,
   0.03197898,
   0.02338098,
   0.01746733};
   Double_t m3l_rebin19_total_errors_fehx3003[16] = {
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t m3l_rebin19_total_errors_fehy3003[16] = {
   1,
   0.9634891,
   0.617163,
   0.3356066,
   0.413436,
   0.2706924,
   0.1618201,
   0.1289904,
   0.08182407,
   0.08834251,
   0.05140176,
   0.04278514,
   0.03542882,
   0.03197898,
   0.02338098,
   0.01746733};
   grae = new TGraphAsymmErrors(16,m3l_rebin19_total_errors_fx3003,m3l_rebin19_total_errors_fy3003,m3l_rebin19_total_errors_felx3003,m3l_rebin19_total_errors_fehx3003,m3l_rebin19_total_errors_fely3003,m3l_rebin19_total_errors_fehy3003);
   grae->SetName("m3l_rebin19_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2");
   
   Double_t m3l_rebin19_total_errors_fx3004[16] = {
   123.0288,
   129.6085,
   136.1882,
   142.7679,
   149.7441,
   157.7096,
   166.2679,
   174.8261,
   183.3844,
   191.9427,
   202.5373,
   216.7778,
   232.6279,
   252.9428,
   288.8735,
   406.2072};
   Double_t m3l_rebin19_total_errors_fy3004[16] = {
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
   1,
   1,
   1,
   1};
   Double_t m3l_rebin19_total_errors_felx3004[16] = {
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t m3l_rebin19_total_errors_fely3004[16] = {
   1,
   0.9634891,
   0.617163,
   0.3356066,
   0.413436,
   0.2706924,
   0.1618201,
   0.1289904,
   0.08182407,
   0.08834251,
   0.05140176,
   0.04278514,
   0.03542882,
   0.03197898,
   0.02338098,
   0.01746733};
   Double_t m3l_rebin19_total_errors_fehx3004[16] = {
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t m3l_rebin19_total_errors_fehy3004[16] = {
   1,
   0.9634891,
   0.617163,
   0.3356066,
   0.413436,
   0.2706924,
   0.1618201,
   0.1289904,
   0.08182407,
   0.08834251,
   0.05140176,
   0.04278514,
   0.03542882,
   0.03197898,
   0.02338098,
   0.01746733};
   grae = new TGraphAsymmErrors(16,m3l_rebin19_total_errors_fx3004,m3l_rebin19_total_errors_fy3004,m3l_rebin19_total_errors_felx3004,m3l_rebin19_total_errors_fehx3004,m3l_rebin19_total_errors_fely3004,m3l_rebin19_total_errors_fehy3004);
   grae->SetName("m3l_rebin19_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   Double_t xAxis10[20] = {0, 106.5797, 113.1593, 119.739, 126.3187, 132.8983, 139.478, 146.0577, 153.4305, 161.9887, 170.547, 179.1053, 187.6635, 196.2218, 208.8528, 224.7029, 240.553, 265.3326, 312.4144, 500}; 
   
   TH1D *m3l_rebin19_total__4 = new TH1D("m3l_rebin19_total__4","dummy",19, xAxis10);
   m3l_rebin19_total__4->SetBinContent(4,1);
   m3l_rebin19_total__4->SetBinContent(5,1);
   m3l_rebin19_total__4->SetBinContent(6,1);
   m3l_rebin19_total__4->SetBinContent(7,1);
   m3l_rebin19_total__4->SetBinContent(8,1);
   m3l_rebin19_total__4->SetBinContent(9,1);
   m3l_rebin19_total__4->SetBinContent(10,1);
   m3l_rebin19_total__4->SetBinContent(11,1);
   m3l_rebin19_total__4->SetBinContent(12,1);
   m3l_rebin19_total__4->SetBinContent(13,1);
   m3l_rebin19_total__4->SetBinContent(14,1);
   m3l_rebin19_total__4->SetBinContent(15,1);
   m3l_rebin19_total__4->SetBinContent(16,1);
   m3l_rebin19_total__4->SetBinContent(17,1);
   m3l_rebin19_total__4->SetBinContent(18,1);
   m3l_rebin19_total__4->SetBinContent(19,1);
   m3l_rebin19_total__4->SetMinimum(0.5);
   m3l_rebin19_total__4->SetMaximum(2);
   m3l_rebin19_total__4->SetEntries(15171);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin19_total__4->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3l_rebin19_total__4->SetMarkerColor(ci);
   m3l_rebin19_total__4->SetMarkerSize(1.1);
   m3l_rebin19_total__4->GetXaxis()->SetTitle("m3l");
   m3l_rebin19_total__4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin19_total__4->GetXaxis()->SetLabelFont(42);
   m3l_rebin19_total__4->GetXaxis()->SetLabelOffset(0.015);
   m3l_rebin19_total__4->GetXaxis()->SetLabelSize(0.1);
   m3l_rebin19_total__4->GetXaxis()->SetTitleSize(0.14);
   m3l_rebin19_total__4->GetXaxis()->SetTitleFont(42);
   m3l_rebin19_total__4->GetYaxis()->SetTitle("Data/pred.");
   m3l_rebin19_total__4->GetYaxis()->SetDecimals();
   m3l_rebin19_total__4->GetYaxis()->SetNdivisions(505);
   m3l_rebin19_total__4->GetYaxis()->SetLabelFont(42);
   m3l_rebin19_total__4->GetYaxis()->SetLabelOffset(0.01);
   m3l_rebin19_total__4->GetYaxis()->SetLabelSize(0.11);
   m3l_rebin19_total__4->GetYaxis()->SetTitleSize(0.14);
   m3l_rebin19_total__4->GetYaxis()->SetTitleOffset(0.62);
   m3l_rebin19_total__4->GetYaxis()->SetTitleFont(42);
   m3l_rebin19_total__4->GetZaxis()->SetLabelFont(42);
   m3l_rebin19_total__4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin19_total__4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin19_total__4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin19_total__4->GetZaxis()->SetTitleFont(42);
   m3l_rebin19_total__4->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3005[19] = {
   53.28984,
   109.8695,
   116.4492,
   123.0288,
   129.6085,
   136.1882,
   142.7679,
   149.7441,
   157.7096,
   166.2679,
   174.8261,
   183.3844,
   191.9427,
   202.5373,
   216.7778,
   232.6279,
   252.9428,
   288.8735,
   406.2072};
   Double_t data_div_fy3005[19] = {
   0,
   0,
   0,
   1.744671,
   1.679716,
   0,
   2.610542,
   0.4778752,
   0.9592139,
   0.7541273,
   1.096224,
   1.404392,
   0.970062,
   1.204883,
   0.9264644,
   0.8811173,
   1.060511,
   1.021304,
   1.000076};
   Double_t data_div_felx3005[19] = {
   53.28984,
   3.289833,
   3.289837,
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t data_div_fely3005[19] = {
   0,
   0,
   0,
   0.9495236,
   0.9141724,
   0,
   1.686188,
   0.2287071,
   0.2847676,
   0.1925261,
   0.1844095,
   0.1941296,
   0.1304068,
   0.1136828,
   0.08146648,
   0.07659576,
   0.07112472,
   0.06035693,
   0.0470753};
   Double_t data_div_fehx3005[19] = {
   53.28984,
   3.289833,
   3.289837,
   3.289833,
   3.289833,
   3.289841,
   3.289833,
   3.686378,
   4.279137,
   4.279137,
   4.279137,
   4.279137,
   4.279129,
   6.315498,
   7.925041,
   7.925041,
   12.38979,
   23.54094,
   93.79279};
   Double_t data_div_fehy3005[19] = {
   0,
   0,
   0,
   1.697124,
   1.633939,
   0.4654388,
   3.443188,
   0.3778577,
   0.3851339,
   0.2493064,
   0.2183851,
   0.2230152,
   0.1492368,
   0.1249504,
   0.08896538,
   0.08356215,
   0.0760625,
   0.06403376,
   0.0493451};
   grae = new TGraphAsymmErrors(19,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_rebin19_data_graph3005 = new TH1F("Graph_m3l_rebin19_data_graph3005","Graph",100,0,550);
   Graph_m3l_rebin19_data_graph3005->SetMinimum(0);
   Graph_m3l_rebin19_data_graph3005->SetMaximum(520.5782);
   Graph_m3l_rebin19_data_graph3005->SetDirectory(0);
   Graph_m3l_rebin19_data_graph3005->SetStats(0);
   Graph_m3l_rebin19_data_graph3005->SetLineStyle(0);
   Graph_m3l_rebin19_data_graph3005->SetMarkerStyle(20);
   Graph_m3l_rebin19_data_graph3005->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin19_data_graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin19_data_graph3005->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin19_data_graph3005->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin19_data_graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin19_data_graph3005->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin19_data_graph3005->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin19_data_graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin19_data_graph3005->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin19_data_graph3005->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin19_data_graph3005->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin19_data_graph3005->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin19_data_graph3005->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin19_data_graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin19_data_graph3005->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin19_data_graph3005->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin19_data_graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin19_data_graph3005);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("m3l_rebin19_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("m3l_rebin19_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   m3l_rebin19_canvas->cd();
   m3l_rebin19_canvas->Modified();
   m3l_rebin19_canvas->cd();
   m3l_rebin19_canvas->SetSelected(m3l_rebin19_canvas);
}
