import ROOT as r
import sys, os, argparse, math
from array import array
from copy import deepcopy
from multiprocessing import Pool

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import varList as vl

r.gROOT.SetBatch(True)
vl.SetUpWarnings()

friendspath   = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"
logpath       = friendspath + "/{p}/{y}/logs/cards_differential"
friendfolders = ["0_yeartag", "1_lepmerge_roch", "2_cleaning", "3_varstrigger", "4_scalefactors", "5_mvas"]
lumidict      = {2016 : 35.92, 2017 : 41.53, 2018 : 59.74}
friendsscaff  = "--Fs {P}/0_yeartag --Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors --Fs {P}/5_mvas"

slurmscaff    = "sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{command}'"

commandscaff  = '''python makeShapeCardsNew.py --tree NanoAOD {mcafile} {cutsfile} "{variable}" "{bins}" {samplespaths} {friends} --od {outpath} -l {lumi} {nth} -f -L {func} --neg -W "MuonIDSF * MuonISOSF * ElecIDSF * ElecRECOSF * TrigSF * puWeight * bTagWeight * PrefireWeight" --year {year} {asimovornot} {uncs} {extra} {name} --AP --storeAll --notMinimumFill --notVarsChanges'''

#### IMPORTANT NOTE: it is crucial to keep the xsec and lumi weights, although afterwards we
# will have to divide by the second one. The first one is relevant becasue of the dividing of the files.
# The second one, because of the proportions between MC simulations.


def PythonListToString(theL):
    ret = "["
    for el in theL:
        ret += str(el)
        if el != theL[-1]:
            ret += ", "
    ret += "]"
    return ret


def ExecuteOrSubmitTask(tsk):
    prod, year, variable, asimov, nthreads, outpath, region, noUnc, useFibre, extra, pretend, queue, thebin = tsk
    if queue == "":
        thecomm = CardsCommand(prod, year, variable, asimov, nthreads, outpath, region, noUnc, useFibre, extra, thebin)
        print "Command: " + thecomm

        if not pretend:
            os.system(thecomm)

    else:
        if not os.path.isdir(logpath.format(p = prod, y = yr)):
            os.system("mkdir -p " + logpath.format(p = prod, y = yr))

        thecomm = slurmscaff.format(nth     = nthreads,
                                    queue   = queue,
                                    jobname = "CMGTcardsforunfoldingwithfits",
                                    logpath = logpath.format(p = prod, y = yr),
                                    command = CardsCommand(prod, year, variable, asimov, nthreads, outpath, region, noUnc, useFibre, extra, thebin))

        print "Command: " + thecomm
        if not pretend:
            os.system(thecomm)

    return


def CardsCommand(prod, year, var, isAsimov, nthreads, outpath, region, noUnc, useFibre, extra, ibin):
    mcafile_   = "tw-run2/differential/mca-differential/mca-twttbar-diff.txt" if "forExtr" not in region else "tw-run2/mca-tw.txt"
    cutsfile_  = "tw-run2/differential/cuts-differential-pure1j1t/cuts-detector-1j1t.txt"

    samplespaths_ = "-P " + friendspath + "/" + prod + ("/" + year) * (year != "run2")
    if useFibre: samplespaths_ = samplespaths_.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias")

    nth_       = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_   = friendsscaff
    outpath_   = outpath + "/" + year + "/" + var + "/sigextr_fit/rebinhistos"

    if not os.path.isdir(outpath_):
        os.system("mkdir -p " + outpath_)

    bins_      = PythonListToString([i + 0.5 for i in range(vl.nBinsForBDT + 1)]) if "forExtr" in region else "1000,-1,1"
    variable_  = "tmvaBDT_1j1b" if "forExtr" not in region else "theBDT_bin{i}(tmvaBDT_1j1b)".format(i = ibin)
    name_      = "--binname " + region + "_bin" + str(ibin)

    extra += ' -A "^1btag" "bin{b}" "{cut}"'.format(b = ibin, cut = "(" + str(vl.varList[var]["bins_detector"][ibin]) + "<=" + vl.varList[var]["var_detector"] + ") && (" + vl.varList[var]["var_detector"] + "<" + str(vl.varList[var]["bins_detector"][ibin + 1]) + ")")

    comm = commandscaff.format(outpath      = outpath_,
                               friends      = friends_,
                               samplespaths = samplespaths_,
                               lumi      = (lumidict[int(year)] if year != "run2" else str(lumidict[2016]) + "," + str(lumidict[2017]) + "," + str(lumidict[2018])),
                               variable  = variable_,
                               bins      = bins_,
                               nth       = nth_,
                               year      = year if year != "run2" else "2016,2017,2018",
                               asimovornot = "--asimov s+b" if isAsimov else "",
                               mcafile   = mcafile_,
                               cutsfile  = cutsfile_,
                               uncs      = "" if not "forExtr" in region else "--unc tw-run2/uncs-tw.txt --amc" if not noUnc else "--amc",
                               name      = name_,
                               func      = "tw-run2/functions_tw.cc" if "forExtr" not in region else (outpath_ + "/rebin_functions_{y}_{v}.cc".format(y = year, v = var)),
                               extra     = extra)
    return comm


