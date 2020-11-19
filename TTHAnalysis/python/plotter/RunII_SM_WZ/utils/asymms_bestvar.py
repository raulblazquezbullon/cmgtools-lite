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


#inPlus  = ROOT.TFile("/nfs/fanae/user/carlosec/www/wz/Legacy/SRWZ_2016_PDF_plus/plots_wz.root","OPEN") 
#inMinus = ROOT.TFile("/nfs/fanae/user/carlosec/www/wz/Legacy/SRWZ_2016_PDF_minus/plots_wz.root","OPEN")
#inMinus = ROOT.TFile("/nfs/fanae/user/carlosec/WZ/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/python/plotter/2018_pdf_fiducial_minus/plots_wz.root","OPEN")
#inPlus = ROOT.TFile("/nfs/fanae/user/carlosec/WZ/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/python/plotter/2018_pdf_fiducial_plus/plots_wz.root","OPEN")

output  = "/nfs/fanae/user/carlosec/www/wz/Legacy/SRWZ_2016_PDF_asymm/"
hs = ROOT.THStack()
tc = ROOT.TCanvas()
asymmglobstat = 0.027
for key in inPlus.GetListOfKeys():
  name = key.GetName()
  if "norm" in name or "PDF" in name or "EWK" in name or "background" in name or "total" in name or "signal" in name or "stack" in name or "canvas" in name: continue
  if not "prompt_WZ" in name: continue
  var = name.replace("_prompt_WZ","") 
  #print var
  #if not(var == "charge3l"): continue
  if not os.path.exists(output + "/" + var):
     print "cp ~/www/index.php "+output + "/" + var + "/"
     os.mkdir(output + "/" + var)
     os.system("cp ~/www/index.php "+output + "/" + var + "/")

  hP = inPlus.Get(name)
  if type(hP) == type(hs) or type(tc) == type(hP): continue
  hM = inMinus.Get(name)
  hR = hP.Clone("quot")
  hR.SetLineColor(ROOT.kBlack)
  hR.Divide(hM)
  hR.SetMaximum(1.1)
  hR.SetMinimum(0.9)
  hRes = []
  if hR.Integral() == 0: continue
  for iB in range(1, hR.GetNbinsX()+1):
    hRes.append(((asymmglobstat/(0.00000001 +hP.GetBinContent(iB)/hP.Integral())**0.5)**2 + (hP.GetBinError(iB)/(hP.GetBinContent(iB)+0.000000001))**2 )**0.5)
  #print hRes  
  hPlus = []
  hMinus = []
  hQuots = []
  hRatios = []
  hPVals = []
  #hR.Print("all")
  for i in range(33):
    #print name + "_PDF%i"%i
    hPlus.append(inPlus.Get(name + "_PDF%i"%i))
    hMinus.append(inMinus.Get(name + "_PDF%i"%i))
    hQuots.append(hPlus[-1].Clone("quot%i"%i))
    hQuots[-1].Divide(hMinus[-1])
    hRatios.append(hQuots[-1].Integral()/hQuots[-1].GetNbinsX())
    residual = 0.
    #print hPlus[-1].Integral(), hMinus[-1].Integral()
    for iB in range(1,hP.GetNbinsX()+1):
      residual += (hQuots[-1].GetBinContent(iB) - hR.GetBinContent(iB))**2/(2*hRes[iB-1]**2)
    #print i, residual
    hPVals.append(residual)
  chi2 = np.array(hPVals)
  hRatios = np.array(hRatios)
  weights = np.exp(-chi2)/sum(np.exp(-chi2))*len(chi2) 
  print "===================="
  print name, min(weights), np.average(weights), np.std(weights)
  #print weights
  oldweights = np.ones_like(weights)
  #print weighted_avg_and_std(hRatios, weights), weighted_avg_and_std(hRatios, oldweights)
  print np.average(hRatios), (sum((hRatios -np.average(hRatios))**2)/(len(hRatios)-1))**0.5
  print np.average(hRatios,weights=weights),  (sum((hRatios -np.average(hRatios,weights=weights))**2*weights)/(len(hRatios) -1))**0.5
  print np.percentile(hRatios,16), np.percentile(hRatios,84)
  #print np.average(hRatios), (sum((hRatios -np.average(hRatios))**2)/(1))**0.5
  #print np.average(hRatios,weights=weights),  (sum((hRatios -np.average(hRatios,weights=weights))**2*weights)/(1))**0.5
  print "Post/Pre", (sum((hRatios -np.average(hRatios,weights=weights))**2*weights)/(len(hRatios) -1))**0.5/(sum((hRatios -np.average(hRatios))**2)/(len(hRatios)-1))**0.5 

  #print weighted_percentile(hRatios, weights,0.05), weighted_percentile(hRatios,weights, 0.95), weighted_percentile(hRatios, oldweights,0.05), weighted_percentile(hRatios,oldweights, 0.95)
  #a = zip(hRatios, weights)
  #a.sort(key=lambda x: x[0])
  #print a
