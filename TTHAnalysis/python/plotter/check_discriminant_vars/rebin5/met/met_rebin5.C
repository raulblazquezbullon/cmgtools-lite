void met_rebin5()
{
//=========Macro generated from canvas: met_rebin5_canvas/met_rebin5
//=========  (Thu Jul  6 17:54:48 2023) by ROOT version 6.24/07
   TCanvas *met_rebin5_canvas = new TCanvas("met_rebin5_canvas", "met_rebin5",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin5_canvas->SetHighLightColor(2);
   met_rebin5_canvas->Range(-87.69231,-268.6021,399.4872,1797.568);
   met_rebin5_canvas->SetFillColor(0);
   met_rebin5_canvas->SetBorderMode(0);
   met_rebin5_canvas->SetBorderSize(2);
   met_rebin5_canvas->SetTickx(1);
   met_rebin5_canvas->SetTicky(1);
   met_rebin5_canvas->SetLeftMargin(0.18);
   met_rebin5_canvas->SetRightMargin(0.04);
   met_rebin5_canvas->SetTopMargin(0.06);
   met_rebin5_canvas->SetBottomMargin(0.13);
   met_rebin5_canvas->SetFrameFillStyle(0);
   met_rebin5_canvas->SetFrameBorderMode(0);
   met_rebin5_canvas->SetFrameFillStyle(0);
   met_rebin5_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0, 30.41958, 40.9229, 52.38235, 70.02657, 380}; 
   
   TH1D *met_rebin5_total__1 = new TH1D("met_rebin5_total__1","dummy",5, xAxis1);
   met_rebin5_total__1->SetBinContent(1,40.9311);
   met_rebin5_total__1->SetBinContent(2,804.0091);
   met_rebin5_total__1->SetBinContent(3,723.1338);
   met_rebin5_total__1->SetBinContent(4,734.6245);
   met_rebin5_total__1->SetBinContent(5,836.799);
   met_rebin5_total__1->SetBinError(1,7.507547);
   met_rebin5_total__1->SetBinError(2,24.4281);
   met_rebin5_total__1->SetBinError(3,18.70505);
   met_rebin5_total__1->SetBinError(4,16.03959);
   met_rebin5_total__1->SetBinError(5,14.12808);
   met_rebin5_total__1->SetMinimum(0);
   met_rebin5_total__1->SetMaximum(1673.598);
   met_rebin5_total__1->SetEntries(15153);
   met_rebin5_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin5_total__1->SetFillColor(ci);
   met_rebin5_total__1->SetMarkerStyle(20);
   met_rebin5_total__1->SetMarkerSize(1.1);
   met_rebin5_total__1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin5_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin5_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin5_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_total__1->GetXaxis()->SetLabelSize(0.04);
   met_rebin5_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin5_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin5_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin5_total__1->GetYaxis()->SetTitle("Events");
   met_rebin5_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin5_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_total__1->GetYaxis()->SetLabelSize(0.04);
   met_rebin5_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin5_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin5_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin5_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin5_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin5_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin5_total__1->Draw("HIST");
   
   THStack *met_rebin5_stack = new THStack();
   met_rebin5_stack->SetName("met_rebin5_stack");
   met_rebin5_stack->SetTitle("met_rebin5");
   Double_t xAxis2[6] = {0, 30.41958, 40.9229, 52.38235, 70.02657, 380}; 
   
   TH1F *met_rebin5_stack_stack_1 = new TH1F("met_rebin5_stack_stack_1","met_rebin5",5, xAxis2);
   met_rebin5_stack_stack_1->SetMinimum(0);
   met_rebin5_stack_stack_1->SetMaximum(878.639);
   met_rebin5_stack_stack_1->SetDirectory(0);
   met_rebin5_stack_stack_1->SetStats(0);
   met_rebin5_stack_stack_1->SetLineStyle(0);
   met_rebin5_stack_stack_1->SetMarkerStyle(20);
   met_rebin5_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin5_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin5_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin5_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin5_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin5_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin5_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->SetHistogram(met_rebin5_stack_stack_1);
   
   Double_t xAxis3[6] = {0, 30.41958, 40.9229, 52.38235, 70.02657, 380}; 
   
   TH1D *met_rebin5_fakes_VV_stack_1 = new TH1D("met_rebin5_fakes_VV_stack_1","dummy",5, xAxis3);
   met_rebin5_fakes_VV_stack_1->SetBinContent(3,0.2026171);
   met_rebin5_fakes_VV_stack_1->SetBinContent(4,0.797968);
   met_rebin5_fakes_VV_stack_1->SetBinContent(5,0.4098757);
   met_rebin5_fakes_VV_stack_1->SetBinError(3,0.2026171);
   met_rebin5_fakes_VV_stack_1->SetBinError(4,0.3990729);
   met_rebin5_fakes_VV_stack_1->SetBinError(5,0.2898299);
   met_rebin5_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin5_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin5_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin5_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin5_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_fakes_VV_stack_1,"");
   Double_t xAxis4[6] = {0, 30.41958, 40.9229, 52.38235, 70.02657, 380}; 
   
   TH1D *met_rebin5_fakes_TT_stack_2 = new TH1D("met_rebin5_fakes_TT_stack_2","dummy",5, xAxis4);
   met_rebin5_fakes_TT_stack_2->SetBinContent(1,0.5509584);
   met_rebin5_fakes_TT_stack_2->SetBinContent(2,15.09206);
   met_rebin5_fakes_TT_stack_2->SetBinContent(3,16.4137);
   met_rebin5_fakes_TT_stack_2->SetBinContent(4,28.83266);
   met_rebin5_fakes_TT_stack_2->SetBinContent(5,55.61923);
   met_rebin5_fakes_TT_stack_2->SetBinError(1,0.2755154);
   met_rebin5_fakes_TT_stack_2->SetBinError(2,1.459929);
   met_rebin5_fakes_TT_stack_2->SetBinError(3,1.538067);
   met_rebin5_fakes_TT_stack_2->SetBinError(4,2.043181);
   met_rebin5_fakes_TT_stack_2->SetBinError(5,2.836743);
   met_rebin5_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin5_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin5_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin5_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin5_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_fakes_TT_stack_2,"");
   Double_t xAxis5[6] = {0, 30.41958, 40.9229, 52.38235, 70.02657, 380}; 
   
   TH1D *met_rebin5_fakes_DY_stack_3 = new TH1D("met_rebin5_fakes_DY_stack_3","dummy",5, xAxis5);
   met_rebin5_fakes_DY_stack_3->SetBinContent(1,14.26143);
   met_rebin5_fakes_DY_stack_3->SetBinContent(2,126.434);
   met_rebin5_fakes_DY_stack_3->SetBinContent(3,60.75784);
   met_rebin5_fakes_DY_stack_3->SetBinContent(4,32.89698);
   met_rebin5_fakes_DY_stack_3->SetBinContent(5,10.82238);
   met_rebin5_fakes_DY_stack_3->SetBinError(1,7.132285);
   met_rebin5_fakes_DY_stack_3->SetBinError(2,21.38206);
   met_rebin5_fakes_DY_stack_3->SetBinError(3,14.74689);
   met_rebin5_fakes_DY_stack_3->SetBinError(4,10.96851);
   met_rebin5_fakes_DY_stack_3->SetBinError(5,6.25158);
   met_rebin5_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin5_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin5_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin5_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin5_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_fakes_DY_stack_3,"");
   Double_t xAxis6[6] = {0, 30.41958, 40.9229, 52.38235, 70.02657, 380}; 
   
   TH1D *met_rebin5_prompt_ZZ_stack_4 = new TH1D("met_rebin5_prompt_ZZ_stack_4","dummy",5, xAxis6);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(1,2.36364);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(2,60.6127);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(3,37.55594);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(4,26.58204);
   met_rebin5_prompt_ZZ_stack_4->SetBinContent(5,26.49422);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(1,0.9651466);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(2,4.825733);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(3,3.815521);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(4,3.20237);
   met_rebin5_prompt_ZZ_stack_4->SetBinError(5,3.214134);
   met_rebin5_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin5_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin5_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin5_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin5_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_prompt_ZZ_stack_4,"");
   Double_t xAxis7[6] = {0, 30.41958, 40.9229, 52.38235, 70.02657, 380}; 
   
   TH1D *met_rebin5_prompt_WZ_stack_5 = new TH1D("met_rebin5_prompt_WZ_stack_5","dummy",5, xAxis7);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(1,23.75508);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(2,601.8704);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(3,608.2037);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(4,645.5148);
   met_rebin5_prompt_WZ_stack_5->SetBinContent(5,743.4533);
   met_rebin5_prompt_WZ_stack_5->SetBinError(1,2.1181);
   met_rebin5_prompt_WZ_stack_5->SetBinError(2,10.68273);
   met_rebin5_prompt_WZ_stack_5->SetBinError(3,10.74444);
   met_rebin5_prompt_WZ_stack_5->SetBinError(4,11.06215);
   met_rebin5_prompt_WZ_stack_5->SetBinError(5,11.91883);
   met_rebin5_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin5_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin5_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin5_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin5_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin5_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin5_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin5_stack->Add(met_rebin5_prompt_WZ_stack_5,"");
   met_rebin5_stack->Draw("same hist");
   Double_t xAxis8[6] = {0, 30.41958, 40.9229, 52.38235, 70.02657, 380}; 
   
   TH1D *met_rebin5_total__2 = new TH1D("met_rebin5_total__2","dummy",5, xAxis8);
   met_rebin5_total__2->SetBinContent(1,40.9311);
   met_rebin5_total__2->SetBinContent(2,804.0091);
   met_rebin5_total__2->SetBinContent(3,723.1338);
   met_rebin5_total__2->SetBinContent(4,734.6245);
   met_rebin5_total__2->SetBinContent(5,836.799);
   met_rebin5_total__2->SetBinError(1,7.507547);
   met_rebin5_total__2->SetBinError(2,24.4281);
   met_rebin5_total__2->SetBinError(3,18.70505);
   met_rebin5_total__2->SetBinError(4,16.03959);
   met_rebin5_total__2->SetBinError(5,14.12808);
   met_rebin5_total__2->SetMinimum(0);
   met_rebin5_total__2->SetMaximum(1673.598);
   met_rebin5_total__2->SetEntries(15153);
   met_rebin5_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin5_total__2->SetFillColor(ci);
   met_rebin5_total__2->SetMarkerStyle(20);
   met_rebin5_total__2->SetMarkerSize(1.1);
   met_rebin5_total__2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin5_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin5_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin5_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin5_total__2->GetXaxis()->SetLabelSize(0.04);
   met_rebin5_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin5_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin5_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin5_total__2->GetYaxis()->SetTitle("Events");
   met_rebin5_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin5_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin5_total__2->GetYaxis()->SetLabelSize(0.04);
   met_rebin5_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin5_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin5_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin5_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin5_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin5_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin5_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin5_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin5_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin5_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin5_total_errors_fx3001[5] = {
   15.20979,
   35.67124,
   46.65262,
   61.20446,
   225.0133};
   Double_t met_rebin5_total_errors_fy3001[5] = {
   40.9311,
   804.0091,
   723.1338,
   734.6245,
   836.799};
   Double_t met_rebin5_total_errors_felx3001[5] = {
   15.20979,
   5.25166,
   5.729727,
   8.822111,
   154.9867};
   Double_t met_rebin5_total_errors_fely3001[5] = {
   8.129539,
   67.80174,
   44.85567,
   60.12327,
   71.57656};
   Double_t met_rebin5_total_errors_fehx3001[5] = {
   15.20979,
   5.25166,
   5.729727,
   8.822111,
   154.9867};
   Double_t met_rebin5_total_errors_fehy3001[5] = {
   5.083935,
   64.6933,
   51.87978,
   52.47107,
   87.30051};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,met_rebin5_total_errors_fx3001,met_rebin5_total_errors_fy3001,met_rebin5_total_errors_felx3001,met_rebin5_total_errors_fehx3001,met_rebin5_total_errors_fely3001,met_rebin5_total_errors_fehy3001);
   grae->SetName("met_rebin5_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin5_total_errors3001 = new TH1F("Graph_met_rebin5_total_errors3001","Graph",100,0,418);
   Graph_met_rebin5_total_errors3001->SetMinimum(29.52141);
   Graph_met_rebin5_total_errors3001->SetMaximum(1013.229);
   Graph_met_rebin5_total_errors3001->SetDirectory(0);
   Graph_met_rebin5_total_errors3001->SetStats(0);
   Graph_met_rebin5_total_errors3001->SetLineStyle(0);
   Graph_met_rebin5_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin5_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin5_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin5_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin5_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin5_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin5_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin5_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin5_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin5_total_errors","Total unc.","F");
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
   met_rebin5_canvas->Modified();
   met_rebin5_canvas->cd();
   met_rebin5_canvas->SetSelected(met_rebin5_canvas);
}
