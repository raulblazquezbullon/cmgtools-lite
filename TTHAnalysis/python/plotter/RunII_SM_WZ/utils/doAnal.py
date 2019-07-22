import os
from optparse import OptionParser

pr = OptionParser(usage="%prog doWhat [options]")


"""python doAnal.py friend_all --year 2018 --datatype nano --pdir ~/www/wz/ --extra '-N 50000 --onlyMC -n -q all.q --env oviedo'"""

#Model options
pr.add_option("--year", dest = "year", type=int, default = 2018, help = "What year to use")
pr.add_option("--datatype", dest = "datatype", type="string", default = "nano", help = "What kind of data format: nanoAOD, heppyTree, etc.")
pr.add_option("--extra", dest = "extra", type="string", default = "", help = "Whatever fancy things you want to add to the command")
pr.add_option("--pdir", dest = "outname", type="string", default = "~/www/wzsm/", help = "Output (folder) name")
pr.add_option("--idir", dest = "inname", type="string", default = "NONE", help = "Input (folder) name")
pr.add_option("--skim", dest = "skim", action="store_true", default = False, help = "Input (folder) name")
pr.add_option("--cut", dest = "cut", type="string", default = "RunII_SM_WZ/2018/cuts_wzsm.txt", help = "Input cutfile")
pr.add_option("--mca", dest = "mca", type="string", default = "RunII_SM_WZ/2018/mca_wz.txt", help = "Input mcafile")
pr.add_option("--plots", dest = "plots", type="string", default = "RunII_SM_WZ/2018/plots_wz.txt", help = "Input plotfile")
pr.add_option("-j", dest = "jobs", type="int", default = None, help = "Number of simultaneous jobs for multithreaded procedures")

#Output formats
(options, args) = pr.parse_args()

doWhat = args[0]

#This is just to know whether to copy or not the thingie to visualize in the web
toShow = ["Fits"]

### Always copy the php script for easiness of work and also create the output dir 
if False: #not(os.path.isdir(options.outname)):
    os.mkdir(options.outname)
    showIt = any([j in doWhat for j in toShow])
    if showIt:
        os.system("cp ~/www/index.php %s"%options.outname)

### This are general use cases
if options.datatype == "nano":
    treeName     = "Events"
    moduleFolder = "multilepWZTreeProducers"
    if options.inname == "NONE":
        options.inname = "/pool/ciencias/HeppyTrees/RA7/nanoAODv4_%s_estructure%s/"%(str(options.year), "_skim_3lepgood" if options.skim else "")

elif options.datatype == "heppy":
    treeName = "tree"
    moduleFolder = "multilepFriendTreeProducersToCleanup"



