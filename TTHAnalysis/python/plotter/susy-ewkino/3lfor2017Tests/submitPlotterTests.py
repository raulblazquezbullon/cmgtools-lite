import os
from optparse import OptionParser

pr = OptionParser(usage="%prog [options]")
#Model options
pr.add_option( "--cutList"         , dest="cutList"       , type="string", default = "", help="A file containing the new additional cuts one wants to apply, one per line")
pr.add_option( "--doSignal" , dest="doSignal", action="store_true", help="Wether to use all signal points or not. Beware the computation time!!")
pr.add_option( "--doFlav" , dest="doFlav", action="store_true", help="Do flavor composition separation.")
pr.add_option( "--pdir" , dest="pdir", type="string", default= "/pool/cienciasrw/userstorage/carlosec/cardsEWK2017_pre2_data/",  help="Where to store the output")
pr.add_option( "-j" , dest="nJobs", type="string", default= "16",  help="Number of jobs to be used.")

(options, args) = pr.parse_args()

#Folder to place temporary sh files
tmpDir = "/nfs/fanae/user/carlosec/CMSSW_8_0_19/src/CMGTools/TTHAnalysis/python/plotter/susy-ewkino/3lfor2017Tests/temp/"

if options.doFlav:
  flavList = ["", "flav_mmm", "flav_eee", "flav_mee", "flav_mme"]
  #flavList = ["", "flav_mmm"]
else:
  flavList = [""]


if options.cutList == "": options.cutList = ["Triggermm178","Triggerme823","Triggerme2312","Triggeree88", "Triggeree2525"]

nFiles = 0
for theCut in options.cutList:
  for flav in flavList:
    if not(flav == "" or flav.split("_")[1][1:] in theCut or flav.split("_")[1][:-1] in theCut): continue
    cut = theCut
    templateFile = open("/nfs/fanae/user/carlosec/CMSSW_8_0_19/src/CMGTools/TTHAnalysis/python/plotter/susy-ewkino/3lfor2017Tests/templatePlots.sh","r")
    newFile = open(tmpDir + "_" + str(nFiles) + ".sh", "w")
    for line in templateFile.readlines():
      theLine = line
      if "mcPlots" in line:
        if not(flav == ""): cut = cut + " -E " + flav
        theLine  = line.replace("[PLOTDIR]", options.pdir + "_" + theCut + flav).replace("[EXTRATEXT]", "-E "+cut).replace("[NJOBS]", str(options.nJobs))
        if options.doSignal: theLine = theLine.replace("-j","--AP -j")
        print theLine
      newFile.write(theLine)
    templateFile.close()
    newFile.close() 
    nFiles +=1

print nFiles
#for n in range(nFiles):
  #print "Submitting job %i of %i"%(n+1,nFiles)
  #os.system("echo \"sh "+ tmpDir + "_" + str(n) + ".sh\" |qsub -q batch -l nodes=1:ppn="+ str(options.nJobs) +" -N "+ options.cutList[n/len(flavList)])
  
