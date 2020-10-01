# -*- coding: UTF-8 -*-.
#!/usr/bin/env/python

import os
import sys
import enum
import argparse
import warnings as wr
        
# =========== Default parameters


CMD = "python mcPlots.py --tree NanoAOD -P {path} --pedir {outpath} {extra} {mca} {cuts} {plots}" # Base part of the command that we are gonna use in this Analysis
slurm_stuff = 'sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap "{command}"'

defaultPars = {"path"       : "/pool/phedex/userstorage/cmstudents/cvico/WZ_LowPu/MiniTrees/{prod}",        # path where the merged samples are stored
               "ftreesPath" : "/pool/phedex/userstorage/cmstudents/cvico/WZ_LowPu/FriendTrees/{prod}", 	   # path where the friend-trees are stored			
               "lumi"       : 0.216943692,																					   # Instantaneous Luminosity for RUN2017H
               "functions"  : "13TeV_LowPu/functions13TeV_lowPu.cc",													   # Some extra functions defined for the Analysis
					"jobname" 	 : "CMGplotter",																						# Name for the job that will run in queue
              }

steps = ["0_tags", "1_lepMerge", "2_recleaning", "3_triggers", "4_eventVars"]



class fun_colors:
    OKBLUE = '\033[94m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'


def add_options(parser):
	
	parser.add_argument("--production", '-P', metavar = "prod", 		dest = "prod", 		required = True)
	parser.add_argument("--year", 		'-y', metavar = "year", 		dest = "year", 		default = 2017)
	parser.add_argument("--region", 	   '-r', metavar = "region", 	   dest = "region",     default = "ttbar")
	parser.add_argument("--selection", 	   '-s', metavar = "selection", 	   dest = "selection")
	parser.add_argument("--outpath", 	'-o', metavar = "outpath", 	dest = "outpath",  	default = "/tmp/plots") # save plots in temporary folder (testing purposes)
	parser.add_argument("--queue", 	   '-q', metavar = "queue", 	   dest = "queue",  			default = None) # save plots in temporary folder (testing purposes)
	parser.add_argument("--nthreads", 	'j', metavar = "nthreads", 	   dest = "nthreads",  	default = 0, type = int) 
	return parser


def add_region_stuff(Lines):
	if region == "ttbar":
		mca = "13TeV_LowPu/mca-ttbar-mcdata.txt"
		mcc = "13TeV_LowPu/lepchoice-FO.txt"
		binname = "ttbar"
		plots = "13TeV_LowPu/ttbar_plots.txt"

if __name__ == "__main__":
	parser = add_options(argparse.ArgumentParser())
	
	options = parser.parse_args()
	
	production = options.prod
	year 		  = options.year
	region     = options.region
	selection  = options.selection
	outpath    = options.outpath
	queue 	  = options.queue
 
	Lines = ["--Fs {ftreesPath}{Friend} ".format(ftreesPath = defaultPars["ftreesPath"], Friend = step) for step in steps]
	Lines.extend(["-l {}".format(defaultPars["lumi"]),
					  "--split-factor=-1 ",
             	  "--maxRatioRange 0.6  1.99 ", 
             	  "--ratioYNDiv 505 ",
					  "--showRatio ",
					  "--attachRatioPanel ", 
					  "--fixRatioRange ",
					  "--legendColumns 3 ",
					  "--legendWidth 0.35 ",
					  "--legendFontSize 0.042 "
					  "--noCms ",
					  "--topSpamSize 1.1 ",
					  "--lspam '#scale[1.1]{#bf{CMS}} #scale[0.9]{#it{Preliminary}}' ",
					  "--rspam '%(lumi) (13 TeV)' "])
	if queue != None:
		if queue not in ["infinite", "batch"]: raise RuntimeError("\n".join(["[ERROR]: Invalid queue '{}'", "[INFO]: Available queues  are", "infinite", "batch"]))
		else:
			comm_2_submit = slurm_stuff.format(nth = nthreads,
														  queue = queue,
														  jobname = jobname,
														  logpath = logpath.format(y = year, p = production)
														  command = CMD)


	print(Lines)	


	

	
