from copy import deepcopy
import ROOT as r
import warnings as wr
import os, sys, math, array, argparse
from multiprocessing import Pool

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
from . import beautifulUnfoldingPlots as bp
from . import errorPropagator as ep
from . import getLaTeXtable as tex
from . import varList as vl

vl.SetUpWarnings()
r.gROOT.SetBatch(True)
verbose = False

def BibhuFunction(dv, df, dfinal, covm, varName):
    for key in dv:
        for bin in range(1, dv[key].GetNbinsX() + 1):
            goodunc = r.TMath.Sqrt( dv[key].GetBinError(bin)**2 / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**2 +
                                    dv[key].GetBinContent(bin)**2 * df[key.replace(varName, "Fiducial")].GetBinError(bin)**2 / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**4 -
                                    2 * dv[key].GetBinContent(bin) / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**3 * sum([covm.GetBinContent(bin, j) for j in range(1, dv[key].GetNbinsX() + 1)]) )

            dfinal[key].SetBinError(bin, goodunc)
    return


def NormaliseAndPlot(tsk):
    inpath, iY, iV = tsk

    thefict = None; dictforbin = None
    thedict, dictforbin = calculateNormalisedValuesWithFF(inpath, iY, iV)

    particlefidbinpath = inpath + "/" + iY + "/particlefidbinplots/"
    if not os.path.isdir(particlefidbinpath):
        os.system("mkdir -p " + particlefidbinpath)

    PlotParticleFidBinLevelResults(thedict, inpath, iY, iV)

    particlebinpath = inpath + "/" + iY + "/particlebinplots/"
    if not os.path.isdir(particlebinpath):
        os.system("mkdir -p " + particlebinpath)

    PlotParticleBinLevelResults(dictforbin, inpath, iY, iV)
    return


def calculateNormalisedValuesWithFF(inpath, iY, iV):
    fidufile = inpath + "/" + iY + "/Fiducial/particleOutput.root"
    varfile  = inpath + "/" + iY + "/" + iV + "/particleOutput.root"

    if not os.path.isfile(fidufile):
        raise RuntimeError("FATAL: file {f} does not exist.".format(f = fidufile))
    if not os.path.isfile(varfile):
        raise RuntimeError("FATAL: file {f} does not exist.".format(f = varfile))

    ffid = r.TFile.Open(fidufile)
    fvar = r.TFile.Open(varfile)

    dirfid = {}; dirvar = {};
    for key in ffid.GetListOfKeys():
        if "Fiducial" not in key.GetName(): continue
        #print key.GetName(), key.ReadObj().GetBinContent(1)
        htmp = r.TH1D(fvar.Get(iV))
        for bin in range(1, htmp.GetNbinsX() + 1):
            htmp.SetBinContent(bin, key.ReadObj().GetBinContent(1))
            htmp.SetBinError(bin,   key.ReadObj().GetBinError(1))

        dirfid[key.GetName()] = deepcopy(htmp.Clone(key.GetName()))
        del htmp

    for key in fvar.GetListOfKeys():
        if iV not in key.GetName(): continue
        dirvar[key.GetName()] = deepcopy(key.ReadObj().Clone(key.GetName()))

    covmat = deepcopy(fvar.Get("CovMat").Clone("covmat"))
    ffid.Close(); fvar.Close(); del ffid, fvar

    dirfinal = {}
    for key in dirvar:
        name    = "Fiducial" if key == iV else "Fiducial" + key.replace(iV, "")
        dirfinal[key] = deepcopy(dirvar[key].Clone())
        dirfinal[key].Divide(dirfid[name])
        #for iB in range(1, dirfinal[key].GetNbinsX() + 1):
            #print name, key, dirfinal[key].GetBinContent(iB)

    BibhuFunction(dirvar, dirfid, dirfinal, covmat, iV)
    del dirfid

    allHistos     = { key.replace(iV + "_", "") : deepcopy(dirfinal[key]) for key in dirfinal}
    del allHistos[iV]
    allHistos[""] = deepcopy(dirfinal[iV])

    savetfile = r.TFile(inpath + "/" + iY + "/" + iV + "/particlefidOutput.root", "recreate")
    for key in allHistos: allHistos[key].Write()
    savetfile.Close(); del savetfile

    histoForOnlyBin = { key.replace(iV + "_", "") : dirvar[key] for key in dirvar}
    del histoForOnlyBin[iV]
    histoForOnlyBin[""] = deepcopy(dirvar[iV])
    for key in histoForOnlyBin:
        histoForOnlyBin[key].Scale(1, "width")
    #print allHistos, "\n", histoForOnlyBin
    #sys.exit()
    return allHistos, histoForOnlyBin



