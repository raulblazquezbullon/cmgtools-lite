import os, sys, enum, argparse
from multiprocessing import Pool
import warnings as wr
import ROOT as r
import plot_postfit as ppf
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)


combinecomm = "combine -M FitDiagnostics --expectSignal 1 {combcard} -n {y}_{r} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 {extra} {plotsPrePost} {asimov} --cminDefaultMinimizerType Minuit &> {outfile}" #"
#combinecomm = "combine -M FitDiagnostics --expectSignal 1 {combcard} -n {y}_{r} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 {extra} {plotsPrePost} {asimov} &> {outfile} --cminDefaultMinimizerType Minuit --setParameterRanges jes_Absolute=-0.0001,0.0001[:prop_binch2_bin10=-0.0001,0.0001:mistagging_2018=-0.0001,0.0001:prop_binch2_bin1=-0.0001,0.0001:prop_binch2_bin3=-0.0001,0.0001:prop_binch3_bin3=-0.0001,0.0001:prop_binch3_bin2=-0.0001,0.0001:prop_binch3_bin1=-0.0001,0.0001:prop_binch3_bin0=-0.0001,0.0001:prop_binch3_bin7=-0.0001,0.0001:prop_binch3_bin6=-0.0001,0.0001:prop_binch3_bin5=-0.0001,0.0001:prop_binch3_bin4=-0.0001,0.0001:prop_binch3_bin9=-0.0001,0.0001:prop_binch3_bin8=-0.0001,0.0001:jes_HF_2016=-0.0001,0.0001:jes_EC2=-0.0001,0.0001:muonisosf_syst=-0.0001,0.0001:ttbar_scales=-0.0001,0.0001:prop_binch3_bin14=-0.0001,0.0001:jes_EC2_2017=-0.0001,0.0001:jes_EC2_2016=-0.0001,0.0001:jes_EC2_2018=-0.0001,0.0001:ds=-0.0001,0.0001:jes_HF=-0.0001,0.0001:isr_tw=-0.0001,0.0001:jes_RelativeBal=-0.0001,0.0001:prop_binch3_bin15=-0.0001,0.0001:colour_rec_erdon=-0.0001,0.0001:prop_binch3_bin13=-0.0001,0.0001:Nominal=-0.0001,0.0001:colour_rec_cr2=-0.0001,0.0001:colour_rec_cr1=-0.0001,0.0001:muonidsf_syst=-0.0001,0.0001:btagging_2018=-0.0001,0.0001:prop_binch3_bin11=-0.0001,0.0001:btagging_2016=-0.0001,0.0001:btagging_2017=-0.0001,0.0001:jes_BBEC1_2016=-0.0001,0.0001:jes_BBEC1_2017=-0.0001,0.0001:jes_BBEC1_2018=-0.0001,0.0001:nonworz_norm=-0.0001,0.0001:jes_RelativeSample_2016=-0.0001,0.0001:jes_RelativeSample_2017=-0.0001,0.0001:jes_RelativeSample_2018=-0.0001,0.0001:elecidsf=-0.0001,0.0001:prefiring_2016=-0.0001,0.0001:btagging_corr=-0.0001,0.0001:jer_2018=-0.0001,0.0001:jer_2017=-0.0001,0.0001:jer_2016=-0.0001,0.0001:prop_binch1_bin1=-0.0001,0.0001:prop_binch1_bin0=-0.0001,0.0001:prop_binch1_bin3=-0.0001,0.0001:prop_binch1_bin2=-0.0001,0.0001:prop_binch1_bin5=-0.0001,0.0001:prop_binch1_bin4=-0.0001,0.0001:prop_binch1_bin7=-0.0001,0.0001:prop_binch1_bin6=-0.0001,0.0001:prop_binch1_bin9=-0.0001,0.0001:prop_binch1_bin8=-0.0001,0.0001:prop_binch3_bin12=-0.0001,0.0001:prop_binch1_bin11=-0.0001,0.0001:prop_binch1_bin10=-0.0001,0.0001:prop_binch1_bin13=-0.0001,0.0001:prop_binch1_bin12=-0.0001,0.0001:prop_binch1_bin15=-0.0001,0.0001:prop_binch1_bin14=-0.0001,0.0001:prop_binch1_bin17=-0.0001,0.0001:prop_binch1_bin16=-0.0001,0.0001:prop_binch1_bin19=-0.0001,0.0001:lumi_corr=-0.0001,0.0001:prop_binch3_bin10=-0.0001,0.0001:topptrew=-0.0001,0.0001:mistagging_2017=-0.0001,0.0001:mistagging_2016=-0.0001,0.0001:tw_scales=-0.0001,0.0001:lumi_corr1718=-0.0001,0.0001:triggereff_2018=-0.0001,0.0001:muonen_2018=-0.0001,0.0001:ue=-0.0001,0.0001:prop_binch2_bin11=-0.0001,0.0001:muonen_2017=-0.0001,0.0001:muonen_2016=-0.0001,0.0001:jes_Absolute_2017=-0.0001,0.0001:jes_Absolute_2016=-0.0001,0.0001:jes_Absolute_2018=-0.0001,0.0001:muonisosf_stat_2018=-0.0001,0.0001:lumi_2018=-0.0001,0.0001:mtop=-0.0001,0.0001:pileup=-0.0001,0.0001:lumi_2016=-0.0001,0.0001:lumi_2017=-0.0001,0.0001:muonisosf_stat_2017=-0.0001,0.0001:elecrecosf=-0.0001,0.0001:pdfhessian=-0.0001,0.0001:ttbar_norm=-0.0001,0.0001:prop_binch2_bin8=-0.0001,0.0001:prop_binch2_bin9=-0.0001,0.0001:prop_binch2_bin4=-0.0001,0.0001:triggereff_2016=-0.0001,0.0001:prop_binch2_bin6=-0.0001,0.0001:prop_binch2_bin7=-0.0001,0.0001:prop_binch2_bin0=-0.0001,0.0001:isr_ttbar=-0.0001,0.0001:prop_binch2_bin2=-0.0001,0.0001:triggereff_2017=-0.0001,0.0001:muonidsf_stat_2016=-0.0001,0.0001:muonidsf_stat_2017=-0.0001,0.0001:jes_FlavorQCD=-0.0001,0.0001:jes_HF_2017=-0.0001,0.0001:prop_binch1_bin18=-0.0001,0.0001:dy_norm=-0.0001,0.0001:muonisosf_stat_2016=-0.0001,0.0001:jes_HF_2018=-0.0001,0.0001:muonidsf_stat_2018=-0.0001,0.0001:vvttv_norm=-0.0001,0.0001:mistagging_corr=-0.0001,0.0001:prefiring_2017=-0.0001,0.0001:jes_BBEC1=-0.0001,0.0001:ttbar_matching=-0.0001,0.0001:fsr=-0.0001,0.0001:prop_binch2_bin5=-0.0001,0.0001]]" #--setRobustFitTolerance 0.0001 --stepSize 0.001 --cminDefaultMinimizerTolerance 0.1 --setCrossingTolerance 0.1 --setRobustFitTolerance 100 --cminDefaultMinimizerTolerance 100
#combinecomm = "combine -M FitDiagnostics --expectSignal 1 {combcard} -n {y}_{r} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --saveShapes --saveWorkspace --out {outdir} {extra} &> {outfile}"
#combinecomm = "combine -M FitDiagnostics {combcard} -n {y}_{r} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --saveShapes --saveWorkspace --out {outdir} {extra} &> {outfile}"
#combinecomm = "combine -M FitDiagnostics {combcard} -n {y}_{r} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --saveShapes --saveWorkspace --out {outdir} {extra} &> {outfile}"
#combinecomm = "combine -M FitDiagnostics {combcard} -n {y}_{r} --robustFit 1 --justFit --cminDefaultMinimizerStrategy 0 {extra} &> {outfile} --minos all"
#For expected
#combinecomm = "combine -M FitDiagnostics -t -1 --setParameters r=1 --expectSignal=1 {combcard} -n {y}_{r} --robustFit 1 --justFit --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 {extra} &> {outfile}"
#combinecomm = "combine -M FitDiagnostics {combcard} -n {y}_{r} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 1000000 --setRobustFitTolerance 0.0005 --stepSize 0.0008 --cminPreScan {extra} {plotsPrePost} {asimov} &> {outfile}"
#combinecomm = "combine -M FitDiagnostics {combcard} -n {y}_{r} --robustFit 1 --rMax 0.95 --rMin 0.6 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 {extra} {plotsPrePost} {asimov} &> {outfile}"
#gofcomm = "combineTool.py -M GoodnessOfFit --expectSignal 1 {combcard} -n {y}_{r} --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --algo=saturated -t {nToys} --toysFreq -s -1 --parallel {nthreads} --job-mode SGE  --name {Jobname} &> {outfile}"
#Expected
gofcomm = "combineTool.py -M GoodnessOfFit --expectSignal 1 {combcard} -n {y}_{r} --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --algo=saturated {preorpost} {tois} {nthreads} {queue} --cminDefaultMinimizerType Minuit"