def createFunctionFileForVariable(tsk):
    inpath, iY, iV = tsk

    path = inpath + "/" + iY + "/" + iV + "/sigextr_fit"
    nameofhisto = "x_ttbar"

    if not vl.unifttbar:
        print '> Uniform tW distribution of the BDT discriminant\n'
        nameofhisto = "x_tw"
    else:
        print '> Uniform ttbar distribution of the BDT discriminant\n'

    Base = '''#include <iostream>
'''

    ndetebins = len(vl.varList[iV]["bins_detector"]) - 1
    #print Base
    for iB in range(ndetebins):
        #print iB
        Base = Base + addFunctionOfBin(path + "/rebinhistos/histos_bin" + str(iB) + ".root", nameofhisto, iB)
        #print Base

    print "> Saving file"
    outputF = open(path + "/rebinhistos/rebin_functions_{y}_{v}.cc".format(y = iY, v = iV), 'w')
    outputF.write(Base)
    outputF.close()
    return


def compileFunctionFile(tsk):
    inpath, iY, iV = tsk
    path = inpath + "/" + iY + "/" + iV + "/sigextr_fit"

    print "> Compiling..."
    os.system("rm " + path + "/rebinhistos/rebin_functions_{y}_{v}_cc*".format(y = iY, v = iV))
    r.gROOT.LoadMacro(path + "/rebinhistos/rebin_functions_{y}_{v}.cc+".format(y = iY, v = iV))

    return



def addFunctionOfBin(fpath, histoname, thebin):
    nq  = vl.nBinsForBDT  # Number of bins in which to divide the BDT distribution.
    xq  = array('d', [0]*nq)
    yq  = array('d', [0]*nq)
    for i in range(0, nq):
        xq[i] = float(i+1) / nq

    count = 0
    thefile = r.TFile.Open(fpath, "READ")
    thehisto = thefile.Get(histoname)
    thehisto.GetQuantiles(nq, yq, xq)
    thefile.Close(); del thefile

    outtxt = '''\n
Float_t theBDT_bin{iB}(Double_t BDT) {{
  if      (BDT < {val})\t return 1;
'''.format(val = yq[0], iB = thebin)

    subBin = 2
    for i in range(1, nq - 1):
        outtxt += '  else if (BDT < %f)\t return %d;\n'%(yq[i],subBin)
        subBin += 1

    outtxt += '  else                       return %d;\n} \n'%subBin
    return outtxt


