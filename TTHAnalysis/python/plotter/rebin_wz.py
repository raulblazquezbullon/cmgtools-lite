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

functional_variables = {"m3l" : "m3L",
						"met" : "MET_pt_central",
						"m3lmet_Meas" : "m3Lmet"}

def histo_deepcopy(h):
	''' This function avoids any memory problem regarding histogram creation '''
	h.SetDirectory(r.nullptr)
	histo = deepcopy(h.Clone())
	return histo
	
def get_histos(var, filename, someProcess = ""):
	''' Read histograms from the root file and save them into a dictionary '''
	histos = {}
	f = r.TFile.Open(filename)
	
	if someProcess != "":
		histo = histo_deepcopy(f.Get(var + "_" + someProcess))
		f.Close()
		del f
		return histo
  
	for key in f.GetListOfKeys():
		name = key.GetName()
		if (var not in name) or ("stack" in name) or ("canvas" in name): continue
		process = name.split('_')[-1]
		histos[process] = histo_deepcopy(f.Get(name))	
  
	f.Close()
	del f
	return histos

def rebin_histo(var, path, nquant, firstBin = [0.0]):
	''' This is the function that rebins the histogram leaving the background as flat as possible '''
	h = get_histos(var, path, someProcess = "background")

	xquant = array('d')
	yquant = array('d', [0.] * nquant)
	init = array('d', firstBin) #min bin

	for q in range(0, nquant):
		xquant.append(float((q+1))/nquant)

	h.GetQuantiles(nquant, yquant, xquant) # Use background to rebin


	rebining = init + yquant
	rebining = rebining.tolist()

	return rebining

def add_parsing_options():
	''' Add some parsing options '''
	parser = argparse.ArgumentParser()
	parser.add_argument("--nquant",    dest = "nquant")
	parser.add_argument("--variables", dest = "variables", default = functional_variables.keys())
	parser.add_argument("--mode",      dest = "mode")
	parser.add_argument("--year",      dest = "year", default = "2022")
	parser.add_argument("--ncores",	   dest = "ncores",default = 8)
	parser.add_argument("--lumis",	   dest = "lumis",default = {"2022":"13.09"})
	parser.add_argument("--cut",	   dest = "cut",default = "./wz-run3/common/cuts_wzsm.txt")
	parser.add_argument("--run-local", dest = "local",action = "store_true",default = False)
	parser.add_argument("--extra",	   dest = "extra",default = "",type = str,
						help = "Extra options for mcPlots, user must give extra options between ' '")
	parser.add_argument("--do-submit", dest = "submit",action = "store_true",default = False)
	parser.add_argument("--niceplot",  dest = "niceplot",action = "store_true",default = False)
	parser.add_argument("--other_out",  dest = "other_out",default = False,type = str)

	return parser.parse_args()   


def make_plotfile(filename, line):
	''' Create plotfiles for later plotting with mcPlots.py '''
	header = "# {}: {}={} \n".format("vim", "syntax", "sh")
	secondline = "# *; LegendCutoff=1e-5 \n"
	
	# == Create plot files for CMGTools
	f = open(filename, "w")
	f.write(header)
	f.write(secondline)
	f.write(line)
	f.close()
	return filename
	

def make_plots(options):
	'''
	This function takes user's options and launches a batch command with
	the necessary info to generate a plot of the selected variable and
	desired binning.
	
	Parameters
	----------
	options : tuple containing 11 elements:
		1. Output path
		2. Number of cores
		3. Luminosity (in 1/pb)
		4. Year
		5. Name of the file
		6. Variable to be studied
		7. Number of quantiles
		8. Cut file
		9. Extra options for mcPlots
		10. Extra options for mcPlots to make nice plots
		11. Submit command directly (maintain this as the second to last)
		12. Run local (maintain this as the last one)
		
	Returns
	-------
	cmd : batch command as a string containing all the options passed by
		  the user.
	'''
	
	comm = "python wz-run3/wz-run.py plot" # Raw command, let's add some options
	
	if "" not in options[8]: # Fixing syntax to pass the command to wz-run.py
		extra_opt = options[8][:-1]
		if options[9] == True: # Nice plot options
			extra_opt += ' --cmsprel "Academic" --TotalUncRatioStyle 3013 1001 --TotalUncRatioColor 1 1 --labelsSize 0.04'
		extra_opt += " --sP %s_rebin%d'"%(options[5],options[6])
	
	else: # Adding select plot option to choose what variable to plot
		extra_opt = "'--sP %s_rebin%d"%(options[5],options[6])
		if options[9] == True: # Nice plot options
			extra_opt += ' --cmsprel "Academic" --TotalUncRatioStyle 3013 1001 --TotalUncRatioColor 1 1 --labelsSize 0.04'
		extra_opt += "'"
		
	# Now we add other options like run local, do submit, number of cores, etc
	comm += " --outname " + options[0] + " --ncores " + options[1] + (" --run-local")*int(options[-1]) +\
			" --extra " + extra_opt + (" --do-submit")*int(options[-2]) + " --plotfile %s"%(options[4]) +\
			" --cutfile %s"%(options[7]) + " --year 2022 --inpath /beegfs/data/nanoAODv10/wz/"
	
	cmd = subprocess.check_output(comm,shell = True).decode("utf-8")
	return cmd
	
