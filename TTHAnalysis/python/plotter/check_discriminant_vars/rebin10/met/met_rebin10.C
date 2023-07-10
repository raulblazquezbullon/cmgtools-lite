void met_rebin10()
{
//=========Macro generated from canvas: met_rebin10_canvas/met_rebin10
//=========  (Mon Jul 10 19:24:36 2023) by ROOT version 6.24/07
   TCanvas *met_rebin10_canvas = new TCanvas("met_rebin10_canvas", "met_rebin10",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin10_canvas->SetHighLightColor(2);
   met_rebin10_canvas->Range(-87.69231,-141.945,399.4872,949.9395);
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
   Double_t xAxis1[11] = {0, 25.21648, 30.43296, 35.64944, 40.95406, 46.70145, 52.44884, 58.19624, 70.20135, 92.39762, 380}; 
   
   TH1D *met_rebin10_total__1 = new TH1D("met_rebin10_total__1","dummy",10, xAxis1);
   met_rebin10_total__1->SetBinContent(2,41.48716);
   met_rebin10_total__1->SetBinContent(3,404.312);
   met_rebin10_total__1->SetBinContent(4,400.4616);
   met_rebin10_total__1->SetBinContent(5,388.3521);
   met_rebin10_total__1->SetBinContent(6,337.3641);
   met_rebin10_total__1->SetBinContent(7,293.003);
   met_rebin10_total__1->SetBinContent(8,442.2132);
   met_rebin10_total__1->SetBinContent(9,424.002);
   met_rebin10_total__1->SetBinContent(10,408.3022);
   met_rebin10_total__1->SetBinError(2,7.514412);
   met_rebin10_total__1->SetBinError(3,17.47597);
   met_rebin10_total__1->SetBinError(4,17.07245);
   met_rebin10_total__1->SetBinError(5,14.08298);
   met_rebin10_total__1->SetBinError(6,12.32998);
   met_rebin10_total__1->SetBinError(7,10.41582);
   met_rebin10_total__1->SetBinError(8,12.20225);
   met_rebin10_total__1->SetBinError(9,10.33628);
   met_rebin10_total__1->SetBinError(10,9.587437);
   met_rebin10_total__1->SetMinimum(0);
   met_rebin10_total__1->SetMaximum(884.4265);
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
   Double_t xAxis2[11] = {0, 25.21648, 30.43296, 35.64944, 40.95406, 46.70145, 52.44884, 58.19624, 70.20135, 92.39762, 380}; 
   
   TH1F *met_rebin10_stack_stack_1 = new TH1F("met_rebin10_stack_stack_1","met_rebin10",10, xAxis2);
   met_rebin10_stack_stack_1->SetMinimum(0);
   met_rebin10_stack_stack_1->SetMaximum(464.3239);
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
   
   Double_t xAxis3[11] = {0, 25.21648, 30.43296, 35.64944, 40.95406, 46.70145, 52.44884, 58.19624, 70.20135, 92.39762, 380}; 
   
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
   Double_t xAxis4[11] = {0, 25.21648, 30.43296, 35.64944, 40.95406, 46.70145, 52.44884, 58.19624, 70.20135, 92.39762, 380}; 
   
   TH1D *met_rebin10_fakes_TT_stack_2 = new TH1D("met_rebin10_fakes_TT_stack_2","dummy",10, xAxis4);
   met_rebin10_fakes_TT_stack_2->SetBinContent(2,0.5509584);
   met_rebin10_fakes_TT_stack_2->SetBinContent(3,6.754415);
   met_rebin10_fakes_TT_stack_2->SetBinContent(4,8.337642);
   met_rebin10_fakes_TT_stack_2->SetBinContent(5,8.445823);
   met_rebin10_fakes_TT_stack_2->SetBinContent(6,8.100883);
   met_rebin10_fakes_TT_stack_2->SetBinContent(7,10.10735);
   met_rebin10_fakes_TT_stack_2->SetBinContent(8,18.73559);
   met_rebin10_fakes_TT_stack_2->SetBinContent(9,24.46029);
   met_rebin10_fakes_TT_stack_2->SetBinContent(10,31.01566);
   met_rebin10_fakes_TT_stack_2->SetBinError(2,0.2755154);
   met_rebin10_fakes_TT_stack_2->SetBinError(3,0.9756142);
   met_rebin10_fakes_TT_stack_2->SetBinError(4,1.086079);
   met_rebin10_fakes_TT_stack_2->SetBinError(5,1.104359);
   met_rebin10_fakes_TT_stack_2->SetBinError(6,1.078765);
   met_rebin10_fakes_TT_stack_2->SetBinError(7,1.191727);
   met_rebin10_fakes_TT_stack_2->SetBinError(8,1.660487);
   met_rebin10_fakes_TT_stack_2->SetBinError(9,1.881634);
   met_rebin10_fakes_TT_stack_2->SetBinError(10,2.118026);
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
   Double_t xAxis5[11] = {0, 25.21648, 30.43296, 35.64944, 40.95406, 46.70145, 52.44884, 58.19624, 70.20135, 92.39762, 380}; 
   
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
   Double_t xAxis6[11] = {0, 25.21648, 30.43296, 35.64944, 40.95406, 46.70145, 52.44884, 58.19624, 70.20135, 92.39762, 380}; 
   
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
   Double_t xAxis7[11] = {0, 25.21648, 30.43296, 35.64944, 40.95406, 46.70145, 52.44884, 58.19624, 70.20135, 92.39762, 380}; 
   
   TH1D *met_rebin10_prompt_WZ_stack_5 = new TH1D("met_rebin10_prompt_WZ_stack_5","dummy",10, xAxis7);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(2,24.31114);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(3,298.8949);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(4,303.74);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(5,321.5747);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(6,289.0784);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(7,255.9939);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(8,390.1024);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(9,380.2928);
   met_rebin10_prompt_WZ_stack_5->SetBinContent(10,358.809);
   met_rebin10_prompt_WZ_stack_5->SetBinError(2,2.142307);
   met_rebin10_prompt_WZ_stack_5->SetBinError(3,7.529785);
   met_rebin10_prompt_WZ_stack_5->SetBinError(4,7.587442);
   met_rebin10_prompt_WZ_stack_5->SetBinError(5,7.816421);
   met_rebin10_prompt_WZ_stack_5->SetBinError(6,7.403288);
   met_rebin10_prompt_WZ_stack_5->SetBinError(7,6.96708);
   met_rebin10_prompt_WZ_stack_5->SetBinError(8,8.599062);
   met_rebin10_prompt_WZ_stack_5->SetBinError(9,8.505366);
   met_rebin10_prompt_WZ_stack_5->SetBinError(10,8.300176);
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
   Double_t xAxis8[11] = {0, 25.21648, 30.43296, 35.64944, 40.95406, 46.70145, 52.44884, 58.19624, 70.20135, 92.39762, 380}; 
   
   TH1D *met_rebin10_total__2 = new TH1D("met_rebin10_total__2","dummy",10, xAxis8);
   met_rebin10_total__2->SetBinContent(2,41.48716);
   met_rebin10_total__2->SetBinContent(3,404.312);
   met_rebin10_total__2->SetBinContent(4,400.4616);
   met_rebin10_total__2->SetBinContent(5,388.3521);
   met_rebin10_total__2->SetBinContent(6,337.3641);
   met_rebin10_total__2->SetBinContent(7,293.003);
   met_rebin10_total__2->SetBinContent(8,442.2132);
   met_rebin10_total__2->SetBinContent(9,424.002);
   met_rebin10_total__2->SetBinContent(10,408.3022);
   met_rebin10_total__2->SetBinError(2,7.514412);
   met_rebin10_total__2->SetBinError(3,17.47597);
   met_rebin10_total__2->SetBinError(4,17.07245);
   met_rebin10_total__2->SetBinError(5,14.08298);
   met_rebin10_total__2->SetBinError(6,12.32998);
   met_rebin10_total__2->SetBinError(7,10.41582);
   met_rebin10_total__2->SetBinError(8,12.20225);
   met_rebin10_total__2->SetBinError(9,10.33628);
   met_rebin10_total__2->SetBinError(10,9.587437);
   met_rebin10_total__2->SetMinimum(0);
   met_rebin10_total__2->SetMaximum(884.4265);
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
   27.82472,
   33.0412,
   38.30175,
   43.82775,
   49.57515,
   55.32254,
   64.1988,
   81.29948,
   236.1988};
   Double_t met_rebin10_total_errors_fy3001[9] = {
   41.48716,
   404.312,
   400.4616,
   388.3521,
   337.3641,
   293.003,
   442.2132,
   424.002,
   408.3022};
   Double_t met_rebin10_total_errors_felx3001[9] = {
   2.608241,
   2.608239,
   2.652308,
   2.873697,
   2.873697,
   2.873699,
   6.002552,
   11.09814,
   143.8012};
   Double_t met_rebin10_total_errors_fely3001[9] = {
   25.20153,
   36.23221,
   41.73149,
   29.03034,
   25.35087,
   26.06655,
   36.75941,
   38.41322,
   36.19365};
   Double_t met_rebin10_total_errors_fehx3001[9] = {
   2.608241,
   2.608239,
   2.652308,
   2.873697,
   2.873697,
   2.873699,
   6.002552,
   11.09814,
   143.8012};
   Double_t met_rebin10_total_errors_fehy3001[9] = {
   6.143028,
   40.70684,
   41.49038,
   31.5074,
   27.62489,
   24.39645,
   40.84834,
   42.43273,
   39.81029};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,met_rebin10_total_errors_fx3001,met_rebin10_total_errors_fy3001,met_rebin10_total_errors_felx3001,met_rebin10_total_errors_fehx3001,met_rebin10_total_errors_fely3001,met_rebin10_total_errors_fehy3001);
   grae->SetName("met_rebin10_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin10_total_errors3001 = new TH1F("Graph_met_rebin10_total_errors3001","Graph",100,0,415.4784);
   Graph_met_rebin10_total_errors3001->SetMinimum(14.65707);
   Graph_met_rebin10_total_errors3001->SetMaximum(529.7392);
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