slurmscaff = 'sbatch {extraS} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap "{command}"'

haddcomm      = "hadd {out} {inputs}"


nToysPerChunk = 200
nToysPerJob   = 20
nThreshold    = 1000

def makeFit(task):
    year, region, inpath, verbose, pretend, extra, doPrePostPlots, doAsimov = task
    fitoutpath  = inpath + "/" + year
    if "," in region:
        cardList = []
        regionList = region.split(",")
        for iR in regionList:
            cardList.append(iR + "/cuts-tw-" + iR + ".txt")
        
        combcardnam = 'combcard_{r}.txt'.format(r = region.replace(",", ""))
        mergecomm = 'cd {path}; combineCards.py {allCards} > {outCard}; cd -'.format(allCards = ' '.join(cardList),
                                                                                     path     = fitoutpath,
                                                                                     outCard  = combcardnam)

        if verbose:
            print 'Cardlist:', cardList, "\n"
            print "Merge cards command:", mergecomm, "\n"
        
        
        if not pretend:
            if os.path.isfile(fitoutpath + "/combcard_{r}.txt".format(r = region.replace(",", ""))):
                if verbose:
                    print "\t- Erasing old combined card..."
                os.system("rm " + fitoutpath + "/combcard_{r}.txt".format(r = region.replace(",", "")))
            if verbose:
                print "\t- Executing..."
            outstat = os.system(mergecomm)
            if outstat:
                raise RuntimeError("FATAL: combineCards.py failed to execute for year {y} and regions {r}.".format(y = year, r = region))
        
        physicsModel = 'text2workspace.py -m 125 {infile} -o {outfile}'.format(infile  = fitoutpath + "/" + combcardnam,
                                                                               outfile = fitoutpath + "/" + combcardnam.replace(".txt", ".root"),)
        if verbose:
            print "Text2Workspace command:", physicsModel, "\n"

        if not pretend:
            if os.path.isfile(fitoutpath + "/" + combcardnam.replace(".txt", ".root")):
                if verbose:
                    print "\t- Erasing old workspace..."
                os.system("rm " + fitoutpath + "/" + combcardnam.replace(".txt", ".root"))
            if verbose:
                print "\t- Executing..."
            outstat = os.system(physicsModel)
            if outstat:
                raise RuntimeError("FATAL: text2workspace.py failed to execute for year {y} and regions {r}.".format(y = year, r = region))
        
        combcard_ = fitoutpath + "/" + combcardnam.replace(".txt", ".root")
    else:
        combcard_ = fitoutpath + "/" + region + "/cuts-tw-" + region + ".txt"
        
    outfile_ = fitoutpath + "/fitOutput_{r}.txt".format(r = region if "," not in region else region.replace(",", ""))

    comm = combinecomm.format(combcard = combcard_,
                              outfile  = outfile_,
                              y        = year,
                              r        = region if "," not in region else region.replace(",", ""),
                              plotsPrePost = "--saveShapes --saveWithUncertainties" if doPrePostPlots else "",
                              asimov   = "-t -1" if doAsimov else "",
                              extra    = extra)
    if verbose:
        print "Combine command:", comm, "\n"

    if not pretend:
        if os.path.isfile(outfile_):
            if verbose:
                print "\t- Erasing old fit result..."
            os.system("rm " + outfile_)

        if verbose:
            print "\t- Executing..."
        outstat = os.system(comm)
        if outstat:
            raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r}.".format(y = year, r = region))


    #sys.exit()
    if not os.path.isfile('higgsCombine{y}_{r}.FitDiagnostics.mH120.root'.format(y = year, r = region if "," not in region else region.replace(",", ""))):
        raise RuntimeError("FATAL: no valid higgsCombine file found for year {y} and region(s) {r}.".format(y = year, r = region))
    else:
        os.system("mv ./higgsCombine{y}_{r}.FitDiagnostics.mH120.root {fdir}".format(y = year, r = region if "," not in region else region.replace(",", ""), fdir = fitoutpath + "/"))
        if os.path.isfile('fitDiagnostics{y}_{r}.root'.format(y = year, r = region if "," not in region else region.replace(",", ""))):
            os.system("mv ./fitDiagnostics{y}_{r}.root {fdir}".format(y = year, r = region if "," not in region else region.replace(",", ""), fdir = fitoutpath + "/"))

    if doPrePostPlots:
        ppf.producePlots(year, region if "," not in region else region.replace(",", ""), fitoutpath)
    return


