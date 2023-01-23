import ROOT as r
from array import array
import numpy as np
import argparse
from copy import deepcopy
import os
import re
import sys

r.gROOT.SetBatch(1)

functional_variables = {"sum_3l_pt"     : "m3lmet"}

def histo_deepcopy(h):
  ''' This function avoids any memory problem regarding histogram creation '''  
  h.SetDirectory(0)
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
  parser.add_argument("--variables", dest = "variables", default = list(functional_variables.keys()))
  parser.add_argument("--mode",      dest = "mode")
  parser.add_argument("--year",      dest = "year", default = "2016,2017,2018")

  return parser.parse_args()   


def make_plotfile(filename, line):
  ''' Create plotfiles for later plotting with mcPlots.py '''
  header = "# {}: {}={} \n".format("vim", "syntax", "sh")
  secondline = "# *; LegendCutoff=1e-5 \n"

  # == Create plot files for CMGTools
  for ch in channels:
    f = open(filename, "w")
    f.write(header)
    f.write(secondline)
    f.write(line)
    f.close()
  return filename

def make_plots():
   ''' This is where the magic hapens :) '''
   '''
      * Edit this function as you please (add parameters, options, whatever) 
      * The ultimate goal for this function is to produce plots of variables that have a certain binning
   '''
   comm = "python wz-run3/wz-run.py"
   return comm 

if __name__ == "__main__":
   # == Load options
   opts = add_parsing_options()
   
   nquant    = opts.nquant.split(",")
   variables = opts.variables.split(",")
   mode      = opts.mode
   year      = opts.year
   # == Rootfile with unrebinned plots
   inpath = "something_blah/plots_wz.root"
   outpath = "./check_discriminant_vars/"

   # == Iterate over variables
   for var in variables:
     print("=======")
     print(("{}".format(var)))

     # == Get the required variable defined within CMGTools
     var_to_comm = functional_variables[var]
     
     for nq in nquant:
       out = outpath + "/rebin%s/%s "%(nq, var)
       nq = int(nq)
       # == Get the new binning for the histogram
       rebining = rebin_histo(var, inpath%ch, nq, firstBin)
       if mode == "plot":
          
          # == Create an specific plot file with the desired rebinning
          filename = "wz-run3/separate-studies/optimize_bining/{var}_{nq}_plots.txt".format(var = var, nq = nq)
          line = "%s_rebin%d:%s:%s;XTitle='%s', MoreY=2.0\n"%(var, nq, var_to_comm, rebining, var)

          if not os.path.isfile(filename): make_plotfile(filename, line)

          pars = (out, cores, lumis[year], year, filename, var, nq, cut)
          batchcomm = make_plots(pars)
          print(batchcomm)
         

