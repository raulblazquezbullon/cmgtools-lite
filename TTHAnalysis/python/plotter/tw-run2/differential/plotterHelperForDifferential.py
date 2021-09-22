# -*- coding: UTF-8 -*-.
#!/usr/bin/env python
import os, sys, enum, argparse
from multiprocessing import Pool
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import varList as vl
#### Settings
friendspath  = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"
datasamples  = ["SingleMuon", "SingleElec", "DoubleMuon", "DoubleEG", "MuonEG", "LowEGJet", "HighEGJet", "EGamma"]

mcpath       = "/pool/phedex/nanoAODv6v7"
datapath     = "/pool/phedex/nanoAODv6v7"

logpath      = friendspath + "/{p}/{y}/logs/plots"

friendsscaff = "--FDs {P}/0_lumijson --Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors"

commandscaff = "python mcPlots.py --tree NanoAOD --pdir {inpath} {friends} {samplespaths} -f -l {lumi} {nth} --year {year} {ratio} --showRatio --fixRatioRange --legendColumns 1 --legendWidth 0.07 --legendFontSize 0.039 --noCms --topSpamSize 1.1 --lspam '#splitline{{#scale[1.1]{{#bf{{CMS}}}}}}{{#scale[0.9]{{#it{{Preliminary}}}}}}' --neg --showMCError -W 'MuonIDSF * MuonISOSF * ElecIDSF * ElecRECOSF * TrigSF * puWeight * bTagWeight * PrefireWeight' -L tw-run2/functions_tw.cc {mcafile} {cutsfile} {plotsfile} {extra} --AP --noStatTotLegendOnRatio --addspam '{nameregion}' --lspamPosition 0.21 .845 .35 .885 --TotalUncRatioStyle 3244 0 --noStatUncOnRatio --YTitleOffset 2.1 2.1 --CanvasSize 600 450 --TotalUncRatioColor 920 920 --addspamPosition .41 .855 .6 .895 --transparentLegend --PrincipalPadDimensions 0.00 0.25 1.00 1.00 --RatioPadDimensions 0.00 0.00 1.00 0.25 --LeftRightMargins 0.16 0.03 --ratioYLabel 'Data/MC' --labelsSize 22 --labelsFont 43 --BottomMarginRatio 0.42 --XTitleOffsetRatio 4.8 --noXErrData --printBin 'bin' --printBinUnity --noExpoShift --no-elist" #--ratioYNDiv 210 --NotDrawRatioLine

# For blind plots
commandblindscaff = "python mcPlots.py --tree NanoAOD --pdir {inpath} {friends} {samplespaths} -f -l {lumi} {nth} --year {year} {ratio} --showRatio --fixRatioRange --legendColumns 1 --legendWidth 0.07 --legendFontSize 0.032 --noCms --topSpamSize 1.1 --lspam '#splitline{{#scale[1.1]{{#bf{{CMS}}}}}}{{#scale[0.9]{{#it{{Preliminary}}}}}}' --neg --showMCError -W 'MuonIDSF * MuonISOSF * ElecIDSF * ElecRECOSF * TrigSF * puWeight * bTagWeight * PrefireWeight' -L tw-run2/functions_tw.cc {mcafile} {cutsfile} {plotsfile} {extra} --AP --noStatTotLegendOnRatio --addspam '{nameregion}' --lspamPosition 0.21 .845 .35 .885 --TotalUncRatioStyle 3244 0 --noStatUncOnRatio --YTitleOffset 2.1 2.1 --TotalUncRatioColor 920 920 --addspamPosition .41 .855 .6 .895 --transparentLegend --LeftRightMargins 0.16 0.03  --labelsSize 22 --labelsFont 43 --BottomMarginRatio 0.42 --XTitleOffsetRatio 4.8 --noXErrData --printBin 'bin' --printBinUnity --noExpoShift --no-elist" #--ratioYNDiv 210 --NotDrawRatioLine


slurmscaff   = 'sbatch {extraS} -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap "{command}"'
lumidict     = {2016 : 36.33,
                2017 : 41.53,
                2018 : 59.74}

def PythonListToString(theL):
    ret = "["
    for el in theL:
        ret += str(el)
        if el != theL[-1]:
            ret += ", "
    ret += "]"
    return ret


def createAdHocPlotsFile(iV, outpath):
    thetext = "{v} : {V} : {b} : IncludeUnderflow=False, MoreY=1.3, LegendCutoff=0, XTitle='{tit}'\n".format(v   = iV.lower(),
                                                                                                             V   = vl.varList[iV]["var_detector"],
                                                                                                             b   = PythonListToString(vl.varList[iV]["bins_detector"]),
                                                                                                             tit = vl.varList[iV]["xaxis"])

    thef = open(outpath + "/plots-adhoc.txt", "w")
    thef.write(thetext)
    thef.close()
    return



