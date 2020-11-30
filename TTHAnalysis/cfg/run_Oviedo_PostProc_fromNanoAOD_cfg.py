import re, os, sys
from CMGTools.RootTools.samples.configTools import printSummary, mergeExtensions, doTestN, configureSplittingFromTime, cropToLumi
from CMGTools.RootTools.samples.autoAAAconfig import autoAAA
from PhysicsTools.HeppyCore.framework.heppy_loop import getHeppyOption
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()
def byCompName(components, regexps):
    return [ c for c in components if any(re.match(r, c.name) for r in regexps) ]

year = int(getHeppyOption("year", "2018"))
analysis = getHeppyOption("analysis", "main")
preprocessor = getHeppyOption("nanoPreProcessor")
# Samples

if preprocessor:
    if year == 2018:
        from CMGTools.RootTools.samples.samples_13TeV_RunIIAutumn18MiniAOD import samples as mcSamples_
        from CMGTools.RootTools.samples.samples_13TeV_DATA2018_MiniAOD import samples as allData
    elif year == 2017:
        from CMGTools.RootTools.samples.samples_13TeV_RunIIFall17MiniAOD import samples as mcSamples_
        from CMGTools.RootTools.samples.samples_13TeV_DATA2017 import dataSamples_31Mar2018 as allData
    elif year == 2016:
        from CMGTools.RootTools.samples.samples_13TeV_RunIISummer16MiniAODv3 import samples as mcSamples_
        from CMGTools.RootTools.samples.samples_13TeV_DATA2016 import dataSamples_17Jul2018 as allData
else:
    if year == 2018:
        from CMGTools.RootTools.samples.samples_13TeV_2018_TopNanoAODv6 import samples as mcSamples_
        from CMGTools.RootTools.samples.samples_13TeV_DATA2018_TopNanoAOD import samples as allData
    elif year == 2017:
        from CMGTools.RootTools.samples.samples_13TeV_2017_TopNanoAODv6 import samples as mcSamples_
        from CMGTools.RootTools.samples.samples_13TeV_DATA2017_TopNanoAOD import samples as allData
    elif year == 2016:
        from CMGTools.RootTools.samples.samples_13TeV_2016_TopNanoAODv6 import samples as mcSamples_
        from CMGTools.RootTools.samples.samples_13TeV_DATA2016_TopNanoAOD import samples as allData


autoAAA(mcSamples_+allData, quiet=not(getHeppyOption("verboseAAA",False)), redirectorAAA="xrootd-cms.infn.it",node='T2_ES_IFCA') # must be done before mergeExtensions
mcSamples_, _ = mergeExtensions(mcSamples_)

# Triggers
if year == 2018:
     from CMGTools.RootTools.samples.triggers_13TeV_DATA2018 import all_triggers as triggers
elif year == 2017:
     from CMGTools.RootTools.samples.triggers_13TeV_DATA2017 import all_triggers as triggers
     triggers["FR_1mu_iso"] = [] # they probably existed but we didn't use them in 2017
elif year == 2016:
     from CMGTools.RootTools.samples.triggers_13TeV_DATA2016 import all_triggers as triggers
     triggers["FR_1mu_noiso_smpd"] = [] 

from CMGTools.TTHAnalysis.tools.nanoAOD.oviedo_postproc_modules import triggerGroups_dict

