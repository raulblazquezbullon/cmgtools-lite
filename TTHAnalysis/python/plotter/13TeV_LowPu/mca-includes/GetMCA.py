#!/usr/bin/env python
# This is a macro used to get mca-files
# from just the name of the sample

import os
import re
import sys
import warnings
from optparse import OptionParser


P0 = "/pool/ciencias/nanoAODv6/lowPU2017/2020_07_21_postProc"
parser = OptionParser(usage = "%prog [options]")

parser.add_option("-P", "--path", dest = "path", type = "string", default = P0, help = "Path where to get the name of the samples")
parser.add_option("-f", "--filename", dest = "filename", type = "string", default = "", help = "Name of the sample to be added to the file. It works if you just give a short but key part of the name, but try to be as clear as possible")
parser.add_option("-k", "--key", dest = "key", type = "string", default = "key", help = "Name that will appear in the plots")
parser.add_option("-n", "--norm", dest = "norm", type = float, default = 1.0, help = "Normalisation for the MC")
parser.add_option("-C", "--color", dest = "color", type = "string", default = "ROOT.kRed", help = "Color for the histogram")
parser.add_option("-o", "--outfile", dest = "outfile", type = "string", default = "foo.txt", help = "Name for the mca-file WITH EXTENSION")
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
    if os.path.exists('./{mcaName}'.format(mcaName = mcaName)): doExists = True
    if options._debug and doExists: print("[DEBUG] The file {mcaName} does exists.".format(mcaName = mcaName))
    return doExists

def openFile(mcaName, opt = "a"):
    mcaFile = open(mcaName, opt)
    return mcaFile

def WriteMCAfile(file):
    # Write the mca file
     
    text = '{key}:'.format(key = options.key)
    for s in range(len(process)):
	process[s] = process[s].replace(process[s][-5:], "") #Remove the .root extension
        text += '{s}'.format(s = process[s]) 
	if s != len(process)-1: text+=' + '# Files with the same name but exclusive to each other must go added in the mca-file

    # mca files for data have different format
    if options.key != "data":
	    text += ' : {norm}'.format(norm = options.norm)
	    text += ' ; genSumWeightName="genEventSum_W"'
	    text += ',FillColor={color}'.format(color = options.color)
    file.write(text + "\n")	
    return 

if __name__ == '__main__':
	if options.filename == "": raise RuntimeError, 'No filename was specified! Specify it with the -f {filename} option.'
	# First thing we do is read the files from the path
	pathCopy = options.path #Just to be secure about the path that is being read
	files = GetListOfTrees(pathCopy)
	# Let's get a list with only the files containing the key
	process = GetKey(files, options.filename)
	if len(process)==0: raise RuntimeError, 'No file in {p} matched with the key: {f}'.format(p = pathCopy, f = options.filename)	
	if options._debug: print("[DEBUG] List of files to be added to the mca-file: \n {list}".format(list = process))
	
	# Now that we have the keys, let's write the mca-file!
	if options.outfile == "foo.txt": warnings.warn("You did not specify the output filename, so I'm saving it as foo.txt...")
	# First we check if it exists
	if CheckIfExists(options.outfile) == False: 
		print("[INFO] The file does not exist->Creating a new one")
		outfile = openFile(options.outfile, "w")
	else: outfile = openFile(options.outfile)
	WriteMCAfile(outfile)
	outfile.close()
