void met()
{
//=========Macro generated from canvas: met_canvas/met
//=========  (Wed Jul 12 04:36:47 2023) by ROOT version 6.24/07
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
   pad1->Range(-92.3077,-12.09193,420.5128,471.5851);
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
   met_total__5->SetBinContent(2,241.5735);
   met_total__5->SetBinContent(3,348.4552);
   met_total__5->SetBinContent(4,163.8956);
   met_total__5->SetBinContent(5,74.79175);
   met_total__5->SetBinContent(6,39.58223);
   met_total__5->SetBinContent(7,19.78045);
   met_total__5->SetBinContent(8,9.606061);
   met_total__5->SetBinContent(9,5.411506);
   met_total__5->SetBinContent(10,3.461396);
   met_total__5->SetBinContent(11,4.38178);
   met_total__5->SetBinContent(12,2.070783);
   met_total__5->SetBinContent(13,1.337346);
   met_total__5->SetBinContent(14,0.7681223);
   met_total__5->SetBinContent(15,1.110438);
   met_total__5->SetBinContent(16,0.7767765);
   met_total__5->SetBinContent(18,0.1904654);
   met_total__5->SetBinContent(19,0.3827011);
   met_total__5->SetBinContent(20,0.7878186);
   met_total__5->SetBinError(2,16.54466);
   met_total__5->SetBinError(3,15.55674);
   met_total__5->SetBinError(4,6.684446);
   met_total__5->SetBinError(5,3.765233);
   met_total__5->SetBinError(6,4.429394);
   met_total__5->SetBinError(7,1.911968);
   met_total__5->SetBinError(8,1.375286);
   met_total__5->SetBinError(9,1.009145);
   met_total__5->SetBinError(10,0.8164117);
   met_total__5->SetBinError(11,0.9605432);
   met_total__5->SetBinError(12,0.6264444);
   met_total__5->SetBinError(13,0.5056287);
   met_total__5->SetBinError(14,0.3841871);
   met_total__5->SetBinError(15,0.4570644);
   met_total__5->SetBinError(16,0.3884876);
   met_total__5->SetBinError(18,0.1904654);
   met_total__5->SetBinError(19,0.2706683);
   met_total__5->SetBinError(20,0.393974);
   met_total__5->SetMinimum(0);
   met_total__5->SetMaximum(442.5645);
   met_total__5->SetEntries(4215);
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
   met_stack_stack_2->SetMaximum(365.8779);
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
   met_fakes_VV_stack_1->SetBinContent(3,0.4018732);
   met_fakes_VV_stack_1->SetBinContent(6,0.4098757);
   met_fakes_VV_stack_1->SetBinError(3,0.2841772);
   met_fakes_VV_stack_1->SetBinError(6,0.2898299);
   met_fakes_VV_stack_1->SetEntries(8);

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
   met_fakes_TT_stack_2->SetBinContent(2,4.044683);
   met_fakes_TT_stack_2->SetBinContent(3,9.814593);
   met_fakes_TT_stack_2->SetBinContent(4,9.384549);
   met_fakes_TT_stack_2->SetBinContent(5,6.135954);
   met_fakes_TT_stack_2->SetBinContent(6,2.783625);
   met_fakes_TT_stack_2->SetBinContent(7,2.110378);
   met_fakes_TT_stack_2->SetBinContent(8,0.4159752);
   met_fakes_TT_stack_2->SetBinContent(9,0.412481);
   met_fakes_TT_stack_2->SetBinContent(11,0.2944654);
   met_fakes_TT_stack_2->SetBinContent(12,0.1411889);
   met_fakes_TT_stack_2->SetBinContent(15,0.132564);
   met_fakes_TT_stack_2->SetBinError(2,0.7511751);
   met_fakes_TT_stack_2->SetBinError(3,1.173394);
   met_fakes_TT_stack_2->SetBinError(4,1.163126);
   met_fakes_TT_stack_2->SetBinError(5,0.9401511);
   met_fakes_TT_stack_2->SetBinError(6,0.6522605);
   met_fakes_TT_stack_2->SetBinError(7,0.5450113);
   met_fakes_TT_stack_2->SetBinError(8,0.2401678);
   met_fakes_TT_stack_2->SetBinError(9,0.2381488);
   met_fakes_TT_stack_2->SetBinError(11,0.208219);
   met_fakes_TT_stack_2->SetBinError(12,0.1411889);
   met_fakes_TT_stack_2->SetBinError(15,0.132564);
   met_fakes_TT_stack_2->SetEntries(266);

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
   met_fakes_DY_stack_3->SetBinContent(2,65.37189);
   met_fakes_DY_stack_3->SetBinContent(3,50.66659);
   met_fakes_DY_stack_3->SetBinContent(4,3.680921);
   met_fakes_DY_stack_3->SetBinContent(6,3.57414);
   met_fakes_DY_stack_3->SetBinError(2,15.41142);
   met_fakes_DY_stack_3->SetBinError(3,13.5422);
   met_fakes_DY_stack_3->SetBinError(4,3.680921);
   met_fakes_DY_stack_3->SetBinError(6,3.57414);
   met_fakes_DY_stack_3->SetEntries(38);

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
   met_prompt_ZZ_stack_4->SetBinContent(2,15.00655);
   met_prompt_ZZ_stack_4->SetBinContent(3,12.80848);
   met_prompt_ZZ_stack_4->SetBinContent(4,5.785265);
   met_prompt_ZZ_stack_4->SetBinContent(5,1.175219);
   met_prompt_ZZ_stack_4->SetBinContent(6,0.381096);
   met_prompt_ZZ_stack_4->SetBinContent(8,0.3813852);
   met_prompt_ZZ_stack_4->SetBinContent(11,0.4078475);
   met_prompt_ZZ_stack_4->SetBinError(2,2.40332);
   met_prompt_ZZ_stack_4->SetBinError(3,2.230012);
   met_prompt_ZZ_stack_4->SetBinError(4,1.49382);
   met_prompt_ZZ_stack_4->SetBinError(5,0.6786408);
   met_prompt_ZZ_stack_4->SetBinError(6,0.381096);
   met_prompt_ZZ_stack_4->SetBinError(8,0.3813852);
   met_prompt_ZZ_stack_4->SetBinError(11,0.4078475);
   met_prompt_ZZ_stack_4->SetEntries(97);

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
   met_prompt_WZ_stack_5->SetBinContent(2,157.1504);
   met_prompt_WZ_stack_5->SetBinContent(3,274.7636);
   met_prompt_WZ_stack_5->SetBinContent(4,145.0449);
   met_prompt_WZ_stack_5->SetBinContent(5,67.48058);
   met_prompt_WZ_stack_5->SetBinContent(6,32.43349);
   met_prompt_WZ_stack_5->SetBinContent(7,17.67007);
   met_prompt_WZ_stack_5->SetBinContent(8,8.808701);
   met_prompt_WZ_stack_5->SetBinContent(9,4.999025);
   met_prompt_WZ_stack_5->SetBinContent(10,3.461396);
   met_prompt_WZ_stack_5->SetBinContent(11,3.679467);
   met_prompt_WZ_stack_5->SetBinContent(12,1.929594);
   met_prompt_WZ_stack_5->SetBinContent(13,1.337346);
   met_prompt_WZ_stack_5->SetBinContent(14,0.7681223);
   met_prompt_WZ_stack_5->SetBinContent(15,0.9778739);
   met_prompt_WZ_stack_5->SetBinContent(16,0.7767765);
   met_prompt_WZ_stack_5->SetBinContent(18,0.1904654);
   met_prompt_WZ_stack_5->SetBinContent(19,0.3827011);
   met_prompt_WZ_stack_5->SetBinContent(20,0.7878186);
   met_prompt_WZ_stack_5->SetBinError(2,5.465679);
   met_prompt_WZ_stack_5->SetBinError(3,7.224301);
   met_prompt_WZ_stack_5->SetBinError(4,5.248646);
   met_prompt_WZ_stack_5->SetBinError(5,3.582254);
   met_prompt_WZ_stack_5->SetBinError(6,2.488046);
   met_prompt_WZ_stack_5->SetBinError(7,1.832644);
   met_prompt_WZ_stack_5->SetBinError(8,1.299337);
   met_prompt_WZ_stack_5->SetBinError(9,0.9806422);
   met_prompt_WZ_stack_5->SetBinError(10,0.8164117);
   met_prompt_WZ_stack_5->SetBinError(11,0.8443628);
   met_prompt_WZ_stack_5->SetBinError(12,0.6103263);
   met_prompt_WZ_stack_5->SetBinError(13,0.5056287);
   met_prompt_WZ_stack_5->SetBinError(14,0.3841871);
   met_prompt_WZ_stack_5->SetBinError(15,0.4374182);
   met_prompt_WZ_stack_5->SetBinError(16,0.3884876);
   met_prompt_WZ_stack_5->SetBinError(18,0.1904654);
   met_prompt_WZ_stack_5->SetBinError(19,0.2706683);
   met_prompt_WZ_stack_5->SetBinError(20,0.393974);
   met_prompt_WZ_stack_5->SetEntries(3806);

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
   met_total__6->SetBinContent(2,241.5735);
   met_total__6->SetBinContent(3,348.4552);
   met_total__6->SetBinContent(4,163.8956);
   met_total__6->SetBinContent(5,74.79175);
   met_total__6->SetBinContent(6,39.58223);
   met_total__6->SetBinContent(7,19.78045);
   met_total__6->SetBinContent(8,9.606061);
   met_total__6->SetBinContent(9,5.411506);
   met_total__6->SetBinContent(10,3.461396);
   met_total__6->SetBinContent(11,4.38178);
   met_total__6->SetBinContent(12,2.070783);
   met_total__6->SetBinContent(13,1.337346);
   met_total__6->SetBinContent(14,0.7681223);
   met_total__6->SetBinContent(15,1.110438);
   met_total__6->SetBinContent(16,0.7767765);
   met_total__6->SetBinContent(18,0.1904654);
   met_total__6->SetBinContent(19,0.3827011);
   met_total__6->SetBinContent(20,0.7878186);
   met_total__6->SetBinError(2,16.54466);
   met_total__6->SetBinError(3,15.55674);
   met_total__6->SetBinError(4,6.684446);
   met_total__6->SetBinError(5,3.765233);
   met_total__6->SetBinError(6,4.429394);
   met_total__6->SetBinError(7,1.911968);
   met_total__6->SetBinError(8,1.375286);
   met_total__6->SetBinError(9,1.009145);
   met_total__6->SetBinError(10,0.8164117);
   met_total__6->SetBinError(11,0.9605432);
   met_total__6->SetBinError(12,0.6264444);
   met_total__6->SetBinError(13,0.5056287);
   met_total__6->SetBinError(14,0.3841871);
   met_total__6->SetBinError(15,0.4570644);
   met_total__6->SetBinError(16,0.3884876);
   met_total__6->SetBinError(18,0.1904654);
   met_total__6->SetBinError(19,0.2706683);
   met_total__6->SetBinError(20,0.393974);
   met_total__6->SetMinimum(0);
   met_total__6->SetMaximum(442.5645);
   met_total__6->SetEntries(4215);
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
   
   Double_t met_total_errors_fx3006[18] = {
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
   350,
   370,
   390};
   Double_t met_total_errors_fy3006[18] = {
   241.5735,
   348.4552,
   163.8956,
   74.79175,
   39.58223,
   19.78045,
   9.606061,
   5.411506,
   3.461396,
   4.38178,
   2.070783,
   1.337346,
   0.7681223,
   1.110438,
   0.7767765,
   0.1904654,
   0.3827011,
   0.7878186};
   Double_t met_total_errors_felx3006[18] = {
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
   Double_t met_total_errors_fely3006[18] = {
   45.24802,
   29.90772,
   10.23819,
   5.001455,
   6.896638,
   1.476518,
   1.249121,
   0.7894931,
   0.3911931,
   0.6380638,
   0.6145406,
   0.5622113,
   0.02710743,
   0.870339,
   0.513066,
   0.1905784,
   0.3907077,
   0.02937684};
   Double_t met_total_errors_fehx3006[18] = {
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
   Double_t met_total_errors_fehy3006[18] = {
   25.25224,
   27.0741,
   14.79721,
   3.857353,
   7.188271,
   1.40321,
   2.677498,
   0.3044952,
   0.9777622,
   0.6577919,
   0.2267431,
   0.05660055,
   0.8521777,
   0.4449822,
   0.8430894,
   0.3906679,
   0.1906705,
   0.029865};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,met_total_errors_fx3006,met_total_errors_fy3006,met_total_errors_felx3006,met_total_errors_fehx3006,met_total_errors_fely3006,met_total_errors_fehy3006);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_total_errors3006 = new TH1F("Graph_met_total_errors3006","Graph",100,0,438);
   Graph_met_total_errors3006->SetMinimum(-37.56173);
   Graph_met_total_errors3006->SetMaximum(413.083);
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
   211,
   316,
   165,
   81,
   36,
   18,
   10,
   9,
   6,
   2,
   2,
   3,
   0,
   1,
   1,
   2,
   1,
   0,
   5};
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
   14.51463,
   17.76736,
   12.83247,
   8.981565,
   5.972111,
   4.202964,
   3.108748,
   2.943511,
   2.379969,
   1.29183,
   1.29183,
   1.632727,
   0,
   0.8272525,
   0.8272525,
   1.29183,
   0.8272525,
   0,
   2.159724};
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
   15.54914,
   18.79556,
   13.8715,
   10.03728,
   7.055691,
   5.321116,
   4.267035,
   4.110286,
   3.583712,
   2.63791,
   2.63791,
   2.918242,
   1.841055,
   2.29957,
   2.29957,
   2.63791,
   2.29957,
   1.841055,
   3.382539};
   grae = new TGraphAsymmErrors(20,met_data_graph_fx3007,met_data_graph_fy3007,met_data_graph_felx3007,met_data_graph_fehx3007,met_data_graph_fely3007,met_data_graph_fehy3007);
   grae->SetName("met_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_data_graph3007 = new TH1F("Graph_met_data_graph3007","Graph",100,0,440);
   Graph_met_data_graph3007->SetMinimum(0);
   Graph_met_data_graph3007->SetMaximum(368.2751);
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
   met_total__7->SetBinContent(18,1);
   met_total__7->SetBinContent(19,1);
   met_total__7->SetBinContent(20,1);
   met_total__7->SetMinimum(0.5);
   met_total__7->SetMaximum(2);
   met_total__7->SetEntries(4235);

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
   
   Double_t met_total_errors_fx3008[18] = {
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
   350,
   370,
   390};
   Double_t met_total_errors_fy3008[18] = {
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
   Double_t met_total_errors_felx3008[18] = {
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
   Double_t met_total_errors_fely3008[18] = {
   0.1873054,
   0.08582948,
   0.06246776,
   0.06687174,
   0.1742357,
   0.07464533,
   0.1300347,
   0.1458916,
   0.113016,
   0.1456175,
   0.2967672,
   0.4203932,
   0.03529052,
   0.78378,
   0.6605066,
   1.000593,
   1.020921,
   0.03728883};
   Double_t met_total_errors_fehx3008[18] = {
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
   Double_t met_total_errors_fehy3008[18] = {
   0.1045323,
   0.07769751,
   0.09028435,
   0.05157458,
   0.1816035,
   0.07093924,
   0.2787301,
   0.05626811,
   0.2824762,
   0.1501198,
   0.1094963,
   0.04232303,
   1.10943,
   0.4007268,
   1.085369,
   2.051122,
   0.4982229,
   0.03790848};
   grae = new TGraphAsymmErrors(18,met_total_errors_fx3008,met_total_errors_fy3008,met_total_errors_felx3008,met_total_errors_fehx3008,met_total_errors_fely3008,met_total_errors_fehy3008);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(1001);
   grae->Draw("e2");
   
   Double_t met_total_errors_fx3009[18] = {
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
   350,
   370,
   390};
   Double_t met_total_errors_fy3009[18] = {
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
   Double_t met_total_errors_felx3009[18] = {
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
   Double_t met_total_errors_fely3009[18] = {
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
   Double_t met_total_errors_fehx3009[18] = {
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
   Double_t met_total_errors_fehy3009[18] = {
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
   grae = new TGraphAsymmErrors(18,met_total_errors_fx3009,met_total_errors_fy3009,met_total_errors_felx3009,met_total_errors_fehx3009,met_total_errors_fely3009,met_total_errors_fehy3009);
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
   met_total__8->SetBinContent(18,1);
   met_total__8->SetBinContent(19,1);
   met_total__8->SetBinContent(20,1);
   met_total__8->SetMinimum(0.5);
   met_total__8->SetMaximum(2);
   met_total__8->SetEntries(4235);

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
   0.8734401,
   0.9068599,
   1.006738,
   1.083007,
   0.9094991,
   0.9099895,
   1.041009,
   1.663123,
   1.733404,
   0.4564355,
   0.9658181,
   2.243248,
   0,
   0.9005457,
   1.287372,
   0,
   5.250297,
   0,
   6.346638};
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
   0.06008369,
   0.05098894,
   0.07829663,
   0.1200876,
   0.1508786,
   0.2124807,
   0.3236236,
   0.5439357,
   0.6875749,
   0.2948185,
   0.6238362,
   1.220871,
   0,
   0.7449786,
   1.064981,
   0,
   4.343321,
   0,
   2.741398};
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
   0.06436607,
   0.05393967,
   0.08463619,
   0.134203,
   0.178254,
   0.2690089,
   0.4442024,
   0.7595458,
   1.035337,
   0.602018,
   1.273871,
   2.182114,
   2.396825,
   2.070868,
   2.960401,
   0,
   12.07342,
   4.810686,
   4.293551};
   grae = new TGraphAsymmErrors(20,data_div_fx3010,data_div_fy3010,data_div_felx3010,data_div_fehx3010,data_div_fely3010,data_div_fehy3010);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3010 = new TH1F("Graph_data_div3010","Graph",100,0,440);
   Graph_data_div3010->SetMinimum(0);
   Graph_data_div3010->SetMaximum(368.2751);
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
