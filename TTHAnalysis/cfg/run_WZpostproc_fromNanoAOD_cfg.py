'''
Based on @cericeci's postprocessor
-----------------------------------
Config file defines two things: POSTPROCESSOR and selectedComponents. 
 * selectedComponents is read by the submitter to configure the different samples. 
 * POSTPROCESSOR is read at running time, and configures the modules to run 
   using the json file produced.
-----------------------------------
'''

# -- Import libraries -- #
### Main
import re, os, sys
from copy import deepcopy
### CMGTools
from CMGTools.RootTools.samples.configTools import printSummary, mergeExtensions, doTestN, configureSplittingFromTime, cropToLumi
from CMGTools.RootTools.samples.autoAAAconfig import autoAAA
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator

### For crab submission
from PhysicsTools.HeppyCore.framework.heppy_loop import getHeppyOption


def byCompName(components, regexps):
  return [ c for c in components if any(re.match(r, c.name) for r in regexps) ]


# -- Unpack submission configurations  -- #
year              = int(getHeppyOption("year", "2022"))    
analysis          = getHeppyOption("analysis", "main") 
selectComponents  = getHeppyOption('selectComponents')
justSummary       = getHeppyOption("justSummary")
test              = getHeppyOption("test")
preprocessor      = 0
quiet             = not(getHeppyOption("verboseAAA", False))
applyTriggersInMC = getHeppyOption('applyTriggersInMC')

### Prepare samples for submission 
doData = (selectComponents == "DATA")

# -- Import sample configuration files -- #
### THESE FILES NEED TO BE UPDATED ONCE RUN3 DATASETS ARE MADE PUBLIC


# -- From prenano 2022 -- september (nanoAOD for ttrun3)
#from CMGTools.RootTools.samples.samples_13p6TeV_2022_preNanoAODv10     import samples as mcSamples_
#from CMGTools.RootTools.samples.samples_13p6TeV_DATA2022_preNanoAODv10 import dataSamples as allData

# -- From 13.5fb-1 (november 2022 -- BCDE)
from CMGTools.RootTools.samples.samples_13p6TeV_mc2022_nanoAODv10_fromLocal   import mcSamples_toImport   as mcSamples_
from CMGTools.RootTools.samples.samples_13p6TeV_data2022_nanoAODv10_fromLocal import dataSamples_toImport as allData

autoAAA(mcSamples_ + allData, 
        quiet         = quiet, 
        redirectorAAA = "xrootd-cms.infn.it",
        node          = 'T2_ES_IFCA') 
mcSamples_, _ = mergeExtensions(mcSamples_) ### autoAAA must be created before call mergeExtensions

### Set up trigger paths 
if year == 2022:
  from CMGTools.TTHAnalysis.tools.nanoAOD.triggers_13p6TeV_DATA2022 import triggerGroups_dict

DatasetsAndTriggers = {}; DatasetsAndVetos = {} 

### Double muon
DatasetsAndTriggers["DoubleMuon"] = triggerGroups_dict["triggers_mumu_iso"][year]
DatasetsAndTriggers["DoubleMuon"].extend(triggerGroups_dict["triggers_3mu"][year])

### MuonEG
DatasetsAndTriggers["MuonEG"] = triggerGroups_dict["triggers_2mu1e"][year]
DatasetsAndTriggers["MuonEG"].extend(triggerGroups_dict["triggers_mue"][year])
DatasetsAndTriggers["MuonEG"].extend(triggerGroups_dict["triggers_2e1mu"][year])
DatasetsAndTriggers["MuonEG"].extend(triggerGroups_dict["triggers_mue_noiso"][year])

### E-Gamma
DatasetsAndTriggers["EGamma"] = triggerGroups_dict["triggers_3e"][year] 
DatasetsAndTriggers["EGamma"].extend(triggerGroups_dict["triggers_ee"][year])
DatasetsAndTriggers["EGamma"].extend(triggerGroups_dict["triggers_ee_noniso"][year])
DatasetsAndTriggers["EGamma"].extend(triggerGroups_dict["triggers_1e_iso"][year])
#DatasetsAndTriggers["EGamma"].extend(deepcopy(triggerGroups_dict["triggers_etau"])

