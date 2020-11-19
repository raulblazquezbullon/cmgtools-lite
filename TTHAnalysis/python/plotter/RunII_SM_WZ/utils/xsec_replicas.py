import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
import os
import numpy as np

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


inMinus  = ROOT.TFile("/nfs/fanae/user/carlosec/www/wz/Legacy/SRWZ_2016_PDF_minus//plots_wz_asymm.root","OPEN")
inPlus  = ROOT.TFile("/nfs/fanae/user/carlosec/www/wz/Legacy/SRWZ_2016_PDF_plus//plots_wz_asymm.root","OPEN")

output  = "/nfs/fanae/user/carlosec/www/wz/Legacy/SRWZ_2016_PDF_asymm/"
hs = ROOT.THStack()
tc = ROOT.TCanvas()
asymmglobstat = 0.027
for key in inPlus.GetListOfKeys():
  name = key.GetName()
  if "norm" in name or "PDF" in name or "EWK" in name or "background" in name or "total" in name or "signal" in name or "stack" in name or "canvas" in name: continue
  if not "prompt_WZ" in name: continue
  if not "one" in name: continue
  var = name.replace("_prompt_WZ","") 
  if not os.path.exists(output + "/" + var):
     print "cp ~/www/index.php "+output + "/" + var + "/"
     os.mkdir(output + "/" + var)
     os.system("cp ~/www/index.php "+output + "/" + var + "/")
  hP = inPlus.Get(name)
  if type(hP) == type(hs) or type(tc) == type(hP): continue
  hM = inMinus.Get(name)
  hR = hP.Clone("quot")
  hR.SetLineColor(ROOT.kBlack)
  hR.Add(hM)
  theInt = hR.Integral()
  hR.Scale(290.7/hR.Integral())
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
  for i in range(100):
    #print name + "_PDF%i"%i
    hPlus.append(inPlus.Get(name + "_PDF%i"%i))
    hMinus.append(inMinus.Get(name + "_PDF%i"%i))
    hQuots.append(hPlus[-1].Clone("quot%i"%i))
    hQuots[-1].Add(hMinus[-1])
    hQuots[-1].Scale(290.7/theInt)
    hRatios.append(hQuots[-1].Integral()/hQuots[-1].GetNbinsX())
    print hRatios[-1]
    tG.SetPoint(i, i+1, hRatios[-1])
  hRatios = np.array(hRatios)
  print np.mean(hRatios), np.std(hRatios)
  hR.SetBinContent(1, np.mean(hRatios))
  c1 = ROOT.TCanvas("c1","c1",800,600)
  theCent = ROOT.TLine(0,hR.GetBinContent(1),101, hR.GetBinContent(1))
  theFill = ROOT.TBox(0, hR.GetBinContent(1)*0.989, 101, hR.GetBinContent(1)*1.011)
  theCent.SetLineColor(ROOT.kGreen+2)
  theCent.SetLineStyle(1)
  theCent.SetLineWidth(5)
  theFill.SetFillColorAlpha(ROOT.kGreen, 0.3)
  theMeas     = ROOT.TLine(0,290.7, 101,290.7)
  theMeasUp   = ROOT.TLine(0,302.96, 101,302.96)
  theMeasDown = ROOT.TLine(0,277.74, 101,277.74)
  theMeas.SetLineColor(ROOT.kRed)
  theMeasUp.SetLineColor(ROOT.kRed)
  theMeasDown.SetLineColor(ROOT.kRed)
  theMeas.SetLineWidth(3)
  theMeasUp.SetLineWidth(3)
  theMeasDown.SetLineWidth(3)
  theMeasUp.SetLineStyle(2)
  theMeasDown.SetLineStyle(2)



  tG.SetMarkerStyle(22)
  tG.SetMarkerSize(1)
  tG.SetMarkerColor(30)
  tG.GetHistogram().SetMaximum(350)
  tG.GetHistogram().SetMinimum(250)

  tG.GetXaxis().SetTitle("Replica")
  tG.GetYaxis().SetTitle("#sigma_{fid} (WZ) / fb")
  tG.GetXaxis().SetRangeUser(0,101)

  tL = ROOT.TLegend(0.2,0.65,0.55,0.85)
  tL.AddEntry(tG,"Replicas","P")
  tL.AddEntry(theFill,"PDF 1#sigma band","F")
  tL.AddEntry(theCent,"Prediction x k_{NLO}^{meas}","F")
  tL.AddEntry(theMeas,"Measurement","L")
  tG.Draw("APsame")
  theFill.Draw("same")
  theCent.Draw("same")
  theMeas.Draw("same")
  theMeasUp.Draw("same")
  theMeasDown.Draw("same")
  tL.Draw("same")
  tG.Draw("Psame")
 
  c1.SaveAs(output + "/" + "r" + "_PDF" + ".pdf")
  c1.SaveAs(output + "/" + "r" + "_PDF" + ".png")
