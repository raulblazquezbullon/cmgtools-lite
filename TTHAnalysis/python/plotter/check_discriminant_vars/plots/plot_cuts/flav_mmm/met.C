void met()
{
//=========Macro generated from canvas: met_canvas/met
//=========  (Wed Jul 12 04:39:00 2023) by ROOT version 6.24/07
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
   pad1->Range(-92.3077,-15.98457,420.5128,623.3983);
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
   met_total__5->SetBinContent(2,283.0012);
   met_total__5->SetBinContent(3,434.8497);
   met_total__5->SetBinContent(4,233.9956);
   met_total__5->SetBinContent(5,99.16239);
   met_total__5->SetBinContent(6,56.3404);
   met_total__5->SetBinContent(7,30.02646);
   met_total__5->SetBinContent(8,17.61801);
   met_total__5->SetBinContent(9,9.770253);
   met_total__5->SetBinContent(10,6.37071);
   met_total__5->SetBinContent(11,3.768299);
   met_total__5->SetBinContent(12,2.634722);
   met_total__5->SetBinContent(13,2.355275);
   met_total__5->SetBinContent(14,1.664387);
   met_total__5->SetBinContent(15,1.180377);
   met_total__5->SetBinContent(16,1.178741);
   met_total__5->SetBinContent(17,0.3899021);
   met_total__5->SetBinContent(18,0.3963049);
   met_total__5->SetBinContent(19,0.1959278);
   met_total__5->SetBinContent(20,1.177543);
   met_total__5->SetBinError(2,13.28167);
   met_total__5->SetBinError(3,12.4762);
   met_total__5->SetBinError(4,9.29851);
   met_total__5->SetBinError(5,4.434831);
   met_total__5->SetBinError(6,3.370575);
   met_total__5->SetBinError(7,2.505933);
   met_total__5->SetBinError(8,1.87696);
   met_total__5->SetBinError(9,1.494273);
   met_total__5->SetBinError(10,1.169139);
   met_total__5->SetBinError(11,0.8465827);
   met_total__5->SetBinError(12,0.7076164);
   met_total__5->SetBinError(13,0.6799678);
   met_total__5->SetBinError(14,0.559094);
   met_total__5->SetBinError(15,0.4819003);
   met_total__5->SetBinError(16,0.48123);
   met_total__5->SetBinError(17,0.2757055);
   met_total__5->SetBinError(18,0.2802299);
   met_total__5->SetBinError(19,0.1959278);
   met_total__5->SetBinError(20,0.4807407);
   met_total__5->SetMinimum(0);
   met_total__5->SetMaximum(585.0353);
   met_total__5->SetEntries(5688);
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
   met_stack_stack_2->SetMaximum(456.5922);
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
   
   
   TH1D *met_fakes_TT_stack_1 = new TH1D("met_fakes_TT_stack_1","dummy",20,0,400);
   met_fakes_TT_stack_1->SetBinContent(2,6.215249);
   met_fakes_TT_stack_1->SetBinContent(3,12.46789);
   met_fakes_TT_stack_1->SetBinContent(4,10.91521);
   met_fakes_TT_stack_1->SetBinContent(5,7.859101);
   met_fakes_TT_stack_1->SetBinContent(6,5.184881);
   met_fakes_TT_stack_1->SetBinContent(7,1.588344);
   met_fakes_TT_stack_1->SetBinContent(8,1.725837);
   met_fakes_TT_stack_1->SetBinContent(9,0.5300431);
   met_fakes_TT_stack_1->SetBinContent(10,0.8630187);
   met_fakes_TT_stack_1->SetBinContent(11,0.4350683);
   met_fakes_TT_stack_1->SetBinContent(12,0.2851361);
   met_fakes_TT_stack_1->SetBinContent(14,0.2838006);
   met_fakes_TT_stack_1->SetBinError(2,0.9478862);
   met_fakes_TT_stack_1->SetBinError(3,1.359139);
   met_fakes_TT_stack_1->SetBinError(4,1.29631);
   met_fakes_TT_stack_1->SetBinError(5,1.07393);
   met_fakes_TT_stack_1->SetBinError(6,0.8875249);
   met_fakes_TT_stack_1->SetBinError(7,0.4789812);
   met_fakes_TT_stack_1->SetBinError(8,0.4982299);
   met_fakes_TT_stack_1->SetBinError(9,0.3164555);
   met_fakes_TT_stack_1->SetBinError(10,0.3523476);
   met_fakes_TT_stack_1->SetBinError(11,0.2511946);
   met_fakes_TT_stack_1->SetBinError(12,0.2016217);
   met_fakes_TT_stack_1->SetBinError(14,0.2006889);
   met_fakes_TT_stack_1->SetEntries(346);

   ci = TColor::GetColor("#666666");
   met_fakes_TT_stack_1->SetFillColor(ci);
   met_fakes_TT_stack_1->SetMarkerStyle(0);
   met_fakes_TT_stack_1->SetMarkerSize(1.1);
   met_fakes_TT_stack_1->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_TT_stack_1->GetXaxis()->SetMoreLogLabels();
   met_fakes_TT_stack_1->GetXaxis()->SetLabelFont(42);
   met_fakes_TT_stack_1->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_1->GetXaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_1->GetXaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_1->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_TT_stack_1->GetXaxis()->SetTitleFont(42);
   met_fakes_TT_stack_1->GetYaxis()->SetTitle("Events");
   met_fakes_TT_stack_1->GetYaxis()->SetLabelFont(42);
   met_fakes_TT_stack_1->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_1->GetYaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_1->GetYaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_1->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_TT_stack_1->GetYaxis()->SetTitleFont(42);
   met_fakes_TT_stack_1->GetZaxis()->SetLabelFont(42);
   met_fakes_TT_stack_1->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_TT_stack_1->GetZaxis()->SetLabelSize(0.05);
   met_fakes_TT_stack_1->GetZaxis()->SetTitleSize(0.06);
   met_fakes_TT_stack_1->GetZaxis()->SetTitleOffset(1);
   met_fakes_TT_stack_1->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_TT_stack_1,"");
   
   TH1D *met_fakes_DY_stack_2 = new TH1D("met_fakes_DY_stack_2","dummy",20,0,400);
   met_fakes_DY_stack_2->SetBinContent(2,33.30671);
   met_fakes_DY_stack_2->SetBinContent(3,18.64606);
   met_fakes_DY_stack_2->SetBinContent(4,11.19767);
   met_fakes_DY_stack_2->SetBinError(2,11.10366);
   met_fakes_DY_stack_2->SetBinError(3,8.338947);
   met_fakes_DY_stack_2->SetBinError(4,6.465234);
   met_fakes_DY_stack_2->SetEntries(21);

   ci = TColor::GetColor("#cccccc");
   met_fakes_DY_stack_2->SetFillColor(ci);
   met_fakes_DY_stack_2->SetMarkerStyle(0);
   met_fakes_DY_stack_2->SetMarkerSize(1.1);
   met_fakes_DY_stack_2->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_fakes_DY_stack_2->GetXaxis()->SetMoreLogLabels();
   met_fakes_DY_stack_2->GetXaxis()->SetLabelFont(42);
   met_fakes_DY_stack_2->GetXaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_2->GetXaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_2->GetXaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_2->GetXaxis()->SetTitleOffset(0.9);
   met_fakes_DY_stack_2->GetXaxis()->SetTitleFont(42);
   met_fakes_DY_stack_2->GetYaxis()->SetTitle("Events");
   met_fakes_DY_stack_2->GetYaxis()->SetLabelFont(42);
   met_fakes_DY_stack_2->GetYaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_2->GetYaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_2->GetYaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_2->GetYaxis()->SetTitleOffset(1.35);
   met_fakes_DY_stack_2->GetYaxis()->SetTitleFont(42);
   met_fakes_DY_stack_2->GetZaxis()->SetLabelFont(42);
   met_fakes_DY_stack_2->GetZaxis()->SetLabelOffset(0.007);
   met_fakes_DY_stack_2->GetZaxis()->SetLabelSize(0.05);
   met_fakes_DY_stack_2->GetZaxis()->SetTitleSize(0.06);
   met_fakes_DY_stack_2->GetZaxis()->SetTitleOffset(1);
   met_fakes_DY_stack_2->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_fakes_DY_stack_2,"");
   
   TH1D *met_prompt_ZZ_stack_3 = new TH1D("met_prompt_ZZ_stack_3","dummy",20,0,400);
   met_prompt_ZZ_stack_3->SetBinContent(2,22.58553);
   met_prompt_ZZ_stack_3->SetBinContent(3,25.82938);
   met_prompt_ZZ_stack_3->SetBinContent(4,7.512341);
   met_prompt_ZZ_stack_3->SetBinContent(5,3.156329);
   met_prompt_ZZ_stack_3->SetBinContent(6,2.762737);
   met_prompt_ZZ_stack_3->SetBinContent(7,2.37989);
   met_prompt_ZZ_stack_3->SetBinContent(8,0.7907544);
   met_prompt_ZZ_stack_3->SetBinContent(9,1.58962);
   met_prompt_ZZ_stack_3->SetBinContent(10,0.798074);
   met_prompt_ZZ_stack_3->SetBinError(2,2.991751);
   met_prompt_ZZ_stack_3->SetBinError(3,3.203951);
   met_prompt_ZZ_stack_3->SetBinError(4,1.723546);
   met_prompt_ZZ_stack_3->SetBinError(5,1.116125);
   met_prompt_ZZ_stack_3->SetBinError(6,1.044339);
   met_prompt_ZZ_stack_3->SetBinError(7,0.9716118);
   met_prompt_ZZ_stack_3->SetBinError(8,0.5591545);
   met_prompt_ZZ_stack_3->SetBinError(9,0.7948361);
   met_prompt_ZZ_stack_3->SetBinError(10,0.5643293);
   met_prompt_ZZ_stack_3->SetEntries(174);

   ci = TColor::GetColor("#00cc00");
   met_prompt_ZZ_stack_3->SetFillColor(ci);
   met_prompt_ZZ_stack_3->SetMarkerStyle(0);
   met_prompt_ZZ_stack_3->SetMarkerSize(1.1);
   met_prompt_ZZ_stack_3->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_prompt_ZZ_stack_3->GetXaxis()->SetMoreLogLabels();
   met_prompt_ZZ_stack_3->GetXaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_3->GetXaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_3->GetXaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_3->GetXaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_3->GetXaxis()->SetTitleOffset(0.9);
   met_prompt_ZZ_stack_3->GetXaxis()->SetTitleFont(42);
   met_prompt_ZZ_stack_3->GetYaxis()->SetTitle("Events");
   met_prompt_ZZ_stack_3->GetYaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_3->GetYaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_3->GetYaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_3->GetYaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_3->GetYaxis()->SetTitleOffset(1.35);
   met_prompt_ZZ_stack_3->GetYaxis()->SetTitleFont(42);
   met_prompt_ZZ_stack_3->GetZaxis()->SetLabelFont(42);
   met_prompt_ZZ_stack_3->GetZaxis()->SetLabelOffset(0.007);
   met_prompt_ZZ_stack_3->GetZaxis()->SetLabelSize(0.05);
   met_prompt_ZZ_stack_3->GetZaxis()->SetTitleSize(0.06);
   met_prompt_ZZ_stack_3->GetZaxis()->SetTitleOffset(1);
   met_prompt_ZZ_stack_3->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_prompt_ZZ_stack_3,"");
   
   TH1D *met_prompt_WZ_stack_4 = new TH1D("met_prompt_WZ_stack_4","dummy",20,0,400);
   met_prompt_WZ_stack_4->SetBinContent(2,220.8938);
   met_prompt_WZ_stack_4->SetBinContent(3,377.9064);
   met_prompt_WZ_stack_4->SetBinContent(4,204.3704);
   met_prompt_WZ_stack_4->SetBinContent(5,88.14696);
   met_prompt_WZ_stack_4->SetBinContent(6,48.39279);
   met_prompt_WZ_stack_4->SetBinContent(7,26.05823);
   met_prompt_WZ_stack_4->SetBinContent(8,15.10142);
   met_prompt_WZ_stack_4->SetBinContent(9,7.65059);
   met_prompt_WZ_stack_4->SetBinContent(10,4.709617);
   met_prompt_WZ_stack_4->SetBinContent(11,3.333231);
   met_prompt_WZ_stack_4->SetBinContent(12,2.349586);
   met_prompt_WZ_stack_4->SetBinContent(13,2.355275);
   met_prompt_WZ_stack_4->SetBinContent(14,1.380586);
   met_prompt_WZ_stack_4->SetBinContent(15,1.180377);
   met_prompt_WZ_stack_4->SetBinContent(16,1.178741);
   met_prompt_WZ_stack_4->SetBinContent(17,0.3899021);
   met_prompt_WZ_stack_4->SetBinContent(18,0.3963049);
   met_prompt_WZ_stack_4->SetBinContent(19,0.1959278);
   met_prompt_WZ_stack_4->SetBinContent(20,1.177543);
   met_prompt_WZ_stack_4->SetBinError(2,6.577418);
   met_prompt_WZ_stack_4->SetBinError(3,8.602609);
   met_prompt_WZ_stack_4->SetBinError(4,6.325504);
   met_prompt_WZ_stack_4->SetBinError(5,4.155558);
   met_prompt_WZ_stack_4->SetBinError(6,3.079355);
   met_prompt_WZ_stack_4->SetBinError(7,2.259701);
   met_prompt_WZ_stack_4->SetBinError(8,1.721072);
   met_prompt_WZ_stack_4->SetBinError(9,1.22513);
   met_prompt_WZ_stack_4->SetBinError(10,0.9613896);
   met_prompt_WZ_stack_4->SetBinError(11,0.8084575);
   met_prompt_WZ_stack_4->SetBinError(12,0.6782843);
   met_prompt_WZ_stack_4->SetBinError(13,0.6799678);
   met_prompt_WZ_stack_4->SetBinError(14,0.5218334);
   met_prompt_WZ_stack_4->SetBinError(15,0.4819003);
   met_prompt_WZ_stack_4->SetBinError(16,0.48123);
   met_prompt_WZ_stack_4->SetBinError(17,0.2757055);
   met_prompt_WZ_stack_4->SetBinError(18,0.2802299);
   met_prompt_WZ_stack_4->SetBinError(19,0.1959278);
   met_prompt_WZ_stack_4->SetBinError(20,0.4807407);
   met_prompt_WZ_stack_4->SetEntries(5147);

   ci = TColor::GetColor("#ffcc00");
   met_prompt_WZ_stack_4->SetFillColor(ci);
   met_prompt_WZ_stack_4->SetMarkerStyle(0);
   met_prompt_WZ_stack_4->SetMarkerSize(1.1);
   met_prompt_WZ_stack_4->GetXaxis()->SetTitle("p_{T}^{miss}  (GeV)");
   met_prompt_WZ_stack_4->GetXaxis()->SetMoreLogLabels();
   met_prompt_WZ_stack_4->GetXaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   met_prompt_WZ_stack_4->GetXaxis()->SetTitleFont(42);
   met_prompt_WZ_stack_4->GetYaxis()->SetTitle("Events");
   met_prompt_WZ_stack_4->GetYaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   met_prompt_WZ_stack_4->GetYaxis()->SetTitleFont(42);
   met_prompt_WZ_stack_4->GetZaxis()->SetLabelFont(42);
   met_prompt_WZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   met_prompt_WZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   met_prompt_WZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   met_prompt_WZ_stack_4->GetZaxis()->SetTitleOffset(1);
   met_prompt_WZ_stack_4->GetZaxis()->SetTitleFont(42);
   met_stack->Add(met_prompt_WZ_stack_4,"");
   met_stack->Draw("same hist");
   
   TH1D *met_total__6 = new TH1D("met_total__6","dummy",20,0,400);
   met_total__6->SetBinContent(2,283.0012);
   met_total__6->SetBinContent(3,434.8497);
   met_total__6->SetBinContent(4,233.9956);
   met_total__6->SetBinContent(5,99.16239);
   met_total__6->SetBinContent(6,56.3404);
   met_total__6->SetBinContent(7,30.02646);
   met_total__6->SetBinContent(8,17.61801);
   met_total__6->SetBinContent(9,9.770253);
   met_total__6->SetBinContent(10,6.37071);
   met_total__6->SetBinContent(11,3.768299);
   met_total__6->SetBinContent(12,2.634722);
   met_total__6->SetBinContent(13,2.355275);
   met_total__6->SetBinContent(14,1.664387);
   met_total__6->SetBinContent(15,1.180377);
   met_total__6->SetBinContent(16,1.178741);
   met_total__6->SetBinContent(17,0.3899021);
   met_total__6->SetBinContent(18,0.3963049);
   met_total__6->SetBinContent(19,0.1959278);
   met_total__6->SetBinContent(20,1.177543);
   met_total__6->SetBinError(2,13.28167);
   met_total__6->SetBinError(3,12.4762);
   met_total__6->SetBinError(4,9.29851);
   met_total__6->SetBinError(5,4.434831);
   met_total__6->SetBinError(6,3.370575);
   met_total__6->SetBinError(7,2.505933);
   met_total__6->SetBinError(8,1.87696);
   met_total__6->SetBinError(9,1.494273);
   met_total__6->SetBinError(10,1.169139);
   met_total__6->SetBinError(11,0.8465827);
   met_total__6->SetBinError(12,0.7076164);
   met_total__6->SetBinError(13,0.6799678);
   met_total__6->SetBinError(14,0.559094);
   met_total__6->SetBinError(15,0.4819003);
   met_total__6->SetBinError(16,0.48123);
   met_total__6->SetBinError(17,0.2757055);
   met_total__6->SetBinError(18,0.2802299);
   met_total__6->SetBinError(19,0.1959278);
   met_total__6->SetBinError(20,0.4807407);
   met_total__6->SetMinimum(0);
   met_total__6->SetMaximum(585.0353);
   met_total__6->SetEntries(5688);
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
   283.0012,
   434.8497,
   233.9956,
   99.16239,
   56.3404,
   30.02646,
   17.61801,
   9.770253,
   6.37071,
   3.768299,
   2.634722,
   2.355275,
   1.664387,
   1.180377,
   1.178741,
   0.3899021,
   0.3963049,
   0.1959278,
   1.177543};
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
   43.22732,
   11.67913,
   12.74095,
   3.550148,
   9.271595,
   1.546735,
   1.74977,
   1.221774,
   0.2556662,
   1.258506,
   0.3493565,
   0.6689666,
   0.6634952,
   0.2778586,
   0.1967041,
   0.009735615,
   0.02292843,
   0.003898716,
   0.02423652};
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
   13.3706,
   17.28018,
   15.36768,
   7.058297,
   3.0238,
   2.476695,
   1.15979,
   0.518992,
   1.878686,
   1.118919,
   0.7515654,
   0.2041267,
   0.2956568,
   0.2478882,
   0.02406437,
   0.4372051,
   0.1973051,
   0.003974681,
   0.02468337};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,met_total_errors_fx3006,met_total_errors_fy3006,met_total_errors_felx3006,met_total_errors_fehx3006,met_total_errors_fely3006,met_total_errors_fehy3006);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_total_errors3006 = new TH1F("Graph_met_total_errors3006","Graph",100,0,438);
   Graph_met_total_errors3006->SetMinimum(0.1728262);
   Graph_met_total_errors3006->SetMaximum(497.3237);
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
   296,
   422,
   223,
   107,
   52,
   31,
   11,
   17,
   11,
   8,
   4,
   4,
   3,
   2,
   1,
   1,
   0,
   0,
   4};
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
   17.1953,
   20.53494,
   14.9223,
   10.3281,
   7.187977,
   5.537671,
   3.265636,
   4.082258,
   3.265636,
   2.768432,
   1.914367,
   1.914367,
   1.632727,
   1.29183,
   0.8272525,
   0.8272525,
   0,
   0,
   1.914367};
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
   18.22443,
   21.55934,
   15.95586,
   11.37657,
   8.257518,
   6.627738,
   4.416609,
   5.203825,
   4.416609,
   3.94522,
   3.162815,
   3.162815,
   2.918242,
   2.63791,
   2.29957,
   2.29957,
   1.841055,
   1.841055,
   3.162815};
   grae = new TGraphAsymmErrors(20,met_data_graph_fx3007,met_data_graph_fy3007,met_data_graph_felx3007,met_data_graph_fehx3007,met_data_graph_fely3007,met_data_graph_fehy3007);
   grae->SetName("met_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_data_graph3007 = new TH1F("Graph_met_data_graph3007","Graph",100,0,440);
   Graph_met_data_graph3007->SetMinimum(0);
   Graph_met_data_graph3007->SetMaximum(487.9153);
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
   entry=leg->AddEntry("met_prompt_WZ_stack_4","WZ","F");

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
   entry=leg->AddEntry("met_prompt_ZZ_stack_3","qqZZ","F");

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
   entry=leg->AddEntry("met_fakes_DY_stack_2","Fakes DY","F");

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
   entry=leg->AddEntry("met_fakes_TT_stack_1","Fakes TT","F");

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
   met_total__7->SetEntries(5708);

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
   0.1527461,
   0.02685785,
   0.05444952,
   0.03580135,
   0.1645639,
   0.05151241,
   0.09931714,
   0.1250504,
   0.04013151,
   0.3339718,
   0.1325971,
   0.2840291,
   0.3986424,
   0.2353981,
   0.1668764,
   0.02496938,
   0.05785553,
   0.01989874,
   0.02058227};
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
   0.04724573,
   0.03973828,
   0.06567507,
   0.07117917,
   0.05367018,
   0.08248373,
   0.06582979,
   0.05311961,
   0.2948943,
   0.2969294,
   0.2852542,
   0.08666787,
   0.1776371,
   0.2100076,
   0.02041532,
   1.12132,
   0.4978619,
   0.02028646,
   0.02096175};
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
   met_total__8->SetEntries(5708);

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
   1.045932,
   0.9704502,
   0.9530094,
   1.079038,
   0.9229611,
   1.032423,
   0.6243612,
   1.739975,
   1.726652,
   2.122974,
   1.518187,
   1.698316,
   1.802465,
   1.694374,
   0.8483626,
   2.564746,
   0,
   0,
   3.396903};
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
   0.0607605,
   0.04722307,
   0.06377171,
   0.1041534,
   0.1275812,
   0.1844264,
   0.1853579,
   0.4178253,
   0.5126016,
   0.7346636,
   0.7265918,
   0.8127999,
   0.9809779,
   1.094421,
   0.7018101,
   2.121693,
   0,
   0,
   1.62573};
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
   0.064397,
   0.04957883,
   0.06818874,
   0.1147267,
   0.1465648,
   0.2207299,
   0.2506872,
   0.5326193,
   0.693268,
   1.04695,
   1.200436,
   1.342864,
   1.753344,
   2.234803,
   1.950869,
   5.897813,
   4.645552,
   9.396598,
   2.685944};
   grae = new TGraphAsymmErrors(20,data_div_fx3010,data_div_fy3010,data_div_felx3010,data_div_fehx3010,data_div_fely3010,data_div_fehy3010);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3010 = new TH1F("Graph_data_div3010","Graph",100,0,440);
   Graph_data_div3010->SetMinimum(0);
   Graph_data_div3010->SetMaximum(487.9153);
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
