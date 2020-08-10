import os
import sys
import enum

# Low Pile-Up modules used for friend-trees



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
