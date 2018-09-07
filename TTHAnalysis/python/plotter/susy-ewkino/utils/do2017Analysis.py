import os
from optparse import OptionParser

pr = OptionParser(usage="%prog doWhat [options]")

#Model options
pr.add_option("--2016", dest = "use2016", action="store_true", default = False, help = "Use 2016 MC/Data")
pr.add_option("--pdir", dest = "outname", type="string", default = "~/www/EWKino/", help = "Output (folder) name")
pr.add_option("--idir", dest = "inname", type="string", default = None, help = "Input (folder) name")
pr.add_option("--cut", dest = "cut", type="string", default = None, help = "Input cutfile")
pr.add_option("--mca", dest = "mca", type="string", default = None, help = "Input mcafile")
pr.add_option("-j", dest = "jobs", type="int", default = None, help = "Number of simultaneous jobs for multithreaded procedures")

#Output formats
(options, args) = pr.parse_args()

doWhat = args[0]
toShow = ["Fits"]

### Always copy the php script for easiness of work and also create the output dir 
if not(os.path.isdir(options.outname)):
    os.mkdir(options.outname)
    if doWhat in toShow:
        os.system("cp ~/www/index.php %s"%options.outname)

### Likelihood fits and plots ###
if doWhat == "Fits":
    if options.use2016:
        print "# HT FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo htJet30j_prompt_WZ --lX \'H_{T}(jet, p_{T} > 30 GeV) [GeV]\' --lY 'Events' --fit ht --pdir %s/ht_fit"%options.outname
        print "# MET FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo met_prompt_WZ --lX \'p_{T}^{miss} [GeV]\' --lY 'Events' --fit met --pdir %s/met_fit"%options.outname
        print "# MLL FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo mll3l_prompt_WZ --lX \'M_{ll} [GeV]\' --lY 'Events' --fit mll --pdir %s/mll_fit"%options.outname
        print "# MTW FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo mtW3l_prompt_WZ --lX \'M_{T}^{W} [GeV]\' --lY 'Events' --fit mtW --pdir %s/mtw_fit"%options.outname
    else:
        print "# HT FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo htJet30j_prompt_WZ --lX \'H_{T}(jet, p_{T} > 30 GeV) [GeV]\' --lY 'Events' --fit ht --pdir %s/ht_fit"%options.outname
        print "# MET FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo met_prompt_WZ --lX \'p_{T}^{miss} [GeV]\' --lY 'Events' --fit met --pdir %s/met_fit"%options.outname
        print "# MLL FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo mll3l_prompt_WZ --lX \'M_{ll} [GeV]\' --lY 'Events' --fit mll --pdir %s/mll_fit"%options.outname
        print "# MTW FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo mtW3l_prompt_WZ --lX \'M_{T}^{W} [GeV]\' --lY 'Events' --fit mtW --pdir %s/mtw_fit"%options.outname

###FriendTree producer
if "friend_" in doWhat:
    baseCommand = "python prepareEventVariablesFriendTree.py  [INTREES] [OUTTREES] --tra2 --tree treeProducerSusyMultilepton --vector -T sf   -N 100000 -I CMGTools.TTHAnalysis.tools.multilepFriendTreeProducersToCleanup --onlyMC"
    print "Friend tree producer: cd $CMSSW/src/CMGTools/TTHAnalysis/macros/"
    if "PU" in doWhat or "PileUp" in doWhat:
        ### Pile-up reweighting. Nominal (62.9) +-5% files already in ../data/pileup/ folder
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULE]", "-m vtxWeight -m vtxWeightUp -m vtxWeightDown")

    elif "ReCleaner" in doWhat or "RC" in doWhat:
        ### Standard 3l recleaner
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULE]", "-m leptonReCleanerSUSYEWK3L")

    elif "Builder" in doWhat or "B" in doWhat:
        ### Standard 3l recleaner
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULE]", "-m leptonBuilderEWK --F sf/t pool/ciencias/HeppyTrees/RA7/estructura_MC_Jul2017_EWKINO_skim3LepGood/1_reclEWK3L/evVarFriend_{cname}.root")

    elif "bTag" in doWhat or "BW" in doWhat:
        ### Standard 3l recleaner
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULE]", "-m eventBTagWeightDeepCSV --F sf/t pool/ciencias/HeppyTrees/RA7/estructura_MC_Jul2017_EWKINO_skim3LepGood/1_reclEWK3L/evVarFriend_{cname}.root")

###Tree Skimming
if doWhat == "skim":
        mca = "susy-ewkino/utils/mca_3l_skim.txt" if not options.mca else options.mca
        cut = "susy-ewkino/utils/cuts_3l_skim.txt" if not options.cut else options.cut
        jobs = 8 if not options.jobs else options.jobs
        print "python skimTrees.py %s %s -P %s --tree treeProducerSusyMultilepton --s2v %s -j %i"%(mca,cut, options.inname, options.outname, options.jobs)
        ###Skimming friends
        print "Then execute later for each of the friends..."
        print "python skimFTrees.py %s  %s/%s %s"%(options.outname, options.inname + "[FTREE]", options.outname)
