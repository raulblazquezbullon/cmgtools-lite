# -*- coding: UTF-8 -*-.
#!/usr/bin/env python
import os, sys, enum, argparse



#Read the cards folder: neccesary structure 1j1tNbins and 2j1tNbins

cardsFolder = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_cards/2020-12-21/run2/"

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
Nbins2j2t = []

Folders1j1t = []
Folders2j1t = []
Folders2j2t = []
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
    elif "2j2t" in subfile:
        position_reg = subfile.find("2j2t")
        position_bins = subfile.find("bins")
        numberBins = subfile[position_reg+4:position_bins]
        Nbins2j2t.append(numberBins)
        Folders2j2t.append(subfile)



#Two categories

r_list = []
r_pos_list = []
r_neg_list = []
sumaNbins = []

i=0
j=0
k=0
for cat_1j1t in Folders1j1t:
    for cat_2j1t in Folders2j1t:
        for cat_2j2t in Folders2j2t:
#            print(combinecards_command.format(cardsFolder = cardsFolder, folder_1j1t = cat_1j1t, folder_2j1t = cat_2j1t, folder_2j2t = cat_2j2t, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t_" + str(Nbins2j2t[k])+"_2j2t"))
            os.system(combinecards_command.format(cardsFolder = cardsFolder, folder_1j1t = cat_1j1t, folder_2j1t = cat_2j1t, folder_2j2t = cat_2j2t, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t_" + str(Nbins2j2t[k])+"_2j2t"))
        
#            print(workspace_command.format(cardsFolder = cardsFolder, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t_"+ str(Nbins2j2t[k])+"_2j2t"))
            os.system(workspace_command.format(cardsFolder = cardsFolder, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t_"+ str(Nbins2j2t[k])+"_2j2t"))
        
#            print(fit_command.format(cardsFolder = cardsFolder, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t_"+ str(Nbins2j2t[k])+"_2j2t"))
            os.system(fit_command.format(cardsFolder = cardsFolder, binning = str(Nbins1j1t[i])+ "_1j1t_" + str(Nbins2j1t[j])+ "_2j1t_"+ str(Nbins2j2t[k])+"_2j2t"))
#        


#            archivo = open(cardsFolder + "fits/output/output_all_%s_1j1t_%s_2j1t_%s_2j2t.txt"%(str(Nbins1j1t[i]), str(Nbins2j1t[j]), str(Nbins2j2t[k])),"r")
#            texto = archivo.read()
#            obj_string = "Best fit r: "
#            POI_position = texto.find(obj_string)
#            r = float(texto[POI_position+len(obj_string):POI_position+len(obj_string)+1])
#            r_list.append(r)
#            if not "/" in texto[POI_position+len(obj_string)+4:POI_position+len(obj_string)+12]:
#                r_negative = float(texto[POI_position+len(obj_string)+4:POI_position+len(obj_string)+12])
#                r_positive = float(texto[POI_position+len(obj_string)+14:POI_position+len(obj_string)+23])
#            else:
#                barra_pos = texto[POI_position+len(obj_string)+4:POI_position+len(obj_string)+12].find("/")
#                r_negative = float(texto[POI_position+len(obj_string)+4:POI_position+len(obj_string)+4+barra_pos])
#                r_positive = float(texto[POI_position+len(obj_string)+2+4+barra_pos:POI_position+len(obj_string)+2+4+barra_pos+6])
#            r_neg_list.append(r_negative)
#            
#            r_pos_list.append(r_positive)
#            sumaNbins.append(int(Nbins1j1t[i])+int(Nbins2j1t[j])+int(Nbins2j2t[k]))
            k=k+1
        j=j+1
        k=0
    i=i+1
    j=0


print(r_pos_list)
print(r_neg_list)
print(sumaNbins)