DatasetsAndTriggers = []
if analysis == "main":
    mcSamples = byCompName(mcSamples_, ["%s(|_PS)$"%dset for dset in [
        #single boson
        "WJetsToLNu_LO_ext","WJetsToLNu_LO", 
        "DYJetsToLL_M10to50_LO", "DYJetsToLL_M10to50","DYJetsToLL_M50",
        # ttbar + single top + tW
        #'TT_pow','TTHad_pow',
        'TTSemi_pow',
        'TTLep_pow',
        #"TTJets_SingleLeptonFromT", "TTJets_SingleLeptonFromTbar", "TTJets_DiLepton",
        "T_sch_lep", "T_tch", "TBar_tch", "T_tWch_noFullyHad", "TBar_tWch_noFullyHad", "T_tch_pow", "TBar_tch_pow" #pow for 2017
        # conversions
       "TTGJets","TTGJets_ext", "TGJets_lep",# "WGToLNuG_01J",',#"WGToLNuG", "ZGTo2LG",
        # ttV
        "TTWToLNu_fxfx", "TTZToLLNuNu", "TTZToLLNuNu_m1to10",
        'TTWToLNu', "TTWToLNu_EWK",
        # ttH + tHq/tHW
        "TTHnobb_pow",
        "THQ", "THW", #"TTH_ctcvcp",'TTH_pow',
        # top + V rare processes
        "TZQToLL",
        "tWll",
      # "TTWW","TTWW_LO",
        'TTTT_P8M2T4','TTTT',#'tZq_ll_1','tZq_ll_2',
        # diboson + DPS + WWss
        "WWTo2L2Nu",# "WZTo3LNu_pow", 
        "WZTo3LNu_fxfx", 
        "ZZTo4L", "WW_DPS", 
        "WpWpJJ",#
        "WWTo2L2Nu_DPS",
        # triboson
        "WWW","WWZ","WZZ", "ZZZ",
        "WZG",# "WWW_ll",  
        
        # other Higgs processes
        "qqHZZ4L", "VHToNonbb", "GGHZZ4L", #"VHToNonbb_ll", "ZHTobb_ll", "ZHToTauTau", "TTWH", "TTZH",
       



    ]])
    DatasetsAndTriggers.append( ("DoubleMuon", triggerGroups_dict["Trigger_2m"][year] + triggerGroups_dict["Trigger_3m"][year]) )
    DatasetsAndTriggers.append( ("EGamma",     triggerGroups_dict["Trigger_2e"][year] + triggerGroups_dict["Trigger_3e"][year] + triggerGroups_dict["Trigger_1e"][year]) if year == 2018 else
                                ("DoubleEG",   triggerGroups_dict["Trigger_2e"][year] + triggerGroups_dict["Trigger_3e"][year]) )
    DatasetsAndTriggers.append( ("MuonEG",     triggerGroups_dict["Trigger_em"][year] + triggerGroups_dict["Trigger_mee"][year] + triggerGroups_dict["Trigger_mme"][year]) )
    DatasetsAndTriggers.append( ("SingleMuon", triggerGroups_dict["Trigger_1m"][year]) )
    DatasetsAndTriggers.append( ("SingleElectron", triggerGroups_dict["Trigger_1e"][year]) if year != 2018 else (None,None) )
elif analysis == "frqcd":
    mcSamples = byCompName(mcSamples_, [
        #"QCD_Mu15", "QCD_Pt(20|30|50|80|120|170)to.*_Mu5", 
        #"QCD_Pt(20|30|50|80|120|170)to.*_EMEn.*", 
      #(r"QCD_Pt(20|30|50|80|120|170)to\d+$"       if year == 2018 else  
       # "QCD_Pt(20|30|50|80|120|170)to.*_bcToE.*" ),  
        #"TT(Lep|Semi)_pow",
        #"TTSemi_pow",   
        #"WJetsToLNu_LO", "WJetsToLNu_LO_ext", #"DYJetsToLL_M50_LO", "DYJetsToLL_M10to50_LO", 
    ])
    egfrpd = {2016:"DoubleEG", 2017:"SingleElectron", 2018:"EGamma"}[year]
    DatasetsAndTriggers.append( ("DoubleMuon", triggers["FR_1mu_noiso"] + triggers["FR_1mu_iso"]) )
    DatasetsAndTriggers.append( (egfrpd,       triggers["FR_1e_noiso"] + triggers["FR_1e_iso"]) )
    DatasetsAndTriggers.append( ("SingleMuon", triggers["FR_1mu_noiso_smpd"]) )

# make MC
mcTriggers = sum((trigs for (pd,trigs) in DatasetsAndTriggers if trigs), [])
if getHeppyOption('applyTriggersInMC'):
    for comp in mcSamples:
        comp.triggers = mcTriggers

# make data
#print(DatasetsAndTriggers)
dataSamples = []; vetoTriggers = []
for pd, trigs in DatasetsAndTriggers:
    if not trigs: continue
    for comp in byCompName(allData, [pd+'.*']):

        comp.triggers = trigs[:]
        comp.vetoTriggers = vetoTriggers[:]
        dataSamples.append(comp)
    vetoTriggers += trigs[:]

