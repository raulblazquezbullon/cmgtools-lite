from copy import deepcopy
import ROOT as r
import warnings as wr
import os, sys, math, array, argparse
from multiprocessing import Pool

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import beautifulUnfoldingPlots as bp
import errorPropagator as ep
import getLaTeXtable as tex
import varList as vl

vl.SetUpWarnings()
r.gROOT.SetBatch(True)
verbose = False



def BibhuFunction(dv, df, dfinal, covm, varName):
    for key in dv:
        #if key == "LeadingLepPt_asimov": print key
        
        for bin in range(1, dv[key].GetNbinsX() + 1):
            goodunc = r.TMath.Sqrt( dv[key].GetBinError(bin)**2 / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**2 +
                                    dv[key].GetBinContent(bin)**2 * df[key.replace(varName, "Fiducial")].GetBinError(bin)**2 / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**4 -
                                    2 * dv[key].GetBinContent(bin) / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**3 * sum([covm.GetBinContent(bin, j) for j in range(1, dv[key].GetNbinsX() + 1)]) )
            
            dfinal[key].SetBinError(bin, goodunc)
            #if key == "LeadingLepPt_asimov":
                #print "dv[key].GetBinError(bin)**2", dv[key].GetBinError(bin)**2
                #print "df[key.replace(varName, Fiducial)].GetBinContent(bin)**2", df[key.replace(varName, "Fiducial")].GetBinContent(bin)**2
                #print "df[key.replace(varName, Fiducial)].GetBinContent(bin)**3", df[key.replace(varName, "Fiducial")].GetBinContent(bin)**3
                #print "df[key.replace(varName, Fiducial)].GetBinContent(bin)**4", df[key.replace(varName, "Fiducial")].GetBinContent(bin)**4
                #print "df[key.replace(varName, Fiducial)].GetBinError(bin)**2", df[key.replace(varName, "Fiducial")].GetBinError(bin)**2
                #print "sum([covm.GetBinContent(bin, j) for j in range(1, dv[key].GetNbinsX() + 1)])", sum([covm.GetBinContent(bin, j) for j in range(1, dv[key].GetNbinsX() + 1)])
                #print "dv[key].GetBinError(bin)**2 / df[key.replace(varName, Fiducial)].GetBinContent(bin)**2 + dv[key].GetBinContent(bin)**2 * df[key.replace(varName, Fiducial)].GetBinError(bin)**2 / df[key.replace(varName, Fiducial)].GetBinContent(bin)**4 - 2 * dv[key].GetBinContent(bin) / df[key.replace(varName, Fiducial)].GetBinContent(bin)**3 * sum([covm.GetBinContent(bin, j) for j in range(1, dv[key].GetNbinsX() + 1)])", dv[key].GetBinError(bin)**2 / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**2 + dv[key].GetBinContent(bin)**2 * df[key.replace(varName, "Fiducial")].GetBinError(bin)**2 / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**4 - 2 * dv[key].GetBinContent(bin) / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**3 * sum([covm.GetBinContent(bin, j) for j in range(1, dv[key].GetNbinsX() + 1)])
                #print "primero", dv[key].GetBinError(bin)**2 / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**2 + dv[key].GetBinContent(bin)**2 * df[key.replace(varName, "Fiducial")].GetBinError(bin)**2 / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**4
                #print "segundo", 2 * dv[key].GetBinContent(bin) / df[key.replace(varName, "Fiducial")].GetBinContent(bin)**3 * sum([covm.GetBinContent(bin, j) for j in range(1, dv[key].GetNbinsX() + 1)])
                #print goodunc, dfinal[key].GetBinContent(bin)
    return


