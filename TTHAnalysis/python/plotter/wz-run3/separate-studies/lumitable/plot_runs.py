import ROOT as r
import os
from copy import deepcopy
r.gROOT.SetBatch(1)
files = { "jetmet" : ["/pool/phedex/nanoAODv10/27sep2022/Data/JetMET/data2022F_28nov2022_JetMET_Run2022F-PromptNanoAODv10_v1-v2/221128_143114/0000/", 1], 
          "muon" :   ["/pool/phedex/nanoAODv10/27sep2022/Data/Muon/data2022F_28nov2022_Muon_Run2022F-PromptNanoAODv10_v1-v2/221128_142900/0000/", 2],
          "muonEG" :   ["/pool/phedex/nanoAODv10/27sep2022/Data/MuonEG/data2022F_28nov2022_MuonEG_Run2022F-PromptNanoAODv10_v1-v2/221128_143326/0000/", 3],
          "EGamma" :   ["/pool/phedex/nanoAODv10/27sep2022/Data/EGamma/data2022F_28nov2022_EGamma_Run2022F-PromptNanoAODv10_v1-v2/221128_143539/0000/", 4]
}

 
# Create a chain
#stack = r.THStack()
l = r.TLegend(0.1, 0.7, 0.5, 0.88)
histos = {}
for dataset in files:
  chain = r.TChain("Events", "chain")
  chain.Add(files[dataset][0] + "tree*.root")

  c = r.TCanvas("c_%s"%dataset, "", 800, 800)
  chain.Draw("run")
  h = chain.GetHistogram() 
  
  hcopy = deepcopy(h.Clone("h_%s"%dataset))
  hcopy.SetLineColor(files[dataset][1])
  hcopy.SetLineWidth(3)
#  hcopy.Scale(1/hcopy.Integral())
  hcopy.Draw("hist")
  histos[dataset] = hcopy
  l.AddEntry(hcopy, dataset, "l")
  c.SaveAs("%s.png"%dataset)

c = r.TCanvas("c", "", 800, 800)

histos["jetmet"].SetMaximum(5000e3)
histos["jetmet"].Draw("hist")
histos["muon"].Draw("hist same")
histos["muonEG"].Draw("hist same")
histos["EGamma"].Draw("hist same")
l.Draw("same")
c.SaveAs("stack.png")

