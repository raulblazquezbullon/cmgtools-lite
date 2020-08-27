# -*- coding: UTF-8 -*-.
#!/usr/bin/env python


# This code is based on Victor's produceFriendTrees_TopRun2.py

# ================ Imports
import os
import sys
import enum
import argparse
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)


# ================ Settings
SamplesPath = "/pool/ciencias/nanoAODv6/lowPU2017/2020_07_21_postProc/"
FriendsPath = "/pool/phedexrw/userstorage/cmstudents/cvico/WZ_LowPu/13TeV_Aug13"
prodName = "2020_07_21" # Falta comprobar este nombre
dataSamples = [ "SingleMuon", "DoubleMuon", "HighEGJet", "LowEGJet" ]
logsPath = FriendsPath + "/" + prodName + "/{y}/{step_prefix}/logs"
CMD = "python prepareEventVariablesFriendTree.py -t NanoAOD {inpath} {outpath} -I CMGTools.TTHAnalysis.tools.nanoAOD.LowPu_modules {module} {friends} {dataset} -N {chunksize} {cluster} --log={logs}"
utilsPath = "/nfs/fanae/user/cvico/WorkSpace/WZ_LowPu/CMSSW_10_4_0/src/susyMaintenanceScripts/" 
friendFolders = {0 : "0_tags",
                 1 : "1_lepMerge",
                 2 : "2_recleaning",
                 3 : "3_triggers",
                 4 : "4_eventVars",
                # More steps yet to be implemented
                }
chunkSizes = {0 : 50000,
              1 : 100000,
              2 : 150000,
              3 : 200000
             }
minchunkbytes = 1000

class errs(enum.IntEnum):
    NoErr   = 0
    exist   = 1
    size    = 2
    entries = 3
    corrupt = 4


sampledict = {}

