import os, sys, argparse, shutil
import ROOT as r
import warnings as wr
from multiprocessing import Pool
from array import array
from copy import deepcopy

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import varList as vl
import CMS_lumi, tdrstyle

r.gROOT.SetBatch(True)
CMS_lumi.writeExtraText = 1
vl.SetUpWarnings()

markersize  = 0.8


def GetAndPlotResponseMatrix(var, key, theresponseh, theparticleh, thepath):
    particlebins = vl.varList[var]["bins_particle"]
    detectorbins = vl.varList[var]["bins_detector"]
    nparticlebins = len(particlebins)
    ndetectorbins = len(detectorbins)
    particlebins = array("d", particlebins)
    detectorbins = array("d", detectorbins)

    hGen  = r.TH2D('hGen', '', nparticlebins, particlebins, ndetectorbins, detectorbins)

    htemp = deepcopy(thresponseh.Clone("response"))

    for i in range(0, nparticlebins + 2):
        for j in range(0, ndetectorbins + 2):
            hGen.SetBinContent(i, j, theparticleh.GetBinContent(i))
            hGen.SetBinError(i, j, theparticleh.GetBinError(i))

    overlap = None
    htemp.Divide(hGen); del hGen;

    if var == "Fiducial":
        overlap = htemp.GetBinContent(1, 1)

    # Fixing the over and underflow bins to one.
    for i in range(1, nparticlebins+1):
        tmpsum = 0.
        for j in range(1, ndetectorbins+1):
            tmpsum += htemp.GetBinContent(i, j)
        htemp.SetBinContent(i, 0, 0.)
        htemp.SetBinContent(i, ndetectorbins + 1, 1 - tmpsum)
        #htemp.SetBinContent(i, ndetectorbins + 1, 0)
    for j in range(0, ndetectorbins+2):
        htemp.SetBinContent(0, j, 0.)
        htemp.SetBinContent(nparticlebins + 1, j, 0.)

    htemp.SetXTitle(vl.varList[var]['xaxis'] + " [particle level]")
    htemp.SetYTitle(vl.varList[var]['xaxis'] + " [detector level]")
    htemp.SetName("R" + var + "_" + key)

    tdrstyle.setTDRStyle()
    htemp.Scale(100)
    htemp.SetStats(False)
    r.gStyle.SetLabelFont(43, "XYZ")
    r.gStyle.SetLabelSize(22, "XYZ")
    htemp.GetYaxis().SetTitleOffset(1.4)
    htemp.GetXaxis().SetTitleOffset(1.2)
    htemp.GetXaxis().SetTitleFont(43)
    htemp.GetXaxis().SetTitleSize(22)
    htemp.GetXaxis().SetLabelFont(43)
    htemp.GetXaxis().SetLabelSize(22)
    htemp.GetYaxis().SetTitleFont(43)
    htemp.GetYaxis().SetTitleSize(22)
    htemp.GetYaxis().SetLabelFont(43)
    htemp.GetYaxis().SetLabelSize(22)
    #c = r.TCanvas('c', "", 700, 500)
    c = r.TCanvas('c', "", 600, 600)
    plot = c.GetPad(0);
    #plot.SetPad(0.0, 0.23, 1.0, 1.0);
    plot.SetTopMargin(0.0475); plot.SetRightMargin(0.1); plot.SetLeftMargin(0.12); plot.SetBottomMargin(0.1)
    if 'resptxtsize' in vl.varList[vname]: htemp.SetMarkerSize(vl.varList[vname]['resptxtsize'])
    else:                                  htemp.SetMarkerSize(markersize)
    htemp.SetMarkerColor(r.kRed)
    htemp.Draw("colz text e")
    r.gStyle.SetPaintTextFormat("4.3f")
    CMS_lumi.lumi_13TeV = ""
    #CMS_lumi.extraText  = 'Simulation Supplementary'
    CMS_lumi.extraText  = 'Simulation Preliminary'
    CMS_lumi.lumi_sqrtS = ''
    #CMS_lumi.cmsTextSize += 0.1
    CMS_lumi.CMS_lumi(r.gPad, 0, 0, 0.05)
    r.gStyle.SetLabelFont(43, "XYZ")
    r.gStyle.SetLabelSize(22, "XYZ")
    r.gPad.Update()
    c.SaveAs(thepath + "/R_" + var + "_" + key + ".png")
    c.SaveAs(thepath + "/R_" + var + "_" + key + ".eps")
    c.SaveAs(thepath + "/R_" + var + "_" + key + ".pdf")
    c.SaveAs(thepath + "/R_" + var + "_" + key + ".root")
    c.Close(); del c, plot


    c = r.TCanvas('c', "", 600, 600)
    plot = c.GetPad(0);
    plot.SetTopMargin(0.0475); plot.SetRightMargin(0.1); plot.SetLeftMargin(0.12); plot.SetBottomMargin(0.1)
    htemp.Draw("colz")
    CMS_lumi.CMS_lumi(r.gPad, 0, 0, 0.05)
    r.gStyle.SetLabelFont(43, "XYZ")
    r.gStyle.SetLabelSize(22, "XYZ")
    r.gPad.Update()
    c.SaveAs(thepath + "/Rnonumb_" + var + "_" + key + ".png")
    c.SaveAs(thepath + "/Rnonumb_" + var + "_" + key + ".eps")
    c.SaveAs(thepath + "/Rnonumb_" + var + "_" + key + ".pdf")
    c.SaveAs(thepath + "/Rnonumb_" + var + "_" + key + ".root")
    c.Close(); del c, plot
    return htemp, overlap


