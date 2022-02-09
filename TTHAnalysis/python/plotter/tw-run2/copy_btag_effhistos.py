import ROOT as r
from copy import deepcopy
import os

tmpfil   = "temp_2022_01_21_pruebasbtageff"
savepath = "{cmsswpath}/src/CMGTools/TTHAnalysis/data/TopRun2/btagging/".format(cmsswpath = os.environ['CMSSW_BASE'])

xuandict = {"csvv2"   : "CSVv2",
            "deepcsv" : "DeepCSV",
            "deepjet" : "DFlav"}
wp = "M"
writethings = []
for y in [2016, 2017, 2018]:
    tmpf = r.TFile(tmpfil + "/varplots/" + str(y) + "/outeffs.root", "READ")
    for algo in ["deepjet", "deepcsv"]:
        for el in ["B", "C", "L"]:
            writethings.append(deepcopy(tmpf.Get("btageff_{a}_{t}_btag_{t}_tw".format(t = el, a = algo)).Clone("BtagSF{t}_{a}{w}_{y}".format(t = el, a = xuandict[algo], w = wp, y = y))))
    tmpf.Close()


outF = r.TFile(savepath + "/btagEffs_2022_01_29.root", "RECREATE")
for el in writethings: el.Write()
outF.Close()
