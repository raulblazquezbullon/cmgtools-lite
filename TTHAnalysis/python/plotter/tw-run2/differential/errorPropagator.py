import ROOT as r
import math, sys
from copy import deepcopy
from array import array
import varList as vl
###############################################################################

def quadSum(elements):
    return math.sqrt( sum( map( lambda x : x*x, elements)))


def GetMaxUnc(nominal, uncUp, uncDown):
    return max(map(lambda x : x*x, [nominal - uncUp, nominal - uncDown]))


def GetSymUnc(nominal, uncUp, uncDown):
    return vl.mean([abs(nominal - uncUp), abs(nominal - uncDown)])**2 # Applying the AVERAGE of the uncs.
    #return max    ([abs(nominal - uncUp), abs(nominal - uncDown)])**2 # Applying the MAXIMUM of the uncs.


def propagateQuantity(nom, varDict, case = 0):
    tot = 0.
    if case == 0: ### Symmetric case
        for key in varDict:
            if 'Down' in key: continue
            if not 'Up' in key:
                raise RuntimeError('Use case is not supported yet. Syst %s is not supported'%key)

            if key.replace('Up', 'Down') in varDict:
                tot = tot + GetSymUnc(nom, varDict[key], varDict[key.replace('Up', 'Down')])
            else:
                tot = tot + (nom - varDict[key])**2

    elif case > 0:
        for key in varDict: 
            if 'Down' in key: continue
            if not 'Up' in key and key not in vl.varList['Names']['colorSysts']:
                raise RuntimeError('Use case is not supported yet. Syst %s is not supported'%key)

            if key.replace('Up','Down') in varDict:
                if (nom - varDict[key] > 0 and nom - varDict[key.replace('Up', 'Down')] > 0):
                    continue
                elif (nom - varDict[key] < 0 and nom - varDict[key.replace('Up', 'Down')] < 0):
                    tot = tot + GetMaxUnc(nom, varDict[key], varDict[key.replace('Up', 'Down')])
                    #if 'fsr' in key or 'FSR' in key or 'isr' in key or 'ISR' in key:
                        #tot = tot + GetMaxUnc(nom, varDict[key], varDict[key.replace('Up', 'Down')])/2
                    #else:
                        #tot = tot + GetMaxUnc(nom, varDict[key], varDict[key.replace('Up', 'Down')])
                else:
                    if (nom - varDict[key] < 0):
                        #if 'fsr' in key or 'FSR' in key or 'isr' in key or 'ISR' in key:
                            #tot = tot + map(lambda x : x*x, [nom - varDict[key]])[0]/2
                        #else:
                            #tot = tot + map(lambda x : x*x, [nom - varDict[key]])[0]
                        tot = tot + map(lambda x : x*x, [nom - varDict[key]])[0]
                    else:
                        #if 'fsr' in key or 'FSR' in key or 'isr' in key or 'ISR' in key:
                            #tot = tot + map(lambda x : x*x, [nom - varDict[key.replace('Up', 'Down')]])[0]/2
                        #else:
                            #tot = tot + map(lambda x : x*x, [nom - varDict[key.replace('Up', 'Down')]])[0]
                        tot = tot + map(lambda x : x*x, [nom - varDict[key.replace('Up', 'Down')]])[0]
    else:
        for key in varDict: 
            if 'Down' in key: continue
            if not 'Up' in key and key not in vl.varList['Names']['colorSysts']:
                raise RuntimeError('Use case is not supported yet. Syst %s is not supported'%key)

            if key.replace('Up','Down') in varDict:
                if (nom - varDict[key] < 0 and nom - varDict[key.replace('Up', 'Down')] < 0): 
                    continue
                elif (nom - varDict[key] > 0 and nom - varDict[key.replace('Up', 'Down')] > 0):
                    #if 'fsr' in key or 'FSR' in key or 'isr' in key or 'ISR' in key:
                        #tot = tot + GetMaxUnc(nom, varDict[key], varDict[key.replace('Up', 'Down')])/2
                    #else:
                        #tot = tot + GetMaxUnc(nom, varDict[key], varDict[key.replace('Up', 'Down')])
                    tot = tot + GetMaxUnc(nom, varDict[key], varDict[key.replace('Up', 'Down')])
                else:
                    if (nom - varDict[key] > 0):
                        #if 'fsr' in key or 'FSR' in key or 'isr' in key or 'ISR' in key:
                            #tot = tot + map(lambda x : x*x, [nom - varDict[key]])[0]/2
                        #else:
                            #tot = tot + map(lambda x : x*x, [nom - varDict[key]])[0]
                        tot = tot + map(lambda x : x*x, [nom - varDict[key]])[0]
                    else:
                        #if 'fsr' in key or 'FSR' in key or 'isr' in key or 'ISR' in key:
                            #tot = tot + map(lambda x : x*x, [nom - varDict[key.replace('Up', 'Down')]])[0]/2
                        #else:
                            #tot = tot + map(lambda x : x*x, [nom - varDict[key.replace('Up', 'Down')]])[0]
                        tot = tot + map(lambda x : x*x, [nom - varDict[key.replace('Up', 'Down')]])[0]
    return math.sqrt(tot)


