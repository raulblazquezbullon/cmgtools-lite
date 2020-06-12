# -*- coding: UTF-8 -*-.
#!/usr/bin/env python
import os, sys, enum, argparse
from multiprocessing import Pool
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

#### Settings
friendspath  = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"

mcpath       = "/pool/ciencias/nanoAODv6/29jan2020_MC"
datapath     = "/pool/ciencias/nanoAODv6/13jan2020"
logpath      = friendspath + "/{p}/{y}/logs/plots"

friendsscaff = "--Fs {fpath}/{p}/{y}/0_yeartag --Fs {fpath}/{p}/{y}/1_lepmerge_roch --Fs {fpath}/{p}/{y}/2_cleaning --Fs {fpath}/{p}/{y}/3_varstrigger --FMCs {fpath}/{p}/{y}/4_scalefactors"

commandscaff = "python mcPlots.py --tree NanoAOD --pdir {outpath} {friends} {samplespaths} -f -l {lumi} {nth} --year {year} --maxRatioRange 0.6 1.99 --ratioYNDiv 210 --showRatio --attachRatioPanel --fixRatioRange --legendColumns 3 --legendWidth 0.52 --legendFontSize 0.042 --noCms --topSpamSize 1.1 --lspam '#scale[1.1]{{#bf{{CMS}}}} #scale[0.9]{{#it{{Preliminary}}}}' --showMCError -W 'MuonSF * ElecSF * TrigSF * puWeight * bTagWeight * PrefireWeight' {selplot} {mcafile} {cutsfile} {plotsfile} {extra}"

slurmscaff   = "sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{command}'"

friendfolders = ["0_yeartag", "1_lepmerge_roch", "2_cleaning", "3_varstrigger", "4_scalefactors"]
lumidict      = {2016 : 35.92, 2017 : 41.53, 2018 : 59.74}


def GeneralExecutioner(task):
    prod, year, nthreads, outpath, selplot, queue, extra, pretend = task

    if not os.path.isdir(outpath + "/" + str(year)) and not pretend:
        os.system("mkdir -p " + outpath + "/" + str(year))

    if nthreads != 0:
        if not os.path.isdir(logpath.format(y = year, p = prod)) and not pretend:
            os.system("mkdir -p " + logpath.format(y = year, p = prod))

        jobname_   = "CMGTplotter_{y}_{p}_{s}".format(y = year, p = prod, s = "all" if selplot == "" else selplot)
        submitcomm = slurmscaff.format(nth     = nthreads,
                                       queue   = queue,
                                       jobname = jobname_,
                                       logpath = logpath.format(y = year, p = prod),
                                       command = PlottingCommand(prod, year, nthreads, outpath, selplot, extra))
        print "Command:", submitcomm
        if not pretend: os.system(submitcomm)
    else:
        execcomm = PlottingCommand(prod, year, nthreads, outpath, selplot, extra)
        print "Command:", execcomm
        if not pretend: os.system(execcomm)


    return


def PlottingCommand(prod, year, nthreads, outpath, selplot, extra):
    mcafile_   = "tw-run2/mca-tw-{y}.txt".format(y = year)
    cutsfile_  = "tw-run2/cuts-tw-{y}.txt".format(y = year)
    plotsfile_ = "tw-run2/plots-tw-2016.txt"

    nth_       = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_   = friendsscaff.format(fpath = friendspath,
                                     p     = prod,
                                     y     = year)

    comm = commandscaff.format(outpath      = outpath + "/" + str(year),
                               friends      = friends_,
                               samplespaths = "-P " + mcpath + " -P " + datapath,
                               lumi      = lumidict[year],
                               nth       = nth_,
                               year      = year,
                               selplot   = "" if selplot == "" else ("-sP " + selplot),
                               mcafile   = mcafile_,
                               cutsfile  = cutsfile_,
                               plotsfile = plotsfile_,
                               extra     = extra)

    return comm



def confirm(message = "Do you wish to continue?"):
    """
    Ask user to enter y(es) or n(o) (case-insensitive).
    :return: True if the answer is Y.
    :rtype: bool
    """
    answer = ""
    while answer not in ["y", "n", "yes", "no"]:
        answer = raw_input(message + " [Y/N]\n").lower()
    return answer[0] == "y"



if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--production','-P', metavar = "prod",      dest = "prod",    required = True)
    parser.add_argument('--year',      '-y', metavar = 'year',      dest = "year",    required = False, default = 2016, type = int)
    parser.add_argument('--queue',     '-q', metavar = 'queue',     dest = "queue",   required = False, default = "")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',     dest = "extra",   required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',  dest = "nthreads",required = False, default = 0, type = int)
    parser.add_argument('--select-plot','-sP',metavar = 'selplot',  dest = "selplot", required = False, default = "")
    parser.add_argument('--pretend',   '-p', action = "store_true", dest = "pretend", required = False, default = False)
    parser.add_argument('--outpath',   '-o', metavar = 'outpath',   dest = "outpath", required = False, default = "./temp/varplots")

    args     = parser.parse_args()
    prod     = args.prod
    year     = args.year
    queue    = args.queue
    extra    = args.extra
    nthreads = args.nthreads
    selplot  = args.selplot
    pretend  = args.pretend
    outpath  = args.outpath


    if queue != "":
        print "> Plotting jobs will be sent to the cluster."
        if abs(year - 2017) > 1:
            print "   - All three years will be plotted."
            cont = False
            if   pretend:
                cont = True
            elif confirm("Three jobs will be sent to queue {q} with {j} requested threads to plot in each year {pls}. Do you want to continue?".format(q = queue, j = nthreads, pls = "all the plots" if selplot == "" else selplot)):
                cont = True

            if cont:
                for y in [2016, 2017, 2018]:
                    GeneralExecutioner( (prod, y, nthreads, outpath, selplot, queue, extra, pretend) )
        else:
            cont = False
            if   pretend:
                cont = True
            elif confirm("One job will be sent to queue {q} with {j} requested threads to plot in year {y} {pls}. Do you want to continue?".format(q = queue, j = nthreads, y = year, pls = "all the plots" if selplot == "" else selplot)):
                cont = True

            if cont:
                GeneralExecutioner( (prod, year, nthreads, outpath, selplot, queue, extra, pretend) )
    else:
        print "> Local execution chosen."
        GeneralExecutioner( (prod, year, nthreads, outpath, selplot, queue, extra, pretend) )
