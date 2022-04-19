from copy import deepcopy
import os, sys, argparse

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import beautifulUnfoldingPlots as bp
import errorPropagator as ep
import varList as vl

individual_list = ['fsr','pileup','dy_norm','colour','jes','matching','ttbar_norm','elec','nonworz_norm','btag','ue','toppt','tw_scales',
                   'vvttv_norm','mc_stat','isr','ttbar_scales','lumi','pdf','mistag','ds','jer','trigger','prefiring','muon','mtop']

global_list     = ['systematics']

#groupList   = ['lumi','ds','pileup','muon','dy_norm','colour','jes','matching','ttbar_norm','elec','nonworz_norm','btag','ue','ttbar_scales','tw_scales',
              #'vvttv_norm','mc_stat','isr','mtop','pdf','mistag','fsr','toppt','jer','trigger','prefiring']

#basecommand = 'combineTool.py -M MultiDimFit {algosettings} --setParameters {setpars} --rMin 0 --rMax 2 --floatOtherPOIs=1 -m 125 --split-points 1 --saveInactivePOI 1 {parallel} {queue} {extra} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000'
#basecommand = 'combineTool.py -M MultiDimFit {algosettings} --setParameters {setpars}  --split-points 1 --saveInactivePOI 1 {parallel} {queue} {extra} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000'
basecommand = 'combineTool.py -M MultiDimFit {algosettings} --setParameters {setpars} --split-points 1 --floatOtherPOIs=1 --saveInactivePOI 1 {parallel} {queue} {extra} --robustFit 1 --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --setParameterRanges {minmaxlist} --squareDistPoiStep --autoRange 2 -m 125'

userstorage = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/misc/"

individual_scaff = {
    #### Statistical
    'mc_stat' : [],

    #### Systematic
    # Experimental
    'jes': [
#        "jes",
        "jes_HF",
        "jes_HF_2016",
        "jes_HF_2017",
        "jes_HF_2018",
        "jes_BBEC1",
        "jes_BBEC1_2016",
        "jes_BBEC1_2017",
        "jes_BBEC1_2018",
        "jes_FlavorQCD",
        "jes_RelativeSample_2016",
        "jes_RelativeSample_2017",
        "jes_RelativeSample_2018",
        "jes_EC2",
        "jes_EC2_2016",
        "jes_EC2_2017",
        "jes_EC2_2018",
        "jes_RelativeBal",
        "jes_Absolute",
        "jes_Absolute_2016",
        "jes_Absolute_2017",
        "jes_Absolute_2018",
    ],
    'jer': [
        "jer_2016",
        "jer_2017",
        "jer_2018",
    ],
    'trigger': [
        "triggereff_2016",
        "triggereff_2017",
        "triggereff_2018",
    ],
    'pileup': [
        "pileup",
    ],
    'elec': [
        "elecidsf",
        "elecrecosf",
    ],
    'muon': [
        "muonen_2016",
        "muonen_2017",
        "muonen_2018",
        "muonidsf_stat_2016",
        "muonidsf_stat_2017",
        "muonidsf_stat_2018",
        "muonidsf_syst",
        "muonisosf_stat_2016",
        "muonisosf_stat_2017",
        "muonisosf_stat_2018",
        "muonisosf_syst",
    ],
    'btag': [
        "btagging_2016",
        "btagging_2017",
        "btagging_2018",
        "btagging_corr",
    ],
    'mistag': [
        "mistagging_2016",
        "mistagging_2017",
        "mistagging_2018",
        "mistagging_corr",
    ],
    'lumi': [
        "lumi_2016",
        "lumi_2017",
        "lumi_2018",
        "lumi_corr",
        "lumi_corr1718",
    ],
    'prefiring' : [
        "prefiring_2016",
        "prefiring_2017",
    ],

    # Normalisation
    'ttbar_norm' : [
        "ttbar_norm",
    ],
    'nonworz_norm' : [
        "nonworz_norm",
    ],
    'dy_norm' : [
        "dy_norm",
    ],
    'vvttv_norm' : [
        "vvttv_norm",
    ],

    # Modelling
    'pdf' : [
        "pdfhessian",
    ],
    'matching' : [
        "ttbar_matching",
    ],
    'ttbar_scales' : [
        "ttbar_scales",
    ],
    'tw_scales' : [
        "tw_scales",
    ],
    'isr' : [
        "isr_ttbar",
        "isr_tw",
    ],
    'fsr' : [
        "fsr",
    ],
    'colour' : [
        "colour_rec_erdon",
        "colour_rec_cr1",
        "colour_rec_cr2",
    ],
    'ue' : [
        "ue",
    ],
    'toppt' : [
        "topptrew",
    ],
    'mtop' : [
        "mtop",
    ],
    'ds' : [
        "ds",
    ],
}


