import ROOT as r
import warnings as wr
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
friendsscaff  = "--Fs {P}/0_yeartag --Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors --Fs {P}/5_mvas"

slurmscaff    = "sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{command}'"

#commandscaff  = '''python makeShapeCardsNew.py --tree NanoAOD {mcafile} {cutsfile} "{variable}" "{bins}" {samplespaths} {friends} --od {outpath} -l {lumi} {nth} -f -L {func} --neg -W "{w}" --year {year} {asimovornot} {uncs} {extra} {name} --AP --storeAll --notMinimumFill --notVarsChanges'''
commandscaff  = '''python makeShapeCardsNew.py --tree NanoAOD {mcafile} {cutsfile} "{variable}" "{bins}" {samplespaths} {friends} --od {outpath} -l {lumi} {nth} -f -L {func} --neg -W "{w}" --year {year} {asimovornot} {uncs} {extra} {name} --AP --storeAll --notVarsChanges'''

theweights    = "MuonIDSF * MuonISOSF * ElecIDSF * ElecRECOSF * TrigSF * puWeight * bTagWeight * PrefireWeight"
minchunkbytes = 1000

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
    prod, year, variable, asimov, nthreads, outpath, region, noUnc, useFibre, extra, pretend, queue, thebin, theunc = tsk
    if queue == "":
        thecomm = CardsCommand(prod, year, variable, asimov, nthreads, outpath, region, noUnc, useFibre, extra, thebin, theunc)
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
                                    command = CardsCommand(prod, year, variable, asimov, nthreads, outpath, region, noUnc, useFibre, extra, thebin, theunc))

        print "Command: " + thecomm
        if not pretend:
            os.system(thecomm)

    return


def CardsCommand(prod, year, var, isAsimov, nthreads, outpath, region, noUnc, useFibre, extra_, ibin, iunc):
    trueiunc = iunc.replace("Up", "").replace("Down", "")
    mcafile_   = "tw-run2/mca-tw.txt"

    if trueiunc != "":
        mcafile_ = "tw-run2/differential/mca-differential/variatedmca/mca-tw-{u}.txt".format(u = iunc)

    cutsfile_  = "tw-run2/differential/cuts-differential-pure1j1t/cuts-detector-1j1t.txt"

    samplespaths_ = "-P " + friendspath + "/" + prod + ("/" + year) * (year != "run2")
    if useFibre: samplespaths_ = samplespaths_.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias")

    nth_       = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_   = friendsscaff
    outpath_   = outpath + "/" + year + "/" + var + "/sigextr_fit/rebinhistos"

    if not os.path.isdir(outpath_):
        os.system("mkdir -p " + outpath_)

    bins_      = PythonListToString([i + 0.5 for i in range(vl.nBinsForBDT + 1)]) if "forExtr" in region else "1000,-1,1"

    unctoput = ""
    if iunc != "":
        if isinstance(vl.ModifiedSystMap[trueiunc], dict):
            if vl.ModifiedSystMap[trueiunc]["tw" if not vl.unifttbar else "ttbar"]:
                unctoput = iunc
        elif vl.ModifiedSystMap[trueiunc]:
            unctoput = iunc

    variable_  = "tmvaBDT_1j1b" if "forExtr" not in region else "theBDT_bin{i}_unc{u}(tmvaBDT_1j1b)".format(i = ibin, u = unctoput)
    name_      = "--binname " + region + "_bin" + str(ibin) + ("_PRE" + iunc if iunc != "" else "")

    extra_ += ' -A "^1btag" "bin{b}" "{cut}"'.format(b = ibin, cut = "(" + str(vl.varList[var]["bins_detector"][ibin]) + "<=" + vl.varList[var]["var_detector"] + ") && (" + vl.varList[var]["var_detector"] + "<" + str(vl.varList[var]["bins_detector"][ibin + 1]) + ")")

    if "histos" in region:
        extra_ += " --xp dy,vvttv,nonworz --notMinimumFill"

    if region == "forExtr":
        restofuncs = []
        for el,listofyears in vl.ModifiedProfileSystsThatAreNotPresentAllYears.iteritems():
            if year in listofyears or year == "run2":
                restofuncs.append(el)
        extra_ += " --su " + ",".join([el for el in vl.ModifiedProfileSysts if "norm" in el]) + "," + ",".join(restofuncs)

    theweights_ = theweights
    #if trueiunc in vl.WeightsToChange:
        #theweights_ = theweights_.replace(vl.WeightsToChange[trueiunc], vl.WeightsToChange[trueiunc] + ("Up" if "Up" in iunc else "Down"))

    comm = commandscaff.format(outpath      = outpath_,
                               friends      = friends_,
                               samplespaths = samplespaths_,
                               lumi      = (vl.LumiDict[int(year)] if year != "run2" else str(vl.LumiDict[2016]) + "," + str(vl.LumiDict[2017]) + "," + str(vl.LumiDict[2018])),
                               variable  = variable_,
                               bins      = bins_,
                               nth       = nth_,
                               year      = year if year != "run2" else "2016,2017,2018",
                               asimovornot = "--asimov s+b" if isAsimov else "",
                               mcafile   = mcafile_,
                               cutsfile  = cutsfile_,
                               uncs      = "--unc tw-run2/uncs-tw.txt --amc" if (not noUnc and region != "histos") else "--unc tw-run2/differential/uncs-tw-modified.txt --amc" if (not noUnc) else "--amc",
                               name      = name_,
                               func      = "tw-run2/functions_tw.cc" if "forExtr" not in region else (outpath_ + "/rebin_functions_{y}_{v}.cc".format(y = year, v = var)),
                               extra     = extra_,
                               w         = theweights_,)
    return comm


