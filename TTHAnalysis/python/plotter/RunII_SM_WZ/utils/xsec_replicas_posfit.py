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


inMinus  = ROOT.TFile("/nfs/fanae/user/carlosec/www/public/wz/Legacy/SRWZ_2016_PDF_minus//plots_wz_asymm.root","OPEN")
inPlus  = ROOT.TFile("/nfs/fanae/user/carlosec/www/public/wz/Legacy/SRWZ_2016_PDF_plus//plots_wz_asymm.root","OPEN")

output  = "/nfs/fanae/user/carlosec/www/public/wz/Legacy/SRWZ_2016_PDF_asymm/"
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
     print "cp ~/www/public/index.php "+output + "/" + var + "/"
     os.mkdir(output + "/" + var)
     os.system("cp ~/www/public/index.php "+output + "/" + var + "/")
  hP = inPlus.Get(name)
  if type(hP) == type(hs) or type(tc) == type(hP): continue
  hM = inMinus.Get(name)
  hR = hP.Clone("quot")
  hR.SetLineColor(ROOT.kBlack)
  hR.Add(hM)
  theInt = hR.Integral()
  hR.Scale(295.9/hR.Integral())
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
    hQuots[-1].Scale(298.9/theInt)
    hRatios.append(hQuots[-1].Integral()/hQuots[-1].GetNbinsX())
    print hRatios[-1]
    tG.SetPoint(i, i+1, hRatios[-1])
  hRatios = np.array(hRatios)
  print np.mean(hRatios), np.std(hRatios)
  #weights = [0.0104342135445,0.00990252689659,0.0105203520505,0.0101507941693,0.00664783773585,0.0103622734229,0.00857855155073,0.00923018561049,0.0105274263639,0.00789349097933,0.00974560694436,0.0103641399607,0.0102465274204,0.0104697064375,0.010178413849,0.0105268478944,0.0103189741948,0.0103881422019,0.00925000244642,0.00986468054528,0.0104913348151,0.00802788603929,0.0104028880938,0.0105012406135,0.0105192843418,0.00999161504322,0.0101667504274,0.0104839782998,0.00932234433436,0.0102950524456,0.0104666239618,0.0103727038976,0.00908740611738,0.0103205281183,0.0101163198895,0.0103980848292,0.0101017546458,0.00995002928899,0.0105316310661,0.0103639076516,0.00987206883086,0.00975429700382,0.0103388534163,0.0103733343079,0.00965704651635,0.0104461959423,0.0102086450843,0.0101842355873,0.0105150671617,0.0104261315582,0.00952426476015,0.00992568288078,0.0103211510671,0.00998638876081,0.0104958474775,0.0103853420833,0.0105363432216,0.0105418482751,0.0103013048339,0.00982603275241,0.0105250015266,0.0105131357376,0.0077352672029,0.00910815489579,0.010533646498,0.0105428716677,0.00376695690498,0.0102714828916,0.00982346782955,0.0102479083344,0.0105357591652,0.0104365233508,0.0104748612611,0.0105022855577,0.00980396474191,0.0102071673675,0.0104114202909,0.0102406970261,0.0104848595662,0.0104325744003,0.0105390174527,0.0103350848389,0.00898665186348,0.0103887274289,0.0100072809419,0.010457616469,0.0103263346784,0.00999787031163,0.0105408128058,0.0105046248356,0.00858359108271,0.010347635842,0.0104058122778,0.0103779216311,0.0102744546053,0.0101557997771,0.0105248098916,0.0105429748245,0.00998903832512,0.0089837942391]
  weights = [0.0102043453008,0.0107003119861,0.00931373218696,0.0105661849542,0.0038475077717,0.0103378734242,0.0106293091825,0.0107699548853,0.00986617229002,0.0103474827212,0.0107458054249,0.0086694314741,0.0104824518627,0.00904039306966,0.0105444685569,0.0093647964238,0.0103993546096,0.00874316347108,0.0107716921123,0.0107135048223,0.01004364178,0.010411669861,0.0102686287882,0.00919353440861,0.00991839964846,0.0106626791369,0.010553855613,0.00910515678197,0.0107764915472,0.0104291605832,0.0101226914305,0.010321321142,0.010752428946,0.00854506518903,0.010590945868,0.0102775454223,0.0106006915431,0.0106814684002,0.00983301995522,0.0103353300488,0.0107110493793,0.0107438794463,0.0103724551046,0.0103202958301,0.0107619858917,0.0101763348199,0.0105185493596,0.0105396595204,0.00927699436662,0.0102220632924,0.0107757338884,0.0106914580078,0.00854676823303,0.0106651659256,0.0100267990532,0.0103001868598,0.0094620479642,0.00956113197726,0.0104216196706,0.0107254469031,0.00988306099856,0.00995134785797,0.00486122244628,0.0107555006119,0.00943002099631,0.0096080662386,0.00680100166605,0.0104561412966,0.0107261874989,0.0104810518271,0.00979307750009,0.00890804426684,0.00906309623816,0.00919936026579,0.010731615146,0.00826101040203,0.0102522260296,0.0104882944297,0.0100663075081,0.0102080105714,0.00950078744215,0.0103777165263,0.0107351353224,0.0102943088163,0.0106549985371,0.0101473798618,0.0103896357774,0.0106596534455,0.00953469414575,0.00999101874185,0.0106309310922,0.010359879342,0.0102630906783,0.010312745552,0.0104528592366,0.0105623791357,0.00988434021955,0.00962401526694,0.0106639098512,0.010734589095]

  print "Old values: ", np.mean(hRatios), sum(hRatios)/100,  np.std(hRatios), (sum((hRatios-np.mean(hRatios))**2)/(100))**0.5
  print "New values: ", sum(hRatios*weights) , (sum(((hRatios-np.mean(hRatios))**2)*weights))**0.5

 
  hR.SetBinContent(1, np.mean(hRatios))
  c1 = ROOT.TCanvas("c1","c1",800,600)
  theCent = ROOT.TLine(0,hR.GetBinContent(1),101, hR.GetBinContent(1))
  theFill = ROOT.TBox(0, hR.GetBinContent(1)-np.std(hRatios), 101, hR.GetBinContent(1)+np.std(hRatios))
  theCent.SetLineColor(ROOT.kGreen+2)
  theCent.SetLineStyle(1)
  theCent.SetLineWidth(5)
  theFill.SetFillColorAlpha(ROOT.kGreen, 0.3)
  theMeas     = ROOT.TLine(0,298.9, 101,298.9)
  theMeasUp   = ROOT.TLine(0,309.4, 101,309.4)
  theMeasDown = ROOT.TLine(0,288.3, 101,288.3)
  theMeas.SetLineColor(ROOT.kRed)
  theMeasUp.SetLineColor(ROOT.kRed)
  theMeasDown.SetLineColor(ROOT.kRed)
  theMeas.SetLineWidth(3)
  theMeasUp.SetLineWidth(3)
  theMeasDown.SetLineWidth(3)
  theMeasUp.SetLineStyle(2)
  theMeasDown.SetLineStyle(2)

  theCentPost = ROOT.TLine(0,sum(hRatios*weights), 101, sum(hRatios*weights) )
  theFillPost = ROOT.TBox(0,sum(hRatios*weights)-(sum(((hRatios-np.mean(hRatios))**2)*weights))**0.5 , 101, sum(hRatios*weights) + (sum(((hRatios-np.mean(hRatios))**2)*weights))**0.5)
  theCentPost.SetLineColor(ROOT.kBlue+2)
  theCentPost.SetLineStyle(1)
  theCentPost.SetLineWidth(5)
  theFillPost.SetFillColorAlpha(ROOT.kBlue, 0.3)



  tG.SetMarkerStyle(22)
  tG.SetMarkerSize(1)
  tG.SetMarkerColor(30)
  tG.GetHistogram().SetMaximum(320)
  tG.GetHistogram().SetMinimum(280)

  tG.GetXaxis().SetTitle("Replica")
  tG.GetYaxis().SetTitle("#sigma_{fid} (WZ) / fb")
  tG.GetXaxis().SetRangeUser(0,101)

  tL = ROOT.TLegend(0.2,0.65,0.55,0.85)
  tL.AddEntry(tG,"Replicas","P")
  #tL.AddEntry(theFill,"PDF 1#sigma band","F")
  tL.AddEntry(theCentPost,"Prediction PostFit","F")
  tL.AddEntry(theCent,"Prediction x k_{Meas}","F")
  tL.AddEntry(theMeas,"Measurement","L")
  tG.Draw("APsame")
  theFill.Draw("same")
  theFillPost.Draw("same")
  theCent.Draw("same")
  theCentPost.Draw("same")
  theMeas.Draw("same")
  theMeasUp.Draw("same")
  theMeasDown.Draw("same")
  tL.Draw("same")
  tG.Draw("Psame")
 
  c1.SaveAs(output + "/" + "rpost" + "_PDF" + ".pdf")
  c1.SaveAs(output + "/" + "rpost" + "_PDF" + ".png")
