void met_rebin10()
{
//=========Macro generated from canvas: met_rebin10_canvas/met_rebin10
//=========  (Thu Jul  6 17:59:54 2023) by ROOT version 6.24/07
   TCanvas *met_rebin10_canvas = new TCanvas("met_rebin10_canvas", "met_rebin10",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin10_canvas->SetHighLightColor(2);
   met_rebin10_canvas->Range(-87.69231,-141.453,399.4872,946.6473);
   met_rebin10_canvas->SetFillColor(0);
   met_rebin10_canvas->SetBorderMode(0);
   met_rebin10_canvas->SetBorderSize(2);
   met_rebin10_canvas->SetTickx(1);
   met_rebin10_canvas->SetTicky(1);
   met_rebin10_canvas->SetLeftMargin(0.18);
   met_rebin10_canvas->SetRightMargin(0.04);
   met_rebin10_canvas->SetTopMargin(0.06);
   met_rebin10_canvas->SetBottomMargin(0.13);
   met_rebin10_canvas->SetFrameFillStyle(0);
   met_rebin10_canvas->SetFrameBorderMode(0);
   met_rebin10_canvas->SetFrameFillStyle(0);
   met_rebin10_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_total__1 = new TH1D("met_rebin10_total__1","dummy",10, xAxis1);
   met_rebin10_total__1->SetBinContent(2,40.9311);
   met_rebin10_total__1->SetBinContent(3,403.7779);
   met_rebin10_total__1->SetBinContent(4,400.2312);
   met_rebin10_total__1->SetBinContent(5,386.246);
   met_rebin10_total__1->SetBinContent(6,336.8878);
   met_rebin10_total__1->SetBinContent(7,293.9438);
   met_rebin10_total__1->SetBinContent(8,440.6807);
   met_rebin10_total__1->SetBinContent(9,425.5236);
   met_rebin10_total__1->SetBinContent(10,411.2754);
   met_rebin10_total__1->SetBinError(2,7.507547);
   met_rebin10_total__1->SetBinError(3,17.47316);
   met_rebin10_total__1->SetBinError(4,17.07105);
   met_rebin10_total__1->SetBinError(5,14.06861);
   met_rebin10_total__1->SetBinError(6,12.32692);
   met_rebin10_total__1->SetBinError(7,10.42443);
   met_rebin10_total__1->SetBinError(8,12.19015);
   met_rebin10_total__1->SetBinError(9,10.35027);
   met_rebin10_total__1->SetBinError(10,9.616366);
   met_rebin10_total__1->SetMinimum(0);
   met_rebin10_total__1->SetMaximum(881.3613);
   met_rebin10_total__1->SetEntries(15153);
   met_rebin10_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin10_total__1->SetFillColor(ci);
   met_rebin10_total__1->SetMarkerStyle(20);
   met_rebin10_total__1->SetMarkerSize(1.1);
   met_rebin10_total__1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin10_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetXaxis()->SetLabelSize(0.04);
   met_rebin10_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin10_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin10_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__1->GetYaxis()->SetTitle("Events");
   met_rebin10_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetYaxis()->SetLabelSize(0.04);
   met_rebin10_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin10_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin10_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin10_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin10_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin10_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin10_total__1->Draw("HIST");
   
   THStack *met_rebin10_stack = new THStack();
   met_rebin10_stack->SetName("met_rebin10_stack");
   met_rebin10_stack->SetTitle("met_rebin10");
   Double_t xAxis2[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1F *met_rebin10_stack_stack_1 = new TH1F("met_rebin10_stack_stack_1","met_rebin10",10, xAxis2);
   met_rebin10_stack_stack_1->SetMinimum(0);
   met_rebin10_stack_stack_1->SetMaximum(462.7147);
   met_rebin10_stack_stack_1->SetDirectory(0);
   met_rebin10_stack_stack_1->SetStats(0);
   met_rebin10_stack_stack_1->SetLineStyle(0);
   met_rebin10_stack_stack_1->SetMarkerStyle(20);
   met_rebin10_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin10_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin10_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin10_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin10_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin10_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin10_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->SetHistogram(met_rebin10_stack_stack_1);
   
   Double_t xAxis3[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_fakes_VV_stack_1 = new TH1D("met_rebin10_fakes_VV_stack_1","dummy",10, xAxis3);
   met_rebin10_fakes_VV_stack_1->SetBinContent(5,0.2026171);
   met_rebin10_fakes_VV_stack_1->SetBinContent(7,0.592247);
   met_rebin10_fakes_VV_stack_1->SetBinContent(8,0.205721);
   met_rebin10_fakes_VV_stack_1->SetBinContent(10,0.4098757);
   met_rebin10_fakes_VV_stack_1->SetBinError(5,0.2026171);
   met_rebin10_fakes_VV_stack_1->SetBinError(7,0.341962);
   met_rebin10_fakes_VV_stack_1->SetBinError(8,0.205721);
   met_rebin10_fakes_VV_stack_1->SetBinError(10,0.2898299);
   met_rebin10_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin10_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin10_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin10_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin10_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_fakes_VV_stack_1,"");
   Double_t xAxis4[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_fakes_TT_stack_2 = new TH1D("met_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   met_rebin10_fakes_TT_stack_2->SetBinContent(2,0.5509584);
   met_rebin10_fakes_TT_stack_2->SetBinContent(3,6.623916);
   met_rebin10_fakes_TT_stack_2->SetBinContent(4,8.468142);
   met_rebin10_fakes_TT_stack_2->SetBinContent(5,8.445823);
   met_rebin10_fakes_TT_stack_2->SetBinContent(6,7.967875);
   met_rebin10_fakes_TT_stack_2->SetBinContent(7,10.24036);
   met_rebin10_fakes_TT_stack_2->SetBinContent(8,18.59231);
   met_rebin10_fakes_TT_stack_2->SetBinContent(9,24.46103);
   met_rebin10_fakes_TT_stack_2->SetBinContent(10,31.15821);
   met_rebin10_fakes_TT_stack_2->SetBinError(2,0.2755154);
   met_rebin10_fakes_TT_stack_2->SetBinError(3,0.9668469);
   met_rebin10_fakes_TT_stack_2->SetBinError(4,1.093892);
   met_rebin10_fakes_TT_stack_2->SetBinError(5,1.104359);
   met_rebin10_fakes_TT_stack_2->SetBinError(6,1.070534);
   met_rebin10_fakes_TT_stack_2->SetBinError(7,1.199126);
   met_rebin10_fakes_TT_stack_2->SetBinError(8,1.654293);
   met_rebin10_fakes_TT_stack_2->SetBinError(9,1.88169);
   met_rebin10_fakes_TT_stack_2->SetBinError(10,2.122818);
   met_rebin10_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin10_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin10_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin10_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin10_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_fakes_TT_stack_2,"");
   Double_t xAxis5[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_fakes_DY_stack_3 = new TH1D("met_rebin10_fakes_DY_stack_3","dummy",10, xAxis5);
   met_rebin10_fakes_DY_stack_3->SetBinContent(2,14.26143);
   met_rebin10_fakes_DY_stack_3->SetBinContent(3,64.97928);
   met_rebin10_fakes_DY_stack_3->SetBinContent(4,61.4547);
   met_rebin10_fakes_DY_stack_3->SetBinContent(5,35.63039);
   met_rebin10_fakes_DY_stack_3->SetBinContent(6,25.12745);
   met_rebin10_fakes_DY_stack_3->SetBinContent(7,14.67982);
   met_rebin10_fakes_DY_stack_3->SetBinContent(8,18.21717);
   met_rebin10_fakes_DY_stack_3->SetBinContent(9,7.248236);
   met_rebin10_fakes_DY_stack_3->SetBinContent(10,3.57414);
   met_rebin10_fakes_DY_stack_3->SetBinError(2,7.132285);
   met_rebin10_fakes_DY_stack_3->SetBinError(3,15.3247);
   met_rebin10_fakes_DY_stack_3->SetBinError(4,14.91126);
   met_rebin10_fakes_DY_stack_3->SetBinError(5,11.2799);
   met_rebin10_fakes_DY_stack_3->SetBinError(6,9.499199);
   met_rebin10_fakes_DY_stack_3->SetBinError(7,7.3415);
   met_rebin10_fakes_DY_stack_3->SetBinError(8,8.149271);
   met_rebin10_fakes_DY_stack_3->SetBinError(9,5.12911);
   met_rebin10_fakes_DY_stack_3->SetBinError(10,3.57414);
   met_rebin10_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin10_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin10_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin10_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin10_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_fakes_DY_stack_3,"");
   Double_t xAxis6[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_prompt_ZZ_stack_4 = new TH1D("met_rebin10_prompt_ZZ_stack_4","dummy",10, xAxis6);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(2,2.36364);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(3,33.68341);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(4,26.9293);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(5,22.49856);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(6,15.05739);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(7,11.62968);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(8,14.95236);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(9,12.00068);
   met_rebin10_prompt_ZZ_stack_4->SetBinContent(10,14.49353);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(2,0.9651466);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(3,3.593559);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(4,3.220875);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(5,2.955856);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(6,2.412698);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(7,2.1247);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(8,2.396002);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(9,2.156186);
   met_rebin10_prompt_ZZ_stack_4->SetBinError(10,2.383593);
   met_rebin10_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin10_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin10_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin10_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin10_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_prompt_ZZ_stack_4,"");
   Double_t xAxis7[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_prompt_WZ_stack_5 = new TH1D("met_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(2,23.75508);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(3,298.4913);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(4,303.3791);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(5,319.4686);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(6,288.7351);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(7,256.8017);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(8,388.7131);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(9,381.8136);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(10,361.6397);
   met_rebin10_prompt_WZ_stack_5->SetBinError(2,2.1181);
   met_rebin10_prompt_WZ_stack_5->SetBinError(3,7.524392);
   met_rebin10_prompt_WZ_stack_5->SetBinError(4,7.583152);
   met_rebin10_prompt_WZ_stack_5->SetBinError(5,7.790513);
   met_rebin10_prompt_WZ_stack_5->SetBinError(6,7.399387);
   met_rebin10_prompt_WZ_stack_5->SetBinError(7,6.978672);
   met_rebin10_prompt_WZ_stack_5->SetBinError(8,8.583081);
   met_rebin10_prompt_WZ_stack_5->SetBinError(9,8.522347);
   met_rebin10_prompt_WZ_stack_5->SetBinError(10,8.332356);
   met_rebin10_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin10_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin10_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin10_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin10_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin10_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin10_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin10_stack->Add(met_rebin10_prompt_WZ_stack_5,"");
   met_rebin10_stack->Draw("same hist");
   Double_t xAxis8[11] = {0, 25.20979, 30.41958, 35.62936, 40.9229, 46.65263, 52.38235, 58.11208, 70.02657, 92.09739, 380}; 
   
   TH1D *met_rebin10_total__2 = new TH1D("met_rebin10_total__2","dummy",10, xAxis8);
   met_rebin10_total__2->SetBinContent(2,40.9311);
   met_rebin10_total__2->SetBinContent(3,403.7779);
   met_rebin10_total__2->SetBinContent(4,400.2312);
   met_rebin10_total__2->SetBinContent(5,386.246);
   met_rebin10_total__2->SetBinContent(6,336.8878);
   met_rebin10_total__2->SetBinContent(7,293.9438);
   met_rebin10_total__2->SetBinContent(8,440.6807);
   met_rebin10_total__2->SetBinContent(9,425.5236);
   met_rebin10_total__2->SetBinContent(10,411.2754);
   met_rebin10_total__2->SetBinError(2,7.507547);
   met_rebin10_total__2->SetBinError(3,17.47316);
   met_rebin10_total__2->SetBinError(4,17.07105);
   met_rebin10_total__2->SetBinError(5,14.06861);
   met_rebin10_total__2->SetBinError(6,12.32692);
   met_rebin10_total__2->SetBinError(7,10.42443);
   met_rebin10_total__2->SetBinError(8,12.19015);
   met_rebin10_total__2->SetBinError(9,10.35027);
   met_rebin10_total__2->SetBinError(10,9.616366);
   met_rebin10_total__2->SetMinimum(0);
   met_rebin10_total__2->SetMaximum(881.3613);
   met_rebin10_total__2->SetEntries(15153);
   met_rebin10_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin10_total__2->SetFillColor(ci);
   met_rebin10_total__2->SetMarkerStyle(20);
   met_rebin10_total__2->SetMarkerSize(1.1);
   met_rebin10_total__2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin10_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin10_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetXaxis()->SetLabelSize(0.04);
   met_rebin10_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin10_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin10_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin10_total__2->GetYaxis()->SetTitle("Events");
   met_rebin10_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetYaxis()->SetLabelSize(0.04);
   met_rebin10_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin10_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin10_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin10_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin10_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin10_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin10_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin10_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin10_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin10_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin10_total_errors_fx3001[9] = {
   27.81468,
   33.02447,
   38.27613,
   43.78776,
   49.51749,
   55.24721,
   64.06932,
   81.06198,
   236.0487};
   Double_t met_rebin10_total_errors_fy3001[9] = {
   40.9311,
   403.7779,
   400.2312,
   386.246,
   336.8878,
   293.9438,
   440.6807,
   425.5236,
   411.2754};
   Double_t met_rebin10_total_errors_felx3001[9] = {
   2.604895,
   2.604894,
   2.646767,
   2.864864,
   2.864862,
   2.864862,
   5.957249,
   11.03541,
   143.9513};
   Double_t met_rebin10_total_errors_fely3001[9] = {
   8.129539,
   32.09334,
   36.03701,
   24.28665,
   20.62913,
   23.76036,
   36.36848,
   35.9476,
   35.66416};
   Double_t met_rebin10_total_errors_fehx3001[9] = {
   2.604895,
   2.604894,
   2.646767,
   2.864864,
   2.864862,
   2.864862,
   5.957249,
   11.03541,
   143.9513};
   Double_t met_rebin10_total_errors_fehy3001[9] = {
   5.083935,
   32.50974,
   32.91116,
   29.61034,
   24.59617,
   19.28976,
   41.30594,
   42.29315,
   45.08196};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,met_rebin10_total_errors_fx3001,met_rebin10_total_errors_fy3001,met_rebin10_total_errors_felx3001,met_rebin10_total_errors_fehx3001,met_rebin10_total_errors_fely3001,met_rebin10_total_errors_fehy3001);
   grae->SetName("met_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin10_total_errors3001 = new TH1F("Graph_met_rebin10_total_errors3001","Graph",100,0,415.479);
   Graph_met_rebin10_total_errors3001->SetMinimum(29.52141);
   Graph_met_rebin10_total_errors3001->SetMaximum(526.9051);
   Graph_met_rebin10_total_errors3001->SetDirectory(0);
   Graph_met_rebin10_total_errors3001->SetStats(0);
   Graph_met_rebin10_total_errors3001->SetLineStyle(0);
   Graph_met_rebin10_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin10_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin10_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin10_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin10_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin10_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin10_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin10_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin10_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin10_total_errors","Total unc.","F");
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
   met_rebin10_canvas->Modified();
   met_rebin10_canvas->cd();
   met_rebin10_canvas->SetSelected(met_rebin10_canvas);
}
