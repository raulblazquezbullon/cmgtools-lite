import ROOT  as r
import os, sys, argparse
import warnings as wr
from array import array
from copy  import deepcopy
from multiprocessing import Pool


sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import varList as vl
import beautifulUnfoldingPlots as bp
import tdrstyle

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


def makeFit(task):
    inpath, year, varName, syst, pretend = task

    print '\n> Fitting syst.', syst, 'of the variable', varName, '\n'
    binning = vl.varList[varName]['bins_detector']
    nbins   = len(binning) - 1

    cardList = [ 'rebinhistos/forExtr_bin{idx}_{s}.txt'.format(var = varName, s = syst, idx = idx) for idx in range(nbins)]

    #if syst == '':
        #cardList = [ 'rebinhistos/forExtr_bin{idx}.txt'.format(var = varName, idx=idx) for idx in range(nbins)]
    #else:
        #raise RuntimeError("FATAL: not implemented")
        ##cardList = [ 'rebinhistos/forExtr_{sys}_{idx}.txt'.format(var = varName, sys=syst, idx=idx) for idx in range(nbins)]


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
    
    for idx in range(nbins):
        physicsModel += "--PO 'map=ch{idxp}/tw:r_tW_{idx}[1,0,10]' ".format(idxp = idx + 1, idx = idx)   #### TODO: ADD CASES WITH VARIATED NOMINAL

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

    fitoutpath = inpath + "/" + year + "/" + varName + "/sigextr_fit/fitdiagnostics_{sys}".format(sys = syst)

    if not os.path.isdir(fitoutpath):
        os.system("mkdir -p " + fitoutpath)

    combinecomm = 'combine  -M FitDiagnostics --out {outdir} {infile} --saveWorkspace -n {var}_{sys} --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --saveShapes'.format(outdir = fitoutpath, infile = inpath + "/" + year + "/" + varName + "/sigextr_fit/comb_fit_{sys}.root".format(sys = syst), var = varName, sys = syst)

    #combinecomm = 'combine  -M FitDiagnostics --out temp/{var}_{sys}/fitdiagnostics  temp/{var}_{sys}/comb_fit_{var}_{sys}.root --saveWorkspace -n {var}_{sys} --X-rtd MINIMIZER_MaxCalls=5000000'.format(var=varName,sys=syst)

    if verbose:
        print "Combine command:", combinecomm, "\n"

    #sys.exit()
    if not pretend:
        os.system(combinecomm)

    #sys.exit()
    if not os.path.isfile('higgsCombine{var}_{sys}.FitDiagnostics.mH120.root'.format(var = varName, sys = syst)):
        raise RuntimeError("FATAL: no valid higgsCombine file found.")
    else:
        os.system("mv ./higgsCombine{var}_{sys}.FitDiagnostics.mH120.root {fdir}".format(var = varName, sys = syst, fdir = fitoutpath + "/"))


    # Ahora recogemos la virutilla
    tfile     = r.TFile.Open(fitoutpath + '/fitDiagnostics{var}_{sys}.root'.format(var = varName, sys = syst))
    tfile2    = r.TFile.Open(fitoutpath + "/higgsCombine{var}_{sys}.FitDiagnostics.mH120.root".format(var = varName, sys = syst))

    fitsb     = tfile.Get('tree_fit_sb')
    fitsb.GetEntry(0)
    fitstatus = fitsb.fit_status

    if fitstatus == -1:
        raise RuntimeError('Fit of variable {var} with syst. {sys} has not converged (fit status value: {fitv})'.format(var = varName, sys = syst, fitv = fitstatus))
    elif fitstatus != 0:
        wr.warn('Fit of variable {var} with syst. {sys} has a nonzero fit status value: {fitv}'.format(var = varName, sys = syst, fitv = fitstatus), UserWarning, stacklevel=2)
    elif verbose:
        print "    - Fit status:", fitstatus
    
    fitResult = tfile.Get('fit_s')
    if verbose: fitResult.Print()
    covar     = fitResult.correlationHist('covar')

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

    #### PLOTTING
    #print '> Plotting covariance matrix'
    #c = r.TCanvas('c', '{var}_{sys} covariance matrix'.format(var = varName, sys = syst), 1200, 1200)
    #c.SetTopMargin(0.06)
    #c.SetRightMargin(0.06)
    #covar.GetXaxis().SetTitle('Free parameters of the fit')
    #covar.GetXaxis().SetLabelSize(0.01)
    #covar.GetXaxis().SetTitleSize(0.01)
    #covar.GetXaxis().SetTitleOffset(3)
    #covar.GetYaxis().SetTitle('Free parameters of the fit')
    #covar.GetYaxis().SetLabelSize(0.01)
    #covar.GetYaxis().SetTitleSize(0.01)
    #covar.GetYaxis().SetTitleOffset(3)
    #covar.SetTitle('{var}_{sys} covariance matrix'.format(var = varName, sys = syst))
    #covar.SetStats(False)
    #covar.Draw('colz')
    #if not os.path.isdir('results/covmatrices'):
        #os.system('mkdir -p results/covmatrices')
    
    #c.SaveAs('results/covmatrices/{var}_{sys}.pdf'.format(var = varName, sys = syst))
    #c.SaveAs('results/covmatrices/{var}_{sys}.png'.format(var = varName, sys = syst))
    #c.SaveAs('results/covmatrices/{var}_{sys}.root'.format(var = varName, sys = syst))
    #del c
    #tfile2.Close()
    #tfile.Close()

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


    #### SAVING
    # Put results into histos
    outHisto = r.TH1D('hFitResult_{var}_{sys}'.format(var = varName, sys = syst),
                      '', nbins, array('d', vl.varList[varName]['bins_detector']))
    errors = deepcopy(outHisto.Clone('hFitResult_forPlotting_%s_%s'%(varName,syst)))

    scaleval = 1
    #thelumi = vl.TotalLumi if year == "run2" else vl.LumiDict[int(iY)]
    #if vl.doxsec: scaleval = 1/thelumi/1000

    puresyst = syst.replace("Up", "").replace("Down", "")
    signalname = "x_tw" + "_{s}".format(s = syst) * (syst != "" and (vl.systMap[puresyst] if not isinstance(vl.systMap[puresyst], dict) else vl.systMap[puresyst]["tw"]))

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
    
    print '\n> Syst.', syst, 'of the variable', varName, 'fitted!\n'
    return [year, varName, syst, deepcopy(outHisto), errors, hCov]




