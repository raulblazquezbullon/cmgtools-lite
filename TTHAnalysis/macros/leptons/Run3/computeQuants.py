import ROOT as r
from array import array
import numpy as np
from copy import deepcopy
import os
import re
import sys

r.gROOT.SetBatch(1)
r.gStyle.SetOptStat(0)

# syntax: python computeQuants [path]


def rebin_histo(nquant, h, firstBin = [-1.0]):

    #h = get_histos(var, path, someProcess = "background")

    xquant = array('d')
    yquant = array('d', [0.] * nquant)
    init = array('d', firstBin) #min bin

    for q in range(0, nquant):
            xquant.append(float((q+1))/nquant)

    h.GetQuantiles(nquant, yquant, xquant) # Use background to rebin


    rebining = init + yquant
    rebining = rebining.tolist()

    return rebining

if __name__ == "__main__":

    firstBin = [0.0]
        
    infile = sys.argv[1]
    f = r.TFile.Open(infile)

    files = [
        "UL", "ttw", "tth", "ttw_vetoLeak"
    ]
    colors = {
        "UL" : [r.kAzure+7, r.kRed+1],
        "ttw_vetoLeak" : [r.kTeal-7, r.kMagenta+2],
        "tth" : [r.kGreen+1, r.kMagenta+2],
        "ttw" : [r.kTeal-7, r.kMagenta+2] 
    }

    histos = {}
    
    
    nq = 10
    if "el" in infile:
        objectname = "Electron"
    else:
        objectname = "Muon"
    for file_ in files:
        histoname_sig = "h_sig_%s"%file_ if "Leak" not in file_ else "h_sig%s"%file_
        histoname_bkg = "h_bkg_%s"%file_ if "Leak" not in file_ else "h_bkg%s"%file_

        hsig = f.Get(histoname_sig)
        hsig.Rebin(50)
        hbkg = f.Get(histoname_bkg)
        hbkg.Rebin(50)
        
        htorebin = deepcopy(hsig)
        hden = deepcopy(hsig)
        hden.Add(hbkg)
        htorebin.Divide(hden)
        
        # Get the binning
        rebining = rebin_histo(nq, hbkg)
        if file_ == "UL": rebining[-1] = 1
        hsigrebin = hsig.Rebin(nq, "hsig_rebin", xbins = np.array(rebining))
        hsigrebin.Scale(1/hsigrebin.Integral())
        
        hbkgrebin = hbkg.Rebin(nq, "hbkg_rebin", xbins = np.array(rebining))
        hbkgrebin.Scale(1/hbkgrebin.Integral())
        
        # Apply some cosmetics
        hsigrebin.SetTitle( objectname + " Yields vs BDT Discriminant")
        hsigrebin.GetXaxis().SetTitle(r"Quantile of #frac{S}{S+B}")
        hsigrebin.GetYaxis().SetTitle("Normalized yields")
        #hsigrebin.GetXaxis().SetRangeUser(-1, 1)
        hsigrebin.GetYaxis().SetRangeUser(0.00001, 1.25)
        hsigrebin.SetLineColor(colors[file_][1])
        hsigrebin.SetLineWidth(2)
        hbkgrebin.SetLineColor(colors[file_][0])
        hbkgrebin.SetLineWidth(2)
        leg = r.TLegend(0.35, 0.75, 0.65, 0.85)
        leg.SetLineWidth(0)
        if file_ != "UL":
            leg.AddEntry(hbkgrebin, "background (%s)"%(file_), "l")
            leg.AddEntry(hsigrebin, "signal (%s)"%(file_), "l")
        else:
            leg.AddEntry(hbkgrebin, "background (%s)"%("Legacy"), "l")
            leg.AddEntry(hsigrebin, "signal (%s)"%("Legacy"), "l")


        c = r.TCanvas("c", "", 600, 600)
        #c.SetLogy()
        #c.SetLogx()
        hsigrebin.Draw("hist")
        #hbkgrebin.Draw("hist same")
        leg.Draw("same")
        c.SaveAs("bdt" + objectname + "_yields_2022EE_%s_%dbins.png"%(file_, nq))
        c.SaveAs("bdt" + objectname + "_yields_2022EE_%s_%dbins.pdf"%(file_, nq))

        print(rebining)
            