global_scaff = {
   'systematics': [
        "jes_HF",
        "jes_HF_2016",
        "jes_HF_2017",
        "jes_HF_2018",
        "jes_BBEC1",
        "jes_BBEC1_2016",
        "jes_BBEC1_2017",
        "jes_BBEC1_2018",
        "jes_FlavorQCD",
        "jes_RelativeSample_2016",
        "jes_RelativeSample_2017",
        "jes_RelativeSample_2018",
        "jes_EC2",
        "jes_EC2_2016",
        "jes_EC2_2017",
        "jes_EC2_2018",
        "jes_RelativeBal",
        "jes_Absolute",
        "jes_Absolute_2016",
        "jes_Absolute_2017",
        "jes_Absolute_2018",
        "jer_2016",
        "jer_2017",
        "jer_2018",
        "triggereff_2016",
        "triggereff_2017",
        "triggereff_2018",
        "pileup",
        "elecidsf",
        "elecrecosf",
        "muonen_2016",
        "muonen_2017",
        "muonen_2018",
        "muonidsf_stat_2016",
        "muonidsf_stat_2017",
        "muonidsf_stat_2018",
        "muonidsf_syst",
        "muonisosf_stat_2016",
        "muonisosf_stat_2017",
        "muonisosf_stat_2018",
        "muonisosf_syst",
        "btagging_2016",
        "btagging_2017",
        "btagging_2018",
        "btagging_corr",
        "mistagging_2016",
        "mistagging_2017",
        "mistagging_2018",
        "mistagging_corr",
        "prefiring_2016",
        "prefiring_2017",
        "ttbar_norm",
        "nonworz_norm",
        "dy_norm",
        "vvttv_norm",
        "pdfhessian",
        "ttbar_matching",
        "ttbar_scales",
        "tw_scales",
        "isr_ttbar",
        "isr_tw",
        "fsr",
        "colour_rec_erdon",
        "colour_rec_cr1",
        "colour_rec_cr2",
        "ue",
        "topptrew",
        "mtop",
        "ds",
        "lumi_2016",
        "lumi_2017",
        "lumi_2018",
        "lumi_corr",
        "lumi_corr1718",
   ],
}


