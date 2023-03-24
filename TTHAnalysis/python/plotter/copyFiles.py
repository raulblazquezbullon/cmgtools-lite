# coding: utf-8

# This script copy a given file to given folders

# Imports
import argparse
import subprocess

# Functions
def add_parsing_options():
	''' Add some parsing options '''
	parser = argparse.ArgumentParser()
	parser.add_argument("--folder",    	dest = "folder",default = "./")
	parser.add_argument("--filename", 	dest = "filename",type = str)
	parser.add_argument("--path",		dest = "path",type = str,default = "./")
	parser.add_argument("--mode",		dest = "mode",type = str,default = "")
	parser.add_argument("--nquant",    	dest = "nquant")
	parser.add_argument("--variables", 	dest = "variables", default = "")
	parser.add_argument("--card_folder",dest = "card_folder",action = "store_true",default = False)

	return parser.parse_args() 
	
# Main script
if __name__ == "__main__":
	opts = add_parsing_options()
	folder = opts.folder.split(",")
	filename = opts.filename.split(",")
	path = opts.path
	mode = opts.mode
	nquant = opts.nquant.split(",")
	variables = opts.variables.split(",")
	card_folder = opts.card_folder
	
	if path[-1] != "/": path.append("/")
	
	if mode == "rebin":
		for nq in nquant:
			for var in variables:
				outpath = "./check_discriminant_vars/rebin%s/%s/" %(nq,var)
				if card_folder: outpath += "./cards/"
				for f in filename:
					#print("cp " + path + f + " " + outpath)
					subprocess.Popen(["cp",f,directory]
	
	else:
		for f in filename:
			for directory in folder:
				#print("cp " + path + f + " " + directory)
				subprocess.Popen(["cp",f,directory])