def make_cards(options):
	'''
	This function takes user's options and launches a batch command with
	the necessary info to produce a card of the selected variable and
	desired binning.
	
	Parameters
	----------
	options : tuple containing 11 elements:
		1. Output path
		2. Number of cores
		3. Luminosity (in 1/pb)
		4. Year
		5. Name of the file
		6. Variable to be studied
		7. Number of quantiles
		8. Cut file
		9. Extra options (for makeShapeCards_wzRun3.py)
		10. Rebinned quantiles
		11. Variable command name of the variable in plots_wz.txt
		12. Submit command directly (maintain this as the second to last)
		13. Run local (maintain this as the last one)
		
	Returns
	-------
	cmd : batch command as a string containing all the options passed by
		  the user.
	'''
	comm = "python wz-run3/wz-run.py card" # Raw command, let's add some options
	
	if "" not in options[8]: # Fixing syntax to pass the command to wz-run.py
		extra_opt = " --".join(options[8])
		extra_opt = "".join(["'--",extra_opt,"'"])
		
	else: extra_opt = "".join(options[8]) # If extra is not provided, it is taken as an empty string in a list
	
	if type(options[9]) == str:
		new_bin = options[9]
	
	else:
		new_bin = [str(bins) for bins in options[9]]
		new_bin = "[" + ",".join(new_bin) + "]"
		
	# Now we add other options like run local, do submit, number of cores, etc
	comm += " --outname " + options[0] + " --ncores " + options[1] + (" --run-local")*int(options[-1]) +\
			(" --extra " + extra_opt)*(len(extra_opt) != 0) + (" --do-submit")*int(options[-2]) +\
			" --binning %s"%(new_bin) +	" --cutfile %s"%(options[7]) + " --var %s"%(options[10]) +\
			" --year 2022 --inpath /beegfs/data/nanoAODv10/wz/"
	
	cmd = subprocess.check_output(comm,shell = True).decode("utf-8")
	return cmd

if __name__ == "__main__":
	# == Load options
	opts = add_parsing_options()
	nquant    = opts.nquant.split(",")
	variables = opts.variables.split(",") # This line raise an error if user don't give variables manually
	mode      = opts.mode
	year      = opts.year
	cores 	  = opts.ncores
	lumis 	  = opts.lumis
	cut 	  = opts.cut
	local 	  = opts.local
	submit 	  = opts.submit
	extra 	  = opts.extra
	niceplot  = opts.niceplot
	other_out = opts.other_out

	# == Rootfile with unrebinned plots
	inpath = "~rblazquez/TFG/ejemplo/plots_wz.root" # Path to plot variables, user must run wz-run.py before using this script
	outpath = "./check_discriminant_vars/"
	
	fancy_vars = {'m3l' : 'm_{3L}','met' : 'p_{T}^{miss}','m3lmet_Meas' : 'm_{WZ}'}

	# == Iterate over variables
	for var in variables:
		print("=======")
		print("{}".format(var))

		# == Get the required variable defined within CMGTools
		var_to_comm = functional_variables[var]
		
		if mode == "no_rebin":
			filename = "./wz-run3/separate-studies/bining_optimization/{var}_no_rebin_plots.txt".format(var = var)
			
			rebining = {"m3l" : "10,0,500","met" : "20,0,400","m3lmet_Meas" : "10,0,500"}
			
			out_new = out + "./cards/"
			if other_out: out_new = other_out + "./cards/"
			pars = (out_new, cores, lumis[year], year, filename, var, nq, cut, extra, rebining[var], var_to_comm, submit, local)
			batchcomm = make_cards(pars)
			print(batchcomm)
				
		else:
			for nq in nquant:
				out = outpath + "./rebin%s/%s"%(nq, var)
				nq = int(nq)
				# == Get the new binning for the histogram
				rebining = rebin_histo(var, inpath, nq)
				if mode == "plot":

					# == Create an specific plot file with the desired rebinning
					filename = "./wz-run3/separate-studies/bining_optimization/{var}_{nq}_plots.txt".format(var = var, nq = nq)
					if var in functional_variables:
						line = "%s_rebin%d:%s:%s;XTitle='%s (GeV)', MoreY=2.0\n"%(var, nq, var_to_comm, rebining, fancy_vars[var])
					else:
						line = "%s_rebin%d:%s:%s;XTitle='%s', MoreY=2.0\n"%(var, nq, var_to_comm, rebining, var)

					make_plotfile(filename, line)
					
					if other_out: out = other_out

					pars = (out, cores, lumis[year], year, filename, var, nq, cut, extra, niceplot, submit, local)
					batchcomm = make_plots(pars)
					print(batchcomm)
					
				elif mode == "card":
					filename = "./wz-run3/separate-studies/bining_optimization/{var}_{nq}_plots.txt".format(var = var, nq = nq)
					
					out_new = out + "./cards/"
					if other_out: out_new = other_out + "./cards/"
					pars = (out_new, cores, lumis[year], year, filename, var, nq, cut, extra, rebining, var_to_comm, submit, local)
					batchcomm = make_cards(pars)
					print(batchcomm)
