import os, sys
nCores = 8
submit = '{command}' 
submit = '''sbatch -c %d -p batch  --wrap '{command}' '''%nCores



if len(sys.argv) < 4: 
    print 'Sytaxis is %s [outputdir] [year] [region] [other]'%sys.argv[0]
    raise RuntimeError

OUTNAME = sys.argv[1]
YEAR    = sys.argv[2]
REGION  = sys.argv[3]
OTHER   = sys.argv[4:] if len(sys.argv) > 4 else ''

friendspath  = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"

mcpath       = "/pool/ciencias/nanoAODv6/29jan2020_MC"
datapath     = "/pool/ciencias/nanoAODv6/13jan2020"
logpath      = friendspath + "/{p}/{y}/logs/plots"

friendsscaff = "--Fs {fpath}/{p}/{y}/0_yeartag --Fs {fpath}/{p}/{y}/1_lepmerge_roch --Fs {fpath}/{p}/{y}/2_cleaning --Fs {fpath}/{p}/{y}/3_varstrigger --FMCs {fpath}/{p}/{y}/4_scalefactors"

commandscaff = "python mcPlots.py --tree NanoAOD --pdir {outpath} {friends} {samplespaths} -f -l {lumi} {nth} --year {year} --maxRatioRange 0.6 1.99 --ratioYNDiv 210 --showRatio --attachRatioPanel --fixRatioRange --legendColumns 3 --legendWidth 0.52 --legendFontSize 0.042 --noCms --topSpamSize 1.1 --lspam '#scale[1.1]{{#bf{{CMS}}}} #scale[0.9]{{#it{{Preliminary}}}}' --showMCError -W 'MuonSF * ElecSF * TrigSF * puWeight * bTagWeight{extraweights}' -L tw-run2/functions_tw.cc {selplot} {mcafile} {cutsfile} {plotsfile} {extra}"

slurmscaff   = "sbatch -c {nth} -p {queue} -J {jobname} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{command}'"

friendfolders = ["0_yeartag", "1_lepmerge_roch", "2_cleaning", "3_varstrigger", "4_scalefactors", "5_mvas"]
lumidict      = {2016 : 35.92, 2017 : 41.53, 2018 : 59.74}




#### SCAFFOLD
OPTIONS=" --tree NanoAOD --s2v -j {J} -l {LUMI} -f --WA prescaleFromSkim --split-factor=-1 ".format(LUMI = LUMI, J = nCores)
os.system("test -d cards/{OUTNAME} || mkdir -p cards/{OUTNAME}".format(OUTNAME=OUTNAME))
OPTIONS="{OPTIONS} --od cards/{OUTNAME} ".format(OPTIONS=OPTIONS, OUTNAME=OUTNAME)


T2L = "-P {ORIGIN}/NanoTrees_TTH_090120_v6_triggerFix_skim2lss/{YEAR} -P {ORIGIN}/NanoTrees_TTH_091019_v6pre_skim2lss/{YEAR} --FMCs {{P}}/0_jmeUnc_v1_sources  --FMCs {{P}}/1_recl_sources --FDs {{P}}/1_recl --FMCs {{P}}/2_scalefactors_jecAllVars --FMCs {{P}}/2_scalefactors_lep --Fs {{P}}/3_tauCount --Fs {{P}}/6_mva3l_updated/ --FMCs {{P}}/6_mva2lss_allVars/ --FDs {{P}}/6_mva2lss  --Fs {{P}}/6_mva4l --xf TTTW --xf TTWH".format(ORIGIN=ORIGIN, YEAR=YEAR)
T3L = T2L
T4L = T2L

SYSTS="--unc ttH-multilepton/systsUnc.txt --amc --xu CMS_ttHl_TTZ_lnU,CMS_ttHl_TTW_lnU"
MCAOPTION=""
MCAOPTION="-splitdecays"
ASIMOV="--asimov signal"
SCRIPT= "makeShapeCardsNew.py"
PROMPTSUB="--plotgroup data_fakes+=.*_promptsub"

if 'unblind' in OTHER:
    ASIMOV=""

print "We are using the asimov dataset"
OPTIONS="{OPTIONS} -L ttH-multilepton/functionsTTH.cc --mcc ttH-multilepton/lepchoice-ttH-FO.txt --mcc ttH-multilepton/mcc-METFixEE2017.txt {PROMPTSUB} --neg   --threshold 0.01 {ASIMOV} --filter ttH-multilepton/filter-processes.txt ".format(OPTIONS=OPTIONS,PROMPTSUB=PROMPTSUB,ASIMOV=ASIMOV) # neg necessary for subsequent rebin #  
CATPOSTFIX=""

FUNCTION_2L="ttH_catIndex_2lss_MVA(LepGood1_pdgId,LepGood2_pdgId,DNN_2lss_predictions_ttH,DNN_2lss_predictions_ttW,DNN_2lss_predictions_tHQ,DNN_2lss_predictions_Rest)"
ONEBIN="1 1,0.5,1.5"
MCASUFFIX="mcdata-frdata"

DOFILE = ""

