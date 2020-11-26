# -*- coding: UTF-8 -*-.
#!/usr/bin/env python
import os, sys, enum, argparse


#Read the cards folder: neccesary structure 1j1tNbins ans 2j1tNbins

cardsFolder = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_cards/2020-11-26/run2/"
folder_2j2t = "2j2t"
files = os.listdir(cardsFolder)

#---Pasos---
combinecards_command = "combineCards.py {cardsFolder}{folder_1j1t}/cuts-tw-1j1t.txt {cardsFolder}{folder_2j1t}/cuts-tw-2j1t.txt {cardsFolder}{folder_2j2t}/cuts-tw-2j2t.txt >> {cardsFolder}fits/combinada_{binning}.txt"
workspace_command = "text2workspace.py {cardsFolder}fits/combinada_{binning}.txt"
fit_command = "combine -M FitDiagnostics --expectSignal 1 {cardsFolder}fits/combinada_{binning}.root >> {cardsFolder}fits/output/output_all_{binning}.txt --robustFit 1 --cminDefaultMinimizerStrategy 0"




if not os.path.isdir(cardsFolder+"fits"):
    os.system("mkdir -p " + cardsFolder+"fits")
if not os.path.isdir(cardsFolder+"fits"+"/output"):
    os.system("mkdir -p " + cardsFolder+"fits"+"/output")



Nbins1j1t = []
Nbins2j1t = []

Folders1j1t = []
Folders2j1t = []
for subfile in files:
    if "1j1t" in subfile:
        position_reg = subfile.find("1j1t")
        position_bins = subfile.find("bins")
        numberBins = subfile[position_reg+4:position_bins]
        Nbins1j1t.append(numberBins)
        Folders1j1t.append(subfile)
    elif "2j1t" in subfile:
        position_reg = subfile.find("2j1t")
        position_bins = subfile.find("bins")
        numberBins = subfile[position_reg+4:position_bins]
        Nbins2j1t.append(numberBins)
        Folders2j1t.append(subfile)



#Two categories

i=0
j=0
for cat_1j1t in Folders1j1t:
    for cat_2j1t in Folders2j1t:
        print(combinecards_command.format(cardsFolder = cardsFolder, folder_1j1t = cat_1j1t, folder_2j1t = cat_2j1t, folder_2j2t = folder_2j2t, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t"))
        os.system(combinecards_command.format(cardsFolder = cardsFolder, folder_1j1t = cat_1j1t, folder_2j1t = cat_2j1t, folder_2j2t = folder_2j2t, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t"))
        
        print(workspace_command.format(cardsFolder = cardsFolder, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t"))
        os.system(workspace_command.format(cardsFolder = cardsFolder, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t"))
        
        print(fit_command.format(cardsFolder = cardsFolder, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t"))
        os.system(fit_command.format(cardsFolder = cardsFolder, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t"))
        
        print("")
        j=j+1
    i=i+1
    j=0