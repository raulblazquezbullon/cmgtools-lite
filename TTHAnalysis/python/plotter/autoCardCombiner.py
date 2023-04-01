# coding: utf-8

# Imports
import ROOT as r
import numpy as np
import argparse
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
	
	fitfile = "output_fits.txt"
	
	counter = 0
	for var in variables:
		print(">>> Going to %s variable" %var)
		
		for nq in nquant:
			counter += 1
			
			print(">>> Going to rebin%s" %nq)
			inpath = main_path + "./check_discriminant_vars/./rebin%s/%s/cards/" %(nq,var)
			outpath = main_path + "./check_discriminant_vars/./rebin%s/%s/combined_cards/" %(nq,var)
			
			comm = subprocess.check_output(["sh",filename,inpath,outpath],cwd = filepath).decode("utf-8")
			print(comm)
			
			cmd = comm.split("\n")
			
			if fit1 == True or run_all == True:
				line = "---> Command to perform the initial fit" # Line we would like to find
				iline = (np.where(np.asarray(cmd) == line)[0] + 2)[0]
				
				print("==== Performing initial fit ====")
				out = subprocess.check_output(cmd[iline],shell = True).decode("utf-8")
				print(out)
				print("==== Ending initial fit ====\n")
				
				out_breaklines = out.split("\n")
				ifit = (np.where(np.asarray(out_breaklines) == "best fit parameter values and profile-likelihood uncertainties: ")[0] + 1)[0]
				outfit = out_breaklines[ifit]
				outfit = outfit.split(" ")
				
				print(">>> Writing output fit in %s\n" %fitfile)
				
				(param,val,unc,percent) = [ii for ii in outfit if (ii != "" and ii != ":")]
				(uncmin,uncpos) = unc.split("/")
				
				write_mode = "w"*int(counter == 1) + "a"*int(counter != 1)
				f = open(fitfile,write_mode)
				if write_mode == "w": f.write("# Nbin\tVariable\tParameter\tValue\tUncertainty -\tUncertainty +\t(%)\n")
				f.write("%s\t%s\t%s\t%s\t%s\t%s\t%s\n" %(nq,var,param,val,uncmin,uncpos,percent))
				f.close()
				
			elif fit2 == True or run_all == True:
				line = "---> Command to perform the sequential fits. PLEASE CHECK THE ENVIRONMENT IN WHICH THIS COMMAND WILL RUN (local or cluster)"
				iline = (np.where(np.asarray(cmd) == line)[0] + 2)[0]
				
				print("==== Performing sequential fit ====")
				out = subprocess.check_output(cmd[iline],shell = True).decode("utf-8")
				print(out)
				print("==== Ending sequential fit ====\n")
				
			elif produce == True or run_all == True:
				line = "---> Produce the impacts"
				iline = (np.where(np.asarray(cmd) == line)[0] + 2)[0]
				
				print("==== Producing impacts ====")
				out = subprocess.check_output(cmd[iline],shell = True).decode("utf-8")
				print(out)
				print("==== Ending producing impacts ====\n")
				
			elif plot == True or run_all == True:
				line = "---> Plot the impacts"
				iline = (np.where(np.asarray(cmd) == iline)[0] + 2)[0]
				
				print("==== Plotting impacts ====")
				out = subprocess.Popen(cmd[iline],shell = True).decode("utf-8")
				print(out)
				print("==== Ending plotting impacts ====")
				