selectedComponents = mcSamples + dataSamples
if getHeppyOption('selectComponents'):
    if getHeppyOption('selectComponents')=='MC':
        selectedComponents = mcSamples
    elif getHeppyOption('selectComponents')=='DATA':
        selectedComponents = dataSamples
    else:
        selectedComponents = byCompName(selectedComponents, getHeppyOption('selectComponents').split(","))
autoAAA(selectedComponents, quiet=not(getHeppyOption("verboseAAA",False)), redirectorAAA="xrootd-cms.infn.it")
if year==2018:
    configureSplittingFromTime(byCompName(mcSamples,['^(?!(TTJets_Single|T_|TBar_)).*']),150 if preprocessor else 10,12)
    configureSplittingFromTime(byCompName(mcSamples,['^(TTJets_Single|T_|TBar_).*']),70 if preprocessor else 10,12)
    configureSplittingFromTime(dataSamples,50 if preprocessor else 5,12)
else: # rerunning deepFlavor can take up to twice the time, some samples take up to 400 ms per event
    configureSplittingFromTime(byCompName(mcSamples,['^(?!(TTJets_Single|T_|TBar_)).*']),300 if preprocessor else 10,12)
    configureSplittingFromTime(byCompName(mcSamples,['^(TTJets_Single|T_|TBar_).*']),150 if preprocessor else 10,12)
    configureSplittingFromTime(dataSamples,100 if preprocessor else 5,12)
    configureSplittingFromTime(byCompName(dataSamples,['Single']),50 if preprocessor else 5,12)
selectedComponents, _ = mergeExtensions(selectedComponents)


if analysis == "main":
    cropToLumi(byCompName(selectedComponents,["^(?!.*(TTH|TTW|TTZ)).*"]),1000.)
    cropToLumi(byCompName(selectedComponents,["T_","TBar_"]),100.)
    cropToLumi(byCompName(selectedComponents,["DYJetsToLL"]),2.)


# print summary of components to process
if getHeppyOption("justSummary"): 
    printSummary(selectedComponents)
    sys.exit(0)

from CMGTools.TTHAnalysis.tools.nanoAOD.oviedo_postproc_modules import *

from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor

# in the cut string, keep only the main cuts to have it simpler
modules = ttH_sequence_step1
cut = ttH_skim_cut
compression = "ZLIB:3" #"LZ4:4" #"LZMA:9"
branchsel_in = os.environ['CMSSW_BASE']+"/src/CMGTools/TTHAnalysis/python/tools/nanoAOD/branchsel_in.txt"
branchsel_out = None


POSTPROCESSOR = PostProcessor(None, [], modules = modules,
        cut = cut, prefetch = True, longTermCache = False,
        branchsel = branchsel_in, compression = compression)

test = getHeppyOption("test")
if test == "94X-MC":
    TTLep_pow = kreator.makeMCComponent("TTLep_pow", "/TTTo2L2Nu_mtop166p5_TuneCP5_PSweights_13TeV-powheg-pythia8/RunIIFall17MiniAOD-94X_mc2017_realistic_v10-v1/MINIAODSIM", "CMS", ".*root", 831.76*((3*0.108)**2) )
    TTLep_pow.files = ["/afs/cern.ch/user/g/gpetrucc/cmg/NanoAOD_94X_TTLep.root"]
    lepSkim.requireSameSignPair = False
    lepSkim.minJets = 0
    lepSkim.minMET = 0
    lepSkim.prescaleFactor = 0
    selectedComponents = [TTLep_pow]
elif test=="ttj_sync":
    TTJets_dilep= kreator.makeMCComponent("TTJets_dilep", "/TTJets_DiLept_TuneCUETP8M1_13TeV-madgraphMLM-pythia8/RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3-v2/MINIAODSIM", "CMS", ".*root", 831.76*((3*0.108)**2) )
    TTJets_dilep.files = ["/pool/phedex/userstorage/clara/1A77724A-73EA-E811-A80E-0CC47A6C06C2.root"]
    from CMGTools.Production.nanoAODPreprocessor import nanoAODPreprocessor
    #TTJets_dilep.preprocessor = nanoAODPreprocessor(cfg="/nfs/fanae/user/clara/ttW/CMSSW_10_2_22/src/NANO_NANO.py",cmsswArea = "/mnt_pool/ciencias_users/user/clara/ttW/CMSSW_10_2_22",keepOutput=True)
    TTJets_dilep.preprocessor = nanoAODPreprocessor(cfg="/nfs/fanae/user/clara/CMSSW_10_2_18/src/PhysicsTools/NanoAOD/test/topNano_v6p1_2016_cfg.py",cmsswArea = "/nfs/fanae/user/clara/CMSSW_10_2_18/src/",keepOutput=True)
    POSTPROCESSOR.modules.remove(lepSkim)
    POSTPROCESSOR.cut='1'
    selectedComponents = [TTJets_dilep]
