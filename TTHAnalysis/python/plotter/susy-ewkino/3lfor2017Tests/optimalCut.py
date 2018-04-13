import ROOT
import numpy as np
from optparse import OptionParser

pr = OptionParser(usage="%prog Bin epsB")
(options, args) = pr.parse_args()

inFile = ROOT.TFile("/nfs/fanae/user/carlosec/www/likelihoodVarsv3//plots_likelihood.root", "READ")
wzHisto  = inFile.Get("likelihoodBinsv3_SR%s_prompt_WZ"%args[0])
sigHisto1 = inFile.Get("likelihoodBinsv3_SR%s_sig_225_135"%args[0])
sigHisto2 = inFile.Get("likelihoodBinsv3_SR%s_sig_250_160"%args[0])
sigHisto3 = inFile.Get("likelihoodBinsv3_SR%s_sig_275_185"%args[0])
epsB= float(args[1]) + 0.10 #Add a flat unc

sigHisto = sigHisto1 + sigHisto2 + sigHisto3


#Take out the underflow bin
wzHisto.SetBinContent(1,0)
sigHisto.SetBinContent(1,0)

#One-sided, S/sqrt(B)

StosqrtBbins = []
StosqrtB_S = []
StosqrtB_B = []

for i in range(1,wzHisto.GetNbinsX()):
  StosqrtBbins.append(i)
  StosqrtB_S.append(sigHisto.GetCumulative().GetBinContent(i))
  StosqrtB_B.append(wzHisto.GetCumulative().GetBinContent(i))

S = np.array(StosqrtB_S)
B = np.array(StosqrtB_B)

StosqrtBpdB = S/np.sqrt(B + epsB**2*B**2)

for i in range(len(S)):
  if B[i] == 0 : StosqrtBpdB[i] = 0
  #print StosqrtBpdB[i], S[i], np.sqrt(B)[i]
print max(StosqrtBpdB),B[StosqrtBbins[np.where(StosqrtBpdB==max(StosqrtBpdB))[-1][-1]]],"Signal specific: ",np.where(StosqrtBpdB==max(StosqrtBpdB)), wzHisto.GetBinCenter(StosqrtBbins[np.where(StosqrtBpdB==max(StosqrtBpdB))[-1][-1]])


#mIndex = StosqrtBbins[np.where(StosqrtBpdB==max(StosqrtBpdB))]





#Signal Agnostic
minPop = 999999
maxPop = 0
for i in range(1,wzHisto.GetNbinsX()):
  if sigHisto.GetBinContent(i) > 0:
    maxPop = i
    if i < minPop: minPop = i
#Generate signal agnostic behavior
T = np.zeros_like(B)


for i in range(minPop, len(T)):
  T[i] += T[i-1]+ 1./(maxPop - minPop + 1)
  if i > maxPop: T[i] = 1

TtosqrtBpdB = T/np.sqrt(B*(1+ epsB**2))

for i in range(len(S)):
  if B[i] == 0 : TtosqrtBpdB[i] = 0
  #print StosqrtBpdB[i], S[i], np.sqrt(B)[i]
print max(TtosqrtBpdB),B[StosqrtBbins[np.where(TtosqrtBpdB==max(TtosqrtBpdB))[-1][-1]]], "Signal agnostic: ", wzHisto.GetBinCenter(StosqrtBbins[np.where(TtosqrtBpdB==max(TtosqrtBpdB))[-1][-1]])


"""sigHisto.Scale(1./sigHisto.Integral())
wzHisto.Scale(1./wzHisto.Integral())
wzCum = wzHisto.GetCumulative()

print "Starting signal agnostic computatiosn...."
populatedBins = 0
for i in range(1,wzHisto.GetNbinsX()):
  if wzHisto.GetBinContent(i) > 0: populatedBins += 1

print "Computing two-sided signal agnostic interval"

#One-sided, signal agnostic (assume signal is plain)
dSided = []
dSidedBins = []
for i in range(1,wzHisto.GetNbinsX()):
  if wzHisto.GetBinContent(i) > 1./populatedBins: 
    dSided.append(wzHisto.GetBinCenter(i))
    dSidedBins.append(i)
print "2S- agnostic interval: [%1.3f,%1.3f]"%(dSided[0], dSided[-1]), "WZ eff: " + str(wzHisto.Integral(dSidedBins[0],dSidedBins[-1])), "WZ eff, 1S: " + str(wzHisto.Integral(dSidedBins[0],wzHisto.GetNbinsX()+1)), "Sig eff: " +  str(sigHisto.Integral(dSidedBins[0],dSidedBins[-1])), "Sig eff, 1S: " + str(sigHisto.Integral(dSidedBins[0],wzHisto.GetNbinsX()+1))
"""
