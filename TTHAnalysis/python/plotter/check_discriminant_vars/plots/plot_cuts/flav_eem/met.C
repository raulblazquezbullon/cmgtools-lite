void met()
{
//=========Macro generated from canvas: met_canvas/met
//=========  (Wed Jul 12 04:28:34 2023) by ROOT version 6.24/07
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
   pad1->Range(-92.3077,-7.358026,420.5128,286.963);
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
   met_total__5->SetBinContent(2,128.4949);
   met_total__5->SetBinContent(3,208.0639);
   met_total__5->SetBinContent(4,117.1647);
   met_total__5->SetBinContent(5,53.88487);
   met_total__5->SetBinContent(6,26.09671);
   met_total__5->SetBinContent(7,13.93832);
   met_total__5->SetBinContent(8,7.871823);
   met_total__5->SetBinContent(9,4.783221);
   met_total__5->SetBinContent(10,3.245796);
   met_total__5->SetBinContent(11,2.28753);
   met_total__5->SetBinContent(12,1.39898);
   met_total__5->SetBinContent(13,0.5607009);
   met_total__5->SetBinContent(14,0.7784321);
   met_total__5->SetBinContent(15,1.159996);
   met_total__5->SetBinContent(16,0.9869269);
   met_total__5->SetBinContent(17,0.7830241);
   met_total__5->SetBinContent(18,0.1929307);
   met_total__5->SetBinContent(19,0.3469418);
   met_total__5->SetBinContent(20,0.4034448);
   met_total__5->SetBinError(2,6.084046);
   met_total__5->SetBinError(3,7.939247);
   met_total__5->SetBinError(4,6.812859);
   met_total__5->SetBinError(5,3.186561);
   met_total__5->SetBinError(6,2.225025);
   met_total__5->SetBinError(7,1.664454);
   met_total__5->SetBinError(8,1.246452);
   met_total__5->SetBinError(9,0.9444777);
   met_total__5->SetBinError(10,0.7710789);
   met_total__5->SetBinError(11,0.6608497);
   met_total__5->SetBinError(12,0.5288707);
   met_total__5->SetBinError(13,0.323771);
   met_total__5->SetBinError(14,0.3896916);
   met_total__5->SetBinError(15,0.4742359);
   met_total__5->SetBinError(16,0.4418038);
   met_total__5->SetBinError(17,0.3919337);
   met_total__5->SetBinError(18,0.1929307);
   met_total__5->SetBinError(19,0.248512);
   met_total__5->SetBinError(20,0.2856859);
   met_total__5->SetMinimum(0);
   met_total__5->SetMaximum(269.3038);
   met_total__5->SetEntries(2969);
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
   met_stack_stack_2->SetMaximum(218.4671);
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
   met_fakes_VV_stack_1->SetBinContent(3,0.199151);
   met_fakes_VV_stack_1->SetBinError(3,0.199151);
   met_fakes_VV_stack_1->SetEntries(5);

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
   met_fakes_TT_stack_2->SetBinContent(2,2.609285);
   met_fakes_TT_stack_2->SetBinContent(3,5.773893);
   met_fakes_TT_stack_2->SetBinContent(4,4.6645);
   met_fakes_TT_stack_2->SetBinContent(5,3.570134);
   met_fakes_TT_stack_2->SetBinContent(6,2.51409);
   met_fakes_TT_stack_2->SetBinContent(7,0.9832539);
   met_fakes_TT_stack_2->SetBinContent(8,0.4322906);
   met_fakes_TT_stack_2->SetBinContent(9,0.5472618);
   met_fakes_TT_stack_2->SetBinContent(10,0.5619888);
   met_fakes_TT_stack_2->SetBinContent(19,0.1454182);
   met_fakes_TT_stack_2->SetBinError(2,0.5991072);
   met_fakes_TT_stack_2->SetBinError(3,0.8915722);
   met_fakes_TT_stack_2->SetBinError(4,0.8003888);
   met_fakes_TT_stack_2->SetBinError(5,0.7005429);
   met_fakes_TT_stack_2->SetBinError(6,0.5930342);
   met_fakes_TT_stack_2->SetBinError(7,0.3717979);
   met_fakes_TT_stack_2->SetBinError(8,0.2496715);
   met_fakes_TT_stack_2->SetBinError(9,0.2737019);
   met_fakes_TT_stack_2->SetBinError(10,0.2812185);
   met_fakes_TT_stack_2->SetBinError(19,0.1454182);
   met_fakes_TT_stack_2->SetEntries(162);

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
   met_fakes_DY_stack_3->SetBinContent(2,3.490909);
   met_fakes_DY_stack_3->SetBinContent(3,6.862008);
   met_fakes_DY_stack_3->SetBinContent(4,7.102883);
   met_fakes_DY_stack_3->SetBinError(2,3.490909);
   met_fakes_DY_stack_3->SetBinError(3,4.852838);
   met_fakes_DY_stack_3->SetBinError(4,5.023167);
   met_fakes_DY_stack_3->SetEntries(9);

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
   met_prompt_ZZ_stack_4->SetBinContent(2,9.735881);
   met_prompt_ZZ_stack_4->SetBinContent(3,13.4841);
   met_prompt_ZZ_stack_4->SetBinContent(4,5.298758);
   met_prompt_ZZ_stack_4->SetBinContent(5,1.486111);
   met_prompt_ZZ_stack_4->SetBinContent(6,0.7599538);
   met_prompt_ZZ_stack_4->SetBinContent(7,0.7993959);
   met_prompt_ZZ_stack_4->SetBinContent(8,0.3759388);
   met_prompt_ZZ_stack_4->SetBinError(2,1.910019);
   met_prompt_ZZ_stack_4->SetBinError(3,2.248065);
   met_prompt_ZZ_stack_4->SetBinError(4,1.416766);
   met_prompt_ZZ_stack_4->SetBinError(5,0.7433336);
   met_prompt_ZZ_stack_4->SetBinError(6,0.5374009);
   met_prompt_ZZ_stack_4->SetBinError(7,0.5654691);
   met_prompt_ZZ_stack_4->SetBinError(8,0.3759388);
   met_prompt_ZZ_stack_4->SetEntries(89);

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
   met_prompt_WZ_stack_5->SetBinContent(2,112.6588);
   met_prompt_WZ_stack_5->SetBinContent(3,181.7448);
   met_prompt_WZ_stack_5->SetBinContent(4,100.0986);
   met_prompt_WZ_stack_5->SetBinContent(5,48.82862);
   met_prompt_WZ_stack_5->SetBinContent(6,22.82266);
   met_prompt_WZ_stack_5->SetBinContent(7,12.15567);
   met_prompt_WZ_stack_5->SetBinContent(8,7.063594);
   met_prompt_WZ_stack_5->SetBinContent(9,4.235959);
   met_prompt_WZ_stack_5->SetBinContent(10,2.683807);
   met_prompt_WZ_stack_5->SetBinContent(11,2.28753);
   met_prompt_WZ_stack_5->SetBinContent(12,1.39898);
   met_prompt_WZ_stack_5->SetBinContent(13,0.5607009);
   met_prompt_WZ_stack_5->SetBinContent(14,0.7784321);
   met_prompt_WZ_stack_5->SetBinContent(15,1.159996);
   met_prompt_WZ_stack_5->SetBinContent(16,0.9869269);
   met_prompt_WZ_stack_5->SetBinContent(17,0.7830241);
   met_prompt_WZ_stack_5->SetBinContent(18,0.1929307);
   met_prompt_WZ_stack_5->SetBinContent(19,0.2015236);
   met_prompt_WZ_stack_5->SetBinContent(20,0.4034448);
   met_prompt_WZ_stack_5->SetBinError(2,4.56312);
   met_prompt_WZ_stack_5->SetBinError(3,5.795969);
   met_prompt_WZ_stack_5->SetBinError(4,4.30523);
   met_prompt_WZ_stack_5->SetBinError(5,3.018421);
   met_prompt_WZ_stack_5->SetBinError(6,2.076114);
   met_prompt_WZ_stack_5->SetBinError(7,1.520664);
   met_prompt_WZ_stack_5->SetBinError(8,1.161885);
   met_prompt_WZ_stack_5->SetBinError(9,0.9039499);
   met_prompt_WZ_stack_5->SetBinError(10,0.7179686);
   met_prompt_WZ_stack_5->SetBinError(11,0.6608497);
   met_prompt_WZ_stack_5->SetBinError(12,0.5288707);
   met_prompt_WZ_stack_5->SetBinError(13,0.323771);
   met_prompt_WZ_stack_5->SetBinError(14,0.3896916);
   met_prompt_WZ_stack_5->SetBinError(15,0.4742359);
   met_prompt_WZ_stack_5->SetBinError(16,0.4418038);
   met_prompt_WZ_stack_5->SetBinError(17,0.3919337);
   met_prompt_WZ_stack_5->SetBinError(18,0.1929307);
   met_prompt_WZ_stack_5->SetBinError(19,0.2015236);
   met_prompt_WZ_stack_5->SetBinError(20,0.2856859);
   met_prompt_WZ_stack_5->SetEntries(2704);

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
   met_total__6->SetBinContent(2,128.4949);
   met_total__6->SetBinContent(3,208.0639);
   met_total__6->SetBinContent(4,117.1647);
   met_total__6->SetBinContent(5,53.88487);
   met_total__6->SetBinContent(6,26.09671);
   met_total__6->SetBinContent(7,13.93832);
   met_total__6->SetBinContent(8,7.871823);
   met_total__6->SetBinContent(9,4.783221);
   met_total__6->SetBinContent(10,3.245796);
   met_total__6->SetBinContent(11,2.28753);
   met_total__6->SetBinContent(12,1.39898);
   met_total__6->SetBinContent(13,0.5607009);
   met_total__6->SetBinContent(14,0.7784321);
   met_total__6->SetBinContent(15,1.159996);
   met_total__6->SetBinContent(16,0.9869269);
   met_total__6->SetBinContent(17,0.7830241);
   met_total__6->SetBinContent(18,0.1929307);
   met_total__6->SetBinContent(19,0.3469418);
   met_total__6->SetBinContent(20,0.4034448);
   met_total__6->SetBinError(2,6.084046);
   met_total__6->SetBinError(3,7.939247);
   met_total__6->SetBinError(4,6.812859);
   met_total__6->SetBinError(5,3.186561);
   met_total__6->SetBinError(6,2.225025);
   met_total__6->SetBinError(7,1.664454);
   met_total__6->SetBinError(8,1.246452);
   met_total__6->SetBinError(9,0.9444777);
   met_total__6->SetBinError(10,0.7710789);
   met_total__6->SetBinError(11,0.6608497);
   met_total__6->SetBinError(12,0.5288707);
   met_total__6->SetBinError(13,0.323771);
   met_total__6->SetBinError(14,0.3896916);
   met_total__6->SetBinError(15,0.4742359);
   met_total__6->SetBinError(16,0.4418038);
   met_total__6->SetBinError(17,0.3919337);
   met_total__6->SetBinError(18,0.1929307);
   met_total__6->SetBinError(19,0.248512);
   met_total__6->SetBinError(20,0.2856859);
   met_total__6->SetMinimum(0);
   met_total__6->SetMaximum(269.3038);
   met_total__6->SetEntries(2969);
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
   128.4949,
   208.0639,
   117.1647,
   53.88487,
   26.09671,
   13.93832,
   7.871823,
   4.783221,
   3.245796,
   2.28753,
   1.39898,
   0.5607009,
   0.7784321,
   1.159996,
   0.9869269,
   0.7830241,
   0.1929307,
   0.3469418,
   0.4034448};
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
   17.38562,
   18.20302,
   12.77829,
   4.556432,
   4.433885,
   1.992453,
   1.094256,
   0.5066058,
   0.4869003,
   0.7631274,
   0.536162,
   0.3194657,
   0.2164132,
   0.371949,
   0.7003838,
   0.03768525,
   0.00892931,
   0.4935405,
   0.02651676};
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
   10.93197,
   17.46368,
   12.19822,
   4.160021,
   5.225099,
   1.678527,
   1.09716,
   1.234165,
   0.7926247,
   0.08234845,
   0.1939978,
   0.5332922,
   0.5827556,
   0.3833576,
   0.4420778,
   0.03837122,
   0.4031496,
   0.04652981,
   0.1479876};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,met_total_errors_fx3006,met_total_errors_fy3006,met_total_errors_felx3006,met_total_errors_fehx3006,met_total_errors_fely3006,met_total_errors_fehy3006);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_total_errors3006 = new TH1F("Graph_met_total_errors3006","Graph",100,0,438);
   Graph_met_total_errors3006->SetMinimum(-22.71402);
   Graph_met_total_errors3006->SetMaximum(248.095);
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
   132,
   188,
   116,
   43,
   24,
   11,
   10,
   8,
   3,
   5,
   2,
   1,
   0,
   1,
   0,
   2,
   0,
   0,
   1};
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
   11.47479,
   13.6994,
   10.75501,
   6.531962,
   4.864704,
   3.265636,
   3.108748,
   2.768432,
   1.632727,
   2.159724,
   1.29183,
   0.8272525,
   0,
   0.8272525,
   0,
   1.29183,
   0,
   0,
   0.8272525};
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
   12.51843,
   14.73595,
   11.80155,
   7.608436,
   5.967055,
   4.416609,
   4.267035,
   3.94522,
   2.918242,
   3.382539,
   2.63791,
   2.29957,
   1.841055,
   2.29957,
   1.841055,
   2.63791,
   1.841055,
   1.841055,
   2.29957};
   grae = new TGraphAsymmErrors(20,met_data_graph_fx3007,met_data_graph_fy3007,met_data_graph_felx3007,met_data_graph_fehx3007,met_data_graph_fely3007,met_data_graph_fehy3007);
   grae->SetName("met_data_graph");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_met_data_graph3007 = new TH1F("Graph_met_data_graph3007","Graph",100,0,440);
   Graph_met_data_graph3007->SetMinimum(0);
   Graph_met_data_graph3007->SetMaximum(223.0095);
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
   met_total__7->SetEntries(2989);

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
   0.1353021,
   0.08748762,
   0.1090626,
   0.08455867,
   0.1699021,
   0.1429479,
   0.1390092,
   0.1059131,
   0.1500095,
   0.3336032,
   0.383252,
   0.5697613,
   0.2780117,
   0.3206468,
   0.7096612,
   0.04812783,
   0.04628248,
   1.422545,
   0.06572587};
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
   0.08507712,
   0.08393419,
   0.1041117,
   0.07720204,
   0.2002206,
   0.1204254,
   0.1393781,
   0.2580196,
   0.2442004,
   0.03599884,
   0.1386708,
   0.9511171,
   0.7486274,
   0.3304818,
   0.4479337,
   0.04900389,
   2.089609,
   0.1341141,
   0.36681};
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
   met_total__8->SetEntries(2989);

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
   1.027278,
   0.9035685,
   0.9900589,
   0.7979977,
   0.9196563,
   0.7891914,
   1.270354,
   1.672513,
   0.9242725,
   2.185763,
   1.429613,
   1.783482,
   0,
   0.862072,
   0,
   2.5542,
   0,
   0,
   2.478654};
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
   0.08930158,
   0.06584225,
   0.09179388,
   0.1212207,
   0.1864106,
   0.234292,
   0.394921,
   0.5787799,
   0.5030281,
   0.9441293,
   0.9234081,
   1.47539,
   0,
   0.7131512,
   0,
   1.649796,
   0,
   0,
   2.050473};
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
   0.09742356,
   0.07082417,
   0.1007262,
   0.141198,
   0.2286516,
   0.3168682,
   0.5420645,
   0.8248041,
   0.8990837,
   1.478686,
   1.885595,
   4.101241,
   2.365081,
   1.982395,
   1.865442,
   3.368875,
   9.542572,
   5.306523,
   5.699837};
   grae = new TGraphAsymmErrors(20,data_div_fx3010,data_div_fy3010,data_div_felx3010,data_div_fehx3010,data_div_fely3010,data_div_fehy3010);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3010 = new TH1F("Graph_data_div3010","Graph",100,0,440);
   Graph_data_div3010->SetMinimum(0);
   Graph_data_div3010->SetMaximum(223.0095);
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
