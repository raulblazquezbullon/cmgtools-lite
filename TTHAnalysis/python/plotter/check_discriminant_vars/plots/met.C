void met()
{
//=========Macro generated from canvas: met_canvas/met
//=========  (Mon Jul 10 18:30:45 2023) by ROOT version 6.24/07
   TCanvas *met_canvas = new TCanvas("met_canvas", "met",0,0,600,750);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   met_canvas->SetHighLightColor(2);
   met_canvas->Range(0,0,1,1);
   met_canvas->SetFillColor(0);
   met_canvas->SetBorderMode(0);
   met_canvas->SetBorderSize(2);
   met_canvas->SetTickx(1);
   met_canvas->SetTicky(1);
   met_canvas->SetLeftMargin(0.18);
   met_canvas->SetRightMargin(0.04);
   met_canvas->SetBottomMargin(0.13);
   met_canvas->SetFrameFillStyle(0);
   met_canvas->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.3077,-40.46808,420.5128,1578.255);
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
   
   TH1D *met_total__5 = new TH1D("met_total__5","dummy",20,0,400);
   met_total__5->SetBinContent(2,779.3963);
   met_total__5->SetBinContent(3,1160.007);
   met_total__5->SetBinContent(4,596.675);
   met_total__5->SetBinContent(5,269.8316);
   met_total__5->SetBinContent(6,141.4442);
   met_total__5->SetBinContent(7,72.9395);
   met_total__5->SetBinContent(8,41.36707);
   met_total__5->SetBinContent(9,22.74127);
   met_total__5->SetBinContent(10,14.37329);
   met_total__5->SetBinContent(11,12.13924);
   met_total__5->SetBinContent(12,7.434463);
   met_total__5->SetBinContent(13,5.320075);
   met_total__5->SetBinContent(14,3.210941);
   met_total__5->SetBinContent(15,3.450811);
   met_total__5->SetBinContent(16,3.128327);
   met_total__5->SetBinContent(17,1.369665);
   met_total__5->SetBinContent(18,0.779701);
   met_total__5->SetBinContent(19,0.9255707);
   met_total__5->SetBinContent(20,2.963421);
   met_total__5->SetBinError(2,24.33407);
   met_total__5->SetBinError(3,23.12116);
   met_total__5->SetBinError(4,13.87266);
   met_total__5->SetBinError(5,7.945307);
   met_total__5->SetBinError(6,6.289143);
   met_total__5->SetBinError(7,3.791529);
   met_total__5->SetBinError(8,2.857173);
   met_total__5->SetBinError(9,2.158232);
   met_total__5->SetBinError(10,1.69352);
   met_total__5->SetBinError(11,1.549628);
   met_total__5->SetBinError(12,1.194172);
   met_total__5->SetBinError(13,1.00787);
   met_total__5->SetBinError(14,0.7823333);
   met_total__5->SetBinError(15,0.8161099);
   met_total__5->SetBinError(16,0.7824627);
   met_total__5->SetBinError(17,0.5180073);
   met_total__5->SetBinError(18,0.3899078);
   met_total__5->SetBinError(19,0.416422);
   met_total__5->SetBinError(20,0.7653993);
   met_total__5->SetMinimum(0);
   met_total__5->SetMaximum(1481.132);
   met_total__5->SetEntries(15149);
   met_total__5->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   met_total__5->SetFillColor(ci);
   met_total__5->SetMarkerStyle(20);
   met_total__5->SetMarkerSize(1.1);
   met_total__5->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__5->GetXaxis()->SetMoreLogLabels();
   met_total__5->GetXaxis()->SetLabelFont(42);
   met_total__5->GetXaxis()->SetLabelOffset(999);
   met_total__5->GetXaxis()->SetLabelSize(0.06);
   met_total__5->GetXaxis()->SetTitleSize(0.05);
   met_total__5->GetXaxis()->SetTitleOffset(999);
   met_total__5->GetXaxis()->SetTitleFont(42);
   met_total__5->GetYaxis()->SetTitle("Events");
   met_total__5->GetYaxis()->SetLabelFont(42);
   met_total__5->GetYaxis()->SetLabelOffset(0.007);
   met_total__5->GetYaxis()->SetLabelSize(0.06);
   met_total__5->GetYaxis()->SetTitleSize(0.06);
   met_total__5->GetYaxis()->SetTitleOffset(1.48);
   met_total__5->GetYaxis()->SetTitleFont(42);
   met_total__5->GetZaxis()->SetLabelFont(42);
   met_total__5->GetZaxis()->SetLabelOffset(0.007);
   met_total__5->GetZaxis()->SetLabelSize(0.05);
   met_total__5->GetZaxis()->SetTitleSize(0.06);
   met_total__5->GetZaxis()->SetTitleOffset(1);
   met_total__5->GetZaxis()->SetTitleFont(42);
   met_total__5->Draw("HIST");
   
   THStack *met_stack = new THStack();
   met_stack->SetName("met_stack");
   met_stack->SetTitle("met");
   
   TH1F *met_stack_stack_2 = new TH1F("met_stack_stack_2","met",20,0,400);
   met_stack_stack_2->SetMinimum(0);
   met_stack_stack_2->SetMaximum(1218.007);
   met_stack_stack_2->SetDirectory(0);
   met_stack_stack_2->SetStats(0);
   met_stack_stack_2->SetLineStyle(0);
   met_stack_stack_2->SetMarkerStyle(20);
   met_stack_stack_2->GetXaxis()->SetLabelFont(42);
   met_stack_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_stack_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_stack_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_stack_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_stack_stack_2->GetXaxis()->SetTitleFont(42);
   met_stack_stack_2->GetYaxis()->SetLabelFont(42);
   met_stack_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_stack_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_stack_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_stack_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_stack_stack_2->GetYaxis()->SetTitleFont(42);
   met_stack_stack_2->GetZaxis()->SetLabelFont(42);
   met_stack_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_stack_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_stack_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_stack_stack_2->GetZaxis()->SetTitleOffset(1);
   met_stack_stack_2->GetZaxis()->SetTitleFont(42);
   met_stack->SetHistogram(met_stack_stack_2);
   
   
   TH1D *met_fakes_VV_stack_1 = new TH1D("met_fakes_VV_stack_1","dummy",20,0,400);
   met_fakes_VV_stack_1->SetBinContent(3,1.000585);
   met_fakes_VV_stack_1->SetBinContent(6,0.4098757);
   met_fakes_VV_stack_1->SetBinError(3,0.4475632);
   met_fakes_VV_stack_1->SetBinError(6,0.2898299);
   met_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   met_fakes_VV_stack_1->SetFillColor(ci);
   met_fakes_VV_stack_1->SetMarkerStyle(0);
   met_fakes_VV_stack_1->SetMarkerSize(1.1);
   met_fakes_VV_stack_1->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   met_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   met_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   met_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   met_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   met_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   met_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   met_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   met_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_VV_stack_1,"");
   
   TH1D *met_fakes_TT_stack_2 = new TH1D("met_fakes_TT_stack_2","dummy",20,0,400);
   met_fakes_TT_stack_2->SetBinContent(2,13.94893);
   met_fakes_TT_stack_2->SetBinContent(3,31.59494);
   met_fakes_TT_stack_2->SetBinContent(4,27.49196);
   met_fakes_TT_stack_2->SetBinContent(5,18.75795);
   met_fakes_TT_stack_2->SetBinContent(6,11.86883);
   met_fakes_TT_stack_2->SetBinContent(7,5.372866);
   met_fakes_TT_stack_2->SetBinContent(8,2.574102);
   met_fakes_TT_stack_2->SetBinContent(9,1.489786);
   met_fakes_TT_stack_2->SetBinContent(10,1.425007);
   met_fakes_TT_stack_2->SetBinContent(11,0.8647202);
   met_fakes_TT_stack_2->SetBinContent(12,0.426325);
   met_fakes_TT_stack_2->SetBinContent(13,0.1314126);
   met_fakes_TT_stack_2->SetBinContent(14,0.2838006);
   met_fakes_TT_stack_2->SetBinContent(15,0.132564);
   met_fakes_TT_stack_2->SetBinContent(19,0.1454182);
   met_fakes_TT_stack_2->SetBinError(2,1.402818);
   met_fakes_TT_stack_2->SetBinError(3,2.121733);
   met_fakes_TT_stack_2->SetBinError(4,2.009006);
   met_fakes_TT_stack_2->SetBinError(5,1.638952);
   met_fakes_TT_stack_2->SetBinError(6,1.325746);
   met_fakes_TT_stack_2->SetBinError(7,0.8719513);
   met_fakes_TT_stack_2->SetBinError(8,0.6068356);
   met_fakes_TT_stack_2->SetBinError(9,0.4814267);
   met_fakes_TT_stack_2->SetBinError(10,0.4508134);
   met_fakes_TT_stack_2->SetBinError(11,0.3531703);
   met_fakes_TT_stack_2->SetBinError(12,0.2461415);
   met_fakes_TT_stack_2->SetBinError(13,0.1314126);
   met_fakes_TT_stack_2->SetBinError(14,0.2006889);
   met_fakes_TT_stack_2->SetBinError(15,0.132564);
   met_fakes_TT_stack_2->SetBinError(19,0.1454182);
   met_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   met_fakes_TT_stack_2->SetFillColor(ci);
   met_fakes_TT_stack_2->SetMarkerStyle(0);
   met_fakes_TT_stack_2->SetMarkerSize(1.1);
   met_fakes_TT_stack_2->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   met_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   met_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   met_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   met_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   met_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   met_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   met_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   met_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_TT_stack_2,"");
   
   TH1D *met_fakes_DY_stack_3 = new TH1D("met_fakes_DY_stack_3","dummy",20,0,400);
   met_fakes_DY_stack_3->SetBinContent(2,126.5279);
   met_fakes_DY_stack_3->SetBinContent(3,89.6052);
   met_fakes_DY_stack_3->SetBinContent(4,21.98147);
   met_fakes_DY_stack_3->SetBinContent(5,3.483928);
   met_fakes_DY_stack_3->SetBinContent(6,3.57414);
   met_fakes_DY_stack_3->SetBinError(2,21.39655);
   met_fakes_DY_stack_3->SetBinError(3,17.93371);
   met_fakes_DY_stack_3->SetBinError(4,8.976672);
   met_fakes_DY_stack_3->SetBinError(5,3.483928);
   met_fakes_DY_stack_3->SetBinError(6,3.57414);
   met_fakes_DY_stack_3->SetEntries(72);

   ci = TColor::GetColor("#cccccc");
   met_fakes_DY_stack_3->SetFillColor(ci);
   met_fakes_DY_stack_3->SetMarkerStyle(0);
   met_fakes_DY_stack_3->SetMarkerSize(1.1);
   met_fakes_DY_stack_3->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   met_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   met_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   met_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   met_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   met_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   met_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   met_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   met_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_DY_stack_3,"");
   
   TH1D *met_prompt_ZZ_stack_4 = new TH1D("met_prompt_ZZ_stack_4","dummy",20,0,400);
   met_prompt_ZZ_stack_4->SetBinContent(2,57.62619);
   met_prompt_ZZ_stack_4->SetBinContent(3,57.60251);
   met_prompt_ZZ_stack_4->SetBinContent(4,20.03493);
   met_prompt_ZZ_stack_4->SetBinContent(5,6.175858);
   met_prompt_ZZ_stack_4->SetBinContent(6,4.646153);
   met_prompt_ZZ_stack_4->SetBinContent(7,3.179286);
   met_prompt_ZZ_stack_4->SetBinContent(8,1.548078);
   met_prompt_ZZ_stack_4->SetBinContent(9,1.58962);
   met_prompt_ZZ_stack_4->SetBinContent(10,0.798074);
   met_prompt_ZZ_stack_4->SetBinContent(11,0.4078475);
   met_prompt_ZZ_stack_4->SetBinError(2,4.708649);
   met_prompt_ZZ_stack_4->SetBinError(3,4.722066);
   met_prompt_ZZ_stack_4->SetBinError(4,2.77971);
   met_prompt_ZZ_stack_4->SetBinError(5,1.545037);
   met_prompt_ZZ_stack_4->SetBinError(6,1.34173);
   met_prompt_ZZ_stack_4->SetBinError(7,1.124182);
   met_prompt_ZZ_stack_4->SetBinError(8,0.7742341);
   met_prompt_ZZ_stack_4->SetBinError(9,0.7948361);
   met_prompt_ZZ_stack_4->SetBinError(10,0.5643293);
   met_prompt_ZZ_stack_4->SetBinError(11,0.4078475);
   met_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   met_prompt_ZZ_stack_4->SetFillColor(ci);
   met_prompt_ZZ_stack_4->SetMarkerStyle(0);
   met_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   met_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_prompt_ZZ_stack_4,"");
   
   TH1D *met_prompt_WZ_stack_5 = new TH1D("met_prompt_WZ_stack_5","dummy",20,0,400);
   met_prompt_WZ_stack_5->SetBinContent(2,581.2933);
   met_prompt_WZ_stack_5->SetBinContent(3,980.2037);
   met_prompt_WZ_stack_5->SetBinContent(4,527.1667);
   met_prompt_WZ_stack_5->SetBinContent(5,241.4139);
   met_prompt_WZ_stack_5->SetBinContent(6,120.9452);
   met_prompt_WZ_stack_5->SetBinContent(7,64.38735);
   met_prompt_WZ_stack_5->SetBinContent(8,37.24489);
   met_prompt_WZ_stack_5->SetBinContent(9,19.66186);
   met_prompt_WZ_stack_5->SetBinContent(10,12.15021);
   met_prompt_WZ_stack_5->SetBinContent(11,10.86667);
   met_prompt_WZ_stack_5->SetBinContent(12,7.008138);
   met_prompt_WZ_stack_5->SetBinContent(13,5.188662);
   met_prompt_WZ_stack_5->SetBinContent(14,2.927141);
   met_prompt_WZ_stack_5->SetBinContent(15,3.318247);
   met_prompt_WZ_stack_5->SetBinContent(16,3.128327);
   met_prompt_WZ_stack_5->SetBinContent(17,1.369665);
   met_prompt_WZ_stack_5->SetBinContent(18,0.779701);
   met_prompt_WZ_stack_5->SetBinContent(19,0.7801525);
   met_prompt_WZ_stack_5->SetBinContent(20,2.963421);
   met_prompt_WZ_stack_5->SetBinError(2,10.49741);
   met_prompt_WZ_stack_5->SetBinError(3,13.63707);
   met_prompt_WZ_stack_5->SetBinError(4,10.00536);
   met_prompt_WZ_stack_5->SetBinError(5,6.776197);
   met_prompt_WZ_stack_5->SetBinError(6,4.810094);
   met_prompt_WZ_stack_5->SetBinError(7,3.514486);
   met_prompt_WZ_stack_5->SetBinError(8,2.68249);
   met_prompt_WZ_stack_5->SetBinError(9,1.947929);
   met_prompt_WZ_stack_5->SetBinError(10,1.531767);
   met_prompt_WZ_stack_5->SetBinError(11,1.45268);
   met_prompt_WZ_stack_5->SetBinError(12,1.168529);
   met_prompt_WZ_stack_5->SetBinError(13,0.999266);
   met_prompt_WZ_stack_5->SetBinError(14,0.7561543);
   met_prompt_WZ_stack_5->SetBinError(15,0.8052715);
   met_prompt_WZ_stack_5->SetBinError(16,0.7824627);
   met_prompt_WZ_stack_5->SetBinError(17,0.5180073);
   met_prompt_WZ_stack_5->SetBinError(18,0.3899078);
   met_prompt_WZ_stack_5->SetBinError(19,0.3902061);
   met_prompt_WZ_stack_5->SetBinError(20,0.7653993);
   met_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   met_prompt_WZ_stack_5->SetFillColor(ci);
   met_prompt_WZ_stack_5->SetMarkerStyle(0);
   met_prompt_WZ_stack_5->SetMarkerSize(1.1);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   met_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   met_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   met_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   met_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   met_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   met_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_prompt_WZ_stack_5,"");
   met_stack->Draw("same hist");
   
   TH1D *met_total__6 = new TH1D("met_total__6","dummy",20,0,400);
   met_total__6->SetBinContent(2,779.3963);
   met_total__6->SetBinContent(3,1160.007);
   met_total__6->SetBinContent(4,596.675);
   met_total__6->SetBinContent(5,269.8316);
   met_total__6->SetBinContent(6,141.4442);
   met_total__6->SetBinContent(7,72.9395);
   met_total__6->SetBinContent(8,41.36707);
   met_total__6->SetBinContent(9,22.74127);
   met_total__6->SetBinContent(10,14.37329);
   met_total__6->SetBinContent(11,12.13924);
   met_total__6->SetBinContent(12,7.434463);
   met_total__6->SetBinContent(13,5.320075);
   met_total__6->SetBinContent(14,3.210941);
   met_total__6->SetBinContent(15,3.450811);
   met_total__6->SetBinContent(16,3.128327);
   met_total__6->SetBinContent(17,1.369665);
   met_total__6->SetBinContent(18,0.779701);
   met_total__6->SetBinContent(19,0.9255707);
   met_total__6->SetBinContent(20,2.963421);
   met_total__6->SetBinError(2,24.33407);
   met_total__6->SetBinError(3,23.12116);
   met_total__6->SetBinError(4,13.87266);
   met_total__6->SetBinError(5,7.945307);
   met_total__6->SetBinError(6,6.289143);
   met_total__6->SetBinError(7,3.791529);
   met_total__6->SetBinError(8,2.857173);
   met_total__6->SetBinError(9,2.158232);
   met_total__6->SetBinError(10,1.69352);
   met_total__6->SetBinError(11,1.549628);
   met_total__6->SetBinError(12,1.194172);
   met_total__6->SetBinError(13,1.00787);
   met_total__6->SetBinError(14,0.7823333);
   met_total__6->SetBinError(15,0.8161099);
   met_total__6->SetBinError(16,0.7824627);
   met_total__6->SetBinError(17,0.5180073);
   met_total__6->SetBinError(18,0.3899078);
   met_total__6->SetBinError(19,0.416422);
   met_total__6->SetBinError(20,0.7653993);
   met_total__6->SetMinimum(0);
   met_total__6->SetMaximum(1481.132);
   met_total__6->SetEntries(15149);
   met_total__6->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   met_total__6->SetFillColor(ci);
   met_total__6->SetMarkerStyle(20);
   met_total__6->SetMarkerSize(1.1);
   met_total__6->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__6->GetXaxis()->SetMoreLogLabels();
   met_total__6->GetXaxis()->SetLabelFont(42);
   met_total__6->GetXaxis()->SetLabelOffset(999);
   met_total__6->GetXaxis()->SetLabelSize(0.06);
   met_total__6->GetXaxis()->SetTitleSize(0.05);
   met_total__6->GetXaxis()->SetTitleOffset(999);
   met_total__6->GetXaxis()->SetTitleFont(42);
   met_total__6->GetYaxis()->SetTitle("Events");
   met_total__6->GetYaxis()->SetLabelFont(42);
   met_total__6->GetYaxis()->SetLabelOffset(0.007);
   met_total__6->GetYaxis()->SetLabelSize(0.06);
   met_total__6->GetYaxis()->SetTitleSize(0.06);
   met_total__6->GetYaxis()->SetTitleOffset(1.48);
   met_total__6->GetYaxis()->SetTitleFont(42);
   met_total__6->GetZaxis()->SetLabelFont(42);
   met_total__6->GetZaxis()->SetLabelOffset(0.007);
   met_total__6->GetZaxis()->SetLabelSize(0.05);
   met_total__6->GetZaxis()->SetTitleSize(0.06);
   met_total__6->GetZaxis()->SetTitleOffset(1);
   met_total__6->GetZaxis()->SetTitleFont(42);
   met_total__6->Draw("AXIS SAME");
   
   Double_t met_total_errors_fx3006[19] = {
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t met_total_errors_fy3006[19] = {
   779.3963,
   1160.007,
   596.675,
   269.8316,
   141.4442,
   72.9395,
   41.36707,
   22.74127,
   14.37329,
   12.13924,
   7.434463,
   5.320075,
   3.210941,
   3.450811,
   3.128327,
   1.369665,
   0.779701,
   0.9255707,
   2.963421};
   Double_t met_total_errors_felx3006[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fely3006[19] = {
   126.9828,
   84.66704,
   50.23381,
   22.94871,
   24.9157,
   5.722964,
   4.258736,
   2.204071,
   1.282918,
   2.141107,
   1.038674,
   1.021564,
   0.4595458,
   1.042582,
   1.281972,
   0.08688442,
   0.05516057,
   0.8318311,
   0.1892696};
   Double_t met_total_errors_fehx3006[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fehy3006[19] = {
   72.69814,
   91.24773,
   59.14822,
   22.58741,
   21.15252,
   6.852154,
   4.524358,
   1.742038,
   3.32586,
   1.167003,
   0.7388312,
   0.7980209,
   0.8664607,
   0.6781357,
   0.7656692,
   0.7193731,
   0.7446637,
   0.2039879,
   0.2466909};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,met_total_errors_fx3006,met_total_errors_fy3006,met_total_errors_felx3006,met_total_errors_fehx3006,met_total_errors_fely3006,met_total_errors_fehy3006);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_total_errors3006 = new TH1F("Graph_met_total_errors3006","Graph",100,0,438);
   Graph_met_total_errors3006->SetMinimum(0.08436561);
   Graph_met_total_errors3006->SetMaximum(1376.371);
   Graph_met_total_errors3006->SetDirectory(0);
   Graph_met_total_errors3006->SetStats(0);
   Graph_met_total_errors3006->SetLineStyle(0);
   Graph_met_total_errors3006->SetMarkerStyle(20);
   Graph_met_total_errors3006->GetXaxis()->SetLabelFont(42);
   Graph_met_total_errors3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_total_errors3006->GetXaxis()->SetLabelSize(0.05);
   Graph_met_total_errors3006->GetXaxis()->SetTitleSize(0.06);
   Graph_met_total_errors3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_total_errors3006->GetXaxis()->SetTitleFont(42);
   Graph_met_total_errors3006->GetYaxis()->SetLabelFont(42);
   Graph_met_total_errors3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_total_errors3006->GetYaxis()->SetLabelSize(0.05);
   Graph_met_total_errors3006->GetYaxis()->SetTitleSize(0.06);
   Graph_met_total_errors3006->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_total_errors3006->GetYaxis()->SetTitleFont(42);
   Graph_met_total_errors3006->GetZaxis()->SetLabelFont(42);
   Graph_met_total_errors3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_total_errors3006->GetZaxis()->SetLabelSize(0.05);
   Graph_met_total_errors3006->GetZaxis()->SetTitleSize(0.06);
   Graph_met_total_errors3006->GetZaxis()->SetTitleOffset(1);
   Graph_met_total_errors3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_total_errors3006);
   
   grae->Draw("pe2 ");
   
   Double_t met_data_graph_fx3007[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t met_data_graph_fy3007[20] = {
   0,
   752,
   1095,
   581,
   272,
   129,
   72,
   43,
   38,
   25,
   15,
   8,
   10,
   4,
   5,
   3,
   5,
   1,
   0,
   11};
   Double_t met_data_graph_felx3007[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_data_graph_fely3007[20] = {
   0,
   27.41711,
   33.08644,
   24.09752,
   16.48263,
   11.34331,
   8.465699,
   6.531962,
   6.137282,
   4.966428,
   3.829449,
   2.768432,
   3.108748,
   1.914367,
   2.159724,
   1.632727,
   2.159724,
   0.8272525,
   0,
   3.265636};
   Double_t met_data_graph_fehx3007[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_data_graph_fehy3007[20] = {
   1.841055,
   28.43539,
   34.1016,
   25.11832,
   17.51302,
   12.38745,
   9.524792,
   7.608436,
   7.218633,
   6.066714,
   4.958839,
   3.94522,
   4.267035,
   3.162815,
   3.382539,
   2.918242,
   3.382539,
   2.29957,
   1.841055,
   4.416609};
   grae = new TGraphAsymmErrors(20,met_data_graph_fx3007,met_data_graph_fy3007,met_data_graph_felx3007,met_data_graph_fehx3007,met_data_graph_fely3007,met_data_graph_fehy3007);
   grae->SetName("met_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_data_graph3007 = new TH1F("Graph_met_data_graph3007","Graph",100,0,440);
   Graph_met_data_graph3007->SetMinimum(0);
   Graph_met_data_graph3007->SetMaximum(1242.012);
   Graph_met_data_graph3007->SetDirectory(0);
   Graph_met_data_graph3007->SetStats(0);
   Graph_met_data_graph3007->SetLineStyle(0);
   Graph_met_data_graph3007->SetMarkerStyle(20);
   Graph_met_data_graph3007->GetXaxis()->SetLabelFont(42);
   Graph_met_data_graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_met_data_graph3007->GetXaxis()->SetLabelSize(0.05);
   Graph_met_data_graph3007->GetXaxis()->SetTitleSize(0.06);
   Graph_met_data_graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_met_data_graph3007->GetXaxis()->SetTitleFont(42);
   Graph_met_data_graph3007->GetYaxis()->SetLabelFont(42);
   Graph_met_data_graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_met_data_graph3007->GetYaxis()->SetLabelSize(0.05);
   Graph_met_data_graph3007->GetYaxis()->SetTitleSize(0.06);
   Graph_met_data_graph3007->GetYaxis()->SetTitleOffset(1.35);
   Graph_met_data_graph3007->GetYaxis()->SetTitleFont(42);
   Graph_met_data_graph3007->GetZaxis()->SetLabelFont(42);
   Graph_met_data_graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_met_data_graph3007->GetZaxis()->SetLabelSize(0.05);
   Graph_met_data_graph3007->GetZaxis()->SetTitleSize(0.06);
   Graph_met_data_graph3007->GetZaxis()->SetTitleOffset(1);
   Graph_met_data_graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_met_data_graph3007);
   
   grae->Draw("pz ");
   
   TLegend *leg = new TLegend(0.62,0.628,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("met_data","Data","LPE");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("met_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("met_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("met_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("met_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("met_total_errors","Total unc.","F");
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
   met_canvas->cd();
  
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
   
   TH1D *met_total__7 = new TH1D("met_total__7","dummy",20,0,400);
   met_total__7->SetBinContent(2,1);
   met_total__7->SetBinContent(3,1);
   met_total__7->SetBinContent(4,1);
   met_total__7->SetBinContent(5,1);
   met_total__7->SetBinContent(6,1);
   met_total__7->SetBinContent(7,1);
   met_total__7->SetBinContent(8,1);
   met_total__7->SetBinContent(9,1);
   met_total__7->SetBinContent(10,1);
   met_total__7->SetBinContent(11,1);
   met_total__7->SetBinContent(12,1);
   met_total__7->SetBinContent(13,1);
   met_total__7->SetBinContent(14,1);
   met_total__7->SetBinContent(15,1);
   met_total__7->SetBinContent(16,1);
   met_total__7->SetBinContent(17,1);
   met_total__7->SetBinContent(18,1);
   met_total__7->SetBinContent(19,1);
   met_total__7->SetBinContent(20,1);
   met_total__7->SetMinimum(0.5);
   met_total__7->SetMaximum(2);
   met_total__7->SetEntries(15169);

   ci = TColor::GetColor("#ffcc00");
   met_total__7->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_total__7->SetMarkerColor(ci);
   met_total__7->SetMarkerSize(1.1);
   met_total__7->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__7->GetXaxis()->SetMoreLogLabels();
   met_total__7->GetXaxis()->SetLabelFont(42);
   met_total__7->GetXaxis()->SetLabelOffset(0.015);
   met_total__7->GetXaxis()->SetLabelSize(0.06);
   met_total__7->GetXaxis()->SetTitleSize(0.14);
   met_total__7->GetXaxis()->SetTitleOffset(1);
   met_total__7->GetXaxis()->SetTitleFont(42);
   met_total__7->GetYaxis()->SetTitle("Data/pred.");
   met_total__7->GetYaxis()->SetDecimals();
   met_total__7->GetYaxis()->SetNdivisions(505);
   met_total__7->GetYaxis()->SetLabelFont(42);
   met_total__7->GetYaxis()->SetLabelOffset(0.01);
   met_total__7->GetYaxis()->SetLabelSize(0.06);
   met_total__7->GetYaxis()->SetTitleSize(0.14);
   met_total__7->GetYaxis()->SetTitleOffset(0.62);
   met_total__7->GetYaxis()->SetTitleFont(42);
   met_total__7->GetZaxis()->SetLabelFont(42);
   met_total__7->GetZaxis()->SetLabelOffset(0.007);
   met_total__7->GetZaxis()->SetLabelSize(0.05);
   met_total__7->GetZaxis()->SetTitleSize(0.06);
   met_total__7->GetZaxis()->SetTitleOffset(1);
   met_total__7->GetZaxis()->SetTitleFont(42);
   met_total__7->Draw("AXIS");
   
   Double_t met_total_errors_fx3008[19] = {
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t met_total_errors_fy3008[19] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t met_total_errors_felx3008[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fely3008[19] = {
   0.1629245,
   0.07298839,
   0.08418956,
   0.08504826,
   0.1761522,
   0.0784618,
   0.1029499,
   0.09691944,
   0.08925707,
   0.176379,
   0.1397107,
   0.1920206,
   0.1431187,
   0.3021267,
   0.4097947,
   0.06343481,
   0.0707458,
   0.8987224,
   0.0638686};
   Double_t met_total_errors_fehx3008[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fehy3008[19] = {
   0.09327494,
   0.07866137,
   0.09912971,
   0.08370929,
   0.1495468,
   0.09394298,
   0.109371,
   0.0766025,
   0.2313917,
   0.09613476,
   0.09937923,
   0.1500018,
   0.2698463,
   0.1965149,
   0.2447535,
   0.5252185,
   0.9550632,
   0.2203914,
   0.0832453};
   grae = new TGraphAsymmErrors(19,met_total_errors_fx3008,met_total_errors_fy3008,met_total_errors_felx3008,met_total_errors_fehx3008,met_total_errors_fely3008,met_total_errors_fehy3008);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(1001);
   grae->Draw("e2");
   
   Double_t met_total_errors_fx3009[19] = {
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t met_total_errors_fy3009[19] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t met_total_errors_felx3009[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fely3009[19] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t met_total_errors_fehx3009[19] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t met_total_errors_fehy3009[19] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(19,met_total_errors_fx3009,met_total_errors_fy3009,met_total_errors_felx3009,met_total_errors_fehx3009,met_total_errors_fely3009,met_total_errors_fehy3009);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   grae->SetMarkerColor(ci);
   grae->Draw("e2 ");
   
   TH1D *met_total__8 = new TH1D("met_total__8","dummy",20,0,400);
   met_total__8->SetBinContent(2,1);
   met_total__8->SetBinContent(3,1);
   met_total__8->SetBinContent(4,1);
   met_total__8->SetBinContent(5,1);
   met_total__8->SetBinContent(6,1);
   met_total__8->SetBinContent(7,1);
   met_total__8->SetBinContent(8,1);
   met_total__8->SetBinContent(9,1);
   met_total__8->SetBinContent(10,1);
   met_total__8->SetBinContent(11,1);
   met_total__8->SetBinContent(12,1);
   met_total__8->SetBinContent(13,1);
   met_total__8->SetBinContent(14,1);
   met_total__8->SetBinContent(15,1);
   met_total__8->SetBinContent(16,1);
   met_total__8->SetBinContent(17,1);
   met_total__8->SetBinContent(18,1);
   met_total__8->SetBinContent(19,1);
   met_total__8->SetBinContent(20,1);
   met_total__8->SetMinimum(0.5);
   met_total__8->SetMaximum(2);
   met_total__8->SetEntries(15169);

   ci = TColor::GetColor("#ffcc00");
   met_total__8->SetFillColor(ci);

   ci = TColor::GetColor("#6666ff");
   met_total__8->SetMarkerColor(ci);
   met_total__8->SetMarkerSize(1.1);
   met_total__8->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_total__8->GetXaxis()->SetMoreLogLabels();
   met_total__8->GetXaxis()->SetLabelFont(42);
   met_total__8->GetXaxis()->SetLabelOffset(0.015);
   met_total__8->GetXaxis()->SetLabelSize(0.06);
   met_total__8->GetXaxis()->SetTitleSize(0.14);
   met_total__8->GetXaxis()->SetTitleOffset(1);
   met_total__8->GetXaxis()->SetTitleFont(42);
   met_total__8->GetYaxis()->SetTitle("Data/pred.");
   met_total__8->GetYaxis()->SetDecimals();
   met_total__8->GetYaxis()->SetNdivisions(505);
   met_total__8->GetYaxis()->SetLabelFont(42);
   met_total__8->GetYaxis()->SetLabelOffset(0.01);
   met_total__8->GetYaxis()->SetLabelSize(0.06);
   met_total__8->GetYaxis()->SetTitleSize(0.14);
   met_total__8->GetYaxis()->SetTitleOffset(0.62);
   met_total__8->GetYaxis()->SetTitleFont(42);
   met_total__8->GetZaxis()->SetLabelFont(42);
   met_total__8->GetZaxis()->SetLabelOffset(0.007);
   met_total__8->GetZaxis()->SetLabelSize(0.05);
   met_total__8->GetZaxis()->SetTitleSize(0.06);
   met_total__8->GetZaxis()->SetTitleOffset(1);
   met_total__8->GetZaxis()->SetTitleFont(42);
   met_total__8->Draw("AXIS SAME");
   TLine *line = new TLine(0,1,400,1);
   line->SetLineColor(58);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t data_div_fx3010[20] = {
   10,
   30,
   50,
   70,
   90,
   110,
   130,
   150,
   170,
   190,
   210,
   230,
   250,
   270,
   290,
   310,
   330,
   350,
   370,
   390};
   Double_t data_div_fy3010[20] = {
   0,
   0.9648493,
   0.9439598,
   0.9737293,
   1.008036,
   0.9120206,
   0.9871195,
   1.039474,
   1.670971,
   1.739337,
   1.235663,
   1.07607,
   1.879673,
   1.245741,
   1.448935,
   0.9589789,
   3.650529,
   1.282543,
   0,
   3.711926};
   Double_t data_div_felx3010[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t data_div_fely3010[20] = {
   0,
   0.03517737,
   0.02852263,
   0.04038634,
   0.06108488,
   0.0801964,
   0.1160647,
   0.1579024,
   0.2698742,
   0.3455317,
   0.3154605,
   0.3723783,
   0.5843429,
   0.5962012,
   0.62586,
   0.5219168,
   1.576827,
   1.060987,
   0,
   1.101982};
   Double_t data_div_fehx3010[20] = {
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10,
   10};
   Double_t data_div_fehy3010[20] = {
   0,
   0.03648387,
   0.02939775,
   0.04209715,
   0.06490352,
   0.08757839,
   0.1305848,
   0.183925,
   0.3174244,
   0.4220824,
   0.4084968,
   0.5306665,
   0.802063,
   0.9850118,
   0.9802158,
   0.9328443,
   2.469611,
   2.949297,
   1.989102,
   1.490375};
   grae = new TGraphAsymmErrors(20,data_div_fx3010,data_div_fy3010,data_div_felx3010,data_div_fehx3010,data_div_fely3010,data_div_fehy3010);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3010 = new TH1F("Graph_data_div3010","Graph",100,0,440);
   Graph_data_div3010->SetMinimum(0);
   Graph_data_div3010->SetMaximum(1242.012);
   Graph_data_div3010->SetDirectory(0);
   Graph_data_div3010->SetStats(0);
   Graph_data_div3010->SetLineStyle(0);
   Graph_data_div3010->SetMarkerStyle(20);
   Graph_data_div3010->GetXaxis()->SetLabelFont(42);
   Graph_data_div3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_data_div3010->GetXaxis()->SetLabelSize(0.05);
   Graph_data_div3010->GetXaxis()->SetTitleSize(0.06);
   Graph_data_div3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_data_div3010->GetXaxis()->SetTitleFont(42);
   Graph_data_div3010->GetYaxis()->SetLabelFont(42);
   Graph_data_div3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_data_div3010->GetYaxis()->SetLabelSize(0.05);
   Graph_data_div3010->GetYaxis()->SetTitleSize(0.06);
   Graph_data_div3010->GetYaxis()->SetTitleOffset(1.35);
   Graph_data_div3010->GetYaxis()->SetTitleFont(42);
   Graph_data_div3010->GetZaxis()->SetLabelFont(42);
   Graph_data_div3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_data_div3010->GetZaxis()->SetLabelSize(0.05);
   Graph_data_div3010->GetZaxis()->SetTitleSize(0.06);
   Graph_data_div3010->GetZaxis()->SetTitleOffset(1);
   Graph_data_div3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_data_div3010);
   
   grae->Draw("pz ");
   
   leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.084);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("met_total_errors","stat. unc.","F");
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
   entry=leg->AddEntry("met_total_errors","total unc.","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   pad2->Modified();
   met_canvas->cd();
   met_canvas->Modified();
   met_canvas->cd();
   met_canvas->SetSelected(met_canvas);
}