elif test=="ttW_post":
    TTWToLNu_fxfx     = kreator.makeMCComponent("TTWToLNu_fxfx", "/TTWJetsToLNu_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8/RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3_ext2-v1/MINIAODSIM", "CMS", ".*root", 0.2043, fracNegWeights=0.227)
    TTWToLNu_fxfx.files =["/nfs/fanae/user/clara/ttW/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/cfg/ttW_newloose_2/TTWToLNu_fxfx_Chunk0/cmsswPreProcessing.root"]
    POSTPROCESSOR.modules.remove(lepSkim)
    POSTPROCESSOR.cut='1'
    selectedComponents = [TTWToLNu_fxfx]
elif test == "94X-MC-miniAOD":
    TTLep_pow = kreator.makeMCComponent("TTLep_pow", "/TTTo2L2Nu_mtop166p5_TuneCP5_PSweights_13TeV-powheg-pythia8/RunIIFall17MiniAOD-94X_mc2017_realistic_v10-v1/MINIAODSIM", "CMS", ".*root", 831.76*((3*0.108)**2) )
    TTLep_pow.files = [ 'root://cms-xrd-global.cern.ch//store/mc/RunIIFall17MiniAOD/TTTo2L2Nu_mtop166p5_TuneCP5_PSweights_13TeV-powheg-pythia8/MINIAODSIM/94X_mc2017_realistic_v10-v1/70000/3CC234EB-44E0-E711-904F-FA163E0DF774.root' ]
    localfile = os.path.expandvars("/tmp/$USER/%s" % os.path.basename(TTLep_pow.files[0]))
    if os.path.exists(localfile): TTLep_pow.files = [ localfile ] 
    from CMGTools.Production.nanoAODPreprocessor import nanoAODPreprocessor
    TTLep_pow.preprocessor = nanoAODPreprocessor("/afs/cern.ch/work/g/gpetrucc/ttH/CMSSW_10_4_0/src/nanov4_NANO_cfg.py")
    selectedComponents = [TTLep_pow]
elif test == "102X-MC":
    TTLep_pow = kreator.makeMCComponent("TTLep_pow", "/TTTo2L2Nu_TuneCP5_13TeV-powheg-pythia8/RunIIAutumn18NanoAODv4-Nano14Dec2018_102X_upgrade2018_realistic_v16-v1/NANOAODSIM", "CMS", ".*root", 831.76*((3*0.108)**2), useAAA=True )
    TTLep_pow.files = TTLep_pow.files[:1]
    selectedComponents = [TTLep_pow]

elif test == "94X-data":
    json = 'Cert_294927-306462_13TeV_EOY2017ReReco_Collisions17_JSON_v1.txt'
    SingleElectron_Run2017C_14Dec2018 = kreator.makeDataComponent("SingleElectron_Run2017C_14Dec2018", "/SingleElectron/Run2017C-Nano14Dec2018-v1/NANOAOD", "CMS", ".*root", json)
    SingleElectron_Run2017C_14Dec2018.files = ["0450ACEF-E1E5-1345-8660-28CF5ABE26BE.root"]
    SingleElectron_Run2017C_14Dec2018.triggers = triggerGroups_dict["Trigger_1e"][year]
    SingleElectron_Run2017C_14Dec2018.vetoTriggers = triggerGroups_dict["Trigger_2m"][year] + triggerGroups_dict["Trigger_3m"][year]+triggerGroups_dict["Trigger_2e"][year] + triggerGroups_dict["Trigger_3e"][year]+triggerGroups_dict["Trigger_em"][year] + triggerGroups_dict["Trigger_mee"][year] + triggerGroups_dict["Trigger_mme"][year]+triggerGroups_dict["Trigger_1m"][year]
    
    selectedComponents = [SingleElectron_Run2017C_14Dec2018]
elif test in ('2','3','3s'):
    doTestN(test, selectedComponents)