def NormaliseAndPlot(tsk):
    inpath, iY, iV, notff = tsk

    thefict = None; dictforbin = None
    if not notff:
        thedict, dictforbin = calculateNormalisedValuesWithFF(inpath, iY, iV)
    else:
        thedict, dictforbin = calculateNormalisedValues(inpath, iY, iV)

    #particlefidpath = inpath + "/" + iY + "/particlefidplots/"
    #if not os.path.isdir(particlefidpath):
        #os.system("mkdir -p " + particlefidpath)

    #PlotParticleFidLevelResults(thedict, inpath, iY, iV, notff)

    particlefidbinpath = inpath + "/" + iY + "/particlefidbinplots/"
    if not os.path.isdir(particlefidbinpath):
        os.system("mkdir -p " + particlefidbinpath)

    PlotParticleFidBinLevelResults(thedict, inpath, iY, iV, notff)

    #particlebinpath = inpath + "/" + iY + "/particlebinplots/"
    #if not os.path.isdir(particlebinpath):
        #os.system("mkdir -p " + particlebinpath)

    #PlotParticleBinLevelResults(dictforbin, inpath, iY, iV, notff)
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

    for key,histo in dirvar.iteritems():
        fiduval = sum([histo.GetBinContent(i) for i in range(1, histo.GetNbinsX() + 1)])
        fiduunc = r.TMath.Sqrt(sum([covmat.GetBinContent(i, j) for i in range(1, covmat.GetNbinsX() + 1) for j in range(1, covmat.GetNbinsX() + 1) ]))
        htmp = r.TH1D(histo)
        for bin in range(1, htmp.GetNbinsX() + 1):
            htmp.SetBinContent(bin, fiduval)
            htmp.SetBinError(  bin, fiduunc)

        dirfid[key.replace(iV, "Fiducial")] = deepcopy(htmp.Clone(key.replace(iV, "Fiducial")))
        del htmp


    #for key in dirvar:
        #print dirvar[key], dirfid[key]
    #sys.exit()

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


