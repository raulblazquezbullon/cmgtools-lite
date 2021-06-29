from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop   import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel   import Collection
from PhysicsTools.NanoAODTools.postprocessing.framework.preskimming import JSONFilter
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput
import ROOT as r
from copy import deepcopy
import json

class apply_json(Module):
    def __init__(self, fname, namebranch = "isThisInTheJSON"):
        self.jsonFilter = JSONFilter(fname)
        self.namebranch = namebranch
        self.ret        = {}
        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        self.wrappedOutputTree.branch(self.namebranch  , "I")
        return


    def analyze(self, event):
        self.ret.clear()
        self.ret[self.namebranch] = int(self.jsonFilter.filterRunLumi(event.run,
                                                                      event.luminosityBlock))

        writeOutput(self, self.ret)
        return True