###FriendTree producer
if "friend_" in doWhat:
    baseCommand = "python prepareEventVariablesFriendTree.py %s [OUTTREES] --tree treeProducerSusyMultilepton --ttree %s --tra2 -n -I CMGTools.TTHAnalysis.tools.%s [MODULES] [EXTRAARGS]"%(options.inname, treeName, moduleFolder)
    
    if "PU" in doWhat or "PileUp" in doWhat or "all" in doWhat:
        ### Pile-up reweighting. Nominal (62.9) +-5% files already in ../data/pileup/ folder
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname + "/pileUpWeight/").replace("[MODULES]", "-m vtxWeight%s -m vtxWeight%sUp -m vtxWeight%sDown"%(str(options.year),str(options.year),str(options.year))).replace("[EXTRAARGS]", options.extra + " --onlyMC ")
        print "----------------------------------------------------"
    if "Corrections" in doWhat or "Co" in doWhat or "all" in doWhat:
        ### Standard 3l recleaner
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname + "/leptonPtCorrections/").replace("[MODULES]", " -m leptonEnergyCorrections_%s "%str(options.year)).replace("[EXTRAARGS]", options.extra)
        print "----------------------------------------------------"
    if "ReCleaner" in doWhat or "Cl" in doWhat or "all" in doWhat:
        ### Standard 3l recleaner
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname + "/leptonJetReCleanerWZSM/").replace("[MODULES]", " -m leptonJetReCleanerWZSM_%s "%str(options.year)).replace("[EXTRAARGS]", options.extra + "-F sf/t %s/leptonPtCorrections/evVarFriend_{cname}.root"%options.inname )
        print "----------------------------------------------------"    
    if "Builder" in doWhat or "Bu" in doWhat or "all" in doWhat:
        ### Standard 3l builder
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname+ "/leptonBuilderWZSM/").replace("[MODULES]", " -m leptonBuilderWZSM_%s "%str(options.year)).replace("[EXTRAARGS]", options.extra+ "-F sf/t %s/leptonPtCorrections/evVarFriend_{cname}.root -F sf/t %s/leptonJetReCleanerWZSM/evVarFriend_{cname}.root"%(options.inname, options.inname))
        print "----------------------------------------------------"

    if "bTag" in doWhat or "Bt" in doWhat or "all" in doWhat:
        ### Standard 3l btag Weights
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname+ "/bTagWeights/").replace("[MODULES]", " -m eventBTagWeightDeepCSVT_%s"%str(options.year)).replace("[EXTRAARGS]", options.extra + " --onlyMC " + "-F sf/t %s/leptonPtCorrections/evVarFriend_{cname}.root --onlyMC -F sf/t %s/leptonJetReCleanerWZSM/evVarFriend_{cname}.root"%(options.inname, options.inname))
        print "----------------------------------------------------"

    if "Matcher" in doWhat or "Ma" in doWhat or "all" in doWhat:
        ### UCSX matching
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname+ "/leptonMatcher/").replace("[MODULES]", " -m leptonMatcher ").replace("[EXTRAARGS]", options.extra + " --onlyMC " + "-F sf/t %s/leptonPtCorrections/evVarFriend_{cname}.root --onlyMC -F sf/t %s/leptonJetReCleanerWZSM/evVarFriend_{cname}.root"%(options.inname, options.inname))
        print "----------------------------------------------------"

    if "Trigger" in doWhat or "Tr" in doWhat or "all" in doWhat:
        ### Trigger Flags
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname+ "/trigger_%s/"%str(options.year)).replace("[MODULES]", " -m Trigger_%s "%str(options.year)).replace("[EXTRAARGS]", options.extra + " --onlyMC " + "-F sf/t %s/leptonPtCorrections/evVarFriend_{cname}.root -F sf/t %s/leptonJetReCleanerWZSM/evVarFriend_{cname}.root"%(options.inname, options.inname))
        print "----------------------------------------------------"

    if "Gen" in doWhat or "Ge" in doWhat or "all" in doWhat:
        ### Gen Level variables
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname+ "/lepgenVarsWZSM/").replace("[MODULES]", " -m lepgenVarsWZSM_%s "%str(options.year)).replace("[EXTRAARGS]", options.extra + " --onlyMC " + "-F sf/t %s/leptonPtCorrections/evVarFriend_{cname}.root --onlyMC -F sf/t %s/leptonJetReCleanerWZSM/evVarFriend_{cname}.root"%(options.inname, options.inname))
        print "----------------------------------------------------"

    if "Polarization" in doWhat or "Po" in doWhat or "all" in doWhat:
        ### Boson polarization variables
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname+ "/bosonPolarizationWZ/").replace("[MODULES]", " -m bosonPolarizationWZ_%s "%str(options.year)).replace("[EXTRAARGS]", options.extra + " --onlyMC " + "-F sf/t %s/leptonPtCorrections/evVarFriend_{cname}.root -F sf/t %s/leptonJetReCleanerWZSM/evVarFriend_{cname}.root"%(options.inname, options.inname))
        print "----------------------------------------------------"

    if "PolarizationGEN" in doWhat or "Pg" in doWhat or "all" in doWhat:
        ### Boson polarization gen level variables
        print "----------------------------------------------------"
        print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
        print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.inname+ "/bosonPolarizationGEN/").replace("[MODULES]", " -m bosonPolarizationGEN ").replace("[EXTRAARGS]", options.extra + " --onlyMC " + "-F sf/t %s/leptonPtCorrections/evVarFriend_{cname}.root --onlyMC -F sf/t %s/leptonJetReCleanerWZSM/evVarFriend_{cname}.root"%(options.inname, options.inname))
        print "----------------------------------------------------"


if "plot_" in doWhat:
    if options.year == 2018:
        baseCommand = "python mcPlots.py [MCA] [CUT] [PLOT] --tree treeProducerSusyMultilepton -P [INDIR] [FTREES] -L RunII_SM_WZ/functionsSF.cc --mcc RunII_SM_WZ/2018/mcc_triggerdefs.txt --maxRatioRange 0.5 1.5 --fixRatioRange --print C,pdf,png,txt --legendWidth 0.23 --legendFontSize 0.036 --showMCError --showRatio --perBin -W 'getLeptonSF_v4(0,0,2018,LepGood_pt[0],LepGood_eta[0],LepGood_pdgId[0])*getLeptonSF_v4(0,0,2018,LepGood_pt[1],LepGood_eta[1],LepGood_pdgId[1])*getLeptonSF_v4(0,0,2018,LepGood_pt[2],LepGood_eta[2],LepGood_pdgId[2])*vtxWeight2018Nominal*bTagWeightDeepCSVT'  --obj [TTREE] -j [JOBS] -l 59.74 -f --pdir [PDIR] --showRatio ".replace("[MCA]", options.mca).replace("[CUT]", options.cut).replace("[PLOT]", options.plots).replace("[INDIR]", options.inname).replace("[FTREES]", "--Fs /pool/cienciasrw/HeppyTrees/RA7/nanoAODv4_2018_skim_3lepgood/leptonJetReCleanerSusyEWK3L_withBuilder_correctedPt/ --FMCs /pool/ciencias/HeppyTrees/RA7/nanoAODv4_2018_skim_3lepgood/pileUp/ --FMCs /pool/ciencias/HeppyTrees/RA7/nanoAODv4_2018_skim_3lepgood/bTagWeight_DeepCSVT/ ").replace("[PDIR]", options.outname).replace("[JOBS]", str(options.jobs))
        if "nano" in options.datatype:
            baseCommand = baseCommand.replace("[TTREE]", "Events")
        else:
            baseCommand = baseCommand.replace("[TTREE]", "tree")
        print baseCommand


