import ROOT  as r
import os, sys, argparse
import warnings as wr
from array import array
from copy  import deepcopy
from multiprocessing import Pool


sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import varList as vl
import beautifulUnfoldingPlots as bp
import tdrstyle, CMS_lumi

def getBinFromLabel(hist, labx, laby):
    result = None
    for i in range(1, hist.GetXaxis().GetNbins()+1):
        if not hist.GetXaxis().GetBinLabel(i) == labx: continue
        for j in range(1, hist.GetYaxis().GetNbins()+1):
            if not hist.GetYaxis().GetBinLabel(j) == laby: continue
            if result != None:
                raise RuntimeError('Bin label (%s,%s) is repeated'%(labx,laby))
            result=hist.GetBinContent( hist.GetBin(i,j) )
    if result == None:
        raise RuntimeError('No such bin label (%s, %s) in histo'%(labx,laby))
    return result


def drawCovMat(finalmat, inpath, iY, var, syst):
    #thelumi = vl.TotalLumi if iY == "run2" else vl.LumiDict[int(iY)]
    #scaleval = 1/thelumi/1000 if vl.doxsec else 1

    tdrstyle.setTDRStyle()
    finalmat.SetStats(False)
    finalmat.SetXTitle(vl.varList[var]['xaxis'])
    finalmat.SetYTitle(vl.varList[var]['xaxis'])
    finalmat.SetMarkerColor(r.kRed)
    finalmat.SetMarkerColor(r.kRed)

    if 'txtsize_covpostfit' in vl.varList[var]:
        finalmat.SetMarkerSize(vl.varList[var]['txtsize_covpostfit'])

    r.gStyle.SetPaintTextFormat("4.5f")
    r.gStyle.SetPadRightMargin(0.17)
    r.gStyle.SetPadTopMargin(0.05)
    r.gStyle.SetPadBottomMargin(0.1)
    r.gStyle.SetPadLeftMargin(0.12)
    finalmat.GetYaxis().SetTitleOffset(1.5)
    finalmat.GetXaxis().SetTitleOffset(1.1)
    finalmat.GetXaxis().SetTitleFont(43)
    finalmat.GetXaxis().SetTitleSize(22)
    finalmat.GetXaxis().SetLabelFont(43)
    finalmat.GetXaxis().SetLabelSize(22)
    finalmat.GetYaxis().SetTitleFont(43)
    finalmat.GetYaxis().SetTitleSize(22)
    finalmat.GetYaxis().SetLabelFont(43)
    finalmat.GetYaxis().SetLabelSize(22)
    r.gStyle.SetLabelFont(43, "XYZ")
    r.gStyle.SetLabelSize(22, "XYZ")

    c = r.TCanvas('c', "", 200, 10, 600, 600)

    txtanglestring = ""
    if   ('txtangle_covpostfit' in vl.varList[var]):
        txtanglestring = vl.varList[var]['txtangle_covpostfit']

    finalmat.Draw("colz text{s}".format(s = txtanglestring))
    r.gPad.Update()

    CMS_lumi.lumi_13TeV = ""
    CMS_lumi.extraText  = 'Preliminary'
    CMS_lumi.lumi_sqrtS = ''
    #CMS_lumi.cmsTextSize += 0.1
    CMS_lumi.CMS_lumi(r.gPad, 0, 0, 0.05)

    plotsoutputpath = inpath + "/" + iY + "/" + var + "/sigextr_fit/CovMatplots"
    if not os.path.isdir(plotsoutputpath):
        os.system('mkdir -p ' + plotsoutputpath)

    c.SaveAs(plotsoutputpath + "/Cov_{vr}_{s}_postfit.png" .format(vr = var, s = syst))
    c.SaveAs(plotsoutputpath + "/Cov_{vr}_{s}_postfit.pdf" .format(vr = var, s = syst))
    c.SaveAs(plotsoutputpath + "/Cov_{vr}_{s}_postfit.root".format(vr = var, s = syst))
    c.Close(); del c
    return