def doSomeToysForMePlease(tsk):
    thei, gofoutpath, combcard_, extra, year, region, toistodo, doPost, verbose, pretend = tsk

    comm = "cd " + gofoutpath + "; " +  gofcomm.format(combcard  = combcard_,
        extra     = extra,
        y         = year,
        r         = region + "_toy{i}".format(i = thei) if "," not in region else region.replace(",", "") + "_toy{i}".format(i = thei),
        tois      = "-t " + str(toistodo) + " -s -1",
        nthreads  = "",
        queue     = "",
        preorpost = "--fixedSignalStrength=1" if not doPost else "--toysFreq") + "; " + "cd -"

    if verbose:
        print "Toys GOF command:", comm, "\n"

    if not pretend:
        outstat = os.system(comm)
        if outstat:
            raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r} during the nominal GOF test fit execution.".format(y = year, r = region))

    return


def makeGOF(task):
    year, region, inpath, verbose, pretend, extra, doPost, nth, nToys, theQ, Eslurm = task
    fitoutpath = inpath + "/" + year
    gofoutpath = fitoutpath + "/GOF{p}_{y}_{r}".format(y = year, r = region.replace(",", ""), p = "" if not doPost else "post")
    if not os.path.isdir(gofoutpath):
        os.system("mkdir -p " + gofoutpath)

    if "," in region:
        combcard_ = "../" + 'combcard_{r}.root'.format(r = region.replace(",", ""))
    else:
        combcard_ = "../" + region + "/cuts-tw-" + region + ".txt"

    if not os.path.isfile(gofoutpath + "/" + combcard_):

        raise RuntimeError("FATAL: no toys could be created as the card provided, {c}, doesn't exist.".format(c = gofoutpath + "/" + combcard_))


    if not theQ:
        comm = "cd " + gofoutpath + "; " +  gofcomm.format(combcard  = combcard_,
                              extra     = extra,
                              y         = year,
                              r         = region if "," not in region else region.replace(",", ""),
                              tois      = "",
                              nthreads  = "--parallel " + str(nth) if nth else "",
                              queue     = "",
                              preorpost = "--fixedSignalStrength=1" if not doPost else "") + "; " + "cd -"
        if verbose:
            print "Nominal GOF command:", comm, "\n"

        if not pretend:
            outstat = os.system(comm)
            if outstat:
                raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r} during the nominal GOF test fit execution.".format(y = year, r = region))


        #comm = "cd " + gofoutpath + "; " +  gofcomm.format(combcard  = combcard_,
                              #extra     = extra,
                              #y         = year,
                              #r         = region + "_toy" if "," not in region else region.replace(",", "") + "_toy",
                              #tois      = "-t " + str(nToys),
                              #nthreads  = "--parallel " + str(nth) if nth else "",
                              #queue     = "",
                              #preorpost = "--fixedSignalStrength=1" if not doPost else "--toysFreq") + "; " + "cd -"

        #if verbose:
            #print "Toys GOF command:", comm, "\n"

        #if not pretend:
            #outstat = os.system(comm)
            #if outstat:
                #raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r} during the nominal GOF test fit execution.".format(y = year, r = region))


        nToyChunks = nToys // nToysPerJob
        tmptasks = []
        for i in range(nToyChunks):
            tmptasks.append( (i, gofoutpath, combcard_, extra, year, region, nToysPerJob if i != nToyChunks - 1 else nToys - nToysPerJob * (nToyChunks - 1), doPost, verbose, pretend) )

        if nth > 1:
            pool = Pool(nth)
            pool.map(doSomeToysForMePlease, tmptasks)
            pool.close()
            pool.join()
            del pool
        else:
            for el in tmptasks:
                doSomeToysForMePlease(el)

    else:
        logpath = gofoutpath + "/slurmlogs"
        if not os.path.isdir(logpath):
            os.system("mkdir -p " + logpath)

        if not nth:
            comm = gofcomm.format(combcard  = combcard_,
                                extra       = extra,
                                y           = year,
                                r           = region if "," not in region else region.replace(",", ""),
                                tois        = "",
                                nthreads    = "",
                                queue       = "",
                                preorpost   = "--fixedSignalStrength=1" if not doPost else "")

            slcomm = "cd " + gofoutpath + "; " + slurmscaff.format(extraS  = Eslurm,
                                                                   queue   = queue,
                                                                   jobname = "CMGTGOFnom_{y}_{r}".format(y = year, r = region),
                                                                   logpath = "./slurmlogs",
                                                                   command = comm) + "; " + "cd -"

            if verbose:
                print "Nominal GOF command:", slcomm, "\n"

            if not pretend:
                outstat = os.system(slcomm)
                if outstat:
                    raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r} during the nominal GOF test fit execution.".format(y = year, r = region))

            comm = gofcomm.format(combcard  = combcard_,
                                  extra     = extra,
                                  y         = year,
                                  r         = region + "_toy{i}" if "," not in region else region.replace(",", "") + "_toy{i}",
                                  tois      = "-t {ntois} -s -1",
                                  nthreads  = "",
                                  queue     = "",
                                  preorpost = "--fixedSignalStrength=1" if not doPost else "--toysFreq")


            if nToys < nThreshold:
                for i in range(nToys):                     #### TODO: paralelizar
                    slcomm = "cd " + gofoutpath + "; " +  slurmscaff.format(extraS  = Eslurm,
                                                                            queue   = queue,
                                                                            jobname = "CMGTGOFtoys_{y}_{r}_{i}".format(y = year, r = region, i = i),
                                                                            logpath = "./slurmlogs",
                                                                            command = comm.format(i = i, ntois = 1)) + "; " + "cd -"
                    if verbose:
                        print "Toys GOF command:", slcomm, "\n"

                    if not pretend:
                        outstat = os.system(slcomm)
                        if outstat:
                            raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r} during the nominal GOF test fit execution.".format(y = year, r = region))
            else:
                nToyChunks = nToys // nToysPerChunk
                for i in range(nToyChunks):                     #### TODO: paralelizar
                    slcomm = "cd " + gofoutpath + "; " +  slurmscaff.format(extraS  = Eslurm,
                                                                            queue   = queue,
                                                                            jobname = "CMGTGOFtoys_{y}_{r}_{i}".format(y = year, r = region, i = i),
                                                                            logpath = "./slurmlogs",
                                                                            command = comm.format(i = i, ntois = nToysPerChunk if i != nToyChunks - 1 else nToys - nToysPerChunk * (nToyChunks - 1))) + "; " + "cd -"
                    if verbose:
                        print "Toys GOF command:", slcomm, "\n"

                    if not pretend:
                        outstat = os.system(slcomm)
                        if outstat:
                            raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r} during the nominal GOF test fit execution.".format(y = year, r = region))


        else:
            comm = gofcomm.format(combcard  = combcard_,
                                extra       = extra,
                                y           = year,
                                r           = region if "," not in region else region.replace(",", ""),
                                tois        = "",
                                nthreads    = "",
                                queue       = "",
                                preorpost   = "--fixedSignalStrength=1" if not doPost else "")

            slcomm = "cd " + gofoutpath + "; " + slurmscaff.format(extraS  = Eslurm,
                                                                   queue   = queue,
                                                                   jobname = "CMGTGOFnom_{y}_{r}".format(y = year, r = region),
                                                                   logpath = "./slurmlogs",
                                                                   command = comm) + "; " + "cd -"

            if verbose:
                print "Nominal GOF command:", slcomm, "\n"

            if not pretend:
                outstat = os.system(slcomm)
                if outstat:
                    raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r} during the nominal GOF test fit execution.".format(y = year, r = region))

            comm = gofcomm.format(combcard  = combcard_,
                                  extra     = extra,
                                  y         = year,
                                  r         = region if "," not in region else region.replace(",", ""),
                                  tois      = "-t " + str(nToys),
                                  nthreads  = "--parallel " + str(nth),
                                  queue     = "",
                                  preorpost = "--fixedSignalStrength=1" if not doPost else "--toysFreq")


            slcomm = "cd " + gofoutpath + "; " + slurmscaff.format(extraS  = Eslurm,
                                    queue   = queue,
                                    jobname = "CMGTGOFtoys_{y}_{r}".format(y = year, r = region),
                                    logpath = "./slurmlogs",
                                    command = comm) + "; " + "cd -"
            if verbose:
                print "Toys GOF command:", slcomm, "\n"

            if not pretend:
                outstat = os.system(slcomm)
                if outstat:
                    raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r} during the nominal GOF test fit execution.".format(y = year, r = region))
    return