def propagateHisto( nom, varDict, doEnv = False ):
    out = nom.Clone(nom.GetName() + '_unc')
    
    if doEnv:
        for bin in range(1, out.GetNbinsX() + 1):
            err     = out.GetBinError(bin)          # <== Fit unc. taken here
            cont    = out.GetBinContent(bin)
            tmpDict = dict([ (key, histo.GetBinContent(bin)) for (key, histo) in varDict.iteritems()])
            tmpunc  = 0.
            for (key, histo) in varDict.iteritems():
                if key in vl.varList['Names']['colorSysts']:
                    if tmpunc < GetMaxUnc(cont, tmpDict[key], tmpDict[key]):
                        tmpunc = GetMaxUnc(cont, tmpDict[key], tmpDict[key])
                    del tmpDict[key]
            out.SetBinError(bin, quadSum([propagateQuantity(cont, tmpDict), err, math.sqrt(tmpunc)]))
    else:
        for bin in range(1, out.GetNbinsX() + 1):
            err     = out.GetBinError(bin)          # <== Fit unc. taken here
            cont    = out.GetBinContent(bin)
            tmpDict = dict([ (key, histo.GetBinContent(bin)) for (key, histo) in varDict.iteritems()])
            out.SetBinError( bin, quadSum([propagateQuantity(cont, tmpDict), err]))
    return out


def propagateHistoAsym(varDict, doSym = False):
    ### Introducimos la simetrizacion aqui porque en la otra no esta todo lo nuevo.
    outUp   = deepcopy(varDict[""].Clone(varDict[""].GetName() + 'uncUp'))
    outDown = deepcopy(varDict[""].Clone(varDict[""].GetName() + 'uncDown'))

    for bin in range(1, varDict[""].GetNbinsX() + 1):
        err     = outUp.GetBinError(bin)    # <==  Fit unc. taken here
        cont    = outUp.GetBinContent(bin)
        tmpDict = dict([(key, histo.GetBinContent(bin)) for (key, histo) in varDict.iteritems() if key != ""])

        if doSym:
            totsymunc = quadSum([propagateQuantity(cont, tmpDict, 0), err])
            outUp.SetBinError(bin, totsymunc); outDown.SetBinError(bin, totsymunc)
        else:
            outUp.SetBinError(  bin, quadSum([propagateQuantity(cont, tmpDict, +1), err]))
            outDown.SetBinError(bin, quadSum([propagateQuantity(cont, tmpDict, -1), err]))
        #print "bin", bin, "inc", totsymunc, varDict[""].GetBinContent(bin), varDict["jesUp"].GetBinContent(bin) - varDict[""].GetBinContent(bin), varDict["jesDown"].GetBinContent(bin) - varDict[""].GetBinContent(bin)
    return [outUp, outDown]


def maxRelativeError(histo):
    try:
        return max( [histo.GetBinError(bin) / histo.GetBinContent(bin) for bin in range(1, histo.GetNbinsX()+1)])
    except ZeroDivisionError:
        raise RuntimeError('There is (at least) one bin with zero contents')


