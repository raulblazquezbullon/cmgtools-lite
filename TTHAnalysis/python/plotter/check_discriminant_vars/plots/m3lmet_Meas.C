void m3lmet_Meas()
{
//=========Macro generated from canvas: m3lmet_Meas_canvas/m3lmet_Meas
//=========  (Thu Jul  6 17:33:13 2023) by ROOT version 6.24/07
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
   pad1->Range(-115.3846,-31.18476,525.641,1216.206);
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
   
   TH1D *m3lmet_Meas_total__13 = new TH1D("m3lmet_Meas_total__13","dummy",10,0,500);
   m3lmet_Meas_total__13->SetBinContent(3,17.78185);
   m3lmet_Meas_total__13->SetBinContent(4,396.7488);
   m3lmet_Meas_total__13->SetBinContent(5,921.1581);
   m3lmet_Meas_total__13->SetBinContent(6,721.8386);
   m3lmet_Meas_total__13->SetBinContent(7,421.7015);
   m3lmet_Meas_total__13->SetBinContent(8,246.4161);
   m3lmet_Meas_total__13->SetBinContent(9,134.4602);
   m3lmet_Meas_total__13->SetBinContent(10,77.7448);
   m3lmet_Meas_total__13->SetBinContent(11,201.6476);
   m3lmet_Meas_total__13->SetBinError(3,7.155841);
   m3lmet_Meas_total__13->SetBinError(4,19.64939);
   m3lmet_Meas_total__13->SetBinError(5,20.63396);
   m3lmet_Meas_total__13->SetBinError(6,16.74067);
   m3lmet_Meas_total__13->SetBinError(7,12.14585);
   m3lmet_Meas_total__13->SetBinError(8,8.539978);
   m3lmet_Meas_total__13->SetBinError(9,5.209649);
   m3lmet_Meas_total__13->SetBinError(10,3.911242);
   m3lmet_Meas_total__13->SetBinError(11,7.323859);
   m3lmet_Meas_total__13->SetMinimum(0);
   m3lmet_Meas_total__13->SetMaximum(1141.362);
   m3lmet_Meas_total__13->SetEntries(15125);
   m3lmet_Meas_total__13->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__13->SetFillColor(ci);
   m3lmet_Meas_total__13->SetMarkerStyle(20);
   m3lmet_Meas_total__13->SetMarkerSize(1.1);
   m3lmet_Meas_total__13->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__13->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__13->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__13->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_total__13->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_total__13->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__13->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_total__13->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__13->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_total__13->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__13->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__13->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_total__13->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__13->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_total__13->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__13->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__13->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__13->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__13->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__13->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__13->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__13->Draw("HIST");
   
   THStack *m3lmet_Meas_stack = new THStack();
   m3lmet_Meas_stack->SetName("m3lmet_Meas_stack");
   m3lmet_Meas_stack->SetTitle("m3lmet_Meas");
   
   TH1F *m3lmet_Meas_stack_stack_4 = new TH1F("m3lmet_Meas_stack_stack_4","m3lmet_Meas",10,0,500);
   m3lmet_Meas_stack_stack_4->SetMinimum(0);
   m3lmet_Meas_stack_stack_4->SetMaximum(967.216);
   m3lmet_Meas_stack_stack_4->SetDirectory(0);
   m3lmet_Meas_stack_stack_4->SetStats(0);
   m3lmet_Meas_stack_stack_4->SetLineStyle(0);
   m3lmet_Meas_stack_stack_4->SetMarkerStyle(20);
   m3lmet_Meas_stack_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_stack_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_stack_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_stack_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_stack_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_stack_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_stack_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_stack_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_stack_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_stack_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_stack_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_stack_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_stack_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_stack_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_stack_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_stack_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_stack_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_stack_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_stack->SetHistogram(m3lmet_Meas_stack_stack_4);
   
   
   TH1D *m3lmet_Meas_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_fakes_VV_stack_1","dummy",10,0,500);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(4,0.199256);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(5,0.4064792);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(7,0.5990046);
   m3lmet_Meas_fakes_VV_stack_1->SetBinContent(11,0.205721);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(4,0.199256);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(5,0.2874255);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(7,0.3459432);
   m3lmet_Meas_fakes_VV_stack_1->SetBinError(11,0.205721);
   m3lmet_Meas_fakes_VV_stack_1->SetEntries(7);

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
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(3,0.9364545);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(4,14.21375);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(5,29.88827);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(6,29.26228);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(7,19.1587);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(8,9.710517);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(9,6.448658);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(10,3.001304);
   m3lmet_Meas_fakes_TT_stack_2->SetBinContent(11,3.888675);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(3,0.3929289);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(4,1.442687);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(5,2.068297);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(6,2.039087);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(7,1.643644);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(8,1.195211);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(9,0.9616631);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(10,0.6551021);
   m3lmet_Meas_fakes_TT_stack_2->SetBinError(11,0.7994592);
   m3lmet_Meas_fakes_TT_stack_2->SetEntries(832);

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
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(3,14.20957);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(4,89.85869);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(5,71.79627);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(6,40.10711);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(7,18.33528);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(8,7.256229);
   m3lmet_Meas_fakes_DY_stack_3->SetBinContent(11,3.609453);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(3,7.110194);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(4,17.98414);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(5,16.06111);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(6,12.09735);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(7,8.202012);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(8,5.131558);
   m3lmet_Meas_fakes_DY_stack_3->SetBinError(11,3.609453);
   m3lmet_Meas_fakes_DY_stack_3->SetEntries(68);

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
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(4,28.53615);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(5,43.84045);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(6,30.88584);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(7,22.80802);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(8,6.609368);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(9,8.246459);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(10,2.34611);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinContent(11,10.33614);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(4,3.298213);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(5,4.108556);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(6,3.455102);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(7,2.970766);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(8,1.603654);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(9,1.800237);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(10,0.9579255);
   m3lmet_Meas_prompt_ZZ_stack_4->SetBinError(11,2.027665);
   m3lmet_Meas_prompt_ZZ_stack_4->SetEntries(398);

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
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(3,2.63582);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(4,263.9409);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(5,775.2266);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(6,621.5834);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(7,360.8005);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(8,222.84);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(9,119.7651);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(10,72.39738);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinContent(11,183.6076);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(3,0.70485);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(4,7.047695);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(5,12.10622);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(6,10.85397);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(7,8.282626);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(8,6.526722);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(9,4.793203);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(10,3.735109);
   m3lmet_Meas_prompt_WZ_stack_5->SetBinError(11,5.984804);
   m3lmet_Meas_prompt_WZ_stack_5->SetEntries(13820);

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
   
   TH1D *m3lmet_Meas_total__14 = new TH1D("m3lmet_Meas_total__14","dummy",10,0,500);
   m3lmet_Meas_total__14->SetBinContent(3,17.78185);
   m3lmet_Meas_total__14->SetBinContent(4,396.7488);
   m3lmet_Meas_total__14->SetBinContent(5,921.1581);
   m3lmet_Meas_total__14->SetBinContent(6,721.8386);
   m3lmet_Meas_total__14->SetBinContent(7,421.7015);
   m3lmet_Meas_total__14->SetBinContent(8,246.4161);
   m3lmet_Meas_total__14->SetBinContent(9,134.4602);
   m3lmet_Meas_total__14->SetBinContent(10,77.7448);
   m3lmet_Meas_total__14->SetBinContent(11,201.6476);
   m3lmet_Meas_total__14->SetBinError(3,7.155841);
   m3lmet_Meas_total__14->SetBinError(4,19.64939);
   m3lmet_Meas_total__14->SetBinError(5,20.63396);
   m3lmet_Meas_total__14->SetBinError(6,16.74067);
   m3lmet_Meas_total__14->SetBinError(7,12.14585);
   m3lmet_Meas_total__14->SetBinError(8,8.539978);
   m3lmet_Meas_total__14->SetBinError(9,5.209649);
   m3lmet_Meas_total__14->SetBinError(10,3.911242);
   m3lmet_Meas_total__14->SetBinError(11,7.323859);
   m3lmet_Meas_total__14->SetMinimum(0);
   m3lmet_Meas_total__14->SetMaximum(1141.362);
   m3lmet_Meas_total__14->SetEntries(15125);
   m3lmet_Meas_total__14->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__14->SetFillColor(ci);
   m3lmet_Meas_total__14->SetMarkerStyle(20);
   m3lmet_Meas_total__14->SetMarkerSize(1.1);
   m3lmet_Meas_total__14->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__14->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__14->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__14->GetXaxis()->SetLabelOffset(999);
   m3lmet_Meas_total__14->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_total__14->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_total__14->GetXaxis()->SetTitleOffset(999);
   m3lmet_Meas_total__14->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__14->GetYaxis()->SetTitle("Events/bin");
   m3lmet_Meas_total__14->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__14->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__14->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_total__14->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__14->GetYaxis()->SetTitleOffset(1.48);
   m3lmet_Meas_total__14->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__14->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__14->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__14->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__14->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__14->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__14->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__14->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_total_errors_fx3016[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3016[8] = {
   17.78185,
   396.7488,
   921.1581,
   721.8386,
   421.7015,
   246.4161,
   134.4602,
   77.7448};
   Double_t m3lmet_Meas_total_errors_felx3016[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3016[8] = {
   3.638967,
   44.81624,
   60.1962,
   57.69654,
   27.35865,
   18.41056,
   11.62272,
   4.588866};
   Double_t m3lmet_Meas_total_errors_fehx3016[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3016[8] = {
   4.684074,
   39.41134,
   63.42386,
   48.59083,
   29.21768,
   16.78789,
   8.382533,
   5.135484};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3016,m3lmet_Meas_total_errors_fy3016,m3lmet_Meas_total_errors_felx3016,m3lmet_Meas_total_errors_fehx3016,m3lmet_Meas_total_errors_fely3016,m3lmet_Meas_total_errors_fehy3016);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_total_errors3016 = new TH1F("Graph_m3lmet_Meas_total_errors3016","Graph",100,60,540);
   Graph_m3lmet_Meas_total_errors3016->SetMinimum(12.72859);
   Graph_m3lmet_Meas_total_errors3016->SetMaximum(1081.626);
   Graph_m3lmet_Meas_total_errors3016->SetDirectory(0);
   Graph_m3lmet_Meas_total_errors3016->SetStats(0);
   Graph_m3lmet_Meas_total_errors3016->SetLineStyle(0);
   Graph_m3lmet_Meas_total_errors3016->SetMarkerStyle(20);
   Graph_m3lmet_Meas_total_errors3016->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3016->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3016->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_total_errors3016->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_total_errors3016->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3016->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3016->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3016->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_total_errors3016->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_total_errors3016->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_total_errors3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_total_errors3016->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_total_errors3016->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_total_errors3016->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_total_errors3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_total_errors3016);
   
   grae->Draw("pe2 ");
   
   Double_t m3lmet_Meas_data_graph_fx3017[10] = {
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
   Double_t m3lmet_Meas_data_graph_fy3017[10] = {
   0,
   1,
   29,
   389,
   839,
   702,
   406,
   276,
   136,
   90};
   Double_t m3lmet_Meas_data_graph_felx3017[10] = {
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
   Double_t m3lmet_Meas_data_graph_fely3017[10] = {
   0,
   0.8272525,
   5.354034,
   19.71503,
   28.96035,
   26.48954,
   20.14157,
   16.60353,
   11.64779,
   9.469369};
   Double_t m3lmet_Meas_data_graph_fehx3017[10] = {
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
   Double_t m3lmet_Meas_data_graph_fehy3017[10] = {
   1.841055,
   2.29957,
   6.447153,
   20.74044,
   29.97766,
   27.50846,
   21.16645,
   17.6337,
   12.69078,
   10.52222};
   grae = new TGraphAsymmErrors(10,m3lmet_Meas_data_graph_fx3017,m3lmet_Meas_data_graph_fy3017,m3lmet_Meas_data_graph_felx3017,m3lmet_Meas_data_graph_fehx3017,m3lmet_Meas_data_graph_fely3017,m3lmet_Meas_data_graph_fehy3017);
   grae->SetName("m3lmet_Meas_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_m3lmet_Meas_data_graph3017 = new TH1F("Graph_m3lmet_Meas_data_graph3017","Graph",100,0,550);
   Graph_m3lmet_Meas_data_graph3017->SetMinimum(0);
   Graph_m3lmet_Meas_data_graph3017->SetMaximum(955.8754);
   Graph_m3lmet_Meas_data_graph3017->SetDirectory(0);
   Graph_m3lmet_Meas_data_graph3017->SetStats(0);
   Graph_m3lmet_Meas_data_graph3017->SetLineStyle(0);
   Graph_m3lmet_Meas_data_graph3017->SetMarkerStyle(20);
   Graph_m3lmet_Meas_data_graph3017->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3017->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3017->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_data_graph3017->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_data_graph3017->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3017->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3017->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3017->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_data_graph3017->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_data_graph3017->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_data_graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_data_graph3017->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_data_graph3017->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_data_graph3017->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_data_graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_data_graph3017);
   
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
   
   TH1D *m3lmet_Meas_total__15 = new TH1D("m3lmet_Meas_total__15","dummy",10,0,500);
   m3lmet_Meas_total__15->SetBinContent(3,1);
   m3lmet_Meas_total__15->SetBinContent(4,1);
   m3lmet_Meas_total__15->SetBinContent(5,1);
   m3lmet_Meas_total__15->SetBinContent(6,1);
   m3lmet_Meas_total__15->SetBinContent(7,1);
   m3lmet_Meas_total__15->SetBinContent(8,1);
   m3lmet_Meas_total__15->SetBinContent(9,1);
   m3lmet_Meas_total__15->SetBinContent(10,1);
   m3lmet_Meas_total__15->SetBinContent(11,201.6476);
   m3lmet_Meas_total__15->SetBinError(11,7.323859);
   m3lmet_Meas_total__15->SetMinimum(0.5);
   m3lmet_Meas_total__15->SetMaximum(2);
   m3lmet_Meas_total__15->SetEntries(15135);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__15->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_total__15->SetMarkerColor(ci);
   m3lmet_Meas_total__15->SetMarkerSize(1.1);
   m3lmet_Meas_total__15->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__15->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__15->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__15->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_total__15->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_total__15->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__15->GetXaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__15->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__15->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_total__15->GetYaxis()->SetDecimals();
   m3lmet_Meas_total__15->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_total__15->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__15->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_total__15->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_total__15->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__15->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_total__15->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__15->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__15->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__15->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__15->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__15->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__15->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__15->Draw("AXIS");
   
   Double_t m3lmet_Meas_total_errors_fx3018[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3018[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_total_errors_felx3018[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3018[8] = {
   0.204645,
   0.1129587,
   0.06534839,
   0.07992998,
   0.06487682,
   0.07471331,
   0.08643989,
   0.05902473};
   Double_t m3lmet_Meas_total_errors_fehx3018[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3018[8] = {
   0.2634189,
   0.09933575,
   0.0688523,
   0.06731537,
   0.06928522,
   0.06812823,
   0.06234212,
   0.06605566};
   grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3018,m3lmet_Meas_total_errors_fy3018,m3lmet_Meas_total_errors_felx3018,m3lmet_Meas_total_errors_fehx3018,m3lmet_Meas_total_errors_fely3018,m3lmet_Meas_total_errors_fehy3018);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(1001);
   grae->Draw("e2");
   
   Double_t m3lmet_Meas_total_errors_fx3019[8] = {
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t m3lmet_Meas_total_errors_fy3019[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t m3lmet_Meas_total_errors_felx3019[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fely3019[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t m3lmet_Meas_total_errors_fehx3019[8] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t m3lmet_Meas_total_errors_fehy3019[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(8,m3lmet_Meas_total_errors_fx3019,m3lmet_Meas_total_errors_fy3019,m3lmet_Meas_total_errors_felx3019,m3lmet_Meas_total_errors_fehx3019,m3lmet_Meas_total_errors_fely3019,m3lmet_Meas_total_errors_fehy3019);
   grae->SetName("m3lmet_Meas_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *m3lmet_Meas_total__16 = new TH1D("m3lmet_Meas_total__16","dummy",10,0,500);
   m3lmet_Meas_total__16->SetBinContent(3,1);
   m3lmet_Meas_total__16->SetBinContent(4,1);
   m3lmet_Meas_total__16->SetBinContent(5,1);
   m3lmet_Meas_total__16->SetBinContent(6,1);
   m3lmet_Meas_total__16->SetBinContent(7,1);
   m3lmet_Meas_total__16->SetBinContent(8,1);
   m3lmet_Meas_total__16->SetBinContent(9,1);
   m3lmet_Meas_total__16->SetBinContent(10,1);
   m3lmet_Meas_total__16->SetBinContent(11,201.6476);
   m3lmet_Meas_total__16->SetBinError(11,7.323859);
   m3lmet_Meas_total__16->SetMinimum(0.5);
   m3lmet_Meas_total__16->SetMaximum(2);
   m3lmet_Meas_total__16->SetEntries(15135);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_total__16->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   m3lmet_Meas_total__16->SetMarkerColor(ci);
   m3lmet_Meas_total__16->SetMarkerSize(1.1);
   m3lmet_Meas_total__16->GetXaxis()->SetTitle("m_{WZ} [GeV]");
   m3lmet_Meas_total__16->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_total__16->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_total__16->GetXaxis()->SetLabelOffset(0.015);
   m3lmet_Meas_total__16->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_total__16->GetXaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__16->GetXaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__16->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_total__16->GetYaxis()->SetTitle("Data/pred.");
   m3lmet_Meas_total__16->GetYaxis()->SetDecimals();
   m3lmet_Meas_total__16->GetYaxis()->SetNdivisions(505);
   m3lmet_Meas_total__16->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_total__16->GetYaxis()->SetLabelOffset(0.01);
   m3lmet_Meas_total__16->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_total__16->GetYaxis()->SetTitleSize(0.14);
   m3lmet_Meas_total__16->GetYaxis()->SetTitleOffset(0.62);
   m3lmet_Meas_total__16->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_total__16->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_total__16->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_total__16->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_total__16->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_total__16->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_total__16->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_total__16->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,500,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3020[10] = {
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
   Double_t data_div_fy3020[10] = {
   0,
   0,
   1.630877,
   0.9804693,
   0.91081,
   0.9725166,
   0.9627663,
   1.120057,
   1.011452,
   1.157634};
   Double_t data_div_felx3020[10] = {
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
   Double_t data_div_fely3020[10] = {
   0,
   0,
   0.3010955,
   0.04969146,
   0.03143906,
   0.03669732,
   0.04776264,
   0.06738007,
   0.08662634,
   0.1218007};
   Double_t data_div_fehx3020[10] = {
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
   Double_t data_div_fehy3020[10] = {
   0,
   0,
   0.3625694,
   0.052276,
   0.03254344,
   0.03810888,
   0.05019297,
   0.07156068,
   0.09438319,
   0.1353431};
   grae = new TGraphAsymmErrors(10,data_div_fx3020,data_div_fy3020,data_div_felx3020,data_div_fehx3020,data_div_fely3020,data_div_fehy3020);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3020 = new TH1F("Graph_data_div3020","Graph",100,0,550);
   Graph_data_div3020->SetMinimum(0);
   Graph_data_div3020->SetMaximum(955.8754);
   Graph_data_div3020->SetDirectory(0);
   Graph_data_div3020->SetStats(0);
   Graph_data_div3020->SetLineStyle(0);
   Graph_data_div3020->SetMarkerStyle(20);
   Graph_data_div3020->GetXaxis()->SetLabelFont(42);
   Graph_data_div3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_div3020->GetXaxis()->SetLabelSize(0.05);
   Graph_data_div3020->GetXaxis()->SetTitleSize(0.06);
   Graph_data_div3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_div3020->GetXaxis()->SetTitleFont(42);
   Graph_data_div3020->GetYaxis()->SetLabelFont(42);
   Graph_data_div3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_div3020->GetYaxis()->SetLabelSize(0.05);
   Graph_data_div3020->GetYaxis()->SetTitleSize(0.06);
   Graph_data_div3020->GetYaxis()->SetTitleOffset(1.35);
   Graph_data_div3020->GetYaxis()->SetTitleFont(42);
   Graph_data_div3020->GetZaxis()->SetLabelFont(42);
   Graph_data_div3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_div3020->GetZaxis()->SetLabelSize(0.05);
   Graph_data_div3020->GetZaxis()->SetTitleSize(0.06);
   Graph_data_div3020->GetZaxis()->SetTitleOffset(1);
   Graph_data_div3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_div3020);
   
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
