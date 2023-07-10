void m3l()
{
//=========Macro generated from canvas: m3l_canvas/m3l
//=========  (Mon Jul 10 18:28:50 2023) by ROOT version 6.24/07
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
   pad1->Range(-115.3846,-36.40971,525.641,1419.979);
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
   m3l_total__1->SetBinContent(3,876.6293);
   m3l_total__1->SetBinContent(4,1055.069);
   m3l_total__1->SetBinContent(5,554.1399);
   m3l_total__1->SetBinContent(6,277.7423);
   m3l_total__1->SetBinContent(7,138.8805);
   m3l_total__1->SetBinContent(8,73.17058);
   m3l_total__1->SetBinContent(9,55.73012);
   m3l_total__1->SetBinContent(10,108.1356);
   m3l_total__1->SetBinError(3,24.07281);
   m3l_total__1->SetBinError(4,20.93432);
   m3l_total__1->SetBinError(5,15.7466);
   m3l_total__1->SetBinError(6,10.3038);
   m3l_total__1->SetBinError(7,5.249646);
   m3l_total__1->SetBinError(8,3.825481);
   m3l_total__1->SetBinError(9,3.393748);
   m3l_total__1->SetBinError(10,5.853636);
   m3l_total__1->SetMinimum(0);
   m3l_total__1->SetMaximum(1332.595);
   m3l_total__1->SetEntries(15149);
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
   m3l_stack_stack_1->SetMaximum(1107.823);
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
   m3l_fakes_VV_stack_1->SetBinContent(5,0.1938399);
   m3l_fakes_VV_stack_1->SetBinContent(6,0.199151);
   m3l_fakes_VV_stack_1->SetBinContent(9,0.205721);
   m3l_fakes_VV_stack_1->SetBinError(3,0.2850661);
   m3l_fakes_VV_stack_1->SetBinError(4,0.2889556);
   m3l_fakes_VV_stack_1->SetBinError(5,0.1938399);
   m3l_fakes_VV_stack_1->SetBinError(6,0.199151);
   m3l_fakes_VV_stack_1->SetBinError(9,0.205721);
   m3l_fakes_VV_stack_1->SetEntries(11);

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
   m3l_fakes_TT_stack_2->SetBinContent(3,33.87291);
   m3l_fakes_TT_stack_2->SetBinContent(4,41.38547);
   m3l_fakes_TT_stack_2->SetBinContent(5,21.41347);
   m3l_fakes_TT_stack_2->SetBinContent(6,9.789159);
   m3l_fakes_TT_stack_2->SetBinContent(7,4.572395);
   m3l_fakes_TT_stack_2->SetBinContent(8,2.599668);
   m3l_fakes_TT_stack_2->SetBinContent(9,0.7180877);
   m3l_fakes_TT_stack_2->SetBinContent(10,2.157445);
   m3l_fakes_TT_stack_2->SetBinError(3,2.218633);
   m3l_fakes_TT_stack_2->SetBinError(4,2.411108);
   m3l_fakes_TT_stack_2->SetBinError(5,1.755101);
   m3l_fakes_TT_stack_2->SetBinError(6,1.18987);
   m3l_fakes_TT_stack_2->SetBinError(7,0.8793744);
   m3l_fakes_TT_stack_2->SetBinError(8,0.6130564);
   m3l_fakes_TT_stack_2->SetBinError(9,0.3211628);
   m3l_fakes_TT_stack_2->SetBinError(10,0.5571567);
   m3l_fakes_TT_stack_2->SetEntries(840);

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
   m3l_fakes_DY_stack_3->SetBinContent(3,118.7191);
   m3l_fakes_DY_stack_3->SetBinContent(4,68.0065);
   m3l_fakes_DY_stack_3->SetBinContent(5,40.11453);
   m3l_fakes_DY_stack_3->SetBinContent(6,14.723);
   m3l_fakes_DY_stack_3->SetBinContent(10,3.609453);
   m3l_fakes_DY_stack_3->SetBinError(3,20.6763);
   m3l_fakes_DY_stack_3->SetBinError(4,15.61376);
   m3l_fakes_DY_stack_3->SetBinError(5,12.09904);
   m3l_fakes_DY_stack_3->SetBinError(6,7.36271);
   m3l_fakes_DY_stack_3->SetBinError(10,3.609453);
   m3l_fakes_DY_stack_3->SetEntries(72);

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
   m3l_prompt_ZZ_stack_4->SetBinContent(3,52.89881);
   m3l_prompt_ZZ_stack_4->SetBinContent(4,48.59407);
   m3l_prompt_ZZ_stack_4->SetBinContent(5,24.6289);
   m3l_prompt_ZZ_stack_4->SetBinContent(6,11.27233);
   m3l_prompt_ZZ_stack_4->SetBinContent(7,5.069753);
   m3l_prompt_ZZ_stack_4->SetBinContent(8,3.189345);
   m3l_prompt_ZZ_stack_4->SetBinContent(9,3.579562);
   m3l_prompt_ZZ_stack_4->SetBinContent(10,4.375778);
   m3l_prompt_ZZ_stack_4->SetBinError(3,4.506629);
   m3l_prompt_ZZ_stack_4->SetBinError(4,4.331431);
   m3l_prompt_ZZ_stack_4->SetBinError(5,3.080388);
   m3l_prompt_ZZ_stack_4->SetBinError(6,2.094434);
   m3l_prompt_ZZ_stack_4->SetBinError(7,1.40655);
   m3l_prompt_ZZ_stack_4->SetBinError(8,1.127756);
   m3l_prompt_ZZ_stack_4->SetBinError(9,1.193711);
   m3l_prompt_ZZ_stack_4->SetBinError(10,1.319709);
   m3l_prompt_ZZ_stack_4->SetEntries(402);

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
   m3l_prompt_WZ_stack_5->SetBinContent(3,670.7353);
   m3l_prompt_WZ_stack_5->SetBinContent(4,896.6745);
   m3l_prompt_WZ_stack_5->SetBinContent(5,467.7891);
   m3l_prompt_WZ_stack_5->SetBinContent(6,241.7587);
   m3l_prompt_WZ_stack_5->SetBinContent(7,129.2384);
   m3l_prompt_WZ_stack_5->SetBinContent(8,67.38157);
   m3l_prompt_WZ_stack_5->SetBinContent(9,51.22675);
   m3l_prompt_WZ_stack_5->SetBinContent(10,97.99292);
   m3l_prompt_WZ_stack_5->SetBinError(3,11.2551);
   m3l_prompt_WZ_stack_5->SetBinError(4,13.03066);
   m3l_prompt_WZ_stack_5->SetBinError(5,9.431958);
   m3l_prompt_WZ_stack_5->SetBinError(6,6.790929);
   m3l_prompt_WZ_stack_5->SetBinError(7,4.980673);
   m3l_prompt_WZ_stack_5->SetBinError(8,3.603697);
   m3l_prompt_WZ_stack_5->SetBinError(9,3.153905);
   m3l_prompt_WZ_stack_5->SetBinError(10,4.380051);
   m3l_prompt_WZ_stack_5->SetEntries(13824);

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
   m3l_total__2->SetBinContent(3,876.6293);
   m3l_total__2->SetBinContent(4,1055.069);
   m3l_total__2->SetBinContent(5,554.1399);
   m3l_total__2->SetBinContent(6,277.7423);
   m3l_total__2->SetBinContent(7,138.8805);
   m3l_total__2->SetBinContent(8,73.17058);
   m3l_total__2->SetBinContent(9,55.73012);
   m3l_total__2->SetBinContent(10,108.1356);
   m3l_total__2->SetBinError(3,24.07281);
   m3l_total__2->SetBinError(4,20.93432);
   m3l_total__2->SetBinError(5,15.7466);
   m3l_total__2->SetBinError(6,10.3038);
   m3l_total__2->SetBinError(7,5.249646);
   m3l_total__2->SetBinError(8,3.825481);
   m3l_total__2->SetBinError(9,3.393748);
   m3l_total__2->SetBinError(10,5.853636);
   m3l_total__2->SetMinimum(0);
   m3l_total__2->SetMaximum(1332.595);
   m3l_total__2->SetEntries(15149);
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
   876.6293,
   1055.069,
   554.1399,
   277.7423,
   138.8805,
   73.17058,
   55.73012,
   108.1356};
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
   80.88734,
   78.513,
   42.55391,
   24.12442,
   10.27447,
   5.87408,
   4.523655,
   9.712036};
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
   78.69214,
   81.51339,
   44.5182,
   21.88382,
   9.943723,
   5.729107,
   4.605805,
   10.14456};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3l_total_errors_fx3001,m3l_total_errors_fy3001,m3l_total_errors_felx3001,m3l_total_errors_fehx3001,m3l_total_errors_fely3001,m3l_total_errors_fehy3001);
   grae->SetName("m3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_total_errors3001 = new TH1F("Graph_m3l_total_errors3001","Graph",100,60,540);
   Graph_m3l_total_errors3001->SetMinimum(46.08582);
   Graph_m3l_total_errors3001->SetMaximum(1245.12);
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
   860,
   983,
   543,
   303,
   158,
   82,
   50,
   90};
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
   29.32069,
   31.34817,
   23.29569,
   17.39766,
   12.55675,
   9.037065,
   7.047476,
   9.469369};
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
   30.33778,
   32.36416,
   24.3172,
   18.42645,
   13.59664,
   10.09244,
   8.118394,
   10.52222};
   grae = new TGraphAsymmErrors(10,m3l_data_graph_fx3002,m3l_data_graph_fy3002,m3l_data_graph_felx3002,m3l_data_graph_fehx3002,m3l_data_graph_fely3002,m3l_data_graph_fehy3002);
   grae->SetName("m3l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3l_data_graph3002 = new TH1F("Graph_m3l_data_graph3002","Graph",100,0,550);
   Graph_m3l_data_graph3002->SetMinimum(0);
   Graph_m3l_data_graph3002->SetMaximum(1116.901);
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
   m3l_total__3->SetEntries(15159);

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
   0.09227086,
   0.07441503,
   0.07679272,
   0.08685898,
   0.07398064,
   0.08027926,
   0.08117073,
   0.0898135};
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
   0.08976673,
   0.07725881,
   0.08033748,
   0.07879182,
   0.07159911,
   0.07829796,
   0.0826448,
   0.09381329};
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
   m3l_total__4->SetEntries(15159);

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
   0.9810304,
   0.9316924,
   0.979897,
   1.090939,
   1.137668,
   1.120669,
   0.8971809,
   0.8322884};
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
   0.03344708,
   0.02971196,
   0.04203936,
   0.06263957,
   0.09041408,
   0.1235068,
   0.1264572,
   0.0875694};
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
   0.03460731,
   0.03067492,
   0.04388278,
   0.0663437,
   0.09790166,
   0.1379302,
   0.1456734,
   0.09730578};
   grae = new TGraphAsymmErrors(10,data_div_fx3005,data_div_fy3005,data_div_felx3005,data_div_fehx3005,data_div_fely3005,data_div_fehy3005);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3005 = new TH1F("Graph_data_div3005","Graph",100,0,550);
   Graph_data_div3005->SetMinimum(0);
   Graph_data_div3005->SetMaximum(1116.901);
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