def PlotParticleFidLevelResults(thedict, inpath, iY, varName, notff):
    nominal_withErrors = ep.propagateHistoAsym(thedict, doSym = vl.doSym)
    plot               = bp.beautifulUnfPlot(varName + "_particlefid", varName)
    plot.doRatio       = True
    plot.doFit         = notff
    plot.plotspath     = inpath + "/" + iY + "/particlefidplots/"
    plot.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    plot.doPreliminary = vl.doPre

    thedict[""].SetMarkerStyle(r.kFullCircle)
    thedict[""].SetLineColor(r.kBlack)
    nominal_withErrors[0].SetFillColorAlpha(r.kBlue, 0.35)
    nominal_withErrors[0].SetLineColor(0)
    nominal_withErrors[0].SetFillStyle(1001)

    savetfile2 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlefidOutput.root", "update")
    nom0 = deepcopy(nominal_withErrors[0].Clone("nom0"))
    nom1 = deepcopy(nominal_withErrors[1].Clone("nom1"))
    nom0.Write()
    nom1.Write()
    savetfile2.Close(); del nom0,nom1,savetfile2

    #############################
    #print "\nLOS RESULTAOS NORMALIZAOS A SECCION EF. FID. - {uno} - {dos}".format(uno = "DATOS", dos = varName)
    #for bin in range(1, nominal_withErrors[0].GetNbinsX() + 1):
        #print "Bin", bin, "(abs.): (", round(thedict[""].GetBinContent(bin), 4), "+", round(nominal_withErrors[0].GetBinError(bin), 4), "-", round(nominal_withErrors[1].GetBinError(bin), 4), ") pb"
        #print "Bin", bin, "(rel.): (", round(thedict[""].GetBinContent(bin), 4), "+", round(nominal_withErrors[0].GetBinError(bin)/thedict[""].GetBinContent(bin)*100, 4), "-", round(nominal_withErrors[1].GetBinError(bin)/thedict[""].GetBinContent(bin)*100, 4), ") pb\n"
    #print "\n"
    #############################

    #tex.saveLaTeXfromhisto(thedict[""], varName, path = vl.tablespath, errhisto = nominal_withErrors[0], ty = "unfolded_norm")

    if "legpos_particlefid" in vl.varList[varName]:
        legloc = vl.varList[varName]["legpos_particlefid"]
    else:
        legloc = "TR"

    yaxismax_particlefid = 1.4
    if "yaxismax_particlefid" in vl.varList[varName]:
        yaxismax_particlefid = vl.varList[varName]["yaxismax_particlefid"]
    else:
        yaxismax_particlefid = 1.4


    thelumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    scaleval = 1/thelumi/1000

    if not os.path.isfile(inpath + "/" + iY + "/" + varName + '/particle.root'):
        raise RuntimeError('The rootfile with the generated information does not exist.')
    tmptfile = r.TFile.Open(inpath + "/" + iY + "/" + varName + '/particle.root')
    tru = deepcopy(tmptfile.Get('x_tw').Clone('tru'))
    tru.SetLineWidth(2)
    tru.SetLineColor(bp.colorMap[0])
    tru.SetMarkerSize(0)
    tru.Scale(scaleval)

    tmptfile11 = r.TFile.Open(inpath + "/" + iY + '/Fiducial/particle.root')
    htmp = deepcopy(tru.Clone("htmp"))
    for bin in range(1, tru.GetNbinsX() + 1):
        htmp.SetBinContent(bin, tmptfile11.Get('x_tw').GetBinContent(1) * scaleval)
        htmp.SetBinError(bin,   tmptfile11.Get('x_tw').GetBinError(1) * scaleval)
    tru.Divide(htmp)
    tmptfile.Close(); tmptfile11.Close(); del tmptfile, tmptfile11, htmp

    #if not os.path.isfile('temp/{var}_/ClosureTest_aMCatNLO_{var}.root'.format(var = varName)):
        #raise RuntimeError('The rootfile with the generated information from an aMCatNLO sample does not exist.')
    #tmptfile2 = r.TFile.Open('temp/{var}_/ClosureTest_aMCatNLO_{var}.root'.format(var = varName))
    #aMCatNLO = deepcopy(tmptfile2.Get('tW').Clone('aMCatNLO'))
    #aMCatNLO.SetLineWidth(2)
    #aMCatNLO.SetLineColor(r.kAzure)
    #aMCatNLO.SetLineStyle(2)
    #tmptfile22 = r.TFile.Open('temp/Fiducial_/ClosureTest_aMCatNLO_Fiducial.root')
    #htmp   = r.TH1F(aMCatNLO)
    #for bin in range(1, tru.GetNbinsX() + 1):
        #htmp.SetBinContent(bin, tmptfile22.Get('tW').GetBinContent(1))
        #htmp.SetBinError(bin, tmptfile22.Get('tW').GetBinError(1))
    #aMCatNLO.Divide(htmp)
    #tmptfile2.Close(); tmptfile22.Close(); del tmptfile2, tmptfile22, htmp

    #if not os.path.isfile('temp/{var}_/ClosureTest_DS_{var}.root'.format(var = varName)):
        #raise RuntimeError('The rootfile with the generated information with the DS variation does not exist.')
    #tmptfile3 = r.TFile.Open('temp/{var}_/ClosureTest_DS_{var}.root'.format(var = varName))
    #hDS = deepcopy(tmptfile3.Get('tW').Clone('hDS'))
    #hDS.SetLineWidth(2)
    #hDS.SetLineColor(r.kGreen)
    #tmptfile33 = r.TFile.Open('temp/Fiducial_/ClosureTest_DS_Fiducial.root')
    #htmp   = r.TH1F(hDS)
    #for bin in range(1, tru.GetNbinsX() + 1):
        #htmp.SetBinContent(bin, tmptfile33.Get('tW').GetBinContent(1))
        #htmp.SetBinError(bin, tmptfile33.Get('tW').GetBinError(1))
    #hDS.Divide(htmp)
    #tmptfile3.Close(); tmptfile33.Close(); del tmptfile3, tmptfile33, htmp


    savetfile2 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlefidOutput.root", "update")
    tru.Write()
    #aMCatNLO.Write()
    #hDS.Write()
    savetfile2.Close(); del savetfile2

    if nominal_withErrors[0].GetMaximum() <= tru.GetMaximum(): nominal_withErrors[0].SetMaximum(tru.GetMaximum())

    plot.addHisto(nominal_withErrors, 'hist',    'Uncertainty',              'F', 'unc')
    plot.addHisto(tru,                'L,same',  'tW Powheg DR + Pythia8',   'L', 'mc')
    #plot.addHisto(hDS,                'L,same',  'tW Powheg DS + Pythia8',   'L', 'mc')
    #plot.addHisto(aMCatNLO,           'L,same',  'tW aMC@NLO DR + Pythia8',  'L', 'mc')
    plot.addHisto(thedict[""],        'P,E,same', vl.labellegend,            'PEL', 'data')
    plot.saveCanvas(legloc)

    #plot.addHisto(nominal_withErrors, 'E2',     'Uncertainty',   'F')
    #plot.addHisto(thedict[""], 'P,same',vl.labellegend,'PE', 'data')
    #plot.saveCanvas(legloc)
    del plot

    plot2       = bp.beautifulUnfPlot(varName + 'uncs_particlefid', varName)
    plot2.doFit         = notff
    plot2.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    plot2.doPreliminary = vl.doPre
    plot2.plotspath = inpath + "/" + iY + "/particlefidplots/"

    yaxismax_particlefidunc = 2
    if "yaxismax_particlefidunc" in vl.varList[varName]:
        yaxismax_particlefidunc = vl.varList[varName]["yaxismax_particlefidunc"]

    uncListorig, hincstat, hincsyst, hincmax = ep.drawTheRelUncPlot(nominal_withErrors, thedict, plot2, yaxismax_particlefidunc, doFit = notff, doSym =  vl.doSym)

    if "legpos_particlefidunc" in vl.varList[varName]:
        unclegpos = vl.varList[varName]["legpos_particlefidunc"]
    else:
        unclegpos = "TR"

    plot2.saveCanvas(unclegpos)
    del plot2, nominal_withErrors, tru#, aMCatNLO, hDS
    return



