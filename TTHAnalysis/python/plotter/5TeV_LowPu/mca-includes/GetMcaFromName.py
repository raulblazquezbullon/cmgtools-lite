#!/usr/bin/env python
# This is a macro used to get mca-files
# from just the name of the sample

import os
import re
import sys

path = sys.argv[1]
NameInFile = sys.argv[2]
mcaName = sys.argv[3]

submit = "{command}"

def GetListOfTrees(path):
    # First we get a list of the files in the given path
    files = os.listdir(path)
    return files

def GetKey(files, NameInFile):
    # Return a list with all the files containing
    # the key
    samples = [f for f in files if NameInFile in f]
    return samples
def WriteMCAfile(Samples, mcaName):
    # Write the mca file
    if os.path.exists('.{mcaName}'.format(mcaName = mcaName)):mcaFile = open(mcaName, "w") 
    else: mcaFile = open(mcaName, "a")

files = GetListOfTrees(path)
Samples = GetKey(files, NameInFile)
WriteMCAfile(Samples, mcaName)

