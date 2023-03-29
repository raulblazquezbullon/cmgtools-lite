# coding: utf-8

# Imports
import ROOT as r
from array import array
import numpy as np
import argparse
from copy import deepcopy
import os
import re
import sys
import subprocess

r.gROOT.SetBatch(1)

# Functions
functional_variables = {"m3l" : "m3L",
						"met" : "MET_pt_central",
						"m3lmet_Meas" : "m3Lmet"}
						
def add_parsing_options():
	''' Add some parsing options '''
	parser = argparse.ArgumentParser()
	parser.add_argument("--nquant",    dest = "nquant")
	parser.add_argument("--variables", dest = "variables", default = functional_variables.keys())
	parser.add_argument("--fit1",      dest = "fit1",action = "store_true",default = False)
	parser.add_argument("--fit2",      dest = "fit2",action = "store_true",default = False)
	parser.add_argument("--produce",   dest = "produce",action = "store_true",default = False)
	parser.add_argument("--plot",      dest = "plot",action = "store_true",default = False)
	parser.add_argument("--run_all",   dest = "run_all",action = "store_true",default = False)

	return parser.parse_args() 
	
# Main script
if __name__ == "__main__":
	opts = add_parsing_options()
	nquant = opts.nquant.split(",")
	variables = opts.variables.split(",")
	fit1 = opts.fit1
	fit2 = opts.fit2
	produce = opts.produce
	plot = opts.plot
	run_all = opts.run_all
	
	main_path = "/nfs/fanae/user/rblazquez/TFG/wz_run3/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/plotter/"
	
	filepath = "./wz-run3/scripts/combine/"
	filename = "run_impacts_inclusive.sh"
	
	for var in variables:
		print(">>> Going to %s variable" %var)
		
		for nq in nquant:
			inpath = main_path + "./check_discriminant_vars/./rebin%s/%s/cards/" %(nq,var)
			outpath = main_path + "./check_discriminant_vars/./rebin%s/%s/combined_cards/" %(nq,var)
			
			comm = subprocess.Popen(["sh",filename,inpath,outpath],cwd = filepath) # Invokes shell and runs run_impacts_inclusive.sh
			cmd = (subprocess.check_output(["sh",filename,inpath,outpath],cwd = filepath).decode("utf-8")).split("\n")
						
			for index,line in enumerate(cmd):
				if line == "---> Command to perform the initial fit" and (fit1 == True or run_all == True):
					print("==== Performing initial fit ====")
					out1 = subprocess.Popen(cmd[index + 2],shell = True)
					
				elif line == "---> Command to perform the sequential fits. PLEASE CHECK THE ENVIRONMENT IN WHICH THIS COMMAND WILL RUN (local or cluster)" and (fit2 == True or run_all == True):
					print("==== Performing sequential fits ====")
					out2 = subprocess.Popen(cmd[index + 2],shell = True)
					
				elif line == "---> Produce the impacts" and (produce == True or run_all == True):
					print("==== Producing impacts ====")
					out3 = subprocess.Popen(cmd[index + 2],shell = True)
					
				elif line == "---> Plot the impacts" and (produce == True or run_all == True):
					print("==== Plotting impacts ====")
					out4 = subprocess.Popen(cmd[index + 2],shell = True)
