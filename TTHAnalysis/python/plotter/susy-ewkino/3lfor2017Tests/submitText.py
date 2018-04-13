import os

folders = os.listdir("/pool/cienciasrw/userstorage/carlosec/cardsEWK2017_SOSComp/")
tmpDir = "/nfs/fanae/user/carlosec/CMSSW_8_0_19/src/CMGTools/TTHAnalysis/python/plotter/susy-ewkino/3lfor2017Tests/temp/"
nFiles = 0
folderList = ["/pool/cienciasrw/userstorage/carlosec/cardsEWK2017_SOSComp/" + folder + "/plots_pt.root" for folder in folders]
ptcutsList = [[20,10,10],[16,12,8], [12,10,5], [15,15,10],[10,10,10]]

for folder in folderList:
  for ptcuts in ptcutsList:
    templateFile = open("/nfs/fanae/user/carlosec/CMSSW_8_0_19/src/CMGTools/TTHAnalysis/python/plotter/susy-ewkino/3lfor2017Tests/template_inFiles.sh","r")
    newFile = open(tmpDir + "_" + str(nFiles) + ".sh", "w")
    for line in templateFile.readlines():
      theLine = line
      if ".py" in line:
        theLine  = line.replace("[INROOT]", folder).replace("[OUTPATH]", "/".join(folder.split("/")[:-1])+ "/inFile" + "_".join([str(pt) for pt in ptcuts])  ).replace("[PTCUTS]", " --ptcuts '" + str(ptcuts)+ "'")
        print theLine
      newFile.write(theLine)
    templateFile.close()
    newFile.close() 
    nFiles +=1

for n in range(nFiles):
  print "Submitting job %i of %i"%(n+1,nFiles)
  os.system("echo \"sh "+ tmpDir + "_" + str(n) + ".sh\" |qsub -q batch -l nodes=1:ppn=1 -N "+ str(n) + "_inFiles")
  #print "echo \"sh "+ tmpDir + "_" + str(n) + ".sh\" |qsub -q batch -l nodes=1:ppn=1 -N "+ str(n) + "_inFiles"
