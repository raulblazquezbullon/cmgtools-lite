import ROOT  as r
import os, sys, argparse, math, json
import warnings as wr
from array import array
from copy  import deepcopy
from multiprocessing import Pool
import CombineHarvester.CombineTools.plotting as plot
import CombineHarvester.CombineTools.combine.rounding as rounding

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import varList as vl

r.PyConfig.IgnoreCommandLineOptions = True
r.TH1.AddDirectory(0)

comm1 = "combineTool.py -M Impacts -d {incard} --doInitialFit --robustFit 1 {ncores} {asimov} {extra} -m 1 -n {prefix} --out {outdir} --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --cminDefaultMinimizerStrategy 0"
comm2 = "combineTool.py -M Impacts -d {incard} --robustFit 1 --doFits {ncores} {asimov} {extra} -m 1 -n {prefix} --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --cminDefaultMinimizerStrategy 0"
comm3 = "combineTool.py -M Impacts -d {incard} -o impacts{prefix}.json {ncores} {asimov} {extra} -m 1 -n {prefix} --robustFit 1 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --cminDefaultMinimizerStrategy 0"
#comm1 = "combineTool.py -M Impacts -d {incard} --doInitialFit --robustFit 1 {ncores} {asimov} {extra} -m 1 -n {prefix} --out {outdir} --robustHesse 1 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000"
#comm2 = "combineTool.py -M Impacts -d {incard} --robustFit 1 --doFits {ncores} {asimov} {extra} -m 1 -n {prefix} --robustHesse 1 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000"
#comm3 = "combineTool.py -M Impacts -d {incard} -o impacts{prefix}.json {ncores} {asimov} {extra} -m 1 -n {prefix} --robustHesse 1 --robustFit 1 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000"
comm4 = "plotImpacts.py -i impacts{prefix}.json -o impacts{prefix}"

def makeImpacts(task):
    inpath, year, region, ncores, pretend, verbose, extra = task

    print '\n> Creating impacts for region(s)', region, 'from year', year, '\n'
    
    impactsoutpath = inpath + "/" + iY + "/" + "/impacts_" + region

    if "," not in region:
        physicsModel = 'text2workspace.py -m 125 {infile} -o {outfile}'.format(infile  = inpath + "/" + iY + "/{r}/cuts-tw-{r}.txt".format(r = region),
                                                                               outfile = inpath + "/" + iY + "/{r}/cuts-tw-{r}_ws.root".format(r = region),)
        if verbose:
            print "Text2Workspace command:", physicsModel, "\n"

        if not pretend:
            if os.path.isfile(inpath + "/" + iY + "/{r}/cuts-tw-{r}_ws.root".format(r = region)):
                if verbose:
                    print "    - Erasing old workspace..."
                os.system("rm " + inpath + "/" + iY + "/{r}/cuts-tw-{r}_ws.root".format(r = region))
            outstat = os.system(physicsModel)
            if outstat:
                raise RuntimeError("FATAL: text2workspace.py failed to execute for year {y} and regions {r}.".format(y = year, r = region))

    firstcomm = comm1.format(y      = year,
                             ncores = ("--parallel " + str(ncores)) if ncores else "",
                             asimov = "",
                             incard = "../combcard_{r}.root".format(r = region.replace(",", "")) if "," in region else "../{r}/cuts-tw-{r}_ws.root".format(r = region),
                             outdir = "./",
                             extra  = extra,
                             prefix = year + "_" + region.replace(",", ""),
    )

    if verbose:
        print "First command:", firstcomm, "\n"

    if not pretend:
        outstat = os.system("cd " + impactsoutpath + "; " + firstcomm + "; cd -")
        if outstat:
            raise RuntimeError("FATAL: first command failed to execute for region {r} of year {y}.".format(v = region,
                                                                                                           y = year))

    secondcomm = comm2.format(y      = year,
                             ncores = ("--parallel " + str(ncores)) if ncores else "",
                             asimov = "",
                             incard = "../combcard_{r}.root".format(r = region.replace(",", "")) if "," in region else "../{r}/cuts-tw-{r}_ws.root".format(r = region),
                             outdir = "./",
                             extra  = extra,
                             prefix = year + "_" + region.replace(",", ""),
    )

    if verbose:
        print "Second command:", secondcomm, "\n"
    
    if not pretend:
        outstat = os.system("cd " + impactsoutpath + "; " + secondcomm + "; cd -")
        if outstat:
            raise RuntimeError("FATAL: second command failed to execute for region {r} of year {y}.".format(v = region,
                                                                                                            y = year))
    
    thirdcomm = comm3.format(y      = year,
                             ncores = ("--parallel " + str(ncores)) if ncores else "",
                             asimov = "",
                             incard = "../combcard_{r}.root".format(r = region.replace(",", "")) if "," in region else "../{r}/cuts-tw-{r}_ws.root".format(r = region),
                             outdir = "./",
                             extra  = extra,
                             prefix = year + "_" + region.replace(",", ""),
    )

    if verbose:
        print "Third command:", thirdcomm, "\n"
    
    if not pretend:
        outstat = os.system("cd " + impactsoutpath + "; " + thirdcomm + "; cd -")
        if outstat:
            raise RuntimeError("FATAL: third command failed to execute for region {r} of year {y}.".format(v = region,
                                                                                                           y = year))
    
    fourthcomm = comm4.format(y      = year,
                              ncores = ("--parallel " + str(ncores)) if ncores else "",
                              asimov = "",
                              incard = "../combcard_{r}.root".format(r = region.replace(",", "")) if "," in region else "../{r}/cuts-tw-{r}_ws.root".format(r = region),
                              outdir = "./",
                              extra  = extra,
                              prefix = year + "_" + region.replace(",", ""),
    )

    if verbose:
        print "Fourth command:", fourthcomm, "\n"

    if not pretend:
        outstat = os.system("cd " + impactsoutpath + "; " + fourthcomm + "; cd -")
        if outstat:
            raise RuntimeError("FATAL: fourth command failed to execute for region {r} of year {y}.".format(v = region,
                                                                                                            y = year))
                           
    
    print '\n> Region(s)', region, "' impacts produced.\n"
    return