# Dictionary for samples
sampledict[2017] = {
    ### ttbar
    # Di-leptonic
    "TTTo2L2Nu"         :   ['Tree_TTTo2L2Nu_TuneCP5_ext1_0', 'Tree_TTTo2L2Nu_TuneCP5_ext1_1', 'Tree_TTTo2L2Nu_TuneCP5_ext1_2'],
    # Semi-leptonic
    "TTToSemiLeptonic"  :   ['Tree_TTToSemiLeptonic_TuneCP5_ext1_0', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_1', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_2',
                             'Tree_TTToSemiLeptonic_TuneCP5_ext1_3', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_4', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_5',
                             'Tree_TTToSemiLeptonic_TuneCP5_ext1_6', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_7'],
    #Hadronic
    "TTToHadronic"      :   ['Tree_TTToHadronic_TuneCP5_ext1_0', 'Tree_TTToHadronic_TuneCP5_ext1_1', 'Tree_TTToHadronic_TuneCP5_ext1_2',
                             'Tree_TTToHadronic_TuneCP5_ext1_3'],
    
    #Drell-Yan
    "DYJetsToLL"        :   ['Tree_DYJetsToLL_M_50_TuneCP5_amcatnloFXFX_ext1_0', 'Tree_DYJetsToLL_M_50_TuneCP5_amcatnloFXFX_ext1_1', 
                             'Tree_DYJetsToLL_M_50_TuneCP5_amcatnloFXFX_ext1_2'],
    
    ### Dibosons
    # WZ
    "WZTo3LNu"          :   ['Tree_WZTo3LNu_TuneCP5_ext1_0'],
    # WW
    "WWTo2L2Nu"         :   ['Tree_WWTo2L2Nu_TuneCP5_ext1_0'],
    
    ### V+jets
    # WJets             
    "WJetsToLNu_0J"     :   ['Tree_WJetsToLNu_0J_TuneCP5_amcatnloFXFX_ext1_0'],
    #
    "ZJToEEJ"           :   ['Tree_ZJToEEJ_M_50_0'],
    
    ### Data
    #SingleMuon
    "SingleMuon"        :   ['Tree_SingleMuon_Run2017H_17Nov2017_v2_0','Tree_SingleMuon_Run2017H_17Nov2017_v2_1', 'Tree_SingleMuon_Run2017H_17Nov2017_v2_2'],
    #DoubleMuon
    "DoubleMuon"        :   ['Tree_DoubleMuon_Run2017H_17Nov2017_v1_0'],
    #HighEGJet
    "HighEGJet"         :   ['Tree_HighEGJet_Run2017H_17Nov2017_v1_0', 'Tree_HighEGJet_Run2017H_17Nov2017_v1_1', 'Tree_HighEGJet_Run2017H_17Nov2017_v1_2', 
                             'Tree_HighEGJet_Run2017H_17Nov2017_v1_3', 'Tree_HighEGJet_Run2017H_17Nov2017_v1_4'],
    "HighEGJet"         :   ['Tree_LowEGJet_Run2017H_17Nov2017_v2_0', 'Tree_LowEGJet_Run2017H_17Nov2017_v2_1', 'Tree_LowEGJet_Run2017H_17Nov2017_v2_2'],
    #LowEGJet
    
    
    }

#### xsecs 
#DYJetsToLL_M_10to50_aMCatNLO : 22635.09
#DYJetsToLL_M_50_a       : 6025.2

#TTTo2L2Nu               : 88.28769753
#TTToSemiLeptonic        : 365.3994209
#TT                      : 831.76

#WJetsToLNu_MLM          : 61526.7

#WW                      : 115
#WWTo2L2Nu               : 12.178

#WZ                      : 47.13
#WZTo3LNu                : 4.42965


def RunCMD(CMD):
    #=============================#
    # Function to run the command #
    #=============================#    
    print(CMD) #if pretend else print("os.system(cmd)") # This is in a print for testing purposes
    
def GetCMD(CMD, inpath, outpath, module, friends, dataset, chunksize, cluster, logs):
    #=============================#
    # Function to get the command #
    #=============================#
    CMD = CMD.format(inpath    = inpath,
                     outpath   = outpath,
                     module    = module,
                     friends   = friends,
                     dataset   = dataset,
                     chunksize = chunksize,
                     cluster   = cluster,
                     logs      = logs
                    )
    print(CMD)
    return CMD

def ProcessOnlyThisSample(tag, processThis):
    processThis = "-D "
    if tag.lower() == "data": processThis += ".*Run.*"
    elif tag.lower() == "singlemuon": processThis += ".*SingleMuon*"
    elif tag.lower() == "doublemuon": processThis += ".*DoubleMuon*"
    elif tag.lower() == "highegjet": processThis += ".*HighEGJet*"
    elif tag.lower() == "lowegjet": processThis += ".*LowEGJet*"
    return processThis
def GetTaggingModule(tag):
    module = ""
    if tag.lower() == "mc": module = "addMC"
    elif tag.lower() == "singlemuon": module = "addSingleMuon"
    elif tag.lower() == "doublemuon": module = "addDoubleMuon"
    elif tag.lower() == "highegjet": module = "addHighEGJet"
    elif tag.lower() == "lowegjet": module = "addLowEGJet"
    return module

def addFriendTrees(step, outpath):
    preffix = "-F Friends " + FriendsPath + "/" + prodName + "/{y}".format(y = year)
    suffix = "{cname}_Friend.root "
    friends = ""
    for previous_step in range(int(step)): friends += preffix + "/" + friendFolders[int(previous_step)] + "/" + suffix
    return friends

def ProcessOptions(FriendsPath, step, tag):
    #=================================#
    # Function to process the options #
    # passed to getCMD                #
    #=================================#
    inpath = SamplesPath # /pool/ciencias/nanoAODv6/lowPU2017/2020_07_21_postProc/ by default
    outpath = FriendsPath + "/" + prodName + "/{y}/{step_prefix}".format(y = year, step_prefix = friendFolders[int(step)])
    
    processThis = "--xD .*Run.*" #Only process MC samples (--xD excludes anything that has Run in his name)
    
    if tag.lower() not in ["mc","data", "singlemuon", "doublemuon", "highegjet", "lowegjet"]: raise RuntimeError("[ERROR]: I need to know whether the sample is mc or data")
    dataset = processThis if tag.lower() == "mc" else processThis.replace("--xD", "-D") # We process only MC or only DATA

    if step == "0":
        # Step 0 is for tagging samples with MC or data
        if tag.lower() == "data": raise RuntimeError("[ERROR]: For step0 I need to know the specific name of the data sample in order to get the correct module")
        module = GetTaggingModule(tag)
        
    elif step == "1":
        # Step 1 is for lep merging
        module = "WZ_lowPu_13TeV"
        
    elif step == "2":
        # Step 2 is for recleaning
        module = "WZ_lowPu_recl_mc" if tag.lower() == "mc" else "WZ_lowPu_recl_data" 
    
    elif step == "3":
        # Step 3 is for triggering
        module = "triggerSequence"
        
    elif step == "4":
        # Step 4 is for event variables
        module = "eventVars"
    
    friends = addFriendTrees(step, outpath)
    chunksize = 1000
    cluster  = ""
    logs     = "" 
    if not nobatch:
	    chunksize = chunkSizes[0]
	    cluster += "-q batch --env oviedo"
	    logs += outpath + "/logs"
	    if not os.path.exists(outpath): os.system("mkdir -p " + logs)
	    # create the folder to store the logs
    comm = GetCMD(CMD, inpath, outpath, module, friends, dataset, chunksize, cluster, logs)    
        
    return comm
if __name__ == "__main__":
    parser = argparse.ArgumentParser(usage = "python prepareFriendTreesLowPu.py [options]", description = "Tool used for friend-trees production in the low PU analysis")
    parser.add_argument('--FriendsPath','-f', metavar = 'FriendsPath',    dest = "FriendsPath", required = False, default = FriendsPath)
    parser.add_argument('--year',       '-y', metavar = 'year',       dest = "year",    required = False, default = 2017, type = int)
    parser.add_argument('--dataset',    '-d', metavar = 'dataset',    dest = "dataset", required = False, default = "TTTo2L2Nu")
    parser.add_argument('--step',       '-s', metavar = 'step',       dest = "step",    required = False, default = "0")
    parser.add_argument('--check',      '-c', action  = "store_true", dest = "check",   required = False, default = False)
    parser.add_argument('--queue',      '-q', metavar = 'queue',      dest = "queue",   required = False, default = "")
    parser.add_argument('--threads',    '-j', metavar = 'nthreads',   dest = "nthreads",required = False, default = 1, type = int)
    parser.add_argument('--extraArgs',  '-e', metavar = 'extra',      dest = "extra",   required = False, default = "")
    parser.add_argument('--ncores',     '-n', metavar = 'ncores',     dest = "ncores",  required = False, default = 1, type = int)
    #parser.add_argument('--merge',    '-m', action  = "store_true", dest = "merge",   required = False, default = False)
    parser.add_argument('--pretend',    '-p', action  = "store_true", dest = "pretend", required = False, default = True)
    parser.add_argument('--tag',        '-t', metavar = 'tag',        dest = "tag",     required = False, default = "MC")
    parser.add_argument('--nobatch',    '-b', action  = 'store_true', dest = "nobatch", required = False, default = False) 

    options     = parser.parse_args()
    FriendsPath = options.FriendsPath
    year        = options.year
    dataset     = options.dataset
    step        = options.step
    check       = options.check
    queue       = options.queue
    threads     = options.nthreads
    extraArgs   = options.extra
    ncores      = options.ncores
#    merge       = options.merge
    pretend     = options.pretend
    tag         = options.tag
    nobatch     = options.nobatch

    ProcessOptions(FriendsPath, step, tag)
