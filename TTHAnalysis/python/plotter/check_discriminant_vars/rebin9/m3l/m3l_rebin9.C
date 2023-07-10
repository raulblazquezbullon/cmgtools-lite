void m3l_rebin9()
{
//=========Macro generated from canvas: m3l_rebin9_canvas/m3l_rebin9
//=========  (Mon Jul 10 18:58:32 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin9_canvas = new TCanvas("m3l_rebin9_canvas", "m3l_rebin9",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin9_canvas->SetHighLightColor(2);
   m3l_rebin9_canvas->Range(-115.3846,-183.5414,525.641,1228.316);
   m3l_rebin9_canvas->SetFillColor(0);
   m3l_rebin9_canvas->SetBorderMode(0);
   m3l_rebin9_canvas->SetBorderSize(2);
   m3l_rebin9_canvas->SetTickx(1);
   m3l_rebin9_canvas->SetTicky(1);
   m3l_rebin9_canvas->SetLeftMargin(0.18);
   m3l_rebin9_canvas->SetRightMargin(0.04);
   m3l_rebin9_canvas->SetTopMargin(0.06);
   m3l_rebin9_canvas->SetBottomMargin(0.13);
   m3l_rebin9_canvas->SetFrameFillStyle(0);
   m3l_rebin9_canvas->SetFrameBorderMode(0);
   m3l_rebin9_canvas->SetFrameFillStyle(0);
   m3l_rebin9_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[10] = {0, 113.9419, 127.8838, 141.8257, 157.4973, 175.6201, 193.7429, 221.7655, 262.019, 500}; 
   
   TH1D *m3l_rebin9_total__1 = new TH1D("m3l_rebin9_total__1","dummy",9, xAxis1);
   m3l_rebin9_total__1->SetBinContent(1,54.30829);
   m3l_rebin9_total__1->SetBinContent(2,218.1493);
   m3l_rebin9_total__1->SetBinContent(3,377.3682);
   m3l_rebin9_total__1->SetBinContent(4,412.2338);
   m3l_rebin9_total__1->SetBinContent(5,421.4348);
   m3l_rebin9_total__1->SetBinContent(6,338.6738);
   m3l_rebin9_total__1->SetBinContent(7,402.2377);
   m3l_rebin9_total__1->SetBinContent(8,343.2895);
   m3l_rebin9_total__1->SetBinContent(9,571.8021);
   m3l_rebin9_total__1->SetBinError(1,6.92259);
   m3l_rebin9_total__1->SetBinError(2,10.78686);
   m3l_rebin9_total__1->SetBinError(3,16.1033);
   m3l_rebin9_total__1->SetBinError(4,15.18007);
   m3l_rebin9_total__1->SetBinError(5,13.86813);
   m3l_rebin9_total__1->SetBinError(6,11.14852);
   m3l_rebin9_total__1->SetBinError(7,14.81252);
   m3l_rebin9_total__1->SetBinError(8,9.572549);
   m3l_rebin9_total__1->SetBinError(9,13.34752);
   m3l_rebin9_total__1->SetMinimum(0);
   m3l_rebin9_total__1->SetMaximum(1143.604);
   m3l_rebin9_total__1->SetEntries(15153);
   m3l_rebin9_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_total__1->SetFillColor(ci);
   m3l_rebin9_total__1->SetMarkerStyle(20);
   m3l_rebin9_total__1->SetMarkerSize(1.1);
   m3l_rebin9_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin9_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin9_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin9_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__1->Draw("HIST");
   
   THStack *m3l_rebin9_stack = new THStack();
   m3l_rebin9_stack->SetName("m3l_rebin9_stack");
   m3l_rebin9_stack->SetTitle("m3l_rebin9");
   Double_t xAxis2[10] = {0, 113.9419, 127.8838, 141.8257, 157.4973, 175.6201, 193.7429, 221.7655, 262.019, 500}; 
   
   TH1F *m3l_rebin9_stack_stack_1 = new TH1F("m3l_rebin9_stack_stack_1","m3l_rebin9",9, xAxis2);
   m3l_rebin9_stack_stack_1->SetMinimum(0);
   m3l_rebin9_stack_stack_1->SetMaximum(600.3922);
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
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->SetHistogram(m3l_rebin9_stack_stack_1);
   
   Double_t xAxis3[10] = {0, 113.9419, 127.8838, 141.8257, 157.4973, 175.6201, 193.7429, 221.7655, 262.019, 500}; 
   
   TH1D *m3l_rebin9_fakes_VV_stack_1 = new TH1D("m3l_rebin9_fakes_VV_stack_1","dummy",9, xAxis3);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(1,0.4031181);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(5,0.2060137);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(6,0.2026171);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(7,0.1938399);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(8,0.199151);
   m3l_rebin9_fakes_VV_stack_1->SetBinContent(9,0.205721);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(1,0.2850661);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(5,0.2060137);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(6,0.2026171);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(7,0.1938399);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(8,0.199151);
   m3l_rebin9_fakes_VV_stack_1->SetBinError(9,0.205721);
   m3l_rebin9_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin9_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin9_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin9_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin9_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
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
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_VV_stack_1,"");
   Double_t xAxis4[10] = {0, 113.9419, 127.8838, 141.8257, 157.4973, 175.6201, 193.7429, 221.7655, 262.019, 500}; 
   
   TH1D *m3l_rebin9_fakes_TT_stack_2 = new TH1D("m3l_rebin9_fakes_TT_stack_2","dummy",9, xAxis4);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(1,3.721713);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(2,8.629619);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(3,13.14804);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(4,16.00038);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(5,17.3602);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(6,11.78239);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(7,13.62457);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(8,16.67773);
   m3l_rebin9_fakes_TT_stack_2->SetBinContent(9,15.56396);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(1,0.7571756);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(2,1.126077);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(3,1.382471);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(4,1.49929);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(5,1.559944);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(6,1.286579);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(7,1.394996);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(8,1.545924);
   m3l_rebin9_fakes_TT_stack_2->SetBinError(9,1.539345);
   m3l_rebin9_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin9_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin9_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin9_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin9_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
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
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_TT_stack_2,"");
   Double_t xAxis5[10] = {0, 113.9419, 127.8838, 141.8257, 157.4973, 175.6201, 193.7429, 221.7655, 262.019, 500}; 
   
   TH1D *m3l_rebin9_fakes_DY_stack_3 = new TH1D("m3l_rebin9_fakes_DY_stack_3","dummy",9, xAxis5);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(1,10.90016);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(2,21.33497);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(3,54.00958);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(4,43.44544);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(5,32.15907);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(6,17.50628);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(7,40.37505);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(8,7.109632);
   m3l_rebin9_fakes_DY_stack_3->SetBinContent(9,18.33245);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(1,6.294354);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(2,8.715753);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(3,13.95137);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(4,12.54695);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(5,10.72798);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(6,7.835628);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(7,12.17611);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(8,5.029039);
   m3l_rebin9_fakes_DY_stack_3->SetBinError(9,8.199856);
   m3l_rebin9_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin9_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin9_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin9_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin9_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
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
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_fakes_DY_stack_3,"");
   Double_t xAxis6[10] = {0, 113.9419, 127.8838, 141.8257, 157.4973, 175.6201, 193.7429, 221.7655, 262.019, 500}; 
   
   TH1D *m3l_rebin9_prompt_ZZ_stack_4 = new TH1D("m3l_rebin9_prompt_ZZ_stack_4","dummy",9, xAxis6);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(1,1.515703);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(2,18.16101);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(3,21.69013);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(4,20.39039);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(5,22.7189);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(6,13.12861);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(7,15.75972);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(8,15.8673);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinContent(9,24.37679);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(1,0.7587768);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(2,2.651007);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(3,2.875264);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(4,2.802651);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(5,2.959247);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(6,2.252845);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(7,2.462753);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(8,2.479275);
   m3l_rebin9_prompt_ZZ_stack_4->SetBinError(9,3.097297);
   m3l_rebin9_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin9_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin9_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin9_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin9_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
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
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_prompt_ZZ_stack_4,"");
   Double_t xAxis7[10] = {0, 113.9419, 127.8838, 141.8257, 157.4973, 175.6201, 193.7429, 221.7655, 262.019, 500}; 
   
   TH1D *m3l_rebin9_prompt_WZ_stack_5 = new TH1D("m3l_rebin9_prompt_WZ_stack_5","dummy",9, xAxis7);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(1,37.7676);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(2,170.0237);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(3,288.5205);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(4,332.3976);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(5,348.9907);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(6,296.0539);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(7,332.2846);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(8,303.4356);
   m3l_rebin9_prompt_WZ_stack_5->SetBinContent(9,513.3231);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(1,2.65952);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(2,5.665345);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(3,7.382221);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(4,7.931331);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(5,8.124194);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(6,7.491376);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(7,7.943828);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(8,7.600402);
   m3l_rebin9_prompt_WZ_stack_5->SetBinError(9,9.945533);
   m3l_rebin9_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin9_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin9_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin9_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
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
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_stack->Add(m3l_rebin9_prompt_WZ_stack_5,"");
   m3l_rebin9_stack->Draw("same hist");
   Double_t xAxis8[10] = {0, 113.9419, 127.8838, 141.8257, 157.4973, 175.6201, 193.7429, 221.7655, 262.019, 500}; 
   
   TH1D *m3l_rebin9_total__2 = new TH1D("m3l_rebin9_total__2","dummy",9, xAxis8);
   m3l_rebin9_total__2->SetBinContent(1,54.30829);
   m3l_rebin9_total__2->SetBinContent(2,218.1493);
   m3l_rebin9_total__2->SetBinContent(3,377.3682);
   m3l_rebin9_total__2->SetBinContent(4,412.2338);
   m3l_rebin9_total__2->SetBinContent(5,421.4348);
   m3l_rebin9_total__2->SetBinContent(6,338.6738);
   m3l_rebin9_total__2->SetBinContent(7,402.2377);
   m3l_rebin9_total__2->SetBinContent(8,343.2895);
   m3l_rebin9_total__2->SetBinContent(9,571.8021);
   m3l_rebin9_total__2->SetBinError(1,6.92259);
   m3l_rebin9_total__2->SetBinError(2,10.78686);
   m3l_rebin9_total__2->SetBinError(3,16.1033);
   m3l_rebin9_total__2->SetBinError(4,15.18007);
   m3l_rebin9_total__2->SetBinError(5,13.86813);
   m3l_rebin9_total__2->SetBinError(6,11.14852);
   m3l_rebin9_total__2->SetBinError(7,14.81252);
   m3l_rebin9_total__2->SetBinError(8,9.572549);
   m3l_rebin9_total__2->SetBinError(9,13.34752);
   m3l_rebin9_total__2->SetMinimum(0);
   m3l_rebin9_total__2->SetMaximum(1143.604);
   m3l_rebin9_total__2->SetEntries(15153);
   m3l_rebin9_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin9_total__2->SetFillColor(ci);
   m3l_rebin9_total__2->SetMarkerStyle(20);
   m3l_rebin9_total__2->SetMarkerSize(1.1);
   m3l_rebin9_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin9_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin9_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin9_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin9_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin9_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin9_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin9_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin9_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin9_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin9_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin9_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin9_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin9_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin9_total_errors_fx3001[9] = {
   56.97096,
   120.9129,
   134.8548,
   149.6615,
   166.5587,
   184.6815,
   207.7542,
   241.8922,
   381.0095};
   Double_t m3l_rebin9_total_errors_fy3001[9] = {
   54.30829,
   218.1493,
   377.3682,
   412.2338,
   421.4348,
   338.6738,
   402.2377,
   343.2895,
   571.8021};
   Double_t m3l_rebin9_total_errors_felx3001[9] = {
   56.97096,
   6.970959,
   6.970955,
   7.835762,
   9.061409,
   9.061409,
   14.01129,
   20.12673,
   118.9905};
   Double_t m3l_rebin9_total_errors_fely3001[9] = {
   5.159994,
   17.91947,
   34.06582,
   35.50038,
   32.28683,
   25.45294,
   29.65412,
   26.39192,
   44.70669};
   Double_t m3l_rebin9_total_errors_fehx3001[9] = {
   56.97096,
   6.970959,
   6.970955,
   7.835762,
   9.061409,
   9.061409,
   14.01129,
   20.12673,
   118.9905};
   Double_t m3l_rebin9_total_errors_fehy3001[9] = {
   5.943073,
   21.65492,
   34.91323,
   33.82463,
   33.94875,
   26.54776,
   32.82316,
   28.09976,
   45.27511};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,m3l_rebin9_total_errors_fx3001,m3l_rebin9_total_errors_fy3001,m3l_rebin9_total_errors_felx3001,m3l_rebin9_total_errors_fehx3001,m3l_rebin9_total_errors_fely3001,m3l_rebin9_total_errors_fehy3001);
   grae->SetName("m3l_rebin9_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin9_total_errors3001 = new TH1F("Graph_m3l_rebin9_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin9_total_errors3001->SetMinimum(44.23347);
   Graph_m3l_rebin9_total_errors3001->SetMaximum(673.87);
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
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin9_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin9_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin9_prompt_WZ_stack_5","WZ","F");

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
   m3l_rebin9_canvas->Modified();
   m3l_rebin9_canvas->cd();
   m3l_rebin9_canvas->SetSelected(m3l_rebin9_canvas);
}