def drawCorrMat(finalmat, inpath, iY, var, syst):
    if verbose:
        print '    - Plotting correlation matrix...'

    c = r.TCanvas('c', '{var}_{sys} correlation matrix'.format(var = var, sys = syst), 1200, 1200)
    c.SetTopMargin(0.06)
    c.SetRightMargin(0.06)
    finalmat.GetXaxis().SetTitle('Free parameters of the fit')
    finalmat.GetXaxis().SetLabelSize(0.0275)
    finalmat.GetXaxis().SetTitleSize(0.01)
    finalmat.GetXaxis().SetTitleOffset(3)
    finalmat.GetYaxis().SetTitle('Free parameters of the fit')
    finalmat.GetYaxis().SetLabelSize(0.0275)
    finalmat.GetYaxis().SetTitleSize(0.01)
    finalmat.GetYaxis().SetTitleOffset(3)
    finalmat.SetTitle('{var}_{sys} correlation matrix'.format(var = var, sys = syst))
    finalmat.SetStats(False)
    finalmat.Draw('colz')

    outpath = inpath + "/" + iY + "/" + var + "/sigextr_fit/CorrMatplots"

    if not os.path.isdir(outpath):
        os.system('mkdir -p ' + outpath)

    c.SaveAs(outpath + '/Corr_{var}_{sys}.pdf' .format(var = var, sys = syst))
    c.SaveAs(outpath + '/Corr_{var}_{sys}.png' .format(var = var, sys = syst))
    c.SaveAs(outpath + '/Corr_{var}_{sys}.root'.format(var = var, sys = syst))
    del c
    return


