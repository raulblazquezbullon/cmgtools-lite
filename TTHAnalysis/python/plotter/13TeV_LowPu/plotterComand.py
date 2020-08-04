#!/usr/bin/env python

# This is a macro made for getting the command used to do
# the plotting

# ======= IMPORTS
import sys
import re
import os 
import warnings
from optparse import OptionParser
import argparse

# ===============


# ====== DEFAULT OPTIONS
path = "/pool/ciencias/nanoAODv6/lowPu2017/2020_07_21_postProc"
ftreesPath = "~/Workspace/WZ_LowPu/FriendTrees/13TeV_lowPu/"
ftrees = ("--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "0_lepGood ") +
          "--FDs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "1_recleaning_data ")+
          "--FMCs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "1_recleaning_mc ")+
          "--FMCs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "2_eventVars_mc ")+
          "--FDs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "2_eventVars_data ")
          )

lumi = 0.23
ncores = 4

# ===============

# ====== PARSER OPTIONS
parser = OptionParser(usage = "%prog [options]")


## === Options regarding paths and files
parser.add_option("-P", "--path", dest = "path", type = "string", default = path, help = "Path where the postproc is storaged")
parser.add_option("-F", "--ftreesPath", dest = "ftreesPath", type = "string", default = ftreesPath, help = "Path where the friend-trees are storaged" )
parser.add_option("--ftrees", dest = "ftrees", type = "string", default = ftrees, action = "append", help = "Specify the ftrees that will be used")

## == Options regarding channels and stuff
parser.add_option("-c", "--ch", dest = "channel", type = "string", default = "ttbar", help = "Channel in which the analisys is based")

## == Options regarding processing 
parser.add_option("-o", "--mcPlotsOpts", dest = "mcPlotsOpts", type = "string", default = "", help = "Any option that you can pass to mcPlots. Must be written between simple apostrophes ('')")
(options, args) = parser.parse_args()

# ===============

# ======= Functions
def AskUser(msg):
    ans = ""
    while ans not in ["y", "n", "yes", "no"]:
        ans = raw_input(msg + " [Y/N]\n").lower()
    return ans[0] == "y"


def ProcessListOfFTrees(listOfTrees):
    # ==========================================
    # STILL WORKING ON THIS
    # ==========================================
    text = ""
    text += "--FDs {Friend}".format(listOfTrees) if "Run" in listOfTrees else "--FMCs {Friend}".format(listOfTrees)  
    print(listOfTrees)
    
def GetFtreesStuff():
    # ==========================================
    # STILL WORKING ON THIS
    # ==========================================
    
    # First, get the path
    if options.ftreesPath == ftreesPath: print("No samples path option was given. Searching in {p} by default...".format(p = options.ftreesPath))
    
    # Check if there's any specified friend-tree that is to be runned
    useAll = False
    if options.ftrees == "": 
        msg = "No fTrees have been specified. Do you want to use all of the fTrees default in the directory: {p}? [Y/N]".format(p = options.ftreesPath)
        if AskUser(msg): useAll = True
        
    listOfTrees = os.listdir(options.ftreesPath) if useAll else options.ftrees
    
    return 
def FormatForPlots():
    RATIO= " --maxRatioRange 0.6  1.99 --ratioYNDiv 505 "
    RATIO2=" --showRatio --attachRatioPanel --fixRatioRange "
    LEGEND=" --legendColumns 3 --legendWidth 0.35 "
    LEGEND2=" --legendFontSize 0.042 "
    SPAM=" --noCms --topSpamSize 1.1 --lspam '#scale[1.1]{#bf{CMS}} #scale[0.9]{#it{Preliminary}}' --rspam '%(lumi) (13 TeV)' "
    text = RATIO + RATIO2 + LEGEND + LEGEND2 + SPAM
    return text

def ProcessMcPlotsStuff():
    text = ""
    if '_norebin' in options.mcPlotsOpts: print('Esto funsiona jeje')
    return text

# ===============

# ======= Main programm

if __name__ == '__main__':
    
    # Let's start building the command'
    command = 'python mcPlots.py'
    
    # Get the trees 
    TREES = options.path
    if TREES == path: print("No samples path option was given. Searching in {p} by default...".format(p = options.path))
    command += ' -P {path}'.format(path = options.path)
    command += ftrees
    command += FormatForPlots()
    command += ProcessMcPlotsStuff() if not options.mcPlotsOpts == "" else ""
    print(command)
