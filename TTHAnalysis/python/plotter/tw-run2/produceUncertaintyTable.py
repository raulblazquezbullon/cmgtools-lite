import os, sys, argparse

systsGroup = {
    #### Statistical
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
        "prop_binch2_bin0",
        "prop_binch2_bin1",
        "prop_binch2_bin2",
        "prop_binch2_bin3",
        "prop_binch2_bin4",
        "prop_binch2_bin5",
        "prop_binch3_bin0",
        "prop_binch3_bin1",
        "prop_binch3_bin2",
        "prop_binch3_bin3",
        "prop_binch3_bin4",
        "prop_binch3_bin5",
        "prop_binch3_bin6",
        "prop_binch3_bin7",
    ],

    #### Systematic
    # Experimental
    'jes': [
        "jes",
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
        "btagging",
    ],
    'mistag': [
        "mistagging",
    ],
    'lumi': [
        "lumi_2016",
        "lumi_2017",
        "lumi_2018",
        "lumi_BBD",
        "lumi_BCC",
        "lumi_DB",
        "lumi_GS",
        "lumi_LS",
        "lumi_XY",
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
    #'pdf' : [
        #"pdf",
    #],
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
        "fsr_ttbar",
        "fsr_tw",
    ],
    'colour' : [
        "colour_rec",
    ],
    'ue' : [
        "ue",
    ],
    'toppt' : [
        "topptrew",
    ],
    #'mtop' : [
    #],
    #'ds' : [
    #],
}

POIs   = ["r"]



groupList   = ['mc_stat', 'jes', "jer", 'trigger', 'pileup', 'elec', "muon", 'btag', 'mistag', 'lumi', 'prefiring', 'ttbar_norm', 'nonworz_norm', 'dy_norm' , 'vvttv_norm', "matching", "ttbar_scales", "tw_scales","isr", "fsr", "colour", "ue", "toppt"]


basecommand = '\ncombineTool.py -M MultiDimFit --algo grid --points 100 --rMin 0 --rMax 3 --floatOtherPOIs=1 -m 125  --split-points 1 --setParameters r=1 -t -1 --expectSignal=1 --job-mode SGE --saveInactivePOI 1 '




if __name__ == "__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--inpath',    '-i', metavar = 'inpath',     dest = "inpath",   required = False, default = "./temp/cards/combinada.root")
    parser.add_argument('--step',      '-s', metavar = 'step',       dest = "step",     required = False, default = 1, type = int)
    parser.add_argument('--pretend',   '-p', action  = "store_true", dest = "pretend",  required = False, default = False)
    parser.add_argument('--nToys',     '-t', metavar = 'ntoys',      dest = "ntoys",    required = False, default = 100, type = int)

    args     = parser.parse_args()
    pretend  = args.pretend
    thecard  = args.inpath
    step     = args.step
    ntoys    = args.ntoys

    thepath  = "/".join(thecard.split("/")[:-1])

    if step == 1:
        for poi in POIs:
            cumulative      = [x for x in ["r"] if x != poi]

            nomcomm = basecommand + '-n nominal_%s %s --task-name nominal_%s -P %s %s'%(poi, thecard, poi, poi, ",".join(cumulative))
            print "Command:", nomcomm
            if not pretend: os.system(nomcomm)

            gridcomm = basecommand.replace('--algo grid','--algo none').replace("--points 100","").replace("--job-mode SGE","")+ '-n bestfit_%s --saveWorkspace %s -P %s '%(poi, thecard, poi)
            print "Command:", gridcomm
            if not pretend: os.system(gridcomm)

            for group in groupList:
                cumulative += systsGroup[group]
                thecomm = basecommand + ' -P %s '%poi + '-n ' + group + '_%s'%poi + ' higgsCombinebestfit_%s.MultiDimFit.mH125.root --snapshotName MultiDimFit  --freezeParameters %s'%(poi,",".join(cumulative)) + ' --task-name %s_%s'%(group,poi)
                print "Command:", thecomm
                if not pretend: os.system(thecomm)
    elif step == 2:
        for poi in POIs:
            fileList        = [ ]
            nomcomm = 'hadd higgsCombinenominal_%s.MultiDimFit.mH125.root higgsCombinenominal_%s.POINTS.*.MultiDimFit.mH125.root'%(poi, poi)
            print "Command:", nomcomm
            if not pretend: os.system(nomcomm)

            for gr in groupList:
                tmpcomm = 'hadd higgsCombine%s.MultiDimFit.mH125.root higgsCombine%s.POINTS.*.MultiDimFit.mH125.root'%(gr+'_'+poi,gr+'_'+poi)
                fileList.append( "'higgsCombine%s.MultiDimFit.mH125.root:Freeze += %s:%d'"%(gr+'_'+poi,gr,groupList.index(gr)))
                print "Command:", tmpcomm
                if not pretend: os.system(tmpcomm)

            thecomm = 'plot1DScan.py higgsCombinenominal_%s.MultiDimFit.mH125.root --others '%poi +' '.join( fileList ) +' --breakdown '  + ','.join(groupList) +',stat'  + " --POI %s "%poi
            print "Command:", thecomm
            if not pretend: os.system(thecomm)

            thecomm = 'mv scan.pdf scan_%s.pdf; mv scan.png scan_%s.png'%(poi, poi)
            print 'Command:', thecomm
            if not pretend: os.system(thecomm)

    else:
        raise RuntimeError("FATAL: unknown step asked to process.")
