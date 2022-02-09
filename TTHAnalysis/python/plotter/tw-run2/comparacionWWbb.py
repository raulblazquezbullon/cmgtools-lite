import os, sys, argparse
from multiprocessing import Pool
from copy import deepcopy
import warnings as wr
import ROOT as r

#sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
#import varList as vl

r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

#print(histodict["nloosejets"])
#sys.exit()

thepath = "./temp_2021_11_19_pruebagenwwbb/varplots/2018/genwwbb"

rF = r.TFile(thepath + "/plots-tw-genwwbb.root", "READ")

c = r.TCanvas("c_wwbbcomp", "", 600, 600)

c.Divide(1, 2)
c.GetPad(1).SetPad(*tuple([float(i) for i in "0.00, 0.25, 1.00, 1.00".split(',')]))
c.GetPad(2).SetPad(*tuple([float(i) for i in "0.00, 0.00, 1.00, 0.25".split(',')]))
c.GetPad(1).SetTopMargin(0.08)
c.GetPad(1).SetRightMargin(0.03)
c.GetPad(1).SetLeftMargin(0.16)
c.GetPad(1).SetBottomMargin(0.025)

c.GetPad(2).SetBottomMargin(0.3)
c.GetPad(2).SetBottomMargin(0.35)
c.GetPad(2).SetBottomMargin(0.375)
c.GetPad(2).SetRightMargin(0.03)
c.GetPad(2).SetLeftMargin(0.16)

c.cd(1)
#print thevar, theproc, iU
wwbb  = deepcopy(rF.Get("genwwbb_m_wwbb").Clone("wwbb"))
wwbb.Scale(1./wwbb.Integral())

ttbar = deepcopy(rF.Get("genwwbb_m_ttbar").Clone("ttbar"))
ttbar.Scale(1./ttbar.Integral())

leg = r.TLegend( .52, .9 - 0.18, .735, .9)
leg.SetTextFont(42)
leg.SetTextSize(0.0435)
leg.SetBorderSize(0)
leg.SetFillColor(10)
leg.SetFillStyle(0); # transparent legend!

wwbb.SetLineColor(r.kViolet-5)
wwbb.SetFillStyle(0)
wwbb.SetStats(0)
wwbb.SetLineWidth(2)
wwbb.SetTitle("")
wwbb.GetXaxis().SetTitle("m(WWbb)")
wwbb.SetMaximum(-1111); ttbar.SetMaximum(-1111);
wwbb.GetYaxis().SetRangeUser(0, max([wwbb.GetMaximum(), ttbar.GetMaximum()]) * 1.1)
wwbb.GetXaxis().SetLabelOffset(999)
wwbb.GetXaxis().SetLabelSize(0)
wwbb.GetXaxis().SetTitle(' ')
wwbb.SetMarkerSize(0.)
leg.AddEntry(wwbb, "WWbb", "f")

ttbar.SetLineColor(r.kRed)
ttbar.SetFillStyle(0)
ttbar.SetLineWidth(2)
ttbar.SetMarkerSize(0.)
leg.AddEntry(ttbar, "ttbar", "f")


wwbb.Draw("axis")
ttbar.Draw("histsameE")
wwbb.Draw("P,E,same")
leg.Draw("same")

c.cd(2)
ratiottbar   = deepcopy(wwbb.Clone("ratiottbar"))
constant  = deepcopy(wwbb.Clone("constant"))

for iB in range(1, ratiottbar.GetNbinsX() + 1):
    try:
        ratiottbar.SetBinContent(iB, ttbar.GetBinContent(iB) / wwbb.GetBinContent(iB))
        ratiottbar.SetBinError(iB, ttbar.GetBinError(iB) / wwbb.GetBinContent(iB))
    except ZeroDivisionError:
        ratiottbar.SetBinContent(iB, 1)
        ratiottbar.SetBinError(iB, 0)

    constant.SetBinContent(iB, 1.)
    #print constant.GetBinContent(iB)


ratiottbar.SetStats(0)
ratiottbar.SetTitle(" ")
ratiottbar.SetLineColor(r.kRed)
ratiottbar.SetLineWidth(2)
ratiottbar.SetFillStyle(0)
ratiottbar.GetXaxis().SetTitle(wwbb.GetXaxis().GetTitle())
ratiottbar.GetXaxis().SetTitleFont(43)
ratiottbar.GetXaxis().SetTitleSize(22)
ratiottbar.GetXaxis().SetTitleOffset(4)
ratiottbar.GetXaxis().SetLabelFont(43)
ratiottbar.GetXaxis().SetLabelSize(22)
ratiottbar.GetXaxis().SetLabelOffset(0.007)
ratiottbar.GetXaxis().SetNdivisions(510, True)
#ratiottbar.GetXaxis().SetNdivisions(505, False)
ratiottbar.GetXaxis().SetRangeUser(wwbb.GetXaxis().GetBinLowEdge(1), wwbb.GetXaxis().GetBinUpEdge(wwbb.GetNbinsX()))
ratiottbar.SetLineWidth(5)

#ratiottbar.GetYaxis().SetRangeUser(0.8, 1.2)
ratiottbar.GetYaxis().SetRangeUser(0, 5)
#ratiottbar.GetYaxis().SetRangeUser(0.9, 1.1)
ratiottbar.GetYaxis().SetTitle('ttbar/WWbb')
ratiottbar.GetYaxis().SetTitleFont(43)
ratiottbar.GetYaxis().SetTitleSize(16)
ratiottbar.GetYaxis().SetTitleOffset(2.2)
ratiottbar.GetYaxis().CenterTitle(True)
ratiottbar.GetYaxis().SetLabelFont(43)
ratiottbar.GetYaxis().SetLabelSize(16)
ratiottbar.GetYaxis().SetLabelOffset(0.007)
ratiottbar.GetYaxis().SetNdivisions(505, True)
ratiottbar.SetMarkerSize(0.)

constant.SetLineWidth(3)

ratiottbar.Draw("histsame")
#constant.Draw("histsame")

c.SaveAs(thepath + "/compWWbb.png")
c.SaveAs(thepath + "/compWWbb.pdf")
c.Close(); del c; del leg
rF.Close()