def makeGOFplot(task):
    year, region, inpath, verbose, pretend, extra, doPost = task
    fitoutpath = inpath + "/" + year
    gofoutpath = fitoutpath + "/GOF{p}_{y}_{r}".format(y = year, r = region.replace(",", ""), p = "" if not doPost else "post")
    if not os.path.isdir(gofoutpath):
        raise RuntimeError("FATAL: no present GOF folder for given parameters.")

    thefiles = os.listdir(gofoutpath)
    if "higgsCombine{y}_{r}.GoodnessOfFit.mH120.root".format(y = year, r = region.replace(",", "")) not in thefiles:
        raise RuntimeError("FATAL: no nominal fit found. Plot cannot be made!")

    if "higgsCombine{y}_{r}_toy.GoodnessOfFit.mH120.root".format(y = year, r = region.replace(",", "")) not in thefiles:
        comm = "cd " + gofoutpath + "; " + haddcomm.format(inputs = "higgsCombine{y}_{r}_toy*.GoodnessOfFit.mH120.*.root".format(y = year, r = region.replace(",", "")),
                                                           out    = "higgsCombine{y}_{r}_toy.GoodnessOfFit.mH120.root".format(y = year, r = region.replace(",", ""))) + "; " + "cd -"

        if verbose:
            print "Merging command:", comm, "\n"

        if not pretend:
            outstat = os.system(comm)
            if outstat:
                raise RuntimeError("FATAL: merge of toys' files for year {y} and region(s) {r} failed.".format(y = year, r = region))


    r.gStyle.SetOptStat(0)

    inpData = r.TFile(gofoutpath + "/higgsCombine{y}_{r}.GoodnessOfFit.mH120.root".format(y = year, r = region.replace(",", "")),     "READ")
    inptoys = r.TFile(gofoutpath + "/higgsCombine{y}_{r}_toy.GoodnessOfFit.mH120.root".format(y = year, r = region.replace(",", "")), "READ")

    tData = inpData.Get("limit")
    tToys = inptoys.Get("limit")

    c = r.TCanvas("c" ,"c" , 800, 600)

    valToys = []
    valData = 0.
    
    for ev in tData:
        valData = ev.limit

    up   = 0.
    down = 0.

    for ev in tToys:
        valToys.append(ev.limit)
        if ev.limit >= valData:
            up += 1
        else:
            down +=1

    minX = min(0., min(valToys))
    maxX = min(max(valToys), sorted(valToys)[len(valToys)/2] * 4) # To avoid skewing for exta high values

    if valData > maxX * 0.9: maxX = valData * 1.1

    hToys = r.TH1F("hToys", "hToys", 100, minX, maxX)

    for v in valToys: hToys.Fill(v)

    hToys.SetLineColor(r.kBlue)
    hToys.GetXaxis().SetTitle("Saturated test statistic (adim.)")
    hToys.GetYaxis().SetTitle("# toys (adim.)")
    hToys.SetTitle(("Pre-fit GOF test" if not doPost else "Post-fit GOF test") + " - {y} - {r}".format(y = year, r = region.replace(",", "")))
    hToys.Draw("hist")

    lineData = r.TLine(valData, 0, valData, hToys.GetMaximum() * 1.05)
    lineData.Draw("same")

    tl = r.TLegend(0.65, 0.6, 0.85, 0.85)
    tl.SetHeader("p-value = %1.4f"%(up / ((up + down)*1.)))
    tl.AddEntry(hToys,    "Toys (# = {n})".format(n = tToys.GetEntries()), "f")
    tl.AddEntry(lineData, "Data", "l")
    tl.Draw("same")

    if not os.path.isdir(gofoutpath + "/plots"):
        os.system("mkdir -p " + gofoutpath + "/plots")

    c.SaveAs(gofoutpath + "/plots/GOF{p}_{y}_{r}.png".format(y = year, r = region.replace(",", ""), p = "" if not doPost else "post"))
    c.SaveAs(gofoutpath + "/plots/GOF{p}_{y}_{r}.pdf".format(y = year, r = region.replace(",", ""), p = "" if not doPost else "post"))
    c.Close(); del c
    return


