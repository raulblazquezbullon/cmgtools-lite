void met()
{
//=========Macro generated from canvas: met_canvas/met
//=========  (Wed Jul 12 04:27:53 2023) by ROOT version 6.24/07
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
   pad1->Range(-92.3077,-6.650379,420.5128,259.3648);
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
   met_total__5->SetBinContent(2,126.3267);
   met_total__5->SetBinContent(3,168.6382);
   met_total__5->SetBinContent(4,81.6191);
   met_total__5->SetBinContent(5,41.99263);
   met_total__5->SetBinContent(6,19.42484);
   met_total__5->SetBinContent(7,9.194275);
   met_total__5->SetBinContent(8,6.271179);
   met_total__5->SetBinContent(9,2.77629);
   met_total__5->SetBinContent(10,1.29539);
   met_total__5->SetBinContent(11,1.701628);
   met_total__5->SetBinContent(12,1.329978);
   met_total__5->SetBinContent(13,1.066753);
   met_total__5->SetBinContent(16,0.1858827);
   met_total__5->SetBinContent(17,0.1967384);
   met_total__5->SetBinContent(20,0.5946143);
   met_total__5->SetBinError(2,10.24709);
   met_total__5->SetBinError(3,8.595842);
   met_total__5->SetBinError(4,3.858961);
   met_total__5->SetBinError(5,4.373674);
   met_total__5->SetBinError(6,1.90323);
   met_total__5->SetBinError(7,1.292271);
   met_total__5->SetBinError(8,1.093346);
   met_total__5->SetBinError(9,0.7174271);
   met_total__5->SetBinError(10,0.4899307);
   met_total__5->SetBinError(11,0.5703334);
   met_total__5->SetBinError(12,0.503179);
   met_total__5->SetBinError(13,0.4392695);
   met_total__5->SetBinError(16,0.1858827);
   met_total__5->SetBinError(17,0.1967384);
   met_total__5->SetBinError(20,0.3433549);
   met_total__5->SetMinimum(0);
   met_total__5->SetMaximum(243.4039);
   met_total__5->SetEntries(2341);
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
   met_stack_stack_2->SetMaximum(177.0701);
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
   met_fakes_VV_stack_1->SetBinContent(3,0.399561);
   met_fakes_VV_stack_1->SetBinError(3,0.2826572);
   met_fakes_VV_stack_1->SetEntries(6);

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
   met_fakes_TT_stack_2->SetBinContent(2,1.079716);
   met_fakes_TT_stack_2->SetBinContent(3,3.538565);
   met_fakes_TT_stack_2->SetBinContent(4,2.527701);
   met_fakes_TT_stack_2->SetBinContent(5,1.192758);
   met_fakes_TT_stack_2->SetBinContent(6,1.386235);
   met_fakes_TT_stack_2->SetBinContent(7,0.69089);
   met_fakes_TT_stack_2->SetBinContent(11,0.1351865);
   met_fakes_TT_stack_2->SetBinContent(13,0.1314126);
   met_fakes_TT_stack_2->SetBinError(2,0.3823818);
   met_fakes_TT_stack_2->SetBinError(3,0.6947924);
   met_fakes_TT_stack_2->SetBinError(4,0.6018308);
   met_fakes_TT_stack_2->SetBinError(5,0.3977362);
   met_fakes_TT_stack_2->SetBinError(6,0.4390547);
   met_fakes_TT_stack_2->SetBinError(7,0.3092007);
   met_fakes_TT_stack_2->SetBinError(11,0.1351865);
   met_fakes_TT_stack_2->SetBinError(13,0.1314126);
   met_fakes_TT_stack_2->SetEntries(86);

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
   met_fakes_DY_stack_3->SetBinContent(2,24.35836);
   met_fakes_DY_stack_3->SetBinContent(3,13.43054);
   met_fakes_DY_stack_3->SetBinContent(5,3.483928);
   met_fakes_DY_stack_3->SetBinError(2,9.209912);
   met_fakes_DY_stack_3->SetBinError(3,6.718552);
   met_fakes_DY_stack_3->SetBinError(5,3.483928);
   met_fakes_DY_stack_3->SetEntries(16);

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
   met_prompt_ZZ_stack_4->SetBinContent(2,10.29823);
   met_prompt_ZZ_stack_4->SetBinContent(3,5.480555);
   met_prompt_ZZ_stack_4->SetBinContent(4,1.438561);
   met_prompt_ZZ_stack_4->SetBinContent(5,0.3581985);
   met_prompt_ZZ_stack_4->SetBinContent(6,0.7423665);
   met_prompt_ZZ_stack_4->SetBinError(2,1.948507);
   met_prompt_ZZ_stack_4->SetBinError(3,1.416281);
   met_prompt_ZZ_stack_4->SetBinError(4,0.7193421);
   met_prompt_ZZ_stack_4->SetBinError(5,0.3581985);
   met_prompt_ZZ_stack_4->SetBinError(6,0.5249401);
   met_prompt_ZZ_stack_4->SetEntries(54);

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
   met_prompt_WZ_stack_5->SetBinContent(2,90.59039);
   met_prompt_WZ_stack_5->SetBinContent(3,145.789);
   met_prompt_WZ_stack_5->SetBinContent(4,77.65284);
   met_prompt_WZ_stack_5->SetBinContent(5,36.95775);
   met_prompt_WZ_stack_5->SetBinContent(6,17.29624);
   met_prompt_WZ_stack_5->SetBinContent(7,8.503385);
   met_prompt_WZ_stack_5->SetBinContent(8,6.271179);
   met_prompt_WZ_stack_5->SetBinContent(9,2.77629);
   met_prompt_WZ_stack_5->SetBinContent(10,1.29539);
   met_prompt_WZ_stack_5->SetBinContent(11,1.566441);
   met_prompt_WZ_stack_5->SetBinContent(12,1.329978);
   met_prompt_WZ_stack_5->SetBinContent(13,0.9353403);
   met_prompt_WZ_stack_5->SetBinContent(16,0.1858827);
   met_prompt_WZ_stack_5->SetBinContent(17,0.1967384);
   met_prompt_WZ_stack_5->SetBinContent(20,0.5946143);
   met_prompt_WZ_stack_5->SetBinError(2,4.029579);
   met_prompt_WZ_stack_5->SetBinError(3,5.116744);
   met_prompt_WZ_stack_5->SetBinError(4,3.743251);
   met_prompt_WZ_stack_5->SetBinError(5,2.589358);
   met_prompt_WZ_stack_5->SetBinError(6,1.775937);
   met_prompt_WZ_stack_5->SetBinError(7,1.254735);
   met_prompt_WZ_stack_5->SetBinError(8,1.093346);
   met_prompt_WZ_stack_5->SetBinError(9,0.7174271);
   met_prompt_WZ_stack_5->SetBinError(10,0.4899307);
   met_prompt_WZ_stack_5->SetBinError(11,0.5540801);
   met_prompt_WZ_stack_5->SetBinError(12,0.503179);
   met_prompt_WZ_stack_5->SetBinError(13,0.419152);
   met_prompt_WZ_stack_5->SetBinError(16,0.1858827);
   met_prompt_WZ_stack_5->SetBinError(17,0.1967384);
   met_prompt_WZ_stack_5->SetBinError(20,0.3433549);
   met_prompt_WZ_stack_5->SetEntries(2179);

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
   met_total__6->SetBinContent(2,126.3267);
   met_total__6->SetBinContent(3,168.6382);
   met_total__6->SetBinContent(4,81.6191);
   met_total__6->SetBinContent(5,41.99263);
   met_total__6->SetBinContent(6,19.42484);
   met_total__6->SetBinContent(7,9.194275);
   met_total__6->SetBinContent(8,6.271179);
   met_total__6->SetBinContent(9,2.77629);
   met_total__6->SetBinContent(10,1.29539);
   met_total__6->SetBinContent(11,1.701628);
   met_total__6->SetBinContent(12,1.329978);
   met_total__6->SetBinContent(13,1.066753);
   met_total__6->SetBinContent(16,0.1858827);
   met_total__6->SetBinContent(17,0.1967384);
   met_total__6->SetBinContent(20,0.5946143);
   met_total__6->SetBinError(2,10.24709);
   met_total__6->SetBinError(3,8.595842);
   met_total__6->SetBinError(4,3.858961);
   met_total__6->SetBinError(5,4.373674);
   met_total__6->SetBinError(6,1.90323);
   met_total__6->SetBinError(7,1.292271);
   met_total__6->SetBinError(8,1.093346);
   met_total__6->SetBinError(9,0.7174271);
   met_total__6->SetBinError(10,0.4899307);
   met_total__6->SetBinError(11,0.5703334);
   met_total__6->SetBinError(12,0.503179);
   met_total__6->SetBinError(13,0.4392695);
   met_total__6->SetBinError(16,0.1858827);
   met_total__6->SetBinError(17,0.1967384);
   met_total__6->SetBinError(20,0.3433549);
   met_total__6->SetMinimum(0);
   met_total__6->SetMaximum(243.4039);
   met_total__6->SetEntries(2341);
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
   
   Double_t met_total_errors_fx3006[15] = {
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
   310,
   330,
   390};
   Double_t met_total_errors_fy3006[15] = {
   126.3267,
   168.6382,
   81.6191,
   41.99263,
   19.42484,
   9.194275,
   6.271179,
   2.77629,
   1.29539,
   1.701628,
   1.329978,
   1.066753,
   0.1858827,
   0.1967384,
   0.5946143};
   Double_t met_total_errors_felx3006[15] = {
   10,
   10,
   10,
   10,
   10,
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
   Double_t met_total_errors_fely3006[15] = {
   22.29159,
   16.87949,
   10.06943,
   9.165457,
   3.94343,
   1.48526,
   1.012178,
   0.6679206,
   0.2382053,
   0.5096976,
   0.1845472,
   0.05644823,
   0.4918791,
   0.008974601,
   0.04059585};
   Double_t met_total_errors_fehx3006[15] = {
   10,
   10,
   10,
   10,
   10,
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
   Double_t met_total_errors_fehy3006[15] = {
   17.28016,
   18.19118,
   11.73942,
   7.489466,
   6.232933,
   1.329412,
   1.024902,
   0.6638304,
   0.6955421,
   0.2009147,
   0.4610567,
   0.4324758,
   0.009038425,
   0.4918855,
   0.04205213};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,met_total_errors_fx3006,met_total_errors_fy3006,met_total_errors_felx3006,met_total_errors_fehx3006,met_total_errors_fely3006,met_total_errors_fehy3006);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_met_total_errors3006 = new TH1F("Graph_met_total_errors3006","Graph",100,0,438);
   Graph_met_total_errors3006->SetMinimum(-19.01953);
   Graph_met_total_errors3006->SetMaximum(205.5429);
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
   113,
   169,
   77,
   41,
   17,
   12,
   12,
   4,
   5,
   0,
   0,
   2,
   1,
   1,
   1,
   0,
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
   10.61461,
   12.9874,
   8.756044,
   6.377022,
   4.082258,
   3.415326,
   3.415326,
   1.914367,
   2.159724,
   0,
   0,
   1.29183,
   0.8272525,
   0.8272525,
   0.8272525,
   0,
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
   11.66178,
   14.02596,
   9.813185,
   7.45534,
   5.203825,
   4.559911,
   4.559911,
   3.162815,
   3.382539,
   1.841055,
   1.841055,
   2.63791,
   2.29957,
   2.29957,
   2.29957,
   1.841055,
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
   Graph_met_data_graph3007->SetMaximum(201.3286);
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
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
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
   met_total__7->SetBinContent(16,1);
   met_total__7->SetBinContent(17,1);
   met_total__7->SetBinContent(20,1);
   met_total__7->SetMinimum(0.5);
   met_total__7->SetMaximum(2);
   met_total__7->SetEntries(2361);

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
   
   Double_t met_total_errors_fx3008[15] = {
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
   310,
   330,
   390};
   Double_t met_total_errors_fy3008[15] = {
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
   Double_t met_total_errors_felx3008[15] = {
   10,
   10,
   10,
   10,
   10,
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
   Double_t met_total_errors_fely3008[15] = {
   0.1764599,
   0.100093,
   0.1233711,
   0.2182635,
   0.2030097,
   0.1615418,
   0.1614015,
   0.2405803,
   0.1838869,
   0.2995353,
   0.1387596,
   0.05291594,
   2.64618,
   0.04561693,
   0.06827257};
   Double_t met_total_errors_fehx3008[15] = {
   10,
   10,
   10,
   10,
   10,
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
   Double_t met_total_errors_fehy3008[15] = {
   0.1367894,
   0.1078711,
   0.1438318,
   0.1783519,
   0.3208744,
   0.1445913,
   0.1634306,
   0.239107,
   0.5369365,
   0.1180721,
   0.346665,
   0.4054133,
   0.04862435,
   2.500201,
   0.07072169};
   grae = new TGraphAsymmErrors(15,met_total_errors_fx3008,met_total_errors_fy3008,met_total_errors_felx3008,met_total_errors_fehx3008,met_total_errors_fely3008,met_total_errors_fehy3008);
   grae->SetName("met_total_errors");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(3013);
   grae->SetMarkerStyle(1001);
   grae->Draw("e2");
   
   Double_t met_total_errors_fx3009[15] = {
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
   310,
   330,
   390};
   Double_t met_total_errors_fy3009[15] = {
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
   Double_t met_total_errors_felx3009[15] = {
   10,
   10,
   10,
   10,
   10,
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
   Double_t met_total_errors_fely3009[15] = {
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
   Double_t met_total_errors_fehx3009[15] = {
   10,
   10,
   10,
   10,
   10,
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
   Double_t met_total_errors_fehy3009[15] = {
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
   grae = new TGraphAsymmErrors(15,met_total_errors_fx3009,met_total_errors_fy3009,met_total_errors_felx3009,met_total_errors_fehx3009,met_total_errors_fely3009,met_total_errors_fehy3009);
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
   met_total__8->SetBinContent(16,1);
   met_total__8->SetBinContent(17,1);
   met_total__8->SetBinContent(20,1);
   met_total__8->SetMinimum(0.5);
   met_total__8->SetMaximum(2);
   met_total__8->SetEntries(2361);

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
   0.8945061,
   1.002145,
   0.9434066,
   0.9763618,
   0.8751681,
   1.30516,
   1.913516,
   1.440772,
   3.859841,
   0,
   0,
   1.874849,
   0,
   0,
   5.379737,
   0,
   0,
   0,
   1.681762};
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
   0.0840251,
   0.0770134,
   0.1072794,
   0.1518605,
   0.2101566,
   0.3714623,
   0.5446067,
   0.6895415,
   1.667239,
   0,
   0,
   1.210992,
   0,
   0,
   4.450401,
   0,
   0,
   0,
   1.391242};
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
   0.09231442,
   0.08317191,
   0.1202315,
   0.1775393,
   0.2678954,
   0.4959511,
   0.7271219,
   1.139224,
   2.611213,
   1.081937,
   1.384275,
   2.472841,
   0,
   0,
   12.37108,
   9.357883,
   0,
   0,
   3.86733};
   grae = new TGraphAsymmErrors(20,data_div_fx3010,data_div_fy3010,data_div_felx3010,data_div_fehx3010,data_div_fely3010,data_div_fehy3010);
   grae->SetName("data_div");
   grae->SetTitle("Graph");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.1);
   
   TH1F *Graph_data_div3010 = new TH1F("Graph_data_div3010","Graph",100,0,440);
   Graph_data_div3010->SetMinimum(0);
   Graph_data_div3010->SetMaximum(201.3286);
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
