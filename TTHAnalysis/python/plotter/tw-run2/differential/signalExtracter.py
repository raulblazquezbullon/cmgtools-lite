import ROOT as r
import warnings as wr
import sys, os, math, argparse
from copy import deepcopy

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import errorPropagator as ep
import beautifulUnfoldingPlots as bp
import varList as vl

r.gROOT.SetBatch(True)

#===================================
def getXsecForSys(syst, thedict):
    data = deepcopy(thedict["data_obs"][""].Clone('data_%s'%syst))
    
    ttbar     = thedict['ttbar'  ][""]
    dy        = thedict['dy'     ][""]
    nonworz   = thedict['nonworz'][""]
    vvttbarv  = thedict['vvttv'  ][""]
    
    if syst in thedict['ttbar']:
        ttbar    = thedict['ttbar'][syst]

    if syst in thedict['dy']:
        dy       = thedict['dy'][syst]

    if syst in thedict['nonworz']:
        nonworz  = thedict['nonworz'][syst]

    if syst in thedict['vvttv']:
        vvttbarv = thedict['vvttv'][syst]

    data.Add(ttbar   , -1 )
    data.Add(dy      , -1 )
    data.Add(nonworz , -1 )
    data.Add(vvttbarv, -1 )
    
    return data


def SubtractBackgroundToData(pathtofile):
    tfile   = r.TFile.Open(pathtofile + '/forExtr.root', "read")

    histodict = {}; unclist = [ "" ]
    for key in tfile.GetListOfKeys():
        tmpnam = key.GetName()

        if "Up" not in tmpnam and "Down" not in tmpnam: # It is the nominal value of a process
            histodict[tmpnam.replace("x_", "")] = {}
            histodict[tmpnam.replace("x_", "")][""] = deepcopy(tfile.Get(tmpnam).Clone(tmpnam.replace("x_", "") + "_"))
        else:
            tmpproc = tmpnam.replace("x_", "").split("_")[0]
            tmpunc  = ("_".join(tmpnam.replace("x_", "").split("_")[1:]))
            #print(tmpnam, tmpproc, tmpunc, tmpvar)

            if tmpunc not in unclist:
                unclist.append(tmpunc)

            if tmpproc not in histodict:
                histodict[tmpproc] = {}

            histodict[tmpproc][tmpunc]= deepcopy(tfile.Get(tmpnam).Clone(tmpproc + "_" + tmpunc))

    tfile.Close(); del tfile

    out = r.TFile.Open(pathtofile + '/detectorsignal_bs.root', 'recreate')
    variations = {}
    for syst in unclist:
        variations[syst]  = deepcopy(getXsecForSys(syst, histodict))
        variations[syst].Write()
    out.Close()

    return variations


def ExtractSignalAndPlotIt(tsk):
    inpath, iY, iV = tsk

    dictofvars = SubtractBackgroundToData(inpath + "/" + iY + "/" + iV)
    #print dictofvars

    if not os.path.isdir(inpath + "/" + iY + "/" + iV + "/detectorplots/"):
        os.system("mkdir -p " + inpath + "/" + iY + "/detectorplots/")

    PlotDetectorLevelResults(dictofvars, iV, inpath + "/" + iY + "/detectorplots/", inpath + "/" + iY + "/" + iV + '/detectorsignal_bs.root')
    return


