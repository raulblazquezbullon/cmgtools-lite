import ROOT
import os

plotfileZZ = open("RunII_SM_WZ/common/plots_zz.txt","r")

for line in plotfileZZ.readlines():
  if line[0] == "#" or len(line.split(":")) < 3: continue
  words = line.split(":")
  name = words[0].replace(" ","")
  var  = words[1].replace(" ","")
  bins = words[2].split(";")[0].replace(" ","")
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_ZZ -j 16 --pdir cards_Feb16 --var \"\'%s\'\" --binning \"\'%s\'\" --year 2016 --card %s --submit"%(var,bins,name))
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_ZZ -j 17 --pdir cards_Feb16 --var \"\'%s\'\" --binning \"\'%s\'\" --year 2017 --card %s --submit"%(var,bins,name))
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_ZZ -j 18 --pdir cards_Feb16 --var \"\'%s\'\" --binning \"\'%s\'\" --year 2018 --card %s --submit"%(var,bins,name))


plotfileZZ = open("RunII_SM_WZ/common/plots_ttx.txt","r")

for line in plotfileZZ.readlines():
  if line[0] == "#" or len(line.split(":")) < 3: continue
  words = line.split(":")
  name = words[0].replace(" ","")
  var  = words[1].replace(" ","")
  bins = words[2].split(";")[0].replace(" ","")
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_TT -j 16 --pdir cards_Feb16 --var \"\'%s\'\" --binning \"\'%s\'\" --year 2016 --card %s --submit"%(var,bins,name))
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_TT -j 17 --pdir cards_Feb16 --var \"\'%s\'\" --binning \"\'%s\'\" --year 2017 --card %s --submit"%(var,bins,name))
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_TT -j 18 --pdir cards_Feb16 --var \"\'%s\'\" --binning \"\'%s\'\" --year 2018 --card %s --submit"%(var,bins,name))



plotfileZZ = open("RunII_SM_WZ/common/plots_xg.txt","r")

for line in plotfileZZ.readlines():
  if line[0] == "#" or len(line.split(":")) < 3: continue
  words = line.split(":")
  name = words[0].replace(" ","")
  var  = words[1].replace(" ","")
  bins = words[2].split(";")[0].replace(" ","")
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_Xg -j 16 --pdir cards_Feb16 --var \"\'%s\'\" --binning \"\'%s\'\" --year 2016 --card %s --submit"%(var,bins,name))
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_Xg -j 17 --pdir cards_Feb16 --var \"\'%s\'\" --binning \"\'%s\'\" --year 2017 --card %s --submit"%(var,bins,name))
  os.system("python RunII_SM_WZ/utils/doAnal.py cards_Xg -j 18 --pdir cards_Feb16 --var \"\'%s\'\" --binning \"\'%s\'\" --year 2018 --card %s --submit"%(var,bins,name))