### SingleMuon
DatasetsAndTriggers["SingleMuon"] = triggerGroups_dict["triggers_1mu_iso"][year]
#DatasetsAndTriggers["SingleMuon"].extend(deepcopy(triggerGroups_dict["triggers_mutau"])

### Muon dataset = DoubleMuon + SingleMuon (from era D onwards)
DatasetsAndTriggers["Muon"] = deepcopy(DatasetsAndTriggers["DoubleMuon"])
DatasetsAndTriggers["Muon"].extend(deepcopy(DatasetsAndTriggers["SingleMuon"]))

### MET
DatasetsAndTriggers["MET" ] = []


### TRIGGER OVERLAP REMOVAL: inherited from tt-run3 analysis
# -- Do not veto MuonEG datasets
DatasetsAndVetos["MuonEG"]     = [] 

# -- Veto DoubleMuon with MuonEG
DatasetsAndVetos["DoubleMuon"] = deepcopy(DatasetsAndTriggers["MuonEG"])

# -- Same for Muon
DatasetsAndVetos["Muon"]       = deepcopy(DatasetsAndTriggers["MuonEG"])

# -- Veto EGamma with the remaining datasets
DatasetsAndVetos["EGamma"]     = deepcopy(DatasetsAndTriggers["MuonEG"])
DatasetsAndVetos["EGamma"].extend(deepcopy(DatasetsAndTriggers["DoubleMuon"])) 
DatasetsAndVetos["EGamma"].extend(deepcopy(DatasetsAndTriggers["Muon"])) 

# -- Same for SingleMuon
DatasetsAndVetos["SingleMuon"] = deepcopy(DatasetsAndTriggers["MuonEG"])
DatasetsAndVetos["SingleMuon"].extend(deepcopy(DatasetsAndTriggers["DoubleMuon"]))
DatasetsAndVetos["SingleMuon"].extend(deepcopy(DatasetsAndTriggers["EGamma"]))

# -- We do not use MET samples
DatasetsAndVetos["MET"]        = []

selectedComponents = []

if doData:
  dataSamples = []
  for pd, trigs in DatasetsAndTriggers.items():
    if not trigs: continue
    for comp in byCompName(allData, [pd+"_"]):
      print("---")
      print(("Adding to %s dataset"%comp.name))
      comp.triggers = trigs[:]
      print((" >> triggers %s"%trigs[:]))
      comp.vetoTriggers = DatasetsAndVetos[pd][:]
      print((" >> vetoTriggers %s"%DatasetsAndVetos[pd][:]))
      dataSamples.append(comp)
  selectedComponents = dataSamples 
else:
  mcSamples = byCompName(mcSamples_, ["%s(|_PS)$"%dset for dset in [
      # ----------------- Single boson
      #"WJetsToLNu_LO_ext",
      "WJets_inc",
#      "DYJetsToLL_M_50", 
      "DYJetsToLL_M-50",
      "DYJetsToLL_M10to50",
      # ----------------- ttbar + single top + tW
      "TTTo2L2Nu",
      "TTTo2J1L1Nu",
      "TbarBQ_t",
      "TBbarQ_t",
      "TbarWplus",
      "TWminus",
      #"tW_noFullHad",
      #'TT_pow',
      #'TTHad_pow',
      #'TTSemi_pow',
      #'TTLep_pow',
      #"TTJets_SingleLeptonFromT", 
      #"TTJets_SingleLeptonFromTbar", 
      #"TTJets_DiLepton",
      #"T_sch_lep", 
      #"T_tch", 
      #"TBar_tch", 
      #"T_tWch_noFullyHad", 
      #"TBar_tWch_noFullyHad", 
      #"T_tch_pow", 
      #"TBar_tch_pow" 
      # ----------------- conversions
      #"TTGJets",
      #"TTGJets_ext", 
      #"TGJets_lep",
      # "WGToLNuG_01J",
      #"WGToLNuG", 
      #"ZGTo2LG",
      # ----------------- ttV
      #"TTWToLNu_fxfx", 
      #"TTZToLLNuNu", 
      #"TTZToLLNuNu_m1to10",
      #'TTWToLNu', 
      #"TTWToLNu_EWK",
      # ----------------- ttH + tHq/tHW
      #"TTHnobb_pow",
      #"THQ", 
      #"THW", 
      #"TTH_ctcvcp",
      #'TTH_pow',
      # ----------------- Top + V rare processes
      #"TZQToLL",
      #"tWll",
      # "TTWW","TTWW_LO",
      #'TTTT_P8M2T4','TTTT',
      #'tZq_ll_1','tZq_ll_2',
      # Diboson + DPS + WWss
      # "WZTo3LNu_pow", 
      "WZ",
      #"WZTo3LNu", 
      "ZZ",
      #"ZZTo4L", 
      "WW",
      #"WWTo2L2Nu"
      #"WW_DPS", 
      #"WpWpJJ",
      #"WWTo2L2Nu_DPS",
      # ----------------- TRIBOSON  
      #"WWW","WWZ","WZZ", "ZZZ",
      #"WZG",
      # "WWW_ll",  
      # ----------------- Other Higgs processes
      #"qqHZZ4L", 
      #"VHToNonbb", 
      #"GGHZZ4L", 
      #"VHToNonbb_ll", 
      #"ZHTobb_ll", 
      #"ZHToTauTau", 
      #"TTWH", 
      #"TTZH",
  ]])

  # -- Apply trigger in MC -- # 
  mcTriggers = sum((trigs for (pd,trigs) in DatasetsAndTriggers.items() if trigs), [])
  if applyTriggersInMC :
      for comp in mcSamples:
          comp.triggers = mcTriggers
  selectedComponents = mcSamples 