def createFunctionFileForVariable(tsk):
    inpath, iY, iV = tsk

    path = inpath + "/" + iY + "/" + iV + "/sigextr_fit"
    proc = "ttbar"

    if not vl.unifttbar:
        print '> Uniform tW distribution of the BDT discriminant\n'
        proc = "tw"
    else:
        print '> Uniform ttbar distribution of the BDT discriminant\n'

    Base = '''#include <iostream>
'''

    ndetebins = len(vl.varList[iV]["bins_detector"]) - 1
    #print Base

    listofuncsthataffecttheproc = [""]
    for key,el in vl.ModifiedSystMap.iteritems():
        if iY != "run2":
            skip = False
            for y in ["2016", "2017", "2018"]:
                if  y in key and iY != y:
                    skip = True

            for y in [["16", "17"], ["16", "18"], ["17", "18"]]:
                if "".join(y) in key and not any([sub in iY for sub in y]):
                    skip = True

            if skip:
                continue

        if isinstance(el, dict):
            if el[proc]:
                listofuncsthataffecttheproc.append(key)
        elif el:
            listofuncsthataffecttheproc.append(key)

    for iU in listofuncsthataffecttheproc:
        listofvars = ["Up", "Down"]
        if iU == "":
            listofvars = [""]

        for iVar in listofvars:
            for iB in range(ndetebins):
                #print iB
                Base = Base + addFunctionOfBin(path + "/rebinhistos/histos_bin" + str(iB) + ".root", proc, iB, iU + iVar)
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



def addFunctionOfBin(fpath, theproc, thebin, theunc):
    nq  = vl.nBinsForBDT  # Number of bins in which to divide the BDT distribution.
    xq  = array('d', [0]*nq)
    yq  = array('d', [0]*nq)
    for i in range(0, nq):
        xq[i] = float(i+1) / nq

    count = 0
    thefile = r.TFile.Open(fpath, "READ")
    #print fpath, "x_" + theproc + ("_" + theunc if theunc != "" else "")
    thehisto = thefile.Get("x_" + theproc + ("_" + theunc if theunc != "" else ""))
    thehisto.GetQuantiles(nq, yq, xq)
    thefile.Close(); del thefile

    outtxt = '''\n
Float_t theBDT_bin{iB}_unc{u}(Double_t BDT) {{
  if      (BDT < {val})\t return 1;
'''.format(val = yq[0], iB = thebin, u = theunc)

    subBin = 2
    for i in range(1, nq - 1):
        outtxt += '  else if (BDT < %f)\t return %d;\n'%(yq[i], subBin)
        subBin += 1

    outtxt += '  else                       return %d;\n} \n'%subBin
    return outtxt


