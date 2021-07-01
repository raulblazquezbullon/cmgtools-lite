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
#friendsscaff  = "--Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors_bkp --Fs {P}/5_mvas"
friendsscaff  = "--Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors"

slurmscaff    = "sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{command}'"

#commandscaff  = '''python makeShapeCardsNew.py --tree NanoAOD {mcafile} {cutsfile} "{variable}" "{bins}" {samplespaths} {friends} --od {outpath} -l {lumi} {nth} -f -L {func} --neg -W "{w}" --year {year} {asimovornot} {uncs} {extra} {name} --AP --storeAll --notMinimumFill --notVarsChanges'''
commandscaff  = '''python makeShapeCardsNew.py --tree NanoAOD {mcafile} {cutsfile} "{variable}" "{bins}" {samplespaths} {friends} --od {outpath} -l {lumi} {nth} -f -L {func} --neg -W "{w}" --year {year} {asimovornot} {uncs} {extra} {name} --AP --storeAll --notVarsChanges --threshold 0.001'''

theweights    = "MuonIDSF * MuonISOSF * ElecIDSF * ElecRECOSF * TrigSF * puWeight * bTagWeight * PrefireWeight"
minchunkbytes = 1000
redofiles     = True

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
    prod, year, variable, asimov, nthreads, outpath, noUnc, useFibre, extra, pretend, queue, thebin = tsk
    if queue == "":
        thecomm = CardsCommand(prod, year, variable, asimov, nthreads, outpath, noUnc, useFibre, extra, thebin)
        print "Command: " + thecomm

        if not pretend:
            os.system(thecomm)

    else:
        if not os.path.isdir(logpath.format(p = prod, y = yr)):
            os.system("mkdir -p " + logpath.format(p = prod, y = yr))

        thecomm = slurmscaff.format(nth     = nthreads,
                                    queue   = queue,
                                    jobname = "CMGTcardsForDiff_" + variable + "_" + year + "_b" + str(thebin),
                                    logpath = logpath.format(p = prod, y = yr),
                                    command = CardsCommand(prod, year, variable, asimov, nthreads, outpath, noUnc, useFibre, extra, thebin))

        print "Command: " + thecomm
        if not pretend:
            os.system(thecomm)

    return


