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

command = "python mcPlots.py"
# ===============

# ====== PARSER OPTIONS
parser = OptionParser(usage = "%prog [options]")


## === Options regarding paths and files
parser.add_option("-P", "--path", dest = "path", type = "string", default = path, help = "Path where the postproc is storaged")
parser.add_option("--pdir", dest = "outpath", type = "string", default = "./Plots", help = "Output path where the plots are going to be saved")
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
    CLUSTER = "-f -j {ncores} -l {lumi} -L 13TeV_lowPu/functions13TeV.cc --tree NanoAOD --mcc 13TeV_lowPu/lepchoice-FO.txt --split-factor=-1".format(ncores = ncores, lumi = lumi) 
    RATIO = " --maxRatioRange 0.6  1.99 --ratioYNDiv 505 "
    RATIO2 = " --showRatio --attachRatioPanel --fixRatioRange "
    LEGEND = " --legendColumns 3 --legendWidth 0.35 "
    LEGEND2 = " --legendFontSize 0.042 "
    SPAM = " --noCms --topSpamSize 1.1 --lspam '#scale[1.1]{#bf{CMS}} #scale[0.9]{#it{Preliminary}}' --rspam '%(lumi) (13 TeV)'"
    text = CLUSTER + RATIO + RATIO2 + LEGEND + LEGEND2 + SPAM
    return text

def ChannelStuff(command):
    text = command
    if options.channel == "ttbar":
        # === Main part of the command for ttbar 
        text += " {mca}".format(mca = "13TeV_lowPu/mca-ttbar-mcdata.txt")
        text += " {cuts}".format(cuts = "13TeV_lowPu/ttbar_dilepton.txt")
        text += " {plots}".format(plots = "13TeV_lowPu/ttbar_plots.txt")
        text += " {weight}".format(weight = "") #still have no weights to add
        text += " {binname}".format(binname = "--binname ttbar")
    else: raise RuntimeError, 'Unknown selection'
    return text


def ProcessMcPlotsStuff(command):
    text = command
    if options.channel == "ttbar":
        # === Check the options given to mc
        
        if '_norebin' in options.mcPlotsOpts: text.replace('--rebin 4', '')
        if '_appl' in options.mcPlotsOpts: text += ' -I ^^TT'
        if '_relax' in options.mcPlotsOpts: text += ' -X ^^TT'
        if '_ss' in options.mcPlotsOpts: text += ' -I ^os'
        if '_dycr' in options.mcPlotsOpts:
            text += ' -E ^sf -X ^ZVeto -E ^onZ'
            if '_nojet' in options.mcPlotsOpts: ' -X ^2jets'
            if '_nomet' in options.mcPlotsOpts: ' -X ^MET'
        if '_tight' in options.mcPlotsOpts: text.replace('1_recleaner','1_recleanerTight')
        if '_em' in options.mcPlotsOpts: text += ' -E ^em'
        if '_mm' in options.mcPlotsOpts: text += ' -E ^mm'
        if '_ee' in options.mcPlotsOpts: text += ' -E ^ee'
        
    return text

# ===============

# ======= Main programm

if __name__ == '__main__':
    
    # Let's start building the command'
    # Get the trees 
    TREES = options.path
    if TREES == path: print("No samples path option was given. Searching in {p} by default...".format(p = options.path))
    command += ' -P {path}'.format(path = options.path)
    command += ' --pdir {outpath} '.format(outpath = options.outpath)
    command += ftrees
    command += FormatForPlots()
    command = ProcessMcPlotsStuff(command) if not options.mcPlotsOpts == "" else command
    command = ChannelStuff(command)
    print(command)