def GetAndPlotPuritiesAndStabilities(var, theresponseh, theparticleh, thedetectorparticleh, thepath):
    purities          = []
    stabilities       = []
    stabilities_woeff = []

    particlebins  = vl.varList[var]["bins_particle"]
    detectorbins  = vl.varList[var]["bins_detector"]
    nparticlebins = len(particlebins)
    ndetectorbins = len(detectorbins)
    particlebins  = array("d", particlebins)
    detectorbins  = array("d", detectorbins)

    for i in range(1, nparticlebins + 1):
        sumstab = 0
        for j in range(1, ndetectorbins + 1):
            sumstab += theresponseh.GetBinContent(i, j)

        ## CON EFICIENCIA DE RECONSTRUCCION
        try:
            stabilities.append(sumstab / theparticleh.GetBinContent(i))
        except ZeroDivisionError:
            stabilities.append(0)

        ## SIN EFICIENCIA DE RECONSTRUCCION
        try:
            stabilities_woeff.append(sumstab / thedetectorparticleh.GetBinContent(i))
        except ZeroDivisionError:
            stabilities_woeff.append(0)

    for j in range(1, ndetectorbins + 1):
        sumpur = 0
        for i in range(1, nparticlebins + 1):
            sumpur += theresponseh.GetBinContent(i, j)

        try:
            purities.append(sumpur / hReco1.GetBinContent(j))
        except ZeroDivisionError:
            purities.append(0)


    hStab       = r.TH1D('hStab',       '', nparticlebins, particlebins)
    hStab_woeff = r.TH1D('hStab_woeff', '', nparticlebins, particlebins)
    hPur        = r.TH1D('hPur',  '', ndetectorbins, detectorbins)
    for i in range(1, hStab.GetNbinsX() + 1):
        hStab.SetBinContent(i, stabilities[i - 1])
        hStab_woeff.SetBinContent(i, stabilities_woeff[i - 1])

    for j in range(1, hPur.GetNbinsX() + 1):
        hPur.SetBinContent(j, purities[j - 1])

    c = r.TCanvas('c', "Purities and stabilities of " + var)
    plot = c.GetPad(0);
    #plot.SetPad(0.0, 0.23, 1.0, 1.0);
    plot.SetTopMargin(0.06); plot.SetRightMargin(0.05); plot.SetLeftMargin(0.1); plot.SetBottomMargin(0.12)

    hPur.SetXTitle(vl.varList[vname]['xaxis'])
    hPur.SetStats(False)
    hPur.SetYTitle("Purities and stabilities")
    hStab.SetLineColor(r.kBlue)
    hPur.SetLineColor(r.kRed)
    hPur.SetMaximum(1.)
    hPur.SetMinimum(0.)
    #hPur.SetMinimum(0.6)
    hPur.GetXaxis().SetTitleFont(43)
    hPur.GetXaxis().SetTitleSize(22)
    hPur.GetXaxis().SetLabelFont(43)
    hPur.GetXaxis().SetLabelSize(22)
    hPur.GetXaxis().SetLabelOffset(0.007)
    hPur.GetXaxis().SetTitleOffset(1.2)
    hPur.GetYaxis().SetTitleFont(43)
    hPur.GetYaxis().SetTitleSize(22)
    hPur.GetYaxis().SetLabelFont(43)
    hPur.GetYaxis().SetLabelSize(22)
    hPur.GetYaxis().SetLabelOffset(0.007)
    hPur.GetYaxis().SetTitleOffset(1.2)
    hPur.Draw('')
    hStab.Draw('same')
    r.gPad.Update()

    textSize      = 0.035
    (x1,y1,x2,y2) = (.75, .45, .85, .65)
    l             = r.TLegend(x1, y1, x2, y2);
    l.AddEntry(hStab, 'Stability')
    l.AddEntry(hPur,  'Purity')
    l.SetTextFont(42)
    l.SetTextSize(textSize)
    l.SetBorderSize(0)
    l.SetFillColor(10)
    l.Draw()
    r.gPad.Update()



    c.SaveAs(thepath + "/PurStab_" + var + ".png")
    c.SaveAs(thepath + "/PurStab_" + var + ".pdf")
    c.SaveAs(thepath + "/PurStab_" + var + ".root")
    c.Close(); del c, hStab, plot


    c = r.TCanvas('c', "Purities and stabilities of " + var)
    plot = c.GetPad(0);
    #plot.SetPad(0.0, 0.23, 1.0, 1.0);
    plot.SetTopMargin(0.06); plot.SetRightMargin(0.05); plot.SetLeftMargin(0.1); plot.SetBottomMargin(0.12)

    hStab_woeff.SetLineColor(r.kBlue)
    hPur.Draw('')
    hStab.Draw('same')
    r.gPad.Update()

    textSize      = 0.035
    (x1,y1,x2,y2) = (.75, .45, .85, .65)
    l             = r.TLegend(x1, y1, x2, y2);
    l.AddEntry(hStab_woeff, 'Stability (w/o rec. eff.)')
    l.AddEntry(hPur,  'Purity')
    l.SetTextFont(42)
    l.SetTextSize(textSize)
    l.SetBorderSize(0)
    l.SetFillColor(10)
    l.Draw()
    r.gPad.Update()

    c.SaveAs(thepath + "/PurStabwoeff_" + var + ".png")
    c.SaveAs(thepath + "/PurStabwoeff_" + var + ".pdf")
    c.SaveAs(thepath + "/PurStabwoeff_" + var + ".root")
    c.Close(); del c, hStab_woeff, plot
    return