def produceAdHocMCAandUncsfiles(thepath, they, thev):
    outmain = ""
    with open("./tw-run2/differential/mca_scaffold.txt", "r") as scaff:
        for line in scaff:
            if "TOREPLACE" in line:
                outmain += line.replace("TOREPLACE2016", thepath + "/mca-tw-2016.txt").replace("TOREPLACE2017", thepath + "/mca-tw-2017.txt").replace("TOREPLACE2018", thepath + "/mca-tw-2018.txt").replace("TOREPLACESYS2016", thepath + "/mca-tw-2016-uncs.txt").replace("TOREPLACESYS2017", thepath + "/mca-tw-2017-uncs.txt").replace("TOREPLACESYS2018", thepath + "/mca-tw-2018-uncs.txt")
            else:
                outmain += line

    foutmain = open(thepath + "/" + "mca-total.txt", "w")
    foutmain.write(outmain)
    foutmain.close(); del foutmain

    cutstring = "(Dresschannel == 1) && (nDressSelLep >= 2) && (DressLep1_Pt > 25) && (DressLep2_Pt > 20) && (DressisSS == 0) && (DressminMllAFAS > 20) && (nDressSelJet == 1) && (nDressBSelJet == 1) && (nDressSelLooseJet == 0)"
    pathtooriginalmca = "./tw-run2/mca-tw-includes/"
    if they == "run2":
        for iY in ["2016", "2017", "2018"]:
            outyear = ""
            with open(pathtooriginalmca + "/mca-{y}-tw.txt".format(y = iY), "r") as scaff:
                for line in scaff:
                    tmpline = line.strip()
                    if tmpline == "":       continue
                    elif tmpline[0] == "#": continue

                    for iB in range(len(vl.varList[thev]["bins_particle"]) - 1):
                        tmpcut = "(" + str(vl.varList[thev]["bins_particle"][iB]) + "<=" + vl.varList[thev]["var_particle"] + ") && (" + vl.varList[thev]["var_particle"] + "<" + str(vl.varList[thev]["bins_particle"][iB + 1]) + ")"
                        outyear += tmpline.replace(";", ": " + cutstring + " && " + tmpcut + " ;").replace("tw+", "tw_partbin{b}+".format(b = iB)) + "\n"

                    outyear += tmpline.replace(";", ": (!(" + cutstring + ")) ;").replace("tw+", "tw_bkg") + "\n"

            foutyear = open(thepath + "/" + "mca-tw-{y}.txt".format(y = iY), "w")
            foutyear.write(outyear)
            foutyear.close(); del foutyear

            # now systs
            outyear = ""
            with open(pathtooriginalmca + "/mca-{y}-tw-uncs.txt".format(y = iY), "r") as scaff:
                for line in scaff:
                    tmpline = line.strip()
                    if tmpline == "":       continue
                    elif tmpline[0] == "#": continue

                    for iB in range(len(vl.varList[thev]["bins_particle"]) - 1):
                        tmpcut = "(" + str(vl.varList[thev]["bins_particle"][iB]) + "<=" + vl.varList[thev]["var_particle"] + ") && (" + vl.varList[thev]["var_particle"] + "<" + str(vl.varList[thev]["bins_particle"][iB + 1]) + ")"
                        outyear += tmpline.replace(";", ": " + cutstring + " && " + tmpcut + " ;").replace(tmpline.split(":")[0].replace(" ", ""), tmpline.split(":")[0].replace(" ", "") + "_partbin{b}".format(b = iB)) + "\n"

                    outyear += tmpline.replace(";", ": (!(" + cutstring + ")) ;").replace(tmpline.split(":")[0].replace(" ", ""), tmpline.split(":")[0].replace(" ", "") + "_bkg") + "\n"

            foutyear = open(thepath + "/" + "mca-tw-{y}-uncs.txt".format(y = iY), "w")
            foutyear.write(outyear)
            foutyear.close(); del foutyear
    else:
        outyear = ""
        with open(pathtooriginalmca + "/mca-{y}-tw.txt".format(y = they), "r") as scaff:
            for line in scaff:
                tmpline = line.strip()
                if tmpline == "":       continue
                elif tmpline[0] == "#": continue

                for iB in range(len(vl.varList[thev]["bins_particle"]) - 1):
                    tmpcut = "(" + str(vl.varList[thev]["bins_particle"][iB]) + "<=" + vl.varList[thev]["var_particle"] + ") && (" + vl.varList[thev]["var_particle"] + "<" + str(vl.varList[thev]["bins_particle"][iB + 1]) + ")"
                    outyear += tmpline.replace(";", ": " + cutstring + " && " + tmpcut + " ;").replace("tw+", "tw_partbin{b}+".format(b = iB)) + "\n"

                outyear += tmpline.replace(";", ": (!(" + cutstring + ")) ;").replace("tw+", "tw_bkg") + "\n"

        # now systs
        outyear = ""
        with open(pathtooriginalmca + "/mca-{y}-tw-uncs.txt".format(y = they), "r") as scaff:
            for line in scaff:
                tmpline = line.strip()
                if tmpline == "":       continue
                elif tmpline[0] == "#": continue

                for iB in range(len(vl.varList[thev]["bins_particle"]) - 1):
                    tmpcut = "(" + str(vl.varList[thev]["bins_particle"][iB]) + "<=" + vl.varList[thev]["var_particle"] + ") && (" + vl.varList[thev]["var_particle"] + "<" + str(vl.varList[thev]["bins_particle"][iB + 1]) + ")"
                    outyear += tmpline.replace(";", ": " + cutstring + " && " + tmpcut + " ;").replace(tmpline.split(":")[0].replace(" ", ""), tmpline.split(":")[0].replace(" ", "") + "_partbin{b}".format(b = iB)) + "\n"

                outyear += tmpline.replace(";", ": (!(" + cutstring + ")) ;").replace(tmpline.split(":")[0].replace(" ", ""), tmpline.split(":")[0].replace(" ", "") + "_bkg") + "\n"

        foutyear = open(thepath + "/" + "mca-tw-{y}-uncs.txt".format(y = they), "w")
        foutyear.write(outyear)
        foutyear.close(); del foutyear

    outuncs = ""
    with open("./tw-run2/uncs-tw.txt", "r") as scaff:
        for line in scaff:
            if "alias" in line:
                outuncs += line.replace("tw", "|".join(["tw_bkg"] + ["tw_partbin{b}".format(b = iB) for iB in range(len(vl.varList[thev]["bins_particle"]) - 1)]))
            else:
                tmpline = line.strip()
                if tmpline.split(":")[0].replace(" ", "") in vl.VariatedSamplesUncertaintySources and "$tWProc" in tmpline.split(":")[1]:
                    for iB in range(len(vl.varList[thev]["bins_particle"]) - 1):
                        twotimestmpline = tmpline.replace("$tWProc", "tw_partbin{b}".format(b = iB)) + "\n"
                        for substr in tmpline.split(":"):
                            if "syst" in substr:
                                tmpsubstr = substr.replace("'", "").replace(" ", "").replace("[", "").replace("]", "")
                                if "\," in tmpsubstr:
                                    for secsubstr in tmpsubstr.split("\,"):
                                        twotimestmpline = twotimestmpline.replace(secsubstr, secsubstr + "_partbin{b}".format(b = iB))
                                else:
                                    twotimestmpline = twotimestmpline.replace(tmpsubstr, tmpsubstr + "_partbin{b}".format(b = iB))
                        outuncs += twotimestmpline
                        
                    twotimestmpline = tmpline.replace("$tWProc", "tw_bkg") + "\n"
                    for substr in tmpline.split(":"):
                        if "syst" in substr:
                            tmpsubstr = substr.replace("'", "").replace(" ", "").replace("[", "").replace("]", "")
                            if "\," in tmpsubstr:
                                for secsubstr in tmpsubstr.split("\,"):
                                    twotimestmpline = twotimestmpline.replace(secsubstr, secsubstr + "_bkg")
                            else:
                                twotimestmpline = twotimestmpline.replace(tmpsubstr, tmpsubstr + "_bkg")
                    outuncs += twotimestmpline


                elif "pdf" in tmpline.split(":")[0] and "syst" in tmpline.split(":")[1] and "altSamplePDFEnv" not in tmpline.split(":")[3]:
                    for iB in range(len(vl.varList[thev]["bins_particle"]) - 1):
                        outuncs += tmpline.replace("syst_tw_pdf", "syst_tw_pdf_partbin{b}".format(b = iB)) + "\n"
                    outuncs += tmpline.replace("syst_tw_pdf", "syst_tw_pdf_bkg") + "\n"
                    
                elif "pdf" in tmpline.split(":")[0] and "altSamplePDFEnv" in tmpline.split(":")[3]:
                    for iB in range(len(vl.varList[thev]["bins_particle"]) - 1):
                        outuncs += tmpline.replace("$tWProc", "tw_partbin{b}".format(b = iB)).replace("syst_tw_pdf", "syst_tw_pdf_partbin{b}".format(b = iB)) + "\n"
                    outuncs += tmpline.replace("$tWProc", "tw_bkg").replace("syst_tw_pdf", "syst_tw_pdf_bkg") + "\n"
                    
                else:
                    outuncs += line

    foutuncs = open(thepath + "/" + "tw-uncs-adhoc.txt", "w")
    foutuncs.write(outuncs)
    foutuncs.close(); del foutuncs
    return


