#!/usr/bin/env python
# This is a macro used to get mca-files
# from just the name of the sample

import os
import re
import sys
from optparse import OptionParser
#path = sys.argv[1]
#NameInFile = sys.argv[2]
#mcaName = sys.argv[3]
#key = sys.argv[4]
#norm = sys.argv[5]
#color = sys.argv[6]

submit = "{command}"


parser = OptionParser(usage = "%prog [options]")

parser.add_option("-P", "--path", dest = "path", type = "string", default = ".", help = "Path where to get the name of the samples")
parser.add_option("-f", "--filename", dest = "name", type = "string", default = "", help = "Name of the sample to be added to the file. It works if you just give a short but key part of the name")
parser.add_option("-k", "--key", dest = "key", type = "string", default = "key", help = "Name that will appear in the plots")
parser.add_option("-n", "--norm", dest = "norm", type = float, default = 1.0, help = "Normalisation for the MC")
parser.add_option("-C", "--color", dest = "color", type = "string", default = "ROOT.kRed", help = "Color for the histogram")
parser.add_option("-o", "--outfile", dest = "outfile", type = "string", default = "foo.txt", help = "Name for the mca-file")
parser.add_option("-x", "--cut", dest = "cut_options", type = "string", action = "append", help = "Handle options for the initial cut")
(options, args) = parser.parse_args()
print(options.path)
print(options.cut_options)
def GetListOfTrees(path):
    # First we get a list of the files in the given path
    files = os.listdir(path)
    return files

def GetKey(files, NameInFile):
    # Return a list with all the files containing
    # the key
    samples = [f for f in files if NameInFile in f]
    return samples
def CheckIfExists(mcaName):
    doExists = False
    if os.path.exists('./{mcaName}.txt'.format(mcaName = mcaName)): doExists = True
    return doExists

def openFile(mcaName, opt = "a"):
    mcaFile = open(mcaName, opt)
    return mcaFile

def WriteMCAfile(Samples, mcaName):
    # Write the mca file
    
    # First we check if it already exists, and if it doesn't then we create a new one
    if CheckIfExists(mcaName): mcaFile = openFile(mcaName + ".txt")
    else: mcaFile = openFile(mcaName + ".txt", "w")
    text = '{key}:'.format(key = key)
    for s in range(len(Samples)):
	Samples[s] = Samples[s].replace(Samples[s][-5:], "")	
        text += '{s}'.format(s = Samples[s])
	if s != len(Samples)-1: text+=' + '
    text += ' : {norm}'.format(norm = norm)
    text += ' ; genSumWeightName="genEventSum_W"'
    if color!= "": text += ',FillColor={color}'.format(color = color)
    mcaFile.write(text + "\n")
	
    return 


