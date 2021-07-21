import os, sys, enum, argparse
from multiprocessing import Pool
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

friendspath  = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"
logpath      = friendspath + "/{p}/{y}/logs/plots"

slurmscaff   = "sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{command}'"

#combinecomm = "combine -M FitDiagnostics --expectSignal 1 {combcard} -n {y}_{r} --robustFit 1 --justFit --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 {extra} >> {outfile}"
combinecomm = "combine -M FitDiagnostics --expectSignal 1 {combcard} -n {y}_{r} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --saveShapes --saveWorkspace --out {outdir} {extra} >> {outfile}"


def makeFit(task):
    year, region, inpath, verbose, pretend, extra = task
    if "," in region:
        cardList = []
        regionList = region.split(",")
        for iR in regionList:
            cardList.append(iR + "/cuts-tw-" + iR + ".txt")
        
        combcardnam = 'combcard_{r}.txt'.format(r = region.replace(",", ""))
        fitoutpath  = inpath + "/" + year
        
        mergecomm = 'cd {path}; combineCards.py {allCards} > {outCard}; cd -'.format(allCards = ' '.join(cardList),
                                                                                     path     = fitoutpath,
                                                                                     outCard  = combcardnam)

        if verbose:
            print 'Cardlist:', cardList, "\n"
            print "Merge cards command:", mergecomm, "\n"
        
        
        if not pretend:
            if os.path.isfile(fitoutpath + "/combcard_{r}.txt".format(r = region.replace(",", ""))):
                if verbose:
                    print "    - Erasing old combined card..."
                os.system("rm " + fitoutpath + "/combcard_{r}.txt".format(r = region.replace(",", "")))
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
                    print "    - Erasing old workspace..."
                os.system("rm " + fitoutpath + "/" + combcardnam.replace(".txt", ".root"))
            outstat = os.system(physicsModel)
            if outstat:
                raise RuntimeError("FATAL: text2workspace.py failed to execute for year {y} and regions {r}.".format(y = year, r = region))
        
        combcard_ = fitoutpath + "/" + combcardnam.replace(".txt", ".root")
    else:
        combcard_ = fitoutpath + "/" + region + "/cuts-tw-" + region + ".txt"
        
    outfile_ = fitoutpath + "/fitOutput_{r}.txt".format(r = region if "," not in region else region.replace(",", ""))
        

    comm = combinecomm.format(combcard = combcard_,
                              outfile  = outfile_,
                              outdir   = fitoutpath,
                              extra    = extra,
                              y        = year,
                              r        = region if "," not in region else region.replace(",", ""))
    if verbose:
        print "Combine command:", comm, "\n"

    if not pretend:
        if os.path.isfile(outfile_):
            if verbose:
                print "    - Erasing old fit result..."
            os.system("rm " + outfile_)
        outstat = os.system(comm)
        if outstat:
            raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r}.".format(y = year, r = region))
            
    
    #sys.exit()
    if not os.path.isfile('higgsCombine{y}_{r}.FitDiagnostics.mH120.root'.format(y = year, r = region if "," not in region else region.replace(",", ""))):
        raise RuntimeError("FATAL: no valid higgsCombine file found for year {y} and region(s) {r}.".format(y = year, r = region))
    else:
        os.system("mv ./higgsCombine{y}_{r}.FitDiagnostics.mH120.root {fdir}".format(y = year, r = region if "," not in region else region.replace(",", ""), fdir = fitoutpath + "/"))


    # Ahora recogemos la virutilla
    #if not os.path.isfile(fitoutpath + '/fitDiagnostics{y}_{r}.root'.format(y = year, r = region if "," not in region else region.replace(",", ""))):
    #    raise RuntimeError("FATAL: no valid fitDiagnostics file found for year {y} and region(s) {r}. Maybe there was a problem with the fit.\n".format(y = year, r = region))

    #if not os.path.isfile(fitoutpath + "/higgsCombine{y}_{r}.FitDiagnostics.mH120.root".format(y = year, r = region if "," not in region else region.replace(",", ""))):
    #    raise RuntimeError("FATAL: no valid higgsCombine file found  for year {y} and region(s) {r}. Maybe there was a problem with the fit, and/or moving the file to its corresponding folder.\n".format(y = year, r = region))

    return


def ExecuteOrSubmitToy(tsk):
    year, region, inpath, verbose, pretend, extra = tsk
    queue = ""
    if queue == "":
        thecomm = CombineCommand(year, inpath, extra)
        print "Command: " + thecomm

        if not pretend:
            os.system(thecomm)

    #else:
        #if not os.path.isdir(logpath.format(p = prod, y = yr)):
            #os.system("mkdir -p " + logpath.format(p = prod, y = yr))

        #thecomm = slurmscaff.format(nth     = nthreads,
                                    #queue   = queue,
                                    #jobname = "Combine_" + year,
                                    #logpath = logpath.format(p = prod, y = yr),
                                    #command = CombineCommand(prod, year, variable, bines, asimov, nthreads, outpath, region, noUnc, useFibre, extra))

        #print "Command: " + thecomm

        #if not pretend:
            #os.system(thecomm)
    return

