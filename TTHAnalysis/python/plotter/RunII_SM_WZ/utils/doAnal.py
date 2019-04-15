import os
from optparse import OptionParser

pr = OptionParser(usage="%prog doWhat [options]")


"""python doAnal.py friend_all --year 2018 --datatype nano --pdir ~/www/wz/ --extra '-N 50000 --onlyMC -n -q all.q --env oviedo'"""

#Model options
pr.add_option("--year", dest = "year", type=int, default = 2018, help = "What year to use")
pr.add_option("--datatype", dest = "datatype", type="string", default = "nano", help = "What kind of data format: nanoAOD, heppyTree, etc.")
pr.add_option("--extra", dest = "extra", type="string", default = "", help = "Whatever fancy things you want to add to the command")
pr.add_option("--pdir", dest = "outname", type="string", default = "~/www/wzsm/", help = "Output (folder) name")
pr.add_option("--idir", dest = "inname", type="string", default = "/pool/ciencias/HeppyTrees/RA7/nanoAODv4_2018_skim_3lepgood/", help = "Input (folder) name")
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
if not(os.path.isdir(options.outname)):
    os.mkdir(options.outname)
    if doWhat in toShow:
        os.system("cp ~/www/index.php %s"%options.outname)

###FriendTree producer
if "friend_" in doWhat:

    baseCommand = "python prepareEventVariablesFriendTree.py [INTREES] [OUTTREES] --tree treeProducerSusyMultilepton --ttree [TTREE] --tra2  -I CMGTools.TTHAnalysis.tools.[MODULEFOLDER] [MODULES] [EXTRAARGS]"
    if "nano" in options.datatype:
        baseCommand = baseCommand.replace("[TTREE]", "Events").replace("[MODULEFOLDER]", "multilepFriendTreeProducersToCleanup_nanoAOD")
    else:
        baseCommand = baseCommand.replace("[TTREE]", "tree").replace("[MODULEFOLDER]", "multilepFriendTreeProducersToCleanup")


    print "Remember to move to the friend tree producer folder: cd $CMSSW/src/CMGTools/TTHAnalysis/macros/"

    if options.year == 2016:
        print "Year 2016 not year implemented, can I suggest you try your hand and prove you understand the analysis by doing so?"

    if options.year == 2017:
        print "Year 2017 not year implemented, can I suggest you try your hand and prove you understand the analysis by doing so?"

    if options.year == 2018:
        if "all" in doWhat:
            ### Everything, just everything
            print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
            print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULES]", " -m vtxWeight2018 -m vtxWeight2018Up -m vtxWeight2018Down -m leptonEnergyCorrections_2018 -m leptonJetReCleanerSusyEWK3L_nanoAOD -m leptonBuilderEWK_nano -m eventBTagWeightDeepCSVT_2018 ").replace("[EXTRAARGS]", options.extra + " --onlyMC ")
            print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULES]", " -m leptonEnergyCorrections_2018 -m leptonJetReCleanerSusyEWK3L_nanoAOD -m leptonBuilderEWK_nano  ").replace("[EXTRAARGS]", options.extra + " --onlyData ")

        if "PU" in doWhat or "PileUp" in doWhat:
            ### Pile-up reweighting. Nominal (62.9) +-5% files already in ../data/pileup/ folder
            print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
            print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULES]", "-m vtxWeight2018 -m vtxWeight2018Up -m vtxWeight2018Down").replace("[EXTRAARGS]", options.extra + " --onlyMC ")

        elif "Corrections" in doWhat or "Co" in doWhat:
            ### Standard 3l recleaner
            print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
            print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULES]", " -m leptonEnergyCorrections_2018 ").replace("[EXTRAARGS]", options.extra)

        elif "ReCleaner" in doWhat or "Cl" in doWhat:
            ### Standard 3l recleaner
            print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
            print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULES]", " -m leptonJetReCleanerSusyEWK3L_nanoAOD ").replace("[EXTRAARGS]", options.extra)
    
        elif "Builder" in doWhat or "Bu" in doWhat:
            ### Standard 3l builder
            print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
            print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULES]", " -m leptonBuilderEWK_nano -F sf/t %s/leptonJetReCleanerSusyEWK3L_nanoAOD/evVarFriend_{cname}.root"%options.outname).replace("[EXTRAARGS]", options.extra)

        elif "bTag" in doWhat or "Bt" in doWhat:
            ### Standard 3l btag Weights
            print "The script runs all trees in %s by default unless a specific dataset is given by -d"%options.inname
            print baseCommand.replace("[INTREES]", options.inname).replace("[OUTTREES]", options.outname).replace("[MODULES]", " -m eventBTagWeightDeepCSVT_2018 -F sf/t %s/leptonJetReCleanerSusyEWK3L_nanoAOD/evVarFriend_{cname}.root"%options.outname).replace("[EXTRAARGS]", options.extra + " --onlyMC ")


if "plot_" in doWhat:
    if options.year == 2018:
        baseCommand = "python mcPlots.py [MCA] [CUT] [PLOT] --tree treeProducerSusyMultilepton -P [INDIR] [FTREES] -L RunII_SM_WZ/functionsSF.cc --mcc RunII_SM_WZ/2018/mcc_triggerdefs.txt --maxRatioRange 0.5 1.5 --fixRatioRange --print C,pdf,png,txt --legendWidth 0.23 --legendFontSize 0.036 --showMCError --showRatio --perBin -W 'getLeptonSF_v4(0,0,2018,LepGood_pt[0],LepGood_eta[0],LepGood_pdgId[0])*getLeptonSF_v4(0,0,2018,LepGood_pt[1],LepGood_eta[1],LepGood_pdgId[1])*getLeptonSF_v4(0,0,2018,LepGood_pt[2],LepGood_eta[2],LepGood_pdgId[2])*vtxWeight2018Nominal*bTagWeightDeepCSVT'  --obj [TTREE] -j [JOBS] -l 59.74 -f --pdir [PDIR] --showRatio ".replace("[MCA]", options.mca).replace("[CUT]", options.cut).replace("[PLOT]", options.plots).replace("[INDIR]", options.inname).replace("[FTREES]", "--Fs /pool/cienciasrw/HeppyTrees/RA7/nanoAODv4_2018_skim_3lepgood/leptonJetReCleanerSusyEWK3L_withBuilder_correctedPt/ --FMCs /pool/ciencias/HeppyTrees/RA7/nanoAODv4_2018_skim_3lepgood/pileUp/ --FMCs /pool/ciencias/HeppyTrees/RA7/nanoAODv4_2018_skim_3lepgood/bTagWeight_DeepCSVT/ ").replace("[PDIR]", options.outname).replace("[JOBS]", str(options.jobs))
        if "nano" in options.datatype:
            baseCommand = baseCommand.replace("[TTREE]", "Events")
        else:
            baseCommand = baseCommand.replace("[TTREE]", "tree")
        print baseCommand