def GeneralExecutioner(task):
    prod, year, nthreads, inpath, thevar, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm = task

    if not os.path.isdir(inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards"):
        raise RuntimeError("FATAL: no bincards folder found for variable {v} of year {y}".format(v = thevar, y = year))
    
    if not os.path.isdir(inpath + "/" + str(year) + "/" + thevar + "/PreFitplots") and not pretend:
        os.system("mkdir -p " + inpath + "/" + str(year) + "/" + thevar + "/PreFitplots")
        
    createAdHocPlotsFile(thevar, inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards")
    
    if queue != "":
        if not os.path.isdir(logpath.format(y = year, p = prod)) and not pretend:
            os.system("mkdir -p " + logpath.format(y = year, p = prod))

        jobname_   = "CMGTplotterdiff_{y}_{v}".format(y = year, v = thevar)
        submitcomm = slurmscaff.format(extraS = extraslurm,
                                      nth     = nthreads,
                                      queue   = queue,
                                      jobname = jobname_,
                                      logpath = logpath.format(y = year, p = prod),
                                      command = PlottingCommand(prod, year, nthreads, inpath, thevar, ratiorange, extra, useFibre, doUncs, doBlind))
        print "Command:", submitcomm
        if not pretend: os.system(submitcomm)
    else:
        execcomm = PlottingCommand(prod, year, nthreads, inpath, iV, ratiorange, extra, useFibre, doUncs, doBlind)
        print "Command:", execcomm
        if not pretend: os.system(execcomm)
    return



def PlottingCommand(prod, year, nthreads, inpath, thevar, ratio, extra, useFibre, doUncs, doBlind):
    mcafile_    = inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards/mca-total.txt"
    cutsfile_   = "tw-run2/cuts-tw-1j1t_differential.txt"
    plotsfile_  = inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards/plots-adhoc.txt"

    samplespaths_ = "-P " + friendspath + "/" + prod + ("/" + year) * (year != "run2")
    if useFibre: samplespaths_ = samplespaths_.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias")

    nth_        = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_    = friendsscaff
    inpath_     = inpath + "/" + str(year) + "/" + thevar + "/PreFitplots"
    ratio_      = "--maxRatioRange " + ratio
    nameregion_ = "e^{#pm}#mu^{#mp}+1j1b+0j_{loose}"
    
    thecomm = commandscaff if not doBlind else commandblindscaff
    
    comm = thecomm.format(inpath       = inpath_,
                          friends      = friends_,
                          samplespaths = samplespaths_,
                          lumi         = lumidict[int(year)] if year != "run2" else str(lumidict[2016]) + "," + str(lumidict[2017]) + "," + str(lumidict[2018]),
                          nth          = nth_,
                          year         = year if year != "run2" else "2016,2017,2018",
                          mcafile      = mcafile_,
                          cutsfile     = cutsfile_,
                          plotsfile    = plotsfile_,
                          ratio        = ratio_,
                          extra        = ("--unc " + inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards/tw-uncs-adhoc.txt" ) * doUncs + extra,
                          nameregion   = nameregion_)

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
    parser = argparse.ArgumentParser(usage = "python plotterHelperForDifferential.py [options]", description = "Helper for plotting.", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--production','-P', metavar = "prod",      dest = "prod",    required = True)
    parser.add_argument('--year',      '-y', metavar = 'year',      dest = "year",    required = False, default = "2016")
    parser.add_argument('--queue',     '-q', metavar = 'queue',     dest = "queue",   required = False, default = "")
    parser.add_argument('--variable',  '-v', metavar = 'variable',  dest = "variable",required = False, default = "all")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',     dest = "extra",   required = False, default = "")
    parser.add_argument('--extraSlurmArgs','-eS',metavar='extraslurm',dest="extraslurm",required=False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',  dest = "nthreads",required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action = "store_true", dest = "pretend", required = False, default = False)
    parser.add_argument('--inpath',    '-i', metavar = 'inpath',    dest = "inpath",  required = False, default = "./temp/differential")
    parser.add_argument('--maxRatioRange', "-R", metavar = 'ratiorange', dest = "ratiorange", required = False, default = "0.8 1.2")
    parser.add_argument('--useFibre',  "-f", action = "store_true", dest = "useFibre", required = False, default = False)
    parser.add_argument('--uncertainties', "-u", action = "store_true", dest = "doUncs", required = False, default = False)
    parser.add_argument('--blind', action = "store_true", dest = "blindornot", required = False, default = False)



    args     = parser.parse_args()
    prod     = args.prod
    year     = args.year
    queue    = args.queue
    extra    = args.extra
    extraslurm=args.extraslurm
    nthreads = args.nthreads
    pretend  = args.pretend
    inpath  = args.inpath
    useFibre = args.useFibre
    ratiorange = args.ratiorange
    doUncs   = args.doUncs
    variable = args.variable
    thevars  = vl.varList["Names"]["Variables"]
    if "," in variable:
        thevars = variable.split(",")
    elif variable.lower() != "all":
        thevars = [ variable ]
        
    if args.blindornot: extra += " --xp data"
    doBlind = args.blindornot

    if queue != "":
        print "> Plotting jobs will be sent to the cluster."
        if year == "all":
            print "   - All three years and the combination will be plotted."
            cont = False
            if   pretend:
                cont = True
            elif confirm("Four jobs will be sent to queue {q} with {j} requested threads to plot in each year and in the combination the variable(s). Do you want to continue?".format(q = queue, j = nthreads)):
                cont = True

            if cont:
                for y in ["2016", "2017", "2018", "run2"]:
                    for iV in thevars:
                        GeneralExecutioner( (prod, y, nthreads, inpath, iV, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm) )
        else:
            cont = False
            if   pretend:
                cont = True
            elif confirm("One job will be sent to queue {q} with {j} requested threads to plot in year {y} the variable(s). Do you want to continue?".format(q = queue, j = nthreads, y = year)):
                cont = True

            if cont:
                for iV in thevars:
                    GeneralExecutioner( (prod, year, nthreads, inpath, iV, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm) )
    else:
        print "> Local execution chosen."
        if year == "all":
            print "   - All three years and the combination will be plotted."
            for y in ["2016", "2017", "2018", "run2"]:
                for iV in thevars:
                    GeneralExecutioner( (prod, y, nthreads, inpath, iV, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm) )
        else:
            for iV in thevars:
                GeneralExecutioner( (prod, year, nthreads, inpath, iV, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm) )
