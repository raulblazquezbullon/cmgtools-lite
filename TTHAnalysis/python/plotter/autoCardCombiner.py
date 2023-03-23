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

	return parser.parse_args() 
	
# Main script
if __name__ == "__main__":
	opts = add_parsing_options()
	nquant = opts.nquant.split(",")
	variables = opts.variables.split(",")
	
	main_path = "/nfs/fanae/user/rblazquez/TFG/wz_run3/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/plotter/"
	
	inpath = main_path + "./check_discriminant_vars/"
	outpath = main_path + "./check_discriminant_vars/"
	
	filepath = "./wz-run3/scripts/combine/"
	filename = "run_impacts_inclusive.sh"
	
	for var in variables:
		print(" >> Going to %s variable" %var)
		
		for nq in nquant:
			inpath += "./rebin%s/%s/cards/" %(nq,var)
			outpath += "./rebin%s/%s/combined_cards/" %(nq,var)
			
			comm = subprocess.Popen(["sh",filename,inpath,outpath],cwd = filepath)