def relativeErrorHist(histo):
    relErr = histo.Clone( histo.GetName() + 'relErr')
    for bin in range(1, histo.GetNbinsX()+1):
        relErr.SetBinContent(bin, histo.GetBinError(bin) / histo.GetBinContent(bin) )
        relErr.SetBinError(bin, 0)
    return relErr

def MeanUncertaintyHisto(histo):
    try:
        return vl.mean( [histo.GetBinError(bin) / histo.GetBinContent(bin) for bin in range(1, histo.GetNbinsX()+1)])
    except ZeroDivisionError:
        raise RuntimeError('There is (at least) one bin with zero contents')

def maximumHisto(histo1, histo2):
    maxHist = histo1.Clone( histo1.GetName() + 'max' ) 
    for bin in range(1, maxHist.GetNbinsX()+1):
        maxHist.SetBinContent( bin, max(histo1.GetBinContent(bin), histo2.GetBinContent(bin)))
    return maxHist


def getUncList(varDict, doFit = True, doSym = False):
    if doFit:    medDict = [('Fit',         varDict[""])]
    else:        medDict = [('Statistical', varDict[""])]

    outDict = []

    if not doSym:
        for var in varDict:
            if var == '': continue
            hist    = deepcopy(varDict[""].Clone(varDict[""].GetName() + var))
            variat  = 0.
            for bin in range(1, varDict[""].GetNbinsX() + 1):
                variat = varDict[""].GetBinContent(bin) - varDict[var].GetBinContent(bin)

                if abs(variat) >= varDict[""].GetBinContent(bin): hist.SetBinError(bin, varDict[""].GetBinContent(bin))
                else:                                             hist.SetBinError(bin, abs(variat))

            medDict.append( (var, hist) )

        medDict.sort(key = lambda x : MeanUncertaintyHisto(x[1]), reverse = True)
        #medDict.sort(key = lambda x : maxRelativeError(x[1]), reverse = True)
        #medDict.sort(key = lambda x : relativeErrorHist(x[1]).GetBinContent(1), reverse = True)

        #for el in medDict:
            #print el

        #sys.exit()

        #### NOTE: this does not support one sided variations, except from statistical ones: ALL SYST. VARS.
        #          SHOULD HAVE UP AND DOWN VARIATIONS!

        for key in medDict:
            done = False
            for el in outDict:
                if key[0].replace('Up', '').replace('Down', '') == el[0]:
                    done = True
            if done: continue

            if 'Down' in key[0]:
                for key2 in medDict:
                    if key2[0] == key[0].replace('Down','Up'):
                        hist = maximumHisto(key[1], key2[1])
                        outDict.append( (key[0].replace('Down',''), hist) )
                        break
            elif 'Up' in key[0]:
                for key2 in medDict:
                    if key2[0] == key[0].replace('Up','Down'):
                        hist = maximumHisto(key[1], key2[1])
                        outDict.append( (key[0].replace('Up', ''), hist) )
            else: # We expect only the fit unc. or statistical uncertainty to arrive here
                outDict.append( (key[0].replace('_',''), key[1]) )

    else: #### Symmetric uncertainties
        for var in varDict:
            if "Up" in var:
                hist    = deepcopy(varDict[""].Clone(varDict[""].GetName() + var.replace("Up", "")))
                variat  = 0.
                for bin in range(1, varDict[""].GetNbinsX() + 1):
                    variat = math.sqrt(GetSymUnc(varDict[""].GetBinContent(bin), varDict[var].GetBinContent(bin), varDict[var.replace("Up", "Down")].GetBinContent(bin)))

                    if abs(variat) >= varDict[""].GetBinContent(bin): hist.SetBinError(bin, varDict[""].GetBinContent(bin))
                    else:                                             hist.SetBinError(bin, abs(variat))

                    #print var, hist.GetBinContent(bin), hist.GetBinError(bin)

                medDict.append( (var.replace("Up", ""), hist) )

        medDict.sort(key = lambda x : MeanUncertaintyHisto(x[1]), reverse = True)
        #medDict.sort(key = lambda x : maxRelativeError(x[1]), reverse = True)
        #medDict.sort(key = lambda x : relativeErrorHist(x[1]).GetBinContent(1), reverse = True)

        #for el in medDict:
            #print el

        #sys.exit()

        #### NOTE: this does not support one sided variations, except from statistical ones: ALL SYST. VARS.
        #          SHOULD HAVE UP AND DOWN VARIATIONS!

        #for key in medDict:
            #done = False
            #for el in outDict:
                #if key[0].replace('Up', '').replace('Down', '') == el[0]:
                    #done = True
            #if done: continue

            #if 'Down' in key[0]:
                #for key2 in medDict:
                    #if key2[0] == key[0].replace('Down','Up'):
                        #hist = maximumHisto(key[1], key2[1])
                        #outDict.append( (key[0].replace('Down',''), hist) )
                        #break
            #elif 'Up' in key[0]:
                #for key2 in medDict:
                    #if key2[0] == key[0].replace('Up','Down'):
                        #hist = maximumHisto(key[1], key2[1])
                        #outDict.append( (key[0].replace('Up', ''), hist) )
            #else: # We expect only the fit unc. or statistical uncertainty to arrive here
                #outDict.append( (key[0].replace('_',''), key[1]) )

        outDict = medDict

    return map( lambda x : (x[0], relativeErrorHist(x[1])), outDict)


