import os, sys, argparse, math

uncGroup = {
    #### MC stat
    'mc_stat' : [
        "prop_binch1_bin0",
        "prop_binch1_bin1",
        "prop_binch1_bin2",
        "prop_binch1_bin3",
        "prop_binch1_bin4",
        "prop_binch1_bin5",
        "prop_binch1_bin6",
        "prop_binch1_bin7",
        "prop_binch1_bin8",
        "prop_binch1_bin9",
        "prop_binch1_bin10",
        "prop_binch1_bin11",
        "prop_binch1_bin12",
        "prop_binch1_bin13",
        "prop_binch1_bin14",
        "prop_binch1_bin15",
        "prop_binch1_bin16",
        "prop_binch1_bin17",
        "prop_binch1_bin18",
        "prop_binch1_bin19",
        "prop_binch2_bin0",
        "prop_binch2_bin1",
        "prop_binch2_bin2",
        "prop_binch2_bin3",
        "prop_binch2_bin4",
        "prop_binch2_bin5",
        "prop_binch2_bin6",
        "prop_binch2_bin7",
        "prop_binch2_bin8",
        "prop_binch2_bin9",
        "prop_binch2_bin10",
        "prop_binch2_bin11",
        "prop_binch3_bin0",
        "prop_binch3_bin1",
        "prop_binch3_bin2",
        "prop_binch3_bin3",
        "prop_binch3_bin4",
        "prop_binch3_bin5",
        "prop_binch3_bin6",
        "prop_binch3_bin7",
        "prop_binch3_bin8",
        "prop_binch3_bin9",
        "prop_binch3_bin10",
        "prop_binch3_bin11",
        "prop_binch3_bin12",
        "prop_binch3_bin13",
        "prop_binch3_bin14",
        "prop_binch3_bin15",
    ],

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
   'systematics': [
       "prop_binch1_bin0",
       "prop_binch1_bin1",
       "prop_binch1_bin2",
       "prop_binch1_bin3",
       "prop_binch1_bin4",
       "prop_binch1_bin5",
       "prop_binch1_bin6",
       "prop_binch1_bin7",
       "prop_binch1_bin8",
       "prop_binch1_bin9",
       "prop_binch1_bin10",
       "prop_binch1_bin11",
       "prop_binch1_bin12",
       "prop_binch1_bin13",
       "prop_binch1_bin14",
       "prop_binch1_bin15",
       "prop_binch1_bin16",
       "prop_binch1_bin17",
       "prop_binch1_bin18",
       "prop_binch1_bin19",
       "prop_binch2_bin0",
       "prop_binch2_bin1",
       "prop_binch2_bin2",
       "prop_binch2_bin3",
       "prop_binch2_bin4",
       "prop_binch2_bin5",
       "prop_binch2_bin6",
       "prop_binch2_bin7",
       "prop_binch2_bin8",
       "prop_binch2_bin9",
       "prop_binch2_bin10",
       "prop_binch2_bin11",
       "prop_binch3_bin0",
       "prop_binch3_bin1",
       "prop_binch3_bin2",
       "prop_binch3_bin3",
       "prop_binch3_bin4",
       "prop_binch3_bin5",
       "prop_binch3_bin6",
       "prop_binch3_bin7",
       "prop_binch3_bin8",
       "prop_binch3_bin9",
       "prop_binch3_bin10",
       "prop_binch3_bin11",
       "prop_binch3_bin12",
       "prop_binch3_bin13",
       "prop_binch3_bin14",
       "prop_binch3_bin15",
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
       "ds",],
   'allsystematics': [
       "prop_binch1_bin0",
       "prop_binch1_bin1",
       "prop_binch1_bin2",
       "prop_binch1_bin3",
       "prop_binch1_bin4",
       "prop_binch1_bin5",
       "prop_binch1_bin6",
       "prop_binch1_bin7",
       "prop_binch1_bin8",
       "prop_binch1_bin9",
       "prop_binch1_bin10",
       "prop_binch1_bin11",
       "prop_binch1_bin12",
       "prop_binch1_bin13",
       "prop_binch1_bin14",
       "prop_binch1_bin15",
       "prop_binch1_bin16",
       "prop_binch1_bin17",
       "prop_binch1_bin18",
       "prop_binch1_bin19",
       "prop_binch2_bin0",
       "prop_binch2_bin1",
       "prop_binch2_bin2",
       "prop_binch2_bin3",
       "prop_binch2_bin4",
       "prop_binch2_bin5",
       "prop_binch2_bin6",
       "prop_binch2_bin7",
       "prop_binch2_bin8",
       "prop_binch2_bin9",
       "prop_binch2_bin10",
       "prop_binch2_bin11",
       "prop_binch3_bin0",
       "prop_binch3_bin1",
       "prop_binch3_bin2",
       "prop_binch3_bin3",
       "prop_binch3_bin4",
       "prop_binch3_bin5",
       "prop_binch3_bin6",
       "prop_binch3_bin7",
       "prop_binch3_bin8",
       "prop_binch3_bin9",
       "prop_binch3_bin10",
       "prop_binch3_bin11",
       "prop_binch3_bin12",
       "prop_binch3_bin13",
       "prop_binch3_bin14",
       "prop_binch3_bin15",
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

individual_list = ['fsr','pileup','dy_norm','colour','jes','matching','ttbar_norm','elec','nonworz_norm','btag','ue','toppt','tw_scales',
                   'vvttv_norm','mc_stat','isr','ttbar_scales','lumi','pdf','mistag','ds','jer','trigger','prefiring','muon','mtop']

global_list   = ['systematics','lumi']
onlystat_list = ['allsystematics']

poi = "r"

#basecommand = 'combineTool.py -M MultiDimFit {algosettings} --rMin 0 --rMax 3 --floatOtherPOIs=1 -m 125 --split-points 1 --setParameters r=1 -t -1 --expectSignal=1 --saveInactivePOI 1 {parallel} {extra} --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --robustFit 1 --cminDefaultMinimizerType Minuit --squareDistPoiStep --autoRange 2'

basecommand = 'combineTool.py -M MultiDimFit {algosettings} --rMin 0 --rMax 3 -m 125 --split-points 1 --floatOtherPOIs=1 --saveInactivePOI 1 {parallel} {extra} --cminDefaultMinimizerStrategy 0 --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --robustFit 1 --expectSignal=1 --squareDistPoiStep --autoRange 2'
#basecommand = 'combineTool.py -M MultiDimFit {algosettings} --rMin 0 --rMax 3 -m 125 --split-points 1 --saveInactivePOI 1 {parallel} {extra} --X-rtd MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=5000000 --robustFit 1 --expectSignal=1'


def getTheNotSoCorrectTable(tsk):
    inpath, iY, regs, nps, nth, redo, pretend = tsk
    thecard = inpath + "/" + iY + "/combcard_" + regs.replace(",", "") + ".root"

    if not os.path.isfile(thecard):
        raise RuntimeError("FATAL: no card found as " + thecard + " !")

    unctablepath = inpath + "/" + iY + "/unctable_" + regs.replace(",", "")
    for iP in ["", "/individual", "/global", "/nominal", "/onlystat", "/goodtable"]:
        if not os.path.isdir(unctablepath + iP):
            os.system("mkdir -p " + unctablepath + iP)

    thecard = "../../combcard_" + regs.replace(",", "") + ".root"
    #### PRIMERO, SACAMOS LAS COSINAS NOMINALES
    ## nominal_POI
    #if not os.path.isfile(unctablepath + "/nominal/higgsCombinenominal_{p}.MultiDimFit.mH125.root".format(p = poi)) or redo:
        #nomcomm    = basecommand.format(algosettings = "--algo grid --points " + str(nps),
                                        #parallel     = "" if not nth  else "--parallel " + str(nth),
                                        #extra        = '-n nominal_{p} {card} -P {p}'.format(p = poi, card = thecard),
                                        #)
        #if not pretend: os.system("cd {path}; rm ./higgsCombinenominal_{p}.POINTS*; cd -".format(path = unctablepath + "/nominal", p = poi))

        #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/nominal", cmd = nomcomm)
        #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/nominal", cmd = nomcomm))

        #nomcomm  = 'hadd -f higgsCombinenominal_{p}.MultiDimFit.mH125.root higgsCombinenominal_{p}.POINTS.*.MultiDimFit.mH125.root'.format(p = poi)
        #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/nominal", cmd = nomcomm)
        #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/nominal", cmd = nomcomm))

    ## bestfit_POI
    #if not os.path.isfile(unctablepath + "/nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root".format(p = poi)) or redo:
        #if not pretend and os.path.isfile(unctablepath + "/nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root".format(p = poi)):
            #os.system("cd {path}; rm ./higgsCombinebestfit_{p}.MultiDimFit.mH125.root; cd -".format(path = unctablepath + "/nominal", p = poi))
        #gridcomm = basecommand.format(algosettings = "--algo none",
                                        #parallel   = "",
                                        #extra      = '-n bestfit_{p} --saveWorkspace {card} -P {p}'.format(p = poi, card = thecard),
                                        #)
        #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/nominal", cmd = gridcomm)
        #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/nominal", cmd = gridcomm))



    #### LUEGO, SACAMOS LA INCERTIDUMBRE ESTADISTICA PA RESTALA DESPUES
    #cumulative = []
    #fileList   = []
    #for gr in onlystat_list:
        #cumulative += uncGroup[gr]
        #fileList.append("'higgsCombine{gp}.MultiDimFit.mH125.root:Freeze += {g}:{i}'".format(gp = gr + '_' + poi,
                                                                                             #g  = gr,
                                                                                             #i  = onlystat_list.index(gr)))

        #if not os.path.isfile(unctablepath + "/onlystat/higgsCombine{g}_{p}.MultiDimFit.mH125.root".format(g = gr, p = poi)) or redo:
            #thecomm = basecommand.format(algosettings = "--algo grid --points " + str(nps),
                                        #parallel     = "" if not nth  else "--parallel " + str(nth),
                                        #extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit --freezeParameters {c} --saveFitResult --out {op}'.format(p = poi, g = gr, c = ",".join(cumulative), op = unctablepath + "/onlystat"),
            #)

            #if not pretend: os.system("cd {path}; rm ./higgsCombine{g}_{p}.POINTS*; cd -".format(path = unctablepath + "/onlystat", p = poi, g = gr))
            #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/onlystat", cmd = thecomm)
            #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/onlystat", cmd = thecomm))

            #tmpcomm = 'hadd -f higgsCombine{gp}.MultiDimFit.mH125.root higgsCombine{gp}.POINTS.*.MultiDimFit.mH125.root'.format(gp = gr + '_' + poi)


            #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/onlystat", cmd = tmpcomm)
            #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/onlystat", cmd = tmpcomm))


    #if not os.path.isfile(unctablepath + "/onlystat/outputfit_{p}.txt".format(p = poi)) or redo:
        #thecomm = "plot1DScan.py ../nominal/higgsCombinenominal_{p}.MultiDimFit.mH125.root --others {l1} --breakdown {l2},stat --POI {p} ".format(
            #p  = poi,
            #l1 = ' '.join(fileList),
            #l2 = ','.join(onlystat_list))
        #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/onlystat", cmd = thecomm)
        #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/onlystat", cmd = thecomm))

        #thecomm2 = 'mv scan.pdf scan_{p}.pdf; mv scan.png scan_{p}.png; mv scan.root scan_{p}.root; mv outputfit.txt outputfit_{p}.txt'.format(p = poi)
        #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/onlystat", cmd = thecomm2)
        #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/onlystat", cmd = thecomm2))


    #### LUEGO HACEMOS LOS GLOBALES, QUE ESTAN BIEN HECHOS PARA TENER TODO SEPARADO
    #cumulative = []
    #fileList   = []
    #for gr in global_list:
        #cumulative += uncGroup[gr]
        #fileList.append("'higgsCombine{gp}.MultiDimFit.mH125.root:Freeze += {g}:{i}'".format(gp = gr + '_' + poi,
                                                                                             #g  = gr,
                                                                                             #i  = global_list.index(gr)))

        #if not os.path.isfile(unctablepath + "/global/higgsCombine{g}_{p}.MultiDimFit.mH125.root".format(g = gr, p = poi)) or redo:
            #thecomm = basecommand.format(algosettings = "--algo grid --points " + str(nps),
                                        #parallel     = "" if not nth  else "--parallel " + str(nth),
                                        #extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit --freezeParameters {c} --saveFitResult --out {op}'.format(p = poi, g = gr, c = ",".join(cumulative), op = unctablepath + "/global"),
            #)

            #if not pretend: os.system("cd {path}; rm ./higgsCombine{g}_{p}.POINTS*; cd -".format(path = unctablepath + "/global", p = poi, g = gr))
            #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/global", cmd = thecomm)
            #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/global", cmd = thecomm))

            #tmpcomm = 'hadd -f higgsCombine{gp}.MultiDimFit.mH125.root higgsCombine{gp}.POINTS.*.MultiDimFit.mH125.root'.format(gp = gr + '_' + poi)


            #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/global", cmd = tmpcomm)
            #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/global", cmd = tmpcomm))


    #if not os.path.isfile(unctablepath + "/global/outputfit_{p}.txt".format(p = poi)) or redo:
        #thecomm = "plot1DScan.py ../nominal/higgsCombinenominal_{p}.MultiDimFit.mH125.root --others {l1} --breakdown {l2},stat --POI {p} ".format(
            #p  = poi,
            #l1 = ' '.join(fileList),
            #l2 = ','.join(global_list))
        #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/global", cmd = thecomm)
        #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/global", cmd = thecomm))

        #thecomm2 = 'mv scan.pdf scan_{p}.pdf; mv scan.png scan_{p}.png; mv scan.root scan_{p}.root; mv outputfit.txt outputfit_{p}.txt'.format(p = poi)
        #print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/global", cmd = thecomm2)
        #if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/global", cmd = thecomm2))


    ##### AQUI HACEMOS UNA TABLA COMO DIOS MANDA
    cumulative = []
    fileList   = []
    for gr in individual_list:
        cumulative += uncGroup[gr]
        fileList.append("'higgsCombine{gp}.MultiDimFit.mH125.root:Freeze += {g}:{i}'".format(gp = gr + '_' + poi,
                                                                                             g  = gr,
                                                                                             i  = individual_list.index(gr)))

        if not os.path.isfile(unctablepath + "/goodtable/higgsCombine{g}_{p}.MultiDimFit.mH125.root".format(g = gr, p = poi)) or redo:
            thecomm = basecommand.format(algosettings = "--algo grid --points " + str(nps),
                                        parallel     = "" if not nth  else "--parallel " + str(nth),
                                        extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit --freezeParameters {c} --saveFitResult --out {op}'.format(p = poi, g = gr, c = ",".join(cumulative), op = unctablepath + "/goodtable"),
            )

            if not pretend: os.system("cd {path}; rm ./higgsCombine{g}_{p}.POINTS*; cd -".format(path = unctablepath + "/goodtable", p = poi, g = gr))
            print("\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/goodtable", cmd = thecomm))
            if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/goodtable", cmd = thecomm))

            tmpcomm = 'hadd -f higgsCombine{gp}.MultiDimFit.mH125.root higgsCombine{gp}.POINTS.*.MultiDimFit.mH125.root'.format(gp = gr + '_' + poi)


            print("\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/goodtable", cmd = tmpcomm))
            if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/goodtable", cmd = tmpcomm))


    if not os.path.isfile(unctablepath + "/goodtable/outputfit_{p}.txt".format(p = poi)) or redo:
        thecomm = "plot1DScan.py ../nominal/higgsCombinenominal_{p}.MultiDimFit.mH125.root --others {l1} --breakdown {l2},stat --POI {p} ".format(
            p  = poi,
            l1 = ' '.join(fileList),
            l2 = ','.join(individual_list))
        print("\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/goodtable", cmd = thecomm))
        if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/goodtable", cmd = thecomm))

        thecomm2 = 'mv scan.pdf scan_{p}.pdf; mv scan.png scan_{p}.png; mv scan.root scan_{p}.root; mv outputfit.txt outputfit_{p}.txt'.format(p = poi)
        print("\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/goodtable", cmd = thecomm2))
        if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/goodtable", cmd = thecomm2))


    ### Y FINALMENTE HACEMOS LOS INDIVIDUALES HECHOS DE FORMA RARA
    # for gr in individual_list:
    #     #if gr != "mc_stat": continue
    #     #print "\nOJOJOJOJOJOJOJ", gr
    #     cumulative = []
    #     fileList   = []
    #     for el in individual_list:
    #         if el != gr:
    #             cumulative += uncGroup[el]
    #     #print cumulative
    #     if gr == "mc_stat": cumulative.remove("muonen_2016")

    #     fileList.append("'higgsCombine{gp}.MultiDimFit.mH125.root:Freeze += {g}:{i}'".format(gp = gr + '_' + poi,
    #                                                                                          g  = "todomenos" + gr,
    #                                                                                          i  = 0))
    #     #print fileList

    #     if not os.path.isfile(unctablepath + "/individual/higgsCombine{g}_{p}.MultiDimFit.mH125.root".format(g = gr, p = poi)) or redo:
    #         thecomm = basecommand.format(algosettings = "--algo grid --points " + str(nps),
    #                                      parallel     = "" if not nth  else "--parallel " + str(nth),
    #                                      extra        = '-P {p} -n {g}_{p} ../nominal/higgsCombinebestfit_{p}.MultiDimFit.mH125.root --snapshotName MultiDimFit --freezeParameters {c} --saveFitResult --out {op}'.format(p = poi, g = gr, c = ",".join(cumulative), op = unctablepath + "/individual"),
    #         )

    #         if not pretend: os.system("cd {path}; rm ./higgsCombine{g}_{p}.POINTS*; cd -".format(path = unctablepath + "/individual", p = poi, g = gr))
    #         print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/individual", cmd = thecomm)
    #         if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/individual", cmd = thecomm))

    #         tmpcomm = 'hadd -f higgsCombine{gp}.MultiDimFit.mH125.root higgsCombine{gp}.POINTS.*.MultiDimFit.mH125.root'.format(gp = gr + '_' + poi)


    #         print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/individual", cmd = tmpcomm)
    #         if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/individual", cmd = tmpcomm))


    #     if not os.path.isfile(unctablepath + "/individual/outputfit_{p}_{g}.txt".format(p = poi, g = gr)) or redo:
    #         thecomm = "plot1DScan.py ../nominal/higgsCombinenominal_{p}.MultiDimFit.mH125.root --others {l1} --breakdown {l2},statyelqueinteresa --POI {p} ".format(
    #             p  = poi,
    #             l1 = ' '.join(fileList),
    #             l2 = "todomenos" + gr)
    #         print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/individual", cmd = thecomm)
    #         if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/individual", cmd = thecomm))

    #         thecomm2 = 'mv scan.pdf scan_{p}_{g}.pdf; mv scan.png scan_{p}_{g}.png; mv scan.root scan_{p}_{g}.root; mv outputfit.txt outputfit_{p}_{g}.txt'.format(p = poi, g = gr)
    #         print "\nCommand:", "cd {p}; {cmd}; cd -".format(p = unctablepath + "/individual", cmd = thecomm2)
    #         if not pretend: os.system("cd {p}; {cmd}; cd -".format(p = unctablepath + "/individual", cmd = thecomm2))

    #sys.exit()
    #### Y ahora construimos un outputfit artificial a partir de lo que tenemos aqui
    # Primero, recuperamos la inc. stat.
    # statup = 0.; statdown = 0.; val = 0.
    # with open(unctablepath + "/onlystat/outputfit_r.txt", "r") as f:
    #     for line in f:
    #         if "stat" in line:
    #             tmpline  = line.strip().replace(" ", "").split(":")
    #             statup   = float(tmpline[1])
    #             statdown = float(tmpline[2])
    #         if "val" in line:
    #             tmpline  = line.strip().replace(" ", "").split(":")
    #             val      = float(tmpline[1])

    # outtxt = ""
    # outf = open(unctablepath + "/individual/outputfit_all.txt", "w")
    # outtxt += "val : " + str(val) + "\n"
    # totalup = 0.; totaldown = 0.
    # for gr in individual_list:
    #     tmpup = 0.; tmpdown = 0.
    #     print(gr)
    #     with open(unctablepath + "/individual/outputfit_r_{g}.txt".format(g = gr), "r") as f:
    #         for line in f:
    #             if "statyelqueinteresa" in line:
    #                 tmpline = line.strip().replace(" ", "").split(":")
    #                 tmpup   = math.sqrt(float(tmpline[1])**2 - statup**2)
    #                 tmpdown = math.sqrt(float(tmpline[2])**2 - statdown**2)
    #                 totalup += tmpup**2; totaldown += tmpdown**2
    #     outtxt += "inc_{g} : ".format(g = gr) + str(tmpup) + " : " + str(tmpdown) + "\n"
    # outtxt += "inc_stat : " + str(statup) + " : " + str(statdown) + "\n"
    # totalup += statup**2; totaldown += statdown**2
    # outf.write(outtxt)
    # outf.close()
    # print(math.sqrt(totalup)/val, math.sqrt(totaldown)/val)
    return



if __name__ == "__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',    '-i',  metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/cards")
    parser.add_argument('--pretend',   '-p',  action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--nPoints',   '-P',  metavar = 'npoints',    dest = "npoints",  required = False, default = 100, type = int)
    parser.add_argument('--ncores',    '-j',  metavar = 'ncores',     dest = "ncores",   required = False, default = None)
    parser.add_argument('--year',      '-y',  metavar = 'year',       dest = "year",     required = False, default = "all")
    parser.add_argument('--region',    '-r',  metavar = 'region',     dest = "region",   required = False, default = "1j1t,2j1t,2j2t")
    parser.add_argument('--redoAll',   '-rA',  action  = "store_true", dest = "redo",    required = False, default = False)

    args    = parser.parse_args()
    pretend = args.pretend
    inpath  = args.inpath
    npoints = args.npoints
    ncores  = args.ncores
    year    = args.year
    region  = args.region
    redo    = args.redo


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

        tasks.append( (inpath, iY, region, npoints, ncores, redo, pretend) )


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
        getTheNotSoCorrectTable(tsk)
