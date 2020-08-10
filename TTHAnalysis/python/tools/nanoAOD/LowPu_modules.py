import os
import sys
import enum

# Low Pile-Up modules used for friend-trees

# ===========================================================
# ======================== Particle parameters configuration
muons = {
    "pt"            : 5,
    "miniRelIso"    : 0.4,
    "sip3d"         : 8,
    "dxy"           : 0.05,
    "dz"            :0.1
    }
electrons = {
    "pt"            : 7,
    "miniRelIso"    : 0.4,
    "sip3d"         : 8,
    "dxy"           : 0.05,
    "dz"            :0.1
    }



# ===========================================================
# ======================== Step 0 modules


##                        Tags and channels modules, for MC and DATA differentiation
class ch(enum.IntEnum):
    '''
     Considered channels
    '''
    NoChan = 0
    ElMu   = 1
    Muon   = 2
    Elec   = 3
    
class tags(enum.IntEnum):
    '''
      Tags for identifying different samples
    '''
    NoTag      = 0
    MC         = 1
    SingleMuon = 2
    DoubleMuon = 3
    HighEGJet  = 4
    LowEGJet   = 5


##                        Lepton Identification

muonID = lambda l: abs(l.eta) < 2.4 and l.pt > muons["pt"] and l.miniPFRelIso_all < muons["miniRelIso"] \
    and l.sip3d < muons["sip3d"] and abs(l.dxy) < muons["dxy"] and abs(l.dz) < muons["dz"]

electronID = lambda l: abs(l.eta) < 2.4 and l.pt > electrons["pt"] and l.miniPFRelIso_all < electrons["miniRelIso"] \
    and l.sip3d < electrons["sip3d"] and abs(l.dxy) < electrons["dxy"] and abs(l.dz) < electrons["dz"]


##                         Basic lepton modules
from PhysicsTools.NanoAODTools.postprocessing.modules.common.collectionMerger import collectionMerger
from CMGTools.TTHAnalysis.tools.nanoAOD.ttHLeptonCombMasses import ttHLeptonCombMasses

lepMerge = lambda: collectionMerger(input = ["Electron", "Muon"],
                                    output = "LepGood",
                                    selector = dict(Muon = muonID, Electron = electronID))

lepMasses = lambda: ttHLeptonCombMasses( ["Muon", muonID], ("Electron", electronID)], maxleps = 4)

##                          Some useful branches
from CMGTools.TTHAnalysis.tools.nanoAOD.yearTagger import yearTag, yearTag2017
from CMGTools.TTHAnalysis.tools.nanoAOD.xsecTagger import xsecTag
from CMGTools.TTHAnalysis.tools.nanoAOD.lepJetBTagAdder import lepJetBTagCSV, lepJetBTagDeepCSV, lepJetBTagDeepFlav, lepJetBTagDeepFlavC

##                           This ones will come after the new post-proc
#from PhysicsTools.NanoAODTools.postprocessing.modules.common.puWeightProducer import puWeight_2017, puAutoWeight_2017
#from PhysicsTools.NanoAODTools.postprocessing.modules.common.PrefireCorr import prefCorr_2017
#from PhysicsTools.NanoAODTools.postprocessing.modules.common.muonScaleResProducer import muonScaleRes2017

# MC and data tagging

from CMGTools.TTHAnalysis.tools.addDataTag import addDataTag
addDoubleMuon = lambda : addDataTag(tags.DoubleMuon)
addSingleMuon = lambda : addDataTag(tags.SingleMuon)
addHighEGJet  = lambda : addDataTag(tags.HighEGJet )
addLowEGJet   = lambda : addDataTag(tags.LowEGJet  )
addMC         = lambda : addDataTag(tags.MC        )

# Lepton stuff
WZ_lowPu_13TeV = [lepMerge, 
            xsecTag, 
            lepJetBTagCSV,
            lepJetBTagDeepCSV,
            lepJetBTagDeepFlav,
            lepMasses #,
            #puWeight_2017,
            #prefCorr_2017,
            #muonScaleRes2017
        ]