def saveFinalResults(inpath, theresults):
    resultDict = {} # year - var - syst

    print "> Ordering results to store them..."
    for el in theresults:
        if el[0] not in resultDict:
            resultDict[el[0]] = {}
        if el[1] not in resultDict[el[0]]:
            resultDict[el[0]][el[1]] = {}

        resultDict[el[0]][el[1]][el[2]] = [deepcopy(el[3].Clone("data_" + el[2])), deepcopy(el[4].Clone("err_" + el[2])), deepcopy(el[5].Clone("fitcovmat_" + el[2]))]


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
            outFile.Close()

    print "> Done!"
    return


if __name__ == '__main__':
    vl.SetUpWarnings()
    r.gROOT.SetBatch(True)
    print "===== Fitting procedure with OPTIONAL syst. profiling\n"
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',    '-i', metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/differential/")
    parser.add_argument('--year',      '-y', metavar = 'year',       dest = "year",     required = False, default = "all")
    parser.add_argument('--variable',  '-v', metavar = 'variable',   dest = "variable", required = False, default = "all")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--verbose',   '-V', action  = "store_true", dest = "verbose",  required = False, default = False)


    args     = parser.parse_args()
    year     = args.year
    nthreads = args.nthreads
    pretend  = args.pretend
    inpath   = args.inpath
    variable = args.variable
    verbose  = args.verbose

    thevars  = vl.varList["Names"]["Variables"]
    theyears = ["2016", "2017", "2018", "run2"]
    
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
                    if not os.path.isdir(inpath + "/" + iY + "/" + iV + "/sigextr_fit"): continue


                    tasks.append( (inpath, iY, iV, "", pretend) )
                    for iS in vl.systMap:
                        if "_" in iS:
                            if iS.split("_")[-1].isdigit():
                                if iY not in iS.split("_")[-1]:
                                    continue
                        tasks.append( (inpath, iY, iV, iS + "Up",   pretend) )
                        tasks.append( (inpath, iY, iV, iS + "Down", pretend) )
    #for sys in vl.systMap:
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

    #sys.exit()

    if nthreads > 1:
        pool = Pool(nthreads)
        finalresults = pool.map(makeFit, tasks)
        pool.close()
        pool.join()
    else:
        for tsk in tasks:
            finalresults.append(makeFit(tsk))

    saveFinalResults(inpath, finalresults)
