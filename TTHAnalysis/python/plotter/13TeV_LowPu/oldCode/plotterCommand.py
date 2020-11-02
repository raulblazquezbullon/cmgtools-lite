# -*- coding: UTF-8 -*-.
#!/usr/bin/env/python

import os
import sys
import enum
import argparse
import warnings as wr
        
# =========== Default parameters

CMD         = "python mcPlots.py --tree NanoAOD  -P {path} --pdir {outpath} " 
slurm       = 'sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap "{command}"'


defaultPars = {"path"       : "/pool/phedex/userstorage/cmstudents/cvico/WZ_LowPu/MiniTrees/14-07-2020/",
               "ftreesPath" : "/pool/phedex/userstorage/cmstudents/cvico/WZ_LowPu/FriendTrees/15-09-2020/2017/",
               "logpath"    : "{outpath}/logs",
               "lumi"       : 0.216943692,
               "nCores"     : 4,
               "mccFile"    : "13TeV_LowPu/lepchoice-FO.txt",
               "functions"  : "13TeV_LowPu/functions13TeV_lowPu.cc",
               "mcaFile"    : "13TeV_LowPu/mca-ttbar-mcdata.txt",
               "cuts"       : "13TeV_LowPu/ttbar_dilepton.txt",
               "plots"      : "13TeV_LowPu/ttbar_plots.txt",
               "weight"     : "", 
               "binnameTT"  : "ttbar"
              }

CMD = "python mcPlots.py --tree NanoAOD -P {path} --pedir {outpath} {extra} {mca} {cuts} {plots}" # Base part of the command that we are gonna use in this Analysis
steps = ["0_tags", "1_lepMerge", "2_recleaning", "3_triggers", "4_eventVars"]
# =========== Function declaration

def checkIfExists(path):
    return True if os.path.exists(path) else False

def addBoringLines(text):
    for step in steps: text += "--Fs {ftreesPath}{Friend} ".format(ftreesPath = defaultPars["ftreesPath"], Friend = step)
    Lines = ["-f -j 3 -l {lumi} ".format(lumi = defaultPars["lumi"]),
             "-L {functions} ".format(functions = defaultPars["functions"]),
             "--split-factor=-1 ",
             "--maxRatioRange 0.6  1.99 ", 
             "--ratioYNDiv 505 ",
             "--showRatio ",
             "--attachRatioPanel ", 
             "--fixRatioRange ",
             "--legendColumns 3 ",
             "--legendWidth 0.35 ",
	     "--mcc {mcc} ".format(mcc = defaultPars["mccFile"]),
	     "{mca} ".format(mca = defaultPars["mcaFile"]),
             "{cuts} ".format(cuts = defaultPars["cuts"]),
             "{plots} ".format(plots = defaultPars["plots"]),
             "{weight} ".format(weight = defaultPars["weight"]), #still have no weights to add
             "{binname} ".format(binname = "--binname ttbar"),
             "--legendFontSize 0.042 "
             "--noCms ",
	     "--rebin 4 ",
             "--topSpamSize 1.1 ",
             "--lspam '#scale[1.1]{#bf{CMS}} #scale[0.9]{#it{Preliminary}}' ",
             "--rspam '%(lumi) (13 TeV)' ",
             "--mcc {mccFile} ".format(mccFile = defaultPars["mccFile"]),
             ]
    
    for line in Lines: text += line
    
    return text


def ProcessCommand(args):
    prod, year, nthreads, outpath, selplot, region, ratiorange, queue, extra, pretend = args
    
    # Check if the output folder and logpath exists
    os.system("mkdir -p " + outpath) if not checkIfExists(outpath) and not pretend else 1
    
    # Stuff
    command = CMD.format(path = defaultPars["path"], outpath = outpath)
    command = addBoringLines(command)
#    command = process_region(command, region)
    for plot in selplot: command += " --sP {plot}".format(plot = plot)
    
    return command

# =========== Main part
if __name__ == "__main__":
    # Parser options
    parser = argparse.ArgumentParser()
    parser.add_argument('--production',     '-P',   metavar = "prod",       dest = "prod",       required = False)
    parser.add_argument('--year',           '-y',   metavar = 'year',       dest = "year",       required = False, default = "2017")
    parser.add_argument('--queue',          '-q',   metavar = 'queue',      dest = "queue",      required = False, default = "")
    parser.add_argument('--extraArgs',      '-e',   metavar = 'extra',      dest = "extra",      required = False, default = "")
    parser.add_argument('--nthreads',       '-j',   metavar = 'nthreads',   dest = "nthreads",   required = False, default = 0, type = int)
    parser.add_argument('--select-plot',    '--sP', action = "append",      dest = "selplot",    required = False, default = [])
    parser.add_argument('--pretend',        '-p',   action = "store_true",  dest = "pretend",    required = False, default = False)
    parser.add_argument('--outpath',        '-o',   metavar = 'outpath',    dest = "outpath",    required = False, default = "./temp/varplots")
    parser.add_argument('--region',         '-r',   metavar = 'region',     dest = "region",     required = False, default = "ttbar")
    parser.add_argument('--maxRatioRange',  '-R',   metavar = 'ratiorange', dest = "ratiorange", required = False, default = "0.8 1.2")
    
    args       = parser.parse_args()
    prod       = args.prod
    year       = args.year
    queue      = args.queue
    extra      = args.extra
    nthreads   = args.nthreads
    selplot    = args.selplot
    pretend    = args.pretend
    outpath    = args.outpath
    region     = args.region
    ratiorange = args.ratiorange
    
    if queue != "":
        print ('[INFO] Running in cluster ')
        print ('[INFO] For now this code is not prepared to submit commands, so it will only prompt the command to submit')
        jobname = "CMGTplotter_{y}_{p}_{s}".format(y = year, p = prod, s = "all" if len(selplot)==0 else ".".join(selplot))
        fullLogPath = defaultPars["logpath"].format(outpath = outpath) 
        os.system("mkdir -p " + fullLogPath) if not checkIfExists(fullLogPath) and queue != "" else 1
        command = slurm.format(nth = nthreads,
                               queue = queue,
                               jobname = jobname,
                               logpath = fullLogPath,
                               command = ProcessCommand( (prod, year, nthreads, outpath, selplot, region, ratiorange, queue, extra, pretend) )
                               )
    else:
        print('[INFO] Going local')
        command = ProcessCommand( (prod, year, nthreads, outpath, selplot, region, ratiorange, queue, extra, pretend) )    
        
    print(command)
