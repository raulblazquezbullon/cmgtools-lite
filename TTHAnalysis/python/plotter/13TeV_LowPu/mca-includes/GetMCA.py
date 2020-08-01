#!/usr/bin/env python
# This is a macro used to get mca-files
# from just the name of the sample

import os
import re
import sys
import warnings
from optparse import OptionParser
#path = sys.argv[1]
#NameInFile = sys.argv[2]
#mcaName = sys.argv[3]
#key = sys.argv[4]
#norm = sys.argv[5]
#color = sys.argv[6]

submit = "{command}"

P0 = "/pool/ciencias/nanoAODv6/lowPU2017/2020_07_21_postProc"
parser = OptionParser(usage = "%prog [options]")

parser.add_option("-P", "--path", dest = "path", type = "string", default = P0, help = "Path where to get the name of the samples")
parser.add_option("-f", "--filename", dest = "name", type = "string", default = "", help = "Name of the sample to be added to the file. It works if you just give a short but key part of the name")
parser.add_option("-k", "--key", dest = "key", type = "string", default = "key", help = "Name that will appear in the plots")
parser.add_option("-n", "--norm", dest = "norm", type = float, default = 1.0, help = "Normalisation for the MC")
parser.add_option("-C", "--color", dest = "color", type = "string", default = "ROOT.kRed", help = "Color for the histogram")
parser.add_option("-o", "--outfile", dest = "outfile", type = "string", default = "foo.txt", help = "Name for the mca-file")
parser.add_option("-x", "--cut", dest = "cut_options", type = "string", action = "append", help = "Handle options for the initial cut")
parser.add_option("-d", "--debug", dest = "_debug", action = "store_true", default = False, help = "Enables debug mode")
(options, args) = parser.parse_args()

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
    if options._debug: print("[DEBUG] checking the file {mcaName} exists".format(mcaName = mcaName))
    print(os.path.exists('./%s.txt'%mcaName))
    if os.path.exists('./{mcaName}.txt'.format(mcaName = mcaName)): doExists = True
    if options._debug and doExists: print("[DEBUG] The file {mcaName} does exists.".format(mcaName = mcaName))
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

if __name__ == '__main__':
	if options.key == "key": raise RuntimeError, 'No key was specified!'
	# First thing we do is read the files from the path
	pathCopy = options.path #Just to be secure about the path that is being read
	files = GetListOfTrees(pathCopy)
	
	# Let's get a list with only the files containing the key
	keys = GetKey(files, options.key)
	if options._debug: print("[DEBUG]List of files to be added to the mca-file: \n {list}".format(list = keys))
	
	# Now that we have the keys, let's write the mca-file!
	if options.outfile == "foo.txt": warnings.warn("You did not specify the output filename, so I'm saving it as foo.txt...")
	
	# First we check if it exists
	if CheckIfExists(options.outfile) == False: 
		print("[INFO] The file does not exist->Creating a new one")
		outfile = openFile(options.outfile, "w")
	else: outfile = openFile(options.outfile)
	outfile.close()
