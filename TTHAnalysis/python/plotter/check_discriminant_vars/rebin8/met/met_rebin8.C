void met_rebin8()
{
//=========Macro generated from canvas: met_rebin8_canvas/met_rebin8
//=========  (Mon Jul 10 19:15:14 2023) by ROOT version 6.24/07
   TCanvas *met_rebin8_canvas = new TCanvas("met_rebin8_canvas", "met_rebin8",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin8_canvas->SetHighLightColor(2);
   met_rebin8_canvas->Range(-87.69231,-174.9405,399.4872,1170.756);
   met_rebin8_canvas->SetFillColor(0);
   met_rebin8_canvas->SetBorderMode(0);
   met_rebin8_canvas->SetBorderSize(2);
   met_rebin8_canvas->SetTickx(1);
   met_rebin8_canvas->SetTicky(1);
   met_rebin8_canvas->SetLeftMargin(0.18);
   met_rebin8_canvas->SetRightMargin(0.04);
   met_rebin8_canvas->SetTopMargin(0.06);
   met_rebin8_canvas->SetBottomMargin(0.13);
   met_rebin8_canvas->SetFrameFillStyle(0);
   met_rebin8_canvas->SetFrameBorderMode(0);
   met_rebin8_canvas->SetFrameFillStyle(0);
   met_rebin8_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[9] = {0, 26.5206, 33.0412, 39.5618, 46.70145, 53.8857, 62.76771, 83.30647, 380}; 
   
   TH1D *met_rebin8_total__1 = new TH1D("met_rebin8_total__1","dummy",8, xAxis1);
   met_rebin8_total__1->SetBinContent(2,249.1365);
   met_rebin8_total__1->SetBinContent(3,495.6291);
   met_rebin8_total__1->SetBinContent(4,489.8474);
   met_rebin8_total__1->SetBinContent(5,418.4768);
   met_rebin8_total__1->SetBinContent(6,397.9731);
   met_rebin8_total__1->SetBinContent(7,545.007);
   met_rebin8_total__1->SetBinContent(8,543.4277);
   met_rebin8_total__1->SetBinError(2,15.73763);
   met_rebin8_total__1->SetBinError(3,17.68639);
   met_rebin8_total__1->SetBinError(4,17.0644);
   met_rebin8_total__1->SetBinError(5,14.32941);
   met_rebin8_total__1->SetBinError(6,10.26111);
   met_rebin8_total__1->SetBinError(7,12.97709);
   met_rebin8_total__1->SetBinError(8,11.36411);
   met_rebin8_total__1->SetMinimum(0);
   met_rebin8_total__1->SetMaximum(1090.014);
   met_rebin8_total__1->SetEntries(15153);
   met_rebin8_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin8_total__1->SetFillColor(ci);
   met_rebin8_total__1->SetMarkerStyle(20);
   met_rebin8_total__1->SetMarkerSize(1.1);
   met_rebin8_total__1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin8_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin8_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin8_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_total__1->GetXaxis()->SetLabelSize(0.04);
   met_rebin8_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin8_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin8_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin8_total__1->GetYaxis()->SetTitle("Events");
   met_rebin8_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin8_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_total__1->GetYaxis()->SetLabelSize(0.04);
   met_rebin8_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin8_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin8_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin8_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin8_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin8_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin8_total__1->Draw("HIST");
   
   THStack *met_rebin8_stack = new THStack();
   met_rebin8_stack->SetName("met_rebin8_stack");
   met_rebin8_stack->SetTitle("met_rebin8");
   Double_t xAxis2[9] = {0, 26.5206, 33.0412, 39.5618, 46.70145, 53.8857, 62.76771, 83.30647, 380}; 
   
   TH1F *met_rebin8_stack_stack_1 = new TH1F("met_rebin8_stack_stack_1","met_rebin8",8, xAxis2);
   met_rebin8_stack_stack_1->SetMinimum(0);
   met_rebin8_stack_stack_1->SetMaximum(572.2573);
   met_rebin8_stack_stack_1->SetDirectory(0);
   met_rebin8_stack_stack_1->SetStats(0);
   met_rebin8_stack_stack_1->SetLineStyle(0);
   met_rebin8_stack_stack_1->SetMarkerStyle(20);
   met_rebin8_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin8_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin8_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin8_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin8_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin8_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin8_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->SetHistogram(met_rebin8_stack_stack_1);
   
   Double_t xAxis3[9] = {0, 26.5206, 33.0412, 39.5618, 46.70145, 53.8857, 62.76771, 83.30647, 380}; 
   
   TH1D *met_rebin8_fakes_VV_stack_1 = new TH1D("met_rebin8_fakes_VV_stack_1","dummy",8, xAxis3);
   met_rebin8_fakes_VV_stack_1->SetBinContent(4,0.2026171);
   met_rebin8_fakes_VV_stack_1->SetBinContent(6,0.797968);
   met_rebin8_fakes_VV_stack_1->SetBinContent(8,0.4098757);
   met_rebin8_fakes_VV_stack_1->SetBinError(4,0.2026171);
   met_rebin8_fakes_VV_stack_1->SetBinError(6,0.3990729);
   met_rebin8_fakes_VV_stack_1->SetBinError(8,0.2898299);
   met_rebin8_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin8_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin8_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin8_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin8_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_fakes_VV_stack_1,"");
   Double_t xAxis4[9] = {0, 26.5206, 33.0412, 39.5618, 46.70145, 53.8857, 62.76771, 83.30647, 380}; 
   
   TH1D *met_rebin8_fakes_TT_stack_2 = new TH1D("met_rebin8_fakes_TT_stack_2","dummy",8, xAxis4);
   met_rebin8_fakes_TT_stack_2->SetBinContent(2,3.652015);
   met_rebin8_fakes_TT_stack_2->SetBinContent(3,9.723099);
   met_rebin8_fakes_TT_stack_2->SetBinContent(4,10.71372);
   met_rebin8_fakes_TT_stack_2->SetBinContent(5,10.06543);
   met_rebin8_fakes_TT_stack_2->SetBinContent(6,15.68112);
   met_rebin8_fakes_TT_stack_2->SetBinContent(7,26.53226);
   met_rebin8_fakes_TT_stack_2->SetBinContent(8,40.14097);
   met_rebin8_fakes_TT_stack_2->SetBinError(2,0.7165311);
   met_rebin8_fakes_TT_stack_2->SetBinError(3,1.171324);
   met_rebin8_fakes_TT_stack_2->SetBinError(4,1.241569);
   met_rebin8_fakes_TT_stack_2->SetBinError(5,1.199802);
   met_rebin8_fakes_TT_stack_2->SetBinError(6,1.517224);
   met_rebin8_fakes_TT_stack_2->SetBinError(7,1.95658);
   met_rebin8_fakes_TT_stack_2->SetBinError(8,2.407914);
   met_rebin8_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin8_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin8_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin8_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin8_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_fakes_TT_stack_2,"");
   Double_t xAxis5[9] = {0, 26.5206, 33.0412, 39.5618, 46.70145, 53.8857, 62.76771, 83.30647, 380}; 
   
   TH1D *met_rebin8_fakes_DY_stack_3 = new TH1D("met_rebin8_fakes_DY_stack_3","dummy",8, xAxis5);
   met_rebin8_fakes_DY_stack_3->SetBinContent(2,57.57174);
   met_rebin8_fakes_DY_stack_3->SetBinContent(3,61.72862);
   met_rebin8_fakes_DY_stack_3->SetBinContent(4,57.02544);
   met_rebin8_fakes_DY_stack_3->SetBinContent(5,36.03237);
   met_rebin8_fakes_DY_stack_3->SetBinContent(6,7.521613);
   met_rebin8_fakes_DY_stack_3->SetBinContent(7,18.23475);
   met_rebin8_fakes_DY_stack_3->SetBinContent(8,7.058068);
   met_rebin8_fakes_DY_stack_3->SetBinError(2,14.39884);
   met_rebin8_fakes_DY_stack_3->SetBinError(3,14.97888);
   met_rebin8_fakes_DY_stack_3->SetBinError(4,14.26899);
   met_rebin8_fakes_DY_stack_3->SetBinError(5,11.3966);
   met_rebin8_fakes_DY_stack_3->SetBinError(6,5.318621);
   met_rebin8_fakes_DY_stack_3->SetBinError(7,8.157372);
   met_rebin8_fakes_DY_stack_3->SetBinError(8,4.991215);
   met_rebin8_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin8_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin8_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin8_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin8_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_fakes_DY_stack_3,"");
   Double_t xAxis6[9] = {0, 26.5206, 33.0412, 39.5618, 46.70145, 53.8857, 62.76771, 83.30647, 380}; 
   
   TH1D *met_rebin8_prompt_ZZ_stack_4 = new TH1D("met_rebin8_prompt_ZZ_stack_4","dummy",8, xAxis6);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(2,21.53615);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(3,34.12105);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(4,29.81771);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(5,17.40411);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(6,18.45808);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(7,15.11891);
   met_rebin8_prompt_ZZ_stack_4->SetBinContent(8,17.15254);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(2,2.879753);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(3,3.619792);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(4,3.400062);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(5,2.596164);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(6,2.666252);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(7,2.421743);
   met_rebin8_prompt_ZZ_stack_4->SetBinError(8,2.58711);
   met_rebin8_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin8_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin8_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin8_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin8_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_prompt_ZZ_stack_4,"");
   Double_t xAxis7[9] = {0, 26.5206, 33.0412, 39.5618, 46.70145, 53.8857, 62.76771, 83.30647, 380}; 
   
   TH1D *met_rebin8_prompt_WZ_stack_5 = new TH1D("met_rebin8_prompt_WZ_stack_5","dummy",8, xAxis7);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(2,166.3766);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(3,390.0563);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(4,392.0879);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(5,354.9749);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(6,355.5143);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(7,485.121);
   met_rebin8_prompt_WZ_stack_5->SetBinContent(8,478.6662);
   met_rebin8_prompt_WZ_stack_5->SetBinError(2,5.616031);
   met_rebin8_prompt_WZ_stack_5->SetBinError(3,8.600369);
   met_rebin8_prompt_WZ_stack_5->SetBinError(4,8.62825);
   met_rebin8_prompt_WZ_stack_5->SetBinError(5,8.201813);
   met_rebin8_prompt_WZ_stack_5->SetBinError(6,8.211732);
   met_rebin8_prompt_WZ_stack_5->SetBinError(7,9.600472);
   met_rebin8_prompt_WZ_stack_5->SetBinError(8,9.573691);
   met_rebin8_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin8_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin8_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin8_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin8_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin8_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin8_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin8_stack->Add(met_rebin8_prompt_WZ_stack_5,"");
   met_rebin8_stack->Draw("same hist");
   Double_t xAxis8[9] = {0, 26.5206, 33.0412, 39.5618, 46.70145, 53.8857, 62.76771, 83.30647, 380}; 
   
   TH1D *met_rebin8_total__2 = new TH1D("met_rebin8_total__2","dummy",8, xAxis8);
   met_rebin8_total__2->SetBinContent(2,249.1365);
   met_rebin8_total__2->SetBinContent(3,495.6291);
   met_rebin8_total__2->SetBinContent(4,489.8474);
   met_rebin8_total__2->SetBinContent(5,418.4768);
   met_rebin8_total__2->SetBinContent(6,397.9731);
   met_rebin8_total__2->SetBinContent(7,545.007);
   met_rebin8_total__2->SetBinContent(8,543.4277);
   met_rebin8_total__2->SetBinError(2,15.73763);
   met_rebin8_total__2->SetBinError(3,17.68639);
   met_rebin8_total__2->SetBinError(4,17.0644);
   met_rebin8_total__2->SetBinError(5,14.32941);
   met_rebin8_total__2->SetBinError(6,10.26111);
   met_rebin8_total__2->SetBinError(7,12.97709);
   met_rebin8_total__2->SetBinError(8,11.36411);
   met_rebin8_total__2->SetMinimum(0);
   met_rebin8_total__2->SetMaximum(1090.014);
   met_rebin8_total__2->SetEntries(15153);
   met_rebin8_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin8_total__2->SetFillColor(ci);
   met_rebin8_total__2->SetMarkerStyle(20);
   met_rebin8_total__2->SetMarkerSize(1.1);
   met_rebin8_total__2->GetXaxis()->SetTitle("p_{T}^{miss} (GeV)");
   met_rebin8_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin8_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin8_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin8_total__2->GetXaxis()->SetLabelSize(0.04);
   met_rebin8_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin8_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin8_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin8_total__2->GetYaxis()->SetTitle("Events");
   met_rebin8_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin8_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin8_total__2->GetYaxis()->SetLabelSize(0.04);
   met_rebin8_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin8_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin8_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin8_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin8_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin8_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin8_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin8_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin8_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin8_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin8_total_errors_fx3001[7] = {
   29.7809,
   36.3015,
   43.13163,
   50.29357,
   58.3267,
   73.03709,
   231.6532};
   Double_t met_rebin8_total_errors_fy3001[7] = {
   249.1365,
   495.6291,
   489.8474,
   418.4768,
   397.9731,
   545.007,
   543.4277};
   Double_t met_rebin8_total_errors_felx3001[7] = {
   3.260301,
   3.2603,
   3.569824,
   3.592123,
   4.441006,
   10.26938,
   148.3468};
   Double_t met_rebin8_total_errors_fely3001[7] = {
   58.21492,
   48.79154,
   35.61038,
   33.8953,
   29.5789,
   45.98832,
   54.69557};
   Double_t met_rebin8_total_errors_fehx3001[7] = {
   3.260301,
   3.2603,
   3.569824,
   3.592123,
   4.441006,
   10.26938,
   148.3468};
   Double_t met_rebin8_total_errors_fehy3001[7] = {
   25.56338,
   53.02123,
   49.02342,
   32.59704,
   34.27001,
   53.55683,
   56.45355};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,met_rebin8_total_errors_fx3001,met_rebin8_total_errors_fy3001,met_rebin8_total_errors_felx3001,met_rebin8_total_errors_fehx3001,met_rebin8_total_errors_fely3001,met_rebin8_total_errors_fehy3001);
   grae->SetName("met_rebin8_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin8_total_errors3001 = new TH1F("Graph_met_rebin8_total_errors3001","Graph",100,0,415.3479);
   Graph_met_rebin8_total_errors3001->SetMinimum(150.0256);
   Graph_met_rebin8_total_errors3001->SetMaximum(640.7772);
   Graph_met_rebin8_total_errors3001->SetDirectory(0);
   Graph_met_rebin8_total_errors3001->SetStats(0);
   Graph_met_rebin8_total_errors3001->SetLineStyle(0);
   Graph_met_rebin8_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin8_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin8_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin8_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin8_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin8_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin8_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin8_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin8_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin8_total_errors","Total unc.","F");
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
   met_rebin8_canvas->Modified();
   met_rebin8_canvas->cd();
   met_rebin8_canvas->SetSelected(met_rebin8_canvas);
}