# -- Create the submitter -- #
autoAAA(selectedComponents, 
        quiet=quiet, 
        redirectorAAA="xrootd-cms.infn.it")

### Configure for efficient processing
if not doData:
  if year==2022:
      configureSplittingFromTime(byCompName(mcSamples,['^(?!(TTJets_Single|T_|TBar_)).*']),150 if preprocessor else 10,12)
      configureSplittingFromTime(byCompName(mcSamples,['^(TTJets_Single|T_|TBar_).*']),70 if preprocessor else 10,12)
      #configureSplittingFromTime(dataSamples,50 if preprocessor else 5,12)
  else: # rerunning deepFlavor can take up to twice the time, some samples take up to 400 ms per event
      configureSplittingFromTime(byCompName(mcSamples,['^(?!(TTJets_Single|T_|TBar_)).*']),300 if preprocessor else 10,12)
      configureSplittingFromTime(byCompName(mcSamples,['^(TTJets_Single|T_|TBar_).*']),150 if preprocessor else 10,12)
      #configureSplittingFromTime(dataSamples,100 if preprocessor else 5,12)
      #configureSplittingFromTime(byCompName(dataSamples,['Single']),50 if preprocessor else 5,12)
selectedComponents, _ = mergeExtensions(selectedComponents)


if analysis == "main" and not doData:
    cropToLumi(byCompName(selectedComponents, ["^(?!.*(TTH|TTW|TTZ)).*"]),1000.)
    cropToLumi(byCompName(selectedComponents, ["T_","TBar_"]),100.)
    cropToLumi(byCompName(selectedComponents, ["DYJetsToLL"]),2.)


# print summary of components to process
if justSummary: 
    printSummary(selectedComponents)
    sys.exit(0)


from CMGTools.TTHAnalysis.tools.nanoAOD.wzsm_modules import lepCollector 
from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor

# in the cut string, keep only the main cuts to have it simpler
modules = lepCollector 
if (doData):
  from CMGTools.TTHAnalysis.tools.nanoAOD.remove_overlap import OverlapRemover
  modules.extend( [lambda : OverlapRemover()] ) 

cut = None 
compression = "ZLIB:3" #"LZ4:4" #"LZMA:9"

branchsel_out = os.environ['CMSSW_BASE']+"/src/CMGTools/TTHAnalysis/python/tools/nanoAOD/OutputSlim_wz.txt"
branchsel_in  = os.environ['CMSSW_BASE']+"/src/CMGTools/TTHAnalysis/python/tools/nanoAOD/InputSlim_wz.txt"

# -- Finally create the postprocessor
POSTPROCESSOR = PostProcessor(None, [], modules = modules,
        cut = cut, prefetch = False, longTermCache = False,
        branchsel = branchsel_in, outputbranchsel = None, compression = compression)