def CardsCommand(prod, year, var, isAsimov, nthreads, outpath, noUnc, useFibre, extra_, ibin):
    cutsfile_  = "tw-run2/cuts-tw-1j1t_differential.txt"

    samplespaths_ = "-P " + friendspath + "/" + prod + ("/" + year) * (year != "run2")
    if useFibre: samplespaths_ = samplespaths_.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias")

    nth_       = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_   = friendsscaff
    outpath_   = outpath + "/" + year + "/" + var + "/sigextr_fit_combine/bincards"

    if not os.path.isdir(outpath_):
        os.system("mkdir -p " + outpath_)

    #mcafile_   = "tw-run2/mca-tw.txt"
    mcafile_   = outpath_ + "/" + "mca-total.txt"
    if not os.path.isfile(mcafile_) or redofiles:
        produceAdHocMCAandUncsfiles(outpath_, year, var)

    #bins_      = PythonListToString([i + 0.5 for i in range(vl.nBinsForBDT + 1)])

    #variable_  = vl.varList[var]["var_detector"]
    variable_  = (vl.varList[var]["bins_detector"][ibin] + vl.varList[var]["bins_detector"][ibin + 1])/2
    bins_      = "[" + str(vl.varList[var]["bins_detector"][ibin]) + ", " + str(vl.varList[var]["bins_detector"][ibin + 1]) + "]"
    name_      = "--binname card_bin" + str(ibin)

    extra_ += ' -A "^1btag" "bin{b}" "{cut}"'.format(b   = ibin,
                                                     cut = "(" + str(vl.varList[var]["bins_detector"][ibin]) + "<=" + vl.varList[var]["var_detector"] + ") && (" + vl.varList[var]["var_detector"] + "<" + str(vl.varList[var]["bins_detector"][ibin + 1]) + ")")

    theweights_ = theweights

    comm = commandscaff.format(outpath      = outpath_,
                               friends      = friends_,
                               samplespaths = samplespaths_,
                               lumi      = (vl.LumiDict[int(year)] if year != "run2" else str(vl.LumiDict[2016]) + "," + str(vl.LumiDict[2017]) + "," + str(vl.LumiDict[2018])),
                               variable  = variable_,
                               bins      = bins_,
                               nth       = nth_,
                               year      = year if year != "run2" else "2016,2017,2018",
                               asimovornot = "--asimov s+b",
                               mcafile   = mcafile_,
                               cutsfile  = cutsfile_,
                               uncs      = "--unc {adhocu} --amc".format(adhocu = outpath_ + "/tw-uncs-adhoc.txt") if (not noUnc) else "--amc",
                               name      = name_,
                               func      = "tw-run2/functions_tw.cc",
                               extra     = extra_,
                               w         = theweights_,)
    return comm


