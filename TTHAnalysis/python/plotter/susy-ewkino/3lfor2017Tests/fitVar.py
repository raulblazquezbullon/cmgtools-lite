import os, sys, ROOT, array
from optparse import OptionParser
import CMS_lumi


"""python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo htJet30j_prompt_WZ --lX 'H_{T}(jet, p_{T} > 30 GeV) [GeV]' --lY 'Events' --extraFile ../../../../data/WZ_MC/likelihood_2017.root --extraHisto htJet30j_prompt_WZ"""

ROOT.gROOT.SetBatch(True)
pr = OptionParser(usage="%prog [options]")

#Model options
pr.add_option("--file", dest = "file", type="string", default = "plots.root", help = "Root file with the histograms")
pr.add_option("--extraFile", dest = "extraFile", type="string", default = "NO", help = "Root file with the spectator histograms")
pr.add_option("--fitName", dest = "fitName", type="string", default = "from fitht import*", help = "Input the import")
pr.add_option("--fitFunc", dest = "fitFunc", type="string", default = "[0] + [1]*x", help = "Fit function expression")
pr.add_option("--histo", dest = "histo", type="string", default = "signal", help = "Histogram Name")
pr.add_option("--extraHisto", dest = "extraHisto", type="string", default = "NO", help = "Extra Histogram Name")
pr.add_option("--lX", dest = "labelX", type="string", default = "Variable", help = "X axis label")
pr.add_option("--lY", dest = "labelY", type="string", default = "Events", help = "Y axis label")
pr.add_option("--pset", dest = "pset", type=float, default = [], action = "append", help = "Parameter set")
pr.add_option("--pdir", dest = "outname", type="string", default = "~/www/ewk_fits/test", help = "Output name")

#Output formats
pr.add_option( "--ext", dest = "exts", type = "string", default = ".pdf,.png,.eps", help = "Output formats of the plot in a comma-separated list")

(options, args) = pr.parse_args()



#Set ROODATA
#Input model
from fitmtW import*

#Load histogram
rootFile = ROOT.TFile(options.file, "READ")
fitHisto = rootFile.Get(options.histo)

dataHist = ROOT.RooDataHist("data","data",dataArgSet,fitHisto)
dataHist.plotOn(frame)

print "Fitting function..."
fitFunc.fitTo(dataHist)

fitFunc.plotOn(frame)

chi2 = ROOT.RooChi2Var("chi2", "chi2", fitFunc, dataHist)
pval = 1-ROOT.Math.chisquared_cdf(chi2.getVal(), ndof)
"""print chi2.getVal()
print "chi2: %1.3f, ndof: %3i,p-value: %1.3f"%(chi2.getVal(), ndof, pval)
"""

canvas = ROOT.TCanvas("c","c", 1920,1080)
canvas.SetLogy(True)
frame.SetTitle('')
frame.GetXaxis().SetTitle(options.labelX)
frame.GetYaxis().SetTitle(options.labelY)
    
frame.GetXaxis().SetNdivisions(505)
frame.GetXaxis().SetLabelFont(42)
frame.GetXaxis().SetLabelSize(0.045)  
frame.GetXaxis().SetTitleFont(42)
frame.GetXaxis().SetTitleSize(0.050)
frame.GetXaxis().SetTitleOffset(0.9)
    
frame.GetYaxis().SetNdivisions(505)
frame.GetYaxis().SetLabelFont(42)
frame.GetYaxis().SetLabelSize(0.045)
frame.GetYaxis().SetTitleFont(42)
frame.GetYaxis().SetTitleSize(0.045)
frame.GetYaxis().SetTitleOffset(0.8)

frame.GetYaxis().SetRangeUser(1,500)

frame.Draw()


l = ROOT.TLegend(0.65,0.70,0.85,0.85)
l.SetFillStyle(1001)
l.SetFillColor(ROOT.kWhite)
l.SetLineColor(ROOT.kWhite)
l.SetLineWidth(2)
l.AddEntry(dataHist, "MC 2016", "p")
l.AddEntry(fitFunc, "Fit", "l")
l.AddEntry(0, "p-value: %1.3f"%pval, "")
if not(options.extraFile == "NO"):
  fExt = ROOT.TFile(options.extraFile, "READ")
  hExt = fExt.Get(options.extraHisto)
  hExt.Scale(fitHisto.Integral()/hExt.Integral())
  hExt.SetLineColor(ROOT.kRed)
  hExt.SetFillColorAlpha(ROOT.kRed, 0)
  hExt.Draw("same hist")
  l.AddEntry(hExt, "MC 2017", "l")
l.Draw()



canvas.SaveAs("test.pdf")
#canvas.SaveAs("~/www/ewk_fits/mll_log.pdf")