if __name__ == '__main__':
    vl.SetUpWarnings()
    r.gROOT.SetBatch(True)
    print "===== Fitting procedure with some uncertainty profiling\n"
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',     '-i', metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/differential/")
    parser.add_argument('--year',       '-y', metavar = 'year',       dest = "year",     required = False, default = "all")
    parser.add_argument('--region',    '-r', metavar = 'region',        dest = "region",  required = False, default = "1j1t")
    parser.add_argument('--extraArgs',  '-e', metavar = 'extra',      dest = "extra",    required = False, default = "")
    parser.add_argument('--nthreads',   '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',    '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--verbose',    '-V', action  = "store_true", dest = "verbose",  required = False, default = False)


    args     = parser.parse_args()
    year     = args.year
    nthreads = args.nthreads
    pretend  = args.pretend
    inpath   = args.inpath
    verbose  = args.verbose
    region   = args.region
    extra    = args.extra


    tasks = []
    theyears = []
    presentyears = next(os.walk(inpath))[1]

    if "2016" in presentyears:
        theyears.append("2016")
    if "2017" in presentyears:
        theyears.append("2017")
    if "2018" in presentyears:
        theyears.append("2018")
    if "run2" in presentyears:
        theyears.append("run2")

    if year.lower() != "all" and year in presentyears:
        theyears = [ year ]
    elif year.lower() != "all":
        raise RuntimeError("FATAL: the year requested is not in the provided input folder.")

    if region.lower() == "all":
        raise RuntimeError("FATAL: you must provide a region, or various of them!")
        
    for iY in theyears:
        if not os.path.isdir(inpath + "/" + iY + "/" + "/impacts_" + region):
            os.system("mkdir -p " + inpath + "/" + iY + "/" + "/impacts_" + region)
        tasks.append( (inpath, iY, region, nthreads, pretend, verbose, extra) )

    #print tasks
    for task in tasks:
        print "\nProcessing " + str(task) + "\n"
        makeImpacts(task)
