void m3lmet_Meas_rebin7()
{
//=========Macro generated from canvas: m3lmet_Meas_rebin7_canvas/m3lmet_Meas_rebin7
//=========  (Mon Jul 10 19:24:27 2023) by ROOT version 6.24/07
   TCanvas *m3lmet_Meas_rebin7_canvas = new TCanvas("m3lmet_Meas_rebin7_canvas", "m3lmet_Meas_rebin7",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3lmet_Meas_rebin7_canvas->SetHighLightColor(2);
   m3lmet_Meas_rebin7_canvas->Range(-115.3846,-263.7186,525.641,1764.886);
   m3lmet_Meas_rebin7_canvas->SetFillColor(0);
   m3lmet_Meas_rebin7_canvas->SetBorderMode(0);
   m3lmet_Meas_rebin7_canvas->SetBorderSize(2);
   m3lmet_Meas_rebin7_canvas->SetTickx(1);
   m3lmet_Meas_rebin7_canvas->SetTicky(1);
   m3lmet_Meas_rebin7_canvas->SetLeftMargin(0.18);
   m3lmet_Meas_rebin7_canvas->SetRightMargin(0.04);
   m3lmet_Meas_rebin7_canvas->SetTopMargin(0.06);
   m3lmet_Meas_rebin7_canvas->SetBottomMargin(0.13);
   m3lmet_Meas_rebin7_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin7_canvas->SetFrameBorderMode(0);
   m3lmet_Meas_rebin7_canvas->SetFrameFillStyle(0);
   m3lmet_Meas_rebin7_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 171.1174, 197.937, 222.5303, 246.9381, 281.071, 327.3251, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_total__1 = new TH1D("m3lmet_Meas_rebin7_total__1","dummy",7, xAxis1);
   m3lmet_Meas_rebin7_total__1->SetBinContent(1,106.714);
   m3lmet_Meas_rebin7_total__1->SetBinContent(2,276.5184);
   m3lmet_Meas_rebin7_total__1->SetBinContent(3,419.059);
   m3lmet_Meas_rebin7_total__1->SetBinContent(4,480.4945);
   m3lmet_Meas_rebin7_total__1->SetBinContent(5,538.2106);
   m3lmet_Meas_rebin7_total__1->SetBinContent(6,496.9161);
   m3lmet_Meas_rebin7_total__1->SetBinContent(7,821.5849);
   m3lmet_Meas_rebin7_total__1->SetBinError(1,14.29761);
   m3lmet_Meas_rebin7_total__1->SetBinError(2,14.64238);
   m3lmet_Meas_rebin7_total__1->SetBinError(3,14.68608);
   m3lmet_Meas_rebin7_total__1->SetBinError(4,14.77062);
   m3lmet_Meas_rebin7_total__1->SetBinError(5,13.89733);
   m3lmet_Meas_rebin7_total__1->SetBinError(6,13.65381);
   m3lmet_Meas_rebin7_total__1->SetBinError(7,15.08674);
   m3lmet_Meas_rebin7_total__1->SetMinimum(0);
   m3lmet_Meas_rebin7_total__1->SetMaximum(1643.17);
   m3lmet_Meas_rebin7_total__1->SetEntries(15153);
   m3lmet_Meas_rebin7_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin7_total__1->SetFillColor(ci);
   m3lmet_Meas_rebin7_total__1->SetMarkerStyle(20);
   m3lmet_Meas_rebin7_total__1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin7_total__1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin7_total__1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_total__1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__1->Draw("HIST");
   
   THStack *m3lmet_Meas_rebin7_stack = new THStack();
   m3lmet_Meas_rebin7_stack->SetName("m3lmet_Meas_rebin7_stack");
   m3lmet_Meas_rebin7_stack->SetTitle("m3lmet_Meas_rebin7");
   Double_t xAxis2[8] = {0, 171.1174, 197.937, 222.5303, 246.9381, 281.071, 327.3251, 500}; 
   
   TH1F *m3lmet_Meas_rebin7_stack_stack_1 = new TH1F("m3lmet_Meas_rebin7_stack_stack_1","m3lmet_Meas_rebin7",7, xAxis2);
   m3lmet_Meas_rebin7_stack_stack_1->SetMinimum(0);
   m3lmet_Meas_rebin7_stack_stack_1->SetMaximum(862.6641);
   m3lmet_Meas_rebin7_stack_stack_1->SetDirectory(0);
   m3lmet_Meas_rebin7_stack_stack_1->SetStats(0);
   m3lmet_Meas_rebin7_stack_stack_1->SetLineStyle(0);
   m3lmet_Meas_rebin7_stack_stack_1->SetMarkerStyle(20);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->SetHistogram(m3lmet_Meas_rebin7_stack_stack_1);
   
   Double_t xAxis3[8] = {0, 171.1174, 197.937, 222.5303, 246.9381, 281.071, 327.3251, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_fakes_VV_stack_1 = new TH1D("m3lmet_Meas_rebin7_fakes_VV_stack_1","dummy",7, xAxis3);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(3,0.199256);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(4,0.4064792);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(6,0.5990046);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinContent(7,0.205721);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(3,0.199256);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(4,0.2874255);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(6,0.3459432);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetBinError(7,0.205721);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetFillColor(ci);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_fakes_VV_stack_1,"");
   Double_t xAxis4[8] = {0, 171.1174, 197.937, 222.5303, 246.9381, 281.071, 327.3251, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_fakes_TT_stack_2 = new TH1D("m3lmet_Meas_rebin7_fakes_TT_stack_2","dummy",7, xAxis4);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(1,3.691332);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(2,9.922476);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(3,13.74412);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(4,15.58056);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(5,20.46483);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(6,22.9935);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinContent(7,30.11179);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(1,0.7509972);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(2,1.207057);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(3,1.389073);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(4,1.506225);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(5,1.694671);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(6,1.811955);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetBinError(7,2.102461);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetFillColor(ci);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_fakes_TT_stack_2,"");
   Double_t xAxis5[8] = {0, 171.1174, 197.937, 222.5303, 246.9381, 281.071, 327.3251, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_fakes_DY_stack_3 = new TH1D("m3lmet_Meas_rebin7_fakes_DY_stack_3","dummy",7, xAxis5);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(1,53.74257);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(2,46.7129);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(3,39.32721);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(4,36.08185);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(5,25.44351);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(6,25.54794);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinContent(7,18.31663);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(1,13.88629);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(2,12.96545);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(3,11.86227);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(4,11.41481);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(5,9.619426);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(6,9.660438);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetBinError(7,8.192825);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetFillColor(ci);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_fakes_DY_stack_3,"");
   Double_t xAxis6[8] = {0, 171.1174, 197.937, 222.5303, 246.9381, 281.071, 327.3251, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_prompt_ZZ_stack_4 = new TH1D("m3lmet_Meas_rebin7_prompt_ZZ_stack_4","dummy",7, xAxis6);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(1,9.136494);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(2,17.87893);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(3,20.27779);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(4,22.75068);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(5,23.10774);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(6,22.91384);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinContent(7,37.54307);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(1,1.866834);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(2,2.610354);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(3,2.786891);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(4,2.964038);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(5,2.984987);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(6,2.984356);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetBinError(7,3.83346);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetFillColor(ci);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_prompt_ZZ_stack_4,"");
   Double_t xAxis7[8] = {0, 171.1174, 197.937, 222.5303, 246.9381, 281.071, 327.3251, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_prompt_WZ_stack_5 = new TH1D("m3lmet_Meas_rebin7_prompt_WZ_stack_5","dummy",7, xAxis7);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(1,40.1436);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(2,202.004);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(3,345.5106);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(4,405.675);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(5,469.1945);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(6,424.8618);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinContent(7,735.4077);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(1,2.746514);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(2,6.166493);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(3,8.076601);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(4,8.759933);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(5,9.424453);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(6,8.988504);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetBinError(7,11.8882);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetFillColor(ci);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_stack->Add(m3lmet_Meas_rebin7_prompt_WZ_stack_5,"");
   m3lmet_Meas_rebin7_stack->Draw("same hist");
   Double_t xAxis8[8] = {0, 171.1174, 197.937, 222.5303, 246.9381, 281.071, 327.3251, 500}; 
   
   TH1D *m3lmet_Meas_rebin7_total__2 = new TH1D("m3lmet_Meas_rebin7_total__2","dummy",7, xAxis8);
   m3lmet_Meas_rebin7_total__2->SetBinContent(1,106.714);
   m3lmet_Meas_rebin7_total__2->SetBinContent(2,276.5184);
   m3lmet_Meas_rebin7_total__2->SetBinContent(3,419.059);
   m3lmet_Meas_rebin7_total__2->SetBinContent(4,480.4945);
   m3lmet_Meas_rebin7_total__2->SetBinContent(5,538.2106);
   m3lmet_Meas_rebin7_total__2->SetBinContent(6,496.9161);
   m3lmet_Meas_rebin7_total__2->SetBinContent(7,821.5849);
   m3lmet_Meas_rebin7_total__2->SetBinError(1,14.29761);
   m3lmet_Meas_rebin7_total__2->SetBinError(2,14.64238);
   m3lmet_Meas_rebin7_total__2->SetBinError(3,14.68608);
   m3lmet_Meas_rebin7_total__2->SetBinError(4,14.77062);
   m3lmet_Meas_rebin7_total__2->SetBinError(5,13.89733);
   m3lmet_Meas_rebin7_total__2->SetBinError(6,13.65381);
   m3lmet_Meas_rebin7_total__2->SetBinError(7,15.08674);
   m3lmet_Meas_rebin7_total__2->SetMinimum(0);
   m3lmet_Meas_rebin7_total__2->SetMaximum(1643.17);
   m3lmet_Meas_rebin7_total__2->SetEntries(15153);
   m3lmet_Meas_rebin7_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3lmet_Meas_rebin7_total__2->SetFillColor(ci);
   m3lmet_Meas_rebin7_total__2->SetMarkerStyle(20);
   m3lmet_Meas_rebin7_total__2->SetMarkerSize(1.1);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitle("m_{WZ} (GeV)");
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetMoreLogLabels();
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3lmet_Meas_rebin7_total__2->GetXaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitle("Events");
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetLabelSize(0.04);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitleSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitleOffset(2);
   m3lmet_Meas_rebin7_total__2->GetYaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetLabelFont(42);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetLabelSize(0.05);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetTitleSize(0.06);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetTitleOffset(1);
   m3lmet_Meas_rebin7_total__2->GetZaxis()->SetTitleFont(42);
   m3lmet_Meas_rebin7_total__2->Draw("AXIS SAME");
   
   Double_t m3lmet_Meas_rebin7_total_errors_fx3001[7] = {
   85.5587,
   184.5272,
   210.2337,
   234.7342,
   264.0045,
   304.198,
   413.6625};
   Double_t m3lmet_Meas_rebin7_total_errors_fy3001[7] = {
   106.714,
   276.5184,
   419.059,
   480.4945,
   538.2106,
   496.9161,
   821.5849};
   Double_t m3lmet_Meas_rebin7_total_errors_felx3001[7] = {
   85.5587,
   13.40982,
   12.29664,
   12.20387,
   17.06644,
   23.12706,
   86.33746};
   Double_t m3lmet_Meas_rebin7_total_errors_fely3001[7] = {
   19.16383,
   29.66074,
   31.22389,
   35.26388,
   40.84522,
   42.61562,
   64.49718};
   Double_t m3lmet_Meas_rebin7_total_errors_fehx3001[7] = {
   85.5587,
   13.40982,
   12.29664,
   12.20387,
   17.06644,
   23.12706,
   86.33746};
   Double_t m3lmet_Meas_rebin7_total_errors_fehy3001[7] = {
   20.30768,
   25.45868,
   35.59025,
   37.62406,
   43.49256,
   42.42156,
   66.65489};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,m3lmet_Meas_rebin7_total_errors_fx3001,m3lmet_Meas_rebin7_total_errors_fy3001,m3lmet_Meas_rebin7_total_errors_felx3001,m3lmet_Meas_rebin7_total_errors_fehx3001,m3lmet_Meas_rebin7_total_errors_fely3001,m3lmet_Meas_rebin7_total_errors_fehy3001);
   grae->SetName("m3lmet_Meas_rebin7_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3lmet_Meas_rebin7_total_errors3001 = new TH1F("Graph_m3lmet_Meas_rebin7_total_errors3001","Graph",100,0,550);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMinimum(7.48121);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMaximum(968.3087);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetDirectory(0);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetStats(0);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetLineStyle(0);
   Graph_m3lmet_Meas_rebin7_total_errors3001->SetMarkerStyle(20);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3lmet_Meas_rebin7_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3lmet_Meas_rebin7_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3lmet_Meas_rebin7_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin7_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin7_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin7_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3lmet_Meas_rebin7_total_errors","Total unc.","F");
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
   m3lmet_Meas_rebin7_canvas->Modified();
   m3lmet_Meas_rebin7_canvas->cd();
   m3lmet_Meas_rebin7_canvas->SetSelected(m3lmet_Meas_rebin7_canvas);
}
