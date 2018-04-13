import ROOT
import matplotlib.pyplot as plt

inFile =  ROOT.TFile("/nfs/fanae/user/carlosec/www/likelihoodVars//plots_likelihood.root", "READ")
back1 = inFile.Get("likelihood_fit_forScan_background")
back2 = inFile.Get("likelihood_fit_forScan_ht_background")


sig1 = inFile.Get("likelihood_fit_forScan_sig_225_135_norm")
sig2 = inFile.Get("likelihood_fit_forScan_ht_sig_225_135_norm")

back1C = []
sig1C = []
back2C = []
sig2C = []


nbins = back1.GetNbinsX()
roc1 = 0.
roc2 = 0.
for b in range(1,nbins+1):
  back1C.append(1-back1.Integral(1,b)/back1.Integral())
  sig1C.append(1-sig1.Integral(b,nbins)/sig1.Integral())
  back2C.append(1-back2.Integral(1,b)/back2.Integral())
  sig2C.append(1-sig2.Integral(b,nbins)/sig2.Integral())

for k in range(len(back1C)-1):
  if sig1C[k+1]-sig1C[k] == 0: continue
  else:
    roc1 += (back1C[k+1])*(sig1C[k+1]-sig1C[k])

for k in range(len(back2C)-1):
  if sig2C[k+1]-sig2C[k] == 0: continue
  else:
    roc2 += (back2C[k+1])*(sig2C[k+1]-sig2C[k])


print roc1, roc2


plt.plot(sig1C, back1C, "r-", label = "Likelihood without ht, roc= %.3f"%roc1)
plt.plot(sig2C, back2C, "b-", label = "Likelihood with ht, roc= %.3f"%roc2)


plt.xlabel("Efficiency sig. (TCHIWZ 225-135)")
plt.ylabel("1 - Efficiency back. (SM MC)")
plt.legend(loc="best")
plt.axis([0,1,0,1])
plt.savefig("/nfs/fanae/user/carlosec/www/ewk_fits/ht_vs_noht.png")
