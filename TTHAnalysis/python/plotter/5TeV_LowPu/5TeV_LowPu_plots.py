#!/usr/bin/env python
import sys
import re
import os


ODIR = sys.argv[1]
dowhat = sys.argv[2]

lumi = 0.30432

submit = '{command}'

nCores = 4
P0 = "/nfs/fanae/user/cvico/Workspace/WZ_lowPU/FriendTrees/5TeV_Jul27"

TREESALL = " --F {P}/lepGood_fTrees --FMCs {P}/1_recleaning_v1 --Fs {P}/1_recleaning_v1_data --FMCs {P}/2_eventVars_mc --Fs {P}/2_eventVars_data"
TREESONLYSKIM = "-P "+P0

def base(selection):
    '''
    This function is where the different
    available selections are defined
    '''
    THETREES = TREESALL
    CORE = ' '.join([THETREES, TREESONLYSKIM]) 
    CORE += " -f -j {nCores} -l {lumi} -L".format(nCores = nCores, lumi = lumi)
    CORE += " -L 5TeV_LowPu/functions5TeV_lowPu.cc --tree NanoAOD --mcc 5TeV_LowPu/lepchoice-FO.txt"
    print(CORE)
base("bla")