def getVariedHisto(inpath, iV, thenom, theunc, theproc, thebin, thevar):
    outh = None; tmpname  = thenom + "_" + theunc + "_" + str(thebin) + thevar
    #print "### Creating varied normalisation", theunc, "unc. for nominal", thenom, "and variation", thevar
    for y in ["2016", "2017", "2018"]:
        #print "### file", inpath + "/" + y + "/" + iV + "/sigextr_fit/rebinhistos/forExtr_bin{b}.root".format(b = thebin)

        rf_oftheyear = r.TFile(inpath + "/" + y + "/" + iV + "/sigextr_fit/rebinhistos/forExtr_bin{b}.root".format(b = thebin), "READ")

        nametoconsider = thenom
        for iY in ["2016", "2017", "2018"]:
            if iY in nametoconsider and iY != y:
                nametoconsider = "x_" + theproc

        for iY in [["16", "17"], ["16", "18"], ["17", "18"]]:
            if "".join(iY) in nametoconsider and not any([sub in y for sub in iY]):
                nametoconsider = "x_" + theproc

        #print "name", nametoconsider

        if y in vl.ProfileSystsThatAreNotPresentAllYears[theunc]:
            htmp    = deepcopy(rf_oftheyear.Get(nametoconsider).Clone(tmpname))
            sf      = rf_oftheyear.Get("x_" + theproc + "_" + theunc + thevar).Integral() / rf_oftheyear.Get("x_" + theproc).Integral()
            htmp.Scale(sf)
            if not outh:
                outh = deepcopy(htmp)
            else:
                outh.Add(htmp)
            del htmp
        elif outh:
            outh.Add(rf_oftheyear.Get(nametoconsider))
        else:
            outh = deepcopy(rf_oftheyear.Get(nametoconsider).Clone(tmpname))
        rf_oftheyear.Close(); del rf_oftheyear

    return outh


