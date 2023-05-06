void met_rebin3()
{
//=========Macro generated from canvas: met_rebin3_canvas/met_rebin3
//=========  (Thu May  4 18:50:22 2023) by ROOT version 6.24/07
   TCanvas *met_rebin3_canvas = new TCanvas("met_rebin3_canvas", "met_rebin3",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_rebin3_canvas->SetHighLightColor(2);
   met_rebin3_canvas->Range(-87.69231,-473.0884,399.4872,3166.053);
   met_rebin3_canvas->SetFillColor(0);
   met_rebin3_canvas->SetBorderMode(0);
   met_rebin3_canvas->SetBorderSize(2);
   met_rebin3_canvas->SetTickx(1);
   met_rebin3_canvas->SetTicky(1);
   met_rebin3_canvas->SetLeftMargin(0.18);
   met_rebin3_canvas->SetRightMargin(0.04);
   met_rebin3_canvas->SetTopMargin(0.06);
   met_rebin3_canvas->SetBottomMargin(0.13);
   met_rebin3_canvas->SetFrameFillStyle(0);
   met_rebin3_canvas->SetFrameBorderMode(0);
   met_rebin3_canvas->SetFrameFillStyle(0);
   met_rebin3_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[4] = {0, 37.38363, 56.22846, 380}; 
   
   TH1D *met_rebin3_total__1 = new TH1D("met_rebin3_total__1","dummy",3, xAxis1);
   met_rebin3_total__1->SetBinContent(1,611.3571);
   met_rebin3_total__1->SetBinContent(2,1299.038);
   met_rebin3_total__1->SetBinContent(3,1473.852);
   met_rebin3_total__1->SetBinError(1,21.89156);
   met_rebin3_total__1->SetBinError(2,27.94322);
   met_rebin3_total__1->SetBinError(3,20.88961);
   met_rebin3_total__1->SetMinimum(0);
   met_rebin3_total__1->SetMaximum(2947.705);
   met_rebin3_total__1->SetEntries(15153);
   met_rebin3_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_rebin3_total__1->SetFillColor(ci);
   met_rebin3_total__1->SetMarkerStyle(20);
   met_rebin3_total__1->SetMarkerSize(1.1);
   met_rebin3_total__1->GetXaxis()->SetTitle("met");
   met_rebin3_total__1->GetXaxis()->SetMoreLogLabels();
   met_rebin3_total__1->GetXaxis()->SetLabelFont(42);
   met_rebin3_total__1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin3_total__1->GetXaxis()->SetLabelSize(0.05);
   met_rebin3_total__1->GetXaxis()->SetTitleSize(0.05);
   met_rebin3_total__1->GetXaxis()->SetTitleOffset(1.1);
   met_rebin3_total__1->GetXaxis()->SetTitleFont(42);
   met_rebin3_total__1->GetYaxis()->SetTitle("Events");
   met_rebin3_total__1->GetYaxis()->SetLabelFont(42);
   met_rebin3_total__1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin3_total__1->GetYaxis()->SetLabelSize(0.05);
   met_rebin3_total__1->GetYaxis()->SetTitleSize(0.05);
   met_rebin3_total__1->GetYaxis()->SetTitleOffset(2);
   met_rebin3_total__1->GetYaxis()->SetTitleFont(42);
   met_rebin3_total__1->GetZaxis()->SetLabelFont(42);
   met_rebin3_total__1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin3_total__1->GetZaxis()->SetLabelSize(0.05);
   met_rebin3_total__1->GetZaxis()->SetTitleSize(0.06);
   met_rebin3_total__1->GetZaxis()->SetTitleOffset(1);
   met_rebin3_total__1->GetZaxis()->SetTitleFont(42);
   met_rebin3_total__1->Draw("HIST");
   
   THStack *met_rebin3_stack = new THStack();
   met_rebin3_stack->SetName("met_rebin3_stack");
   met_rebin3_stack->SetTitle("met_rebin3");
   Double_t xAxis2[4] = {0, 37.38363, 56.22846, 380}; 
   
   TH1F *met_rebin3_stack_stack_1 = new TH1F("met_rebin3_stack_stack_1","met_rebin3",3, xAxis2);
   met_rebin3_stack_stack_1->SetMinimum(0);
   met_rebin3_stack_stack_1->SetMaximum(1547.545);
   met_rebin3_stack_stack_1->SetDirectory(0);
   met_rebin3_stack_stack_1->SetStats(0);
   met_rebin3_stack_stack_1->SetLineStyle(0);
   met_rebin3_stack_stack_1->SetMarkerStyle(20);
   met_rebin3_stack_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin3_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin3_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin3_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin3_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin3_stack_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin3_stack_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin3_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin3_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin3_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin3_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin3_stack_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin3_stack_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin3_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin3_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin3_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin3_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin3_stack_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin3_stack->SetHistogram(met_rebin3_stack_stack_1);
   
   Double_t xAxis3[4] = {0, 37.38363, 56.22846, 380}; 
   
   TH1D *met_rebin3_fakes_VV_stack_1 = new TH1D("met_rebin3_fakes_VV_stack_1","dummy",3, xAxis3);
   met_rebin3_fakes_VV_stack_1->SetBinContent(2,0.4398576);
   met_rebin3_fakes_VV_stack_1->SetBinContent(3,1.099644);
   met_rebin3_fakes_VV_stack_1->SetBinError(2,0.3110263);
   met_rebin3_fakes_VV_stack_1->SetBinError(3,0.4917757);
   met_rebin3_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_rebin3_fakes_VV_stack_1->SetFillColor(ci);
   met_rebin3_fakes_VV_stack_1->SetMarkerStyle(0);
   met_rebin3_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitle("met");
   met_rebin3_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_rebin3_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_rebin3_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_rebin3_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_rebin3_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_rebin3_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_rebin3_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_rebin3_stack->Add(met_rebin3_fakes_VV_stack_1,"");
   Double_t xAxis4[4] = {0, 37.38363, 56.22846, 380}; 
   
   TH1D *met_rebin3_fakes_TT_stack_2 = new TH1D("met_rebin3_fakes_TT_stack_2","dummy",3, xAxis4);
   met_rebin3_fakes_TT_stack_2->SetBinContent(1,11.13425);
   met_rebin3_fakes_TT_stack_2->SetBinContent(2,29.8478);
   met_rebin3_fakes_TT_stack_2->SetBinContent(3,83.42157);
   met_rebin3_fakes_TT_stack_2->SetBinError(1,1.294331);
   met_rebin3_fakes_TT_stack_2->SetBinError(2,2.131529);
   met_rebin3_fakes_TT_stack_2->SetBinError(3,3.592954);
   met_rebin3_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_rebin3_fakes_TT_stack_2->SetFillColor(ci);
   met_rebin3_fakes_TT_stack_2->SetMarkerStyle(0);
   met_rebin3_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitle("met");
   met_rebin3_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin3_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_rebin3_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin3_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_rebin3_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin3_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_rebin3_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_rebin3_stack->Add(met_rebin3_fakes_TT_stack_2,"");
   Double_t xAxis5[4] = {0, 37.38363, 56.22846, 380}; 
   
   TH1D *met_rebin3_fakes_DY_stack_3 = new TH1D("met_rebin3_fakes_DY_stack_3","dummy",3, xAxis5);
   met_rebin3_fakes_DY_stack_3->SetBinContent(1,93.38227);
   met_rebin3_fakes_DY_stack_3->SetBinContent(2,136.1825);
   met_rebin3_fakes_DY_stack_3->SetBinContent(3,35.01835);
   met_rebin3_fakes_DY_stack_3->SetBinError(1,19.06158);
   met_rebin3_fakes_DY_stack_3->SetBinError(2,23.01904);
   met_rebin3_fakes_DY_stack_3->SetBinError(3,11.67278);
   met_rebin3_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   met_rebin3_fakes_DY_stack_3->SetFillColor(ci);
   met_rebin3_fakes_DY_stack_3->SetMarkerStyle(0);
   met_rebin3_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitle("met");
   met_rebin3_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_rebin3_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_rebin3_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_rebin3_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_rebin3_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_rebin3_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_rebin3_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_rebin3_stack->Add(met_rebin3_fakes_DY_stack_3,"");
   Double_t xAxis6[4] = {0, 37.38363, 56.22846, 380}; 
   
   TH1D *met_rebin3_prompt_ZZ_stack_4 = new TH1D("met_rebin3_prompt_ZZ_stack_4","dummy",3, xAxis6);
   met_rebin3_prompt_ZZ_stack_4->SetBinContent(1,49.82281);
   met_rebin3_prompt_ZZ_stack_4->SetBinContent(2,68.92155);
   met_rebin3_prompt_ZZ_stack_4->SetBinContent(3,46.50129);
   met_rebin3_prompt_ZZ_stack_4->SetBinError(1,4.548179);
   met_rebin3_prompt_ZZ_stack_4->SetBinError(2,5.34935);
   met_rebin3_prompt_ZZ_stack_4->SetBinError(3,4.393959);
   met_rebin3_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_rebin3_prompt_ZZ_stack_4->SetFillColor(ci);
   met_rebin3_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_rebin3_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitle("met");
   met_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_rebin3_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_rebin3_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_rebin3_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_rebin3_stack->Add(met_rebin3_prompt_ZZ_stack_4,"");
   Double_t xAxis7[4] = {0, 37.38363, 56.22846, 380}; 
   
   TH1D *met_rebin3_prompt_WZ_stack_5 = new TH1D("met_rebin3_prompt_WZ_stack_5","dummy",3, xAxis7);
   met_rebin3_prompt_WZ_stack_5->SetBinContent(1,457.0177);
   met_rebin3_prompt_WZ_stack_5->SetBinContent(2,1063.646);
   met_rebin3_prompt_WZ_stack_5->SetBinContent(3,1307.812);
   met_rebin3_prompt_WZ_stack_5->SetBinError(1,9.671385);
   met_rebin3_prompt_WZ_stack_5->SetBinError(2,14.75437);
   met_rebin3_prompt_WZ_stack_5->SetBinError(3,16.36043);
   met_rebin3_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_rebin3_prompt_WZ_stack_5->SetFillColor(ci);
   met_rebin3_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_rebin3_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitle("met");
   met_rebin3_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_rebin3_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_rebin3_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_rebin3_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_rebin3_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_rebin3_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_rebin3_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_rebin3_stack->Add(met_rebin3_prompt_WZ_stack_5,"");
   met_rebin3_stack->Draw("same hist");
   Double_t xAxis8[4] = {0, 37.38363, 56.22846, 380}; 
   
   TH1D *met_rebin3_total__2 = new TH1D("met_rebin3_total__2","dummy",3, xAxis8);
   met_rebin3_total__2->SetBinContent(1,611.3571);
   met_rebin3_total__2->SetBinContent(2,1299.038);
   met_rebin3_total__2->SetBinContent(3,1473.852);
   met_rebin3_total__2->SetBinError(1,21.89156);
   met_rebin3_total__2->SetBinError(2,27.94322);
   met_rebin3_total__2->SetBinError(3,20.88961);
   met_rebin3_total__2->SetMinimum(0);
   met_rebin3_total__2->SetMaximum(2947.705);
   met_rebin3_total__2->SetEntries(15153);
   met_rebin3_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_rebin3_total__2->SetFillColor(ci);
   met_rebin3_total__2->SetMarkerStyle(20);
   met_rebin3_total__2->SetMarkerSize(1.1);
   met_rebin3_total__2->GetXaxis()->SetTitle("met");
   met_rebin3_total__2->GetXaxis()->SetMoreLogLabels();
   met_rebin3_total__2->GetXaxis()->SetLabelFont(42);
   met_rebin3_total__2->GetXaxis()->SetLabelOffset(0.007);
   met_rebin3_total__2->GetXaxis()->SetLabelSize(0.05);
   met_rebin3_total__2->GetXaxis()->SetTitleSize(0.05);
   met_rebin3_total__2->GetXaxis()->SetTitleOffset(1.1);
   met_rebin3_total__2->GetXaxis()->SetTitleFont(42);
   met_rebin3_total__2->GetYaxis()->SetTitle("Events");
   met_rebin3_total__2->GetYaxis()->SetLabelFont(42);
   met_rebin3_total__2->GetYaxis()->SetLabelOffset(0.007);
   met_rebin3_total__2->GetYaxis()->SetLabelSize(0.05);
   met_rebin3_total__2->GetYaxis()->SetTitleSize(0.05);
   met_rebin3_total__2->GetYaxis()->SetTitleOffset(2);
   met_rebin3_total__2->GetYaxis()->SetTitleFont(42);
   met_rebin3_total__2->GetZaxis()->SetLabelFont(42);
   met_rebin3_total__2->GetZaxis()->SetLabelOffset(0.007);
   met_rebin3_total__2->GetZaxis()->SetLabelSize(0.05);
   met_rebin3_total__2->GetZaxis()->SetTitleSize(0.06);
   met_rebin3_total__2->GetZaxis()->SetTitleOffset(1);
   met_rebin3_total__2->GetZaxis()->SetTitleFont(42);
   met_rebin3_total__2->Draw("AXIS SAME");
   
   Double_t met_rebin3_total_errors_fx3001[3] = {
   18.69182,
   46.80605,
   218.1142};
   Double_t met_rebin3_total_errors_fy3001[3] = {
   611.3571,
   1299.038,
   1473.852};
   Double_t met_rebin3_total_errors_felx3001[3] = {
   18.69182,
   9.422413,
   161.8858};
   Double_t met_rebin3_total_errors_fely3001[3] = {
   43.76121,
   75.07114,
   123.0052};
   Double_t met_rebin3_total_errors_fehx3001[3] = {
   18.69182,
   9.422413,
   161.8858};
   Double_t met_rebin3_total_errors_fehy3001[3] = {
   38.47807,
   78.30661,
   134.3264};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,met_rebin3_total_errors_fx3001,met_rebin3_total_errors_fy3001,met_rebin3_total_errors_felx3001,met_rebin3_total_errors_fehx3001,met_rebin3_total_errors_fely3001,met_rebin3_total_errors_fehy3001);
   grae->SetName("met_rebin3_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_rebin3_total_errors3001 = new TH1F("Graph_met_rebin3_total_errors3001","Graph",100,0,418);
   Graph_met_rebin3_total_errors3001->SetMinimum(463.5375);
   Graph_met_rebin3_total_errors3001->SetMaximum(1712.237);
   Graph_met_rebin3_total_errors3001->SetDirectory(0);
   Graph_met_rebin3_total_errors3001->SetStats(0);
   Graph_met_rebin3_total_errors3001->SetLineStyle(0);
   Graph_met_rebin3_total_errors3001->SetMarkerStyle(20);
   Graph_met_rebin3_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_met_rebin3_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_rebin3_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_met_rebin3_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_met_rebin3_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_rebin3_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_met_rebin3_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_met_rebin3_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_rebin3_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_met_rebin3_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_met_rebin3_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_rebin3_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_met_rebin3_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_met_rebin3_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_rebin3_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_met_rebin3_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_met_rebin3_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_met_rebin3_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_rebin3_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_rebin3_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_rebin3_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_rebin3_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_rebin3_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_rebin3_total_errors","Total unc.","F");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
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
   met_rebin3_canvas->Modified();
   met_rebin3_canvas->cd();
   met_rebin3_canvas->SetSelected(met_rebin3_canvas);
}
