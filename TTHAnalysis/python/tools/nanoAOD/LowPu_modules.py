import os
import sys
import enum

# Low Pile-Up modules used for friend-trees

class setts(enum.IntEnum):
    '''
     Configuration settings for lepton selections
    '''
    muPt = 5,
    elePt = 7,
    miniRelIso = 0.4,
    sip3d = 8,
    dxy = 0.05,
    dz = 0.1
    
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
    mc         = 1
    singleMuon = 2
    singleElec = 3
    doubleMuon = 4
    HighEGJet  = 5
    LowEGJet   = 6

# ========================== Lepton Selections
muonSelection = lambda l: abs(l.eta) < 2.4 and l.pt > conf.muPt and l.miniPFRelIso_all < conf.miniRelIso \
    and l.sip3d < conf.sip3d and abs(l.dxy) < conf.dxy and abs(l.dz) < conf.dz

electronSelection = lambda l: abs(l.eta) < 2.5 and l.pt > conf.elePt and l.miniPFRelIso_all < conf.miniRelIso \
    and l.sip3d < conf.sip3d and abs(l.dxy) < conf.dxy and abs(l.dz) < conf.dz


# ===============================
# LepMerging

from PhysicsTools.NanoAODTools.postprocessing.modules.common.collectionMerger import collectionMerger
