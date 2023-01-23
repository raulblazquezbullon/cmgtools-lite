# -*- coding: UTF-8 -*-.
#!/usr/bin/env python
import os, sys, enum, argparse, copy
from array import array
from multiprocessing import Pool
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
from . import varList as vl
#### Settings
friendspath  = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"
datasamples  = ["SingleMuon", "SingleElec", "DoubleMuon", "DoubleEG", "MuonEG", "LowEGJet", "HighEGJet", "EGamma"]

mcpath       = "/pool/phedex/nanoAODv6v7"
datapath     = "/pool/phedex/nanoAODv6v7"

logpath      = friendspath + "/{p}/{y}/logs/plots"

friendsscaff = "--FDs {P}/0_lumijson --Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors"

commandscaff = "python mcPlots.py --tree NanoAOD --pdir {inpath} {friends} {samplespaths} -f -l {lumi} {nth} --year {year} {ratio} --showRatio --fixRatioRange --legendColumns 1 --legendWidth 0.07 --legendFontSize 0.039 --noCms --topSpamSize 1.1 --lspam '#splitline{{#scale[1.1]{{#bf{{CMS}}}}}}{{#scale[0.9]{{#it{{Preliminary}}}}}}' --neg --showMCError -W 'MuonIDSF * MuonISOSF * ElecIDSF * ElecRECOSF * TrigSF * puWeight * bTagWeight * PrefireWeight' -L tw-run2/functions_tw.cc {mcafile} {cutsfile} {plotsfile} {extra} --AP --noStatTotLegendOnRatio --addspam '{nameregion}' --lspamPosition 0.21 .845 .35 .885 --TotalUncRatioStyle 3244 0 --noStatUncOnRatio --YTitleOffset 2.1 2.1 --CanvasSize 600 450 --TotalUncRatioColor 920 920 --addspamPosition .41 .855 .6 .895 --transparentLegend --PrincipalPadDimensions 0.00 0.25 1.00 1.00 --RatioPadDimensions 0.00 0.00 1.00 0.25 --LeftRightMargins 0.16 0.03 --ratioYLabel 'Data/MC' --labelsSize 22 --labelsFont 43 --BottomMarginRatio 0.42 --XTitleOffsetRatio 4.8 --noXErrData --printBin 'bin' --printBinUnity --noExpoShift --no-elist" #--ratioYNDiv 210 --NotDrawRatioLine

# For blind plots
commandblindscaff = "python mcPlots.py --tree NanoAOD --pdir {inpath} {friends} {samplespaths} -f -l {lumi} {nth} --year {year} {ratio} --showRatio --fixRatioRange --legendColumns 1 --legendWidth 0.07 --legendFontSize 0.032 --noCms --topSpamSize 1.1 --lspam '#splitline{{#scale[1.1]{{#bf{{CMS}}}}}}{{#scale[0.9]{{#it{{Preliminary}}}}}}' --neg --showMCError -W 'MuonIDSF * MuonISOSF * ElecIDSF * ElecRECOSF * TrigSF * puWeight * bTagWeight * PrefireWeight' -L tw-run2/functions_tw.cc {mcafile} {cutsfile} {plotsfile} {extra} --AP --noStatTotLegendOnRatio --addspam '{nameregion}' --lspamPosition 0.21 .845 .35 .885 --TotalUncRatioStyle 3244 0 --noStatUncOnRatio --YTitleOffset 2.1 2.1 --TotalUncRatioColor 920 920 --addspamPosition .41 .855 .6 .895 --transparentLegend --LeftRightMargins 0.16 0.03  --labelsSize 22 --labelsFont 43 --BottomMarginRatio 0.42 --XTitleOffsetRatio 4.8 --noXErrData --printBin 'bin' --printBinUnity --noExpoShift --no-elist" #--ratioYNDiv 210 --NotDrawRatioLine


slurmscaff   = 'sbatch {extraS} -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap "{command}"'
lumidict     = {2016 : 36.33,
                2017 : 41.53,
                2018 : 59.74}

def PythonListToString(theL):
    ret = "["
    for el in theL:
        ret += str(el)
        if el != theL[-1]:
            ret += ", "
    ret += "]"
    return ret



