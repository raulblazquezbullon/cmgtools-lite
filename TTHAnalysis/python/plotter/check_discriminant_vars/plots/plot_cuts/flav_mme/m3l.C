void m3l()
{
//=========Macro generated from canvas: m3l_canvas/m3l
//=========  (Wed Jul 12 04:34:53 2023) by ROOT version 6.24/07
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
   pad1->Range(-115.3846,-10.72822,525.641,418.4007);
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
   m3l_total__1->SetBinContent(3,283.9987);
   m3l_total__1->SetBinContent(4,304.7454);
   m3l_total__1->SetBinContent(5,148.7581);
   m3l_total__1->SetBinContent(6,77.59401);
   m3l_total__1->SetBinContent(7,40.53577);
   m3l_total__1->SetBinContent(8,19.99282);
   m3l_total__1->SetBinContent(9,14.14163);
   m3l_total__1->SetBinContent(10,28.59748);
   m3l_total__1->SetBinError(3,18.1815);
   m3l_total__1->SetBinError(4,12.58221);
   m3l_total__1->SetBinError(5,8.137537);
   m3l_total__1->SetBinError(6,5.284644);
   m3l_total__1->SetBinError(7,2.806023);
   m3l_total__1->SetBinError(8,2.016533);
   m3l_total__1->SetBinError(9,1.698949);
   m3l_total__1->SetBinError(10,2.436899);
   m3l_total__1->SetMinimum(0);
   m3l_total__1->SetMaximum(392.653);
   m3l_total__1->SetEntries(4215);
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
   m3l_stack_stack_1->SetMaximum(319.9826);
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
   m3l_fakes_VV_stack_1->SetBinContent(3,0.4031181);
   m3l_fakes_VV_stack_1->SetBinContent(4,0.4086308);
   m3l_fakes_VV_stack_1->SetBinError(3,0.2850661);
   m3l_fakes_VV_stack_1->SetBinError(4,0.2889556);
   m3l_fakes_VV_stack_1->SetEntries(8);

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
   m3l_fakes_TT_stack_2->SetBinContent(3,10.93427);
   m3l_fakes_TT_stack_2->SetBinContent(4,10.16848);
   m3l_fakes_TT_stack_2->SetBinContent(5,7.004078);
   m3l_fakes_TT_stack_2->SetBinContent(6,3.689451);
   m3l_fakes_TT_stack_2->SetBinContent(7,2.28863);
   m3l_fakes_TT_stack_2->SetBinContent(8,1.01188);
   m3l_fakes_TT_stack_2->SetBinContent(10,0.5736635);
   m3l_fakes_TT_stack_2->SetBinError(3,1.256645);
   m3l_fakes_TT_stack_2->SetBinError(4,1.190349);
   m3l_fakes_TT_stack_2->SetBinError(5,0.9907454);
   m3l_fakes_TT_stack_2->SetBinError(6,0.7238216);
   m3l_fakes_TT_stack_2->SetBinError(7,0.6044416);
   m3l_fakes_TT_stack_2->SetBinError(8,0.3825784);
   m3l_fakes_TT_stack_2->SetBinError(10,0.2868897);
   m3l_fakes_TT_stack_2->SetEntries(266);

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
   m3l_fakes_DY_stack_3->SetBinContent(3,79.8899);
   m3l_fakes_DY_stack_3->SetBinContent(4,28.86928);
   m3l_fakes_DY_stack_3->SetBinContent(5,10.84941);
   m3l_fakes_DY_stack_3->SetBinContent(6,3.684952);
   m3l_fakes_DY_stack_3->SetBinError(3,17.0357);
   m3l_fakes_DY_stack_3->SetBinError(4,10.20758);
   m3l_fakes_DY_stack_3->SetBinError(5,6.26404);
   m3l_fakes_DY_stack_3->SetBinError(6,3.684952);
   m3l_fakes_DY_stack_3->SetEntries(38);

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
   m3l_prompt_ZZ_stack_4->SetBinContent(3,11.52997);
   m3l_prompt_ZZ_stack_4->SetBinContent(4,12.31131);
   m3l_prompt_ZZ_stack_4->SetBinContent(5,5.797377);
   m3l_prompt_ZZ_stack_4->SetBinContent(6,1.957403);
   m3l_prompt_ZZ_stack_4->SetBinContent(7,0.78027);
   m3l_prompt_ZZ_stack_4->SetBinContent(8,1.202458);
   m3l_prompt_ZZ_stack_4->SetBinContent(9,0.7628347);
   m3l_prompt_ZZ_stack_4->SetBinContent(10,1.604219);
   m3l_prompt_ZZ_stack_4->SetBinError(3,2.105233);
   m3l_prompt_ZZ_stack_4->SetBinError(4,2.176461);
   m3l_prompt_ZZ_stack_4->SetBinError(5,1.497007);
   m3l_prompt_ZZ_stack_4->SetBinError(6,0.8755663);
   m3l_prompt_ZZ_stack_4->SetBinError(7,0.5519835);
   m3l_prompt_ZZ_stack_4->SetBinError(8,0.6943625);
   m3l_prompt_ZZ_stack_4->SetBinError(9,0.53941);
   m3l_prompt_ZZ_stack_4->SetBinError(10,0.802221);
   m3l_prompt_ZZ_stack_4->SetEntries(97);

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
   m3l_prompt_WZ_stack_5->SetBinContent(3,181.2415);
   m3l_prompt_WZ_stack_5->SetBinContent(4,252.9877);
   m3l_prompt_WZ_stack_5->SetBinContent(5,125.1073);
   m3l_prompt_WZ_stack_5->SetBinContent(6,68.2622);
   m3l_prompt_WZ_stack_5->SetBinContent(7,37.46687);
   m3l_prompt_WZ_stack_5->SetBinContent(8,17.77848);
   m3l_prompt_WZ_stack_5->SetBinContent(9,13.37879);
   m3l_prompt_WZ_stack_5->SetBinContent(10,26.4196);
   m3l_prompt_WZ_stack_5->SetBinError(3,5.853177);
   m3l_prompt_WZ_stack_5->SetBinError(4,6.919536);
   m3l_prompt_WZ_stack_5->SetBinError(5,4.87429);
   m3l_prompt_WZ_stack_5->SetBinError(6,3.613594);
   m3l_prompt_WZ_stack_5->SetBinError(7,2.683976);
   m3l_prompt_WZ_stack_5->SetBinError(8,1.854157);
   m3l_prompt_WZ_stack_5->SetBinError(9,1.611044);
   m3l_prompt_WZ_stack_5->SetBinError(10,2.283115);
   m3l_prompt_WZ_stack_5->SetEntries(3806);

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
   m3l_total__2->SetBinContent(3,283.9987);
   m3l_total__2->SetBinContent(4,304.7454);
   m3l_total__2->SetBinContent(5,148.7581);
   m3l_total__2->SetBinContent(6,77.59401);
   m3l_total__2->SetBinContent(7,40.53577);
   m3l_total__2->SetBinContent(8,19.99282);
   m3l_total__2->SetBinContent(9,14.14163);
   m3l_total__2->SetBinContent(10,28.59748);
   m3l_total__2->SetBinError(3,18.1815);
   m3l_total__2->SetBinError(4,12.58221);
   m3l_total__2->SetBinError(5,8.137537);
   m3l_total__2->SetBinError(6,5.284644);
   m3l_total__2->SetBinError(7,2.806023);
   m3l_total__2->SetBinError(8,2.016533);
   m3l_total__2->SetBinError(9,1.698949);
   m3l_total__2->SetBinError(10,2.436899);
   m3l_total__2->SetMinimum(0);
   m3l_total__2->SetMaximum(392.653);
   m3l_total__2->SetEntries(4215);
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
   283.9987,
   304.7454,
   148.7581,
   77.59401,
   40.53577,
   19.99282,
   14.14163,
   28.59748};
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
   32.96439,
   14.44476,
   8.027034,
   4.030689,
   2.295183,
   1.28962,
   0.5927399,
   2.35366};
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
   30.30709,
   15.65121,
   7.822755,
   4.043729,
   1.756316,
   0.825212,
   0.3430768,
   2.25934};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3l_total_errors_fx3001,m3l_total_errors_fy3001,m3l_total_errors_felx3001,m3l_total_errors_fehx3001,m3l_total_errors_fely3001,m3l_total_errors_fehy3001);
   grae->SetName("m3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_total_errors3001 = new TH1F("Graph_m3l_total_errors3001","Graph",100,60,540);
   Graph_m3l_total_errors3001->SetMinimum(12.194);
   Graph_m3l_total_errors3001->SetMaximum(351.0813);
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
   270,
   279,
   137,
   79,
   40,
   17,
   16,
   31};
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
   16.42185,
   16.69364,
   11.69064,
   8.869521,
   6.298123,
   4.082258,
   3.957873,
   5.537671};
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
   17.45235,
   17.72364,
   12.73347,
   9.925933,
   7.377414,
   5.203825,
   5.083169,
   6.627738};
   grae = new TGraphAsymmErrors(10,m3l_data_graph_fx3002,m3l_data_graph_fy3002,m3l_data_graph_felx3002,m3l_data_graph_fehx3002,m3l_data_graph_fely3002,m3l_data_graph_fehy3002);
   grae->SetName("m3l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_data_graph3002 = new TH1F("Graph_m3l_data_graph3002","Graph",100,0,550);
   Graph_m3l_data_graph3002->SetMinimum(0);
   Graph_m3l_data_graph3002->SetMaximum(326.396);
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
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
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
   entry=leg->AddEntry("m3l_fakes_TT_stack_2","Fakes TT","F");

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
   m3l_total__3->SetEntries(4225);

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
   0.1160723,
   0.04739944,
   0.0539603,
   0.05194588,
   0.05662118,
   0.06450417,
   0.04191454,
   0.08230306};
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
   0.1067156,
   0.05135832,
   0.05258707,
   0.05211394,
   0.04332757,
   0.04127542,
   0.02426006,
   0.07900486};
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
   m3l_total__4->SetEntries(4225);

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
   0.9507085,
   0.9155184,
   0.920958,
   1.01812,
   0.9867829,
   0.8503054,
   1.131411,
   1.084012};
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
   0.05782367,
   0.05477896,
   0.07858826,
   0.1143068,
   0.155372,
   0.2041863,
   0.2798739,
   0.1936419};
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
   0.06145222,
   0.05815886,
   0.08559849,
   0.1279214,
   0.1819976,
   0.2602847,
   0.3594472,
   0.2317595};
   grae = new TGraphAsymmErrors(10,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3005 = new TH1F("Graph_data_div3005","Graph",100,0,550);
   Graph_data_div3005->SetMinimum(0);
   Graph_data_div3005->SetMaximum(326.396);
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
