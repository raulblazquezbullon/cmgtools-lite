import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.gStyle.SetOptStat(0)
import os

inPlus  = ROOT.TFile("/nfs/fanae/user/carlosec/www/wz/Legacy/SRWZ_2016_PDF_plus/plots_wz.root","OPEN") 
inMinus = ROOT.TFile("/nfs/fanae/user/carlosec/www/wz/Legacy/SRWZ_2016_PDF_minus/plots_wz.root","OPEN")
output  = "/nfs/fanae/user/carlosec/www/wz/Legacy/SRWZ_2016_PDF_asymm/"
hs = ROOT.THStack()
tc = ROOT.TCanvas()
asymmglobstat = 0.027
for key in inPlus.GetListOfKeys():
  name = key.GetName()
  if "norm" in name or "PDF" in name or "EWK" in name or "background" in name or "total" in name or "signal" in name or "stack" in name or "canvas" in name: continue
  if not "prompt_WZ" in name: continue
  var = name.replace("_prompt_WZ","") 
  print var
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
  for iB in range(1, hR.GetNbinsX()+1):
    hRes.append(asymmglobstat/(hR.GetBinContent(i)/hR.Integral())**0.5)

  hPlus = []
  hMinus = []
  hQuots = []
  hPVals = []
  #hR.Print("all")
  for i in range(102):
    #print name + "_PDF%i"%i
    hPlus.append(inPlus.Get(name + "_PDF%i"%i))
    hMinus.append(inMinus.Get(name + "_PDF%i"%i))
    hQuots.append(hPlus[-1].Clone("quot%i"%i))
    hQuots[-1].Divide(hMinus[-1])
    residual = 0.
    for iB in range(1,hP.GetNbinsX()+1):
      residual += (hQuots[-1].GetBinContent(iB) - hR.GetBinContent(iB))**2
    hPVals.append(residual)
  test = zip(range(102), hPVals)
  test.sort(key = lambda x: x[1])
  iOrd = 0
  for k in test:
    iOrd += 1
    
    """c1 = ROOT.TCanvas("c1","c1",800,600)
    #hR.Draw("PE")
    print k, k[0], hQuots[k[0]].Print("all")
    hQuots[k[0]].Divide(hR)
    hQuots[k[0]].SetMaximum(1.1)
    hQuots[k[0]].SetMinimum(0.9)
    hQuots[k[0]].SetLineColor(ROOT.kRed)
    hQuots[k[0]].Draw("PE SAME")
    c1.SaveAs(output + "/" + var + "/" + "%i_PDFidx%i"%(iOrd,k[0]) + ".pdf")
    c1.SaveAs(output + "/" + var + "/" + "%i_PDFidx%i"%(iOrd,k[0]) + ".png")"""
