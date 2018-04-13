import ROOT
import matplotlib.pyplot as plt

inFile =  ROOT.TFile("/nfs/fanae/user/carlosec/www/likelihoodVars//plots_likelihood.root", "READ")
back = inFile.Get("likelihood_fit_forScan_ht_background")


sig1 = inFile.Get("likelihood_fit_forScan_ht_sig_225_135_norm")
sig2 = inFile.Get("likelihood_fit_forScan_ht_sig_250_160_norm")
sig3 = inFile.Get("likelihood_fit_forScan_ht_sig_275_185_norm")

backC = []
sig1C = []
sig2C = []
sig3C = []

nbins = back.GetNbinsX()
roc = 0.
for b in range(1,nbins+1):
  backC.append(1-back.Integral(1,b)/back.Integral())
  sig1C.append(1-sig1.Integral(b,nbins)/sig1.Integral())
  sig2C.append(1-sig3.Integral(b,nbins)/sig2.Integral())
  sig3C.append(1-sig2.Integral(b,nbins)/sig3.Integral())

for k in range(len(backC)-1):
  if sig1C[k+1]-sig1C[k] == 0: continue
  else:
    roc += (backC[k+1])*(sig1C[k+1]-sig1C[k])

print roc


plt.plot(sig1C, backC, "r-", label = "sig = 225-135")
plt.plot(sig2C, backC, "b-", label = "sig = 250-160")
plt.plot(sig3C, backC, "g-", label = "sig = 275-185")

plt.xlabel("Efficiency sig.")
plt.ylabel("1 - Efficiency back.")
plt.axis([0,1,0,1])
plt.savefig("test.pdf")
