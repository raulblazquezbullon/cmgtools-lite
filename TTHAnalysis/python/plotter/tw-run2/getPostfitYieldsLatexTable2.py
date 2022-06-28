import ROOT as r
import warnings as wr
import sys, os, copy, math
from collections import OrderedDict
from math import log10, floor


pathOfCards = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_cards/2022-04-21_withMETUncertainty/run2/"
fitDiagnosticsName = "fitDiagnosticsrun2_1j1t2j1t2j2t.root"

translateDict_processes = OrderedDict(
    [("tw"         , "\\tW"),
    ("ttbar"       , "\\ttbar"),
    ("dy"          , "\\dy"),
    ("vvttv"       , "VV$+\\ttbar$V"),
    ("nonworz"     , "Non-W/Z"),
    ("total"       , "Total"),
    ("data"        , "Data")]
)

channelsJets = {"ch1": "1j1b", "ch2": "2j1b", "ch3": "2j2b"}

def round_to_reference(x, y=2):
    
    if str(y)[0] == "1" or str(y)[0] == "0" and str(y)[2] == "1":
        if y>=2:
            return int(round(x, 1-int(floor(log10(y)))))
        else:
            return round(x, 1-int(floor(log10(y))))
    else:
        if y>=2:
            return int(round(x, 0-int(floor(log10(y)))))
        else:
            return round(x, 0-int(floor(log10(y))))


def getYieldLaTeXtables(shape, addRatio=None):
    if addRatio:
        table = "\\begin{tabular}{@{} l r@{\\,$\\pm$\\,}l r@{\\,$\\pm$\\,}l r@{\\,$\\pm$\\,}l c} \n \n%25s & %10s & %10s & %10s & %10s \\\ \hline \n" %("Process", "\\multicolumn{2}{c}{1j1b}", "\\multicolumn{2}{c}{2j1b}", "\\multicolumn{2}{c}{2j2b}", "Postfit/prefit")
    else:
        table = "\\begin{tabular}{ccccc} \n \n%25s & %10s & %10s & %10s \\\ \hline \n" %("Process", "1j1b", "2j1b", "2j2b")
    YieldsFile = r.TFile(pathOfCards + fitDiagnosticsName)
    shapes = YieldsFile.Get(shape)
    shapes.cd()
    yieldsProcess = {}
    for process in translateDict_processes:
        yieldsDict = {}
        uncDict = {}
        for region in channelsJets:
            subdir = shapes.Get(region)
            subdir.cd()
             

            histo = subdir.Get(process)
            #Asignaciones de yields e incertidumbres
            
            uncert = 0
            if process != "data":
                Nbins = histo.GetNbinsX()
                yieldsDict[region] = histo.Integral()
            else:
                Nbins = histo.GetN()
                yieldsDict[region] = sum(histo.GetY())
            for bins in range(1, Nbins+1):
                if process != "data":
                    uncert += histo.GetBinError(bins)**2
                else:
                    uncert += histo.GetErrorY(bins-1)**2
            
            
            uncDict[region] = uncert**(0.5)
            #Redondeo
            yieldsDict[region] = str(round_to_reference(yieldsDict[region],uncDict[region]))
            uncDict[region] = str(round_to_reference(uncDict[region],uncDict[region]))
        
        if addRatio:
            table = table + "%25s & %10s & %10s & %10s & %10s \\\ \n" %(translateDict_processes[process], yieldsDict["ch1"] + "&" + uncDict["ch1"], yieldsDict["ch2"] + "&" + uncDict["ch2"], yieldsDict["ch3"] + "&" + uncDict["ch3"], "" if process=="data" else str(round((float(yieldsDict["ch1"])+float(yieldsDict["ch2"])+float(yieldsDict["ch3"]))/(float(addRatio[process]["ch1"])+float(addRatio[process]["ch2"])+float(addRatio[process]["ch3"])),2)))
            if process in ["tw","nonworz"]:
                table = table + "[\cmsTabSkip]"
        
        else:
            table = table + "%25s & %10s & %10s & %10s \\\ \n" %(translateDict_processes[process], yieldsDict["ch1"] + "&" + uncDict["ch1"], yieldsDict["ch2"] + "&" + uncDict["ch2"], yieldsDict["ch3"] + "&" + uncDict["ch3"])            
        yieldsProcess[process] =  yieldsDict 
            
    
    table = table + "\end{tabular} \n"
    
    LatexTable = open(shape + "_Table.tex","w")
    LatexTable.write(table)
    LatexTable.close()
        
        
    return yieldsProcess


if __name__ == "__main__":
    prefit = getYieldLaTeXtables("shapes_prefit")
    
    postfit = getYieldLaTeXtables("shapes_fit_s", prefit)