def PlotDetectorLevelResults(thedict, iV, outpath, outfilepath):
    scaleval = 1/vl.TotalLumi/1000 if vl.doxsec else 1
    for key in thedict:
        thedict[key].Scale(scaleval)

    #### 1) Plot result plot
    nominal_withErrors  = ep.propagateHistoAsym(thedict, doSym = vl.doSym)

    #for iB in range(1, nominal_withErrors[0].GetNbinsX() + 1):
        #print nominal_withErrors[0].GetBinContent(iB), nominal_withErrors[0].GetBinError(iB)
        #print nominal_withErrors[1].GetBinContent(iB), nominal_withErrors[1].GetBinError(iB)

    #sys.exit()

    plot                = bp.beautifulUnfoldingPlots('{var}_detector'.format(var = iV), iV)
    plot.doRatio        = True
    plot.doFit          = False
    plot.plotspath      = outpath
    plot.doPreliminary  = vl.doPre

    thedict[""].SetMarkerStyle(r.kFullCircle)
    thedict[""].GetXaxis().SetNdivisions(505, True)

    nominal_withErrors[0].SetFillColorAlpha(r.kBlue, 0.35)
    nominal_withErrors[0].SetLineColor(0)
    nominal_withErrors[0].SetFillStyle(1001)

    if "legpos_fold" in vl.varList[iV]: legloc = vl.varList[iV]["legpos_fold"]
    else:                               legloc = "TR"

    #print '> Adding generated distribution with used software and others.'
    #if not os.path.isfile('temp/{var}_/ClosureTest_recobinning_{var}.root'.format(var = iV)):
        #raise RuntimeError('The rootfile with the generated information does not exist')
    #tmptfile = r.TFile.Open('temp/{var}_/ClosureTest_recobinning_{var}.root'.format(var = iV))
    #tru = deepcopy(tmptfile.Get('tW'))
    #tru.SetLineWidth(2)
    #tru.SetLineColor(bp.colorMap[0])

    #if not os.path.isfile('temp/{var}_/ClosureTest_aMCatNLO_recobinning_{var}.root'.format(var = iV)):
        #raise RuntimeError('The rootfile with the generated aMCatNLO information does not exist')
    #tmptfile2 = r.TFile.Open('temp/{var}_/ClosureTest_aMCatNLO_recobinning_{var}.root'.format(var = iV))
    #aMCatNLO = deepcopy(tmptfile2.Get('tW'))
    #aMCatNLO.SetLineWidth(2)
    #aMCatNLO.SetLineColor(r.kAzure)
    #aMCatNLO.SetLineStyle(2)

    #if not os.path.isfile('temp/{var}_/ClosureTest_DS_recobinning_{var}.root'.format(var = iV)):
        #raise RuntimeError('The rootfile with the generated DS variation information does not exist')
    #tmptfile3 = r.TFile.Open('temp/{var}_/ClosureTest_DS_recobinning_{var}.root'.format(var = iV))
    #hDS = deepcopy(tmptfile3.Get('tW'))
    #hDS.SetLineWidth(2)
    #hDS.SetLineColor(r.kGreen)

    #if nominal_withErrors[0].GetMaximum() <= tru.GetMaximum():      nominal_withErrors[0].SetMaximum(tru.GetMaximum())
    #if nominal_withErrors[0].GetMaximum() <= aMCatNLO.GetMaximum(): nominal_withErrors[0].SetMaximum(aMCatNLO.GetMaximum())
    #if nominal_withErrors[0].GetMaximum() <= hDS.GetMaximum():      nominal_withErrors[0].SetMaximum(hDS.GetMaximum())

    #plot.addHisto(nominal_withErrors, 'histnomin',     'Uncertainty',   'F', 'unc')
    #plot.addHisto(tru,                'L,same',   'tW Powheg DR + Pythia8',   'L', 'mc')
    #plot.addHisto(hDS,                'L,same',   'tW Powheg DS + Pythia8',   'L', 'mc')
    #plot.addHisto(aMCatNLO,           'L,same',   'tW aMC@NLO DR + Pythia8',  'L', 'mc')
    #plot.addHisto(thedict[""],        'P,E,same',  vl.labellegend, 'PE', 'data')
    #plot.saveCanvas(legloc)
    #tmptfile3.Close()
    #tmptfile2.Close()
    #tmptfile.Close()

    plot.addHisto(nominal_withErrors, 'histnomin', 'Uncertainty',  'F',  "unc")
    plot.addHisto(thedict[""],        'P,E,same',    vl.labellegend, 'PE', 'data')
    plot.saveCanvas(legloc)

    del plot

    #### 2) Plot relative uncertainty plot
    uncListorig = ep.getUncList(thedict, False)
    #print "Full list of uncs.", uncListorig
    uncList = uncListorig[:vl.nuncs]

    plot    = bp.beautifulUnfoldingPlots('{var}uncertainties_detector'.format(var = iV), iV)
    plot.doPreliminary  = vl.doPre
    uncList[0][1].Draw()

    incmax  = []
    for bin in range(1, nominal_withErrors[0].GetNbinsX() + 1):
        if nominal_withErrors[1].GetBinError(bin) > nominal_withErrors[0].GetBinContent(bin):
            incmax.append(max([nominal_withErrors[0].GetBinError(bin), nominal_withErrors[0].GetBinContent(bin)]))
        else:
            incmax.append(max([nominal_withErrors[0].GetBinError(bin), nominal_withErrors[1].GetBinError(bin)]))

    incsyst  = []
    for bin in range(1, nominal_withErrors[0].GetNbinsX() + 1):
        if math.sqrt(nominal_withErrors[1].GetBinError(bin)**2 - thedict[""].GetBinError(bin)**2) > nominal_withErrors[0].GetBinContent(bin):
            incsyst.append(max([math.sqrt(nominal_withErrors[0].GetBinError(bin)**2 - thedict[""].GetBinError(bin)**2),
                                nominal_withErrors[0].GetBinContent(bin)]))
        else:
            incsyst.append(max([math.sqrt(nominal_withErrors[0].GetBinError(bin)**2 - thedict[""].GetBinError(bin)**2),
                                math.sqrt(nominal_withErrors[1].GetBinError(bin)**2 - thedict[""].GetBinError(bin)**2)]))

    maxinctot = 0
    hincmax   = deepcopy(thedict[""].Clone('hincmax'))
    for bin in range(1, nominal_withErrors[0].GetNbinsX() + 1):
        hincmax.SetBinContent(bin, incmax[bin-1] / hincmax.GetBinContent(bin))
        hincmax.SetBinError(bin, 0.)
        if (hincmax.GetBinContent(bin) > maxinctot): maxinctot = hincmax.GetBinContent(bin)

    hincsyst  = deepcopy(thedict[""].Clone('hincsyst'))
    for bin in range(1, nominal_withErrors[0].GetNbinsX() + 1):
        hincsyst.SetBinContent(bin, incsyst[bin-1] / hincsyst.GetBinContent(bin))
        hincsyst.SetBinError(bin, 0.)

    hincmax.SetLineColor(r.kBlack)
    hincmax.SetLineWidth( 2 )
    hincmax.SetFillColorAlpha(r.kBlue, 0.)
    hincsyst.SetLineColor(r.kBlack)
    hincsyst.SetLineWidth( 2 )
    hincsyst.SetLineStyle( 3 )
    hincsyst.SetFillColorAlpha(r.kBlue, 0.)

    #if (maxinctot >= 0.9):
        #if maxinctot >= 5:
            #uncList[0][1].GetYaxis().SetRangeUser(0., 5.)
        #else:
            #uncList[0][1].GetYaxis().SetRangeUser(0., maxinctot + 0.1)
    #else:
        #uncList[0][1].GetYaxis().SetRangeUser(0., 0.9)

    uncList[0][1].GetYaxis().SetRangeUser(0., 1.1)

    actualindex = 0
    for i in range(vl.nuncs):
        #if "Stat" in uncListorig[i][0]:
            #uncListorig[actualindex][1].SetLineColor(r.kBlack)
            #uncListorig[actualindex][1].SetLineStyle( 2 )
        if   "Stat" in uncListorig[actualindex][0]:
            actualindex += 1
        elif "lumi" in uncListorig[actualindex][0].lower():
            uncListorig[actualindex][1].SetLineColor(r.kBlack)
            uncListorig[actualindex][1].SetLineStyle( 4 )

        #uncListorig[actualindex][1].SetLineColor( vl.ColorMap[uncListorig[actualindex][0]] )
        #print actualindex
        uncListorig[actualindex][1].SetLineColor( vl.ColorMapList[actualindex] )
        uncListorig[actualindex][1].SetLineWidth( 2 )
        uncListorig[actualindex][1].SetFillColorAlpha(r.kBlue, 0.)
        plot.addHisto(uncListorig[actualindex][1], 'H,same' if i else 'H', uncListorig[actualindex][0],'L')
        actualindex += 1

    for i in range(len(uncListorig)):
        if "Stat" in uncListorig[i][0]:
            uncListorig[i][1].SetLineColor(r.kBlack)
            uncListorig[i][1].SetLineStyle( 2 )
            uncListorig[i][1].SetFillColorAlpha(r.kBlue, 0.)
            plot.addHisto(uncListorig[i][1], 'hist,same', 'Stat.', 'L')
    plot.addHisto(hincsyst, 'hist,same', 'Syst.', 'L')
    plot.addHisto(hincmax,  'hist,same', 'Total', 'L')
    plot.plotspath = outpath

    if "uncleg_fold" in vl.varList[iV]: unclegpos = vl.varList[iV]["uncleg_fold"]
    else:                               unclegpos = "TR"

    plot.saveCanvas(unclegpos)

    out2 = r.TFile.Open(outfilepath, 'update')
    nom0 = deepcopy(nominal_withErrors[0].Clone("nom0"))
    nom1 = deepcopy(nominal_withErrors[1].Clone("nom1"))
    nom0.Write()
    nom1.Write()
    hincmax.Write()
    hincsyst.Write()
    out2.Close(); del out2
    return