def drawPreAndPostFit(thedict, inpath, iY, iV, syst, typ):
    binning = vl.varList[iV]['bins_detector']
    nbins   = len(binning) - 1

    isPost = (typ.lower() == "post")

    plotsoutputpath = inpath + "/" + iY + "/" + iV + "/sigextr_fit/" + ("PostFitplots" if isPost else "PreFitplots" )
    if not os.path.isdir(plotsoutputpath):
        os.system('mkdir -p ' + plotsoutputpath)

    for iB in range(nbins):
        plotformat  = (600, 600)
        height      = plotformat[1]
        c = r.TCanvas('c', "", plotformat[0], height)
        c.SetTopMargin(0.12*600./height)
        c.Divide(1, 2)
        c.GetPad(1).SetPad(*vl.plotlimits)
        c.GetPad(2).SetPad(*vl.ratiolimits)
        c.GetPad(1).SetTopMargin(0.08)
        c.GetPad(1).SetRightMargin(0.03)
        c.GetPad(1).SetLeftMargin(0.16)
        c.GetPad(1).SetBottomMargin(0.025)
        #c.GetPad(2).SetBottomMargin(0.3)
        c.GetPad(2).SetBottomMargin(0.35)
        c.GetPad(2).SetBottomMargin(0.375)
        c.GetPad(2).SetRightMargin(0.03)
        c.GetPad(2).SetLeftMargin(0.16)

        outStack = r.THStack("outStack", "")
        c.cd(1)
        theprocs = ["ttbar", "tw", "nonworz", "vvttv", "dy"]
        presentprocs = ["data"]
        for p in theprocs:
            if p in thedict[iB]:
                presentprocs.append(p)
                thedict[iB][p].SetFillColor(vl.ColourMapForProcesses[p])
                outStack.Add(thedict[iB][p])

        thedict[iB]["data"].SetMarkerStyle(r.kFullCircle)
        thedict[iB]["data"].SetLineColor(r.kBlack)
        thedict[iB]["data"].SetMarkerSize(1)
        outStack.Draw("histE2")
        outStack.GetHistogram().GetXaxis().SetLabelOffset(999)
        outStack.GetHistogram().GetXaxis().SetLabelSize(0)
        outStack.GetHistogram().GetXaxis().SetTitle(' ')
        outStack.Draw("histE2")
        thedict[iB]["data"].Draw("PEsame")
        r.gPad.Update()

        leg = r.TLegend(.5, .1 + 0.0435 + .18, .5+0.2,  .1)
        leg.SetTextFont(42)
        leg.SetTextSize(0.0435)
        leg.SetBorderSize(0)
        leg.SetFillColor(10)
        #leg.SetFillStyle(0); # transparent legend!
        for p in presentprocs:
            leg.AddEntry(thedict[iB][p], p, "F" if p != "data" else "P")

        leg.Draw('same')

        CMS_lumi.lumi_13TeV = "%.1f fb^{-1}" %(vl.TotalLumi if year == "run2" else vl.LumiDict[int(iY)])
        CMS_lumi.extraText  = 'Preliminary'
        CMS_lumi.lumi_sqrtS = '#sqrt{s} = 13 TeV'
        CMS_lumi.CMS_lumi(r.gPad, 4, 10, 0.05)

        c.cd(2)

        theratio = deepcopy(thedict[iB]["data"].Clone("theratio"))
        mcunc    = deepcopy(outStack.GetStack().Last().Clone('mcunc'))

        #theratio.Divide(mcunc)

        xtemp = r.Double(0.)
        ytemp = r.Double(0.)
        alert = False
        #for bin in range(1, mcunc.GetNbinsX() + 1):
        for bin in range(1, vl.nBinsForBDT + 1):
            try:
                mcunc.SetBinError(bin, mcunc.GetBinError(bin)/mcunc.GetBinContent(bin))
            except ZeroDivisionError:
                mcunc.SetBinError(bin, 0)
                alert = True
            theratio.GetPoint(bin - 1, xtemp, ytemp)
            try:
                theratio.SetPointEYhigh(bin - 1, theratio.GetErrorYhigh(bin - 1)/ytemp)
            except ZeroDivisionError:
                theratio.SetPointEYhigh(bin - 1, 0)
                alert = True
            try:
                theratio.SetPointEYlow(bin - 1,  theratio.GetErrorYlow(bin - 1)/ytemp)
            except ZeroDivisionError:
                theratio.SetPointEYlow(bin - 1,  0)
                alert = True
            try:
                theratio.SetPoint(bin - 1, xtemp, ytemp / mcunc.GetBinContent(bin))
            except ZeroDivisionError:
                theratio.SetPoint(bin - 1, xtemp, 1)
                alert = True
            mcunc.SetBinContent(bin, 1.)

        if alert:
            wr.warn("Division over zero for bin contents of fit!!!")

        # Setting options
        mcunc.SetFillColorAlpha(r.kBlue, 0.35)
        mcunc.SetLineColor(r.kBlack)
        mcunc.SetFillStyle(1001)
        mcunc.SetLineWidth(1)

        theratio.GetXaxis().SetRangeUser(mcunc.GetXaxis().GetBinLowEdge(1), mcunc.GetXaxis().GetBinUpEdge(mcunc.GetNbinsX()))

        theratio.SetMarkerStyle(r.kFullCircle)
        theratio.SetLineColor(r.kBlack)
        theratio.SetMarkerSize(1)

        mcunc.GetXaxis().SetTitle("BDT disc. (bin {b})".format(b = iB))
        mcunc.GetXaxis().SetTitleFont(43)
        mcunc.GetXaxis().SetTitleSize(22)
        mcunc.GetXaxis().SetTitleOffset(4)
        mcunc.GetXaxis().SetLabelFont(43)
        mcunc.GetXaxis().SetLabelSize(22)
        mcunc.GetXaxis().SetLabelOffset(0.007)
        mcunc.GetXaxis().SetNdivisions(510, True)

        mcunc.GetYaxis().SetRangeUser(0.5, 1.5)

        mcunc.GetYaxis().SetTitle('Data/MC')
        mcunc.GetYaxis().SetTitleFont(43)
        mcunc.GetYaxis().SetTitleSize(22)
        mcunc.GetYaxis().SetTitleOffset(2.2)
        mcunc.GetYaxis().CenterTitle(True)
        mcunc.GetYaxis().SetLabelFont(43)
        mcunc.GetYaxis().SetLabelSize(22)
        mcunc.GetYaxis().SetLabelOffset(0.007)
        mcunc.GetYaxis().SetNdivisions(505, True)

        mcunc.Draw('E2{s}'.format(s = ",X0" if "equalbinsunf" in vl.varList[iV] else ""))
        theratio.Draw('PEsame')
        #mcunc.Draw('a2')
        #theratio.Draw('P,E,same{s}'.format(s = ",X0" if "equalbinsunf" in vl.varList[iV] else ""))

        c.SaveAs(plotsoutputpath + "/{t}Fit_{vr}_{s}_{b}.png" .format(t = "Post" if isPost else "Pre", vr = iV, s = syst, b = iB))
        c.SaveAs(plotsoutputpath + "/{t}Fit_{vr}_{s}_{b}.pdf" .format(t = "Post" if isPost else "Pre", vr = iV, s = syst, b = iB))
        c.SaveAs(plotsoutputpath + "/{t}Fit_{vr}_{s}_{b}.root".format(t = "Post" if isPost else "Pre", vr = iV, s = syst, b = iB))
        c.Close(); del c
    return