def CheckProducedCardsByTask(task):
    prod, year, variable, asimov, nthreads, outpath, noUnc, useFibre, extra, pretend, queue, thebin = task

    ch = "card_bin" + str(thebin) + ".root"

    chkpath = outpath + "/" + year + "/" + variable + "/sigextr_fit_combine/bincards/" + ch

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



def createCardsForEachSys(tsk):
    inpath, iY, iV = tsk
    print "    - Creating individual cards for variable " + iV + " of year " + iY

    path = inpath + "/" + iY + "/" + iV + "/sigextr_fit_combine/bincards"

    #if not os.path.isdir(path + "/cards_{s}".format(s = syst)):
        #os.system("mkdir " + path + "/cards_{s}".format(s = syst))

    validfirstentries = {"*", "#", "bin", "observation", "shapes", "rate", "process"}

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

    txtfiletoopen  = path + "/card_bin{b}.txt"
    rootfiletoopen = path + "/card_bin{b}.root"

    for iB in range(len(vl.varList[iV]["bins_detector"]) - 1):
        readF = open(txtfiletoopen.format(b = iB), 'r')

        outtext = ""; theprocs = []
        for line in readF:
            entries = line.split()
            if entries[0] in validfirstentries or entries[0][0] == "#":
                tmpline = deepcopy(line)

                if   "process" in entries[0] and not len(theprocs):
                    for iP in range(1, len(entries)):
                        theprocs.append(entries[iP])
                elif "shapes" in entries[0]:
                    tmpline = tmpline.replace("card_bin{b}.root".format(b = iB),
                                              "finalcard_bin{b}_year{y}.root".format(b = iB, y = iY))

                outtext += tmpline
            elif len(entries) > 1:
                if entries[0] == "jes" or entries[0] == "tw_matching": continue

                if   ("shape" in entries[1]):
                    goodline = ["shape"]
                    ##Check to see whether there are zero evs. in any of the variations in any bin
                    tmpRfile = r.TFile(rootfiletoopen.format(b = iB), "READ")
                    for iP in range(2, len(entries)):
                        toforget = False
                        if "1" in entries[iP]:
                            #print "x_" + theprocs[iP - 2] + "_" + entries[0].replace(" ", "")
                            histoUp = tmpRfile.Get("x_" + theprocs[iP - 2] + "_" + entries[0].replace(" ", "") + "Up")
                            histoDn = tmpRfile.Get("x_" + theprocs[iP - 2] + "_" + entries[0].replace(" ", "") + "Down")
                            for jB in range(1, histoUp.GetNbinsX() + 1):
                                if all([histoUp.GetBinContent(jB) < 1e-5, histoDn.GetBinContent(jB) < 1e-5]):
                                    toforget = True
                                    break
                                if any([histoUp.GetBinContent(jB) < 1e-5, histoDn.GetBinContent(jB) < 1e-5]):
                                    towarn = True
                                    break

                        if toforget:
                            goodline.append("-")
                        else:
                            goodline.append(entries[iP])

                    tmpRfile.Close(); del tmpRfile
                    outtext += " ".join([entries[0]] + goodline) + "\n"
                elif ("lnN"   in entries[1] and "norm" in entries[0]):
                    outtext += line
                else:
                    goodline = ["shape"]
                    for i in range(2, len(entries)):
                        goodline.append("-" if "-" in entries[i] else "1")
                    #print " ".join([entries[0]] + goodline)
                    outtext += " ".join([entries[0]] + goodline) + "\n"

        readF.close()
        #print theprocs
        outF  = open(path + "/finalcard_bin{b}_year{y}.txt".format(b = iB, y = iY), 'w')
        outF.write(outtext)
        outF.close()

        print "    - Creating new rootfile card for bin", iB
        therootfile = r.TFile.Open(rootfiletoopen.format(b = iB), "READ")
        tmpdictofthings = {}
        copyname = ""; theproc = ""
        for key in therootfile.GetListOfKeys():
            copyname = key.GetName()
            isaproc  = False
            if len(copyname.split("_")) >= 3:
                theproc  = deepcopy(copyname.split("_")[1] if ("bkg" not in copyname.split("_")[2] and "partbin" not in copyname.split("_")[2]) else "_".join(copyname.split("_")[1:3]))
            else:
                theproc  = deepcopy(copyname.split("_")[1])
            #print theproc

            if (copyname.split("_")[1] in vl.ProcessesNames and
                len(copyname.split("_")) <= 2) or copyname == "x_data_obs":
                isaproc = True
            #else:
                #theunc  = "_".join(copyname.split("_")[2:])
                #pureunc = theunc.replace("Up", "").replace("Down", "")

            if any([therootfile.Get(copyname).GetBinContent(jB) < 1e-5 for jB in range(1, therootfile.Get(copyname).GetNbinsX() + 1)]):
                if isaproc:
                    raise RuntimeError("FATAL: less than 1e-5 found in process " + theproc)
                othervar = therootfile.Get(key.GetName().replace("Up" if "Up" in copyname else "Down", "Down" if "Up" in copyname else "Up"))
                if any([(therootfile.Get(copyname).GetBinContent(jB) <= 0 and othervar.GetBinContent(jB) <= 0) for jB in range(1, therootfile.Get(copyname).GetNbinsX() + 1)]):
                    continue
                newhisto = deepcopy(therootfile.Get(copyname).Clone(copyname))
                nomproc  = therootfile.Get("x_" + theproc)
                for jB in range(1, newhisto.GetNbinsX() + 1):
                    if newhisto.GetBinContent(jB) < 1e-5:
                        if othervar.GetBinContent(jB) <= 1e-5:
                            newhisto.SetBinContent(jB, 1e-5)
                        else:
                            thevar = othervar.GetBinContent(jB) - nomproc.GetBinContent(jB)
                            if abs(thevar) >= nomproc.GetBinContent(jB):
                                newhisto.SetBinContent(jB, 1e-5)
                            else:
                                newhisto.SetBinContent(jB, max(nomproc.GetBinContent(jB) - thevar, 1e-5))

                tmpdictofthings[copyname] = deepcopy(newhisto)
            else:
                tmpdictofthings[copyname] = deepcopy(therootfile.Get(key.GetName()).Clone(copyname))

        therootfile.Close(); del therootfile

        theoutrootfile = r.TFile.Open(path + "/finalcard_bin{b}_year{y}.root".format(b = iB, y = iY), "RECREATE")
        for key in tmpdictofthings:
            tmpdictofthings[key].Write()
        theoutrootfile.Close(); del theoutrootfile
    towarndict = {}
    return towarndict



