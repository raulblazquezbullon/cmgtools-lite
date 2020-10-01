# -*- coding: UTF-8 -*-.
#!/usr/bin/env/python

import os
import sys
import enum
import argparse
import warnings as wr
        
# =========== Default parameters
CMD = "python mcPlots.py --tree NanoAOD" # Base part of the command that we are gonna use in this Analysis


defaultPars = {"path"       : "/pool/phedex/userstorage/cmstudents/cvico/WZ_LowPu/MiniTrees/14-07-2020/",        # path where the merged samples are stored
               "ftreesPath" : "/pool/phedex/userstorage/cmstudents/cvico/WZ_LowPu/FriendTrees/15-09-2020/2017/", # path where the friend-trees are stored			
               "lumi"       : 0.216943692,																							  # Instantaneous Luminosity for RUN2017H
               "functions"  : "13TeV_LowPu/functions13TeV_lowPu.cc",															  # Some extra functions defined for the Analysis
              }



def AddOptions(parser):
	
	parser.add_argument("--production", '-P', metavar = "prod", 		dest = "prod", 		required = True)
	parser.add_argument("--year", 		'-y', metavar = "year", 		dest = "year", 		default = 2017)
	parser.add_argument("--selection", 	'-S', metavar = "selection", 	dest = "selection",  default = "ttbar")
	parser.add_argument("--outpath", 	'-o', metavar = "outpat", 	dest = "outpath",  		default = "/tmp/plots") # save plots in temporary folder (testing purposes)
	return parser

if __name__=="__main__":
	parser = argparse.ArgumentParser()

	