def SetTheStatsUncs(histo):
    ''' Function that sets the uncs. of the given histogram as the expecteds
    from its contents.'''
    for bin in range(1, histo.GetNbinsX() + 1):
        histo.SetBinError(bin, math.sqrt(histo.GetBinContent(bin)))
    
    return


def SetTheUncsFromHere(histo, hlist, SetStatUncs = False):
    ''' Function that returns to you a histogram with the quadratic sum
    of the uncertainties corresponding to the bin uncertainties of the 
    histograms that are given in a list, in addition to the ones from the
    given histogram.'''
    
    tmperr = 0
    for i in range(1, histo.GetNbinsX() + 1):
        if SetStatUncs: tmperr = quadSum([math.sqrt(hel.GetBinContent(bin)) for hel in hlist] + math.sqrt(histo.GetBinContent(bin)))
        else:           tmperr = quadSum([hel.GetBinError(bin) for hel in hlist] + histo.GetBinError(bin))
        
        histo.SetBinError(bin, tmperr)
    
    return


def getCovarianceFromVar(nom, var, name, year = "2016", ty = "detector", doCorr = False):
    nbins   = nom.GetXaxis().GetNbins()
    binning = array('f', vl.varList[name]['bins_detector'] if ty == "detector" else vl.varList[name]['bins_particle'])
    if ty == "detector" and vl.doxsec:
        thelumi = vl.TotalLumi if year == "run2" else vl.LumiDict[int(year)]
        scaleval = 1/thelumi/1000 if vl.doxsec else 1
        var.Scale(scaleval)
    cov     = r.TH2D(var.GetName().replace("data_", "").replace(name+"_", ''), '', nbins, binning, nbins, binning)
    for x in range(nbins):
        for y in range(nbins):
            bin = cov.GetBin(x + 1, y + 1)
            cov.SetBinContent(bin, (nom.GetBinContent(x + 1) - var.GetBinContent(x + 1)) * (nom.GetBinContent(y + 1) - var.GetBinContent(y + 1)))

    return cov


