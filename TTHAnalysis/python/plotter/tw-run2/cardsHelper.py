import os, sys, enum, argparse
from multiprocessing import Pool
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

mcpath       = "/pool/ciencias/nanoAODv6/29jan2020_MC"
datapath     = "/pool/ciencias/nanoAODv6/13jan2020"
friendspath  = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"
logpath      = friendspath + "/{p}/{y}/logs/plots"
friendfolders = ["0_yeartag", "1_lepmerge_roch", "2_cleaning", "3_varstrigger", "4_scalefactors", "5_mvas"]
lumidict      = {2016 : 35.92, 2017 : 41.53, 2018 : 59.74}


friendsscaff = "--Fs {fpath}/{p}/{y}/0_yeartag --Fs {fpath}/{p}/{y}/1_lepmerge_roch --Fs {fpath}/{p}/{y}/2_cleaning --Fs {fpath}/{p}/{y}/3_varstrigger --FMCs {fpath}/{p}/{y}/4_scalefactors --Fs {fpath}/{p}/{y}/5_mvas"

slurmscaff   = "sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{command}'"

commandscaff = '''python makeShapeCardsNew.py --tree NanoAOD {mcafile} {cutsfile} "{variable}" "{bins}" {samplespaths} {friends} --od {outpath} --s2v -l {lumi} {nthreads} -f -L tw-run2/functions_tw.cc --neg --threshold 0.01 -W "MuonSF * ElecSF * TrigSF * puWeight * bTagWeight{extraweights}" --year {year} {asimovornot} --unc tw-run2/uncs-tw.txt --amc'''

#### SCAFFOLD
ASIMOV="--asimov signal"


def CardsCommand(prod, year, nthreads, outpath, selplot, region, extra):
    mcafile_   = "tw-run2/mca-tw-{y}.txt".format(y = year)
    cutsfile_  = "tw-run2/cuts-tw-{reg}.txt".format(reg = region)
    plotsfile_ = "tw-run2/plots-tw-{reg}.txt".format(reg = region)

    samplespaths_ = "-P " + mcpath + "/" + str(year) + " -P " + datapath + "/" + str(year)
    extraweights_ = "" if year == 2018 else " * PrefireWeight"

    nth_       = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_   = friendsscaff.format(fpath = friendspath,
                                     p     = prod,
                                     y     = year)
    outpath_   = outpath + "/" + str(year) + "/" + region


    comm = commandscaff.format(outpath      = outpath_,
                               friends      = friends_,
                               samplespaths = samplespaths_,
                               lumi      = lumidict[year],
                               nth       = nth_,
                               year      = year,
                               extraweights = extraweights_,
                               selplot   = "" if selplot == "" else ("--sP " + selplot),
                               mcafile   = mcafile_,
                               cutsfile  = cutsfile_,
                               plotsfile = plotsfile_,
                               extra     = extra)

    return comm


if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--production','-P', metavar = "prod",      dest = "prod",    required = True)
    parser.add_argument('--year',      '-y', metavar = 'year',      dest = "year",    required = False, default = 2016, type = int)
    parser.add_argument('--queue',     '-q', metavar = 'queue',     dest = "queue",   required = False, default = "")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',     dest = "extra",   required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',  dest = "nthreads",required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action = "store_true", dest = "pretend", required = False, default = False)
    parser.add_argument('--outpath',   '-o', metavar = 'outpath',   dest = "outpath", required = False, default = "./temp/varplots")
    parser.add_argument('--region',    '-r', metavar = 'region',    dest = "region",  required = False, default = "1j1t")


    args     = parser.parse_args()
    prod     = args.prod
    year     = args.year
    queue    = args.queue
    extra    = args.extra
    nthreads = args.nthreads
    pretend  = args.pretend
    outpath  = args.outpath
    region   = args.region


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
                    GeneralExecutioner( (prod, y, nthreads, outpath, selplot, region, queue, extra, pretend) )
        else:
            cont = False
            if   pretend:
                cont = True
            elif confirm("One job will be sent to queue {q} with {j} requested threads to plot in year {y} {pls}. Do you want to continue?".format(q = queue, j = nthreads, y = year, pls = "all the plots" if selplot == "" else selplot)):
                cont = True

            if cont:
                GeneralExecutioner( (prod, year, nthreads, outpath, selplot, region, queue, extra, pretend) )
    else:
        print "> Local execution chosen."
        GeneralExecutioner( (prod, year, nthreads, outpath, selplot, region, queue, extra, pretend) )
