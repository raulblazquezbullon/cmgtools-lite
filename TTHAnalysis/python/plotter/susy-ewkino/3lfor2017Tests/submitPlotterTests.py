import os
from optparse import OptionParser

pr = OptionParser(usage="%prog [options]")
#Model options
pr.add_option( "--cutList"         , dest="tList"       , type="string", default = "", help="A file containing the new additional cuts one wants to apply, one per line")
pr.add_option( "--doSignal" , dest="doSignal", action="store_true", help="Wether to use all signal points or not. Beware the computation time!!")
pr.add_option( "--doFlav" , dest="doFlav", action="store_true", help="Do flavor composition separation.")
pr.add_option( "--pdir" , dest="pdir", type="string", default= "/pool/cienciasrw/userstorage/carlosec/cardsEWK2017_pre2/",  help="Wether to use all signal points or not. Beware the computation time!!")
pr.add_option( "-j" , dest="nJobs", type="string", default= "8",  help="Number of jobs to be used.")

(options, args) = pr.parse_args()

#Folder to place temporary sh files
tmpDir = "/nfs/fanae/user/carlosec/CMSSW_8_0_19/src/CMGTools/TTHAnalysis/python/plotter/susy-ewkino/3lfor2017Tests/temp/"

if options.doFlav:
  flavList = ["", "flav_mmm", "flav_eee", "flav_mee", "flav_mme"]
else:
  flavList = [""]

if options.cutList == "": options.cutList = ["Triggermmm533", "Triggermmm1055", "Triggermmm12105", "Triggereee16128", "Triggermee81212", "Triggermm44", "Triggermm88", "Triggermm178", "Triggerme823", "Triggerme2312", "Triggeree88", "Triggeree2525", "Trigger_mmm_ALL", "Trigger_mm_ALL", "Trigger_me_ALL"]

nFiles = 0
for theCut in cutList:
  for flav in flavList:
    cut = theCut
    templateFile = open("/nfs/fanae/user/carlosec/CMSSW_8_0_19/src/CMGTools/TTHAnalysis/python/plotter/susy-ewkino/3lfor2017Tests/templatePlots.sh","r")
    newFile = open(tmpDir + "_" + str(nFiles) + ".sh", "w")
    for line in templateFile.readlines():
      theLine = line
      if "mcPlots" in line:
        if not(flav == ""): cut = cut + " -E " + flav
        theLine  = line.replace("[PLOTDIR]", options.pdir + "_" + theCut + flav).replace("[EXTRATEXT]", "-E "+cut).replace("[NJOBS]", str(options.nJobs))
        if options.doSignal: theLine += " --AP"
        print theLine
      newFile.write(theLine)
    templateFile.close()
    newFile.close() 
    nFiles +=1

for n in range(nFiles):
  print "Submitting job %i of %i"(n+1,nFiles)
  os.system("echo \"sh "+ tmpDir + "_" + str(n) + ".sh\" |qsub -q batch -l nodes=1:ppn="+ str(options.nJobs) +" -N "+ cutList[n/len(flavList)])
  