def calculateRelativeUncertainties(task):
    inpath, iY, iV, nps, nth, redo = tsk
    
    bins_detector = vl.varList[iV]['bins_detector']
    ndetectorbins = len(bins_detector) - 1
    bins_particle = vl.varList[iV]['bins_particle']
    nparticlebins = len(bins_particle) - 1
    
    reluncpath = inpath + "/"+ iY + "/" + iV + "/sigextr_fit_combine/relativeuncs"
    for iP in ["", "/individual", "/global", "/nominal"]:
        if not os.path.isdir(reluncpath + iP):
            os.system("mkdir -p " + reluncpath + iP)

    doBatch = False
    userstdirrw = userstorage.replace("phedex", "phedexrw").replace("ciencias", "cienciasrw") + "/" + inpath + iY + "/" + iV + "/relativeuncs"
    userstdir   = userstdirrw.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias")

    #print userstdirrw

    if not os.path.isdir(userstdirrw):
        os.system("mkdir -p " + userstdirrw)
        os.system("cp " + inpath + "/"+ iY + "/" + iV + "/sigextr_fit_combine/fit_output.root " + userstdirrw + "/")
        thecard = userstdirrw + "/fit_output.root"
    elif os.path.isfile(userstdir + "/fit_output.root"):
        thecard = userstdir + "/fit_output.root"
    else:
        thecard = userstdirrw + "/fit_output.root"

    #print thecard
    #sys.exit()

    #thecard = "../../fit_output.root"
    POIs    = ["r_tW_{iB}".format(iB = i) for i in range(nparticlebins)]
    indGroup = deepcopy(individual_scaff)
    gloGroup = deepcopy(global_scaff)

    for iB in range(ndetectorbins):
        indGroup["mc_stat"].append(    "prop_bincard_" + iV + "_bin" + str(iB))
        gloGroup["systematics"].append("prop_bincard_" + iV + "_bin" + str(iB))

    ##################### OLD
    # First, we calculate the nominal files that we need.
    for poi in POIs:
        cumulative = [x for x in POIs if x != poi]

        # nominal_POI
        if not os.path.isfile(reluncpath + "/nominal/higgsCombinenominal_{p}.MultiDimFit.mH125.root".format(p = poi)) or redo:
            nomcomm    = basecommand.format(algosettings = "--algo grid --points " + str(nps),
                                            setpars      = ",".join([el + "=1" for el in POIs]),
                                            queue        = "" if not doBatch else "--job-mode slurm --task-name nominal_" + poi,
                                            parallel     = "" if not nth  else "--parallel " + str(nth),
                                            extra        = '-n nominal_{p} {card} -P {p}'.format(p = poi, card = thecard),
                                            #extra        = '-n nominal_{p} {card} -P {p} --freezeParameters {c}'.format(p = poi, card = thecard, c = ",".join(cumulative))
                                            minmaxlist   = ":".join([el + "=0,3" for el in POIs]),
                                            )
            if not pretend: os.system("cd {path}; rm ./higgsCombinenominal_{p}.POINTS*; cd -".format(path = reluncpath + "/nominal", p = poi))

            print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = nomcomm)
            if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = nomcomm))

            nomcomm  = 'hadd -f higgsCombinenominal_{p}.MultiDimFit.mH125.root higgsCombinenominal_{p}.POINTS.*.MultiDimFit.mH125.root'.format(p = poi)
            print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = nomcomm)
            if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = nomcomm))

        # bestfit_POI
        if not os.path.isfile(reluncpath + "/nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root".format(p = poi)) or redo:
            if not pretend and os.path.isfile(reluncpath + "/nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root".format(p = poi)):
                os.system("cd {path}; rm ./higgsCombinebestfit_{p}.MultiDimFit.mH125.root; cd -".format(path = reluncpath + "/nominal", p = poi))
            gridcomm = basecommand.format(algosettings = "--algo none",
                                            setpars    = ",".join([el + "=1" for el in POIs]),
                                            queue      = "",
                                            parallel   = "",
                                            extra      = '-n bestfit_{p} --saveWorkspace {card} -P {p}'.format(p = poi, card = thecard),
                                            minmaxlist   = ":".join([el + "=0,3" for el in POIs])
                                         )
            print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = gridcomm)
            if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = gridcomm))

    # sys.exit()

    ### Then, we obtain the individual-separated files.
    #for poi in POIs:
        ##cumulative = [x for x in POIs if x != poi]
        #cumulative = []
        #fileList   = []
        #for gr in individual_list:
            #cumulative += indGroup[gr]
            #fileList.append("'higgsCombine{gp}.MultiDimFit.mH125.root:Freeze += {g}:{i}'".format(gp = gr + '_' + poi,
                                                                                                 #g  = gr,
                                                                                                 #i  = individual_list.index(gr)))
            #if not os.path.isfile(reluncpath + "/individual/higgsCombine{g}_{p}.MultiDimFit.mH125.root".format(g = gr, p = poi)) or redo:
                #thecomm = basecommand.format(algosettings = "--algo grid --points " + str(nps),
                                            #setpars      = ",".join([el + "=1" for el in POIs]),
                                            #queue        = "" if not doBatch else "--job-mode slurm --task-name " + gr + "_" + poi,
                                            #parallel     = "" if not nth  else "--parallel " + str(nth),
                                            #extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit --freezeParameters {c}'.format(p = poi, g = gr, c = ",".join(cumulative)),
                                            ##extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit'.format(p = poi, g = gr))
                                            #minmaxlist   = ":".join([el + "=0,3" for el in POIs]),
                                            #)

                #if not pretend: os.system("cd {path}; rm ./higgsCombine{g}_{p}.POINTS*; cd -".format(path = reluncpath + "/individual", p = poi, g = gr))
                #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm)
                #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm))

                #tmpcomm = 'hadd -f higgsCombine{gp}.MultiDimFit.mH125.root higgsCombine{gp}.POINTS.*.MultiDimFit.mH125.root'.format(gp = gr + '_' + poi)

                #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = tmpcomm)
                #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = tmpcomm))


        #if not os.path.isfile(reluncpath + "/individual/outputfit_{p}.txt".format(p = poi)) or redo:
            #thecomm = "plot1DScan.py ../nominal/higgsCombinenominal_{p}.MultiDimFit.mH125.root --others {l1} --breakdown {l2},stat --POI {p} ".format(
                #p  = poi,
                #l1 = ' '.join(fileList),
                #l2 = ','.join(individual_list))
            #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm)
            #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm))

            #thecomm2 = 'mv scan.pdf scan_{p}.pdf; mv scan.png scan_{p}.png; mv scan.root scan_{p}.root; mv outputfit.txt outputfit_{p}.txt'.format(p = poi)
            #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm2)
            #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm2))

    
    # And finally, the globals
    for poi in POIs:
        #cumulative = [x for x in POIs if x != poi]
        cumulative = []
        fileList   = []

        for gr in global_list:
            cumulative += gloGroup[gr]
            fileList.append("'higgsCombine{gp}.MultiDimFit.mH125.root:Freeze += {g}:{i}'".format(gp = gr + '_' + poi,
                                                                                                 g  = gr,
                                                                                                 i  = global_list.index(gr)))

            if not os.path.isfile(reluncpath + "/global/higgsCombine{g}_{p}.MultiDimFit.mH125.root".format(g = gr, p = poi)) or redo:
                thecomm = basecommand.format(algosettings = "--algo grid --points " + str(nps),
                                            setpars      = ",".join([el + "=1" for el in POIs]),
                                            queue        = "" if not doBatch else "--job-mode slurm --task-name " + gr + "_" + poi,
                                            parallel     = "" if not nth  else "--parallel " + str(nth),
                                            #extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit --freezeParameters {c}'.format(p = poi, g = gr, c = ",".join(cumulative)),
                                            extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit --freezeParameters {c} --saveFitResult --out {op}'.format(p = poi, g = gr, c = ",".join(cumulative), op = reluncpath + "/global"),
                                            minmaxlist   = ":".join([el + "=0,3" for el in POIs]),
                )

                if not pretend: os.system("cd {path}; rm ./higgsCombine{g}_{p}.POINTS*; cd -".format(path = reluncpath + "/global", p = poi, g = gr))
                print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm)
                if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm))

                tmpcomm = 'hadd -f higgsCombine{gp}.MultiDimFit.mH125.root higgsCombine{gp}.POINTS.*.MultiDimFit.mH125.root'.format(gp = gr + '_' + poi)


                print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = tmpcomm)
                if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = tmpcomm))


        if not os.path.isfile(reluncpath + "/global/outputfit_{p}.txt".format(p = poi)) or redo:
            thecomm = "plot1DScan.py ../nominal/higgsCombinenominal_{p}.MultiDimFit.mH125.root --others {l1} --breakdown {l2},stat --POI {p} ".format(
                p  = poi,
                l1 = ' '.join(fileList),
                l2 = ','.join(global_list))
            print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm)
            if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm))

            thecomm2 = 'mv scan.pdf scan_{p}.pdf; mv scan.png scan_{p}.png; mv scan.root scan_{p}.root; mv outputfit.txt outputfit_{p}.txt'.format(p = poi)
            print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm2)
            if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm2))
    
    """
    # First, we calculate the nominal files that we need.
    if not os.path.isfile(reluncpath + "/nominal/higgsCombinenominal.MultiDimFit.mH125.root") or redo:
        nomcomm    = basecommand.format(algosettings = "--algo grid --points " + str(nps * len(POIs)),
                                        setpars      = ",".join([el + "=1" for el in POIs]),
                                        queue        = "" if not doBatch else "--job-mode slurm --task-name nominal_" + poi,
                                        parallel     = "" if not nth  else "--parallel " + str(nth),
                                        extra        = '-n nominal {card} {c}'.format(card = thecard, c = " ".join(["-P " + el for el in POIs])),
                                        #extra        = '-n nominal {card}'.format(card = thecard, c = ",".join([el for el in POIs])),
                                        minmaxlist   = ":".join([el + "=0,3" for el in POIs]),
                                        )
        if not pretend: os.system("cd {path}; rm ./higgsCombinenominal.POINTS*; cd -".format(path = reluncpath + "/nominal"))

        print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = nomcomm)
        if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = nomcomm))

        nomcomm  = 'hadd -f higgsCombinenominal.MultiDimFit.mH125.root higgsCombinenominal.POINTS.*.MultiDimFit.mH125.root'
        print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = nomcomm)
        if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = nomcomm))

    # bestfit_POI
    if not os.path.isfile(reluncpath + "/nominal/higgsCombinebestfit.MultiDimFit.mH125.root") or redo:
        if not pretend and os.path.isfile(reluncpath + "/nominal/higgsCombinebestfit.MultiDimFit.mH125.root"):
            os.system("cd {path}; rm ./higgsCombinebestfit.MultiDimFit.mH125.root; cd -".format(path = reluncpath + "/nominal"))
        gridcomm = basecommand.format(algosettings = "--algo none",
                                        setpars    = ",".join([el + "=1" for el in POIs]),
                                        queue      = "",
                                        parallel   = "",
                                        extra      = '-n bestfit --saveWorkspace {card}'.format(card = thecard),
                                        minmaxlist   = ":".join([el + "=0,3" for el in POIs]))
        print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = gridcomm)
        if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/nominal", cmd = gridcomm))

    #sys.exit()

    ## Then, we obtain the individual-separated files.
    #for poi in POIs:
        #cumulative = [x for x in POIs if x != poi]
        #fileList   = []
        #for gr in individual_list:
            #cumulative += indGroup[gr]
            #fileList.append("'higgsCombine{gp}.MultiDimFit.mH125.root:Freeze += {g}:{i}'".format(gp = gr + '_' + poi,
                                                                                                 #g  = gr,
                                                                                                 #i  = individual_list.index(gr)))
            #if not os.path.isfile(reluncpath + "/individual/higgsCombine{g}_{p}.MultiDimFit.mH125.root".format(g = gr, p = poi)) or redo:
                #thecomm = basecommand.format(algosettings = "--algo grid --points " + str(nps),
                                            #setpars      = ",".join([el + "=1" for el in POIs]),
                                            #queue        = "" if not doBatch else "--job-mode slurm --task-name " + gr + "_" + poi,
                                            #parallel     = "" if not nth  else "--parallel " + str(nth),
                                            #extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit --freezeParameters {c}'.format(p = poi, g = gr, c = ",".join(cumulative))
                                            ##extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit'.format(p = poi, g = gr))

                #if not pretend: os.system("cd {path}; rm ./higgsCombine{g}_{p}.POINTS*; cd -".format(path = reluncpath + "/individual", p = poi, g = gr))
                #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm)
                #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm))

                #tmpcomm = 'hadd -f higgsCombine{gp}.MultiDimFit.mH125.root higgsCombine{gp}.POINTS.*.MultiDimFit.mH125.root'.format(gp = gr + '_' + poi)

                #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = tmpcomm)
                #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = tmpcomm))


        #if not os.path.isfile(reluncpath + "/individual/outputfit_{p}.txt".format(p = poi)) or redo:
            #thecomm = "plot1DScan.py ../nominal/higgsCombinenominal_{p}.MultiDimFit.mH125.root --others {l1} --breakdown {l2},stat --POI {p} ".format(
                #p  = poi,
                #l1 = ' '.join(fileList),
                #l2 = ','.join(individual_list))
            #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm)
            #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm))

            #thecomm2 = 'mv scan.pdf scan_{p}.pdf; mv scan.png scan_{p}.png; mv scan.root scan_{p}.root; mv outputfit.txt outputfit_{p}.txt'.format(p = poi)
            #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm2)
            #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/individual", cmd = thecomm2))

    
    # And finally, the globals
    for poi in POIs:
        cumulative = []
        fileList   = []

        for gr in global_list:
            cumulative += gloGroup[gr]
            fileList.append("'higgsCombine{gp}.MultiDimFit.mH125.root:Freeze += {g}:{i}'".format(gp = gr + '_' + poi,
                                                                                                 g  = gr,
                                                                                                 i  = global_list.index(gr)))

            if not os.path.isfile(reluncpath + "/global/higgsCombine{g}_{p}.MultiDimFit.mH125.root".format(g = gr, p = poi)) or redo:
                thecomm = basecommand.format(algosettings = "--algo grid --points " + str(nps),
                                            setpars      = ",".join([el + "=1" for el in POIs]),
                                            queue        = "" if not doBatch else "--job-mode slurm --task-name " + gr + "_" + poi,
                                            parallel     = "" if not nth  else "--parallel " + str(nth),
                                            extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit.MultiDimFit.mH125.root --snapshotName MultiDimFit --freezeParameters {c}'.format(p = poi, g = gr, c = ",".join(cumulative)),
                                            minmaxlist   = ":".join([el + "=0,3" for el in POIs]))

                if not pretend: os.system("cd {path}; rm ./higgsCombine{g}_{p}.POINTS*; cd -".format(path = reluncpath + "/global", p = poi, g = gr))
                print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm)
                if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm))

                tmpcomm = 'hadd -f higgsCombine{gp}.MultiDimFit.mH125.root higgsCombine{gp}.POINTS.*.MultiDimFit.mH125.root'.format(gp = gr + '_' + poi)


                print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = tmpcomm)
                if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = tmpcomm))


        if not os.path.isfile(reluncpath + "/global/outputfit_{p}.txt".format(p = poi)) or redo:
            thecomm = "plot1DScan.py ../nominal/higgsCombinenominal.MultiDimFit.mH125.root --others {l1} --breakdown {l2},stat --POI {p} ".format(
                p  = poi,
                l1 = ' '.join(fileList),
                l2 = ','.join(global_list))
            print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm)
            if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm))

            thecomm2 = 'mv scan.pdf scan_{p}.pdf; mv scan.png scan_{p}.png; mv scan.root scan_{p}.root; mv outputfit.txt outputfit_{p}.txt'.format(p = poi)
            print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm2)
            if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = reluncpath + "/global", cmd = thecomm2))
    """
    return