def GetConditionNumber(thehisto):
    matrx = r.TMatrixD( thehisto.GetYaxis().GetNbins(), thehisto.GetXaxis().GetNbins()) # rows are y, x are columns
    for i in range(thehisto.GetXaxis().GetNbins()):
        for j in range(thehisto.GetYaxis().GetNbins()):
            matrx[j][i] = thehisto.GetBinContent( thehisto.GetBin(i+1, j+1) )

    decomp = r.TDecompSVD(matrx)
    condn  = decomp.Condition()
    del matrx, decomp, prob
    return condn


def GetAndPlotNonFiducialHisto(var, theunc, thefiducialh, thepath):
    '''This function obtains the non fiducial histograms.'''
    hNonFid = deepcopy(thefiducialh.Clone("F" + var + "_" + theunc))
    hNonFid.SetXTitle("var")
    hNonFid.SetYTitle("Events not passing the fiducial sel.")

    c = r.TCanvas('c', "Fiducial histogram - " + var + "_" + theunc, 600, 600)
    hNonFid.Draw()
    r.gStyle.SetPaintTextFormat("4.1f")
    r.gPad.Update()
    c.SaveAs(thepath + "/F_" + var + "_" + theunc + ".png")
    c.SaveAs(thepath + "/F_" + var + "_" + theunc + ".pdf")
    c.SaveAs(thepath + "/F_" + var + "_" + theunc + ".root")
    c.Close(); del c
    return hNonFid


def SaveOverlap(theoverlap, thepath):
    fcn = open(thepath + "/overlaps.txt")
    out = '(detector & particle) / particle\n'
    out += str(round(overlap_overparticle, 4)) + '\n'
    fcn.write(out)
    fcn.close
    return


