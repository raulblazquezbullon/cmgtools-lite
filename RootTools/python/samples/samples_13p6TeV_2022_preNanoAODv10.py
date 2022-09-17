from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

DYJetsToLL_M10to50 = kreator.makeMCComponentFromLocal('DYJetsToLL_M10to50', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/DYJetsToLL_M-10to50_TuneCP5_13p6TeV-madgraphMLM-pythia8/', '.*root', 19317.5) 
DYJetsToLL_M50_ext1 = kreator.makeMCComponentFromLocal('DYJetsToLL_M50_ext1', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/DYJetsToLL_M-50_TuneCP5_13p6TeV-madgraphMLM-pythia8-ext1/', '.*root', 6221.3) 
DYJetsToLL_M50_ext2 = kreator.makeMCComponentFromLocal('DYJetsToLL_M50_ext2', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/DYJetsToLL_M-50_TuneCP5_13p6TeV-madgraphMLM-pythia8-ext2/', '.*root', 6221.3) 


DYs = [DYJetsToLL_M10to50, 
      DYJetsToLL_M50_ext1, 
      DYJetsToLL_M50_ext2]

TbarBQ_t = kreator.makeMCComponentFromLocal('TbarBQ_t', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/TbarBQ_t-channel_4FS_CP5_13p6TeV_powheg-madspin-pythia8/', '.*root', 87.2) 
TBbarQ_t = kreator.makeMCComponentFromLocal('TBbarQ_t', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/TBbarQ_t-channel_4FS_CP5_13p6TeV_powheg-madspin-pythia8/', '.*root', 145.0) 
tbarW = kreator.makeMCComponentFromLocal('tbarW', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/TbarWplus_DR_AtLeastOneLepton_CP5_13p6TeV_powheg-pythia8/', '.*root', 24.2) 
tW_noFullHad = kreator.makeMCComponentFromLocal('tW_noFullHad', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/TWminus_DR_AtLeastOneLepton_CP5_13p6TeV_powheg-pythia8/', '.*root', 24.2) 

Ts = [
  TbarBQ_t,
  TBbarQ_t,
  tbarW,
  tW_noFullHad
]

TTTo2L2Nu = kreator.makeMCComponentFromLocal('TTTo2L2Nu', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/TTTo2L2Nu_CP5_13p6TeV_powheg-pythia8/', '.*root', 96.9) 
TTTo2J1L1Nu = kreator.makeMCComponentFromLocal('TTTo2J1L1Nu', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/TTTo2J1L1Nu_CP5_13p6TeV_powheg-pythia8/', '.*root', 404.0) 

TTs = [
  TTTo2L2Nu,
  TTTo2J1L1Nu
]

# FIXME: Review cross section values for WW and ZZ (it would be good to double check WZ as well)
WZ = kreator.makeMCComponentFromLocal('WZ', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/WZ_TuneCP5_13p6TeV-pythia8/', '.*root', 54.3) 
ZZ = kreator.makeMCComponentFromLocal('ZZ', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/ZZ_TuneCP5_13p6TeV-pythia8/', '.*root', 16.7) 
WW = kreator.makeMCComponentFromLocal('WW', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/WW_TuneCP5_13p6TeV-pythia8/', '.*root', 173.4) 

DiBosons = [
  WZ,
  WW,
  ZZ
]

WJetsToLNu = kreator.makeMCComponentFromLocal('WJetsToLNu', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/WJetsToLNu_TuneCP5_13p6TeV-madgraphMLM-pythia8/', '.*root', 63199.9) 

Ws = [WJetsToLNu]

mcSamples = DYs + Ts + TTs + DiBosons + Ws
#mcSamples = [DYJetsToLL_M10to50]
#mcSamples = [ZZ]
samples = mcSamples

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
