#!/bin/env python3
# Config file for Run3 sample postprocessing
# File automatically generated by create_cfg.py script on 2023-05-06 [yyyy-mm-dd] -- EDIT AT YOUR OWN RISK
# Files read from: /beegfs/data/nanoAODv11/30march2023/MC
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
import os
kreator = ComponentCreator()
# ------ WJets dataset
WJets = []

# ------ DY_M10to50 dataset
DYJetsToLL_M10to50_0 = kreator.makeMCComponentFromLocal('DYJetsToLL_M10to50', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022PostEE/DYto2L-2Jets_MLL-10to50_TuneCP5_13p6TeV_amcatnloFXFX-pythia8/mcRun3_PostEE_april2023_DYto2L-2Jets_MLL-10to50_TuneCP5_13p6TeV_amcatnloFXFX-pythia8/230404_142007/0000', '.*root', 20950.0)
DYJetsToLL_M10to50_1 = kreator.makeMCComponentFromLocal('DYJetsToLL_M10to50', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/DYto2L-2Jets_MLL-10to50_TuneCP5_13p6TeV_amcatnloFXFX-pythia8/mcRun3_2022_april2023_DYto2L-2Jets_MLL-10to50_TuneCP5_13p6TeV_amcatnloFXFX-pythia8/230417_083749/0000', '.*root', 20950.0)
DY_M10to50 = [DYJetsToLL_M10to50_0, DYJetsToLL_M10to50_1]

# ------ DY_M50 dataset
DYJetsToLL_M50_0 = kreator.makeMCComponentFromLocal('DYJetsToLL_M-50', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022PostEE/DYto2L-2Jets_MLL-50_TuneCP5_13p6TeV_amcatnloFXFX-pythia8/mcRun3_PostEE_april2023_DYto2L-2Jets_MLL-50_TuneCP5_13p6TeV_amcatnloFXFX-pythia8/230404_142241/0000', '.*root', 6688.0)
DYJetsToLL_M50_1 = kreator.makeMCComponentFromLocal('DYJetsToLL_M-50', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/DYto2L-2Jets_MLL-50_TuneCP5_13p6TeV_amcatnloFXFX-pythia8/mcRun3_2022_april2023_DYto2L-2Jets_MLL-50_TuneCP5_13p6TeV_amcatnloFXFX-pythia8/230417_083937/0000', '.*root', 6688.0)
DY_M50 = [DYJetsToLL_M50_0, DYJetsToLL_M50_1]

# ------ TT dataset
TTTo2L2Nu_0 = kreator.makeMCComponentFromLocal('TTTo2L2Nu', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022PostEE/TTto2L2Nu_TuneCP5_13p6TeV_powheg-pythia8/mcRun3_PostEE_april2023_TTto2L2Nu_TuneCP5_13p6TeV_powheg-pythia8/230404_141055/0000', '.*root', 97.4488)
TTTo2L2Nu_1 = kreator.makeMCComponentFromLocal('TTTo2L2Nu', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/TTto2L2Nu_TuneCP5CR1_13p6TeV_powheg-pythia8/mcRun3_2022_april2023_TTto2L2Nu_TuneCP5CR1_13p6TeV_powheg-pythia8/230417_084817/0000', '.*root', 97.4488)
TTTo2L2Nu_2 = kreator.makeMCComponentFromLocal('TTTo2L2Nu', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/TTto2L2Nu_TuneCP5Up_13p6TeV_powheg-pythia8/mcRun3_2022_april2023_TTto2L2Nu_TuneCP5Up_13p6TeV_powheg-pythia8/230417_085157/0000', '.*root', 97.4488)
TTTo2L2Nu_3 = kreator.makeMCComponentFromLocal('TTTo2L2Nu', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/TTto2L2Nu_TuneCP5_ERDOn_13p6TeV_powheg-pythia8/mcRun3_2022_april2023_TTto2L2Nu_TuneCP5_ERDOn_13p6TeV_powheg-pythia8/230417_084632/0000', '.*root', 97.4488)
TTTo2L2Nu_4 = kreator.makeMCComponentFromLocal('TTTo2L2Nu', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/TTto2L2Nu_TuneCP5Down_13p6TeV_powheg-pythia8/mcRun3_2022_april2023_TTto2L2Nu_TuneCP5Down_13p6TeV_powheg-pythia8/230417_085347/0000', '.*root', 97.4488)
TTTo2L2Nu_5 = kreator.makeMCComponentFromLocal('TTTo2L2Nu', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/TTto2L2Nu_TuneCP5CR2_13p6TeV_powheg-pythia8/mcRun3_2022_april2023_TTto2L2Nu_TuneCP5CR2_13p6TeV_powheg-pythia8/230417_085000/0000', '.*root', 97.4488)
TT = [TTTo2L2Nu_0, TTTo2L2Nu_1, TTTo2L2Nu_2, TTTo2L2Nu_3, TTTo2L2Nu_4, TTTo2L2Nu_5]

# ------ SingleTop dataset
TbarWplus_0 = kreator.makeMCComponentFromLocal('TbarWplus', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022PostEE/TbarWplus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg-pythia8/mcRun3_PostEE_april2023_TbarWplus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg-pythia8/230404_141710/0000', '.*root', 23.8979)
TbarWplus_1 = kreator.makeMCComponentFromLocal('TbarWplus', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/TbarWplus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg-pythia8/mcRun3_2022_april2023_TbarWplus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg-pythia8/230417_083608/0000', '.*root', 23.8979)
TWminus_0 = kreator.makeMCComponentFromLocal('TWminus', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022PostEE/TWminus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg-pythia8/mcRun3_PostEE_april2023_TWminus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg-pythia8/230404_141347/0000', '.*root', 23.8979)
TWminus_1 = kreator.makeMCComponentFromLocal('TWminus', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/TWminus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg-pythia8/mcRun3_2022_april2023_TWminus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg-pythia8/230417_083427/0000', '.*root', 23.8979)
SingleTop = [TbarWplus_0, TbarWplus_1, TWminus_0, TWminus_1]

# ------ WZ dataset
WZ_0 = kreator.makeMCComponentFromLocal('WZ', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022PostEE/WZ_TuneCP5_13p6TeV_pythia8/mcRun3_PostEE_april2023_WZ_TuneCP5_13p6TeV_pythia8/230404_142813/0000', '.*root', 54.2776)
WZ_1 = kreator.makeMCComponentFromLocal('WZ', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022/WZ_TuneCP5_13p6TeV_pythia8/mcRun3_2022_april2023_WZ_TuneCP5_13p6TeV_pythia8/230417_084208/0000', '.*root', 54.2776)
WZ = [WZ_0, WZ_1]

# ------ WW dataset
WW_0 = kreator.makeMCComponentFromLocal('WW', '', '/beegfs/data/nanoAODv11/30march2023/MC//2022PostEE/WW_TuneCP5_13p6TeV_pythia8/mcRun3_PostEE_april2023_WW_TuneCP5_13p6TeV_pythia8/230404_142522/0000', '.*root', 116.8)
WW = [WW_0]




mcSamples_list = WJets + DY_M10to50 + DY_M50 + TT + SingleTop + WZ + WW
mcSamples_toImport = mcSamples_list