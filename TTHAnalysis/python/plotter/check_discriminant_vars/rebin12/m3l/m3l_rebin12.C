void m3l_rebin12()
{
//=========Macro generated from canvas: m3l_rebin12_canvas/m3l_rebin12
//=========  (Tue Apr  4 21:28:12 2023) by ROOT version 6.24/07
   TCanvas *m3l_rebin12_canvas = new TCanvas("m3l_rebin12_canvas", "m3l_rebin12",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   m3l_rebin12_canvas->SetHighLightColor(2);
   m3l_rebin12_canvas->Range(-115.3846,-157.6381,525.641,1054.963);
   m3l_rebin12_canvas->SetFillColor(0);
   m3l_rebin12_canvas->SetBorderMode(0);
   m3l_rebin12_canvas->SetBorderSize(2);
   m3l_rebin12_canvas->SetTickx(1);
   m3l_rebin12_canvas->SetTicky(1);
   m3l_rebin12_canvas->SetLeftMargin(0.18);
   m3l_rebin12_canvas->SetRightMargin(0.04);
   m3l_rebin12_canvas->SetTopMargin(0.06);
   m3l_rebin12_canvas->SetBottomMargin(0.13);
   m3l_rebin12_canvas->SetFrameFillStyle(0);
   m3l_rebin12_canvas->SetFrameBorderMode(0);
   m3l_rebin12_canvas->SetFrameFillStyle(0);
   m3l_rebin12_canvas->SetFrameBorderMode(0);
   Double_t xAxis1[13] = {0, 110.4178, 120.8356, 131.2534, 141.6712, 152.7173, 166.2679, 179.8185, 193.369, 212.8153, 237.9113, 281.1468, 500}; 
   
   TH1D *m3l_rebin12_total__1 = new TH1D("m3l_rebin12_total__1","dummy",12, xAxis1);
   m3l_rebin12_total__1->SetBinContent(1,32.71554);
   m3l_rebin12_total__1->SetBinContent(2,125.256);
   m3l_rebin12_total__1->SetBinContent(3,244.6956);
   m3l_rebin12_total__1->SetBinContent(4,298.704);
   m3l_rebin12_total__1->SetBinContent(5,313.8781);
   m3l_rebin12_total__1->SetBinContent(6,371.3501);
   m3l_rebin12_total__1->SetBinContent(7,316.9693);
   m3l_rebin12_total__1->SetBinContent(8,264.8958);
   m3l_rebin12_total__1->SetBinContent(9,327.2899);
   m3l_rebin12_total__1->SetBinContent(10,278.8251);
   m3l_rebin12_total__1->SetBinContent(11,318.5642);
   m3l_rebin12_total__1->SetBinContent(12,491.1033);
   m3l_rebin12_total__1->SetBinError(1,5.965027);
   m3l_rebin12_total__1->SetBinError(2,9.154093);
   m3l_rebin12_total__1->SetBinError(3,14.55227);
   m3l_rebin12_total__1->SetBinError(4,12.83802);
   m3l_rebin12_total__1->SetBinError(5,14.00231);
   m3l_rebin12_total__1->SetBinError(6,14.41605);
   m3l_rebin12_total__1->SetBinError(7,11.81896);
   m3l_rebin12_total__1->SetBinError(8,9.935764);
   m3l_rebin12_total__1->SetBinError(9,13.56488);
   m3l_rebin12_total__1->SetBinError(10,10.09846);
   m3l_rebin12_total__1->SetBinError(11,11.78487);
   m3l_rebin12_total__1->SetBinError(12,11.54621);
   m3l_rebin12_total__1->SetMinimum(0);
   m3l_rebin12_total__1->SetMaximum(982.2066);
   m3l_rebin12_total__1->SetEntries(15153);
   m3l_rebin12_total__1->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   m3l_rebin12_total__1->SetFillColor(ci);
   m3l_rebin12_total__1->SetMarkerStyle(20);
   m3l_rebin12_total__1->SetMarkerSize(1.1);
   m3l_rebin12_total__1->GetXaxis()->SetTitle("m3l");
   m3l_rebin12_total__1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin12_total__1->GetXaxis()->SetLabelFont(42);
   m3l_rebin12_total__1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin12_total__1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin12_total__1->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin12_total__1->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin12_total__1->GetXaxis()->SetTitleFont(42);
   m3l_rebin12_total__1->GetYaxis()->SetTitle("Events");
   m3l_rebin12_total__1->GetYaxis()->SetLabelFont(42);
   m3l_rebin12_total__1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin12_total__1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin12_total__1->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin12_total__1->GetYaxis()->SetTitleOffset(2);
   m3l_rebin12_total__1->GetYaxis()->SetTitleFont(42);
   m3l_rebin12_total__1->GetZaxis()->SetLabelFont(42);
   m3l_rebin12_total__1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin12_total__1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin12_total__1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin12_total__1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin12_total__1->GetZaxis()->SetTitleFont(42);
   m3l_rebin12_total__1->Draw("HIST");
   
   THStack *m3l_rebin12_stack = new THStack();
   m3l_rebin12_stack->SetName("m3l_rebin12_stack");
   m3l_rebin12_stack->SetTitle("m3l_rebin12");
   Double_t xAxis2[13] = {0, 110.4178, 120.8356, 131.2534, 141.6712, 152.7173, 166.2679, 179.8185, 193.369, 212.8153, 237.9113, 281.1468, 500}; 
   
   TH1F *m3l_rebin12_stack_stack_1 = new TH1F("m3l_rebin12_stack_stack_1","m3l_rebin12",12, xAxis2);
   m3l_rebin12_stack_stack_1->SetMinimum(0);
   m3l_rebin12_stack_stack_1->SetMaximum(515.6585);
   m3l_rebin12_stack_stack_1->SetDirectory(0);
   m3l_rebin12_stack_stack_1->SetStats(0);
   m3l_rebin12_stack_stack_1->SetLineStyle(0);
   m3l_rebin12_stack_stack_1->SetMarkerStyle(20);
   m3l_rebin12_stack_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin12_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin12_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin12_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin12_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin12_stack_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin12_stack_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin12_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin12_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin12_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin12_stack_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin12_stack_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin12_stack_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin12_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin12_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin12_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin12_stack_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin12_stack_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin12_stack->SetHistogram(m3l_rebin12_stack_stack_1);
   
   Double_t xAxis3[13] = {0, 110.4178, 120.8356, 131.2534, 141.6712, 152.7173, 166.2679, 179.8185, 193.369, 212.8153, 237.9113, 281.1468, 500}; 
   
   TH1D *m3l_rebin12_fakes_VV_stack_1 = new TH1D("m3l_rebin12_fakes_VV_stack_1","dummy",12, xAxis3);
   m3l_rebin12_fakes_VV_stack_1->SetBinContent(1,0.4398576);
   m3l_rebin12_fakes_VV_stack_1->SetBinContent(6,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetBinContent(8,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetBinContent(10,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetBinContent(11,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetBinContent(12,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetBinError(1,0.3110263);
   m3l_rebin12_fakes_VV_stack_1->SetBinError(6,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetBinError(8,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetBinError(10,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetBinError(11,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetBinError(12,0.2199288);
   m3l_rebin12_fakes_VV_stack_1->SetEntries(11);

   ci = TColor::GetColor("#2e3294");
   m3l_rebin12_fakes_VV_stack_1->SetFillColor(ci);
   m3l_rebin12_fakes_VV_stack_1->SetMarkerStyle(0);
   m3l_rebin12_fakes_VV_stack_1->SetMarkerSize(1.1);
   m3l_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitle("m3l");
   m3l_rebin12_fakes_VV_stack_1->GetXaxis()->SetMoreLogLabels();
   m3l_rebin12_fakes_VV_stack_1->GetXaxis()->SetLabelFont(42);
   m3l_rebin12_fakes_VV_stack_1->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin12_fakes_VV_stack_1->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin12_fakes_VV_stack_1->GetXaxis()->SetTitleFont(42);
   m3l_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitle("Events");
   m3l_rebin12_fakes_VV_stack_1->GetYaxis()->SetLabelFont(42);
   m3l_rebin12_fakes_VV_stack_1->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin12_fakes_VV_stack_1->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin12_fakes_VV_stack_1->GetYaxis()->SetTitleFont(42);
   m3l_rebin12_fakes_VV_stack_1->GetZaxis()->SetLabelFont(42);
   m3l_rebin12_fakes_VV_stack_1->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin12_fakes_VV_stack_1->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin12_fakes_VV_stack_1->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin12_fakes_VV_stack_1->GetZaxis()->SetTitleOffset(1);
   m3l_rebin12_fakes_VV_stack_1->GetZaxis()->SetTitleFont(42);
   m3l_rebin12_stack->Add(m3l_rebin12_fakes_VV_stack_1,"");
   Double_t xAxis4[13] = {0, 110.4178, 120.8356, 131.2534, 141.6712, 152.7173, 166.2679, 179.8185, 193.369, 212.8153, 237.9113, 281.1468, 500}; 
   
   TH1D *m3l_rebin12_fakes_TT_stack_2 = new TH1D("m3l_rebin12_fakes_TT_stack_2","dummy",12, xAxis4);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(1,1.758398);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(2,6.874135);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(3,6.977441);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(4,11.28472);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(5,13.99305);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(6,14.14351);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(7,10.5324);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(8,9.930549);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(9,11.68895);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(10,10.93663);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(11,12.59172);
   m3l_rebin12_fakes_TT_stack_2->SetBinContent(12,13.69212);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(1,0.539249);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(2,1.029815);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(3,1.07124);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(4,1.320306);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(5,1.451011);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(6,1.458792);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(7,1.258863);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(8,1.222366);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(9,1.336027);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(10,1.292971);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(11,1.38593);
   m3l_rebin12_fakes_TT_stack_2->SetBinError(12,1.481887);
   m3l_rebin12_fakes_TT_stack_2->SetEntries(840);

   ci = TColor::GetColor("#666666");
   m3l_rebin12_fakes_TT_stack_2->SetFillColor(ci);
   m3l_rebin12_fakes_TT_stack_2->SetMarkerStyle(0);
   m3l_rebin12_fakes_TT_stack_2->SetMarkerSize(1.1);
   m3l_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitle("m3l");
   m3l_rebin12_fakes_TT_stack_2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin12_fakes_TT_stack_2->GetXaxis()->SetLabelFont(42);
   m3l_rebin12_fakes_TT_stack_2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin12_fakes_TT_stack_2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin12_fakes_TT_stack_2->GetXaxis()->SetTitleFont(42);
   m3l_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitle("Events");
   m3l_rebin12_fakes_TT_stack_2->GetYaxis()->SetLabelFont(42);
   m3l_rebin12_fakes_TT_stack_2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin12_fakes_TT_stack_2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin12_fakes_TT_stack_2->GetYaxis()->SetTitleFont(42);
   m3l_rebin12_fakes_TT_stack_2->GetZaxis()->SetLabelFont(42);
   m3l_rebin12_fakes_TT_stack_2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin12_fakes_TT_stack_2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin12_fakes_TT_stack_2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin12_fakes_TT_stack_2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin12_fakes_TT_stack_2->GetZaxis()->SetTitleFont(42);
   m3l_rebin12_stack->Add(m3l_rebin12_fakes_TT_stack_2,"");
   Double_t xAxis5[13] = {0, 110.4178, 120.8356, 131.2534, 141.6712, 152.7173, 166.2679, 179.8185, 193.369, 212.8153, 237.9113, 281.1468, 500}; 
   
   TH1D *m3l_rebin12_fakes_DY_stack_3 = new TH1D("m3l_rebin12_fakes_DY_stack_3","dummy",12, xAxis5);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(1,7.781856);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(2,15.56371);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(3,42.80021);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(4,27.23649);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(5,35.01835);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(6,35.01835);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(7,19.45464);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(8,11.67278);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(9,31.12742);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(10,11.67278);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(11,19.45464);
   m3l_rebin12_fakes_DY_stack_3->SetBinContent(12,7.781856);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(1,5.502603);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(2,7.781856);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(3,12.90475);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(4,10.29443);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(5,11.67278);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(6,11.67278);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(7,8.700379);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(8,6.739285);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(9,11.00521);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(10,6.739285);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(11,8.700379);
   m3l_rebin12_fakes_DY_stack_3->SetBinError(12,5.502603);
   m3l_rebin12_fakes_DY_stack_3->SetEntries(76);

   ci = TColor::GetColor("#cccccc");
   m3l_rebin12_fakes_DY_stack_3->SetFillColor(ci);
   m3l_rebin12_fakes_DY_stack_3->SetMarkerStyle(0);
   m3l_rebin12_fakes_DY_stack_3->SetMarkerSize(1.1);
   m3l_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitle("m3l");
   m3l_rebin12_fakes_DY_stack_3->GetXaxis()->SetMoreLogLabels();
   m3l_rebin12_fakes_DY_stack_3->GetXaxis()->SetLabelFont(42);
   m3l_rebin12_fakes_DY_stack_3->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin12_fakes_DY_stack_3->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin12_fakes_DY_stack_3->GetXaxis()->SetTitleFont(42);
   m3l_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitle("Events");
   m3l_rebin12_fakes_DY_stack_3->GetYaxis()->SetLabelFont(42);
   m3l_rebin12_fakes_DY_stack_3->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin12_fakes_DY_stack_3->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin12_fakes_DY_stack_3->GetYaxis()->SetTitleFont(42);
   m3l_rebin12_fakes_DY_stack_3->GetZaxis()->SetLabelFont(42);
   m3l_rebin12_fakes_DY_stack_3->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin12_fakes_DY_stack_3->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin12_fakes_DY_stack_3->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin12_fakes_DY_stack_3->GetZaxis()->SetTitleOffset(1);
   m3l_rebin12_fakes_DY_stack_3->GetZaxis()->SetTitleFont(42);
   m3l_rebin12_stack->Add(m3l_rebin12_fakes_DY_stack_3,"");
   Double_t xAxis6[13] = {0, 110.4178, 120.8356, 131.2534, 141.6712, 152.7173, 166.2679, 179.8185, 193.369, 212.8153, 237.9113, 281.1468, 500}; 
   
   TH1D *m3l_rebin12_prompt_ZZ_stack_4 = new TH1D("m3l_rebin12_prompt_ZZ_stack_4","dummy",12, xAxis6);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(1,1.24557);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(2,5.397471);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(3,19.92912);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(4,18.26836);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(5,16.6076);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(6,16.6076);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(7,17.43798);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(8,9.549371);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(9,13.70127);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(10,11.62532);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(11,12.4557);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinContent(12,22.42026);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(1,0.7191303);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(2,1.496989);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(3,2.876521);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(4,2.754059);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(5,2.625892);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(6,2.625892);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(7,2.690739);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(8,1.991182);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(9,2.385085);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(10,2.196979);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(11,2.27409);
   m3l_rebin12_prompt_ZZ_stack_4->SetBinError(12,3.051011);
   m3l_rebin12_prompt_ZZ_stack_4->SetEntries(402);

   ci = TColor::GetColor("#00cc00");
   m3l_rebin12_prompt_ZZ_stack_4->SetFillColor(ci);
   m3l_rebin12_prompt_ZZ_stack_4->SetMarkerStyle(0);
   m3l_rebin12_prompt_ZZ_stack_4->SetMarkerSize(1.1);
   m3l_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitle("m3l");
   m3l_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetMoreLogLabels();
   m3l_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetLabelFont(42);
   m3l_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin12_prompt_ZZ_stack_4->GetXaxis()->SetTitleFont(42);
   m3l_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitle("Events");
   m3l_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetLabelFont(42);
   m3l_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin12_prompt_ZZ_stack_4->GetYaxis()->SetTitleFont(42);
   m3l_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetLabelFont(42);
   m3l_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetTitleOffset(1);
   m3l_rebin12_prompt_ZZ_stack_4->GetZaxis()->SetTitleFont(42);
   m3l_rebin12_stack->Add(m3l_rebin12_prompt_ZZ_stack_4,"");
   Double_t xAxis7[13] = {0, 110.4178, 120.8356, 131.2534, 141.6712, 152.7173, 166.2679, 179.8185, 193.369, 212.8153, 237.9113, 281.1468, 500}; 
   
   TH1D *m3l_rebin12_prompt_WZ_stack_5 = new TH1D("m3l_rebin12_prompt_WZ_stack_5","dummy",12, xAxis7);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(1,21.48986);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(2,97.42071);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(3,174.9889);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(4,241.9144);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(5,248.2591);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(6,305.3607);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(7,269.5443);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(8,233.5232);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(9,270.7723);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(10,244.3704);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(11,273.8422);
   m3l_rebin12_prompt_WZ_stack_5->SetBinContent(12,446.9891);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(1,2.097196);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(2,4.465271);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(3,5.984493);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(4,7.036441);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(5,7.128116);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(6,7.905489);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(7,7.427407);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(8,6.913328);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(9,7.444307);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(10,7.072069);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(11,7.486389);
   m3l_rebin12_prompt_WZ_stack_5->SetBinError(12,9.564684);
   m3l_rebin12_prompt_WZ_stack_5->SetEntries(13824);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin12_prompt_WZ_stack_5->SetFillColor(ci);
   m3l_rebin12_prompt_WZ_stack_5->SetMarkerStyle(0);
   m3l_rebin12_prompt_WZ_stack_5->SetMarkerSize(1.1);
   m3l_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitle("m3l");
   m3l_rebin12_prompt_WZ_stack_5->GetXaxis()->SetMoreLogLabels();
   m3l_rebin12_prompt_WZ_stack_5->GetXaxis()->SetLabelFont(42);
   m3l_rebin12_prompt_WZ_stack_5->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin12_prompt_WZ_stack_5->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitleSize(0.06);
   m3l_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitleOffset(0.9);
   m3l_rebin12_prompt_WZ_stack_5->GetXaxis()->SetTitleFont(42);
   m3l_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitle("Events");
   m3l_rebin12_prompt_WZ_stack_5->GetYaxis()->SetLabelFont(42);
   m3l_rebin12_prompt_WZ_stack_5->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin12_prompt_WZ_stack_5->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitleSize(0.06);
   m3l_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitleOffset(1.35);
   m3l_rebin12_prompt_WZ_stack_5->GetYaxis()->SetTitleFont(42);
   m3l_rebin12_prompt_WZ_stack_5->GetZaxis()->SetLabelFont(42);
   m3l_rebin12_prompt_WZ_stack_5->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin12_prompt_WZ_stack_5->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin12_prompt_WZ_stack_5->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin12_prompt_WZ_stack_5->GetZaxis()->SetTitleOffset(1);
   m3l_rebin12_prompt_WZ_stack_5->GetZaxis()->SetTitleFont(42);
   m3l_rebin12_stack->Add(m3l_rebin12_prompt_WZ_stack_5,"");
   m3l_rebin12_stack->Draw("same hist");
   Double_t xAxis8[13] = {0, 110.4178, 120.8356, 131.2534, 141.6712, 152.7173, 166.2679, 179.8185, 193.369, 212.8153, 237.9113, 281.1468, 500}; 
   
   TH1D *m3l_rebin12_total__2 = new TH1D("m3l_rebin12_total__2","dummy",12, xAxis8);
   m3l_rebin12_total__2->SetBinContent(1,32.71554);
   m3l_rebin12_total__2->SetBinContent(2,125.256);
   m3l_rebin12_total__2->SetBinContent(3,244.6956);
   m3l_rebin12_total__2->SetBinContent(4,298.704);
   m3l_rebin12_total__2->SetBinContent(5,313.8781);
   m3l_rebin12_total__2->SetBinContent(6,371.3501);
   m3l_rebin12_total__2->SetBinContent(7,316.9693);
   m3l_rebin12_total__2->SetBinContent(8,264.8958);
   m3l_rebin12_total__2->SetBinContent(9,327.2899);
   m3l_rebin12_total__2->SetBinContent(10,278.8251);
   m3l_rebin12_total__2->SetBinContent(11,318.5642);
   m3l_rebin12_total__2->SetBinContent(12,491.1033);
   m3l_rebin12_total__2->SetBinError(1,5.965027);
   m3l_rebin12_total__2->SetBinError(2,9.154093);
   m3l_rebin12_total__2->SetBinError(3,14.55227);
   m3l_rebin12_total__2->SetBinError(4,12.83802);
   m3l_rebin12_total__2->SetBinError(5,14.00231);
   m3l_rebin12_total__2->SetBinError(6,14.41605);
   m3l_rebin12_total__2->SetBinError(7,11.81896);
   m3l_rebin12_total__2->SetBinError(8,9.935764);
   m3l_rebin12_total__2->SetBinError(9,13.56488);
   m3l_rebin12_total__2->SetBinError(10,10.09846);
   m3l_rebin12_total__2->SetBinError(11,11.78487);
   m3l_rebin12_total__2->SetBinError(12,11.54621);
   m3l_rebin12_total__2->SetMinimum(0);
   m3l_rebin12_total__2->SetMaximum(982.2066);
   m3l_rebin12_total__2->SetEntries(15153);
   m3l_rebin12_total__2->SetDirectory(0);

   ci = TColor::GetColor("#ffcc00");
   m3l_rebin12_total__2->SetFillColor(ci);
   m3l_rebin12_total__2->SetMarkerStyle(20);
   m3l_rebin12_total__2->SetMarkerSize(1.1);
   m3l_rebin12_total__2->GetXaxis()->SetTitle("m3l");
   m3l_rebin12_total__2->GetXaxis()->SetMoreLogLabels();
   m3l_rebin12_total__2->GetXaxis()->SetLabelFont(42);
   m3l_rebin12_total__2->GetXaxis()->SetLabelOffset(0.007);
   m3l_rebin12_total__2->GetXaxis()->SetLabelSize(0.05);
   m3l_rebin12_total__2->GetXaxis()->SetTitleSize(0.05);
   m3l_rebin12_total__2->GetXaxis()->SetTitleOffset(1.1);
   m3l_rebin12_total__2->GetXaxis()->SetTitleFont(42);
   m3l_rebin12_total__2->GetYaxis()->SetTitle("Events");
   m3l_rebin12_total__2->GetYaxis()->SetLabelFont(42);
   m3l_rebin12_total__2->GetYaxis()->SetLabelOffset(0.007);
   m3l_rebin12_total__2->GetYaxis()->SetLabelSize(0.05);
   m3l_rebin12_total__2->GetYaxis()->SetTitleSize(0.05);
   m3l_rebin12_total__2->GetYaxis()->SetTitleOffset(2);
   m3l_rebin12_total__2->GetYaxis()->SetTitleFont(42);
   m3l_rebin12_total__2->GetZaxis()->SetLabelFont(42);
   m3l_rebin12_total__2->GetZaxis()->SetLabelOffset(0.007);
   m3l_rebin12_total__2->GetZaxis()->SetLabelSize(0.05);
   m3l_rebin12_total__2->GetZaxis()->SetTitleSize(0.06);
   m3l_rebin12_total__2->GetZaxis()->SetTitleOffset(1);
   m3l_rebin12_total__2->GetZaxis()->SetTitleFont(42);
   m3l_rebin12_total__2->Draw("AXIS SAME");
   
   Double_t m3l_rebin12_total_errors_fx3001[12] = {
   55.2089,
   115.6267,
   126.0445,
   136.4623,
   147.1943,
   159.4926,
   173.0432,
   186.5938,
   203.0922,
   225.3633,
   259.529,
   390.5734};
   Double_t m3l_rebin12_total_errors_fy3001[12] = {
   32.71554,
   125.256,
   244.6956,
   298.704,
   313.8781,
   371.3501,
   316.9693,
   264.8958,
   327.2899,
   278.8251,
   318.5642,
   491.1033};
   Double_t m3l_rebin12_total_errors_felx3001[12] = {
   55.2089,
   5.208908,
   5.208904,
   5.208908,
   5.52301,
   6.775299,
   6.775291,
   6.775299,
   9.723137,
   12.54798,
   21.61774,
   109.4266};
   Double_t m3l_rebin12_total_errors_fely3001[12] = {
   1.870158,
   8.624139,
   15.67817,
   22.8204,
   24.86357,
   22.09934,
   19.55805,
   15.84325,
   19.45032,
   16.78788,
   19.99302,
   29.42276};
   Double_t m3l_rebin12_total_errors_fehx3001[12] = {
   55.2089,
   5.208908,
   5.208904,
   5.208908,
   5.52301,
   6.775299,
   6.775291,
   6.775299,
   9.723137,
   12.54798,
   21.61774,
   109.4266};
   Double_t m3l_rebin12_total_errors_fehy3001[12] = {
   2.02234,
   9.160934,
   16.01884,
   18.68855,
   19.27238,
   23.59823,
   19.2824,
   16.63778,
   22.1183,
   17.92161,
   20.32693,
   30.77426};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,m3l_rebin12_total_errors_fx3001,m3l_rebin12_total_errors_fy3001,m3l_rebin12_total_errors_felx3001,m3l_rebin12_total_errors_fehx3001,m3l_rebin12_total_errors_fely3001,m3l_rebin12_total_errors_fehy3001);
   grae->SetName("m3l_rebin12_total_errors");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ffff");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(0);
   
   TH1F *Graph_m3l_rebin12_total_errors3001 = new TH1F("Graph_m3l_rebin12_total_errors3001","Graph",100,0,550);
   Graph_m3l_rebin12_total_errors3001->SetMinimum(27.76085);
   Graph_m3l_rebin12_total_errors3001->SetMaximum(570.9808);
   Graph_m3l_rebin12_total_errors3001->SetDirectory(0);
   Graph_m3l_rebin12_total_errors3001->SetStats(0);
   Graph_m3l_rebin12_total_errors3001->SetLineStyle(0);
   Graph_m3l_rebin12_total_errors3001->SetMarkerStyle(20);
   Graph_m3l_rebin12_total_errors3001->GetXaxis()->SetLabelFont(42);
   Graph_m3l_rebin12_total_errors3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin12_total_errors3001->GetXaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin12_total_errors3001->GetXaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin12_total_errors3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_m3l_rebin12_total_errors3001->GetXaxis()->SetTitleFont(42);
   Graph_m3l_rebin12_total_errors3001->GetYaxis()->SetLabelFont(42);
   Graph_m3l_rebin12_total_errors3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin12_total_errors3001->GetYaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin12_total_errors3001->GetYaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin12_total_errors3001->GetYaxis()->SetTitleOffset(1.35);
   Graph_m3l_rebin12_total_errors3001->GetYaxis()->SetTitleFont(42);
   Graph_m3l_rebin12_total_errors3001->GetZaxis()->SetLabelFont(42);
   Graph_m3l_rebin12_total_errors3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_m3l_rebin12_total_errors3001->GetZaxis()->SetLabelSize(0.05);
   Graph_m3l_rebin12_total_errors3001->GetZaxis()->SetTitleSize(0.06);
   Graph_m3l_rebin12_total_errors3001->GetZaxis()->SetTitleOffset(1);
   Graph_m3l_rebin12_total_errors3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_m3l_rebin12_total_errors3001);
   
   grae->Draw("pe2 ");
   
   TLegend *leg = new TLegend(0.62,0.664,0.9,0.91,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.036);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m3l_rebin12_prompt_WZ_stack_5","WZ","F");

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
   entry=leg->AddEntry("m3l_rebin12_prompt_ZZ_stack_4","qqZZ","F");

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
   entry=leg->AddEntry("m3l_rebin12_fakes_DY_stack_3","Fakes DY","F");

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
   entry=leg->AddEntry("m3l_rebin12_fakes_TT_stack_2","Fakes TT","F");

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
   entry=leg->AddEntry("m3l_rebin12_total_errors","Total unc.","F");

   ci = TColor::GetColor("#00ffff");
   entry->SetFillColor(ci);
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
      tex = new TLatex(0.2813,0.952,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0342);
   tex->SetLineWidth(2);
   tex->Draw();
   m3l_rebin12_canvas->Modified();
   m3l_rebin12_canvas->cd();
   m3l_rebin12_canvas->SetSelected(m3l_rebin12_canvas);
}
