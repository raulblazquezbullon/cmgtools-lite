# Config file for Run3 sample postprocessing
# File automatically generated by create_cfg.py script on 2022-11-04 [yyyy-m-d] -- EDIT AT YOUR OWN RISK
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
import os
kreator = ComponentCreator()
# ------ TT dataset
TTTo2L2Nu_0 = kreator.makeMCComponentFromLocal('TTTo2L2Nu', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_TTTo2L2Nu_CP5_13p6TeV_powheg-pythia8/220926_150231/0000', '.*root', 97.914)
TTTo2J1L1Nu_0 = kreator.makeMCComponentFromLocal('TTTo2J1L1Nu', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_TTTo2J1L1Nu_CP5_13p6TeV_powheg-pythia8/220926_150132/0000', '.*root', 405.2403)
TTTo2J1L1Nu_1 = kreator.makeMCComponentFromLocal('TTTo2J1L1Nu', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_TTTo2J1L1Nu_CP5_13p6TeV_powheg-pythia8/220926_150132/0001', '.*root', 405.2403)
TT = [TTTo2L2Nu_0, TTTo2J1L1Nu_0, TTTo2J1L1Nu_1]

# ------ WW dataset
WW_0 = kreator.makeMCComponentFromLocal('WW', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_WW_TuneCP5_13p6TeV-pythia8/220926_150455/0000', '.*root', 116.8)
WW = [WW_0]

# ------ WJets dataset
WJets_inc_0 = kreator.makeMCComponentFromLocal('WJets_inc', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_WJetsToLNu_TuneCP5_13p6TeV-madgraphMLM-pythia8/220926_150444/0000', '.*root', 63199.9)
WJets_inc_1 = kreator.makeMCComponentFromLocal('WJets_inc', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_WJetsToLNu_TuneCP5_13p6TeV-madgraphMLM-pythia8/220926_150444/0001', '.*root', 63199.9)
WJets = [WJets_inc_0, WJets_inc_1]

# ------ ZZ dataset
ZZ_0 = kreator.makeMCComponentFromLocal('ZZ', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_ZZ_TuneCP5_13p6TeV-pythia8/220926_150516/0000', '.*root', 16.7)
ZZ = [ZZ_0]

# ------ DY dataset
DYJetsToLL_M50_ext1_0 = kreator.makeMCComponentFromLocal('DYJetsToLL_M50_ext1', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_DYJetsToLL_M-50_TuneCP5_13p6TeV-madgraphMLM-pythia8ext1/220926_150039/0000', '.*root', 6221.3)
DYJetsToLL_M50_ext2_0 = kreator.makeMCComponentFromLocal('DYJetsToLL_M50_ext2', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_DYJetsToLL_M-50_TuneCP5_13p6TeV-madgraphMLM-pythia8ext2/220926_150052/0000', '.*root', 6221.3)
DYJetsToLL_M50_ext2_1 = kreator.makeMCComponentFromLocal('DYJetsToLL_M50_ext2', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_DYJetsToLL_M-50_TuneCP5_13p6TeV-madgraphMLM-pythia8ext2/220926_150052/0001', '.*root', 6221.3)
DY = [DYJetsToLL_M50_ext1_0, DYJetsToLL_M50_ext2_0, DYJetsToLL_M50_ext2_1]

# ------ SingleTop dataset
tbarBQ_t_0 = kreator.makeMCComponentFromLocal('tbarBQ_t', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_TbarBQ_t-channel_4FS_CP5_13p6TeV_powheg-madspin-pythia8/220926_150340/0000', '.*root', 87.2)
tBbarQ_t_0 = kreator.makeMCComponentFromLocal('tBbarQ_t', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_TBbarQ_t-channel_4FS_CP5_13p6TeV_powheg-madspin-pythia8/220926_150120/0000', '.*root', 145.0)
TbarWplus_0 = kreator.makeMCComponentFromLocal('TbarWplus', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_TbarWplus_DR_AtLeastOneLepton_CP5_13p6TeV_powheg-pythia8/220926_150350/0000', '.*root', 24.2)
TWminus_0 = kreator.makeMCComponentFromLocal('TWminus', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_TWminus_DR_AtLeastOneLepton_CP5_13p6TeV_powheg-pythia8/220926_150328/0000', '.*root', 24.2)
SingleTop = [tbarBQ_t_0, tBbarQ_t_0, TbarWplus_0, TWminus_0]

# ------ WZ dataset
WZ_0 = kreator.makeMCComponentFromLocal('WZ', '', '/pool/phedex/nanoAODv10/27sep2022/MC//26sep2022_WZ_TuneCP5_13p6TeV-pythia8/220926_150505/0000', '.*root', 54.2776)
WZ = [WZ_0]




#mcSamples_list = TT + WW + WJets + ZZ + DY + SingleTop + WZ
mcSamples_list = DY
mcSamples_toImport = mcSamples_list
