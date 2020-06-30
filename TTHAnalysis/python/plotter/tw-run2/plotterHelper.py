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
datasamples  = ["SingleMuon", "SingleElec", "DoubleMuon", "DoubleEG", "MuonEG", "LowEGJet", "HighEGJet", "EGamma"]

mcpath       = "/pool/ciencias/nanoAODv6/29jan2020_MC"
datapath     = "/pool/ciencias/nanoAODv6/13jan2020"
logpath      = friendspath + "/{p}/{y}/logs/plots"

#friendsscaff = "--Fs {fpath}/{p}/{y}/0_yeartag --Fs {fpath}/{p}/{y}/1_lepmerge_roch --Fs {fpath}/{p}/{y}/2_cleaning --Fs {fpath}/{p}/{y}/3_varstrigger --FMCs {fpath}/{p}/{y}/4_scalefactors --Fs {fpath}/{p}/{y}/5_mvas"

friendsscaff = "--Fs {P}/0_yeartag --Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors --Fs {P}/5_mvas"

#commandscaff = "python mcPlots.py --tree NanoAOD --pdir {outpath} {friends} {samplespaths} -f -l {lumi} {nth} --year {year} --maxRatioRange 0.8 1.2 --ratioYNDiv 210 --showRatio --attachRatioPanel --fixRatioRange --legendColumns 3 --legendWidth 0.52 --legendFontSize 0.042 --noCms --topSpamSize 1.1 --lspam '#scale[1.1]{{#bf{{CMS}}}} #scale[0.9]{{#it{{Preliminary}}}}' --showMCError -W 'MuonSF * ElecSF * TrigSF * puWeight * bTagWeight{extraweights}' -L tw-run2/functions_tw.cc {selplot} {mcafile} {cutsfile} {plotsfile} {extra}"

commandscaff = "python mcPlots.py --tree NanoAOD --pdir {outpath} {friends} {samplespaths} -f -l {lumi} {nth} --year {year} --maxRatioRange 0.8 1.2 --ratioYNDiv 210 --showRatio --attachRatioPanel --fixRatioRange --legendColumns 3 --legendWidth 0.52 --legendFontSize 0.042 --noCms --topSpamSize 1.1 --lspam '#scale[1.1]{{#bf{{CMS}}}} #scale[0.9]{{#it{{Preliminary}}}}' --showMCError -W 'MuonSF * ElecSF * TrigSF * puWeight * bTagWeight * PrefireWeight' -L tw-run2/functions_tw.cc {selplot} {mcafile} {cutsfile} {plotsfile} {extra}"



slurmscaff   = 'sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap "{command}"'

friendfolders = ["0_yeartag", "1_lepmerge_roch", "2_cleaning", "3_varstrigger", "4_scalefactors", "5_mvas"]
lumidict      = {2016 : 35.92, 2017 : 41.53, 2018 : 59.74}


def GeneralExecutioner(task):
    prod, year, nthreads, outpath, selplot, region, queue, extra, pretend, useFibre = task

    if not os.path.isdir(outpath + "/" + str(year)) and not pretend:
        os.system("mkdir -p " + outpath + "/" + str(year))

    if queue != "":
        if not os.path.isdir(logpath.format(y = year, p = prod)) and not pretend:
            os.system("mkdir -p " + logpath.format(y = year, p = prod))

        for reg in region.split(","):
            jobname_   = "CMGTplotter_{y}_{p}_{s}".format(y = year, p = prod, s = "all" if selplot == "" else selplot)
            submitcomm = slurmscaff.format(nth     = nthreads,
                                        queue   = queue,
                                        jobname = jobname_,
                                        logpath = logpath.format(y = year, p = prod),
                                        command = PlottingCommand(prod, year, nthreads, outpath, selplot, reg, extra, useFibre))
            print "Command:", submitcomm
            if not pretend: os.system(submitcomm)
    else:
        for reg in region.split(","):
            execcomm = PlottingCommand(prod, year, nthreads, outpath, selplot, reg, extra, useFibre)
            print "Command:", execcomm
            if not pretend: os.system(execcomm)


    return



#### OLD
#def PlottingCommand(prod, year, nthreads, outpath, selplot, region, extra):
    #mcafile_   = "tw-run2/mca-tw-{y}.txt".format(y = year)
    #cutsfile_  = "tw-run2/cuts-tw-{reg}.txt".format(reg = region)
    #plotsfile_ = "tw-run2/plots-tw-{reg}.txt".format(reg = region)

    #samplespaths_ = "-P " + mcpath + "/" + str(year) + " -P " + datapath + "/" + str(year)
    #extraweights_ = "" if year == 2018 else " * PrefireWeight"

    #nth_       = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    #friends_   = friendsscaff.format(fpath = friendspath,
                                     #p     = prod,
                                     #y     = year)
    #outpath_   = outpath + "/" + str(year) + "/" + region


    #comm = commandscaff.format(outpath      = outpath_,
                               #friends      = friends_,
                               #samplespaths = samplespaths_,
                               #lumi      = lumidict[year],
                               #nth       = nth_,
                               #year      = year,
                               #extraweights = extraweights_,
                               #selplot   = "" if selplot == "" else ("--sP " + selplot),
                               #mcafile   = mcafile_,
                               #cutsfile  = cutsfile_,
                               #plotsfile = plotsfile_,
                               #extra     = extra)

    #return comm