if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',    '-i', metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/differential/cards")
    parser.add_argument('--year',      '-y', metavar = 'year',       dest = "year",     required = False, default = "all")
    parser.add_argument('--variable',  '-v', metavar = 'variable',   dest = "variable", required = False, default = "all")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',      dest = "extra",    required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)


    args     = parser.parse_args()
    year     = args.year
    extra    = args.extra
    nthreads = args.nthreads
    pretend  = args.pretend
    inpath   = args.inpath
    variable = args.variable

    #print("\n===== Unfolding procedures: Response matrices & ROOT files production =====")
    #print("> Setting binning, paths, and other details...")

    #print "\n> Drawing matrices and writing ROOT file (old one will be overwritten!)."


    #### First, find the tasks
    tasks = []
    if year == "all":
        if variable == "all":
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

            for iY in theyears:
                thevars = next(os.walk(inpath + "/" + iY))[1]
                for iV in thevars:
                    if "plots" in iV or "Fiducial" in iV: continue
                    tasks.append( (inpath, iY, iV) )

    #tasks = [ (inpath, "2016", "Lep1_Pt") ]


    if nthreads > 1:
        pool = Pool(nthreads)
        pool.map(ExtractSignalAndPlotIt, tasks)
        pool.close()
        pool.join()
    else:
        for tsk in tasks:
            ExtractSignalAndPlotIt(tsk)


