import ROOT
import sys

bins = ["eee-","eem-","mme-","mmm-","eee+","eem+","mme+","mmm+"]
ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetPaintTextFormat("2.1f");

def getTotUncs(tf, sig, tot, bkg):
  hsig = tf.Get(sig)
  nBkg = 0.5
  scale = 137.2/35.9
  hbkg = [tf.Get(i) for i in bkg]
  htot = tf.Get(tot)
  tot = htot.Integral()*scale
  totsig = hsig.Integral()*scale
  totbkg = sum([h.Integral()*scale for h in hbkg])
  totplus =htot.Integral(1,4)*scale
  totminus=htot.Integral(5,8)*scale
  return (totsig, totbkg, 100*nBkg*totbkg/totsig, 100*(tot)**0.5/totsig, 100*(1/totplus + 1/totminus)**0.5,100*((nBkg*totbkg/totsig)**2+((tot)**0.5/totsig)**2)**0.5)

def getChanUncs(tf, sig, tot, bkg, ich):
  hsig = tf.Get(sig)
  nBkg = 0.5
  scale = 137.2/35.9
  hbkg = [tf.Get(i) for i in bkg]
  htot = tf.Get(tot)
  tot = (htot.Integral(ich,ich)+htot.Integral(ich+4,ich+4))*scale
  totsig = (hsig.Integral(ich,ich)+hsig.Integral(ich+4,ich+4))*scale
  totbkg = sum([(h.Integral(ich,ich)+h.Integral(ich+4,ich+4))*scale for h in hbkg])
  totplus =htot.Integral(ich,ich)*scale
  totminus=htot.Integral(ich+4,ich+4)*scale
  return (totsig, totbkg, 100*nBkg*totbkg/totsig, 100*(tot)**0.5/totsig, 100*(1/totplus + 1/totminus)**0.5,100*((nBkg*totbkg/totsig)**2+((tot)**0.5/totsig)**2)**0.5)

hTotStat = ROOT.TH2D("hTotStat","hTotStat", 20,-1.05,0.95,20,-1.05,0.95)
hTotSyst = ROOT.TH2D("hTotSyst","hTotSyst", 20,-1.05,0.95,20,-1.05,0.95)
hTotQuad = ROOT.TH2D("hTotQuad","hTotQuad", 20,-1.05,0.95,20,-1.05,0.95)
hAsymmStat = ROOT.TH2D("hAsymmStat","hAsymmStat", 20,-1.05,0.95,20,-1.05,0.95)

hStat = []
hSyst = []
hQuad = []
hAsymm = []
for iCh in range(4):
  hStat.append(ROOT.TH2D("hTotStat"+str(iCh),"hTotStat"+str(iCh), 20,-1.05,0.95,20,-1.05,0.95))
  hSyst.append(ROOT.TH2D("hTotSyst"+str(iCh),"hTotSyst"+str(iCh), 20,-1.05,0.95,20,-1.05,0.95))
  hQuad.append(ROOT.TH2D("hTotQuad"+str(iCh),"hTotQuad"+str(iCh), 20,-1.05,0.95,20,-1.05,0.95))
  hAsymm.append(ROOT.TH2D("hAsymmStat"+str(iCh),"hAsymmStat"+str(iCh), 20,-1.05,0.95,20,-1.05,0.95))


for i in range(20):
  for j in range(20):
    print i, j, "~/www/public/wz/Legacy/SRWZ_16_MVACUTSSTIGHT_el%s_mu%s/plots_wz.root"%(str(0.1*i-1), str(0.1*j-1))
    rf = ROOT.TFile("~/www/public/wz/Legacy/SRWZ_16_MVACUTSSTIGHT_el%s_mu%s/plots_wz.root"%(str(0.1*i-1), str(0.1*j-1)), "READ")
    resTots = getTotUncs(rf, "flavorcharge3l_prompt_WZ", "flavorcharge3l_total",["flavorcharge3l_fakes_DY", "flavorcharge3l_fakes_T", "flavorcharge3l_fakes_VV","flavorcharge3l_fakes_TT"])
    resChan = []
    hTotStat.SetBinContent(i+1,j+1,resTots[3])
    hTotSyst.SetBinContent(i+1,j+1,resTots[2])
    hTotQuad.SetBinContent(i+1,j+1,resTots[5])
    hAsymmStat.SetBinContent(i+1,j+1,resTots[4])

    for iCh in range(1,5):
      resChan.append(getChanUncs(rf,"flavorcharge3l_prompt_WZ", "flavorcharge3l_total",["flavorcharge3l_fakes_DY", "flavorcharge3l_fakes_T", "flavorcharge3l_fakes_VV","flavorcharge3l_fakes_TT"],iCh))
      hStat[iCh-1].SetBinContent(i+1,j+1,resChan[-1][3])
      hSyst[iCh-1].SetBinContent(i+1,j+1,resChan[-1][2])
      hQuad[iCh-1].SetBinContent(i+1,j+1,resChan[-1][5])
      hAsymm[iCh-1].SetBinContent(i+1,j+1,resChan[-1][4])


def doPlot(pl):
  c1 = ROOT.TCanvas("c1","c1",800,600)
  pl.GetXaxis().SetTitle("Electron MVA")
  pl.GetYaxis().SetTitle("Muon MVA")
  pl.SetTitle("")
  pl.Draw("colzproftext")
  c1.SaveAs("~/www/public/wz/Legacy/IDPlotsSSTIGHT/%s.pdf"%pl.GetName())
  c1.SaveAs("~/www/public/wz/Legacy/IDPlotsSSTIGHT/%s.png"%pl.GetName())

doPlot(hTotStat)
doPlot(hTotSyst)
doPlot(hTotQuad)
doPlot(hAsymmStat)
for iCh in range(4):
  doPlot(hStat[iCh])
  doPlot(hSyst[iCh])
  doPlot(hQuad[iCh])
  doPlot(hAsymm[iCh])