def getVariedHisto(inpath, iV, iY, thenom, theunc, theproc, thevar, thebin):
    outh = None; tmpname  = thenom + "_" + theunc + "_" + str(thebin) + thevar
    #print "### Creating varied normalisation", theunc, "unc. for nominal", thenom, "and variation", thevar
    for y in ["2016", "2017", "2018"]:


        hasthissystitsowncard = False
        listofuncsthataffecttheproc = []
        if iY != "run2":
            skip = False
            for y in ["2016", "2017", "2018"]:
                if  y in theunc and iY != y:
                    skip = True

            for y in [["16", "17"], ["16", "18"], ["17", "18"]]:
                if "".join(y) in theunc and not any([sub in iY for sub in y]):
                    skip = True

            if skip:
                continue

        if isinstance(vl.ModifiedSystMap[theunc], dict):
            if vl.ModifiedSystMap[theunc]["tw" if not vl.unifttbar else "ttbar"]:
                listofuncsthataffecttheproc.append(theunc)
        elif vl.ModifiedSystMap[theunc]:
            listofuncsthataffecttheproc.append(theunc)

        if thenom.replace("Up", "").replace("Down", "") in listofuncsthataffecttheproc:
            hasthissystitsowncard = True

        filetoopen = None

        if   control in thebin:
            filetoopen = (inpath + "/" + y + "/" + iV + "/controlReg.root")
        elif hasthissystitsowncard:
            filetoopen = inpath + "/" + y + "/" + iV + "/sigextr_fit/rebinhistos/forExtr_bin{b}_PRE{u}.root".format(b = thebin, u = theunc + thevar)
        else:
            filetoopen = inpath + "/" + y + "/" + iV + "/sigextr_fit/rebinhistos/forExtr_bin{b}.root".format(b = thebin)

        #print "### file", filetoopen

        rf_oftheyear = r.TFile(filetoopen, "READ")

        if not rf_oftheyear:
            raise RuntimeError("FATAL: file " + filetoopen + " does not exist, it is corrupt or it is not accessible.")

        nametoconsider = thenom
        for iY in ["2016", "2017", "2018"]:
            if iY in nametoconsider and iY != y:
                nametoconsider = "x_" + theproc

        for iY in [["16", "17"], ["16", "18"], ["17", "18"]]:
            if "".join(iY) in nametoconsider and not any([sub in y for sub in iY]):
                nametoconsider = "x_" + theproc

        #print "name", nametoconsider

        if rf_oftheyear.Get(nametoconsider):
            # This check is done for the case where one year does not have contributions from this process

            #raise RuntimeError("FATAL: object " + nametoconsider + " not found in file " + filetoopen)

            if y in vl.ModifiedProfileSystsThatAreNotPresentAllYears[theunc]:
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


    if not outh:
        raise RuntimeError("FATAL: no combined histogram could be constructed for the nominal " + thenom + " and the unc. " + theunc + " of the process " + theproc + " of the variable " + iV + " of the bin number " + thebin + " of the variation " + thevar)

    return outh