def createCardsForEachSys(tsk):
    inpath, iY, iV, syst = tsk
    print "    - Creating individual cards for variable " + iV + " of year " + iY + " for syst. " + syst

    path = inpath + "/" + iY + "/" + iV + "/sigextr_fit/rebinhistos"

    #if not os.path.isdir(path + "/cards_{s}".format(s = syst)):
        #os.system("mkdir " + path + "/cards_{s}".format(s = syst))

    validfirstentries = {"*", "#", "bin", "observation", "shapes"}

    #if syst != "elecidsfUp": return

    for iB in range(len(vl.varList[iV]["bins_detector"]) - 1):
        readF = open(path + "/forExtr_bin{b}.txt".format(b = iB), 'r')

        presentprocesses = []

        outtext = ""
        for line in readF:
            entries = line.split()
            if entries[0] in validfirstentries.union(vl.ProfileSysts):
                tmpline = deepcopy(line)
                for el in vl.ProfileSysts:
                    tmpline = tmpline.replace(el, el + "_" + str(iB))

                if "shapes" in tmpline and iY == "run2":
                    tmpline = tmpline.replace("forExtr_bin{b}.root".format(b = iB), "forExtr_bin{b}_run2.root".format(b = iB))

                outtext += tmpline
            elif len(entries) > 1:
                if ("lnN" in entries[1]):
                    outtext += line
                elif "process" in entries[0]:
                    if entries[1].isdigit():
                        outtext += line
                    else:
                        tmpline = deepcopy(line)
                        puresys = syst.replace("Up", "").replace("Down", "")
                        if "tw" in tmpline:
                            presentprocesses.append("tw")
                        if "ttbar" in tmpline:
                            presentprocesses.append("ttbar")
                        if "dy" in tmpline:
                            presentprocesses.append("dy")
                        if "vvttv" in tmpline:
                            presentprocesses.append("vvttv")
                        if "nonworz" in tmpline:
                            presentprocesses.append("nonworz")
                        if not puresys == "":
                            if not isinstance(vl.systMap[puresys], dict):
                                tmpline = tmpline.replace("tw", "tw_" + syst).replace("ttbar", "ttbar_" + syst).replace("dy", "dy_" + syst).replace("vvttv", "vvttv_" + syst).replace("nonworz", "nonworz_" + syst)
                            elif not puresys == "":
                                if vl.systMap[puresys]["tw"]:
                                    tmpline = tmpline.replace("tw", "tw_" + syst)
                                if vl.systMap[puresys]["ttbar"]:
                                    tmpline = tmpline.replace("ttbar", "ttbar_" + syst)
                                if vl.systMap[puresys]["dy"]:
                                    tmpline = tmpline.replace("dy", "dy_" + syst)
                                if vl.systMap[puresys]["vvttv"]:
                                    tmpline = tmpline.replace("vvttv", "vvttv_" + syst)
                                if vl.systMap[puresys]["nonworz"]:
                                    tmpline = tmpline.replace("nonworz", "nonworz_" + syst)
                        outtext += tmpline
                elif "rate" in entries[0]:
                    if syst == "":
                        outtext += line
                    else:
                        puresys = syst.replace("Up", "").replace("Down", "")
                        tmpline = deepcopy(line)
                        thef = r.TFile(path + "/forExtr_bin{b}.root".format(b = iB), "READ")

                        #print tmpline, entries[presentprocesses.index("nonworz") + 1], thef.Get("x_nonworz_" + syst).Integral()
                        #print "pre:", tmpline

                        #print syst, iB
                        if not isinstance(vl.systMap[puresys], dict):
                            if "tw" in presentprocesses:
                                tmpline = tmpline.replace(entries[presentprocesses.index("tw") + 1], str(round(thef.Get("x_tw_"      + syst).Integral(), 3)))
                            if "ttbar" in presentprocesses:
                                tmpline = tmpline.replace(entries[presentprocesses.index("ttbar") + 1], str(round(thef.Get("x_ttbar_"   + syst).Integral(), 3)))
                            if "dy" in presentprocesses:
                                tmpline = tmpline.replace(entries[presentprocesses.index("dy") + 1], str(round(thef.Get("x_dy_"      + syst).Integral(), 3)))
                            if "vvttv" in presentprocesses:
                                tmpline = tmpline.replace(entries[presentprocesses.index("vvttv") + 1], str(round(thef.Get("x_vvttv_"   + syst).Integral(), 3)))
                            if "nonworz" in presentprocesses:
                                tmpline = tmpline.replace(entries[presentprocesses.index("nonworz") + 1], str(round(thef.Get("x_nonworz_" + syst).Integral(), 3)))
                        else:
                            if "tw" in presentprocesses and vl.systMap[puresys]["tw"]:
                                tmpline = tmpline.replace(entries[presentprocesses.index("tw") + 1], str(round(thef.Get("x_tw_"      + syst).Integral(), 3)))
                            if "ttbar" in presentprocesses and vl.systMap[puresys]["ttbar"]:
                                tmpline = tmpline.replace(entries[presentprocesses.index("ttbar") + 1], str(round(thef.Get("x_ttbar_"   + syst).Integral(), 3)))
                            if "dy" in presentprocesses and vl.systMap[puresys]["dy"]:
                                tmpline = tmpline.replace(entries[presentprocesses.index("dy") + 1], str(round(thef.Get("x_dy_"      + syst).Integral(), 3)))
                            if "vvttv" in presentprocesses and vl.systMap[puresys]["vvttv"]:
                                tmpline = tmpline.replace(entries[presentprocesses.index("vvttv") + 1], str(round(thef.Get("x_vvttv_"   + syst).Integral(), 3)))
                            if "nonworz" in presentprocesses and vl.systMap[puresys]["nonworz"]:
                                tmpline = tmpline.replace(entries[presentprocesses.index("nonworz") + 1], str(round(thef.Get("x_nonworz_" + syst).Integral(), 3)))

                        thef.Close(); del thef

                        #print "post:", tmpline
                        outtext += tmpline


        readF.close()
        #if len(presentprocesses) < 5:
            #print outtext
        outF  = open(path + "/forExtr_bin{b}_{s}.txt".format(b = iB, s = syst), 'w')
        outF.write(outtext)
        outF.close()
        #break

        if iY == "run2" and syst == "": #### We need to modify the rootfiles!
            print "    - Creating new rootfile card for bin", iB
            therootfile = r.TFile.Open(path + "/forExtr_bin{b}.root".format(b = iB), "READ")
            tmpdictofthings = {}
            for key in therootfile.GetListOfKeys():
                copyname = key.GetName()
                isaproc  = False; isaprofiledunc = False;
                theproc = deepcopy(copyname.split("_")[1])
                if (copyname.split("_")[1] in vl.ProcessesNames and
                   len(copyname.split("_")) <= 2) or copyname == "x_data_obs":
                    isaproc = True

                for el in vl.ProfileSysts:
                    if el in copyname:
                        isaprofiledunc = True
                    copyname = copyname.replace(el, el + "_" + str(iB))
                tmpdictofthings[copyname] = deepcopy(therootfile.Get(key.GetName()).Clone(copyname))


                # We have to create new files!
                if not isaproc and not isaprofiledunc and "data" not in copyname:
                    for iU in vl.ProfileSystsThatAreNotPresentAllYears:
                        newnam = copyname + "_" + iU + "_" + str(iB)
                        #print "# Creating variations for the normalisation unc.", iU, "for nominal", copyname

                        tmpdictofthings[newnam + "Up"]   = deepcopy(getVariedHisto(inpath, iV, copyname, iU, theproc, iB, "Up"))
                        tmpdictofthings[newnam + "Down"] = deepcopy(getVariedHisto(inpath, iV, copyname, iU, theproc, iB, "Down"))
            therootfile.Close(); del therootfile

            theoutrootfile = r.TFile.Open(path + "/forExtr_bin{b}_run2.root".format(b = iB), "RECREATE")
            for key in tmpdictofthings:
                tmpdictofthings[key].Write()
            theoutrootfile.Close(); del theoutrootfile

    return




