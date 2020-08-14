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
    if tag.lower() == "singlemuon": processThis += "*SingleMuon*"
    if tag.lower() == "doublemuon": processThis += "*DoubleMuon*"
    if tag.lower() == "highegjet": processThis += "*HighEGJet*"
    if tag.lower() == "lowegjet": processThis += "*LowEGJet*"
    return processThis
def GetTaggingModule(tag):
    module = ""
    if tag.lower() == "mc": module = "addMC"
    elif tag.lower() == "singlemuon": module = "addSingleMuon"
    elif tag.lower() == "doublemuon": module = "addDoubleMuon"
    elif tag.lower() == "highegjet": processThis = "addHighEGJet"
    elif tag.lower() == "lowegjet": processThis = "addLowEGJet"
    return module

def addFriendTrees(step, FriendsPath):
    text = "-F Friends {FriendsPath}/{step_prefix} "
    friends = ""
    for previous_step in range(int(step)): friends += text.format(FriendsPath = FriendsPath, step_prefix = friendFolders[previous_step])
    return friends

def ProcessOptions(step, tag):
    #=================================#
    # Function to process the options #
    # passed to getCMD                #
    #=================================#
    inpath = SamplesPath # /pool/ciencias/nanoAODv6/lowPU2017/2020_07_21_postProc/ by default
    outpath = FriendsPath + "/" + friendFolders[int(step)]
    processThis = "--xD .*Run.*" #Only process MC samples (--xD excludes anything that has Run in his name)
    if tag.lower() not in ["mc", "singlemuon", "doublemuon", "highegjet", "lowegjet"]: raise RuntimeError("[ERROR]: Wrong tag ")
    if step == "0":
        # Step 0 is for tagging samples with MC or data
        module = GetTaggingModule(tag)
        dataset = processThis if tag.lower() == "mc" else ProcessOnlyThisSample(tag, processThis) # each dataset has a different tag
        
    if step == "1":
        # Step 1 is for lep merging
        module = "WZ_LowPu_13TeV"
        dataset = processThis if tag.lower() == "mc" else processThis.replace("--xD", "-D") # We process only MC or only DATA
        
    if step == "2":
        # Step 2 is for recleaning
        module = "WZ_lowPu_recl_mc" if tag.lower == "mc" else "WZ_lowPu_recl_data" 
        dataset = processThis if tag.lower() == "mc" else processThis.replace("--xD", "-D") # We process only MC or only DATA
    
    if step == "3":
        # Step 3 is for triggering
        module = "triggerSequence"
        dataset = "" # Triggers for MC and data are are differentiated by its tag, so this works for any sample
        
    if step == "4":
        # Step 4 is for event variables
        module = "eventVars"
        dataset = "" #This run for any sample since they have the same event variables
    friends = addFriendTrees(step, FriendsPath)
    chunksize = chunkSizes[0]
    cluster = "-q batch --env oviedo"
    logs = logsPath.format(y = year, step_prefix = friendFolders[int(step)])
    # create the folder to store the logs
    if not os.path.exists(logs): os.system("mkdir -p " + logs)
    comm = GetCMD(CMD, inpath, outpath, module, friends, dataset, chunksize, cluster, logs)    
        
    return comm
if __name__ == "__main__":
    parser = argparse.ArgumentParser(usage = "python prepareFriendTreesLowPu.py [options]", description = "Tool used for friend-trees production in the low PU analysis")
    parser.add_argument('--year',     '-y', metavar = 'year',       dest = "year",    required = False, default = 2017, type = int)
    parser.add_argument('--dataset',  '-d', metavar = 'dataset',    dest = "dataset", required = False, default = "TTTo2L2Nu")
    parser.add_argument('--step',     '-s', metavar = 'step',       dest = "step",    required = False, default = "0")
    parser.add_argument('--check',    '-c', action  = "store_true", dest = "check",   required = False, default = False)
    parser.add_argument('--queue',    '-q', metavar = 'queue',      dest = "queue",   required = False, default = "")
    parser.add_argument('--threads',  '-j', metavar = 'nthreads',   dest = "nthreads",required = False, default = 1, type = int)
    parser.add_argument('--extraArgs','-e', metavar = 'extra',      dest = "extra",   required = False, default = "")
    parser.add_argument('--ncores',   '-n', metavar = 'ncores',     dest = "ncores",  required = False, default = 1, type = int)
    parser.add_argument('--merge',    '-m', action  = "store_true", dest = "merge",   required = False, default = False)
    parser.add_argument('--pretend',  '-p', action  = "store_true", dest = "pretend", required = False, default = True)
    parser.add_argument('--tag',      '-t', metavar = 'tag',        dest = "tag",     required = False, default = "MC")
    
    options     = parser.parse_args()
    year        = options.year
    dataset     = options.dataset
    step        = options.step
    check       = options.check
    queue       = options.queue
    threads     = options.nthreads
    extraArgs   = options.extra
    ncores      = options.ncores
    merge       = options.merge
    pretend     = options.pretend
    tag         = options.tag
    ProcessOptions(step, tag)
