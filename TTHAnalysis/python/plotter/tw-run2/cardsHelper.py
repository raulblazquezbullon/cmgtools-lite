import os, sys, enum, argparse
from multiprocessing import Pool
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

friendspath  = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"
logpath      = friendspath + "/{p}/{y}/logs/plots"
#logpath = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/plot_logs"
lumidict      = {2016 : 35.92, 2017 : 41.53, 2018 : 59.74}


friendsscaff = "--FDs {P}/0_lumijson --Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors --Fs {P}/5_mvas --Fs {P}/6_hemissue"

slurmscaff   = "sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{command}'"

commandscaff = '''python makeShapeCardsNew.py --tree NanoAOD {mcafile} {cutsfile} "{variable}" "{bins}" {samplespaths} {friends} --od {outpath} -l {lumi} {nth} -f -L tw-run2/functions_tw.cc --neg --threshold 0.01 -W "MuonIDSF * MuonISOSF * ElecIDSF * ElecRECOSF * TrigSF * puWeight * bTagWeight * PrefireWeight" --year {year} {asimovornot} {uncs} {extra} --AP --storeAll --notMinimumFill --notVarsChanges'''




def CardsCommand(prod, year, var, bines, isAsimov, nthreads, outpath, region, noUnc, useFibre, extra):
    mcafile_   = "tw-run2/mca-tw.txt"
    cutsfile_  = "tw-run2/cuts-tw-{reg}.txt".format( reg = region)
    plotsfile_ = "tw-run2/plots-tw-{reg}.txt".format(reg = region)

    samplespaths_ = "-P " + friendspath + "/" + prod + ("/" + year) * (year != "run2")
    if useFibre: samplespaths_ = samplespaths_.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias")

    nth_       = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_   = friendsscaff
    outpath_   = outpath + "/" + year + "/" + region


    comm = commandscaff.format(outpath      = outpath_,
                               friends      = friends_,
                               samplespaths = samplespaths_,
                               lumi      = lumidict[int(year)] if year != "run2" else str(lumidict[2016]) + "," + str(lumidict[2017]) + "," + str(lumidict[2018]),
                               variable  = var,
                               bins      = bines,
                               nth       = nth_,
                               year      = year if year != "run2" else "2016,2017,2018",
                               asimovornot = "--asimov s+b" if isAsimov else "",
                               mcafile   = mcafile_,
                               cutsfile  = cutsfile_,
                               uncs      = "--unc tw-run2/uncs-tw.txt --amc" if not noUnc else "--amc",
                               extra     = extra)

    return comm


def ExecuteOrSubmitTask(tsk):
    prod, year, variable, bines, asimov, nthreads, outpath, region, noUnc, useFibre, extra, pretend, queue = tsk
    if queue == "":
        thecomm = CardsCommand(prod, year, variable, bines, asimov, nthreads, outpath, region, noUnc, useFibre, extra)
        print "Command: " + thecomm

        if not pretend:
            os.system(thecomm)

    else:
        if not os.path.isdir(logpath.format(p = prod, y = yr)):
            os.system("mkdir -p " + logpath.format(p = prod, y = yr))

        thecomm = slurmscaff.format(nth     = nthreads,
                                    queue   = queue,
                                    jobname = "CMGTcards_" + year + "_" + variable + "_" + region,
                                    logpath = logpath.format(p = prod, y = yr),
                                    command = CardsCommand(prod, year, variable, bines, asimov, nthreads, outpath, region, noUnc, useFibre, extra))

        print "Command: " + thecomm

        if not pretend:
            os.system(thecomm)
    return


if __name__ == "__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--production','-P', metavar = "prod",       dest = "prod",     required = True)
    parser.add_argument('--year',      '-y', metavar = 'year',       dest = "year",     required = False, default = "2016")
    parser.add_argument('--queue',     '-q', metavar = 'queue',      dest = "queue",    required = False, default = "")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',      dest = "extra",    required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--outpath',   '-o', metavar = 'outpath',    dest = "outpath",  required = False, default = "./temp/cards")
    parser.add_argument('--region',    '-r', metavar = 'region',     dest = "region",   required = False, default = "1j1t")
    parser.add_argument('--nounc',     '-nu',action  = "store_true", dest = "nounc",    required = False, default = False)
    parser.add_argument('--variable',  '-v', metavar = 'variable',   dest = "variable", required = False, default = "getBDtW(tmvaBDT_1j1b)")
    parser.add_argument('--bines',     '-b', metavar = 'bines',      dest = "bines",    required = False, default = "[0.5,1.5,2.5,3.5,4.5,5.5, 6.5, 7.5, 8.5, 9.5, 10.5]")
    parser.add_argument('--asimov',    '-a', action  = "store_true", dest = "asimov",   required = False, default = False)
    parser.add_argument('--useFibre',  '-f', action  = "store_true", dest = "useFibre", required = False, default = False)


    args     = parser.parse_args()
    prod     = args.prod
    year     = args.year
    queue    = args.queue
    extra    = args.extra
    nthreads = args.nthreads
    pretend  = args.pretend
    outpath  = args.outpath
    region   = args.region
    noUnc    = args.nounc
    variable = args.variable
    bines    = args.bines
    asimov   = args.asimov
    useFibre = args.useFibre

    #print CardsCommand(prod, year, variable, bines, asimov, nthreads, outpath, region, noUnc, useFibre, extra)

    theregs  = ["1j1t", "2j1t", "2j2t"]
    thevars  = ["getBDtW20bins(tmvaBDT_1j1b)", "getBDtWOther12bins(tmvaBDT_2j1b)", "Jet2_Pt"]
    thebins  = ["[0.5,1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5,10.5,11.5,12.5,13.5,14.5,16.5,17.5,18.5,19.5,20.5]",
                "[0.5,1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5,10.5,11.5,12.5]",
                "[30.,40.,50.,60.,70.,80.,90.,100.,110.,120.,130.,140.,150.,160.,170.,180.,190.]"]
    theyears = ["2016", "2017", "2018", "run2"]
    tasks    = []

    if variable.lower() != "all":
        if "," in variable:
            thevars = variable.split(",")
        else:
            thevars = [ variable ]

    if region.lower() != "all":
        if "," in region:
            theregs = region.split(",")
        else:
            theregs = [ region ]

    if year.lower() != "all":
        if "," in year:
            theyears = year.split(",")
        else:
            theyears = [ year ]

    for yr in theyears:
        for i in range(len(theregs)):
            tasks.append( (prod, yr, thevars[i], thebins[i], asimov, nthreads, outpath, theregs[i], noUnc, useFibre, extra, pretend, queue) )

    #print tasks
    calculate = True
    for task in tasks:
        print "\nProcessing " + str(task) + "\n"

        if calculate:
            ExecuteOrSubmitTask(task)
