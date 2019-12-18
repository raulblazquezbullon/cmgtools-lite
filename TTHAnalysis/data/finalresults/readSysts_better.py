import os
import array
import ROOT

ptBins  = array.array('f', [10.,15.,20.,25.,30.,35.,50.,50.,60.,80.,200.])
etaBins = array.array('f', [0.,0.9,1.2,2.1,2.4])

theSF     = ROOT.TH2D("SF","SF", 10, ptBins, 4, etaBins)
theSFStat = ROOT.TH2D("SFstat","SFstat", 10, ptBins, 4, etaBins)
theSFSyst = ROOT.TH2D("SFSyst","SFSyst", 10, ptBins, 4, etaBins)
nbins = 40
baseFile = "base/passttH/egammaEffi.txt"
for f in os.listdir("./"):
  if not os.path.isdir(f): continue
  inF = open(baseFile.replace("base", f), "r")
  outF = ROOT.TFile(f + ".root", "RECREATE")
  outF.cd()

  for bin in nbins:
    
    etaVal = (float(w[0]) + float(w[1]))/2.
    ptVal  = (float(w[2]) + float(w[3]))/2.
    sf     = float(w[4])/float(w[6])
    stat   = float(w[5])/float(w[6])
    stat   = (stat**2 + (float(w[4])*float(w[7])/(float(w[6])**2))**2)**0.5
    syst   = ((float(w[8])/float(w[6]) - sf)**2 + (float(w[9])/float(w[6]) - sf)**2 + (float(w[4])/float(w[10]) - sf)**2 +(float(w[4])/float(w[11]) - sf)**2)**0.5
    theSF.SetBinContent(theSF.FindBin(ptVal, etaVal), sf)
    theSFStat.SetBinContent(theSF.FindBin(ptVal, etaVal), stat)
    theSFSyst.SetBinContent(theSF.FindBin(ptVal, etaVal), syst)
  theSF.Write()
  theSFStat.Write()
  theSFSyst.Write()
  outF.Close()
