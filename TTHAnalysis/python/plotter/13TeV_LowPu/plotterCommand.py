# -*- coding: UTF-8 -*-.
#!/usr/bin/env/python

import os
import sys
import enum
import argparse
import warnings as wr
        
# =========== Default parameters
path        = "/pool/ciencias/nanoAODv6/lowPU2017/2020_07_21_postProc"
ftreesPath = "/pool/phedexrw/userstorage/cmstudents/cvico/WZ_LowPu/13TeV_Aug13/2020_07_21/2017/"
ftrees      = ("--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "0_tags ") +
	           "--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "1_lepMerge ") +
               "--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "2_recleaning ") +
               "--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "3_triggers ") +
               "--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "4_eventVars ")
              )

lumi        = 0.23
nCores      = 4

command     = "python mcPlots.py"
slurm       = 'sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out -- wrap "{command}"'



# =========== Function declaration

def ProcessCommand(args):
    prod, year, nthreads, outpath, selplot, region, ratiorange, queue, extra, pretend = args
    
    # Check if the output folder exists
    
    cmd = ""
    return cmd

# =========== Main part
if __name__ == "__main__":
    # Parser options
    parser = argparse.ArgumentParser()
    parser.add_argument('--production',     '-P',   metavar = "prod",       dest = "prod",       required = False)
    parser.add_argument('--year',           '-y',   metavar = 'year',       dest = "year",       required = False, default = "2016")
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
        print ('I still have to implement this :D')
    else:
        print('[INFO] Going local')
        ProcessCommand( (prod, year, queue, extra, nthreads, selplot, pretend, outpath, region, ratiorange) )    
        
