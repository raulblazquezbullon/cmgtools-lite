void met_rebin6()
{
//=========Macro generated from canvas: met_rebin6_canvas/met_rebin6
//=========  (Thu Jul  6 17:59:48 2023) by ROOT version 6.24/07
   TCanvas *met_rebin6_canvas = new TCanvas("met_rebin6_canvas", "met_rebin6",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin6_canvas->SetHighLightColor(2);
   met_rebin6_canvas->Range(-87.69231,-227.8601,399.4872,1524.91);
   met_rebin6_canvas->SetFillColor(0);
   met_rebin6_canvas->SetBorderMode(0);
   met_rebin6_canvas->SetBorderSize(2);
   met_rebin6_canvas->SetTickx(1);
   met_rebin6_canvas->SetTicky(1);
   met_rebin6_canvas->SetLeftMargin(0.18);
   met_rebin6_canvas->SetRightMargin(0.04);
   met_rebin6_canvas->SetTopMargin(0.06);
   met_rebin6_canvas->SetBottomMargin(0.13);
   met_rebin6_canvas->SetFrameFillStyle(0);
   met_rebin6_canvas->SetFrameBorderMode(0);
   met_rebin6_canvas->SetFrameFillStyle(0);
   met_rebin6_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[7] = {0, 28.68298, 37.36596, 46.65263, 56.20217, 75.01117, 380}; 
   
   TH1D *met_rebin6_total__1 = new TH1D("met_rebin6_total__1","dummy",6, xAxis1);
   met_rebin6_total__1->SetBinContent(2,563.9027);
   met_rebin6_total__1->SetBinContent(3,667.2835);
   met_rebin6_total__1->SetBinContent(4,535.4561);
   met_rebin6_total__1->SetBinContent(5,662.9834);
   met_rebin6_total__1->SetBinContent(6,709.8718);
   met_rebin6_total__1->SetBinError(2,20.27018);
   met_rebin6_total__1->SetBinError(3,20.97953);
   met_rebin6_total__1->SetBinError(4,15.12151);
   met_rebin6_total__1->SetBinError(5,14.3218);
   met_rebin6_total__1->SetBinError(6,13.23064);
   met_rebin6_total__1->SetMinimum(0);
   met_rebin6_total__1->SetMaximum(1419.744);
   met_rebin6_total__1->SetEntries(15153);
   met_rebin6_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin6_total__1->SetFillColor(ci);
   met_rebin6_total__1->SetMarkerStyle(20);
   met_rebin6_total__1->SetMarkerSize(1.1);
   met_rebin6_total__1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin6_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin6_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin6_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin6_total__1->GetXaxis()->SetLabelSize(0.04);
   met_rebin6_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin6_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin6_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin6_total__1->GetYaxis()->SetTitle("Events");
   met_rebin6_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin6_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin6_total__1->GetYaxis()->SetLabelSize(0.04);
   met_rebin6_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin6_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin6_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin6_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin6_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin6_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin6_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin6_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin6_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin6_total__1->Draw("HIST");
   
   THStack *met_rebin6_stack = new THStack();
   met_rebin6_stack->SetName("met_rebin6_stack");
   met_rebin6_stack->SetTitle("met_rebin6");
   Double_t xAxis2[7] = {0, 28.68298, 37.36596, 46.65263, 56.20217, 75.01117, 380}; 
   
   TH1F *met_rebin6_stack_stack_1 = new TH1F("met_rebin6_stack_stack_1","met_rebin6",6, xAxis2);
   met_rebin6_stack_stack_1->SetMinimum(0);
   met_rebin6_stack_stack_1->SetMaximum(745.3654);
   met_rebin6_stack_stack_1->SetDirectory(0);
   met_rebin6_stack_stack_1->SetStats(0);
   met_rebin6_stack_stack_1->SetLineStyle(0);
   met_rebin6_stack_stack_1->SetMarkerStyle(20);
   met_rebin6_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin6_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin6_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin6_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin6_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin6_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin6_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin6_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin6_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin6_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin6_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin6_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin6_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin6_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin6_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin6_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin6_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin6_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin6_stack->SetHistogram(met_rebin6_stack_stack_1);
   
   Double_t xAxis3[7] = {0, 28.68298, 37.36596, 46.65263, 56.20217, 75.01117, 380}; 
   
   TH1D *met_rebin6_fakes_VV_stack_1 = new TH1D("met_rebin6_fakes_VV_stack_1","dummy",6, xAxis3);
   met_rebin6_fakes_VV_stack_1->SetBinContent(3,0.2026171);
   met_rebin6_fakes_VV_stack_1->SetBinContent(4,0.199151);
   met_rebin6_fakes_VV_stack_1->SetBinContent(5,0.598817);
   met_rebin6_fakes_VV_stack_1->SetBinContent(6,0.4098757);
   met_rebin6_fakes_VV_stack_1->SetBinError(3,0.2026171);
   met_rebin6_fakes_VV_stack_1->SetBinError(4,0.199151);
   met_rebin6_fakes_VV_stack_1->SetBinError(5,0.3458295);
   met_rebin6_fakes_VV_stack_1->SetBinError(6,0.2898299);
   met_rebin6_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin6_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin6_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin6_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin6_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin6_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin6_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin6_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin6_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin6_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin6_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin6_stack->Add(met_rebin6_fakes_VV_stack_1,"");
   Double_t xAxis4[7] = {0, 28.68298, 37.36596, 46.65263, 56.20217, 75.01117, 380}; 
   
   TH1D *met_rebin6_fakes_TT_stack_2 = new TH1D("met_rebin6_fakes_TT_stack_2","dummy",6, xAxis4);
   met_rebin6_fakes_TT_stack_2->SetBinContent(2,10.40942);
   met_rebin6_fakes_TT_stack_2->SetBinContent(3,13.67942);
   met_rebin6_fakes_TT_stack_2->SetBinContent(4,14.01322);
   met_rebin6_fakes_TT_stack_2->SetBinContent(5,29.56944);
   met_rebin6_fakes_TT_stack_2->SetBinContent(6,48.83712);
   met_rebin6_fakes_TT_stack_2->SetBinError(2,1.210813);
   met_rebin6_fakes_TT_stack_2->SetBinError(3,1.4003);
   met_rebin6_fakes_TT_stack_2->SetBinError(4,1.412994);
   met_rebin6_fakes_TT_stack_2->SetBinError(5,2.069617);
   met_rebin6_fakes_TT_stack_2->SetBinError(6,2.662307);
   met_rebin6_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin6_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin6_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin6_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin6_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin6_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin6_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin6_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin6_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin6_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin6_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin6_stack->Add(met_rebin6_fakes_TT_stack_2,"");
   Double_t xAxis5[7] = {0, 28.68298, 37.36596, 46.65263, 56.20217, 75.01117, 380}; 
   
   TH1D *met_rebin6_fakes_DY_stack_3 = new TH1D("met_rebin6_fakes_DY_stack_3","dummy",6, xAxis5);
   met_rebin6_fakes_DY_stack_3->SetBinContent(2,86.46963);
   met_rebin6_fakes_DY_stack_3->SetBinContent(3,89.85617);
   met_rebin6_fakes_DY_stack_3->SetBinContent(4,36.03237);
   met_rebin6_fakes_DY_stack_3->SetBinContent(5,21.99206);
   met_rebin6_fakes_DY_stack_3->SetBinContent(6,10.82238);
   met_rebin6_fakes_DY_stack_3->SetBinError(2,17.65914);
   met_rebin6_fakes_DY_stack_3->SetBinError(3,17.98479);
   met_rebin6_fakes_DY_stack_3->SetBinError(4,11.3966);
   met_rebin6_fakes_DY_stack_3->SetBinError(5,8.981115);
   met_rebin6_fakes_DY_stack_3->SetBinError(6,6.25158);
   met_rebin6_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin6_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin6_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin6_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin6_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin6_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin6_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin6_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin6_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin6_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin6_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin6_stack->Add(met_rebin6_fakes_DY_stack_3,"");
   Double_t xAxis6[7] = {0, 28.68298, 37.36596, 46.65263, 56.20217, 75.01117, 380}; 
   
   TH1D *met_rebin6_prompt_ZZ_stack_4 = new TH1D("met_rebin6_prompt_ZZ_stack_4","dummy",6, xAxis6);
   met_rebin6_prompt_ZZ_stack_4->SetBinContent(2,46.12199);
   met_rebin6_prompt_ZZ_stack_4->SetBinContent(3,39.35291);
   met_rebin6_prompt_ZZ_stack_4->SetBinContent(4,23.96651);
   met_rebin6_prompt_ZZ_stack_4->SetBinContent(5,21.55873);
   met_rebin6_prompt_ZZ_stack_4->SetBinContent(6,22.60841);
   met_rebin6_prompt_ZZ_stack_4->SetBinError(2,4.213595);
   met_rebin6_prompt_ZZ_stack_4->SetBinError(3,3.898963);
   met_rebin6_prompt_ZZ_stack_4->SetBinError(4,3.045862);
   met_rebin6_prompt_ZZ_stack_4->SetBinError(5,2.882615);
   met_rebin6_prompt_ZZ_stack_4->SetBinError(6,2.969883);
   met_rebin6_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin6_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin6_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin6_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin6_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin6_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin6_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin6_stack->Add(met_rebin6_prompt_ZZ_stack_4,"");
   Double_t xAxis7[7] = {0, 28.68298, 37.36596, 46.65263, 56.20217, 75.01117, 380}; 
   
   TH1D *met_rebin6_prompt_WZ_stack_5 = new TH1D("met_rebin6_prompt_WZ_stack_5","dummy",6, xAxis7);
   met_rebin6_prompt_WZ_stack_5->SetBinContent(2,420.9017);
   met_rebin6_prompt_WZ_stack_5->SetBinContent(3,524.1924);
   met_rebin6_prompt_WZ_stack_5->SetBinContent(4,461.2448);
   met_rebin6_prompt_WZ_stack_5->SetBinContent(5,589.2643);
   met_rebin6_prompt_WZ_stack_5->SetBinContent(6,627.194);
   met_rebin6_prompt_WZ_stack_5->SetBinError(2,8.933905);
   met_rebin6_prompt_WZ_stack_5->SetBinError(3,9.97419);
   met_rebin6_prompt_WZ_stack_5->SetBinError(4,9.352223);
   met_rebin6_prompt_WZ_stack_5->SetBinError(5,10.57076);
   met_rebin6_prompt_WZ_stack_5->SetBinError(6,10.95333);
   met_rebin6_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin6_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin6_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin6_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin6_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin6_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin6_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin6_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin6_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin6_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin6_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin6_stack->Add(met_rebin6_prompt_WZ_stack_5,"");
   met_rebin6_stack->Draw("same hist");
   Double_t xAxis8[7] = {0, 28.68298, 37.36596, 46.65263, 56.20217, 75.01117, 380}; 
   
   TH1D *met_rebin6_total__2 = new TH1D("met_rebin6_total__2","dummy",6, xAxis8);
   met_rebin6_total__2->SetBinContent(2,563.9027);
   met_rebin6_total__2->SetBinContent(3,667.2835);
   met_rebin6_total__2->SetBinContent(4,535.4561);
   met_rebin6_total__2->SetBinContent(5,662.9834);
   met_rebin6_total__2->SetBinContent(6,709.8718);
   met_rebin6_total__2->SetBinError(2,20.27018);
   met_rebin6_total__2->SetBinError(3,20.97953);
   met_rebin6_total__2->SetBinError(4,15.12151);
   met_rebin6_total__2->SetBinError(5,14.3218);
   met_rebin6_total__2->SetBinError(6,13.23064);
   met_rebin6_total__2->SetMinimum(0);
   met_rebin6_total__2->SetMaximum(1419.744);
   met_rebin6_total__2->SetEntries(15153);
   met_rebin6_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin6_total__2->SetFillColor(ci);
   met_rebin6_total__2->SetMarkerStyle(20);
   met_rebin6_total__2->SetMarkerSize(1.1);
   met_rebin6_total__2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin6_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin6_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin6_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin6_total__2->GetXaxis()->SetLabelSize(0.04);
   met_rebin6_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin6_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin6_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin6_total__2->GetYaxis()->SetTitle("Events");
   met_rebin6_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin6_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin6_total__2->GetYaxis()->SetLabelSize(0.04);
   met_rebin6_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin6_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin6_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin6_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin6_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin6_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin6_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin6_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin6_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin6_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin6_total_errors_fx3001[5] = {
   33.02447,
   42.00929,
   51.4274,
   65.60667,
   227.5056};
   Double_t met_rebin6_total_errors_fy3001[5] = {
   563.9027,
   667.2835,
   535.4561,
   662.9834,
   709.8718};
   Double_t met_rebin6_total_errors_felx3001[5] = {
   4.34149,
   4.643333,
   4.774771,
   9.404501,
   152.4944};
   Double_t met_rebin6_total_errors_fely3001[5] = {
   46.11028,
   46.89108,
   32.59073,
   53.70414,
   63.91905};
   Double_t met_rebin6_total_errors_fehx3001[5] = {
   4.34149,
   4.643333,
   4.774771,
   9.404501,
   152.4944};
   Double_t met_rebin6_total_errors_fehy3001[5] = {
   45.93547,
   50.86903,
   35.65186,
   54.9262,
   75.05424};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,met_rebin6_total_errors_fx3001,met_rebin6_total_errors_fy3001,met_rebin6_total_errors_felx3001,met_rebin6_total_errors_fehx3001,met_rebin6_total_errors_fely3001,met_rebin6_total_errors_fehy3001);
   grae->SetName("met_rebin6_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin6_total_errors3001 = new TH1F("Graph_met_rebin6_total_errors3001","Graph",100,0,415.1317);
   Graph_met_rebin6_total_errors3001->SetMinimum(474.6593);
   Graph_met_rebin6_total_errors3001->SetMaximum(813.1321);
   Graph_met_rebin6_total_errors3001->SetDirectory(0);
   Graph_met_rebin6_total_errors3001->SetStats(0);
   Graph_met_rebin6_total_errors3001->SetLineStyle(0);
   Graph_met_rebin6_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin6_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin6_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin6_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin6_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin6_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin6_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin6_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin6_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin6_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin6_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin6_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin6_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin6_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin6_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin6_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin6_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin6_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin6_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin6_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin6_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin6_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin6_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin6_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin6_total_errors","Total unc.","F");
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
   met_rebin6_canvas->Modified();
   met_rebin6_canvas->cd();
   met_rebin6_canvas->SetSelected(met_rebin6_canvas);
}