def drawTheRelUncPlot(listWithHistos, thedict, thePlot, yaxismax = "auto", doSym = False, doFit = False):
    # Calculate the order
    uncList = getUncList(thedict, doFit, doSym)

    #for el in uncList:
        #print el

    #sys.exit()
    # Calculate the total uncertainty histogram and the total systematic one
    incmax = []; incsyst = []
    maxinctot = 0
    hincmax   = deepcopy(thedict[""].Clone('hincmax'))
    hincmax.SetLineColor(r.kBlack)
    hincmax.SetLineWidth( 2 )
    hincmax.SetFillColorAlpha(r.kBlue, 0.)

    hincsyst  = deepcopy(thedict[""].Clone('hincsyst'))
    hincsyst.SetLineColor(r.kBlack)
    hincsyst.SetLineWidth( 2 )
    hincsyst.SetLineStyle( 3 )
    hincsyst.SetFillColorAlpha(r.kBlue, 0.)

    for bin in range(1, listWithHistos[0].GetNbinsX() + 1):
        if listWithHistos[1].GetBinError(bin) > listWithHistos[0].GetBinContent(bin):
            incmax.append(max([listWithHistos[0].GetBinError(bin), listWithHistos[0].GetBinContent(bin)]))
        else:
            incmax.append(max([listWithHistos[0].GetBinError(bin), listWithHistos[1].GetBinError(bin)]))

        if math.sqrt(listWithHistos[1].GetBinError(bin)**2 - thedict[""].GetBinError(bin)**2) > listWithHistos[0].GetBinContent(bin):
            incsyst.append(max([math.sqrt(listWithHistos[0].GetBinError(bin)**2 - thedict[""].GetBinError(bin)**2),
                                listWithHistos[0].GetBinContent(bin)]))
        else:
            incsyst.append(max([math.sqrt(listWithHistos[0].GetBinError(bin)**2 - thedict[""].GetBinError(bin)**2),
                                math.sqrt(listWithHistos[1].GetBinError(bin)**2 - thedict[""].GetBinError(bin)**2)]))

        hincmax.SetBinContent(bin, incmax[bin-1] / hincmax.GetBinContent(bin))
        hincmax.SetBinError(bin, 0.)

        if (hincmax.GetBinContent(bin) > maxinctot): maxinctot = hincmax.GetBinContent(bin)

        hincsyst.SetBinContent(bin, incsyst[bin-1] / hincsyst.GetBinContent(bin))
        hincsyst.SetBinError(bin, 0.)

        #print "bin:", bin, "incmax:", incmax[-1]/thedict[""].GetBinContent(bin)*100, "incsyst:", incsyst[-1]/thedict[""].GetBinContent(bin)*100, "theinc:", max([listWithHistos[0].GetBinError(bin), listWithHistos[1].GetBinError(bin)])/thedict[""].GetBinContent(bin)*100

    #sys.exit()

    # Set maximum of the y axis
    if yaxismax == "auto":
        if (maxinctot >= 0.9):
            if maxinctot >= 5:
                hincmax.GetYaxis().SetRangeUser(0, 5)
            else:
                hincmax.GetYaxis().SetRangeUser(0, maxinctot + 0.1)

        else:
            hincmax.GetYaxis().SetRangeUser(0, 0.9)
    else:
        hincmax.GetYaxis().SetRangeUser(0, yaxismax)


    # Begin drawing; first the total, systematic and statistical lines
    thePlot.addHisto(hincmax,  'hist',      'Total',      'L')
    thePlot.addHisto(hincsyst, 'hist,same', 'Systematic', 'L')

    hincstat = None
    for i in range(len(uncList)):
        if "Stat" in uncList[i][0]:
            uncList[i][1].SetLineColor(r.kBlack)
            uncList[i][1].SetLineStyle( 2 )

            hincstat = deepcopy(uncList[i][1].Clone("hincstat"))

            uncList[i][1].SetFillColorAlpha(r.kBlue, 0.)
            thePlot.addHisto(uncList[i][1], 'hist,same', "Statistical", 'L')

    # And now, the rest of the lines are up to vl.nuncs of the most dominant systematic sources
    iS = 0
    plottedsysts = 0
    while plottedsysts < vl.nuncs and plottedsysts <= len(uncList):
        if "Stat" in uncList[iS][0]:
            #print "holi", iS
            iS += 1
            continue

        if "lumi" in uncList[iS][0].lower():
            uncList[iS][1].SetLineColor(r.kBlack)
            uncList[iS][1].SetLineStyle( 4 )
        else:
            #uncList[iS][1].SetLineColor( vl.ColorMapList[iS] )
            uncList[iS][1].SetLineColor( vl.UncsColourMap[uncList[iS][0].lower()] )
            uncList[iS][1].SetLineWidth( 2 )

        uncList[iS][1].SetFillColorAlpha(r.kBlue, 0.)
        thePlot.addHisto(uncList[iS][1], 'H,same', vl.SysNameTranslator[uncList[iS][0].lower()], 'L')
        #thePlot.addHisto(uncList[iS][1], 'H,same', uncList[iS][0], 'L')
        plottedsysts += 1

        #print iS, uncList[iS][0]
        iS += 1


    return (uncList, hincstat, hincsyst, hincmax)