def createCardsForEachSys(tsk):
    inpath, iY, iV, usesamenuis, syst = tsk
    print "    - Creating individual cards for variable " + iV + " of year " + iY + " for syst. " + syst

    path = inpath + "/" + iY + "/" + iV + "/sigextr_fit/rebinhistos"

    #if not os.path.isdir(path + "/cards_{s}".format(s = syst)):
        #os.system("mkdir " + path + "/cards_{s}".format(s = syst))

    validfirstentries = {"*", "#", "bin", "observation", "shapes"}

    #listofuncsthataffecttheproc = []
    #hasthissystitsowncard = False
    #for s,el in vl.ModifiedSystMap.iteritems():
        #if isinstance(el, dict):
            #if el["tw" if not vl.unifttbar else "ttbar"]:
                #listofuncsthataffecttheproc.append(s)
        #elif el:
            #listofuncsthataffecttheproc.append(s)

    #if syst.replace("Up", "").replace("Down", "") in listofuncsthataffecttheproc:
        #hasthissystitsowncard = True

    txtfiletoopen  = path + "/forExtr_bin{b}.txt"
    rootfiletoopen = path + "/forExtr_bin{b}.root"
    #if hasthissystitsowncard:
    if syst != "":
        txtfiletoopen  = path + "/forExtr_bin{b}_PRE" + syst + ".txt"
        rootfiletoopen = path + "/forExtr_bin{b}_PRE" + syst + ".root"


    for iB in range(len(vl.varList[iV]["bins_detector"]) - 1):
        readF = open(txtfiletoopen.format(b = iB), 'r')

        presentprocesses = []

        outtext = ""
        for line in readF:
            entries = line.split()
            if entries[0] in validfirstentries.union(vl.ModifiedProfileSysts):
                tmpline = deepcopy(line)
                if not usesamenuis:
                    for el in vl.ModifiedProfileSysts:
                        tmpline = tmpline.replace(el, el + "_" + str(iB))

                if "shapes" in tmpline:
                    #if   iY == "run2":
                        #tmpline = tmpline.replace("forExtr_bin{b}.root".format(b = iB), "forExtr_bin{b}_run2.root".format(b = iB))
                    #elif hasthissystitsowncard:
                        #tmpline = tmpline.replace("forExtr_bin{b}.root".format(b = iB), rootfiletoopen.format(b = iB))
                    tmpline = tmpline.replace("forExtr_bin{b}_PRE".format(b = iB) + syst + ".root", "forExtr_bin{b}_{u}_{y}.root".format(b = iB, y = iY, u = syst))
                    tmpline = tmpline.replace("forExtr_bin{b}.root".format(b = iB), "forExtr_bin{b}_{u}_{y}.root".format(b = iB, y = iY, u = syst))
                    #if hasthissystitsowncard:
                        #tmpline = tmpline.replace(rootfiletoopen.format(b = iB), rootfiletoopen.replace(".root", "_" + iY + ".root"))

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
                        #if not puresys == "":
                            #if not isinstance(vl.ModifiedSystMap[puresys], dict):
                                #tmpline = tmpline.replace("tw", "tw_" + syst).replace("ttbar", "ttbar_" + syst).replace("dy", "dy_" + syst).replace("vvttv", "vvttv_" + syst).replace("nonworz", "nonworz_" + syst)
                            #elif not puresys == "":
                                #if vl.ModifiedSystMap[puresys]["tw"]:
                                    #tmpline = tmpline.replace("tw", "tw_" + syst)
                                #if vl.ModifiedSystMap[puresys]["ttbar"]:
                                    #tmpline = tmpline.replace("ttbar", "ttbar_" + syst)
                                #if vl.ModifiedSystMap[puresys]["dy"]:
                                    #tmpline = tmpline.replace("dy", "dy_" + syst)
                                #if vl.ModifiedSystMap[puresys]["vvttv"]:
                                    #tmpline = tmpline.replace("vvttv", "vvttv_" + syst)
                                #if vl.ModifiedSystMap[puresys]["nonworz"]:
                                    #tmpline = tmpline.replace("nonworz", "nonworz_" + syst)
                        outtext += tmpline
                elif "rate" in entries[0]:
                    outtext += line
                    #if syst == "":
                        #outtext += line
                    #else:
                        #puresys = syst.replace("Up", "").replace("Down", "")
                        #tmpline = deepcopy(line)
                        #thef = r.TFile(rootfiletoopen.format(b = iB), "READ")

                        ##print tmpline, entries[presentprocesses.index("nonworz") + 1], thef.Get("x_nonworz_" + syst).Integral()
                        ##print "pre:", tmpline

                        ##print syst, iB
                        #if not isinstance(vl.ModifiedSystMap[puresys], dict):
                            #if "tw" in presentprocesses:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("tw") + 1], str(round(thef.Get("x_tw_"      + syst).Integral(), 3)))
                            #if "ttbar" in presentprocesses:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("ttbar") + 1], str(round(thef.Get("x_ttbar_"   + syst).Integral(), 3)))
                            #if "dy" in presentprocesses:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("dy") + 1], str(round(thef.Get("x_dy_"      + syst).Integral(), 3)))
                            #if "vvttv" in presentprocesses:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("vvttv") + 1], str(round(thef.Get("x_vvttv_"   + syst).Integral(), 3)))
                            #if "nonworz" in presentprocesses:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("nonworz") + 1], str(round(thef.Get("x_nonworz_" + syst).Integral(), 3)))
                        #else:
                            #if "tw" in presentprocesses and vl.ModifiedSystMap[puresys]["tw"]:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("tw") + 1], str(round(thef.Get("x_tw_"      + syst).Integral(), 3)))
                            #if "ttbar" in presentprocesses and vl.ModifiedSystMap[puresys]["ttbar"]:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("ttbar") + 1], str(round(thef.Get("x_ttbar_"   + syst).Integral(), 3)))
                            #if "dy" in presentprocesses and vl.ModifiedSystMap[puresys]["dy"]:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("dy") + 1], str(round(thef.Get("x_dy_"      + syst).Integral(), 3)))
                            #if "vvttv" in presentprocesses and vl.ModifiedSystMap[puresys]["vvttv"]:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("vvttv") + 1], str(round(thef.Get("x_vvttv_"   + syst).Integral(), 3)))
                            #if "nonworz" in presentprocesses and vl.ModifiedSystMap[puresys]["nonworz"]:
                                #tmpline = tmpline.replace(entries[presentprocesses.index("nonworz") + 1], str(round(thef.Get("x_nonworz_" + syst).Integral(), 3)))

                        #thef.Close(); del thef

                        ##print "post:", tmpline
                        #outtext += tmpline


        readF.close()
        #if len(presentprocesses) < 5:
            #print outtext
        outF  = open(path + "/forExtr_bin{b}_{s}.txt".format(b = iB, s = syst), 'w')
        outF.write(outtext)
        outF.close()
        #break

        #if syst == "": #### We need to modify the rootfiles!
        if True: #### We need to modify the rootfiles!
            print "    - Creating new rootfile card for bin", iB, "and unc."
            therootfile = r.TFile.Open(rootfiletoopen.format(b = iB), "READ")
            tmpdictofthings = {}
            copyname = ""; theproc = ""
            for key in therootfile.GetListOfKeys():
                copyname = key.GetName()
                isaproc  = False; isaprofiledunc = False;
                theproc  = deepcopy(copyname.split("_")[1])
                theunc   = None
                pureunc  = None

                if (copyname.split("_")[1] in vl.ProcessesNames and
                   len(copyname.split("_")) <= 2) or copyname == "x_data_obs":
                    isaproc = True
                else:
                    theunc  = "_".join(key.GetName().split("_")[2:])
                    pureunc = theunc.replace("Up", "").replace("Down", "")


                #print "\n", copyname
                for el in vl.ModifiedProfileSysts:
                    if el in copyname:
                        isaprofiledunc = True
                    if not usesamenuis:
                        copyname = copyname.replace(el, el + "_" + str(iB))

                #if (not isaproc and pureunc in listofuncsthataffecttheproc):
                    #secondrootfile = r.TFile.Open(path + "/forExtr_bin{b}_PRE{u}.root".format(b = iB, u = theunc), "READ")
                    #tmpdictofthings[copyname] = deepcopy(secondrootfile.Get(key.GetName()).Clone(copyname))
                    #secondrootfile.Close(); del secondrootfile
                #else:
                    #tmpdictofthings[copyname] = deepcopy(therootfile.Get(key.GetName()).Clone(copyname))
                tmpdictofthings[copyname] = deepcopy(therootfile.Get(key.GetName()).Clone(copyname))


                ## We have to create new histograms!
                #if iY == "run2" and not isaproc and not isaprofiledunc and "data" not in copyname:
                    #for iU in vl.ModifiedProfileSystsThatAreNotPresentAllYears:
                        #newnam = copyname + "_" + iU
                        #if not usesamenuis:
                            #newnam += "_" + str(iB)
                        ##print "# Creating variations for the normalisation unc.", iU, "for nominal", copyname

                        #tmpdictofthings[newnam + "Up"]   = deepcopy(getVariedHisto(inpath, iV, iY, copyname, iU, theproc, "Up", str(iB)))
                        #tmpdictofthings[newnam + "Down"] = deepcopy(getVariedHisto(inpath, iV, iY, copyname, iU, theproc, "Down", str(iB)))
            therootfile.Close(); del therootfile

            theoutrootfile = r.TFile.Open(path + "/forExtr_bin{b}_{u}_{y}.root".format(b = iB, y = iY, u = syst), "RECREATE")
            for key in tmpdictofthings:
                tmpdictofthings[key].Write()
            theoutrootfile.Close(); del theoutrootfile
    return


