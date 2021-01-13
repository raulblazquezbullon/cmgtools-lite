# -*- coding: UTF-8 -*-.
#!/usr/bin/env/python

import os
import sys
import enum
import argparse
import warnings as wr
        
# =========== Default parameters


CMD = "python mcPlots.py --tree NanoAOD -P {path} --pdir {outpath} {extra} {mca} {cuts} {plots} {listOfPlots}" # Base part of the command that we are gonna use in this Analysis
slurm_stuff = 'sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap "{command}"'

defaultPars = {"path"       : "/pool/phedex/userstorage/cvico/WZ_LowPu/MiniTrees/{prod}",       			# path where the merged samples are stored
               "ftreesPath" : "/pool/phedex/userstorage/cvico/WZ_LowPu/FriendTrees/15-09-2020/2017/", 	# path where the friend-trees are stored			
               "lumi"       : 0.216943692,																					   		# Instantaneous Luminosity for RUN2017H
               "functions"  : "13TeV_LowPu/functions13TeV_lowPu.cc",													   		# Some extra functions defined for the Analysis
					"jobname" 	 : "CMGplotter",																								# Name for the job that will run in queue
					"analysis_folder" : "13TeV_LowPu"
              }

steps = ["0_tags", "1_lepMerge", "2_recleaning", "3_triggerVars"]




def add_options(parser):
	
	parser.add_argument("--production", '-P', metavar = "prod", 		dest = "prod", 		default = "14-07-2020")
	parser.add_argument("--year", 		'-y', metavar = "year", 		dest = "year", 		default = 2017)
	parser.add_argument("--region", 	   '-r', metavar = "selection", 	dest = "region", default = "dilepton")
	parser.add_argument("--signal", 	   '-s', metavar = "signal", 	   dest = "signal", default = "ttbar")
	parser.add_argument("--outpath", 	'-o', metavar = "outpath", 	dest = "outpath",  	default = "/tmp/plots") # save plots in temporary folder (testing purposes)
	parser.add_argument("--queue", 	   '-q', metavar = "queue", 	   dest = "queue",  			default = None) # save plots in temporary folder (testing purposes)
	parser.add_argument("--nthreads", 	'-j', metavar = "nthreads", 	   dest = "nthreads",  	default = 0, type = int) 
	parser.add_argument("--select-plot", '--sP', metavar = "selectPlot", dest = "selectPlot", default = "forLocal")
	return parser

def makeFolders(outpath, queue):
	if not os.path.exists(outpath): os.system("mkdir -p " + outpath) # create the folder to store plots
	if queue != None: os.system("mkdir -p " + outpath + "/logs") # create the folder to store logs from CMGTools

def get_list_of_plots(selectPlot):
	'''
	Developer-defined list of plots
	'''
	list_of_variables = []
	if selectPlot == "forLocal":
		list_of_variables.extend([" --sP nVert", "lep1_pt","lep1_eta"]) 	# just two plots for testing in local
	
	elif selectPlot == "kinematic":
		list_of_variables.extend([" --sP met", "met_phi", "met_log"])
		list_of_variables.extend(["dilep_pt", "dilep_phi"])
		list_of_variables.extend(["lep1_pt", "lep1_conePt", "lep1_eta", "lep1_phi"])
		list_of_variables.extend(["lep2_pt", "lep2_conePt", "lep2_eta", "lep2_phi"])
		list_of_variables.extend(["jet1_pt", "jet1_eta", "jet1_phi"])
		list_of_variables.extend(["jet2_pt", "jet2_eta", "jet2_phi"])

	return " --sP ".join(list_of_variables)

def get_signal_mca(signal):	
	signal_dict = {}
	if signal == "ttbar":
		signal_dict["mca"]     = "{}/mca-ttbar-mcdata.txt".format(defaultPars["analysis_folder"])
		signal_dict["mcc"] 	  = "{}/lepchoice-FO.txt".format(defaultPars["analysis_folder"])
		signal_dict["binname"] = "ttbar"
		signal_dict["plots"]   = "{}/ttbar_plots.txt".format(defaultPars["analysis_folder"])
		signal_dict["rebin"] = "4"	
	return signal_dict

def get_cuts_file(selection):
	if selection == "dilepton":
		return "{}/ttbar_dilepton.txt".format(defaultPars["analysis_folder"])

if __name__ == "__main__":
	parser = add_options(argparse.ArgumentParser())
	
	options = parser.parse_args()
	
	production = options.prod
	year 		  = options.year
	region     = options.region
	signal     = options.signal
	outpath    = options.outpath
	queue 	  = options.queue
 	nthreads   = options.nthreads
	selectPlot = options.selectPlot
	signal_dict = get_signal_mca(signal)
	cut_file    = get_cuts_file(region)

	extra = ["--Fs {ftreesPath}{Friend} ".format(ftreesPath = defaultPars["ftreesPath"], Friend = step) for step in steps]
	extra.extend(["-f ",
		      "-j {}".format(nthreads) if nthreads != 0 and queue == None else "", 
		      "-l {}".format(defaultPars["lumi"]),
		      "--split-factor=-1",
             	      "--maxRatioRange 0.6  1.99", 
             	      "--ratioYNDiv 505",
		      "--showRatio",
		      "--attachRatioPanel", 
		      "--fixRatioRange",
	              "--legendColumns 3",
		      "--legendWidth 0.35",
		      "--legendFontSize 0.042 "
		      "--noCms",
		      "--topSpamSize 1.1 ",
		      "--lspam '#scale[1.1]{#bf{CMS}} #scale[0.9]{#it{Preliminary}}'",
		      "--rspam '%(lumi) (13 TeV)'",
		      "--binname {}".format(signal_dict["binname"]),
		      "--rebin {}".format(signal_dict["rebin"]),
		      "--mcc {}".format(signal_dict["mcc"])])

	comm = CMD.format(path = defaultPars["path"].format(prod = production),
							outpath = outpath,
							extra = " ".join(extra),
						   mca = signal_dict["mca"],
							cuts = cut_file,
							plots = signal_dict["plots"],
							listOfPlots = get_list_of_plots(selectPlot))
	makeFolders(outpath, queue)
	if queue != None:
		if queue not in ["infinite", "batch"]: raise RuntimeError("\n".join(["[ERROR]: Invalid queue '{}'", "[INFO]: Available queues  are", "infinite", "batch"]))
		else:
			comm_2_submit = slurm_stuff.format(nth = nthreads,
							   queue = queue,
							   jobname = defaultPars["jobname"],
							   logpath = outpath + "/logs",
							   command = comm)
			print(comm_2_submit)
	else:
		print(comm)


	

	