def makeFit(task):
    inpath, year, varName, syst, pretend, doControl, noPlots = task

    print '\n> Fitting syst.', syst, 'of the variable', varName, 'from year', year, '\n'
    binning = vl.varList[varName]['bins_detector']
    nbins   = len(binning) - 1

    cardList = [ 'rebinhistos/forExtr_bin{idx}_{s}.txt'.format(var = varName, s = syst, idx = idx) for idx in range(nbins)]

    if doControl:
        controlpath = "../../controlReg" + vl.diffControlReg
        if not os.path.isdir(inpath + "/" + year + "/" + varName + "/sigextr_fit/" + controlpath):
            raise RuntimeError("FATAL: no valid folder found to add the control region information. Expected directory: {p}".format(p = inpath + "/" + year + "/" + varName + "/sigextr_fit/" + controlpath))

        cardList.append( "controlReg=" + controlpath + "/controlReg_{s}.txt".format(s = syst) )

    mergecomm = 'cd {path}; combineCards.py {allCards} > {outCard}; cd -'.format(allCards = ' '.join(cardList),
                                                                                 path     = inpath + "/" + year + "/" + varName + "/sigextr_fit",
                                                                                 var      = varName,
                                                                                 sys      = syst,
                                                                                 outCard  = 'datacard_{sys}.txt'.format(sys = syst))

    if verbose:
        print 'Cardlist:', cardList, "\n"
        print "Merge cards command:", mergecomm, "\n"

    if not pretend:
        if os.path.isfile(inpath + "/" + year + "/" + varName + "/sigextr_fit/datacard_{sys}.txt".format(sys = syst)):
            if verbose:
                print "    - Erasing old combined card..."
            os.system("rm " + inpath + "/" + year + "/" + varName + "/sigextr_fit/datacard_{sys}.txt".format(sys = syst))
        os.system(mergecomm)


    physicsModel = 'text2workspace.py -m 125 -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel '
    
    signalTail = ""
    coresyst   = syst.replace("Up", "").replace("Down", "")
    if syst != "":
        if isinstance(vl.ModifiedSystMap[coresyst], dict):
            if vl.ModifiedSystMap[coresyst]["tw"]:
                signalTail = "_" + syst

    for idx in range(nbins):
        #physicsModel += "--PO 'map=ch{idxp}/tw{u}:r_tW_{idx}[1,0,10]' ".format(idxp = idx + 1,
        physicsModel += "--PO 'map=ch{idxp}/tw:r_tW_{idx}[1,0,10]' ".format(idxp = idx + 1,
                                                                               idx  = idx)
                                                                               #u    = signalTail)

    physicsModel += '{infile} -o {outfile}'.format(infile  = inpath + "/" + year + "/" + varName + "/sigextr_fit/datacard_{sys}.txt".format(sys = syst),
                                                   outfile = inpath + "/" + year + "/" + varName + "/sigextr_fit/comb_fit_{sys}.root".format(sys = syst),
                                                   var     = varName,
                                                   sys     = syst)

    if verbose:
        print "Text2Workspace command:", physicsModel, "\n"

    if not pretend:
        if os.path.isfile(inpath + "/" + year + "/" + varName + "/sigextr_fit/comb_fit_{sys}.root".format(sys = syst)):
            if verbose:
                print "    - Erasing old fit result..."
            os.system("rm " + inpath + "/" + year + "/" + varName + "/sigextr_fit/comb_fit_{sys}.root".format(sys = syst))
        os.system(physicsModel)

    fitoutpath = inpath + "/" + year + "/" + varName + "/sigextr_fit/fitdiagnostics"

    #combinecomm = 'combine  -M FitDiagnostics --out {outdir} {infile} --saveWorkspace -n {y}_{var}_{sys} --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --saveShapes'.format(y = year, outdir = fitoutpath, infile = inpath + "/" + year + "/" + varName + "/sigextr_fit/comb_fit_{sys}.root".format(sys = syst), var = varName, sys = syst)
    #combinecomm = 'combine  -M FitDiagnostics --out {outdir} {infile} --saveWorkspace -n {y}_{var}_{sys} --robustHesse 1 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --saveShapes'.format(y = year, outdir = fitoutpath, infile = inpath + "/" + year + "/" + varName + "/sigextr_fit/comb_fit_{sys}.root".format(sys = syst), var = varName, sys = syst)
    combinecomm = 'combine  -M FitDiagnostics --out {outdir} {infile} --saveWorkspace -n {y}_{var}_{sys} --robustHesse 1 --robustFit 1 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --saveShapes'.format(y = year, outdir = fitoutpath, infile = inpath + "/" + year + "/" + varName + "/sigextr_fit/comb_fit_{sys}.root".format(sys = syst), var = varName, sys = syst)

    if verbose:
        print "Combine command:", combinecomm, "\n"

    #sys.exit()
    if not pretend:
        os.system(combinecomm)

    #sys.exit()
    if not os.path.isfile('higgsCombine{y}_{var}_{sys}.FitDiagnostics.mH120.root'.format(y = year, var = varName, sys = syst)):
        raise RuntimeError("FATAL: no valid higgsCombine file found for variable {v} of year {y} with the syst. {s}.".format(v = varName, y = year, s = syst))
    else:
        os.system("mv ./higgsCombine{y}_{var}_{sys}.FitDiagnostics.mH120.root {fdir}".format(y = year, var = varName, sys = syst, fdir = fitoutpath + "/"))


    # Ahora recogemos la virutilla
    if not os.path.isfile(fitoutpath + '/fitDiagnostics{y}_{var}_{sys}.root'.format(y = year, var = varName, sys = syst)):
        raise RuntimeError("FATAL: no valid fitDiagnostics file found for variable {v} of year {y} with the unc. {s}. Maybe there was a problem with the fit.\n".format(v = varName, y = year, s = syst))

    if not os.path.isfile(fitoutpath + "/higgsCombine{y}_{var}_{sys}.FitDiagnostics.mH120.root".format(y = year, var = varName, sys = syst)):
        raise RuntimeError("FATAL: no valid higgsCombine file found for variable {v} of year {y} with the unc. {s}. Maybe there was a problem with the fit, and/or moving the file to its corresponding folder.\n".format(v = varName, y = year, s = syst))

    tfile     = r.TFile.Open(fitoutpath + '/fitDiagnostics{y}_{var}_{sys}.root'.format(y = year, var = varName, sys = syst))
    tfile2    = r.TFile.Open(fitoutpath + "/higgsCombine{y}_{var}_{sys}.FitDiagnostics.mH120.root".format(y = year, var = varName, sys = syst))

    fitsb     = tfile.Get('tree_fit_sb')
    fitsb.GetEntry(0)
    fitstatus = fitsb.fit_status

    if   fitstatus == -1:
        raise RuntimeError('Fit of variable {var} with syst. {sys} has not converged (fit status value: {fitv})'.format(var = varName, sys = syst, fitv = fitstatus))
    elif fitstatus != 0:
        wr.warn('Fit of variable {var} with syst. {sys} has a nonzero fit status value: {fitv}'.format(var = varName, sys = syst, fitv = fitstatus), UserWarning, stacklevel=2)
    elif verbose:
        print "    - Fit status:", fitstatus
    
    fitResult = tfile.Get('fit_s')
    if verbose: fitResult.Print()
    corrmat     = deepcopy(fitResult.correlationHist('corrmat'))

    # Tambien necesitamos el workspace
    w       = tfile2.Get('w')
    poiList = r.RooArgList('poiList')
    for i in range(nbins):
        var = w.var('r_tW_%d'%i)
        poiList.add(var)

    cov = fitResult.reducedCovarianceMatrix(poiList)

    results = {}
    count   = 0
    for var in fitResult.floatParsFinal():
        count += 1
        results[var.GetName()] = [ var.getVal(), var.getErrorLo(), var.getErrorHi(), var.getError() ]
        if count == fitResult.floatParsFinal().getSize(): break

    #for el in results:
        #if "r_tW" not in el: continue
        #print el, "\t", round(results[el][0], 3), "\t", round(results[el][1], 4), "\t", round(results[el][2], 4), "\t", round(results[el][3], 4)

    #sys.exit()

    prefitdict  = {}; postfitdict = {}
    for iB in range(nbins):
        prefitdict[iB] = {}; postfitdict[iB] = {};
        prefitfolder  = tfile.Get('shapes_prefit/ch{b}'.format(b = iB + 1))
        postfitfolder = tfile.Get('shapes_fit_s/ch{b}' .format(b = iB + 1))
        for key in prefitfolder.GetListOfKeys():
            if "ttbar" in key.GetName():
                prefitdict[iB]["ttbar"]    = deepcopy(prefitfolder.Get(key.GetName()).Clone("ttbar"))
            if "tw" in key.GetName():
                prefitdict[iB]["tw"]       = deepcopy(prefitfolder.Get(key.GetName()).Clone("tw"))
            if "nonworz" in key.GetName():
                prefitdict[iB]["nonworz"]  = deepcopy(prefitfolder.Get(key.GetName()).Clone("nonworz"))
            if "vvttv" in key.GetName():
                prefitdict[iB]["vvttv"]    = deepcopy(prefitfolder.Get(key.GetName()).Clone("vvttv"))
            if "dy" in key.GetName():
                prefitdict[iB]["dy"]       = deepcopy(prefitfolder.Get(key.GetName()).Clone("dy"))
            if "data" in key.GetName():
                prefitdict[iB]["data"]     = deepcopy(prefitfolder.Get(key.GetName()).Clone("data"))
                postfitdict[iB]["data"]    = deepcopy(prefitfolder.Get(key.GetName()).Clone("data_"))

        for key in postfitfolder.GetListOfKeys():
            if "ttbar" in key.GetName():
                postfitdict[iB]["ttbar"]   = deepcopy(postfitfolder.Get(key.GetName()).Clone("ttbar"))
            if "tw" in key.GetName():
                postfitdict[iB]["tw"]      = deepcopy(postfitfolder.Get(key.GetName()).Clone("tw"))
            if "nonworz" in key.GetName():
                postfitdict[iB]["nonworz"] = deepcopy(postfitfolder.Get(key.GetName()).Clone("nonworz"))
            if "vvttv" in key.GetName():
                postfitdict[iB]["vvttv"]   = deepcopy(postfitfolder.Get(key.GetName()).Clone("vvttv"))
            if "dy" in key.GetName():
                postfitdict[iB]["dy"]      = deepcopy(postfitfolder.Get(key.GetName()).Clone("dy"))

    tfile2.Close(); tfile.Close()

    #### SAVING
    # Put results into histos
    outHisto = r.TH1D('hFitResult_{var}_{sys}'.format(var = varName, sys = syst),
                      '', nbins, array('d', vl.varList[varName]['bins_detector']))
    errors = deepcopy(outHisto.Clone('hFitResult_forPlotting_%s_%s'%(varName,syst)))

    scaleval = 1
    #thelumi = vl.TotalLumi if year == "run2" else vl.LumiDict[int(iY)]
    #if vl.doxsec: scaleval = 1/thelumi/1000

    puresyst = syst.replace("Up", "").replace("Down", "")
    #signalname = "x_tw" + "_{s}".format(s = syst) * (syst != "" and (vl.ModifiedSystMap[puresyst] if not isinstance(vl.ModifiedSystMap[puresyst], dict) else vl.ModifiedSystMap[puresyst]["tw"]))
    signalname = "x_tw"

    #print signalname

    for i in range(1, nbins + 1):
        card = r.TFile.Open(inpath + "/" + year + "/" + varName + "/sigextr_fit/rebinhistos/forExtr_bin{ind}.root".format(var = varName, ind = i - 1), "READ")
        tmpint = card.Get(signalname).Integral()
        card.Close()
        
        results['r_tW_%d'%(i-1)][0]  *= tmpint * scaleval
        results['r_tW_%d'%(i-1)][1]  *= tmpint * scaleval
        results['r_tW_%d'%(i-1)][2]  *= tmpint * scaleval
        results['r_tW_%d'%(i-1)][3]  *= tmpint * scaleval

        outHisto.SetBinContent(i, results['r_tW_%d'%(i-1)][0])
        outHisto.SetBinError  (i, results['r_tW_%d'%(i-1)][3])

        errors.SetBinContent(i,   results['r_tW_%d'%(i-1)][1]) # Reminder: here there are NOT symm..
        errors.SetBinError  (i,   results['r_tW_%d'%(i-1)][2])


    # Put covariance matrix into yield parametrization instead of cross section parametrization
    # Also the thing should be in a th2
    hCov    = r.TH2D('hCovar_{var}_{sys}'.format(var = varName, sys = syst), '',
                     nbins, -0.5, nbins - 0.5,
                     nbins, -0.5, nbins - 0.5)

    for i in range(1, nbins + 1):
        cardx = r.TFile.Open(inpath + "/" + year + "/" + varName + "/sigextr_fit/rebinhistos/forExtr_bin{ind}.root".format(var = varName, ind = i - 1), "READ")
        tmpintx = cardx.Get(signalname).Integral()
        cardx.Close()
        for j in range(1, nbins + 1):
            cardy = r.TFile.Open(inpath + "/" + year + "/" + varName + "/sigextr_fit/rebinhistos/forExtr_bin{ind}.root".format(var = varName, ind = j - 1), "READ")
            tmpinty = cardy.Get(signalname).Integral()
            cardy.Close()
            
            normx = tmpintx * scaleval
            normy = tmpinty * scaleval
        
            cov[i-1][j-1] = cov[i-1][j-1] * normx * normy
            hCov.SetBinContent( hCov.GetBin(i,j), cov[i-1][j-1] )
    
    #### PLOTTING
    # Old srs plotting
    #toKeep = []
    #for p in [('r_tW','tW'), ('DY','DY'), ('VVttbarV','VV+ttV'), ('ttbar','t#bar{t}')]:
        #graph = r.TGraphAsymmErrors(len(binning)-1)
        #graph.SetName(p[0])
        #for i in range(1, len(binning)):
            #if '%s_%d'%(p[0],i) not in results:
                #graph.SetPoint( i-1, (binning[i-1] + binning[i])/2, 0)
                #graph.SetPointError( i-1, (binning[i] - binning[i-1])/2, (binning[i] - binning[i-1])/2, 0, 0)
            #else:
                #graph.SetPoint( i-1, (binning[i-1] + binning[i])/2, results['%s_%d'%(p[0],i)][0])
                #graph.SetPointError( i-1, (binning[i] - binning[i-1])/2, (binning[i] - binning[i-1])/2,
                                    #-results['%s_%d'%(p[0],i)][1], results['%s_%d'%(p[0],i)][2])
        #toKeep.append( (graph, p[1]))

    #plot = bp.beautifulUnfoldingPlots('srs_{var}_{sys}'.format(var = varName, sys = syst))
    #plot.addHistoInPad( len(toKeep), toKeep[0][0], 'AP', toKeep[0][1],'')
    #plot.addTLatex(0.7,1-0.2, toKeep[0][1])
    #plot.plotspath  = "results/srs/"
    #for p in range( 1, len(toKeep)):
        #plot.addHistoInPad( p+1, toKeep[p][0], 'AP', toKeep[p][1],'')
        ##toKeep[p][0].GetYaxis().SetTitle('Post/pre')
        ##toKeep[p][0].GetYaxis().CenterTitle(True)

        #plot.addTLatex(0.7,1-1.23*float(p)/(len(toKeep)+1)-0.2, toKeep[p][1])
    #setattr(plot,'noCMS',True)
    #plot.saveCanvas('TR', '',False)

    if not noPlots:
        drawCorrMat(       corrmat,     inpath, year, varName, syst)
        drawCovMat(        hCov,        inpath, year, varName, syst)
        drawPreAndPostFit( prefitdict,  inpath, year, varName, syst, "pre")
        drawPreAndPostFit( postfitdict, inpath, year, varName, syst, "post")

    #print "\nRESULTS:"
    #for key in results: print key

    print '\n> Syst.', syst, 'of the variable', varName, 'fitted!\n'
    return [year, varName, syst, deepcopy(outHisto), errors, hCov, corrmat]




