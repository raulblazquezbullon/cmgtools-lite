#import ROOT as r
import warnings as wr
import sys, os, copy, math
from collections import OrderedDict
from math import log10, floor


translateDict = OrderedDict(
    [("1j1b"                     , "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp/2021-06-01/InputVar/run2/1j1t/MVAtrain/jet1_pt.txt"),
    ("1j1b_Differential"    , "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp/2021-06-01/Differential/differential/jet1_pt.txt"),
    ("2j1b"                      , "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp/2021-06-01/InputVar/run2/2j1t/MVAtrain/jet2_pt.txt"),
    ("2j2b"    , "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp/2021-06-01/FitPlots/run2/2j2t/jet2_pt_rebin.txt")]
)

translateDict_processes = OrderedDict(
    [("tW"         , "tW"),
    ("t\\bar{t}"       , "t$\\bar{\\mathrm{t}}$"),
    ("DY"          , "Drell-Yan"),
    ("VV+t\\bar{t}V"       , "VV$+\\mathrm{t}\\bar{\\mathrm{t}}$V"),
    ("Non-W/Z"     , "Non-W/Z"),
    ("DATA"        , "Data")]
)

def round_to_reference(x, y):
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


def getYieldLaTeXtables(RegionsandPath, ProcessesDict):
    for region in RegionsandPath:
        table = "\\begin{tabular}{ccccc} \n \hline \n%25s & %10s & %10s & %10s & %10s \\\ \hline \n" %("Process", "Yields", "Stat. Unc", "Sys. Unc", "Total Unc")
        YieldsFile = open(RegionsandPath[region],"r")
        totalYields = 0
        StatUncTotalYields = 0
        SysUncTotalYields = 0
        TotUncTotalYields = 0
        for line in YieldsFile:
            for process in ProcessesDict:
                if line.split()[0] == process and process != "DATA":
                    #Asignaciones de yields e incertidumbres
                    yields = float(line.split()[1])
                    statUnc = float(line.split()[3])
                    sysUnc = float(line.split()[6])
                    totalUnc = float(line.split()[10])
                    totalYields += yields
                    StatUncTotalYields += statUnc**2
                    SysUncTotalYields += sysUnc**2
                    TotUncTotalYields += totalUnc**2
                    #Redondeo
                    yields = str(round_to_reference(yields, totalUnc))
                    statUnc = str(round_to_reference(statUnc, statUnc))
                    sysUnc = str(round_to_reference(sysUnc, sysUnc))
                    totalUnc = str(round_to_reference(totalUnc, totalUnc))
                    table = table + "%25s & %10s & %10s & %10s & %10s \\\ \n" %(ProcessesDict[process], yields, statUnc, sysUnc, totalUnc)
                if line.split()[0] == "DATA":
                    #Asignaciones de yields e incertidumbres
                    yieldsData = float(line.split()[1])
                    statUncData = yieldsData**0.5
                    #Redondeo
                    yieldsData = str(round_to_reference(yieldsData, statUncData))
                    statUncData = str(round_to_reference(statUncData, statUncData))
                else: continue
        
        StatUncTotalYields = StatUncTotalYields**0.5
        SysUncTotalYields = SysUncTotalYields**0.5
        TotUncTotalYields = TotUncTotalYields**0.5
        #Redondeo
        totalYields = str(round_to_reference(totalYields, TotUncTotalYields))
        StatUncTotalYields = str(round_to_reference(StatUncTotalYields, StatUncTotalYields))
        SysUncTotalYields = str(round_to_reference(SysUncTotalYields, SysUncTotalYields))
        TotUncTotalYields = str(round_to_reference(TotUncTotalYields, TotUncTotalYields))
        table = table + "%25s & %10s & %10s & %10s & %10s \\\ \n" %("\\textbf{Total}", totalYields, StatUncTotalYields, SysUncTotalYields, TotUncTotalYields)
        #Data
        table = table + "%25s & %10s & %10s & %10s & %10s \\\ \hline \n" %("\\textbf{Data}", yieldsData, statUncData, "0", statUncData)
        table = table + "\end{tabular} \n"
        
        LatexTable = open(region + "_Table.tex","w")
        LatexTable.write(table)
        LatexTable.close()
        
        
    return


if __name__ == "__main__":
    getYieldLaTeXtables(translateDict,translateDict_processes)