def SaveAllConditionNumbers(thedict, thepath):
    fcn = open(thepath + "/condnums.txt")
    out = 'Variation        Value\n'
    for key in thedict:
        out += ("Nominal" if key == "" else key) + ":\t" + str(round(thedict[key], 4)) + '\n'
    fcn.write(out)
    fcn.close
    return


def CalculateAndPlotResponseMatrices(tsk):
    inpath, iY, iV = tsk
    # 0) Preliminary.
    fParticle = r.TFile(inpath + "/" + iY + "/" + iV + "/NOMBREPARTICULA.root", "READ")
    hParticle = fParticle.Get(iV).Clone("hParticle_" + iV)
    fParticle.Close(); del fParticle

    unclist = []
    fDetector         = r.TFile(inpath + "/" + iY + "/" + iV + "/NOMBREDETECTOR.root", "READ")
    fDetectorParticle = r.TFile(inpath + "/" + iY + "/" + iV + "/NOMBREDETECTORPARTICLE.root", "READ")
    fResponse         = r.TFile(inpath + "/" + iY + "/" + iV + "/NOMBRERESPONSE.root", "READ")

    detectordict = {}; detectorparticledict = {}; responsedict = {}; condnumdict = {}
    for key in fDetector.GetListOfKeys():
        tmpnam = key.GetName()

        if "Up" not in tmpnam and "Down" not in tmpnam: # It is the nominal value!
            detectordict[""]         = deepcopy(fDetector.Get(tmpnam).Clone(""))
            detectorparticledict[""] = deepcopy(fDetectorParticle.Get(tmpnam).Clone(""))
            responsedict[""]         = deepcopy(fResponse.Get(tmpnam).Clone(""))
        else:
            tmpunc  = tmpnam.replace("x_tw_", "")

            if tmpunc not in detectordict:
                detectordict[tmpunc]         = {}
                detectorparticledict[tmpunc] = {}
                responsedict[tmpunc]         = {}

            detectordict[tmpunc]         = deepcopy(fDetector.Get(tmpnam).Clone(tmpunc))
            detectorparticledict[tmpunc] = deepcopy(fDetectorParticle.Get(tmpnam).Clone(tmpunc))
            responsedict[tmpunc]         = deepcopy(fResponse.Get(tmpnam).Clone(tmpunc))


    fDetector.Close();         del fDetector
    fDetectorParticle.Close(); del fDetectorParticle
    fResponse.Close();         del fResponse

    tmpoutpath = inpath + "/" + iY + "/" + iV + "/responseplots"

    if not os.path.isdir(tmpoutpath):
        os.system("mkdir -p " + tmpoutpath)

    foutput = r.TFile(inpath + "/" + iY + "/" + iV + "/UnfoldingInfo.root", "recreate")
    for key in detectordict:
        if key == "":
            GetAndPlotPuritiesAndStabilities(iV, responsedict[key], hParticle, detectorparticledict[key], tmpoutpath)

        hResponse, theoverlap = GetAndPlotResponseMatrix(iV, key, responsedict[key], hParticle, tmpoutpath)

        if theoverlap != None:
            SaveOverlap(theoverlap, tmpoutpath)

        condnumdict[key] = GetConditionNumber(hResponse)
        hNonFiducial     = GetAndPlotNonFiducialHisto(var, theunc, thefiducialh, tmpoutpath)

        hResponse.Write()
        hNonFiducial.Write()
    foutput.Close()

    SaveAllConditionNumbers(condnumdict, tmpoutpath)
    return



