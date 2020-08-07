#!/usr/bin/env python
import os, re
import commands
import math, time
import sys

print 
print 'START'
print 
########   YOU ONLY NEED TO FILL THE AREA BELOW   #########
########   customization  area #########
NumberOfJobs= 32 # number of jobs to be submitted
interval = 2 # number files to be processed in a single job, take care to split your file so that you run on all files. The last job might be with smaller number of files (the ones that remain).
OutputFileNames = "muonNtuple" # base of the output file name, they will be saved in res directory
ScriptName = "hlt_92X_GT92X_dataRun2_HLT_v2.py" # script to be used with cmsRun
FileList = "List.txt" # list with all the file directories
queue = "workday" # give bsub queue -- 8nm (8 minutes), 1nh (1 hour), 8nh, 1nd (1day), 2nd, 1nw (1 week), 2nw 
OutputDir = "/eos/cms/store/user/folguera/MuonHLT/Data/Run2017A/HLTPhysics/"
########   customization end   #########

path = os.getcwd()
print
print 'do not worry about folder creation:'
os.system("rm -rf tmp")
os.system("rm -rf exec")
os.system("rm -rf batchlogs")
os.system("mkdir tmp")
os.system("mkdir exec")
os.system("mkdir %s/%s" %(OutputDir,int(time.time())))
print

##### loop for creating and sending jobs #####
for x in range(1, int(NumberOfJobs)+1):
    ##### creates directory and file list for job #######
    os.system("sed '"+str(1+interval*(x-1))+","+str(interval*x)+"!d' "+FileList+" > tmp/list_"+str(x)+".txt ")
   
    ##### creates jobs #######
    with open('exec/job_'+str(x)+'.sh', 'w') as fout:
        fout.write("#!/bin/sh\n")
        fout.write("echo\n")
        fout.write("echo\n")
        fout.write("echo 'START---------------'\n")
        fout.write("echo 'WORKDIR ' ${PWD}\n")
        fout.write("source /afs/cern.ch/cms/cmsset_default.sh\n")
        fout.write("cd "+str(path)+"\n")
        fout.write("cmsenv\n")
        fout.write("cmsRun "+ScriptName+" outputFile='"+OutputDir+OutputFileNames+"_"+str(x)+".root' inputFiles_clear inputFiles_load='tmp/list_"+str(x)+".txt'\n")
        fout.write("echo 'STOP---------------'\n")
        fout.write("echo\n")
        fout.write("echo\n")
    os.system("chmod 755 exec/job_"+str(x)+".sh")
   
###### create submit.sub file ####
    
os.mkdir("batchlogs")
with open('submit.sub', 'w') as fout:
    fout.write("executable              = $(filename)\n")
    fout.write("arguments               = $(ClusterId)$(ProcId)\n")
    fout.write("output                  = batchlogs/$(ClusterId).$(ProcId).out\n")
    fout.write("error                   = batchlogs/$(ClusterId).$(ProcId).err\n")
    fout.write("log                     = batchlogs/$(ClusterId).log\n")
    fout.write('+JobFlavour = "%s"\n' %(queue))
    fout.write("\n")
    fout.write("queue filename matching (exec/job_*sh)\n")
    
###### sends bjobs ######
os.system("echo submit.sub")
os.system("condor_submit submit.sub")
   
print
print "your jobs:"
os.system("condor_q")
print
print 'END'
print