def prepareCardsForControlRegion(tsk):
    inpath, iY, iV, usesamenuis, syst = tsk
    print "    - Preparing card for the control region of year " + iY + " for unc. " + syst

    path = inpath + "/" + iY + "/" + iV

    validfirstentries = {"*", "#", "bin", "observation", "shapes"}

    readF = open(path + "/controlReg.txt", 'r')

    presentprocesses = []
    outtext = ""

    for line in readF:
        entries = line.split()
        if entries[0] in validfirstentries.union(vl.ModifiedProfileSysts):
            tmpline = deepcopy(line)
            if not usesamenuis:
                for el in vl.ModifiedProfileSysts:
                    tmpline = tmpline.replace(el, el + "_control")

            if "shapes" in tmpline and iY == "run2":
                tmpline = tmpline.replace("controlReg.root", "controlReg_run2.root")

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
                        if not isinstance(vl.ModifiedSystMap[puresys], dict):
                            tmpline = tmpline.replace("tw", "tw_" + syst).replace("ttbar", "ttbar_" + syst).replace("dy", "dy_" + syst).replace("vvttv", "vvttv_" + syst).replace("nonworz", "nonworz_" + syst)
                        elif not puresys == "":
                            if vl.ModifiedSystMap[puresys]["tw"]:
                                tmpline = tmpline.replace("tw", "tw_" + syst)
                            if vl.ModifiedSystMap[puresys]["ttbar"]:
                                tmpline = tmpline.replace("ttbar", "ttbar_" + syst)
                            if vl.ModifiedSystMap[puresys]["dy"]:
                                tmpline = tmpline.replace("dy", "dy_" + syst)
                            if vl.ModifiedSystMap[puresys]["vvttv"]:
                                tmpline = tmpline.replace("vvttv", "vvttv_" + syst)
                            if vl.ModifiedSystMap[puresys]["nonworz"]:
                                tmpline = tmpline.replace("nonworz", "nonworz_" + syst)
                    outtext += tmpline
            elif "rate" in entries[0]:
                if syst == "":
                    outtext += line
                else:
                    puresys = syst.replace("Up", "").replace("Down", "")
                    tmpline = deepcopy(line)
                    thef = r.TFile(path + "/controlReg.root", "READ")

                    #print tmpline, entries[presentprocesses.index("nonworz") + 1], thef.Get("x_nonworz_" + syst).Integral()
                    #print "pre:", tmpline

                    #print syst
                    if not isinstance(vl.ModifiedSystMap[puresys], dict):
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
                        if "tw" in presentprocesses and vl.ModifiedSystMap[puresys]["tw"]:
                            tmpline = tmpline.replace(entries[presentprocesses.index("tw") + 1], str(round(thef.Get("x_tw_"      + syst).Integral(), 3)))
                        if "ttbar" in presentprocesses and vl.ModifiedSystMap[puresys]["ttbar"]:
                            tmpline = tmpline.replace(entries[presentprocesses.index("ttbar") + 1], str(round(thef.Get("x_ttbar_"   + syst).Integral(), 3)))
                        if "dy" in presentprocesses and vl.ModifiedSystMap[puresys]["dy"]:
                            tmpline = tmpline.replace(entries[presentprocesses.index("dy") + 1], str(round(thef.Get("x_dy_"      + syst).Integral(), 3)))
                        if "vvttv" in presentprocesses and vl.ModifiedSystMap[puresys]["vvttv"]:
                            tmpline = tmpline.replace(entries[presentprocesses.index("vvttv") + 1], str(round(thef.Get("x_vvttv_"   + syst).Integral(), 3)))
                        if "nonworz" in presentprocesses and vl.ModifiedSystMap[puresys]["nonworz"]:
                            tmpline = tmpline.replace(entries[presentprocesses.index("nonworz") + 1], str(round(thef.Get("x_nonworz_" + syst).Integral(), 3)))

                    thef.Close(); del thef

                    #print "post:", tmpline
                    outtext += tmpline


    readF.close()
    #if len(presentprocesses) < 5:
        #print outtext
    outF  = open(path + "/controlReg_{s}.txt".format(s = syst), 'w')
    outF.write(outtext)
    outF.close()
    #break

    if iY == "run2" and syst == "": #### We need to modify the rootfiles!
        print "    - Creating new rootfile card"
        therootfile = r.TFile.Open(path + "/controlReg.root", "READ")
        tmpdictofthings = {}
        copyname = ""; theproc = ""
        for key in therootfile.GetListOfKeys():
            copyname = key.GetName()
            isaproc  = False; isaprofiledunc = False;
            theproc = deepcopy(copyname.split("_")[1])
            if (copyname.split("_")[1] in vl.ProcessesNames and
                len(copyname.split("_")) <= 2) or copyname == "x_data_obs":
                isaproc = True

            for el in vl.ModifiedProfileSysts:
                if el in copyname:
                    isaprofiledunc = True
                if not usesamenuis:
                    copyname = copyname.replace(el, el + "_control")
            tmpdictofthings[copyname] = deepcopy(therootfile.Get(key.GetName()).Clone(copyname))


            # We have to create new files!
            if not isaproc and not isaprofiledunc and "data" not in copyname:
                for iU in vl.ModifiedProfileSystsThatAreNotPresentAllYears:
                    newnam = copyname + "_" + iU
                    if not usesamenuis:
                        newnam += "_control"
                    #print "# Creating variations for the normalisation unc.", iU, "for nominal", copyname

                    tmpdictofthings[newnam + "Up"]   = deepcopy(getVariedHisto(inpath, iV, iY, copyname, iU, theproc, "Up", "control"))
                    tmpdictofthings[newnam + "Down"] = deepcopy(getVariedHisto(inpath, iV, iY, copyname, iU, theproc, "Down", "control"))
        therootfile.Close(); del therootfile

        theoutrootfile = r.TFile.Open(path + "/controlReg_run2.root", "RECREATE")
        for key in tmpdictofthings:
            tmpdictofthings[key].Write()
        theoutrootfile.Close(); del theoutrootfile

    return