def calculateNormalisedValues(inpath, iY, iV):
    varfile  = inpath + "/" + iY + "/" + iV + "/particleOutput.root"

    if not os.path.isfile(varfile):
        raise RuntimeError("FATAL: file {f} does not exist.".format(f = varfile))

    fvar = r.TFile.Open(varfile)
    dirfid = {}; dirvar = {};
    for key in fvar.GetListOfKeys():
        if iV not in key.GetName(): continue
        dirvar[key.GetName()] = deepcopy(key.ReadObj().Clone(key.GetName()))

    covmat = deepcopy(fvar.Get("CovMat").Clone("covmat"))
    fvar.Close(); del fvar

    for key,histo in dirvar.items():
        fiduval = sum([histo.GetBinContent(i) for i in range(1, histo.GetNbinsX() + 1)])
        fiduunc = r.TMath.Sqrt(sum([covmat.GetBinContent(i, j) for i in range(1, covmat.GetNbinsX() + 1) for j in range(1, covmat.GetNbinsX() + 1) ]))
        htmp = r.TH1D(histo)
        for bin in range(1, htmp.GetNbinsX() + 1):
            htmp.SetBinContent(bin, fiduval)
            htmp.SetBinError(  bin, fiduunc)

        dirfid[key.replace(iV, "Fiducial")] = deepcopy(htmp.Clone(key.replace(iV, "Fiducial")))
        del htmp

    dirfinal = {}
    for key in dirvar:
        name    = "Fiducial" if key == iV else "Fiducial" + key.replace(iV, "")
        dirfinal[key] = deepcopy(dirvar[key].Clone())
        dirfinal[key].Divide(dirfid[name])

    BibhuFunction(dirvar, dirfid, dirfinal, covmat, iV)
    del dirfid

    allHistos     = { key.replace(iV + "_", "") : deepcopy(dirfinal[key]) for key in dirfinal}
    del allHistos[iV]
    allHistos[""] = deepcopy(dirfinal[iV])

    savetfile = r.TFile(inpath + "/" + iY + "/" + iV + "/particlefidOutput.root", "recreate")
    for key in allHistos: allHistos[key].Write()
    savetfile.Close(); del savetfile

    histoForOnlyBin = { key.replace(iV + "_", "") : dirvar[key] for key in dirvar}
    del histoForOnlyBin[iV]
    histoForOnlyBin[""] = deepcopy(dirvar[iV])
    for key in histoForOnlyBin:
        histoForOnlyBin[key].Scale(1, "width")
    #print allHistos, "\n", histoForOnlyBin
    #sys.exit()
    return allHistos, histoForOnlyBin