OPT_2L='{T2L} {OPTIONS} -W "L1PreFiringWeight_Nom*puWeight*btagSF_shape*leptonSF_2lss*triggerSF_ttH(LepGood1_pdgId, LepGood1_conePt, LepGood2_pdgId, LepGood2_conePt, 2, year)"'.format(T2L=T2L, OPTIONS=OPTIONS)

CATPOSTFIX=""
for ch in ['ee', 'em', 'mm']:
    for node in ['Rest', 'tHQ', 'ttH', 'ttW']:
    CATNAME="{ch}_{node}node".format(ch=ch,node=node)
    CATBINS="[0.5,1.5,2.5,3.5,4.5,5.5]"
    CUT="{FUNCTION_2L} > 0 && {FUNCTION_2L} < 6".format(FUNCTION_2L=FUNCTION_2L)

    TORUN='''python {SCRIPT} ttH-multilepton/mca-2lss-{MCASUFFIX}{MCAOPTION}.txt ttH-multilepton/2lss_tight_legacy.txt "{FUNCTION_2L}" "{CATBINS}" {SYSTS} {OPT_2L} --binname ttH_2lss_0tau_{ch}_{node}node_{YEAR} --year {YEAR} -A ^alwaystrue regcut "{CUT}"'''.format(SCRIPT=SCRIPT, MCASUFFIX=MCASUFFIX, MCAOPTION=MCAOPTION, FUNCTION_2L=FUNCTION_2L, CATBINS=CATBINS, SYSTS=SYSTS, OPT_2L=OPT_2L,ch=ch,node=node,YEAR=YEAR,CUT=CUT)


def CardsCommand(prod, year, nthreads, outpath, selplot, region, extra):
    mcafile_   = "tw-run2/mca-tw-{y}.txt".format(y = year)
    cutsfile_  = "tw-run2/cuts-tw-{reg}.txt".format(reg = region)
    plotsfile_ = "tw-run2/plots-tw-{reg}.txt".format(reg = region)

    samplespaths_ = "-P " + mcpath + "/" + str(year) + " -P " + datapath + "/" + str(year)
    extraweights_ = "" if year == 2018 else " * PrefireWeight"

    nth_       = "" if nthreads == 0 else ("--split-factor=-1 -j " + str(nthreads))
    friends_   = friendsscaff.format(fpath = friendspath,
                                     p     = prod,
                                     y     = year)
    outpath_   = outpath + "/" + str(year) + "/" + region


    comm = commandscaff.format(outpath      = outpath_,
                               friends      = friends_,
                               samplespaths = samplespaths_,
                               lumi      = lumidict[year],
                               nth       = nth_,
                               year      = year,
                               extraweights = extraweights_,
                               selplot   = "" if selplot == "" else ("--sP " + selplot),
                               mcafile   = mcafile_,
                               cutsfile  = cutsfile_,
                               plotsfile = plotsfile_,
                               extra     = extra)

    return comm


if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--production','-P', metavar = "prod",      dest = "prod",    required = True)
    parser.add_argument('--year',      '-y', metavar = 'year',      dest = "year",    required = False, default = 2016, type = int)
    parser.add_argument('--queue',     '-q', metavar = 'queue',     dest = "queue",   required = False, default = "")
    parser.add_argument('--extraArgs', '-e', metavar = 'extra',     dest = "extra",   required = False, default = "")
    parser.add_argument('--nthreads',  '-j', metavar = 'nthreads',  dest = "nthreads",required = False, default = 0, type = int)
    parser.add_argument('--pretend',   '-p', action = "store_true", dest = "pretend", required = False, default = False)
    parser.add_argument('--outpath',   '-o', metavar = 'outpath',   dest = "outpath", required = False, default = "./temp/varplots")
    parser.add_argument('--region',    '-r', metavar = 'region',    dest = "region",  required = False, default = "1j1t")


    args     = parser.parse_args()
    prod     = args.prod
    year     = args.year
    queue    = args.queue
    extra    = args.extra
    nthreads = args.nthreads
    pretend  = args.pretend
    outpath  = args.outpath
    region   = args.region


    if queue != "":
        print "> Plotting jobs will be sent to the cluster."
        if abs(year - 2017) > 1:
            print "   - All three years will be plotted."
            cont = False
            if   pretend:
                cont = True
            elif confirm("Three jobs will be sent to queue {q} with {j} requested threads to plot in each year {pls}. Do you want to continue?".format(q = queue, j = nthreads, pls = "all the plots" if selplot == "" else selplot)):
                cont = True

            if cont:
                for y in [2016, 2017, 2018]:
                    GeneralExecutioner( (prod, y, nthreads, outpath, selplot, region, queue, extra, pretend) )
        else:
            cont = False
            if   pretend:
                cont = True
            elif confirm("One job will be sent to queue {q} with {j} requested threads to plot in year {y} {pls}. Do you want to continue?".format(q = queue, j = nthreads, y = year, pls = "all the plots" if selplot == "" else selplot)):
                cont = True

            if cont:
                GeneralExecutioner( (prod, year, nthreads, outpath, selplot, region, queue, extra, pretend) )
    else:
        print "> Local execution chosen."
        GeneralExecutioner( (prod, year, nthreads, outpath, selplot, region, queue, extra, pretend) )
