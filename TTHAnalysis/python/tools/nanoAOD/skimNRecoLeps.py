'''
 Skim applied: 2 good leptons
'''
import os
import ROOT
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection 
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
import itertools

ROOT.PyConfig.IgnoreCommandLineOptions = True

class SkimRecoLeps(Module):
    def __init__(self):
        return
    def beginJob(self):
        pass
    def endJob(self):
        pass
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        pass
    def endFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        pass
    def analyze(self, event):
        leps = Collection(event, 'LepGood')
        nlepgood = len(leps)
        if nlepgood >= 2: return True
        return False
