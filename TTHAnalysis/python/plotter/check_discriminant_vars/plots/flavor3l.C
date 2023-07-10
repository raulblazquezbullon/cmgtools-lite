void flavor3l()
{
//=========Macro generated from canvas: flavor3l_canvas/flavor3l
//=========  (Mon Jul 10 18:32:40 2023) by ROOT version 6.24/07
   TCanvas *flavor3l_canvas = new TCanvas("flavor3l_canvas", "flavor3l",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   flavor3l_canvas->SetHighLightColor(2);
   flavor3l_canvas->Range(0,0,1,1);
   flavor3l_canvas->SetFillColor(0);
   flavor3l_canvas->SetBorderMode(0);
   flavor3l_canvas->SetBorderSize(2);
   flavor3l_canvas->SetTickx(1);
   flavor3l_canvas->SetTicky(1);
   flavor3l_canvas->SetLeftMargin(0.18);
   flavor3l_canvas->SetRightMargin(0.04);
   flavor3l_canvas->SetBottomMargin(0.13);
   flavor3l_canvas->SetFrameFillStyle(0);
   flavor3l_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.423077,-97.21936,3.705128,3791.555);
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
   
   TH1D *flavor3l_total__9 = new TH1D("flavor3l_total__9","dummy",4,-0.5,3.5);
   flavor3l_total__9->SetBinContent(1,462.6142);
   flavor3l_total__9->SetBinContent(2,572.4432);
   flavor3l_total__9->SetBinContent(3,918.3639);
   flavor3l_total__9->SetBinContent(4,1186.076);
   flavor3l_total__9->SetBinError(1,14.87);
   flavor3l_total__9->SetBinError(2,13.00405);
   flavor3l_total__9->SetBinError(3,24.57216);
   flavor3l_total__9->SetBinError(4,21.58313);
   flavor3l_total__9->SetMinimum(0);
   flavor3l_total__9->SetMaximum(3558.229);
   flavor3l_total__9->SetEntries(15149);
   flavor3l_total__9->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   flavor3l_total__9->SetFillColor(ci);
   flavor3l_total__9->SetMarkerStyle(20);
   flavor3l_total__9->SetMarkerSize(1.1);
   flavor3l_total__9->GetXaxis()->SetTitle("flavor");
   flavor3l_total__9->GetXaxis()->SetBinLabel(1,"eee");
   flavor3l_total__9->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavor3l_total__9->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavor3l_total__9->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavor3l_total__9->GetXaxis()->SetMoreLogLabels();
   flavor3l_total__9->GetXaxis()->SetLabelFont(42);
   flavor3l_total__9->GetXaxis()->SetLabelOffset(999);
   flavor3l_total__9->GetXaxis()->SetLabelSize(0.06);
   flavor3l_total__9->GetXaxis()->SetTitleSize(0.05);
   flavor3l_total__9->GetXaxis()->SetTitleOffset(999);
   flavor3l_total__9->GetXaxis()->SetTitleFont(42);
   flavor3l_total__9->GetYaxis()->SetTitle("Events");
   flavor3l_total__9->GetYaxis()->SetLabelFont(42);
   flavor3l_total__9->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_total__9->GetYaxis()->SetLabelSize(0.06);
   flavor3l_total__9->GetYaxis()->SetTitleSize(0.06);
   flavor3l_total__9->GetYaxis()->SetTitleOffset(1.48);
   flavor3l_total__9->GetYaxis()->SetTitleFont(42);
   flavor3l_total__9->GetZaxis()->SetLabelFont(42);
   flavor3l_total__9->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_total__9->GetZaxis()->SetLabelSize(0.05);
   flavor3l_total__9->GetZaxis()->SetTitleSize(0.06);
   flavor3l_total__9->GetZaxis()->SetTitleOffset(1);
   flavor3l_total__9->GetZaxis()->SetTitleFont(42);
   flavor3l_total__9->Draw("HIST");
   
   THStack *flavor3l_stack = new THStack();
   flavor3l_stack->SetName("flavor3l_stack");
   flavor3l_stack->SetTitle("flavor3l");
   
   TH1F *flavor3l_stack_stack_3 = new TH1F("flavor3l_stack_stack_3","flavor3l",4,-0.5,3.5);
   flavor3l_stack_stack_3->SetMinimum(0);
   flavor3l_stack_stack_3->SetMaximum(1245.38);
   flavor3l_stack_stack_3->SetDirectory(0);
   flavor3l_stack_stack_3->SetStats(0);
   flavor3l_stack_stack_3->SetLineStyle(0);
   flavor3l_stack_stack_3->SetMarkerStyle(20);
   flavor3l_stack_stack_3->GetXaxis()->SetLabelFont(42);
   flavor3l_stack_stack_3->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_stack_stack_3->GetXaxis()->SetLabelSize(0.05);
   flavor3l_stack_stack_3->GetXaxis()->SetTitleSize(0.06);
   flavor3l_stack_stack_3->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_stack_stack_3->GetXaxis()->SetTitleFont(42);
   flavor3l_stack_stack_3->GetYaxis()->SetLabelFont(42);
   flavor3l_stack_stack_3->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_stack_stack_3->GetYaxis()->SetLabelSize(0.05);
   flavor3l_stack_stack_3->GetYaxis()->SetTitleSize(0.06);
   flavor3l_stack_stack_3->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_stack_stack_3->GetYaxis()->SetTitleFont(42);
   flavor3l_stack_stack_3->GetZaxis()->SetLabelFont(42);
   flavor3l_stack_stack_3->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_stack_stack_3->GetZaxis()->SetLabelSize(0.05);
   flavor3l_stack_stack_3->GetZaxis()->SetTitleSize(0.06);
   flavor3l_stack_stack_3->GetZaxis()->SetTitleOffset(1);
   flavor3l_stack_stack_3->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->SetHistogram(flavor3l_stack_stack_3);
   
   
   TH1D *flavor3l_fakes_VV_stack_1 = new TH1D("flavor3l_fakes_VV_stack_1","dummy",4,-0.5,3.5);
   flavor3l_fakes_VV_stack_1->SetBinContent(1,0.399561);
   flavor3l_fakes_VV_stack_1->SetBinContent(2,0.199151);
   flavor3l_fakes_VV_stack_1->SetBinContent(3,0.8117489);
   flavor3l_fakes_VV_stack_1->SetBinError(1,0.2826572);
   flavor3l_fakes_VV_stack_1->SetBinError(2,0.199151);
   flavor3l_fakes_VV_stack_1->SetBinError(3,0.405904);
   flavor3l_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   flavor3l_fakes_VV_stack_1->SetFillColor(ci);
   flavor3l_fakes_VV_stack_1->SetMarkerStyle(0);
   flavor3l_fakes_VV_stack_1->SetMarkerSize(1.1);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetTitle("flavor");
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   flavor3l_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_fakes_VV_stack_1,"");
   
   TH1D *flavor3l_fakes_TT_stack_2 = new TH1D("flavor3l_fakes_TT_stack_2","dummy",4,-0.5,3.5);
   flavor3l_fakes_TT_stack_2->SetBinContent(1,10.68246);
   flavor3l_fakes_TT_stack_2->SetBinContent(2,21.80212);
   flavor3l_fakes_TT_stack_2->SetBinContent(3,35.67046);
   flavor3l_fakes_TT_stack_2->SetBinContent(4,48.35358);
   flavor3l_fakes_TT_stack_2->SetBinError(1,1.213781);
   flavor3l_fakes_TT_stack_2->SetBinError(2,1.735689);
   flavor3l_fakes_TT_stack_2->SetBinError(3,2.257344);
   flavor3l_fakes_TT_stack_2->SetBinError(4,2.685734);
   flavor3l_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   flavor3l_fakes_TT_stack_2->SetFillColor(ci);
   flavor3l_fakes_TT_stack_2->SetMarkerStyle(0);
   flavor3l_fakes_TT_stack_2->SetMarkerSize(1.1);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetTitle("flavor");
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   flavor3l_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_fakes_TT_stack_2,"");
   
   TH1D *flavor3l_fakes_DY_stack_3 = new TH1D("flavor3l_fakes_DY_stack_3","dummy",4,-0.5,3.5);
   flavor3l_fakes_DY_stack_3->SetBinContent(1,41.27283);
   flavor3l_fakes_DY_stack_3->SetBinContent(2,17.4558);
   flavor3l_fakes_DY_stack_3->SetBinContent(3,123.2935);
   flavor3l_fakes_DY_stack_3->SetBinContent(4,63.15044);
   flavor3l_fakes_DY_stack_3->SetBinError(1,11.92054);
   flavor3l_fakes_DY_stack_3->SetBinError(2,7.808244);
   flavor3l_fakes_DY_stack_3->SetBinError(3,21.14773);
   flavor3l_fakes_DY_stack_3->SetBinError(4,15.31759);
   flavor3l_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   flavor3l_fakes_DY_stack_3->SetFillColor(ci);
   flavor3l_fakes_DY_stack_3->SetMarkerStyle(0);
   flavor3l_fakes_DY_stack_3->SetMarkerSize(1.1);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetTitle("flavor");
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   flavor3l_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_fakes_DY_stack_3,"");
   
   TH1D *flavor3l_prompt_ZZ_stack_4 = new TH1D("flavor3l_prompt_ZZ_stack_4","dummy",4,-0.5,3.5);
   flavor3l_prompt_ZZ_stack_4->SetBinContent(1,18.31791);
   flavor3l_prompt_ZZ_stack_4->SetBinContent(2,31.94013);
   flavor3l_prompt_ZZ_stack_4->SetBinContent(3,35.94585);
   flavor3l_prompt_ZZ_stack_4->SetBinContent(4,67.40465);
   flavor3l_prompt_ZZ_stack_4->SetBinError(1,2.593039);
   flavor3l_prompt_ZZ_stack_4->SetBinError(2,3.465779);
   flavor3l_prompt_ZZ_stack_4->SetBinError(3,3.727999);
   flavor3l_prompt_ZZ_stack_4->SetBinError(4,5.170085);
   flavor3l_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   flavor3l_prompt_ZZ_stack_4->SetFillColor(ci);
   flavor3l_prompt_ZZ_stack_4->SetMarkerStyle(0);
   flavor3l_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetTitle("flavor");
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   flavor3l_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_prompt_ZZ_stack_4,"");
   
   TH1D *flavor3l_prompt_WZ_stack_5 = new TH1D("flavor3l_prompt_WZ_stack_5","dummy",4,-0.5,3.5);
   flavor3l_prompt_WZ_stack_5->SetBinContent(1,391.9414);
   flavor3l_prompt_WZ_stack_5->SetBinContent(2,501.046);
   flavor3l_prompt_WZ_stack_5->SetBinContent(3,722.6423);
   flavor3l_prompt_WZ_stack_5->SetBinContent(4,1007.168);
   flavor3l_prompt_WZ_stack_5->SetBinError(1,8.410753);
   flavor3l_prompt_WZ_stack_5->SetBinError(2,9.64742);
   flavor3l_prompt_WZ_stack_5->SetBinError(3,11.72204);
   flavor3l_prompt_WZ_stack_5->SetBinError(4,14.04493);
   flavor3l_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   flavor3l_prompt_WZ_stack_5->SetFillColor(ci);
   flavor3l_prompt_WZ_stack_5->SetMarkerStyle(0);
   flavor3l_prompt_WZ_stack_5->SetMarkerSize(1.1);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetTitle("flavor");
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   flavor3l_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   flavor3l_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   flavor3l_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   flavor3l_stack->Add(flavor3l_prompt_WZ_stack_5,"");
   flavor3l_stack->Draw("same hist");
   
   TH1D *flavor3l_total__10 = new TH1D("flavor3l_total__10","dummy",4,-0.5,3.5);
   flavor3l_total__10->SetBinContent(1,462.6142);
   flavor3l_total__10->SetBinContent(2,572.4432);
   flavor3l_total__10->SetBinContent(3,918.3639);
   flavor3l_total__10->SetBinContent(4,1186.076);
   flavor3l_total__10->SetBinError(1,14.87);
   flavor3l_total__10->SetBinError(2,13.00405);
   flavor3l_total__10->SetBinError(3,24.57216);
   flavor3l_total__10->SetBinError(4,21.58313);
   flavor3l_total__10->SetMinimum(0);
   flavor3l_total__10->SetMaximum(3558.229);
   flavor3l_total__10->SetEntries(15149);
   flavor3l_total__10->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   flavor3l_total__10->SetFillColor(ci);
   flavor3l_total__10->SetMarkerStyle(20);
   flavor3l_total__10->SetMarkerSize(1.1);
   flavor3l_total__10->GetXaxis()->SetTitle("flavor");
   flavor3l_total__10->GetXaxis()->SetBinLabel(1,"eee");
   flavor3l_total__10->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavor3l_total__10->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavor3l_total__10->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavor3l_total__10->GetXaxis()->SetMoreLogLabels();
   flavor3l_total__10->GetXaxis()->SetLabelFont(42);
   flavor3l_total__10->GetXaxis()->SetLabelOffset(999);
   flavor3l_total__10->GetXaxis()->SetLabelSize(0.06);
   flavor3l_total__10->GetXaxis()->SetTitleSize(0.05);
   flavor3l_total__10->GetXaxis()->SetTitleOffset(999);
   flavor3l_total__10->GetXaxis()->SetTitleFont(42);
   flavor3l_total__10->GetYaxis()->SetTitle("Events");
   flavor3l_total__10->GetYaxis()->SetLabelFont(42);
   flavor3l_total__10->GetYaxis()->SetLabelOffset(0.007);
   flavor3l_total__10->GetYaxis()->SetLabelSize(0.06);
   flavor3l_total__10->GetYaxis()->SetTitleSize(0.06);
   flavor3l_total__10->GetYaxis()->SetTitleOffset(1.48);
   flavor3l_total__10->GetYaxis()->SetTitleFont(42);
   flavor3l_total__10->GetZaxis()->SetLabelFont(42);
   flavor3l_total__10->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_total__10->GetZaxis()->SetLabelSize(0.05);
   flavor3l_total__10->GetZaxis()->SetTitleSize(0.06);
   flavor3l_total__10->GetZaxis()->SetTitleOffset(1);
   flavor3l_total__10->GetZaxis()->SetTitleFont(42);
   flavor3l_total__10->Draw("AXIS SAME");
   
   Double_t flavor3l_total_errors_fx3011[4] = {
   0,
   1,
   2,
   3};
   Double_t flavor3l_total_errors_fy3011[4] = {
   462.6142,
   572.4432,
   918.3639,
   1186.076};
   Double_t flavor3l_total_errors_felx3011[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fely3011[4] = {
   60.33226,
   55.89183,
   79.29243,
   79.17085};
   Double_t flavor3l_total_errors_fehx3011[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fehy3011[4] = {
   61.90898,
   57.48258,
   79.81014,
   79.1587};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,flavor3l_total_errors_fx3011,flavor3l_total_errors_fy3011,flavor3l_total_errors_felx3011,flavor3l_total_errors_fehx3011,flavor3l_total_errors_fely3011,flavor3l_total_errors_fehy3011);
   grae->SetName("flavor3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_flavor3l_total_errors3011 = new TH1F("Graph_flavor3l_total_errors3011","Graph",100,-0.9,3.9);
   Graph_flavor3l_total_errors3011->SetMinimum(315.9866);
   Graph_flavor3l_total_errors3011->SetMaximum(1351.53);
   Graph_flavor3l_total_errors3011->SetDirectory(0);
   Graph_flavor3l_total_errors3011->SetStats(0);
   Graph_flavor3l_total_errors3011->SetLineStyle(0);
   Graph_flavor3l_total_errors3011->SetMarkerStyle(20);
   Graph_flavor3l_total_errors3011->GetXaxis()->SetLabelFont(42);
   Graph_flavor3l_total_errors3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_total_errors3011->GetXaxis()->SetLabelSize(0.05);
   Graph_flavor3l_total_errors3011->GetXaxis()->SetTitleSize(0.06);
   Graph_flavor3l_total_errors3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavor3l_total_errors3011->GetXaxis()->SetTitleFont(42);
   Graph_flavor3l_total_errors3011->GetYaxis()->SetLabelFont(42);
   Graph_flavor3l_total_errors3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_total_errors3011->GetYaxis()->SetLabelSize(0.05);
   Graph_flavor3l_total_errors3011->GetYaxis()->SetTitleSize(0.06);
   Graph_flavor3l_total_errors3011->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavor3l_total_errors3011->GetYaxis()->SetTitleFont(42);
   Graph_flavor3l_total_errors3011->GetZaxis()->SetLabelFont(42);
   Graph_flavor3l_total_errors3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_total_errors3011->GetZaxis()->SetLabelSize(0.05);
   Graph_flavor3l_total_errors3011->GetZaxis()->SetTitleSize(0.06);
   Graph_flavor3l_total_errors3011->GetZaxis()->SetTitleOffset(1);
   Graph_flavor3l_total_errors3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavor3l_total_errors3011);
   
   grae->Draw("pe2 ");
   
   Double_t flavor3l_data_graph_fx3012[4] = {
   0,
   1,
   2,
   3};
   Double_t flavor3l_data_graph_fy3012[4] = {
   456,
   547,
   869,
   1197};
   Double_t flavor3l_data_graph_felx3012[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_data_graph_fely3012[4] = {
   21.34678,
   23.38138,
   29.47377,
   34.5936};
   Double_t flavor3l_data_graph_fehx3012[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_data_graph_fehy3012[4] = {
   22.37026,
   24.40282,
   30.49078,
   35.60809};
   grae = new TGraphAsymmErrors(4,flavor3l_data_graph_fx3012,flavor3l_data_graph_fy3012,flavor3l_data_graph_felx3012,flavor3l_data_graph_fehx3012,flavor3l_data_graph_fely3012,flavor3l_data_graph_fehy3012);
   grae->SetName("flavor3l_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_flavor3l_data_graph3012 = new TH1F("Graph_flavor3l_data_graph3012","Graph",100,-0.9,3.9);
   Graph_flavor3l_data_graph3012->SetMinimum(354.8577);
   Graph_flavor3l_data_graph3012->SetMaximum(1312.404);
   Graph_flavor3l_data_graph3012->SetDirectory(0);
   Graph_flavor3l_data_graph3012->SetStats(0);
   Graph_flavor3l_data_graph3012->SetLineStyle(0);
   Graph_flavor3l_data_graph3012->SetMarkerStyle(20);
   Graph_flavor3l_data_graph3012->GetXaxis()->SetLabelFont(42);
   Graph_flavor3l_data_graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_data_graph3012->GetXaxis()->SetLabelSize(0.05);
   Graph_flavor3l_data_graph3012->GetXaxis()->SetTitleSize(0.06);
   Graph_flavor3l_data_graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_flavor3l_data_graph3012->GetXaxis()->SetTitleFont(42);
   Graph_flavor3l_data_graph3012->GetYaxis()->SetLabelFont(42);
   Graph_flavor3l_data_graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_data_graph3012->GetYaxis()->SetLabelSize(0.05);
   Graph_flavor3l_data_graph3012->GetYaxis()->SetTitleSize(0.06);
   Graph_flavor3l_data_graph3012->GetYaxis()->SetTitleOffset(1.35);
   Graph_flavor3l_data_graph3012->GetYaxis()->SetTitleFont(42);
   Graph_flavor3l_data_graph3012->GetZaxis()->SetLabelFont(42);
   Graph_flavor3l_data_graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_flavor3l_data_graph3012->GetZaxis()->SetLabelSize(0.05);
   Graph_flavor3l_data_graph3012->GetZaxis()->SetTitleSize(0.06);
   Graph_flavor3l_data_graph3012->GetZaxis()->SetTitleOffset(1);
   Graph_flavor3l_data_graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_flavor3l_data_graph3012);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.2,0.628,0.48,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("flavor3l_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("flavor3l_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("flavor3l_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("flavor3l_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("flavor3l_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("flavor3l_total_errors","Total unc.","F");
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
   flavor3l_canvas->cd();
  
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
   
   TH1D *flavor3l_total__11 = new TH1D("flavor3l_total__11","dummy",4,-0.5,3.5);
   flavor3l_total__11->SetBinContent(1,1);
   flavor3l_total__11->SetBinContent(2,1);
   flavor3l_total__11->SetBinContent(3,1);
   flavor3l_total__11->SetBinContent(4,1);
   flavor3l_total__11->SetMinimum(0.5);
   flavor3l_total__11->SetMaximum(2);
   flavor3l_total__11->SetEntries(15153);

   ci = TColor::GetColor("#ffcc00");
   flavor3l_total__11->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavor3l_total__11->SetMarkerColor(ci);
   flavor3l_total__11->SetMarkerSize(1.1);
   flavor3l_total__11->GetXaxis()->SetTitle("flavor");
   flavor3l_total__11->GetXaxis()->SetBinLabel(1,"eee");
   flavor3l_total__11->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavor3l_total__11->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavor3l_total__11->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavor3l_total__11->GetXaxis()->SetMoreLogLabels();
   flavor3l_total__11->GetXaxis()->SetLabelFont(42);
   flavor3l_total__11->GetXaxis()->SetLabelOffset(0.015);
   flavor3l_total__11->GetXaxis()->SetLabelSize(0.06);
   flavor3l_total__11->GetXaxis()->SetTitleSize(0.14);
   flavor3l_total__11->GetXaxis()->SetTitleOffset(1);
   flavor3l_total__11->GetXaxis()->SetTitleFont(42);
   flavor3l_total__11->GetYaxis()->SetTitle("Data/pred.");
   flavor3l_total__11->GetYaxis()->SetDecimals();
   flavor3l_total__11->GetYaxis()->SetNdivisions(505);
   flavor3l_total__11->GetYaxis()->SetLabelFont(42);
   flavor3l_total__11->GetYaxis()->SetLabelOffset(0.01);
   flavor3l_total__11->GetYaxis()->SetLabelSize(0.06);
   flavor3l_total__11->GetYaxis()->SetTitleSize(0.14);
   flavor3l_total__11->GetYaxis()->SetTitleOffset(0.62);
   flavor3l_total__11->GetYaxis()->SetTitleFont(42);
   flavor3l_total__11->GetZaxis()->SetLabelFont(42);
   flavor3l_total__11->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_total__11->GetZaxis()->SetLabelSize(0.05);
   flavor3l_total__11->GetZaxis()->SetTitleSize(0.06);
   flavor3l_total__11->GetZaxis()->SetTitleOffset(1);
   flavor3l_total__11->GetZaxis()->SetTitleFont(42);
   flavor3l_total__11->Draw("AXIS");
   
   Double_t flavor3l_total_errors_fx3013[4] = {
   0,
   1,
   2,
   3};
   Double_t flavor3l_total_errors_fy3013[4] = {
   1,
   1,
   1,
   1};
   Double_t flavor3l_total_errors_felx3013[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fely3013[4] = {
   0.1304159,
   0.09763735,
   0.08634097,
   0.06675022};
   Double_t flavor3l_total_errors_fehx3013[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fehy3013[4] = {
   0.1338242,
   0.1004162,
   0.0869047,
   0.06673998};
   grae = new TGraphAsymmErrors(4,flavor3l_total_errors_fx3013,flavor3l_total_errors_fy3013,flavor3l_total_errors_felx3013,flavor3l_total_errors_fehx3013,flavor3l_total_errors_fely3013,flavor3l_total_errors_fehy3013);
   grae->SetName("flavor3l_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(1001);
   grae->Draw("e2");
   
   Double_t flavor3l_total_errors_fx3014[4] = {
   0,
   1,
   2,
   3};
   Double_t flavor3l_total_errors_fy3014[4] = {
   1,
   1,
   1,
   1};
   Double_t flavor3l_total_errors_felx3014[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fely3014[4] = {
   0,
   0,
   0,
   0};
   Double_t flavor3l_total_errors_fehx3014[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t flavor3l_total_errors_fehy3014[4] = {
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(4,flavor3l_total_errors_fx3014,flavor3l_total_errors_fy3014,flavor3l_total_errors_felx3014,flavor3l_total_errors_fehx3014,flavor3l_total_errors_fely3014,flavor3l_total_errors_fehy3014);
   grae->SetName("flavor3l_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *flavor3l_total__12 = new TH1D("flavor3l_total__12","dummy",4,-0.5,3.5);
   flavor3l_total__12->SetBinContent(1,1);
   flavor3l_total__12->SetBinContent(2,1);
   flavor3l_total__12->SetBinContent(3,1);
   flavor3l_total__12->SetBinContent(4,1);
   flavor3l_total__12->SetMinimum(0.5);
   flavor3l_total__12->SetMaximum(2);
   flavor3l_total__12->SetEntries(15153);

   ci = TColor::GetColor("#ffcc00");
   flavor3l_total__12->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   flavor3l_total__12->SetMarkerColor(ci);
   flavor3l_total__12->SetMarkerSize(1.1);
   flavor3l_total__12->GetXaxis()->SetTitle("flavor");
   flavor3l_total__12->GetXaxis()->SetBinLabel(1,"eee");
   flavor3l_total__12->GetXaxis()->SetBinLabel(2,"ee#mu");
   flavor3l_total__12->GetXaxis()->SetBinLabel(3,"e#mu#mu");
   flavor3l_total__12->GetXaxis()->SetBinLabel(4,"#mu#mu#mu");
   flavor3l_total__12->GetXaxis()->SetMoreLogLabels();
   flavor3l_total__12->GetXaxis()->SetLabelFont(42);
   flavor3l_total__12->GetXaxis()->SetLabelOffset(0.015);
   flavor3l_total__12->GetXaxis()->SetLabelSize(0.06);
   flavor3l_total__12->GetXaxis()->SetTitleSize(0.14);
   flavor3l_total__12->GetXaxis()->SetTitleOffset(1);
   flavor3l_total__12->GetXaxis()->SetTitleFont(42);
   flavor3l_total__12->GetYaxis()->SetTitle("Data/pred.");
   flavor3l_total__12->GetYaxis()->SetDecimals();
   flavor3l_total__12->GetYaxis()->SetNdivisions(505);
   flavor3l_total__12->GetYaxis()->SetLabelFont(42);
   flavor3l_total__12->GetYaxis()->SetLabelOffset(0.01);
   flavor3l_total__12->GetYaxis()->SetLabelSize(0.06);
   flavor3l_total__12->GetYaxis()->SetTitleSize(0.14);
   flavor3l_total__12->GetYaxis()->SetTitleOffset(0.62);
   flavor3l_total__12->GetYaxis()->SetTitleFont(42);
   flavor3l_total__12->GetZaxis()->SetLabelFont(42);
   flavor3l_total__12->GetZaxis()->SetLabelOffset(0.007);
   flavor3l_total__12->GetZaxis()->SetLabelSize(0.05);
   flavor3l_total__12->GetZaxis()->SetTitleSize(0.06);
   flavor3l_total__12->GetZaxis()->SetTitleOffset(1);
   flavor3l_total__12->GetZaxis()->SetTitleFont(42);
   flavor3l_total__12->Draw("AXIS SAME");
   TLine *line = new TLine(-0.5,1,3.5,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3015[4] = {
   0,
   1,
   2,
   3};
   Double_t data_div_fy3015[4] = {
   0.9857026,
   0.9555534,
   0.946248,
   1.00921};
   Double_t data_div_felx3015[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fely3015[4] = {
   0.04614382,
   0.0408449,
   0.03209378,
   0.02916642};
   Double_t data_div_fehx3015[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t data_div_fehy3015[4] = {
   0.04835618,
   0.04262924,
   0.03320119,
   0.03002176};
   grae = new TGraphAsymmErrors(4,data_div_fx3015,data_div_fy3015,data_div_felx3015,data_div_fehx3015,data_div_fely3015,data_div_fehy3015);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3015 = new TH1F("Graph_data_div3015","Graph",100,-0.9,3.9);
   Graph_data_div3015->SetMinimum(354.8577);
   Graph_data_div3015->SetMaximum(1312.404);
   Graph_data_div3015->SetDirectory(0);
   Graph_data_div3015->SetStats(0);
   Graph_data_div3015->SetLineStyle(0);
   Graph_data_div3015->SetMarkerStyle(20);
   Graph_data_div3015->GetXaxis()->SetLabelFont(42);
   Graph_data_div3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_div3015->GetXaxis()->SetLabelSize(0.05);
   Graph_data_div3015->GetXaxis()->SetTitleSize(0.06);
   Graph_data_div3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_div3015->GetXaxis()->SetTitleFont(42);
   Graph_data_div3015->GetYaxis()->SetLabelFont(42);
   Graph_data_div3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_div3015->GetYaxis()->SetLabelSize(0.05);
   Graph_data_div3015->GetYaxis()->SetTitleSize(0.06);
   Graph_data_div3015->GetYaxis()->SetTitleOffset(1.35);
   Graph_data_div3015->GetYaxis()->SetTitleFont(42);
   Graph_data_div3015->GetZaxis()->SetLabelFont(42);
   Graph_data_div3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_div3015->GetZaxis()->SetLabelSize(0.05);
   Graph_data_div3015->GetZaxis()->SetTitleSize(0.06);
   Graph_data_div3015->GetZaxis()->SetTitleOffset(1);
   Graph_data_div3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_div3015);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("flavor3l_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("flavor3l_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   flavor3l_canvas->cd();
   flavor3l_canvas->Modified();
   flavor3l_canvas->cd();
   flavor3l_canvas->SetSelected(flavor3l_canvas);
}
