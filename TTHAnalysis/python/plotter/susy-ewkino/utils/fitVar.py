import os, sys, ROOT, array
from optparse import OptionParser
import CMS_lumi


"""python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo htJet30j_prompt_WZ --lX 'H_{T}(jet, p_{T} > 30 GeV) [GeV]' --lY 'Events' """

ROOT.gROOT.SetBatch(True)
pr = OptionParser(usage="%prog [options]")

#Model options
pr.add_option("--file", dest = "file", type="string", default = "plots.root", help = "Root file with the histograms")
pr.add_option("--histo", dest = "histo", type="string", default = "signal", help = "Histogram Name")
pr.add_option("--lX", dest = "labelX", type="string", default = "Variable", help = "X axis label")
pr.add_option("--lY", dest = "labelY", type="string", default = "Events", help = "Y axis label")
pr.add_option("--pset", dest = "pset", type=float, default = [], action = "append", help = "Parameter set (to be implemented)")
pr.add_option("--pdir", dest = "outname", type="string", default = "~/www/ewk_fits/test", help = "Output name")
pr.add_option("--fit", dest = "theFit", type="string", default = "mll", help = "Name of the fit in fitConfig.py")


#Output formats
pr.add_option( "--ext", dest = "exts", type = "string", default = ".pdf,.png,.eps", help = "Output formats of the plot in a comma-separated list")

(options, args) = pr.parse_args()

theFit = options.theFit


#Set ROODATA
#Input model
if theFit == "ht":
    from fitht import*
elif theFit == "met":
    from fitmet import*
elif theFit == "mll":
    from fitmll import*
elif theFit =="mtW":
    from fitmtW import*
#Load histogram
rootFile = ROOT.TFile(options.file, "READ")
fitHisto = rootFile.Get(options.histo)

dataHist = ROOT.RooDataHist("data","data",dataArgSet,fitHisto)
dataHist.plotOn(frame)

print "Fitting function..."
fitFunc.fitTo(dataHist)
x.setRange(0,3000)
fitFunc.plotOn(frame, ROOT.RooFit.Name("fitFunc"))

"""chi2 = ROOT.RooChi2Var("chi2", "chi2", fitFunc, dataHist)
pval = 1-ROOT.Math.chisquared_cdf(chi2.getVal(), ndof)
print chi2.getVal()
print "chi2: %1.3f, ndof: %3i,p-value: %1.3f"%(chi2.getVal(), ndof, pval)"""


canvas = ROOT.TCanvas("c","c", 1920,1080)
canvas.SetLogy(False)
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

frame.Draw()

l = ROOT.TLegend(0.65,0.70,0.85,0.85)
l.SetFillStyle(1001)
l.SetFillColor(ROOT.kWhite)
l.SetLineColor(ROOT.kWhite)
l.SetLineWidth(2)
l.AddEntry(dataHist, "MC", "p")
l.AddEntry(fitFunc, "Fit", "l")
#l.AddEntry(0, "p-value: %1.3f"%pval, "")
l.Draw()

w = ROOT.RooWorkspace("w_" + theFit)
getattr(w, "import")(fitFunc)
w.defineSet("parameters", fitFunc.getParameters(ROOT.RooArgSet(x)))
w.defineSet("observables", ROOT.RooArgSet(x))
print w.Print()
f = ROOT.TFile(options.outname +"_fitfunction.root","RECREATE")
w.Write()
f.Close()

canvas.SaveAs(options.outname +".pdf")
canvas.SaveAs(options.outname +".root")
canvas.SaveAs(options.outname +".png")
#canvas.SaveAs("~/www/ewk_fits/mll_log.pdf")

"""
root [14] w->var("x")->setVal(91.16)
root [15] w->pdf("sum")->getVal(w->set("observables"))
(double) 0.137616
root [16] w->var("x")->setVal(500)
root [17] w->pdf("sum")->getVal(w->set("observables"))
"""
