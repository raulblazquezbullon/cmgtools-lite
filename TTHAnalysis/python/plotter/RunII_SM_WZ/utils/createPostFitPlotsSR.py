import ROOT
import os

plotfileSR = open("RunII_SM_WZ/common/plots_wz.txt","r")

for line in plotfileSR.readlines():
  if line[0] == "#" or len(line.split(":")) < 3: continue
  words = line.split(":")
  name = words[0].replace(" ","")
  var  = words[1].replace(" ","")
  if not("Z" in var): continue
  bins = words[2].split(";")[0].replace(" ","")
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_SR -j 64 --pdir cards_Feb16_mWZ --var \"\'%s\'\" --binning \"\'%s\'\" --year 2016 --card %s --submit"%(var,bins,name))
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_SR -j 64 --pdir cards_Feb16_mWZ --var \"\'%s\'\" --binning \"\'%s\'\" --year 2017 --card %s --submit"%(var,bins,name))
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_SR -j 64 --pdir cards_Feb16_mWZ --var \"\'%s\'\" --binning \"\'%s\'\" --year 2018 --card %s --submit"%(var,bins,name))