def PlottingCommand(prod, year, nthreads, outpath, selplot, region, extra, useFibre):
    mcafile_   = "tw-run2/mca-tw.txt"
    cutsfile_  = "tw-run2/cuts-tw-{reg}.txt".format(reg = region)
    plotsfile_ = "tw-run2/plots-tw-{reg}.txt".format(reg = region)

    samplespaths_ = "-P " + friendspath + "/" + prod
    if useFibre: samplespaths_ = samplespaths_.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias")

    nth_       = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_   = friendsscaff
    outpath_   = outpath + "/" + year + "/" + region


    comm = commandscaff.format(outpath      = outpath_,
                               friends      = friends_,
                               samplespaths = samplespaths_,
                               lumi      = lumidict[int(year)] if year != "run2" else str(lumidict[2016]) + "," + str(lumidict[2017]) + "," + str(lumidict[2018]),
                               nth       = nth_,
                               year      = year if year != "run2" else "2016,2017,2018",
                               selplot   = "" if selplot == "" else ("--sP " + selplot),
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
    parser.add_argument('--year',      '-y', metavar = 'year',      dest = "year",    required = False, default = "2016")
    parser.add_argument('--queue',     '-q', metavar = 'queue',     dest = "queue",   required = False, default = "")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',     dest = "extra",   required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',  dest = "nthreads",required = False, default = 0, type = int)
    parser.add_argument('--select-plot','-sP',metavar = 'selplot',  dest = "selplot", required = False, default = "")
    parser.add_argument('--pretend',   '-p', action = "store_true", dest = "pretend", required = False, default = False)
    parser.add_argument('--outpath',   '-o', metavar = 'outpath',   dest = "outpath", required = False, default = "./temp/varplots")
    parser.add_argument('--region',    '-r', metavar = 'region',    dest = "region",  required = False, default = "1j1t")
    parser.add_argument('--createSoftLinks', action = "store_true", dest = "createSL", required = False, default = False)
    parser.add_argument('--useFibre',  "-f", action = "store_true", dest = "useFibre", required = False, default = False)


    args     = parser.parse_args()
    prod     = args.prod
    year     = args.year
    queue    = args.queue
    extra    = args.extra
    nthreads = args.nthreads
    selplot  = args.selplot
    pretend  = args.pretend
    outpath  = args.outpath
    region   = args.region
    createSL = args.createSL
    useFibre = args.useFibre


    if createSL:
        destdir = friendspath + "/" + prod + "/" + str(year)
        SLcommscaff = "ln -s {realdataset} {symlink}"

        #### First, MC
        print "> Creating MC symbolic links..."
        mcsampleslist = os.listdir(mcpath + "/" + str(year))
        for sam in mcsampleslist:
            if not os.path.islink(destdir + "/" + sam):
                os.system(SLcommscaff.format(realdataset = mcpath + "/" + str(year) + "/" + sam,
                                             symlink = destdir + "/" + sam))
        #sys.exit()

        #### Later, data
        print "> Creating data symbolic links..."
        datasampleslist = os.listdir(datapath + "/" + str(year))
        for sam in datasampleslist:
            isData = any(ext in sam for ext in datasamples)
            if not os.path.islink(destdir + "/" + sam) and isData:
                os.system(SLcommscaff.format(realdataset = datapath + "/" + str(year) + "/" + sam,
                                             symlink = destdir + "/" + sam))

        print "> Finished!"
    elif queue != "":
        print "> Plotting jobs will be sent to the cluster."
        if year == "all":
            print "   - All three years will be plotted."
            cont = False
            if   pretend:
                cont = True
            elif confirm("Four jobs per requested region will be sent to queue {q} with {j} requested threads to plot in each year and in the combination {pls}. Do you want to continue?".format(q = queue, j = nthreads, pls = "all the plots" if selplot == "" else selplot)):
                cont = True

            if cont:
                for y in ["2016", "2017", "2018", "run2"]:
                    GeneralExecutioner( (prod, y, nthreads, outpath, selplot, region, queue, extra, pretend, useFibre) )
        else:
            cont = False
            if   pretend:
                cont = True
            elif confirm("One job per requested region will be sent to queue {q} with {j} requested threads to plot in year {y} {pls}. Do you want to continue?".format(q = queue, j = nthreads, y = year, pls = "all the plots" if selplot == "" else selplot)):
                cont = True

            if cont:
                GeneralExecutioner( (prod, year, nthreads, outpath, selplot, region, queue, extra, pretend, useFibre) )
    else:
        print "> Local execution chosen."
        GeneralExecutioner( (prod, year, nthreads, outpath, selplot, region, queue, extra, pretend, useFibre) )