def saveFinalResults(inpath, theresults):
    resultDict = {} # year - var - syst

    print "> Ordering results to store them..."
    for el in theresults:
        if el[0] not in resultDict:
            resultDict[el[0]] = {}
        if el[1] not in resultDict[el[0]]:
            resultDict[el[0]][el[1]] = {}

        resultDict[el[0]][el[1]][el[2]] = [deepcopy(el[3].Clone("data_" + el[2])), deepcopy(el[4].Clone("err_" + el[2])), deepcopy(el[5].Clone("fitcovmat_" + el[2])), deepcopy(el[6].Clone("fitcorrmat_" + el[2]))]


    #print resultDict
    #sys.exit()
    print "> Storing results..."
    for year in resultDict:
        for var in resultDict[year]:
            outFile = r.TFile.Open(inpath + "/" + year + "/" + var + '/detectorsignal_fit.root', 'recreate')
            for syst in resultDict[year][var]:
                resultDict[year][var][syst][0].Write()
                resultDict[year][var][syst][1].Write()
                resultDict[year][var][syst][2].Write()
                resultDict[year][var][syst][3].Write()
            outFile.Close()

    print "> Done!"
    return


if __name__ == '__main__':
    vl.SetUpWarnings()
    r.gROOT.SetBatch(True)
    print "===== Fitting procedure with some uncertainty profiling\n"
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',     '-i', metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/differential/")
    parser.add_argument('--year',       '-y', metavar = 'year',       dest = "year",     required = False, default = "all")
    parser.add_argument('--variable',   '-v', metavar = 'variable',   dest = "variable", required = False, default = "all")
    parser.add_argument('--nthreads',   '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',    '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--verbose',    '-V', action  = "store_true", dest = "verbose",  required = False, default = False)
    parser.add_argument('--addControl', '-c', action  = "store_true", dest = "addctrl",  required = False, default = False)
    parser.add_argument('--noPlots',    '-np',action  = "store_true", dest = "noplots",  required = False, default = False)


    args     = parser.parse_args()
    year     = args.year
    nthreads = args.nthreads
    pretend  = args.pretend
    inpath   = args.inpath
    variable = args.variable
    verbose  = args.verbose
    addctrl  = args.addctrl
    noplots  = args.noplots


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
            if "plots" in iV or "Fiducial" in iV or "table" in iV: continue
            if not os.path.isdir(inpath + "/" + iY + "/" + iV + "/sigextr_fit"): continue

            tasks.append( (inpath, iY, iV, "", pretend, addctrl, noplots) )

            if not os.path.isdir(inpath + "/" + iY + "/" + iV + "/sigextr_fit/fitdiagnostics"):
                os.system("mkdir -p " + inpath + "/" + iY + "/" + iV + "/sigextr_fit/fitdiagnostics")

            for iS in vl.ModifiedSystMap:
                if "_" in iS:
                    if iS.split("_")[-1].isdigit():
                        if iY not in iS.split("_")[-1] and iY != "run2" and not "scales" in iS:
                            continue
                #if not "scales" in iS: continue
                tasks.append( (inpath, iY, iV, iS + "Up",   pretend, addctrl, noplots) )
                if not "scales" in iS and not "colour" in iS:
                    tasks.append( (inpath, iY, iV, iS + "Down", pretend, addctrl, noplots) )
    #for sys in vl.ModifiedSystMap:
        #tasks.append( (varName, sys) )

    #tasks.append( (varName, 'pdfUp'      ) )
    #tasks.append( (varName, 'pdfDown'    ) )
    #tasks.append( (varName, 'ttbarMEUp'  ) )
    #tasks.append( (varName, 'ttbarMEDown') )
    
    #if not os.path.isdir('results/srs'):
        #os.system('mkdir -p results/srs')

    finalresults = []

    if verbose:
        print 'Tasks:', tasks

    #for el in tasks: print el

    #sys.exit()

    if nthreads > 1:
        pool = Pool(nthreads)
        finalresults = pool.map(makeFit, tasks)
        pool.close()
        pool.join()
    else:
        for tsk in tasks:
            finalresults.append(makeFit(tsk))
            #sys.exit()

    saveFinalResults(inpath, finalresults)