#### POR BIN Y NORMALIZAOS
def PlotParticleFidBinLevelResults(thedict, inpath, iY, varName, notff):
    print "> Now let's obtain the same plots normalised but also divided by the bin's width!!"

    for key in thedict:
        thedict[key].Scale(1, "width")

    savetfile2 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlefidbinOutput.root", "recreate")
    for key in thedict: thedict[key].Write()
    savetfile2.Close(); del savetfile2

    nominal_withErrors = ep.propagateHistoAsym(thedict, doSym = vl.doSym)
    plot               = bp.beautifulUnfPlot(varName + "_particlefidbin", varName)
    plot.doRatio       = True
    plot.doFit         = notff
    plot.plotspath     = inpath + "/" + iY + "/particlefidbinplots/"
    plot.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    plot.doPreliminary = vl.doPre

    thedict[""].SetMarkerStyle(r.kFullCircle)
    thedict[""].SetLineColor(r.kBlack)
    nominal_withErrors[0].SetFillColorAlpha(r.kBlue, 0.35)
    nominal_withErrors[0].SetLineColor(0)
    nominal_withErrors[0].SetFillStyle(1001)

    if varName != "Fiducial":
        tex.saveLaTeXfromhisto(thedict[""], varName, path = inpath + "/" + iY + "/tables", errhisto = nominal_withErrors[0], ty = "particlefidbin")

    if "yaxismax_particlefidbin" in vl.varList[varName]:
        plot.yaxisuplimit = vl.varList[varName]["yaxismax_particlefidbin"]

    #############################
    #print "\nLOS RESULTAOS NORMALIZAOS A SEC. EF. FID. Y POR BIN- {uno} - {dos}".format(uno = "DATOS", dos = varName)
    #comprobasao = 0
    #for bin in range(1, nominal_withErrors[0].GetNbinsX() + 1):
        #print "Bin", bin, "(abs.): (", round(thedict[""].GetBinContent(bin), 6), "+", round(nominal_withErrors[0].GetBinError(bin), 6), "-", round(nominal_withErrors[1].GetBinError(bin), 6), ") pb"
        #print "Bin", bin, "(rel.): (", round(thedict[""].GetBinContent(bin), 6), "+", round(nominal_withErrors[0].GetBinError(bin)/thedict[""].GetBinContent(bin)*100, 6), "-", round(nominal_withErrors[1].GetBinError(bin)/thedict[""].GetBinContent(bin)*100, 6), ") pb\n"
        #comprobasao += thedict[""].GetBinContent(bin) * thedict[""].GetBinWidth(bin)
    #print "Comprobasao:", comprobasao, "\n"
    #print "Underflow:", thedict[""].GetBinContent(0)
    #print "Overflow:",  thedict[""].GetBinContent(thedict[""].GetNbinsX() + 1)
    #print "\n"
    #############################

    #tex.saveLaTeXfromhisto(thedict[""], varName, path = vl.tablespath, errhisto = nominal_withErrors[0], ty = "unfolded_binnorm")

    if "legpos_particlefidbin" in vl.varList[varName]:
        legloc = vl.varList[varName]["legpos_particlefidbin"]
    else:
        legloc = "TR"

    thelumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    scaleval = 1/thelumi/1000

    if not os.path.isfile(inpath + "/" + iY + "/" + varName + '/particle.root'):
        raise RuntimeError('The rootfile with the generated information does not exist.')
    tmptfile = r.TFile.Open(inpath + "/" + iY + "/" + varName + '/particle.root')
    tru = deepcopy(tmptfile.Get('x_tw').Clone('tru'))
    tru.SetLineWidth(2)
    tru.SetLineColor(bp.colorMap[0])
    tru.Scale(scaleval)
    tru.SetMarkerSize(0)
    htmp = deepcopy(tru.Clone("htmp"))
    fiduval = None; fiduunc = None


    if not notff:
        tmptfile11 = r.TFile.Open(inpath + "/" + iY + '/Fiducial/particle.root')
        fiduval = tmptfile11.Get('x_tw').GetBinContent(1) * scaleval
        fiduunc = tmptfile11.Get('x_tw').GetBinError(1)   * scaleval
        tmptfile11.Close(); del tmptfile11
    else:
        fiduval = sum([htmp.GetBinContent(i) for i in range(1, htmp.GetNbinsX() + 1)])
        fiduunc = r.TMath.Sqrt(sum([htmp.GetBinError(i)**2 for i in range(1, htmp.GetNbinsX() + 1)]))

    #print tru.GetBinContent(1), fiduval, fiduunc, tru.GetBinContent(1) /  (fiduval * scaleval)

    #sys.exit()
    for bin in range(1, htmp.GetNbinsX() + 1):
        htmp.SetBinContent(bin, fiduval)
        htmp.SetBinError(  bin, fiduunc)

    tru.Divide(htmp)
    tru.Scale(1, "width")
    tmptfile.Close();  del tmptfile, htmp

    #if not os.path.isfile('temp/{var}_/ClosureTest_aMCatNLO_{var}.root'.format(var = varName)):
        #raise RuntimeError('The rootfile with the generated information from an aMCatNLO sample does not exist.')
    #tmptfile2 = r.TFile.Open('temp/{var}_/ClosureTest_aMCatNLO_{var}.root'.format(var = varName))
    #aMCatNLO = deepcopy(tmptfile2.Get('tW').Clone('aMCatNLO'))
    #aMCatNLO.SetLineWidth(2)
    #aMCatNLO.SetLineColor(r.kAzure)
    #aMCatNLO.SetLineStyle(2)
    #tmptfile22 = r.TFile.Open('temp/Fiducial_/ClosureTest_aMCatNLO_Fiducial.root')
    #htmp   = r.TH1F(aMCatNLO)
    #for bin in range(1, tru.GetNbinsX() + 1):
        #htmp.SetBinContent(bin, tmptfile22.Get('tW').GetBinContent(1))
        #htmp.SetBinError(bin, tmptfile22.Get('tW').GetBinError(1))
    #aMCatNLO.Divide(htmp)
    #aMCatNLO.Scale(1, "width")
    #tmptfile2.Close(); tmptfile22.Close(); del tmptfile2, tmptfile22, htmp

    #if not os.path.isfile('temp/{var}_/ClosureTest_DS_{var}.root'.format(var = varName)):
        #raise RuntimeError('The rootfile with the generated information with the DS variation does not exist.')
    #tmptfile3 = r.TFile.Open('temp/{var}_/ClosureTest_DS_{var}.root'.format(var = varName))
    #hDS = deepcopy(tmptfile3.Get('tW').Clone('hDS'))
    #hDS.SetLineWidth(2)
    #hDS.SetLineColor(r.kGreen)
    #tmptfile33 = r.TFile.Open('temp/Fiducial_/ClosureTest_DS_Fiducial.root')
    #htmp   = r.TH1F(hDS)
    #for bin in range(1, tru.GetNbinsX() + 1):
        #htmp.SetBinContent(bin, tmptfile33.Get('tW').GetBinContent(1))
        #htmp.SetBinError(bin, tmptfile33.Get('tW').GetBinError(1))
    #hDS.Divide(htmp)
    #hDS.Scale(1, "width")
    #tmptfile3.Close(); tmptfile33.Close(); del tmptfile3, tmptfile33, htmp

    savetfile2 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlefidbinOutput.root", "update")
    tru.Write()
    #aMCatNLO.Write()
    #hDS.Write()
    savetfile2.Close()


    plot.addHisto(nominal_withErrors, 'hist',    'Uncertainty',              'F', 'unc')
    plot.addHisto(tru,                'L,same',  'tW Powheg DR + Pythia8',   'L', 'mc')
    #plot.addHisto(hDS,                'L,same',  'tW Powheg DS + Pythia8',   'L', 'mc')
    #plot.addHisto(aMCatNLO,           'L,same',  'tW aMC@NLO DR + Pythia8',  'L', 'mc')
    plot.addHisto(thedict[""],        'P,E,same{s}'.format(s = ",X0" if "equalbinsunf" in vl.varList[varName] else ""), vl.labellegend,           'PEL','data')
    plot.saveCanvas(legloc)

    #plot.addHisto(nominal_withErrors, 'E2',     'Uncertainty',   'F')
    #plot.addHisto(thedict[""], 'P,same',vl.labellegend,'PE', 'data')
    #plot.saveCanvas(legloc)
    del plot

    plot2       = bp.beautifulUnfPlot(varName + 'uncs_particlefidbin', varName)
    plot2.doFit         = notff
    plot2.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    plot2.doPreliminary = vl.doPre
    plot2.plotspath     = inpath + "/" + iY + "/particlefidbinplots/"

    yaxismax_particlefidbinunc = 1.4
    if "yaxismax_particlefidbinunc" in vl.varList[varName]:
        yaxismax_particlefidbinunc = vl.varList[varName]["yaxismax_particlefidbinunc"]

    uncListorig, hincstat, hincsyst, hincmax = ep.drawTheRelUncPlot(nominal_withErrors, thedict, plot2, yaxismax_particlefidbinunc, doFit = notff, doSym =  vl.doSym)

    if "legpos_particlefidbinunc" in vl.varList[varName]:
        unclegpos = vl.varList[varName]["legpos_particlefidbinunc"]
    else:
        unclegpos = "TR"

    plot2.saveCanvas(unclegpos)
    del plot2, nominal_withErrors, tru#, aMCatNLO, hDS
    return