if __name__ == "__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',      '-i',  metavar = 'inpath',     dest = "inpath",      required = False, default = "./temp/differential")
    parser.add_argument('--pretend',     '-p',  action  = "store_true", dest = "pretend",     required = False, default = False)
    parser.add_argument('--nPoints',     '-P',  metavar = 'npoints',    dest = "npoints",     required = False, default = 128, type = int)
    parser.add_argument('--queue',       '-q',  action  = "store_true", dest = "queue",       required = False, default = False)
    parser.add_argument('--ncores',      '-j',  metavar = 'ncores',     dest = "ncores",      required = False, default = None)
    parser.add_argument('--redoAll',     '-r',  action  = "store_true", dest = "redo",        required = False, default = False)
    parser.add_argument('--year',        '-y',  metavar = 'year',       dest = "year",        required = False, default = "all")
    parser.add_argument('--variable',    '-v',  metavar = 'variable',   dest = "variable",    required = False, default = "all")

    args     = parser.parse_args()
    pretend  = args.pretend
    inpath   = args.inpath
    npoints  = args.npoints
    doBatch  = args.queue
    nthreads = args.ncores
    variable = args.variable
    year     = args.year
    redo     = args.redo

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
            if any( [el in iV for el in vl.vetolist] ): continue
            tasks.append( (inpath, iY, iV, npoints, nthreads, redo) )


    """
    if nthreads > 1:
        pool = Pool(nthreads)
        pool.map(calculateRelativeUncertainties, tasks)
        pool.close()
        pool.join()
    else:
        for tsk in tasks:
            calculateRelativeUncertainties(tsk)
    """
    # print tasks

    for tsk in tasks:
        calculateRelativeUncertainties(tsk)