if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',    '-i', metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/differential/")
    parser.add_argument('--step',      '-s', metavar = 'step',       dest = "step",     required = True,  default = 0, type = int)
    parser.add_argument('--year',      '-y', metavar = 'year',       dest = "year",     required = False, default = "all")
    parser.add_argument('--variable',  '-v', metavar = 'variable',   dest = "variable", required = False, default = "all")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',      dest = "extra",    required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--production','-P', metavar = "prod",       dest = "prod",     required = True)
    parser.add_argument('--queue',     '-q', metavar = 'queue',      dest = "queue",    required = False, default = "")
    parser.add_argument('--outpath',   '-o', metavar = 'outpath',    dest = "outpath",  required = False, default = "./temp/differential/cards")
    parser.add_argument('--nounc',     '-u', action  = "store_true", dest = "nounc",    required = False, default = False)
    parser.add_argument('--asimov',    '-a', action  = "store_true", dest = "asimov",   required = False, default = False)
    parser.add_argument('--useFibre',  '-f', action  = "store_true", dest = "useFibre", required = False, default = False)


    args     = parser.parse_args()
    prod     = args.prod
    step     = args.step
    queue    = args.queue
    year     = args.year
    extra    = args.extra
    nthreads = args.nthreads
    outpath  = args.outpath
    noUnc    = args.nounc
    pretend  = args.pretend
    inpath   = args.inpath
    asimov   = args.asimov
    variable = args.variable
    useFibre = args.useFibre

    thevars  = vl.varList["Names"]["Variables"]
    theyears = ["2016", "2017", "2018", "run2"]
    if   step == 0:
        print "> Producing necessary initial histograms..."

        theregs  = ["histos"]
        tasks    = []

        if variable.lower() != "all":
            if "," in variable:
                thevars = variable.split(",")
            else:
                thevars = [ variable ]

        if year.lower() != "all":
            if "," in year:
                theyears = year.split(",")
            else:
                theyears = [ year ]

        for reg in theregs:
            for yr in theyears:
                for var in thevars:
                    for theb in range(len(vl.varList[var]["bins_detector"]) - 1):
                        tasks.append( (prod, yr, var, asimov, nthreads, outpath, reg, noUnc, useFibre, extra, pretend, queue, theb) )

        #print tasks
        calculate = True
        for task in tasks:
            print "\nProcessing " + str(task) + "\n"

            #if str(task) == "('2020-09-20', 'run2', 'Lep1Lep2_DPhi', True, 16, 'temp_2021_01_22_fitdiftodas/differential', 'forExtr', False, True, '', False, '')":
                #calculate = True

            if calculate:
                ExecuteOrSubmitTask(task)

    elif step == 1:
        print "> Creating function files..."
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

        if   year.lower() != "all" and year in theyears:
            theyears = [ year ]
        elif year.lower() != "all":
            raise RuntimeError("FATAL: requested year not found.")


        for iY in theyears:
            thevars = next(os.walk(inpath + "/" + iY))[1]

            if    variable.lower() != "all" and variable in thevars:
                thevars = [ variable ]
            elif variable.lower() != "all":
                raise RuntimeError("FATAL: requested year not found.")

            for iV in thevars:
                if "plots" in iV or "tables" in iV: continue
                if not os.path.isdir(inpath + "/" + iY + "/" + iV + "/sigextr_fit"): continue

                tasks.append( (inpath, iY, iV) )

        #print tasks
        if nthreads > 1:
            pool = Pool(nthreads)
            pool.map(createFunctionFileForVariable, tasks)
            pool.close()
            pool.join()
            del pool
        else:
            for tsk in tasks:
                createFunctionFileForVariable(tsk)

        for iP in range(int(math.ceil(len(tasks) / float(nthreads)))):
            pool = Pool(nthreads)
            pool.map(compileFunctionFile,
                     tasks[iP*nthreads:(iP + 1)*(nthreads) if (iP + 1)*nthreads < len(tasks) else len(tasks)])
            pool.close()
            pool.join()
            del pool

    elif step == 2:
        print "> Preparing to submit the cards for the fit..."

        theregs  = ["forExtr"]
        tasks    = []

        if variable.lower() != "all":
            thevars = [ variable ]

        if year.lower() != "all":
            theyears = [ year ]

        for reg in theregs:
            for yr in theyears:
                for var in thevars:
                    for theb in range(len(vl.varList[var]["bins_detector"]) - 1):
                        tasks.append( (prod, yr, var, asimov, nthreads, outpath, reg, noUnc, useFibre, extra, pretend, queue, theb) )

        #print tasks
        calculate = True
        for task in tasks:
            print "\nProcessing " + str(task) + "\n"

            #if str(task) == "('2020-09-20', 'run2', 'Lep1Lep2_DPhi', True, 16, 'temp_2021_01_22_fitdiftodas/differential', 'forExtr', False, True, '', False, 'batch', 8)":
                #calculate = True

            if calculate:
                #print "jjeje"
                ExecuteOrSubmitTask(task)
                #sys.exit()
                #calculate = False

    else:
        print "> Producing final cards..."
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

        for iY in theyears:
            thevars = next(os.walk(inpath + "/" + iY))[1]

            if variable.lower() != "all" and variable in thevars:
                thevars = [ variable ]
            elif variable.lower() != "all":
                raise RuntimeError("FATAL: the variable requested is not in the provided input folder.")

            for iV in thevars:
                if "plots" in iV or "table" in iV: continue
                if not os.path.isdir(inpath + "/" + iY + "/" + iV + "/sigextr_fit"): continue


                tasks.append( (inpath, iY, iV, "") )
                for iS in vl.systMap:
                    if "_" in iS and iY != "run2":
                        if iS.split("_")[-1].isdigit():
                            if iY not in iS.split("_")[-1]:
                                continue
                    tasks.append( (inpath, iY, iV, iS + "Up") )
                    tasks.append( (inpath, iY, iV, iS + "Down") )
        #print tasks
        #sys.exit()
        if nthreads > 1:
            pool = Pool(nthreads)
            pool.map(createCardsForEachSys, tasks)
            pool.close()
            pool.join()
        else:
            for tsk in tasks:
                createCardsForEachSys(tsk)
        print "> Done!"
