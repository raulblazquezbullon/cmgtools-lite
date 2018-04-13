import os, sys, ROOT, array
from optparse import OptionParser
import CMS_lumi

ROOT.gROOT.SetBatch(True)
pr = OptionParser(usage="%prog [options]")

#Model options
pr.add_option( "--logZ"         , dest="doLog"       , action="store_false", default=True, help="Use a logarithmic scale for Z axis")
pr.add_option( "--doCumul"         , dest="doCumulative"       , action="store_false", default=True, help="Do cumulative distributions")
pr.add_option( "--doQuot"         , dest="doQuot"       , action="store_false", default=True, help="Do quotient (needs two distributions")
pr.add_option("--file1", dest = "file1", type="string", default = "./", help = "Root file for the first histogram")
pr.add_option("--file2", dest = "file2", type="string", default = "NO", help = "Root file for the second histogram")
pr.add_option("--histo1", dest = "histo1", type="string", default = "./", help = "First histogram")
pr.add_option("--histo2", dest = "histo2", type="string", default = "./", help = "Second histogram")
pr.add_option("--title", dest = "title", type="string", default = "S/B cumulative distribution", help = "Title of the plot")
pr.add_option("--lX", dest = "labelX", type="string", default = "P_{T}(l_{2}) [GeV]", help = "X axis label")
pr.add_option("--lY", dest = "labelY", type="string", default = "P_{T}(l_{3}) [GeV]", help = "Y axis label")
pr.add_option("--range", dest = "range", type="string", default = "5,25,5,25", help = "Plotting range")
pr.add_option("--pdir", dest = "outname", type="string", default = "./test", help = "Output name")

#Output formats
pr.add_option( "--ext", dest = "exts", type = "string", default = ".pdf,.png,.eps,.gif", help = "Output formats of the plot in a comma-separated list")


(options, args) = pr.parse_args()

minX, maxX, minY, maxY = eval(options.range)
formats =  options.exts.split(",")

def getCumulativeHisto(histo):
  tempHisto = histo.Clone()
  for i in range(histo.GetNbinsX()+1):
    for j in range(histo.GetNbinsY()+1):
      if i<j : tempHisto.SetBinContent(i,j,0)
      else:
        tmpValue = 0
        for k in range(histo.GetNbinsX()+1):
          for l in range(histo.GetNbinsY()+1):
            if (k>= i) and (l>= j):
              tmpValue += histo.GetBinContent(k,l)
        tempHisto.SetBinContent(i,j,tmpValue)
  return tempHisto

def getLimits(histo, uX, uY):
  minVal = 10000000.
  maxVal = 0.
  for i in range(histo.GetNbinsX()+1):
    for j in range(histo.GetNbinsY()+1):
      if (i <= uX) and (j <= uY) and not(histo.GetBinContent(i,j) == 0):
        theVal = histo.GetBinContent(i,j)
        if theVal < minVal: minVal = theVal
        if theVal > maxVal: maxVal = theVal
  return minVal, maxVal

fileIn1 = ROOT.TFile(options.file1, "READ")
srHisto = fileIn1.Get(options.histo1)

if not (options.file2 == "NO"):
  fileIn2 = ROOT.TFile(options.file2, "READ")
  srHisto2 = fileIn2.Get(options.histo2)


if options.doCumulative:
  srHisto = getCumulativeHisto(srHisto)
  if not (options.file2 == "NO"):  srHisto2 = getCumulativeHisto(srHisto2)

ROOT.gStyle.SetOptStat(0);
ROOT.gStyle.SetPaintTextFormat("1.3f");
canvas = ROOT.TCanvas("c", "c", 1920, 1080)
canvas.cd()

if options.doLog:
  pad = canvas.SetLogz(1)

if options.doQuot:
  srHisto.Divide(srHisto2)

srHisto.SetTitle(options.title)
minVal, maxVal = getLimits(srHisto, srHisto.GetXaxis().FindBin(maxX-1), srHisto.GetYaxis().FindBin(maxY-1))
#print minVal, maxVal, srHisto.GetXaxis().FindBin(maxX-1), srHisto.GetYaxis().FindBin(maxY-1)
srHisto.SetMaximum(maxVal*1.01)
srHisto.SetMinimum(minVal/1.01)
srHisto.GetXaxis().SetRangeUser(minX,maxX)
srHisto.GetYaxis().SetRangeUser(minY,maxY)
srHisto.GetXaxis().SetTitle(options.labelX)
srHisto.GetYaxis().SetTitle(options.labelY)

srHisto.GetXaxis().SetNdivisions(505)
srHisto.GetXaxis().SetLabelFont(42)
srHisto.GetXaxis().SetLabelSize(0.045)  
srHisto.GetXaxis().SetTitleFont(42)
srHisto.GetXaxis().SetTitleSize(0.050)
srHisto.GetXaxis().SetTitleOffset(0.9)

srHisto.GetYaxis().SetNdivisions(505)
srHisto.GetYaxis().SetLabelFont(42)
srHisto.GetYaxis().SetLabelSize(0.045)
srHisto.GetYaxis().SetTitleFont(42)
srHisto.GetYaxis().SetTitleSize(0.045)
srHisto.GetYaxis().SetTitleOffset(0.8)
srHisto.Draw("colztext")

for f in formats:
  canvas.SaveAs(options.outname + f)