def doSpam(text,x1,y1,x2,y2,align=12,fill=False,textSize=0.033,_noDelete={}):
    cmsprel = r.TPaveText(x1,y1,x2,y2,"NDC");
    cmsprel.SetTextSize(textSize);
    cmsprel.SetFillColor(0);
    cmsprel.SetFillStyle(1001 if fill else 0);
    cmsprel.SetLineStyle(2);
    cmsprel.SetLineColor(0);
    cmsprel.SetTextAlign(align);
    cmsprel.SetTextFont(43);
    cmsprel.AddText(text);
    cmsprel.Draw("same");
    _noDelete[text] = cmsprel; ## so it doesn't get deleted by PyROOT
    return cmsprel

def createAdHocPlotsFile(iV, outpath):
    thetext = "{v} : {V} : {b} : IncludeUnderflow=False, MoreY=1.3, LegendCutoff=0, XTitle='{tit}'\n".format(v   = iV.lower(),
                                                                                                             V   = vl.varList[iV]["var_detector"],
                                                                                                             b   = PythonListToString(vl.varList[iV]["bins_detector"]),
                                                                                                             tit = vl.varList[iV]["xaxis"])

    thef = open(outpath + "/plots-adhoc.txt", "w")
    thef.write(thetext)
    thef.close()
    return



