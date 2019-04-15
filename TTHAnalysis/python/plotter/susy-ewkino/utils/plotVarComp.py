import ROOT
import array
import CMS_lumi

def evalWorkspace(w, point, theVar = "x", thePDF = "sum"):
    w.var(theVar).setVal(point)
    return w.pdf(thePDF).getVal(w.set("observables"))

xmin = 16.
xmax = 174.
theFit = "mll"
histName  = "mll3l_prompt_WZ"
xLabel = 'm_{ll} [GeV]'
isLogy = True
ymin = 0.00001
ymax = 0.5
wor1 = ROOT.TFile("../../../../data/WZ_MC/likelihood2016_function.root", "READ")
wor2 = ROOT.TFile("../../../../data/WZ_MC/likelihood2017_function.root", "READ")


dat1 = ROOT.TFile("../../../../data/WZ_MC/likelihood.root", "READ") 
dat2 = ROOT.TFile("../../../../data/WZ_MC/likelihood_2017.root", "READ")
hist1 = dat1.Get(histName)
hist2 = dat2.Get(histName)

nSteps = int(round((xmax-xmin)/hist1.GetBinWidth(1)))


w1 = wor1.Get("w_"+ theFit)
w2 = wor2.Get("w_"+ theFit)

### Fill fit TGraph
dx = (xmax-xmin)/nSteps
xVec = [xmin]
yVec1 = [evalWorkspace(w1, xmin)]
yVec2 = [evalWorkspace(w2, xmin)]
int1 = 0
int2 = 0
for i in range(nSteps):
    xTemp = xmin + dx*i
    xVec.append(xTemp)
    yVec1.append(evalWorkspace(w1, xTemp))
    yVec2.append(evalWorkspace(w2, xTemp))
    int1 +=  evalWorkspace(w1, xTemp) * dx
    int2 +=  evalWorkspace(w2, xTemp) * dx

for i in range(nSteps):
    yVec1[i] = yVec1[i]/int1
    yVec2[i] = yVec2[i]/int2

a_x  = array.array('d', xVec)
a_y1 = array.array('d', yVec1)
a_y2 = array.array('d', yVec2)
print len(a_x), len(a_y1), len(a_y2)
gr1 = ROOT.TGraph(nSteps+1, a_x, a_y1)
gr2 = ROOT.TGraph(nSteps+1, a_x, a_y2)

gr1.SetLineColor(ROOT.kRed)
gr2.SetLineColor(ROOT.kBlue)

hist1.SetMarkerColor(ROOT.kRed)
hist2.SetMarkerColor(ROOT.kBlue)


canvas = ROOT.TCanvas("c", "c", 1600, 1080)
canvas.cd()
canvas.SetLogy(isLogy)
leg = ROOT.TLegend(0.6, 0.8, 0.8, 0.9);
ROOT.gStyle.SetOptStat(0);
ROOT.gStyle.SetPaintTextFormat("4.2f")
ROOT.gStyle.SetOptTitle(0)
ROOT.gPad.Update()
canvas.SetTickx(1)
canvas.SetTicky(1)

canvas.SetRightMargin (0.19)
canvas.SetTopMargin   (0.06)
canvas.SetLeftMargin  (0.14)
canvas.SetBottomMargin(0.14)

hFr = canvas.DrawFrame(xmin,ymin,xmax,ymax)
hFr.GetXaxis().SetTitle(xLabel)
hFr.GetYaxis().SetTitle("Events/norm")
hFr.GetXaxis().SetNdivisions(50210)
hFr.GetXaxis().SetLabelFont(42)
hFr.GetXaxis().SetLabelSize(0.035)  
hFr.GetXaxis().SetTitleFont(42)
hFr.GetXaxis().SetTitleSize(0.05)
hFr.GetXaxis().SetLabelOffset(0.007)
hFr.GetXaxis().SetTitleOffset(1.2)
hFr.GetYaxis().SetNdivisions(50210)
hFr.GetYaxis().SetLabelFont(42)
hFr.GetYaxis().SetLabelSize(0.035)
hFr.GetYaxis().SetTitleFont(42)
hFr.GetYaxis().SetTitleSize(0.05)
hFr.GetYaxis().SetLabelOffset(0.007)
hFr.GetYaxis().SetTitleOffset(1.2)

hist1.Scale(1/hist1.Integral())
hist2.Scale(1/hist2.Integral())
iF1 = 0
iF2 = 0
iH1 = 0
iH2 = 0
for i in range(nSteps):
    iF1 += gr1.Eval(xmin + dx*i)
    iF2 += gr2.Eval(xmin + dx*i)
    iH1 += hist1.GetBinContent(hist1.FindBin(xmin + dx*i))
    iH2 += hist2.GetBinContent(hist2.FindBin(xmin + dx*i))
hist1.Scale(iF1/iH1)
hist2.Scale(iF2/iH2)

iF1 = 0
iF2 = 0
iH1 = 0
iH2 = 0
for i in range(nSteps):
    iF1 += gr1.Eval(xmin + dx*i)
    iF2 += gr2.Eval(xmin + dx*i)
    iH1 += hist1.GetBinContent(hist1.FindBin(xmin + dx*i))
    iH2 += hist2.GetBinContent(hist2.FindBin(xmin + dx*i))
    #print iF1, iF2, iH1, iH2, hist1.GetBinCenter(i+1)

hist1.Draw("P same")
hist2.Draw("P same")
#gr1.Draw("C")
#gr2.Draw("C")


leg.AddEntry(hist1, "WZ MC 2016","p")
leg.AddEntry(hist2, "WZ MC 2017","p")
#leg.AddEntry(gr1, "Fit 2016","l")
#leg.AddEntry(gr2, "Fit 2017","l")

leg.Draw("same")

CMS_lumi.writeExtraText = True
CMS_lumi.lumi_13TeV = "%.1f fb^{-1}" % 35.9
CMS_lumi.extraText  = "Preliminary"
CMS_lumi.lumi_sqrtS = "13"
CMS_lumi.CMS_lumi(canvas, 4, 0, 0.035)

canvas.SaveAs("test.pdf")


