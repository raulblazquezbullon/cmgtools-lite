import ROOT
import numpy as np
from optparse import OptionParser
import matplotlib.pyplot as plt

pr = OptionParser(usage="%prog Bin epsB")
(options, args) = pr.parse_args()

inFile = ROOT.TFile("/nfs/fanae/user/carlosec/www/EWKino/ewk_2016_Extrap_2lss/plots_2lss.root", "READ")
wzHisto  = inFile.Get("MET_scan_background")
sigHisto = inFile.Get("MET_scan_sig_TChiSlepSnux0p95_350_325")

#One-sided, entropy

S = []

for i in range(1,wzHisto.GetNbinsX()+1):
  Bm = wzHisto.Integral(1,i)
  Bp = wzHisto.Integral(i,wzHisto.GetNbinsX()+1)
  Sm = sigHisto.Integral(1,i)
  Sp = sigHisto.Integral(i,sigHisto.GetNbinsX()+1)
  Qm = (Sm)/np.sqrt(Bm + 0.09*Bm**2)
  Qp = (Sp)/np.sqrt(Bp + 0.09*Bp**2)
  if Qm != Qm or Qp !=Qp: S.append(0)
  else: S.append(max([Qm, Qp]))

def smooth(y, box_pts):
    box = np.ones(box_pts)/box_pts
    y_smooth = np.convolve(y, box, mode='same')
    return y_smooth

print S
print max(S)
print np.where(S==max(S)), wzHisto.GetBinCenter(int(np.where(S==max(S))[0][0]))


for i in range(1000):
  S = smooth(S, 3)

print max(S)
print np.where(S==max(S)), wzHisto.GetBinCenter(int(np.where(S==max(S))[0][0]))


plt.plot(range(wzHisto.GetNbinsX()), S)
plt.savefig("test.pdf")