#### POR BIN Y NORMALIZAOS
def PlotParticleFidBinLevelResults(thedict, inpath, iY, varName):
    print("> Obtaining plots normalised to fiducial cross section and to bin's width for variable " + varName)

    for key in thedict:
        #print key
        thedict[key].Scale(1, "width")

    statOnlyList       = [deepcopy(thedict[""]),  deepcopy(thedict[""])]

    savetfile2 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlefidbinOutput.root", "recreate")
    for key in thedict: thedict[key].Write()
    savetfile2.Close(); del savetfile2

    nominal_withErrors = ep.propagateHisto(thedict, doSym = vl.doSym)
    #statOnlyList = [deepcopy(nominal_withErrors[0].Clone("statUp")),
                    #deepcopy(nominal_withErrors[1].Clone("statDown"))]
    #if addRelUncs:
        #for iB in range(1, thedict[""].GetNbinsX() + 1):
            ##theres.SetBinError(iB, vl.mean([gloRelUncs[iB]["inc_stat"]["up"], gloRelUncs[iB]["inc_stat"]["down"]]) / gloRelUncs[iB]["munom"] * theres.GetBinContent(iB))
            #thedict[""].SetBinError(iB, 0.)
            #statOnlyList[0].SetBinError(iB, gloRelUncs[iB]["inc_stat"]["up"]/ gloRelUncs[iB]["munom"] * thedict[""].GetBinContent(iB))
            #statOnlyList[1].SetBinError(iB, gloRelUncs[iB]["inc_stat"]["down"]/ gloRelUncs[iB]["munom"] * thedict[""].GetBinContent(iB))

    plot               = bp.beautifulUnfPlot(varName + "_particlefidbin", varName)
    plot.doRatio       = True
    plot.doFit         = False
    plot.plotspath     = inpath + "/" + iY + "/particlefidbinplots/"
    plot.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[iY]
    plot.doPreliminary = vl.doPre
    plot.doLogY        = False if not "logy_particlefidbin" in vl.varList[varName] else vl.varList[varName]["logy_particlefidbin"]

    thedict[""].SetMarkerStyle(r.kFullCircle)
    thedict[""].SetLineColor(r.kBlack)
    thedict[""].SetMarkerSize(1)
    nominal_withErrors[0].SetFillColorAlpha(r.kOrange, 1.0)
    nominal_withErrors[0].SetLineColor(0)
    nominal_withErrors[0].SetFillStyle(1001)
    statOnlyList[0].SetFillColorAlpha(r.kGray + 1, 1.0)
    statOnlyList[0].SetLineColor(0)
    statOnlyList[0].SetFillStyle(1001)

    #if varName != "Fiducial":
    #    tex.saveLaTeXfromhisto(thedict[""], varName, path = inpath + "/" + iY + "/tables", errhisto = nominal_withErrors[0], ty = "particlefidbin")

    if "yaxismax_particlefidbin" in vl.varList[varName]:
        plot.yaxisuplimit = vl.varList[varName]["yaxismax_particlefidbin"]

    #tex.saveLaTeXfromhisto(thedict[""], varName, path = vl.tablespath, errhisto = nominal_withErrors[0], ty = "unfolded_binnorm")

    if "legpos_particlefidbin" in vl.varList[varName]:
        legloc = vl.varList[varName]["legpos_particlefidbin"]
    else:
        legloc = "TR"

    thelumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[iY]
    scaleval = 1/thelumi/1000
    if not os.path.isfile(inpath + "/" + iY + "/" + varName + '/particle.root'):
        raise RuntimeError('The rootfile with the generated information does not exist.')

    tmptfile = r.TFile.Open(inpath + "/" + iY + "/" + varName + '/particle.root')
    tru                         = vl.giveMeOneComparison(tmptfile, "bb4l", scaleval, varName, part = True, normbin = True, normfid = True)
    twttbardr                   = vl.giveMeOneComparison(tmptfile, "twttbardr", scaleval, varName, part = True, normbin = True, normfid = True)
    twttbards                   = vl.giveMeOneComparison(tmptfile, "twttbards", scaleval, varName, part = True, normbin = True, normfid = True)
    #twttbarherwig               = vl.giveMeOneComparison(tmptfile, "twttbarherwig", scaleval, varName, part = True, normbin = True, normfid = True)
    twttbaramc_dr               = vl.giveMeOneComparison(tmptfile, "twttbaramc_dr", scaleval, varName, part = True, normbin = True, normfid = True)
    twttbaramc_dr2              = vl.giveMeOneComparison(tmptfile, "twttbaramc_dr2", scaleval, varName, part = True, normbin = True, normfid = True)
    twttbaramc_ds               = vl.giveMeOneComparison(tmptfile, "twttbaramc_ds", scaleval, varName, part = True, normbin = True, normfid = True)
    twttbaramc_ds_runningBW     = vl.giveMeOneComparison(tmptfile, "twttbaramc_ds_runningBW", scaleval, varName, part = True, normbin = True, normfid = True)
    twttbaramc_ds_is            = vl.giveMeOneComparison(tmptfile, "twttbaramc_ds_is", scaleval, varName, part = True, normbin = True, normfid = True)
    twttbaramc_ds_is_runningBW  = vl.giveMeOneComparison(tmptfile, "twttbaramc_ds_is_runningBW", scaleval, varName, part = True, normbin = True, normfid = True)

    tmptfile.Close(); del tmptfile

    savetfile2 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlefidbinOutput.root", "update")
    tru.Write()
    twttbardr.Write()
    twttbards.Write()
    #twttbarherwig.Write()
    twttbaramc_dr.Write()
    twttbaramc_dr2.Write()
    twttbaramc_ds.Write()
    twttbaramc_ds_runningBW.Write()
    twttbaramc_ds_is_runningBW.Write()
    twttbaramc_ds_is.Write()
    savetfile2.Close()

    themaxs = []
    #for el in [tru, twttbardr, twttbards, twttbarherwig, twttbaramc_dr, twttbaramc_dr2, twttbaramc_ds, twttbaramc_ds_runningBW,
    for el in [tru, twttbardr, twttbards, twttbaramc_dr, twttbaramc_dr2, twttbaramc_ds, twttbaramc_ds_runningBW,
            thedict[""], nominal_withErrors[0], nominal_withErrors[1]]:
        themaxs.append(vl.getAConservativeMaximum(el))
    tmpval = max(themaxs)

    nominal_withErrors[0].SetMaximum(tmpval)
    nominal_withErrors[1].SetMaximum(tmpval)
    thedict[""].SetMaximum(tmpval)

    for iB in range(1, thedict[""].GetNbinsX() + 1):
        thedict[""].SetBinError(iB, 0.)

    plot.addHisto(nominal_withErrors,      'A2',     'Total unc.',                     'F', 'total')
    plot.addHisto(statOnlyList,            '2',      'Stat unc.',                      'F', "stat")
    plot.addHisto(tru,                     'P,same', 'b#bar{b}l^{+}#nu l^{-}#nu PH + P8','P', 'mc')
    plot.addHisto(twttbardr,               'P,same', 'tW DR + t#bar{t} PH + P8',       'P', 'mc')
    plot.addHisto(twttbards,               'P,same', 'tW DS + t#bar{t} PH + P8',       'P', 'mc')
    #plot.addHisto(twttbarherwig,           'P,same', 'tW DR + t#bar{t} PH + H7',       'P', 'mc')
    plot.addHisto(twttbaramc_dr,           'P,same', 'tW DR + t#bar{t} aMC + P8',      'P', 'mc')
    plot.addHisto(twttbaramc_dr2,          'P,same', 'tW DR2 + t#bar{t} aMC + P8',     'P', 'mc')
    plot.addHisto(twttbaramc_ds,           'P,same', 'tW DS + t#bar{t} aMC + P8',      'P', 'mc')
    plot.addHisto(twttbaramc_ds_runningBW, 'P,same', 'tW DS dyn. + t#bar{t} aMC + P8', 'P', 'mc')

    plot.addHisto(thedict[""],           'P,E,same{s}'.format(s = ",X0" if "equalbinsunf" in vl.varList[varName] else ""),  vl.labellegend,                   'PE', 'data')

    #plot.saveCanvas(legloc, woUnc = True)
    plot.saveCanvasv2(legloc)

    #plot.addHisto(nominal_withErrors, 'E2',     'Uncertainty',   'F')
    #plot.addHisto(thedict[""], 'P,same',vl.labellegend,'PE', 'data')
    #plot.saveCanvas(legloc)
    del plot

    plot2       = bp.beautifulUnfPlot(varName + 'uncs_particlefidbin', varName)
    plot2.doFit         = False
    plot2.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[iY]
    plot2.doPreliminary = vl.doPre
    plot2.plotspath     = inpath + "/" + iY + "/particlefidbinplots/"

    yaxismax_particlefidbinunc = 1.4
    if "yaxismax_particlefidbinunc" in vl.varList[varName]:
        yaxismax_particlefidbinunc = vl.varList[varName]["yaxismax_particlefidbinunc"]

    uncListorig, hincstat, hincsyst, hincmax = ep.drawTheRelUncPlot(nominal_withErrors, thedict, plot2, yaxismax_particlefidbinunc, doFit = False, doSym =  vl.doSym)

    if "legpos_particlefidbinunc" in vl.varList[varName]:
        unclegpos = vl.varList[varName]["legpos_particlefidbinunc"]
    else:
        unclegpos = "TR"

    plot2.saveCanvas(unclegpos)
    del plot2, nominal_withErrors, tru#, aMCatNLO, hDS
    return