if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--year',      '-y', metavar = 'year',       dest = "year",     required = False, default = "all")
    parser.add_argument('--variable',  '-v', metavar = 'variable',   dest = "variable", required = False, default = "all")
    parser.add_argument('--step',      '-s', metavar = 'step',       dest = "step",     required = False,  default = 0, type = int)
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',      dest = "extra",    required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--production','-P', metavar = "prod",       dest = "prod",     required = True)
    parser.add_argument('--queue',     '-q', metavar = 'queue',      dest = "queue",    required = False, default = "")
    parser.add_argument('--outpath',   '-o', metavar = 'outpath',    dest = "outpath",  required = False, default = "./temp/differential")
    parser.add_argument('--nounc',     '-nu',action  = "store_true", dest = "nounc",    required = False, default = False)
    parser.add_argument('--useFibre',  '-f', action  = "store_true", dest = "useFibre", required = False, default = False)
    parser.add_argument('--check',     '-c', action  = "store_true", dest = "check", required = False, default = False)
    parser.add_argument('--asimov',    '-a', action  = "store_true", dest = "asimov",   required = False, default = False)


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
    asimov    = args.asimov
    pretend  = args.pretend
    variable = args.variable
    useFibre = args.useFibre
    thevars  = vl.varList["Names"]["Variables"]
    theyears = ["2016", "2017", "2018", "run2"]
    vetolist = ["plots", "Fiducial", "control", "tables"]

    if check:
        wr.warn("WARNING: check is only implemented for the first step.")

    if step == 0:
        if not check:
            print "> Preparing to submit the cards for the fit..."
        else:
            print "> Preparing to check all the produced cards..."

        tasks    = []

        if "," in variable:
            thevars = variable.split(",")
        elif variable.lower() != "all":
            thevars = [ variable ]

        if year.lower() != "all":
            theyears = [ year ]

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
                    tasks.append( (prod, yr, var, asimov, nthreads, outpath, noUnc, useFibre, extra, pretend, queue, theb) )

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
                #if str(task) == "('2021-04-23', 'run2', 'Lep1_Pt', False, 12, 'temp_2021_05_13_diferencialcombine/differential/', False, True, '', False, '', 0)":
                    #print "OJOCUIDAOOOOOOOOOOOOOO"
                    #continue
                    #calculate = True

                if calculate:
                    ExecuteOrSubmitTask(task)
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

    else: # preparing final cards
        tasks = []
        theyears = []
        presentyears = next(os.walk(outpath))[1]

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
            thevars = next(os.walk(outpath + "/" + iY))[1]

            if variable.lower() != "all" and variable in thevars:
                thevars = [ variable ]
            elif variable.lower() != "all":
                raise RuntimeError("FATAL: the variable requested is not in the provided input folder.")

            for iV in thevars:
                if "plots" in iV or "table" in iV: continue
                if not os.path.isdir(outpath + "/" + iY + "/" + iV + "/sigextr_fit_combine"): continue


                tasks.append( (outpath, iY, iV) )
        #print tasks
        #for el in tasks: print el
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