def submitToy(task):
    year, region, inpath, verbose, pretend, extra = task
    if "," in region:
        cardList = []
        regionList = region.split(",")
        for iR in regionList:
            cardList.append(iR + "/cuts-tw-" + iR + ".txt")
        
        combcardnam = 'combcard_{r}.txt'.format(r = region.replace(",", ""))
        fitoutpath  = inpath + "/" + year
        
        mergecomm = 'cd {path}; combineCards.py {allCards} > {outCard}; cd -'.format(allCards = ' '.join(cardList),
                                                                                     path     = fitoutpath,
                                                                                     outCard  = combcardnam)

        if verbose:
            print 'Cardlist:', cardList, "\n"
            print "Merge cards command:", mergecomm, "\n"
        
        
        if not pretend:
            if os.path.isfile(fitoutpath + "/combcard_{r}.txt".format(r = region.replace(",", ""))):
                if verbose:
                    print "    - Erasing old combined card..."
                os.system("rm " + fitoutpath + "/combcard_{r}.txt".format(r = region.replace(",", "")))
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
                    print "    - Erasing old workspace..."
                os.system("rm " + fitoutpath + "/" + combcardnam.replace(".txt", ".root"))
            outstat = os.system(physicsModel)
            if outstat:
                raise RuntimeError("FATAL: text2workspace.py failed to execute for year {y} and regions {r}.".format(y = year, r = region))
        
        combcard_ = fitoutpath + "/" + combcardnam
    else:
        combcard_ = fitoutpath + "/" + region + "/cuts-tw-" + region + ".txt"
        
    outfile_ = fitoutpath + "/fitOutput_{r}.txt".format(r = region if "," not in region else region.replace(",", ""))
        

    comm = combinecomm.format(combcard = combcard_,
                              outfile  = outfile_,
                              extra    = extra,
                              y        = year,
                              r       = region if "," not in region else region.replace(",", ""))
    if verbose:
        print "Combine command:", comm, "\n"

    if not pretend:
        if os.path.isfile(outfile_):
            if verbose:
                print "    - Erasing old fit result..."
            os.system("rm " + outfile_)
        outstat = os.system(comm)
        if outstat:
            raise RuntimeError("FATAL: Combine failed to execute for year {y} and region(s) {r}.".format(y = year, r = region))
            
    
    #sys.exit()
    if not os.path.isfile('higgsCombine{y}_{r}.FitDiagnostics.mH120.root'.format(y = year, r = region if "," not in region else region.replace(",", ""))):
        raise RuntimeError("FATAL: no valid higgsCombine file found for year {y} and region(s) {r}.".format(y = year, r = region))
    else:
        os.system("mv ./higgsCombine{y}_{r}.FitDiagnostics.mH120.root {fdir}".format(y = year, r = region if "," not in region else region.replace(",", ""), fdir = fitoutpath + "/"))


    # Ahora recogemos la virutilla
    #if not os.path.isfile(fitoutpath + '/fitDiagnostics{y}_{r}.root'.format(y = year, r = region if "," not in region else region.replace(",", ""))):
    #    raise RuntimeError("FATAL: no valid fitDiagnostics file found for year {y} and region(s) {r}. Maybe there was a problem with the fit.\n".format(y = year, r = region))

    #if not os.path.isfile(fitoutpath + "/higgsCombine{y}_{r}.FitDiagnostics.mH120.root".format(y = year, r = region if "," not in region else region.replace(",", ""))):
    #    raise RuntimeError("FATAL: no valid higgsCombine file found  for year {y} and region(s) {r}. Maybe there was a problem with the fit, and/or moving the file to its corresponding folder.\n".format(y = year, r = region))

    return

if __name__ == "__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--year',      '-y', metavar = 'year',       dest = "year",     required = False, default = "2016")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',      dest = "extra",    required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',   dest = "nthreads", required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--inpath',    '-i', metavar = 'inpath ',    dest = "inpath",   required = False, default = "./temp/cards")
    parser.add_argument('--queue',     '-q', metavar = 'queue',      dest = "queue",    required = False, default = "")
    parser.add_argument('--region',    '-r', metavar = 'region',        dest = "region",  required = False, default = "1j1t")
    parser.add_argument('--verbose',    '-V', action  = "store_true",   dest = "verbose",  required = False, default = False)
    parser.add_argument('--produceToys','-pT', metavar = 'producetoys', dest = "producetoys", required = False,  default = 0, type = int)


    args     = parser.parse_args()
    year     = args.year
    extra    = args.extra
    nthreads = args.nthreads
    pretend  = args.pretend
    inpath   = args.inpath
    region   = args.region
    queue    = args.queue
    verbose  = args.verbose
    producetoys = args.producetoys
    queue    = ""
    #print CardsCommand(prod, year, variable, bines, asimov, nthreads, outpath, region, noUnc, useFibre, extra)

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


    
    if producetoys:
#        for yr in theyears:
#            for rg in theregs:
#                ExecuteOrSubmitToy(sbatch --wrap "combine -M GenerateOnly -s "$i" -t 100 {morestuff}" ; done
#            else:
        pass                


        
        
    
    else:
        for yr in theyears:
            for rg in theregs:
                tasks.append( (yr, rg, inpath, verbose, pretend, extra) )
        #print tasks
        for task in tasks:
            print "\nProcessing " + str(task) + "\n"
            makeFit(task)