#### Normalizados al ancho del bin solo (res. absolutos)
def PlotParticleBinLevelResults(thedict, inpath, iY, varName):
    print("> Now let's obtain the same plots only normalised to the bin width!!")

    savetfile = r.TFile(inpath + "/" + iY + "/" + varName + "/particlebinOutput.root", "recreate")
    for key in thedict: thedict[key].Write()
    savetfile.Close()

    statOnlyList       = [deepcopy(thedict[""]),  deepcopy(thedict[""])]

    nominal_withErrors = ep.propagateHisto(thedict, doSym = vl.doSym)
    plot               = bp.beautifulUnfPlot(varName + "_particlebin", varName)
    plot.doRatio       = True
    plot.doFit         = False
    plot.plotspath     = inpath + "/" + iY + "/particlebinplots/"
    plot.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[iY]
    plot.doPreliminary = vl.doPre

    if "yaxismax_particlebin" in vl.varList[varName]: plot.yaxisuplimit = vl.varList[varName]["yaxismax_particlebin"]

    thedict[""].SetMarkerStyle(r.kFullCircle)
    thedict[""].SetLineColor(r.kBlack)
    thedict[""].SetMarkerSize(1)
    nominal_withErrors[0].SetFillColorAlpha(r.kOrange, 1.0)
    nominal_withErrors[0].SetLineColor(0)
    nominal_withErrors[0].SetFillStyle(1001)
    statOnlyList[0].SetFillColorAlpha(r.kGray + 1, 1.0)
    statOnlyList[0].SetLineColor(0)
    statOnlyList[0].SetFillStyle(1001)

    savetfile1 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlebinOutput.root", "update")
    nom0 = deepcopy(nominal_withErrors[0].Clone("nom0"))
    nom1 = deepcopy(nominal_withErrors[1].Clone("nom1"))
    nom0.Write()
    nom1.Write()
    savetfile1.Close()

    #tex.saveLaTeXfromhisto(thedict[""], varName, path = vl.tablespath, errhisto = nominal_withErrors[0], ty = "unfolded_bin")

    if "legpos_particlebin" in vl.varList[varName]:
        legloc = vl.varList[varName]["legpos_particlebin"]
    else:
        legloc = "TR"

    thelumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[iY]
    scaleval = 1/thelumi/1000

    if not os.path.isfile(inpath + "/" + iY + "/" + varName + '/particle.root'):
        raise RuntimeError('The rootfile with the generated information does not exist.')

    tmptfile = r.TFile.Open(inpath + "/" + iY + "/" + varName + '/particle.root')
    tru                         = vl.giveMeOneComparison(tmptfile, "bb4l", scaleval, varName, part = True, normbin = True)
    twttbardr                   = vl.giveMeOneComparison(tmptfile, "twttbardr", scaleval, varName, part = True, normbin = True)
    twttbards                   = vl.giveMeOneComparison(tmptfile, "twttbards", scaleval, varName, part = True, normbin = True)
    #twttbarherwig               = vl.giveMeOneComparison(tmptfile, "twttbarherwig", scaleval, varName, part = True, normbin = True)
    twttbaramc_dr               = vl.giveMeOneComparison(tmptfile, "twttbaramc_dr", scaleval, varName, part = True, normbin = True)
    twttbaramc_dr2              = vl.giveMeOneComparison(tmptfile, "twttbaramc_dr2", scaleval, varName, part = True, normbin = True)
    twttbaramc_ds               = vl.giveMeOneComparison(tmptfile, "twttbaramc_ds", scaleval, varName, part = True, normbin = True)
    twttbaramc_ds_runningBW     = vl.giveMeOneComparison(tmptfile, "twttbaramc_ds_runningBW", scaleval, varName, part = True, normbin = True)
    twttbaramc_ds_is            = vl.giveMeOneComparison(tmptfile, "twttbaramc_ds_is", scaleval, varName, part = True, normbin = True)
    twttbaramc_ds_is_runningBW  = vl.giveMeOneComparison(tmptfile, "twttbaramc_ds_is_runningBW", scaleval, varName, part = True, normbin = True)

    tmptfile.Close(); del tmptfile


    savetfile2 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlebinOutput.root", "update")
    tru.Write()
    twttbardr.Write()
    twttbards.Write()
    #twttbarherwig.Write()
    twttbaramc_dr.Write()
    twttbaramc_dr2.Write()
    twttbaramc_ds.Write()
    twttbaramc_ds_runningBW.Write()
    twttbaramc_ds_is_runningBW.Write()
    twttbaramc_ds_is.Write()
    savetfile2.Close(); del savetfile2

    themaxs = []
    #for el in [tru, twttbardr, twttbards, twttbarherwig, twttbaramc_dr, twttbaramc_dr2, twttbaramc_ds, twttbaramc_ds_runningBW,
    for el in [tru, twttbardr, twttbards, twttbaramc_dr, twttbaramc_dr2, twttbaramc_ds, twttbaramc_ds_runningBW,
            thedict[""], nominal_withErrors[0], nominal_withErrors[1]]:
        themaxs.append(vl.getAConservativeMaximum(el))
    tmpval = max(themaxs)

    nominal_withErrors[0].SetMaximum(tmpval)
    nominal_withErrors[1].SetMaximum(tmpval)
    thedict[""].SetMaximum(tmpval)

    for iB in range(1, thedict[""].GetNbinsX() + 1):
        thedict[""].SetBinError(iB, 0.)
    
    plot.addHisto(nominal_withErrors,      'A2',     'Total unc.',                     'F', 'total')
    plot.addHisto(statOnlyList,            '2',      'Stat unc.',                      'F', "stat")
    plot.addHisto(tru,                     'P,same', 'bb4l PH + P8',                   'P', 'mc')
    plot.addHisto(twttbardr,               'P,same', 'tW DR + t#bar{t} PH + P8',       'P', 'mc')
    plot.addHisto(twttbards,               'P,same', 'tW DS + t#bar{t} PH + P8',       'P', 'mc')
    #plot.addHisto(twttbarherwig,           'P,same', 'tW DR + t#bar{t} PH + H7',       'P', 'mc')
    plot.addHisto(twttbaramc_dr,           'P,same', 'tW DR + t#bar{t} aMC + P8',      'P', 'mc')
    plot.addHisto(twttbaramc_dr2,          'P,same', 'tW DR2 + t#bar{t} aMC + P8',     'P', 'mc')
    plot.addHisto(twttbaramc_ds,           'P,same', 'tW DS + t#bar{t} aMC + P8',      'P', 'mc')
    plot.addHisto(twttbaramc_ds_runningBW, 'P,same', 'tW DS dyn. + t#bar{t} aMC + P8', 'P', 'mc')

    plot.addHisto(thedict[""],           'P,E,same{s}'.format(s = ",X0" if "equalbinsunf" in vl.varList[varName] else ""),  vl.labellegend,                   'PE', 'data')

    #plot.saveCanvas(legloc)
    plot.saveCanvasv2(legloc)

    del plot

    plot2       = bp.beautifulUnfPlot(varName + 'uncs_particlebin', varName)
    plot2.doFit         = False
    plot2.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[iY]
    plot2.doPreliminary = vl.doPre
    plot2.plotspath     = inpath + "/" + iY + "/particlebinplots/"
    plot2.doSupplementary = False


    yaxismax_particlebinunc = 1.4
    if "yaxismax_particlebinunc" in vl.varList[varName]:
        yaxismax_particlebinunc = vl.varList[varName]["yaxismax_particlebinunc"]

    uncListorig, hincstat, hincsyst, hincmax = ep.drawTheRelUncPlot(nominal_withErrors, thedict, plot2, yaxismax_particlebinunc, doFit = False, doSym =  vl.doSym)

    if "legpos_particlebinunc" in vl.varList[varName]:
        unclegpos = vl.varList[varName]["legpos_particlebinunc"]
    else:
        unclegpos = "TR"

    plot2.saveCanvas(unclegpos)
    del plot2

    savetfile3 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlebinOutput.root", "update")
    hincmax.Write()
    hincsyst.Write()
    savetfile3.Close(); del savetfile3
    return