if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--production','-P', metavar = "prod",       dest = "prod",     required = True)
    parser.add_argument('--year',      '-y', metavar = 'year',       dest = "year",     required = False, default = "all")
    parser.add_argument('--variable',  '-v', metavar = 'variable',   dest = "variable", required = False, default = "all")
    parser.add_argument('--inpath',    '-i', metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/differential/cards")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',      dest = "extra",    required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)


    args     = parser.parse_args()
    prod     = args.prod
    year     = args.year
    extra    = args.extra
    nthreads = args.nthreads
    pretend  = args.pretend
    inpath   = args.inpath
    variable = args.variable

    print("\n===== Unfolding procedures: Response matrices & ROOT files production =====")
    print("> Setting binning, paths, and other details...")

    print "\n> Drawing matrices and writing ROOT file (old one will be overwritten!)."
    print "The matrices will be saved in " + str(matrixoutputpath)
    print "The plots will be drawn in " + str(plotsoutputpath)


    #### First, find the tasks
    tasks = []
    if year == "all":
        if variable == "all":
            theyears = next(os.walk(inpath))[1]
            for iY in years:
                thevars = next(os.walk(inpath + "/" + iY))[1]
                for iV in thevars:
                    tasks.append( (inpath, iY, iV) )

    pool = Pool(ncores)
    pool.map(CalculateAndPlotResponseMatrices, tasks)
    pool.close()
    pool.join()
    


#### OLD
## ---------------------------------------------------------------- BINNING IMPORTING FROM varList
#VarBins_X = []
#VarBins_Y = []

#for i in range(len(VarNames)):
    #VarBins_X.append(array('f', vl.varList[VarNames[i]]['genbinning']))
    #VarBins_Y.append(array('f', vl.varList[VarNames[i]]['recobinning']))

#xmin    = [int(round(i[0]))  for i in VarBins_X]
#xmax    = [int(round(i[-1])) for i in VarBins_Y]
#ymin    = xmin
#ymax    = xmax
#nybins  = [len(i)-1  for i in VarBins_Y]
#nxbins  = [int(i/2)  for i in nybins]  ### IMPORTANT!!!! The relation 1(gen):2(reco) in the number of bins MUST be preserved
#for i in range(len(nxbins)):
    #if nxbins[i] == 0: nxbins[i] = 1

#for i in range(nvars):
    #print("\n    - Drawing and saving the response matrices of the variable "+ VarNames[i] + " ...")
    ## Nominal response matrices
    #htemp = GetResponseMatrix([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], t3 = treeTTbar)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i], purities[i], stabilities[i])
    #htemp = GetFiducialHisto([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nybins[i], VarBins_Y[i], t3 = treeTTbar)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])

    ## JES, JER and weight-related systematics response matrices
    #for j in range(nsys):
        ##if j != 2: continue
        #htemp = GetResponseMatrix([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], SysList[j], t3 = treeTTbar)
        #htemp.Write()
        #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
        #htemp = GetFiducialHisto([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nybins[i], VarBins_Y[i], SysList[j], t3 = treeTTbar)
        #htemp.Write()
        #PrintFiducialHisto(htemp, VarNames[i])

    ## Modeling systematics response matrices
    #htemp = GetResponseMatrix(treeTW_DSUp,    treeTbarW_DSUp,       VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
    #htemp = GetFiducialHisto(treeTW_DSUp,     treeTbarW_DSUp,       VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])
    ##htemp = GetResponseMatrix(treeTW_fsrUp,   treeTbarW_fsrUp,    VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW, treeTbarW, treeTTbar], t3 = treeTTbar_fsrUp)
    #htemp = GetResponseMatrix(treeTW_fsrUp,   treeTbarW_fsrUp,    VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar_fsrUp)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
    ##htemp = GetFiducialHisto(treeTW_fsrUp,    treeTbarW_fsrUp,    VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW, treeTbarW, treeTTbar], t3 = treeTTbar_fsrUp)
    #htemp = GetFiducialHisto(treeTW_fsrUp,    treeTbarW_fsrUp,    VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar_fsrUp)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])
    ##htemp = GetResponseMatrix(treeTW_fsrDown, treeTbarW_fsrDown,  VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW, treeTbarW, treeTTbar], t3 = treeTTbar_fsrDown)
    #htemp = GetResponseMatrix(treeTW_fsrDown, treeTbarW_fsrDown,  VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar_fsrDown)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
    ##htemp = GetFiducialHisto(treeTW_fsrDown,  treeTbarW_fsrDown,  VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW, treeTbarW, treeTTbar], t3 = treeTTbar_fsrDown)
    #htemp = GetFiducialHisto(treeTW_fsrDown,  treeTbarW_fsrDown,  VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar_fsrDown)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])
    ##htemp = GetResponseMatrix(treeTW_isrDown, treeTbarW_isrDown,  VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW, treeTbarW, treeTTbar], t3 = treeTTbar_isrDown)
    #htemp = GetResponseMatrix(treeTW_isrDown, treeTbarW_isrDown,  VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar_isrDown)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
    ##htemp = GetFiducialHisto(treeTW_isrDown,  treeTbarW_isrDown,  VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW, treeTbarW, treeTTbar], t3 = treeTTbar_isrDown)
    #htemp = GetFiducialHisto(treeTW_isrDown,  treeTbarW_isrDown,  VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar_isrDown)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])
    ##htemp = GetResponseMatrix(treeTW_isrUp,   treeTbarW_isrUp,    VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW, treeTbarW, treeTTbar], t3 = treeTTbar_isrUp)
    #htemp = GetResponseMatrix(treeTW_isrUp,   treeTbarW_isrUp,    VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar_isrUp)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
    ##htemp = GetFiducialHisto(treeTW_isrUp,    treeTbarW_isrUp,    VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW, treeTbarW, treeTTbar], t3 = treeTTbar_isrUp)
    #htemp = GetFiducialHisto(treeTW_isrUp,    treeTbarW_isrUp,    VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar_isrUp)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])

    ##htemp = GetResponseMatrix(treeTW_MEUp,    treeTbarW_MEUp,     VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_MEUp)
    #htemp = GetResponseMatrix(treeTW_MEUp,    treeTbarW_MEUp,     VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
    ##htemp = GetFiducialHisto(treeTW_MEUp,     treeTbarW_MEUp,     VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_MEUp)
    #htemp = GetFiducialHisto(treeTW_MEUp,     treeTbarW_MEUp,     VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])

    ##htemp = GetResponseMatrix(treeTW_MEDown,  treeTbarW_MEDown,   VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_MEDown)
    #htemp = GetResponseMatrix(treeTW_MEDown,  treeTbarW_MEDown,   VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
    ##htemp = GetFiducialHisto(treeTW_MEDown,   treeTbarW_MEDown,   VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_MEDown)
    #htemp = GetFiducialHisto(treeTW_MEDown,   treeTbarW_MEDown,   VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])

    ## MTOP
    #htemp = GetResponseMatrix(treeTW_mtopUp,  treeTbarW_mtopUp,   VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
    #htemp = GetFiducialHisto(treeTW_mtopUp, treeTbarW_mtopUp, VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])

    #htemp = GetResponseMatrix(treeTW_mtopDown,  treeTbarW_mtopDown,   VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar)
    #htemp.Write()
    #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
    #htemp = GetFiducialHisto(treeTW_mtopDown, treeTbarW_mtopDown, VarNames[i], nybins[i], VarBins_Y[i], "modeling", [treeTW_noFully, treeTbarW_noFully, treeTTbar], t3 = treeTTbar)
    #htemp.Write()
    #PrintFiducialHisto(htemp, VarNames[i])

    #if "twttbar" in VarNames[i].lower():
        #htemp = GetResponseMatrix([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_UEDown)
        #htemp.Write()
        #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
        #htemp = GetFiducialHisto([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_UEDown)
        #htemp.Write()
        #PrintFiducialHisto(htemp, VarNames[i])

        #htemp = GetResponseMatrix([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_UEUp)
        #htemp.Write()
        #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
        #htemp = GetFiducialHisto([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_UEUp)
        #htemp.Write()
        #PrintFiducialHisto(htemp, VarNames[i])

        #htemp = GetResponseMatrix([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_erdON)
        #htemp.Write()
        #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
        #htemp = GetFiducialHisto([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_erdON)
        #htemp.Write()
        #PrintFiducialHisto(htemp, VarNames[i])

        #htemp = GetResponseMatrix([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_hDampDown)
        #htemp.Write()
        #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
        #htemp = GetFiducialHisto([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_hDampDown)
        #htemp.Write()
        #PrintFiducialHisto(htemp, VarNames[i])

        #htemp = GetResponseMatrix([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nxbins[i], VarBins_X[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_hDampUp)
        #htemp.Write()
        #PrintResponseMatrix(htemp, VarNames[i], nxbins[i], VarBins_X[i], xmin[i], xmax[i], nybins[i], VarBins_Y[i], ymin[i], ymax[i])
        #htemp = GetFiducialHisto([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[i], nybins[i], VarBins_Y[i], "modeling", t3 = treeTTbar_hDampUp)
        #htemp.Write()
        #PrintFiducialHisto(htemp, VarNames[i])



######################################################################################### lo del overlap
#GetOverlap([treeTW, treeTW_noFully], [treeTbarW, treeTbarW_noFully], VarNames[-1], nxbins[-1], VarBins_X[-1], nybins[-1], VarBins_Y[-1])

#print("> Done!")