def plotDiffPostFitPlots(task):
    prod, year, inpath, thevar, ratiorange, extra, pretend = task

    if not os.path.isfile(inpath + "/" + str(year) + "/" + thevar + "/PreFitplots/plots-adhoc.root"):
        raise RuntimeError("FATAL: no prefit plot rootfile found for variable {v} of year {y}. Postfit plot can't be done.".format(v = thevar, y = year))

    preF = r.TFile(inpath + "/" + str(year) + "/" + thevar + "/PreFitplots/plots-adhoc.root", "READ")
    oldc = None
    for el in preF.GetListOfKeys():
        if "_canvas" in el.GetName():
            oldc = copy.deepcopy(preF.Get(el.GetName()))
    preF.Close(); del preF

    olddict = {}
    tmpel = oldc.GetPrimitive("pad1")
    #print "\nNombre:", tmpel.GetName()
    #print(type(tmpel))
    olddict[tmpel.GetName()] = {}
    for subel in tmpel.GetListOfPrimitives():
        olddict[subel.GetName().replace(thevar.lower() + "_", "")] = copy.deepcopy(subel)
        #print subel.GetName()
    print(olddict)
    #sys.exit()

    listOfProcs = [ el.GetName().replace(thevar.lower() + "_", "") for el in olddict["stack"].GetHists() ]


    #Directories with the pre or postfit results
    f = r.TFile.Open(inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/fitdiagnostics/fitDiagnostics{y}_{r}.root".format(y = year, r = thevar))

    # Change to the directory containing the prefit/postfit plots
    shapes = f.Get("shapes_fit_s")
    shapes.cd()

    #fitResult = f.Get('fit_s')
    #covMat    = copy.deepcopy(fitResult.covarianceMatrix())

    # This directory contains a list with the different channels
    dirs = shapes.GetListOfKeys()
    dirnames = []
    for dire in dirs:
        dirnames.append(dire.GetName())

    for dire in dirnames:
        #print dire
        c = r.TCanvas("canvas", "", 600, 600)
        topSpamSize     = 1.1
        c.SetTopMargin(c.GetTopMargin() * topSpamSize)
        c.Divide(1,2)

        p1 = c.GetPad(1)
        p1.SetPad(0, 0.25, 1, 1)
        p1.SetTopMargin(0.05)
        p1.SetBottomMargin(0.025)
        p1.SetLeftMargin(0.16)
        p1.SetRightMargin(0.03)

        p2 = c.GetPad(2)
        p2.SetPad(0, 0, 1, 0.25)
        p2.SetTopMargin(0.06)
        p2.SetBottomMargin(0.42)
        p2.SetLeftMargin(0.16)
        p2.SetRightMargin(0.03)

        subdir = shapes.Get(dire)
        subdir.cd()
        hstack = r.THStack()

        #We define the legend
        textSize = 0.039
        height = .20 + textSize*3
        legend = r.TLegend(.85-0.07, .9-height, .9, .91)
        legend.SetBorderSize(0)
        legend.SetFillColor(0)
        legend.SetShadowColor(0)
        legend.SetFillStyle(0)
        legend.SetTextFont(42)
        legend.SetTextSize(textSize)
        legend.SetNColumns(1)

        #TotalHisto MC
        htotal = copy.deepcopy(subdir.Get("total"))
        htotal.SetBins(len(vl.varList[thevar]['bins_detector']) - 1,
                          array('d', vl.varList[thevar]['bins_detector']))

        #for iB in range(1, htotal.GetNbinsX() + 1):
            #print htotal.GetBinContent(iB), htotal.GetBinError(iB)

        #print ""
        #print covMat

        #for i in range(1, htotal.GetNbinsX() + 15):
            #print covMat[i-1][i-1]

        # Get the data points
        gr = subdir.Get("data")
        dataNpoints = gr.GetN()
        datapointsY = gr.GetY()
        datapointsX = gr.GetX()
        uncpointsHigh = gr.GetEYhigh()
        uncpointsLow = gr.GetEYlow()
        gr.SetMarkerStyle(8)
        legend.AddEntry(gr, vl.ProcessNameTranslator.get(gr.GetName(), gr.GetName()), "lep")

        # Get the data/MC
        ratio_hist = copy.deepcopy(gr.Clone("ratiohist"))

        #print dataNpoints, datapointsX, datapointsY

        #Remove horizontal error bars
        for i in range(dataNpoints):
            if "DPhi" in thevar:
                gr.SetPointEXlow(i,0)
                gr.SetPointEXhigh(i,0)

            gr.SetPoint(i, (vl.varList[thevar]['bins_detector'][i + 1] - vl.varList[thevar]['bins_detector'][i])/2. + vl.varList[thevar]['bins_detector'][i],
                                datapointsY[i])

            ratio_hist.SetPoint(i, (vl.varList[thevar]['bins_detector'][i + 1] - vl.varList[thevar]['bins_detector'][i])/2. + vl.varList[thevar]['bins_detector'][i],
                                datapointsY[i]/htotal.GetBinContent(i+1))
            ratio_hist.SetPointEYhigh(i, uncpointsHigh[i]/htotal.GetBinContent(i+1))
            ratio_hist.SetPointEYlow(i,  uncpointsLow[i]/htotal.GetBinContent(i+1))
            #if htotal.GetBinContent(i + 1) != 0:
                #ratio_hist.SetPoint(i, (vl.varList[thevar]['bins_detector'][i + 1] - vl.varList[thevar]['bins_detector'][i])/2.,
                                    #datapointsY[i]/htotal.GetBinContent(i+1))
                #ratio_hist.SetPointEYhigh(i, uncpointsHigh[i]/htotal.GetBinContent(i+1))
                #ratio_hist.SetPointEYlow(i,  uncpointsLow[i]/htotal.GetBinContent(i+1))

        for histoName in listOfProcs:
            #print histoName
            h = copy.deepcopy(subdir.Get(histoName))
            h.GetXaxis().SetLabelSize(0)
            h.SetLineColor(1)
            h.SetLineWidth(1)
            h.SetBins(len(vl.varList[thevar]['bins_detector']) - 1,
                      array('d', vl.varList[thevar]['bins_detector']))
            h.SetFillColor(vl.ColourMapForProcesses[histoName] if "tw_" not in histoName else vl.coloursForDiffWithCombine["bkg"] if "bkg" in histoName else vl.coloursForDiffWithCombine[1 + int(histoName.replace("tw_partbin", ""))])
            legend.AddEntry(h, vl.ProcessNameTranslator.get(h.GetName(), h.GetName()), "f")
            hstack.Add(h)

        p1.cd()

        hstack.Draw("hist")
        hstack.GetXaxis().SetLabelSize(0)
        hstack.GetYaxis().SetTitleOffset(2.1)
        hstack.SetMaximum(hstack.GetMaximum() * 1.5)
        hstack.GetYaxis().SetTitle("Events / bin")
        hstack.GetYaxis().SetLabelSize(22)
        hstack.GetYaxis().SetLabelFont(43)
        hstack.GetYaxis().SetTitleSize(22)
        hstack.GetYaxis().SetTitleFont(43)
        #hstack.GetXaxis().SetRange(1, len(vl.varList[thevar]['bins_detector']) - 1)


        legend.Draw("same")
        # now draw data
        gr.GetXaxis().SetLabelSize(0)
        gr.Draw("p same")

        # now draw error bands
        htotal.SetFillStyle(3244)
        htotal.SetFillColor(r.kGray+2)
        htotal.SetMarkerStyle(0)
        htotal.SetMarkerColor(920)
        legend.AddEntry(htotal, vl.ProcessNameTranslator.get(htotal.GetName(), htotal.GetName()), "f")
        htotal.Draw("E2 same")

        # Ratio plot
        p2.cd()
        lin = r.TLine(olddict["total"].GetXaxis().GetBinLowEdge(1), 1, vl.varList[thevar]['bins_detector'][-1], 1)
        lin.SetLineWidth(2);
        lin.SetLineColor(58);


        ratio_hist.SetLineWidth(0)
        ratio_hist.SetMarkerStyle(20)
        #ratio_hist.SetMinimum(0.8)
        #ratio_hist.SetMaximum(1.2)
        ratio_hist.GetYaxis().SetLimits(0.8,1.2)
        ratio_hist.GetYaxis().SetRangeUser(0.8,1.2)

        ratio_hist.SetMarkerSize(1)

        htotalNoErr = copy.deepcopy(htotal.Clone("ratiounc"))
        htotalErr   = copy.deepcopy(htotal.Clone("ratiouncErr"))
        for i in range(1, htotalNoErr.GetNbinsX()):
            htotalNoErr.SetBinError(i, 0)

        htotalErr.Divide(htotalNoErr)
        htotalErr.SetTitle("")
        #htotalErr.SetFillColorAlpha(r.kCyan)

        ####!!!!
        htotalErr.SetBins(len(vl.varList[thevar]['bins_detector']) - 1,
                          array('d', vl.varList[thevar]['bins_detector']))

        #for i in range(1,htotalErr.GetNbinsX()+1):
        #  htotalErr.SetBins(i,dictBinsCenterRegions[dire][i-1]-0.5,dictBinsCenterRegions[dire][i-1]+0.5)
        #htotalErr.GetXaxis().SetRange(dictRangeRegions[dire][0],dictRangeRegions[dire][1])

        hAuxForAxis = r.TH1D("axis", "",
                             len(vl.varList[thevar]['bins_detector']) - 1,
                             array('d', vl.varList[thevar]['bins_detector']))
        hAuxForAxis.SetMarkerSize(0)
        hAuxForAxis.SetStats(0)
        hAuxForAxis.GetXaxis().SetLabelSize(22)
        hAuxForAxis.GetYaxis().SetLabelSize(22)
        hAuxForAxis.GetXaxis().SetLabelFont(43)
        hAuxForAxis.GetYaxis().SetLabelFont(43)
        hAuxForAxis.GetYaxis().SetTitle("Data/MC")
        hAuxForAxis.GetYaxis().SetTitleOffset(2.1)
        hAuxForAxis.GetXaxis().SetTitle(vl.varList[thevar]["xaxis"])
        hAuxForAxis.GetYaxis().SetTitleSize(22)
        hAuxForAxis.GetYaxis().SetTitleFont(43)
        hAuxForAxis.GetXaxis().SetTitleOffset(4.8)
        hAuxForAxis.GetXaxis().SetTitleSize(22)
        hAuxForAxis.GetXaxis().SetTitleFont(43)
        hAuxForAxis.GetYaxis().SetRangeUser(0.8, 1.2)
        hAuxForAxis.GetYaxis().SetNdivisions(505)
        hAuxForAxis.Draw("hist")
        htotalErr.Draw("e2 same")
        ratio_hist.Draw("pe1 same")
        lin.Draw("same L")
        p1.cd()

        doSpam('#splitline{#scale[1.1]{#bf{CMS}}}{#scale[0.9]{#it{Preliminary}}}',.21, .845, .35, .885, textSize = 22)
        doSpam("{l} fb^{{-1}} (13 TeV)".format(l = round(vl.LumiDict[year], 1) if year != "run2" else 138), 0.58, .955, .98, .995, textSize = 22)
        doSpam("e^{#pm}#mu^{#mp}+1j1b+0j_{loose}", .41, .855, .6, .895, textSize = 22)

        outpath  = inpath + "/" + str(year) + "/" + thevar + "/PostFitplots/"
        if not os.path.exists(outpath):
            os.system("mkdir -p " + outpath)

        c.SaveAs(outpath + "/" + thevar.lower() + ".C"   )
        c.SaveAs(outpath + "/" + thevar.lower() + ".root")
        c.SaveAs(outpath + "/" + thevar.lower() + ".png" )
        c.SaveAs(outpath + "/" + thevar.lower() + ".pdf" )
        c.Close()
    return



def GeneralExecutioner(task):
    prod, year, nthreads, inpath, thevar, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm = task

    if not os.path.isdir(inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards"):
        raise RuntimeError("FATAL: no bincards folder found for variable {v} of year {y}".format(v = thevar, y = year))
    
    if not os.path.isdir(inpath + "/" + str(year) + "/" + thevar + "/PreFitplots") and not pretend:
        os.system("mkdir -p " + inpath + "/" + str(year) + "/" + thevar + "/PreFitplots")
        
    createAdHocPlotsFile(thevar, inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards")
    
    if queue != "":
        if not os.path.isdir(logpath.format(y = year, p = prod)) and not pretend:
            os.system("mkdir -p " + logpath.format(y = year, p = prod))

        jobname_   = "CMGTplotterdiff_{y}_{v}".format(y = year, v = thevar)
        submitcomm = slurmscaff.format(extraS = extraslurm,
                                      nth     = nthreads,
                                      queue   = queue,
                                      jobname = jobname_,
                                      logpath = logpath.format(y = year, p = prod),
                                      command = PlottingCommand(prod, year, nthreads, inpath, thevar, ratiorange, extra, useFibre, doUncs, doBlind))
        print("Command:", submitcomm)
        if not pretend: os.system(submitcomm)
    else:
        execcomm = PlottingCommand(prod, year, nthreads, inpath, iV, ratiorange, extra, useFibre, doUncs, doBlind)
        print("Command:", execcomm)
        if not pretend: os.system(execcomm)
    return



def PlottingCommand(prod, year, nthreads, inpath, thevar, ratio, extra, useFibre, doUncs, doBlind):
    mcafile_    = inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards/mca-total.txt"
    cutsfile_   = "tw-run2/cuts-tw-1j1t_differential.txt"
    plotsfile_  = inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards/plots-adhoc.txt"

    samplespaths_ = "-P " + friendspath + "/" + prod + ("/" + year) * (year != "run2")
    if useFibre: samplespaths_ = samplespaths_.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias")

    nth_        = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_    = friendsscaff
    inpath_     = inpath + "/" + str(year) + "/" + thevar + "/PreFitplots"
    ratio_      = "--maxRatioRange " + ratio
    nameregion_ = "e^{#pm}#mu^{#mp}+1j1b+0j_{loose}"
    
    thecomm = commandscaff if not doBlind else commandblindscaff
    
    comm = thecomm.format(inpath       = inpath_,
                          friends      = friends_,
                          samplespaths = samplespaths_,
                          lumi         = lumidict[int(year)] if year != "run2" else str(lumidict[2016]) + "," + str(lumidict[2017]) + "," + str(lumidict[2018]),
                          nth          = nth_,
                          year         = year if year != "run2" else "2016,2017,2018",
                          mcafile      = mcafile_,
                          cutsfile     = cutsfile_,
                          plotsfile    = plotsfile_,
                          ratio        = ratio_,
                          extra        = ("--unc " + inpath + "/" + str(year) + "/" + thevar + "/sigextr_fit_combine/bincards/tw-uncs-adhoc.txt" ) * doUncs + extra,
                          nameregion   = nameregion_)

    return comm


def confirm(message = "Do you wish to continue?"):
    """
    Ask user to enter y(es) or n(o) (case-insensitive).
    :return: True if the answer is Y.
    :rtype: bool
    """
    answer = ""
    while answer not in ["y", "n", "yes", "no"]:
        answer = input(message + " [Y/N]\n").lower()
    return answer[0] == "y"



if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python plotterHelperForDifferential.py [options]", description = "Helper for plotting.", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--production','-P', metavar = "prod",      dest = "prod",    required = False)
    parser.add_argument('--year',      '-y', metavar = 'year',      dest = "year",    required = False, default = "2016")
    parser.add_argument('--queue',     '-q', metavar = 'queue',     dest = "queue",   required = False, default = "")
    parser.add_argument('--variable',  '-v', metavar = 'variable',  dest = "variable",required = False, default = "all")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',     dest = "extra",   required = False, default = "")
    parser.add_argument('--extraSlurmArgs','-eS',metavar='extraslurm',dest="extraslurm",required=False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',  dest = "nthreads",required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action = "store_true", dest = "pretend", required = False, default = False)
    parser.add_argument('--inpath',    '-i', metavar = 'inpath',    dest = "inpath",  required = False, default = "./temp/differential")
    parser.add_argument('--maxRatioRange', "-R", metavar = 'ratiorange', dest = "ratiorange", required = False, default = "0.8 1.2")
    parser.add_argument('--useFibre',  "-f", action = "store_true", dest = "useFibre", required = False, default = False)
    parser.add_argument('--uncertainties', "-u", action = "store_true", dest = "doUncs", required = False, default = False)
    parser.add_argument('--blind', action = "store_true", dest = "blindornot", required = False, default = False)
    parser.add_argument('--postFit', "-pF", action = "store_true", dest = "postfit", required = False, default = False)



    args     = parser.parse_args()
    prod     = args.prod
    year     = args.year
    queue    = args.queue
    extra    = args.extra
    extraslurm=args.extraslurm
    nthreads = args.nthreads
    pretend  = args.pretend
    inpath  = args.inpath
    useFibre = args.useFibre
    ratiorange = args.ratiorange
    doUncs   = args.doUncs
    variable = args.variable
    doBlind = args.blindornot
    postfit  = args.postfit



    thevars  = vl.varList["Names"]["Variables"]
    if "," in variable:
        thevars = variable.split(",")
    elif variable.lower() != "all":
        thevars = [ variable ]
        
    if doBlind and not postfit: extra += " --xp data"

    if not postfit:
        if not prod: raise RuntimeError("FATAL: no production given.")
        if queue != "":
            print("> Plotting jobs will be sent to the cluster.")
            if year == "all":
                print("   - All three years and the combination will be plotted.")
                cont = False
                if   pretend:
                    cont = True
                elif confirm("Four jobs will be sent to queue {q} with {j} requested threads to plot in each year and in the combination the variable(s). Do you want to continue?".format(q = queue, j = nthreads)):
                    cont = True

                if cont:
                    for y in ["2016", "2017", "2018", "run2"]:
                        for iV in thevars:
                            GeneralExecutioner( (prod, y, nthreads, inpath, iV, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm) )
            else:
                cont = False
                if   pretend:
                    cont = True
                elif confirm("One job will be sent to queue {q} with {j} requested threads to plot in year {y} the variable(s). Do you want to continue?".format(q = queue, j = nthreads, y = year)):
                    cont = True

                if cont:
                    for iV in thevars:
                        GeneralExecutioner( (prod, year, nthreads, inpath, iV, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm) )
        else:
            print("> Local execution chosen.")
            if year == "all":
                print("   - All three years and the combination will be plotted.")
                for y in ["2016", "2017", "2018", "run2"]:
                    for iV in thevars:
                        GeneralExecutioner( (prod, y, nthreads, inpath, iV, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm) )
            else:
                for iV in thevars:
                    GeneralExecutioner( (prod, year, nthreads, inpath, iV, ratiorange, queue, extra, pretend, useFibre, doUncs, doBlind, extraslurm) )
    else:
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

        for y in theyears:
            for iV in thevars:
                plotDiffPostFitPlots( (prod, y, inpath, iV, ratiorange, extra, pretend) )