if __name__ == "__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',      '-i',  metavar = 'inpath',     dest = "inpath",      required = False, default = "./temp/differential")
    parser.add_argument('--year',        '-y',  metavar = 'year',       dest = "year",        required = False, default = "all")
    parser.add_argument('--variable',    '-v',  metavar = 'variable',   dest = "variable",    required = False, default = "all")
    parser.add_argument('--extraArgs',   '-e',  metavar = 'extra',      dest = "extra",       required = False, default = "")
    parser.add_argument('--nthreads',    '-j',  metavar = 'nthreads',   dest = "nthreads",    required = False, default = 0, type = int)
    parser.add_argument('--pretend',     '-p',  action  = "store_true", dest = "pretend",     required = False, default = False)


    args        = parser.parse_args()
    year        = args.year
    extra       = args.extra
    nthreads    = args.nthreads
    pretend     = args.pretend
    inpath      = args.inpath
    variable    = args.variable

    #print("\n===== Unfolding procedures: Response matrices & ROOT files production =====")
    #print("> Setting binning, paths, and other details...")

    #print "\n> Drawing matrices and writing ROOT file (old one will be overwritten!)."

    #### First, find the tasks
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

        for iV in thevars:
            if any( [el in iV for el in vl.vetolist + ["Fiducial"]] ): continue
            tasks.append( (inpath, iY, iV) )

    #tasks = [ (inpath, "2016", "Lep1Lep2Jet1MET_Mt") ]

    if nthreads > 1:
        pool = Pool(nthreads)
        pool.map(NormaliseAndPlot, tasks)
        pool.close()
        pool.join()
    else:
        for tsk in tasks:
            NormaliseAndPlot(tsk)