def CheckProducedCardsByTask(task):
    prod, year, variable, asimov, nthreads, outpath, region, noUnc, useFibre, extra, pretend, queue, ibin, iunc = task

    ch = "forExtr_bin" + str(ibin) + ("_PRE" + iunc if iunc != "" else "") + ".root"

    chkpath = outpath + "/" + year + "/" + var + "/sigextr_fit/rebinhistos/" + ch

    #print chkpath

    if not os.path.isfile(chkpath):                                 #### 1st: existance
        print "# Card {chk} has not been found.".format(chk = ch)
        return False
    elif os.path.getsize(chkpath) <= minchunkbytes:                 #### 2nd: size
        print "# Card {chk} has less size than the minimum.".format(chk = ch)
        return False
    else:
        fch = r.TFile.Open(chkpath, "READ")
        if not fch:                                                 #### 3rd: ROOT access (corruption)
            print "# Card {chk} cannot be accessed: it is corrupted.".format(chk = ch)
            return False

        fch.Close(); del fch
    return True




if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',    '-i', metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/differential/")
    parser.add_argument('--step',      '-s', metavar = 'step',       dest = "step",     required = False,  default = 0, type = int)
    parser.add_argument('--year',      '-y', metavar = 'year',       dest = "year",     required = False, default = "all")
    parser.add_argument('--variable',  '-v', metavar = 'variable',   dest = "variable", required = False, default = "all")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',      dest = "extra",    required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--production','-P', metavar = "prod",       dest = "prod",     required = True)
    parser.add_argument('--queue',     '-q', metavar = 'queue',      dest = "queue",    required = False, default = "")
    parser.add_argument('--outpath',   '-o', metavar = 'outpath',    dest = "outpath",  required = False, default = "./temp/differential/cards")
    parser.add_argument('--nounc',     '-nu', action  = "store_true", dest = "nounc",    required = False, default = False)
    parser.add_argument('--asimov',    '-a', action  = "store_true", dest = "asimov",   required = False, default = False)
    parser.add_argument('--useFibre',  '-f', action  = "store_true", dest = "useFibre", required = False, default = False)
    parser.add_argument('--prepareControl', '-pc', action  = "store_true", dest = "prepctrl", required = False, default = False)
    parser.add_argument('--sameNuisances', '-sn', action  = "store_true", dest = "samenuis", required = False, default = False)
    parser.add_argument('--check', '-c',     action  = "store_true", dest = "check", required = False, default = False)


    args     = parser.parse_args()
    prod     = args.prod
    step     = args.step
    queue    = args.queue
    year     = args.year
    check    = args.check
    extra    = args.extra
    nthreads = args.nthreads
    outpath  = args.outpath
    noUnc    = args.nounc
    pretend  = args.pretend
    inpath   = args.inpath
    asimov   = args.asimov
    variable = args.variable
    useFibre = args.useFibre
    prepctrl = args.prepctrl
    samenuis = args.samenuis

    thevars  = vl.varList["Names"]["Variables"]
    theyears = ["2016", "2017", "2018", "run2"]
    vetolist = ["plots", "Fiducial", "control", "tables"]

    if check:
        wr.warn("WARNING: check is only implemented for the second step.")

    if prepctrl:
        print "> Preparing control region cards..."
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

            if ("controlReg" + vl.diffControlReg) not in thevars:
                raise RuntimeError("FATAL: the expected control region folder, controlReg" + vl.diffControlReg + ", has not been found in the folder of year " + iY + ".")

            tasks.append( (inpath, iY, "controlReg" + vl.diffControlReg, samenuis, "") )
            for iS in vl.ModifiedSystMap:
                if "_" in iS and iY != "run2":
                    if iS.split("_")[-1].isdigit():
                        if iY not in iS.split("_")[-1]:
                            continue
                tasks.append( (inpath, iY, "controlReg" + vl.diffControlReg, samenuis, iS + "Up") )
                tasks.append( (inpath, iY, "controlReg" + vl.diffControlReg, samenuis, iS + "Down") )

        #print tasks
        #sys.exit()
        print "> Executing..."
        if nthreads > 1:
            pool = Pool(nthreads)
            pool.map(prepareCardsForControlRegion, tasks)
            pool.close()
            pool.join()
        else:
            for tsk in tasks:
                prepareCardsForControlRegion(tsk)
        print "> Done!"


    elif   step == 0:
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
                        tasks.append( (prod, yr, var, asimov, nthreads, outpath, reg, noUnc, useFibre, extra, pretend, queue, theb, "") )

        #print tasks
        #for tsk in tasks: print tsk
        #sys.exit()
        calculate = True
        #calculate = False
        print "> Executing..."
        for task in tasks:
            print "    - Processing " + str(task)

            #if str(task) == "('2020-09-20', 'run2', 'Lep1Lep2_DPhi', True, 32, 'temp_2021_03_04_fitdiffconmasinternas/differential', 'histos', False, True, '', False, 'batch', 0, '')":
                #calculate = True

            if calculate:
                ExecuteOrSubmitTask(task)
                #sys.exit()

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
                if any([el in iV for el in vetolist]): continue
                if not os.path.isdir(inpath + "/" + iY + "/" + iV + "/sigextr_fit"): continue

                tasks.append( (inpath, iY, iV) )

        #print tasks
        print "> Executing..."
        if nthreads > 1:
            pool = Pool(nthreads)
            pool.map(createFunctionFileForVariable, tasks)
            pool.close()
            pool.join()
            del pool
        else:
            for tsk in tasks:
                createFunctionFileForVariable(tsk)

        if nthreads < 2:
            nthreads = 1

        for iP in range(int(math.ceil(len(tasks) / float(nthreads)))):
            pool = Pool(nthreads)
            pool.map(compileFunctionFile,
                     tasks[iP*nthreads:(iP + 1)*(nthreads) if (iP + 1)*nthreads < len(tasks) else len(tasks)])
            pool.close()
            pool.join()
            del pool

    elif step == 2:
        if not check:
            print "> Preparing to submit the cards for the fit..."
        else:
            print "> Preparing to check all the produced cards..."

        theregs  = ["forExtr"]
        tasks    = []

        if variable.lower() != "all":
            thevars = [ variable ]

        if year.lower() != "all":
            theyears = [ year ]

        for reg in theregs:
            for yr in theyears:
                listofuncsthataffecttheproc = []
                for key,el in vl.ModifiedSystMap.iteritems():
                    if yr != "run2":
                        skip = False
                        for y in ["2016", "2017", "2018"]:
                            if  y in key and yr != y:
                                skip = True

                        for y in [["16", "17"], ["16", "18"], ["17", "18"]]:
                            if "".join(y) in key and not any([sub in yr for sub in y]):
                                skip = True

                        if skip:
                            continue

                    listofuncsthataffecttheproc.append(key)
                for var in thevars:
                    if "Fiducial" in var: continue
                    for theb in range(len(vl.varList[var]["bins_detector"]) - 1):
                        tasks.append( (prod, yr, var, asimov, nthreads, outpath, reg, noUnc, useFibre, extra, pretend, queue, theb, "") )

                        for theu in listofuncsthataffecttheproc:
                            tasks.append( (prod, yr, var, asimov, nthreads, outpath, reg, noUnc, useFibre, extra, pretend, queue, theb, theu + "Up") )
                            if not "scales" in theu and not "colour" in theu:
                                tasks.append( (prod, yr, var, asimov, nthreads, outpath, reg, noUnc, useFibre, extra, pretend, queue, theb, theu + "Down") )

        #print tasks
        #for el in tasks: print el
        #sys.exit()

        if not check:
            if queue != "":
                print "> Executing..."
            else:
                print "> Launching jobs..."

            calculate = True
            #calculate = False
            for task in tasks:
                print "    - Processing " + str(task)
                #if str(task) == "('2020-09-20', '2016', 'Lep1_Pt', True, 32, 'temp_2021_03_08_nuevoshistos/differential', 'forExtr', False, True, '', False, 'batch', 0, 'ttbar_scales_00Up')":
                    #calculate = True

                #if calculate:
                    #ExecuteOrSubmitTask(task)
                    #sys.exit()
                    #calculate = False
        else:
            print "> Beginning the checks on produced cards..."
            taskstoredo = []
            for task in tasks:
                if not CheckProducedCardsByTask(task):
                    taskstoredo.append(task)

            if not len(taskstoredo):
                print "> Everything is ok!"
            else:
                print "> The following cards should be remade:"
                for el in taskstoredo: print el

                if vl.confirm("\n> Do you want to redo these cards?"):
                    for el in taskstoredo: ExecuteOrSubmitTask(el)



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


                tasks.append( (inpath, iY, iV, samenuis, "") )
                for iS in vl.ModifiedSystMap:
                    if "_" in iS and iY != "run2":
                        if iS.split("_")[-1].isdigit():
                            if iY not in iS.split("_")[-1] and "scales" not in iS:
                                continue
                    tasks.append( (inpath, iY, iV, samenuis, iS + "Up") )
                    if not "scales" in iS and not "colour" in iS:
                        tasks.append( (inpath, iY, iV, samenuis, iS + "Down") )
        #print tasks
        #sys.exit()
        print "> Executing..."
        if nthreads > 1:
            pool = Pool(nthreads)
            pool.map(createCardsForEachSys, tasks)
            pool.close()
            pool.join()
        else:
            for tsk in tasks:
                createCardsForEachSys(tsk)
        print "> Done!"