def PlotParticleBinLevelResults(thedict, inpath, iY, varName, notff):
    print "> Now let's obtain the same plots only normalised to the bin width!!"

    savetfile = r.TFile(inpath + "/" + iY + "/" + varName + "/particlebinOutput.root", "recreate")
    for key in thedict: thedict[key].Write()
    savetfile.Close()

    nominal_withErrors = ep.propagateHistoAsym(thedict, doSym = vl.doSym)
    plot               = bp.beautifulUnfPlot(varName + "_particlebin", varName)
    plot.doRatio       = True
    plot.doFit         = notff
    plot.plotspath     = inpath + "/" + iY + "/particlebinplots/"
    plot.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    plot.doPreliminary = vl.doPre

    if "yaxismax_particlebin" in vl.varList[varName]: plot.yaxisuplimit = vl.varList[varName]["yaxismax_particlebin"]

    thedict[""].SetMarkerStyle(r.kFullCircle)
    thedict[""].SetLineColor(r.kBlack)
    nominal_withErrors[0].SetFillColorAlpha(r.kBlue, 0.35)
    nominal_withErrors[0].SetLineColor(0)
    nominal_withErrors[0].SetFillStyle(1001)

    savetfile1 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlebinOutput.root", "update")
    nom0 = deepcopy(nominal_withErrors[0].Clone("nom0"))
    nom1 = deepcopy(nominal_withErrors[1].Clone("nom1"))
    nom0.Write()
    nom1.Write()
    savetfile1.Close()

    #############################
    #print "\nLOS RESULTAOS NORMALIZAOS A ANCHO DEL BIN - {uno} - {dos}".format(uno = "DATOS", dos = varName)

    #comprobasao = 0
    #for bin in range(1, nominal_withErrors[0].GetNbinsX() + 1):
        #print "Bin", bin, "(abs.): (", round(thedict[""].GetBinContent(bin), 5), "+", round(nominal_withErrors[0].GetBinError(bin), 5), "-", round(nominal_withErrors[1].GetBinError(bin), 5), ") pb"
        #print "Bin", bin, "(rel.): (", round(thedict[""].GetBinContent(bin), 4), "+", round(nominal_withErrors[0].GetBinError(bin)/thedict[""].GetBinContent(bin)*100, 5), "-", round(nominal_withErrors[1].GetBinError(bin)/thedict[""].GetBinContent(bin)*100, 5), ") pb\n"
    #############################

    #tex.saveLaTeXfromhisto(thedict[""], varName, path = vl.tablespath, errhisto = nominal_withErrors[0], ty = "unfolded_bin")

    if "legpos_particlebin" in vl.varList[varName]:
        legloc = vl.varList[varName]["legpos_particlebin"]
    else:
        legloc = "TR"

    thelumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    scaleval = 1/thelumi/1000

    if not os.path.isfile(inpath + "/" + iY + "/" + varName + '/particle.root'):
        raise RuntimeError('The rootfile with the generated information does not exist.')
    tmptfile = r.TFile.Open(inpath + "/" + iY + "/" + varName + '/particle.root')
    tru = deepcopy(tmptfile.Get('x_tw').Clone('tru'))
    tru.SetLineWidth(2)
    tru.SetLineColor(bp.colorMap[0])
    tru.Scale(scaleval)
    tru.SetMarkerSize(0)
    tru.Scale(1, "width")
    tmptfile.Close(); del tmptfile

    #if not os.path.isfile('temp/{var}_/ClosureTest_aMCatNLO_{var}.root'.format(var = varName)):
        #raise RuntimeError('The rootfile with the generated information from an aMCatNLO sample does not exist.')
    #tmptfile2 = r.TFile.Open('temp/{var}_/ClosureTest_aMCatNLO_{var}.root'.format(var = varName))
    #aMCatNLO = deepcopy(tmptfile2.Get('tW').Clone('aMCatNLO'))
    #aMCatNLO.SetLineWidth(2)
    #aMCatNLO.SetLineColor(r.kAzure)
    #aMCatNLO.SetLineStyle(2)
    #aMCatNLO.Scale(1, "width")
    #tmptfile2.Close(); del tmptfile2

    #if not os.path.isfile('temp/{var}_/ClosureTest_DS_{var}.root'.format(var = varName)):
        #raise RuntimeError('The rootfile with the generated information with the DS variation does not exist.')
    #tmptfile3 = r.TFile.Open('temp/{var}_/ClosureTest_DS_{var}.root'.format(var = varName))
    #hDS = deepcopy(tmptfile3.Get('tW').Clone('hDS'))
    #hDS.SetLineWidth(2)
    #hDS.SetLineColor(r.kGreen)
    #hDS.Scale(1, "width")
    #tmptfile3.Close(); del tmptfile3


    savetfile2 = r.TFile(inpath + "/" + iY + "/" + varName + "/particlebinOutput.root", "update")
    tru.Write()
    #aMCatNLO.Write()
    #hDS.Write()
    savetfile2.Close(); del savetfile2

    if nominal_withErrors[0].GetMaximum() <= tru.GetMaximum(): nominal_withErrors[0].SetMaximum(tru.GetMaximum())

    plot.addHisto(nominal_withErrors, 'hist',   'Uncertainty',              'F', 'unc')
    plot.addHisto(tru,                'L,same', 'tW Powheg DR + Pythia8',   'L', 'mc')
    #plot.addHisto(hDS,                'L,same', 'tW Powheg DS + Pythia8',   'L', 'mc')
    #plot.addHisto(aMCatNLO,           'L,same', 'tW aMC@NLO DR + Pythia8',  'L', 'mc')
    plot.addHisto(thedict[""],            'P,E,same',vl.labellegend,          'PEL', 'data')
    plot.saveCanvas(legloc)

    #plot.addHisto(nominal_withErrors, 'E2',     'Uncertainty',   'F')
    #plot.addHisto(thedict[""], 'P,same',vl.labellegend,'PE', 'data')
    #plot.saveCanvas(legloc)

    del plot

    plot2       = bp.beautifulUnfPlot(varName + 'uncs_particlebin', varName)
    plot2.doFit         = notff
    plot2.displayedLumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    plot2.doPreliminary = vl.doPre
    plot2.plotspath     = inpath + "/" + iY + "/particlebinplots/"

    yaxismax_particlebinunc = 1.4
    if "yaxismax_particlebinunc" in vl.varList[varName]:
        yaxismax_particlebinunc = vl.varList[varName]["yaxismax_particlebinunc"]

    uncListorig, hincstat, hincsyst, hincmax = ep.drawTheRelUncPlot(nominal_withErrors, thedict, plot2, yaxismax_particlebinunc, doFit = notff, doSym =  vl.doSym)

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
    parser.add_argument('--notFiduFile', '-nf', action  = "store_true", dest = "notfidufile", required = False, default = False)


    args        = parser.parse_args()
    year        = args.year
    extra       = args.extra
    nthreads    = args.nthreads
    pretend     = args.pretend
    inpath      = args.inpath
    variable    = args.variable
    notFiduFile = args.notfidufile

    #print("\n===== Unfolding procedures: Response matrices & ROOT files production =====")
    #print("> Setting binning, paths, and other details...")

    #print "\n> Drawing matrices and writing ROOT file (old one will be overwritten!)."

    vetolist = ["plots", "Fiducial", "control", "tables"]

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
                    if any( [el in iV for el in vetolist] ): continue
                    tasks.append( (inpath, iY, iV, notFiduFile) )

    #tasks = [ (inpath, "2016", "Lep1Lep2Jet1MET_Mt") ]

    if nthreads > 1:
        pool = Pool(nthreads)
        pool.map(NormaliseAndPlot, tasks)
        pool.close()
        pool.join()
    else:
        for tsk in tasks:
            NormaliseAndPlot(tsk)
