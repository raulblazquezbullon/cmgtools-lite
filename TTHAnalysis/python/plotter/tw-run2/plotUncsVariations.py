import os, sys, argparse
from multiprocessing import Pool
from copy import deepcopy
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

#groups    = ["ttbar", "tw"]
#variables = ["x"]
#variables = ["LeadingJetPt", "Fiducial"]

#variations = ["Btag", "ElecEff", "JES", "Mistag", "MuonEff", "PU", "TopPt", "Trig", "JER", "UE", "hDamp", "isr", "pdf", "tWME", "ttbarME", "fsr", "ColourQCDbasedCRTuneerdON", "ColourGluonMoveCRTuneerdON", "ColourPowhegerdON", "ColourGluonMoveCRTune", "ttbar", "Non-WorZ", "VVttbarV", "DY", "mtop"]
#variations = ["isr_tw", "fsr_tw", "isr_ttbar", "fsr_ttbar"]

#colour_syst    = ["ColourQCDbasedCRTuneerdON", "ColourGluonMoveCRTuneerdON", "ColourPowhegerdON", "ColourGluonMoveCRTune"]
#colour_syst    = []

def getFiles(path):
    theinfo = next(os.walk(path))
    #print(theinfo)
    retlist = []
    if len(theinfo[1]) != 0:
        for iF in theinfo[2]:
            if ".root" in iF:
                retlist.append( (iF, path) )
        for iD in theinfo[1]:
            retlist.extend(getFiles(path + "/" + iD))
    else:
        for iF in theinfo[2]:
            if ".root" in iF:
                retlist.append( (iF, path) )
    return retlist


def plotVariationsFromOneProcess(tsk):
    theproc, subdict, outpath = tsk
    for iU in subdict:
        if iU == "": continue

        c = r.TCanvas("c", "", 600, 600)
        nominal = subdict[""]
        varup   = subdict[iU]["Up"]
        vardn   = subdict[iU]["Down"]

        leg = r.TLegend( .52, .9 - 0.18, .735, .9)
        leg.SetTextFont(42)
        leg.SetTextSize(0.0435)
        leg.SetBorderSize(0)
        leg.SetFillColor(10)
        leg.SetFillStyle(0); # transparent legend!

        nominal.SetLineColor(r.kBlack)
        nominal.SetFillStyle(0)
        nominal.SetStats(0)
        nominal.SetTitle("")
        nominal.GetXaxis().SetTitle("BDT disc." if any([el in outpath for el in ["1j1t", "2j1t"]]) else "Subleading jet p_{T}")
        nominal.SetMaximum(-1111); varup.SetMaximum(-1111); vardn.SetMaximum(-1111);
        nominal.GetYaxis().SetRangeUser(0, max([nominal.GetMaximum(), varup.GetMaximum(), vardn.GetMaximum()]) * 1.1)
        leg.AddEntry(nominal, "Nominal", "f")

        varup.SetLineColor(r.kBlue)
        varup.SetLineWidth(2)
        varup.SetFillStyle(0)
        leg.AddEntry(varup, "Up", "f")

        vardn.SetLineColor(r.kRed)
        vardn.SetLineWidth(2)
        vardn.SetFillStyle(0)
        leg.AddEntry(vardn, "Down", "f")

        nominal.Draw("P,E")
        varup.Draw("histsame")
        vardn.Draw("histsame")
        leg.Draw("same")
        c.SaveAs(outpath + "/uncVar_" + theproc + "_" + iU + ".png")
        c.SaveAs(outpath + "/uncVar_" + theproc + "_" + iU + ".pdf")
        c.Close(); del c; del leg
    return



def plotVariations(tup, outname, ncores = -1):
    histodict = {}
    rF = r.TFile(tup[1] + "/" + tup[0], "READ")

    if not os.path.isdir(tup[1] + "/" + outname):
        os.system("mkdir -p " + tup[1] + "/" + outname)

    print("\n> Reading file " + tup[1] + "/" + tup[0] + " ...")
    nplots = 0
    for key in rF.GetListOfKeys():
        tmpnam = key.GetName()
        if "data" in tmpnam: continue

        if "Up" not in tmpnam and "Down" not in tmpnam: # It is the nominal value of a process
            histodict[tmpnam.replace("x_", "")] = {}
            histodict[tmpnam.replace("x_", "")][""] = deepcopy(rF.Get(tmpnam).Clone(tmpnam.replace("x_", "") + "_"))
        else:
            tmpproc = tmpnam.replace("x_", "").split("_")[0]
            tmpunc  = ("_".join(tmpnam.replace("x_", "").split("_")[1:])).replace("Up", "").replace("Down", "")
            tmpvar  = "Up" if "Up" in tmpnam.replace("x_", "") else "Down" if "Down" in tmpnam.replace("x_", "") else "OTHER"
            #print(tmpnam, tmpproc, tmpunc, tmpvar)
            if tmpproc not in histodict:
                histodict[tmpproc] = {}
            if tmpunc not in histodict[tmpproc]:
                histodict[tmpproc][tmpunc] = {}
                nplots += 1

            histodict[tmpproc][tmpunc][tmpvar] = deepcopy(rF.Get(tmpnam).Clone(tmpproc + "_" + tmpunc))

    rF.Close()
    #print(histodict)

    print("    - Plotting " + str(nplots) + " histograms...")
    tasks = []
    for iP in histodict:
        tasks.append( (iP, histodict[iP], tup[1] + "/" + outname) )
    if ncores < 2:
        for tsk in tasks:
            plotVariationsFromOneProcess(tsk)
    else:
        pool = Pool(ncores)
        pool.map(plotVariationsFromOneProcess, tasks)
        pool.close()
        pool.join()
        del pool
    print("    - Done!")
    return


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
    parser = argparse.ArgumentParser(usage = "python plotUncsVariations.py folder", description = "Helper for plotting.", formatter_class = argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('infolder')
    parser.add_argument('--varsFolderName',  "-n", metavar = 'outname',  dest = "outname", required = False, default = "uncVariations")
    parser.add_argument("-j", metavar = 'ncores',  dest = "ncores", required = False, default = -1, type = int)



    args     = parser.parse_args()
    infolder = args.infolder
    outname  = args.outname
    ncores   = args.ncores

    filelist = getFiles(infolder)

    print(filelist)
    #sys.exit()

    for iT in filelist:
        plotVariations(iT, outname, ncores)