if __name__ == "__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--year',      '-y', metavar = 'year',       dest = "year",     required = False, default = "2016")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',      dest = "extra",    required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--inpath',    '-i', metavar = 'inpath ',    dest = "inpath",   required = False, default = "./temp/cards")
    parser.add_argument('--queue',     '-q', metavar = 'queue',      dest = "queue",    required = False, default = None)
    parser.add_argument('--region',    '-r', metavar = 'region',     dest = "region",   required = False, default = "1j1t")
    parser.add_argument('--verbose',      '-V',  action  = "store_true",  dest = "verbose",      required = False, default = False)
    parser.add_argument('--nToys',        '-nT', metavar = 'ntoys',       dest = "ntoys",        required = False, default = 100, type = int)
    parser.add_argument('--plotsPrePost', '-pp', action  = "store_true",  dest = "plotsPrePost", required = False, default = False)
    parser.add_argument('--useData',      '-uD', action  = "store_true",  dest = "usedata",      required = False, default = False)
    parser.add_argument('--gofprefit',    '-gP', action  = "store_true",  dest = "gofprefit",    required = False, default = False) #Option to make gof test
    parser.add_argument('--gofpostfit',   '-gF', action  = "store_true",  dest = "gofpostfit",   required = False, default = False) #Option to make gof test
    parser.add_argument('--gofplot',      '-gH', action  = "store_true",  dest = "gofhisto",     required = False, default = False) #Option to make gof test
    parser.add_argument('--extraSlurmArgs','-eS',metavar = 'extraslurm',  dest = "extraslurm",   required = False, default = "")

    args     = parser.parse_args()
    year     = args.year
    extra    = args.extra
    extraslurm=args.extraslurm
    nthreads = args.nthreads
    pretend  = args.pretend
    inpath   = args.inpath
    region   = args.region
    queue    = args.queue
    verbose  = args.verbose
    nts      = args.ntoys
    plotsPrePost = args.plotsPrePost
    asimov   = not args.usedata
    gofpre   = args.gofprefit
    gofpost  = args.gofpostfit
    gofhisto = args.gofhisto


    theyears = ["2016", "2017", "2018", "run2"]
    theregs  = ["1j1t", "2j1t", "2j2t", "1j1t,2j1t", "1j1t,2j2t", "2j1t,2j2t", "1j1t,2j1t,2j2t"]
    tasks    = []


    if year.lower() != "all":
        if "," in year:
            theyears = year.split(",")
        else:
            theyears = [ year ]

    if region.lower() != "all":
        theregs = [ region ]


    if not gofpre and not gofpost and not gofhisto:
        for yr in theyears:
            for rg in theregs:
                tasks.append( (yr, rg, inpath, verbose, pretend, extra, plotsPrePost, asimov) )

        for task in tasks:
            if verbose: print "\nProcessing " + str(task) + "\n"
            makeFit(task)
    elif not gofhisto:
        for yr in theyears:
            for rg in theregs:
                tasks.append( (yr, rg, inpath, verbose, pretend, extra, gofpost, nthreads, nts, queue, extraslurm) )

        for task in tasks:
            if verbose: print "\nProcessing " + str(task) + "\n"
            makeGOF(task)
    else:
        for yr in theyears:
            for rg in theregs:
                tasks.append( (yr, rg, inpath, verbose, pretend, extra, gofpost) )

        for task in tasks:
            if verbose: print "\nProcessing " + str(task) + "\n"
            makeGOFplot(task)



