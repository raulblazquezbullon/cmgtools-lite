void m3l_rebin7()
{
//=========Macro generated from canvas: m3l_rebin7_canvas/m3l_rebin7
//=========  (Thu Jul  6 17:45:38 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin7_canvas = new TCanvas("m3l_rebin7_canvas", "m3l_rebin7",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin7_canvas->SetHighLightColor(2);
   m3l_rebin7_canvas->Range(-115.3846,-223.8193,525.641,1497.868);
   m3l_rebin7_canvas->SetFillColor(0);
   m3l_rebin7_canvas->SetBorderMode(0);
   m3l_rebin7_canvas->SetBorderSize(2);
   m3l_rebin7_canvas->SetTickx(1);
   m3l_rebin7_canvas->SetTicky(1);
   m3l_rebin7_canvas->SetLeftMargin(0.18);
   m3l_rebin7_canvas->SetRightMargin(0.04);
   m3l_rebin7_canvas->SetTopMargin(0.06);
   m3l_rebin7_canvas->SetBottomMargin(0.13);
   m3l_rebin7_canvas->SetFrameFillStyle(0);
   m3l_rebin7_canvas->SetFrameBorderMode(0);
   m3l_rebin7_canvas->SetFrameFillStyle(0);
   m3l_rebin7_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 117.841, 135.6819, 154.5822, 177.7882, 201.8412, 244.8191, 500}; 
   
   TH1D *m3l_rebin7_total__1 = new TH1D("m3l_rebin7_total__1","dummy",7, xAxis1);
   m3l_rebin7_total__1->SetBinContent(1,94.72263);
   m3l_rebin7_total__1->SetBinContent(2,403.4558);
   m3l_rebin7_total__1->SetBinContent(3,491.8821);
   m3l_rebin7_total__1->SetBinContent(4,544.0645);
   m3l_rebin7_total__1->SetBinContent(5,431.9946);
   m3l_rebin7_total__1->SetBinContent(6,476.0944);
   m3l_rebin7_total__1->SetBinContent(7,697.2834);
   m3l_rebin7_total__1->SetBinError(1,7.454354);
   m3l_rebin7_total__1->SetBinError(2,18.37579);
   m3l_rebin7_total__1->SetBinError(3,15.27956);
   m3l_rebin7_total__1->SetBinError(4,15.84227);
   m3l_rebin7_total__1->SetBinError(5,13.16814);
   m3l_rebin7_total__1->SetBinError(6,13.9451);
   m3l_rebin7_total__1->SetBinError(7,14.63898);
   m3l_rebin7_total__1->SetMinimum(0);
   m3l_rebin7_total__1->SetMaximum(1394.567);
   m3l_rebin7_total__1->SetEntries(15153);
   m3l_rebin7_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_total__1->SetFillColor(ci);
   m3l_rebin7_total__1->SetMarkerStyle(20);
   m3l_rebin7_total__1->SetMarkerSize(1.1);
   m3l_rebin7_total__1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin7_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin7_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_total__1->Draw("HIST");
   
   THStack *m3l_rebin7_stack = new THStack();
   m3l_rebin7_stack->SetName("m3l_rebin7_stack");
   m3l_rebin7_stack->SetTitle("m3l_rebin7");
   Double_t xAxis2[8] = {0, 117.841, 135.6819, 154.5822, 177.7882, 201.8412, 244.8191, 500}; 
   
   TH1F *m3l_rebin7_stack_stack_1 = new TH1F("m3l_rebin7_stack_stack_1","m3l_rebin7",7, xAxis2);
   m3l_rebin7_stack_stack_1->SetMinimum(0);
   m3l_rebin7_stack_stack_1->SetMaximum(732.1475);
   m3l_rebin7_stack_stack_1->SetDirectory(0);
   m3l_rebin7_stack_stack_1->SetStats(0);
   m3l_rebin7_stack_stack_1->SetLineStyle(0);
   m3l_rebin7_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->SetHistogram(m3l_rebin7_stack_stack_1);
   
   Double_t xAxis3[8] = {0, 117.841, 135.6819, 154.5822, 177.7882, 201.8412, 244.8191, 500}; 
   
   TH1D *m3l_rebin7_fakes_VV_stack_1 = new TH1D("m3l_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(1,0.4031181);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(4,0.2060137);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(5,0.2026171);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(6,0.1938399);
   m3l_rebin7_fakes_VV_stack_1->SetBinContent(7,0.404872);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(1,0.2850661);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(4,0.2060137);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(5,0.2026171);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(6,0.1938399);
   m3l_rebin7_fakes_VV_stack_1->SetBinError(7,0.2863255);
   m3l_rebin7_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin7_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin7_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin7_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_fakes_VV_stack_1,"");
   Double_t xAxis4[8] = {0, 117.841, 135.6819, 154.5822, 177.7882, 201.8412, 244.8191, 500}; 
   
   TH1D *m3l_rebin7_fakes_TT_stack_2 = new TH1D("m3l_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(1,5.668701);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(2,13.62601);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(3,20.94089);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(4,19.74606);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(5,16.13092);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(6,18.42077);
   m3l_rebin7_fakes_TT_stack_2->SetBinContent(7,21.97527);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(1,0.9188342);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(2,1.425732);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(3,1.716311);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(4,1.663892);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(5,1.5054);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(6,1.628937);
   m3l_rebin7_fakes_TT_stack_2->SetBinError(7,1.812115);
   m3l_rebin7_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin7_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin7_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin7_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_fakes_TT_stack_2,"");
   Double_t xAxis5[8] = {0, 117.841, 135.6819, 154.5822, 177.7882, 201.8412, 244.8191, 500}; 
   
   TH1D *m3l_rebin7_fakes_DY_stack_3 = new TH1D("m3l_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(1,10.90016);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(2,75.34454);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(3,39.69872);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(4,42.64974);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(5,25.61621);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(6,29.17032);
   m3l_rebin7_fakes_DY_stack_3->SetBinContent(7,21.79293);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(1,6.294354);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(2,16.45008);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(3,11.97447);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(4,12.32347);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(5,9.686286);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(6,10.31535);
   m3l_rebin7_fakes_DY_stack_3->SetBinError(7,8.900144);
   m3l_rebin7_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin7_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin7_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin7_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_fakes_DY_stack_3,"");
   Double_t xAxis6[8] = {0, 117.841, 135.6819, 154.5822, 177.7882, 201.8412, 244.8191, 500}; 
   
   TH1D *m3l_rebin7_prompt_ZZ_stack_4 = new TH1D("m3l_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(1,2.27592);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(2,28.80015);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(3,28.35513);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(4,26.56315);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(5,16.9675);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(6,20.06027);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinContent(7,30.58642);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(1,0.9302023);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(2,3.328135);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(3,3.298635);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(4,3.199438);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(5,2.559626);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(6,2.783286);
   m3l_rebin7_prompt_ZZ_stack_4->SetBinError(7,3.464926);
   m3l_rebin7_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin7_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin7_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin7_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_prompt_ZZ_stack_4,"");
   Double_t xAxis7[8] = {0, 117.841, 135.6819, 154.5822, 177.7882, 201.8412, 244.8191, 500}; 
   
   TH1D *m3l_rebin7_prompt_WZ_stack_5 = new TH1D("m3l_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(1,75.47473);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(2,285.6851);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(3,402.8874);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(4,454.8996);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(5,373.0773);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(6,408.2492);
   m3l_rebin7_prompt_WZ_stack_5->SetBinContent(7,622.5239);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(1,3.762673);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(2,7.345429);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(3,8.732145);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(4,9.276962);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(5,8.40933);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(6,8.810317);
   m3l_rebin7_prompt_WZ_stack_5->SetBinError(7,10.94147);
   m3l_rebin7_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin7_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin7_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_stack->Add(m3l_rebin7_prompt_WZ_stack_5,"");
   m3l_rebin7_stack->Draw("same hist");
   Double_t xAxis8[8] = {0, 117.841, 135.6819, 154.5822, 177.7882, 201.8412, 244.8191, 500}; 
   
   TH1D *m3l_rebin7_total__2 = new TH1D("m3l_rebin7_total__2","dummy",7, xAxis8);
   m3l_rebin7_total__2->SetBinContent(1,94.72263);
   m3l_rebin7_total__2->SetBinContent(2,403.4558);
   m3l_rebin7_total__2->SetBinContent(3,491.8821);
   m3l_rebin7_total__2->SetBinContent(4,544.0645);
   m3l_rebin7_total__2->SetBinContent(5,431.9946);
   m3l_rebin7_total__2->SetBinContent(6,476.0944);
   m3l_rebin7_total__2->SetBinContent(7,697.2834);
   m3l_rebin7_total__2->SetBinError(1,7.454354);
   m3l_rebin7_total__2->SetBinError(2,18.37579);
   m3l_rebin7_total__2->SetBinError(3,15.27956);
   m3l_rebin7_total__2->SetBinError(4,15.84227);
   m3l_rebin7_total__2->SetBinError(5,13.16814);
   m3l_rebin7_total__2->SetBinError(6,13.9451);
   m3l_rebin7_total__2->SetBinError(7,14.63898);
   m3l_rebin7_total__2->SetMinimum(0);
   m3l_rebin7_total__2->SetMaximum(1394.567);
   m3l_rebin7_total__2->SetEntries(15153);
   m3l_rebin7_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin7_total__2->SetFillColor(ci);
   m3l_rebin7_total__2->SetMarkerStyle(20);
   m3l_rebin7_total__2->SetMarkerSize(1.1);
   m3l_rebin7_total__2->GetXaxis()->SetTitle("m_{3L} (GeV)");
   m3l_rebin7_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin7_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetXaxis()->SetLabelSize(0.04);
   m3l_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetYaxis()->SetLabelSize(0.04);
   m3l_rebin7_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin7_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin7_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin7_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin7_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin7_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin7_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin7_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin7_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin7_total_errors_fx3001[7] = {
   58.92048,
   126.7614,
   145.1321,
   166.1852,
   189.8147,
   223.3302,
   372.4096};
   Double_t m3l_rebin7_total_errors_fy3001[7] = {
   94.72263,
   403.4558,
   491.8821,
   544.0645,
   431.9946,
   476.0944,
   697.2834};
   Double_t m3l_rebin7_total_errors_felx3001[7] = {
   58.92048,
   8.920475,
   9.450157,
   11.60298,
   12.02651,
   21.48895,
   127.5904};
   Double_t m3l_rebin7_total_errors_fely3001[7] = {
   6.722818,
   37.47375,
   37.35561,
   35.88551,
   27.56218,
   30.79955,
   43.37248};
   Double_t m3l_rebin7_total_errors_fehx3001[7] = {
   58.92048,
   8.920475,
   9.450157,
   11.60298,
   12.02651,
   21.48895,
   127.5904};
   Double_t m3l_rebin7_total_errors_fehy3001[7] = {
   7.691617,
   38.0245,
   35.20181,
   38.81031,
   30.11708,
   34.40516,
   46.28966};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,m3l_rebin7_total_errors_fx3001,m3l_rebin7_total_errors_fy3001,m3l_rebin7_total_errors_felx3001,m3l_rebin7_total_errors_fehx3001,m3l_rebin7_total_errors_fely3001,m3l_rebin7_total_errors_fehy3001);
   grae->SetName("m3l_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin7_total_errors3001 = new TH1F("Graph_m3l_rebin7_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin7_total_errors3001->SetMinimum(22.44249);
   Graph_m3l_rebin7_total_errors3001->SetMaximum(809.1304);
   Graph_m3l_rebin7_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin7_total_errors3001->SetStats(0);
   Graph_m3l_rebin7_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin7_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin7_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin7_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin7_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin7_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin7_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin7_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin7_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin7_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin7_total_errors","Total unc.","F");
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
   m3l_rebin7_canvas->Modified();
   m3l_rebin7_canvas->cd();
   m3l_rebin7_canvas->SetSelected(m3l_rebin7_canvas);
}
