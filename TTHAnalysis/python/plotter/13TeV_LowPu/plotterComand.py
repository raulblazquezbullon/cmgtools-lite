#!/usr/bin/env python
import sys
import re
import os 
import warnings
from optparse import OptionParser


# This is a macro made for getting the command used to do
# the plotting


path = "/pool/ciencias/nanoAODv6/lowPu2017/2020_07_21_postProc"
ftreesPath = "~/Workspace/WZ_LowPu/FriendTrees/13TeV_lowPu/"
parser = OptionParser(usage = "%prog [options]")

parser.add_option("-P", "--path", dest = "path", type = "string", default = path, help = "Path where the postproc is storaged")
parser.add_option("--fTree", dest = "ftreesPath", type = "string", default = ftreesPath, help = "Path where the friend-trees are storaged" )
parser.add_option("-c", "--ch", dest = "channel", type = "string", default = "ttbar", help = "Channel in which the analisys is based")


(options, args) = parser.parse_args()

if __name__ == '__main__':
    
    TREES = options.path
    FTREES = options.ftreesPath
    if TREES == options.path: print("No samples path option was given. Searching in {p} by default...".format(p = options.path))
    if FTREES == options.ftreesPath: print("No samples path option was given. Searching in {p} by default...".format(p = options.ftreesPath))
    command = 'python mcPlots.py -P {path}'.format(path = options.path)
    print(command)
