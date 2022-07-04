import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
import os
import numpy as np
from scipy.stats import chi2

def weighted_avg_and_std(values, weights):
    average = np.average(values, weights=weights)
    # Fast and numerically precise:
    variance = np.average((values-average)**2, weights=weights)
    return (average,(variance)**0.5)

def weighted_percentile(arr, weights, quant):
  weights = weights/sum(weights)
  thethings  = zip(arr,weights)
  thethings.sort(key=lambda x: x[0])
  totsum     = 0.
  for i in range(len(arr)):
    if totsum + thethings[i][1] >= quant:
      rest = (quant - totsum)/thethings[i][1]
      if i == 0: return arr[i]
      else: return (1-rest)*thethings[i-1][0] + rest*thethings[i][0]
    else:
      totsum += weights[i]


inMinus  = ROOT.TFile("/nfs/fanae/user/carlosec/www/public/wz/Legacy/SRWZ_2016_PDF_minus//plots_wz_asymm.root","OPEN")
inPlus  = ROOT.TFile("/nfs/fanae/user/carlosec/www/public/wz/Legacy/SRWZ_2016_PDF_plus//plots_wz_asymm.root","OPEN")

output  = "/nfs/fanae/user/carlosec/www/public/wz/Legacy/SRWZ_2016_PDF_asymm/"
hs = ROOT.THStack()
tc = ROOT.TCanvas()
for key in inPlus.GetListOfKeys():
  name = key.GetName()
  if "norm" in name or "PDF" in name or "EWK" in name or "background" in name or "total" in name or "signal" in name or "stack" in name or "canvas" in name: continue
  if not "prompt_WZ" in name: continue
  if not "one" in name: continue
  var = name.replace("_prompt_WZ","") 
  if not os.path.exists(output + "/" + var):
     print "cp ~/www/public/index.php "+output + "/" + var + "/"
     os.mkdir(output + "/" + var)
     os.system("cp ~/www/public/index.php "+output + "/" + var + "/")
  hP = inPlus.Get(name)
  if type(hP) == type(hs) or type(tc) == type(hP): continue
  hM = inMinus.Get(name)
  hR = hP.Clone("quot")
  hR.SetLineColor(ROOT.kBlack)
  hR.Divide(hM)
  hR.SetMaximum(1.8)
  hR.SetMinimum(0.8)
  hRes = []
  hPlus = []
  hMinus = []
  hQuots = []
  hRatios = []
  hPVals = []
  hR.Print("all")
  tG = ROOT.TGraph()
  c2 = 0
  weights = []
  for i in range(100):
    #print name + "_PDF%i"%i
    hPlus.append(inPlus.Get(name + "_PDF%i"%i))
    hMinus.append(inMinus.Get(name + "_PDF%i"%i))
    hQuots.append(hPlus[-1].Clone("quot%i"%i))
    hQuots[-1].Divide(hMinus[-1])
    hRatios.append(hQuots[-1].Integral()/hQuots[-1].GetNbinsX())
    tG.SetPoint(i, i+1, hRatios[-1])
    c2 += chi2.sf((1.409 - hRatios[-1])**2/(0.04**2),1)
    weights.append( np.exp(-(1.409 - hRatios[-1])**2/(2*0.04**2)))
    print i, 1.409, hRatios[-1], weights[-1]
  weights = np.array(weights)
  weights = weights/sum(weights)
  print ",".join([str(w) for w in weights])
  print "Chi-square", c2/len(hRatios)
  hRatios = np.array(hRatios)
  print "Old values: ", np.mean(hRatios), sum(hRatios)/100,  np.std(hRatios), (sum((hRatios-np.mean(hRatios))**2)/(100))**0.5
  print "New values: ", sum(hRatios*weights) , (sum(((hRatios-np.mean(hRatios))**2)*weights))**0.5

  hR.SetBinContent(1, np.mean(hRatios))
  c1 = ROOT.TCanvas("c1","c1",800,600)
  c1.SetLeftMargin(0.12)
  c1.SetRightMargin(0.04)
  c1.SetBottomMargin(0.12)
  theCent = ROOT.TLine(0,hR.GetBinContent(1),101, hR.GetBinContent(1))
  theFill = ROOT.TBox(0, hR.GetBinContent(1)-0.012, 101, hR.GetBinContent(1)+0.012)
  theCent.SetLineColor(ROOT.kGreen+2)
  theCent.SetLineStyle(1)
  theCent.SetLineWidth(5)
  theFill.SetFillColorAlpha(ROOT.kGreen, 0.3)
  theFill.SetLineColor(ROOT.kGreen+2)
  theFill.SetLineStyle(1)
  theFill.SetLineWidth(3)


  theCentPost = ROOT.TLine(0,sum(hRatios*weights), 101, sum(hRatios*weights) )
  theFillPost = ROOT.TBox(0,sum(hRatios*weights)-(sum(((hRatios-np.mean(hRatios))**2)*weights))**0.5 , 101, sum(hRatios*weights) + (sum(((hRatios-np.mean(hRatios))**2)*weights))**0.5)
  theCentPost.SetLineColor(ROOT.kBlue+2)
  theCentPost.SetLineStyle(1)
  theCentPost.SetLineWidth(5)
  theFillPost.SetFillColorAlpha(ROOT.kBlue, 0.3)
  theFillPost.SetLineColor(ROOT.kBlue+2)
  theFillPost.SetLineStyle(1)
  theFillPost.SetLineWidth(3)


  theMeas     = ROOT.TLine(0,1.409, 101,1.409)
  theMeasUp   = ROOT.TLine(0,1.449, 101,1.449)
  theMeasDown = ROOT.TLine(0,1.369, 101,1.369)
  theMeas.SetLineColor(ROOT.kRed)
  theMeasUp.SetLineColor(ROOT.kRed)
  theMeasDown.SetLineColor(ROOT.kRed)
  theMeas.SetLineWidth(4)
  theMeas.SetLineStyle(10)
  theMeasUp.SetLineWidth(3)
  theMeasDown.SetLineWidth(3)
  theMeasUp.SetLineStyle(2)
  theMeasDown.SetLineStyle(2)



  tG.SetMarkerStyle(22)
  tG.SetMarkerSize(1)
  tG.SetMarkerColor(ROOT.kBlack)
  tG.GetXaxis().SetTitle("NNPDF30_nlo_as118 replica")
  tG.GetXaxis().SetTitleSize(0.07)
  tG.GetXaxis().SetLabelSize(0.055)
  tG.GetXaxis().SetTitleOffset(0.85)
  tG.GetYaxis().SetTitleSize(0.08)
  tG.GetYaxis().SetTitleOffset(0.63)
  tG.GetYaxis().SetTitle("A^{+#minus}_{WZ}")
  tG.GetYaxis().SetRangeUser(1.36,1.54)
  tG.GetXaxis().SetRangeUser(0,101)

  tL = ROOT.TLegend(0.2,0.60,0.89,0.895)
  tL.AddEntry(tG,"NNPDF30_nlo_as118 replicas","P")
  #tL.AddEntry(theFill,"PDF 1#sigma band","F")
  tL.AddEntry(theFill,"Prediction prefit","LF")
  tL.AddEntry(theFillPost,"Prediction postfit","LF")

  tL.AddEntry(theMeas,"Measurement","L")
  tG.Draw("APsame")
  theFill.Draw("same")
  theFillPost.Draw("same")
  theCent.Draw("same")
  theCentPost.Draw("same")
  theMeas.Draw("same")
  theMeasUp.Draw("same")
  theMeasDown.Draw("same")
  tL.SetBorderSize(0)
  tL.Draw("same")
  theMeasUpL   = ROOT.TLine(12.52,1.4758, 27.5,1.4758)
  theMeasDownL = ROOT.TLine(12.52,1.4827, 27.5,1.4827)
  theMeasUpL.SetLineColor(ROOT.kRed)
  theMeasDownL.SetLineColor(ROOT.kRed)
  theMeasUpL.SetLineWidth(3)
  theMeasDownL.SetLineWidth(3)
  theMeasUpL.SetLineStyle(2)
  theMeasDownL.SetLineStyle(2)
  theMeasUpL.Draw("same")
  theMeasDownL.Draw("same")
  tG.Draw("Psame")
  import CMS_lumi
  CMS_lumi.writeExtraText = True
  CMS_lumi.lumi_13TeV = "137 fb^{-1}"
  CMS_lumi.extraText  = ""
  CMS_lumi.lumi_sqrtS = 13
  CMS_lumi.CMS_lumi(c1, 4, 0, 0.08)
 
  c1.SaveAs(output + "/" + "mupost" + "_PDF" + ".pdf")
  c1.SaveAs(output + "/" + "mupost" + "_PDF" + ".png")
