import ROOT as r
import warnings as wr
import sys, os, math, argparse
from copy import deepcopy
from multiprocessing import Pool

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

    PlotDetectorLevelResults(inpath, iY, iV, dictofvars)
    return


def PlotDetectorLevelResults(inpath, iY, iV, thedict):
    #scaleval = 1
    thelumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    scaleval = 1/thelumi/1000 if vl.doxsec else 1

    for key in thedict:
        thedict[key].Scale(scaleval)

    #### 1) Plot result plot
    nominal_withErrors  = ep.propagateHistoAsym(thedict, doSym = vl.doSym)

    #for iB in range(1, nominal_withErrors[0].GetNbinsX() + 1):
        #print nominal_withErrors[0].GetBinContent(iB), nominal_withErrors[0].GetBinError(iB)
        #print nominal_withErrors[1].GetBinContent(iB), nominal_withErrors[1].GetBinError(iB)

    #sys.exit()

    plot                = bp.beautifulUnfPlot('{var}_detector'.format(var = iV), iV)
    plot.doRatio        = True
    plot.doFit          = False
    plot.plotspath      = inpath + "/" + iY + "/detectorplots/"
    plot.doPreliminary  = vl.doPre

    thedict[""].SetMarkerStyle(r.kFullCircle)
    thedict[""].GetXaxis().SetNdivisions(505, True)

    nominal_withErrors[0].SetFillColorAlpha(r.kBlue, 0.35)
    nominal_withErrors[0].SetLineColor(0)
    nominal_withErrors[0].SetFillStyle(1001)

    if "legpos_detector" in vl.varList[iV]: legloc = vl.varList[iV]["legpos_detector"]
    else:                                   legloc = "TR"

    print '> Adding generated distribution with used software and others.'
    #if not os.path.isfile(inpath + "/" + iY + "/" + iV + "/detector.root"):
    if not os.path.isfile(inpath + "/" + iY + "/" + iV + "/forExtr.root"):
        raise RuntimeError('The rootfile with the generated information does not exist')
    #tmptfile = r.TFile.Open(inpath + "/" + iY + "/" + iV + "/detector.root")
    tmptfile = r.TFile.Open(inpath + "/" + iY + "/" + iV + "/forExtr.root")
    tru = deepcopy(tmptfile.Get('x_tw').Clone("tru"))
    tmptfile.Close()
    tru.SetLineWidth(2)
    tru.SetLineColor(bp.colorMap[0])
    tru.SetMarkerSize(0)
    #tru.Scale(0.001)
    #if iY == "run2":
        #tru.Scale(1./3)
    tru.Scale(scaleval)
    #if iY == "run2":
        #tru.Scale(1./3)

    #if not os.path.isfile('temp/{var}_/ClosureTest_aMCatNLO_recobinning_{var}.root'.format(var = iV)):
        #raise RuntimeError('The rootfile with the generated aMCatNLO information does not exist')
    #tmptfile2 = r.TFile.Open(inpath + "/" + iY + "/" + iV + '/detector.root')
    #aMCatNLO = deepcopy(tmptfile2.Get('x_tw').Clone("aMCatNLO"))
    #tmptfile2.Close()
    #aMCatNLO.SetLineWidth(2)
    #aMCatNLO.SetLineColor(r.kAzure)
    #aMCatNLO.SetLineStyle(2)
    #aMCatNLO.SetMarkerSize(0)
    #aMCatNLO.Scale(0.001)
    #if iY == "run2":
        #aMCatNLO.Scale(1./3)

    #print "Year:", iY
    #for i in range(1, aMCatNLO.GetNbinsX() + 1):
        #print i, tru.GetBinContent(i), aMCatNLO.GetBinContent(i)#, tru.GetBinContent(i)/aMCatNLO.GetBinContent(i)

    #if not os.path.isfile('temp/{var}_/ClosureTest_DS_recobinning_{var}.root'.format(var = iV)):
        #raise RuntimeError('The rootfile with the generated DS variation information does not exist')
    #tmptfile3 = r.TFile.Open('temp/{var}_/ClosureTest_DS_recobinning_{var}.root'.format(var = iV))
    #hDS = deepcopy(tmptfile3.Get('tW'))
    #tmptfile3.Close()
    #hDS.SetLineWidth(2)
    #hDS.SetLineColor(r.kGreen)

    if nominal_withErrors[0].GetMaximum() <= tru.GetMaximum():      nominal_withErrors[0].SetMaximum(tru.GetMaximum())
    #if nominal_withErrors[0].GetMaximum() <= aMCatNLO.GetMaximum(): nominal_withErrors[0].SetMaximum(aMCatNLO.GetMaximum())
    #if nominal_withErrors[0].GetMaximum() <= hDS.GetMaximum():      nominal_withErrors[0].SetMaximum(hDS.GetMaximum())


    plot.addHisto(nominal_withErrors, 'histnomin', 'Uncertainty',             'F', "unc")
    plot.addHisto(tru,                'L,same',    'tW Powheg DR + Pythia8',  'L', 'mc')
    #plot.addHisto(hDS,                'L,same',    'tW Powheg DS + Pythia8',  'L', 'mc')
    #plot.addHisto(aMCatNLO,           'L,same',    'tW aMC@NLO DR + Pythia8', 'L', 'mc')
    plot.addHisto(thedict[""],        'P,E,same',  vl.labellegend,            'PE', 'data')
    plot.saveCanvas(legloc)
    del plot

    #### 2) Plot relative uncertainty plot
    plot               = bp.beautifulUnfPlot('{var}uncs_detector'.format(var = iV), iV)
    plot.doPreliminary = vl.doPre
    plot.plotspath     = inpath + "/" + iY + "/detectorplots/"

    yaxismax_detectorunc = 1
    if "yaxismax_detectorunc" in vl.varList[iV]:
        yaxismax_detectorunc = vl.varList[iV]["yaxismax_detectorunc"]

    uncListorig, hincstat, hincsyst, hincmax = ep.drawTheRelUncPlot(nominal_withErrors, thedict, plot, yaxismax_detectorunc)

    if "legpos_detectorunc" in vl.varList[iV]: unclegpos = vl.varList[iV]["legpos_detectorunc"]
    else:                                      unclegpos = "TR"

    plot.saveCanvas(unclegpos)

    out2 = r.TFile.Open(inpath + "/" + iY + "/" + iV + "/detectorsignal_bs.root", 'update')
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
    parser.add_argument('--inpath',    '-i', metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/differential")
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
                    if "plots" in iV: continue
                    #if "Fiducial" not in iV: continue
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
