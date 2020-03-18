from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

# TTbar cross section: NNLO, https://twiki.cern.ch/twiki/bin/view/LHCPhysics/TtbarNNLO (172.5)
TT = kreator.makeMyPrivateMCComponent("TT", "/TT_TuneCP5_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_TT_TuneCP5_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 68.9, True )
TT_PS = kreator.makeMyPrivateMCComponent("TT_PS", "/TT_TuneCP5_PSweights_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_TT_TuneCP5_PSweights_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 68.9, True )
TT_hdampUp = kreator.makeMyPrivateMCComponent("TT_hdampUp", "/TT_hdampUP_TuneCP5_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_TT_hdampUP_TuneCP5_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 68.9, True )
TT_hdampDown = kreator.makeMyPrivateMCComponent("TT_hdampDown", "/TT_hdampDOWN_TuneCP5_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_TT_hdampDOWN_TuneCP5_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 68.9, True )
TT_mtop178p5 = kreator.makeMyPrivateMCComponent("TT_mtop178p5", "/TT_mtop178p5_TuneCP5_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_TT_mtop178p5_TuneCP5_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 68.9, True )
TT_mtop166p5 = kreator.makeMyPrivateMCComponent("TT_mtop166p5", "/TT_mtop166p5_TuneCP5_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_TT_mtop166p5_TuneCP5_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 68.9, True )
TT_TuneCP5Up = kreator.makeMyPrivateMCComponent("TT_TuneCP5up", "/TT_TuneCP5up_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_TT_TuneCP5up_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 68.9, True )
TT_TuneCP5Down = kreator.makeMyPrivateMCComponent("TT_TuneCP5Down", "/TT_TuneCP5down_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_TT_TuneCP5down_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 68.9, True )

TTs = [
TT,
TT_PS,
TT_hdampUp,
TT_hdampDown,
TT_mtop178p5,
TT_mtop166p5,
TT_TuneCP5Up,
TT_TuneCP5Down,
]


# Single top cross sections: https://twiki.cern.ch/twiki/bin/viewauth/PRIVATE/SingleTopSigma
T_tWch_noFullyHad =  kreator.makeMyPrivateMCComponent("T_tWch_noFullyHad", "/ST_tW_top_5f_NoFullyHadronicDecays_TuneCP5_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_ST_tW_top_5f_NoFullyHadronicDecays_TuneCP5_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 1.629072, True )
TBar_tWch_noFullyHad = kreator.makeMyPrivateMCComponent("TBar_tWch_noFullyHad", "/ST_tW_antitop_5f_NoFullyHadronicDecays_TuneCP5_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_ST_tW_antitop_5f_NoFullyHadronicDecays_TuneCP5_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 1.629072, True )
T_tWch_noFullyHad_PS = kreator.makeMyPrivateMCComponent("T_tWch_noFullyHad_PS", "/ST_tW_top_5f_NoFullyHadronicDecays_TuneCP5_PSweights_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_ST_tW_top_5f_NoFullyHadronicDecays_TuneCP5_PSweights_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 1.629072, True )
TBar_tWch_noFullyHad_PS = kreator.makeMyPrivateMCComponent("TBar_tWch_noFullyHad_PS", "/ST_tW_antitop_5f_NoFullyHadronicDecays_TuneCP5_PSweights_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_ST_tW_antitop_5f_NoFullyHadronicDecays_TuneCP5_PSweights_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 1.629072, True )


SingleTop = [
T_tWch_noFullyHad,
T_tWch_noFullyHad_PS,
TBar_tWch_noFullyHad,
TBar_tWch_noFullyHad_PS,
]

### V+jets inclusive (from https://twiki.cern.ch/twiki/bin/viewauth/CMS/StandardModelCrossSectionsat13TeV)
WJetsToLNu = kreator.makeMyPrivateMCComponent("WJetsToLNu","/WJetsToLNu_TuneCP5_5020GeV-amcatnloFXFX-pythia8/jrgonzal-mc5TeV_28ago2019_WJetsToLNu_TuneCP5_5020GeV-amcatnloFXFX-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 21159, True )
DYJetsToLL_M10to50 = kreator.makeMyPrivateMCComponent("DYJetsToLL_M10to50", "/DYJetsToLL_M-10to50_TuneCP5_5020GeV-amcatnloFXFX-pythia8/jrgonzal-mc5TeV_28ago2019_DYJetsToLL_M-10to50_TuneCP5_5020GeV-amcatnloFXFX-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 1506, True )
DYJetsToLL_M50 = kreator.makeMyPrivateMCComponent ("DYJetsToLL_M50", "/DYJetsToLL_MLL-50_TuneCP5_5020GeV-amcatnloFXFX-pythia8/jrgonzal-mc5TeV_28ago2019_DYJetsToLL_MLL-50_TuneCP5_5020GeV-amcatnloFXFX-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 2055, True )

VJets = [
WJetsToLNu,
DYJetsToLL_M10to50,
DYJetsToLL_M50,
]

# DY njet bins
DY0JetsToLL_M50 =  kreator.makeMyPrivateMCComponent("DY0JetsToLL_M50", "/DY0JetsToLL_MLL-50_TuneCP5_5020GeV-madgraphMLM-pythia8/jrgonzal-5TeV13Oct_DY0JetsToLL_MLL-50_TuneCP5_5020GeV-madgraphMLM-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 1447., True ) ## NLO xsec
DY1JetsToLL_M50 =  kreator.makeMyPrivateMCComponent("DY1JetsToLL_M50", "/DY1JetsToLL_MLL-50_TuneCP5_5020GeV-madgraphMLM-pythia8/jrgonzal-5TeV13Oct_DY1JetsToLL_MLL-50_TuneCP5_5020GeV-madgraphMLM-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 269.2, True ) ## NLO xsec
DY2JetsToLL_M50 =  kreator.makeMyPrivateMCComponent("DY2JetsToLL_M50", "/DY2JetsToLL_MLL-50_TuneCP5_5020GeV-madgraphMLM-pythia8/jrgonzal-5TeV13Oct_DY2JetsToLL_MLL-50_TuneCP5_5020GeV-madgraphMLM-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 75.16, True ) ##NLO xec
DY3JetsToLL_M50 =  kreator.makeMyPrivateMCComponent("DY3JetsToLL_M50", "/DY3JetsToLL_MLL-50_TuneCP5_5020GeV-madgraphMLM-pythia8/jrgonzal-5TeV13Oct_DY3JetsToLL_MLL-50_TuneCP5_5020GeV-madgraphMLM-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 27.76, True )  ##NLO xsec

DYNJets = [ 
DY0JetsToLL_M50,
DY1JetsToLL_M50,
DY2JetsToLL_M50,
DY3JetsToLL_M50,
]

# W njet bins
W0JetsToLNu =  kreator.makeMyPrivateMCComponent("W0JetsToLNu", "/W0JetsToLNu_TuneCP5_5020GeV-madgraphMLM-pythia8/jrgonzal-5TeV13Oct_W0JetsToLNu_TuneCP5_5020GeV-madgraphMLM-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 17139.22, True )
W1JetsToLNu =  kreator.makeMyPrivateMCComponent("W1JetsToLNu", "/W1JetsToLNu_TuneCP5_5020GeV-madgraphMLM-pythia8/jrgonzal-5TeV13Oct_W1JetsToLNu_TuneCP5_5020GeV-madgraphMLM-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 2930.27, True )
W2JetsToLNu =  kreator.makeMyPrivateMCComponent("W2JetsToLNu", "/W2JetsToLNu_TuneCP5_5020GeV-madgraphMLM-pythia8/jrgonzal-5TeV13Oct_W2JetsToLNu_TuneCP5_5020GeV-madgraphMLM-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 799.38, True )
W3JetsToLNu =  kreator.makeMyPrivateMCComponent("W3JetsToLNu", "/W3JetsToLNu_TuneCP5_5020GeV-madgraphMLM-pythia8/jrgonzal-5TeV13Oct_W3JetsToLNu_TuneCP5_5020GeV-madgraphMLM-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 290.19, True )


WNJets = [
W0JetsToLNu,
W1JetsToLNu,
W2JetsToLNu,
W3JetsToLNu,
]

### DiBosons

# cross section from https://twiki.cern.ch/twiki/bin/view/CMS/SummaryTable1G25ns#Diboson
WWTo2L2Nu = kreator.makeMyPrivateMCComponent("WWTo2L2Nu", "/WWTo2L2Nu_NNPDF31_TuneCP5_5p02TeV-powheg-pythia8/jrgonzal-mc5TeV_28ago2019_WWTo2L2Nu_NNPDF31_TuneCP5_5p02TeV-powheg-pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 2.752 , True )
ZZTo2L2Nu = kreator.makeMyPrivateMCComponent("ZZTo2L2Nu", "/ZZTo2L2Nu_5p02TeV_powheg_pythia8/jrgonzal-mc5TeV_28ago2019_ZZTo2L2Nu_5p02TeV_powheg_pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 0.2641, True )
ZZTo4L = kreator.makeMyPrivateMCComponent("ZZTo4L", "/ZZTo4L_5p02TeV_powheg_pythia8/jrgonzal-mc5TeV_28ago2019_ZZTo4L_5p02TeV_powheg_pythia8-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 0.4687, True )
WZTo3LNu    = kreator.makeMyPrivateMCComponent("WZTo3LNu" , "/WZTo3LNU_NNPDF30_TuneCP5_5p20TeV-powheg/jrgonzal-mc5TeV_28ago2019_WZTo3LNU_NNPDF30_TuneCP5_5p20TeV-powheg-d681e878124a74a1531ec8c4915a5c4d/USER", "PRIVATE", ".*root", "phys03", 1.258, True )

DiBosons = [
WWTo2L2Nu,
ZZTo2L2Nu,
ZZTo4L,
WZTo3LNu
]

### ----------------------------- summary ----------------------------------------

#mcSamples = TTs + SingleTop + VJets + DYNJets  + WNJets  +  DiBosons
mcSamples = DYNJets
samples = mcSamples

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples,localobjs=locals())
