from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection
from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput

class addDataTag(Module):
    def __init__(self, tag, label = "datatag", isTop = False):
        self.label    = label
        self.tag      = tag
        self.isTop    = isTop
        self.branches = [(self.label, "I"), ("isTop", "I")]
        return


    # Old interface (CMG)
    def listBranches(self):
        return self.branches[:]


    def __call__(self, event):
        return self.run(event, CMGCollection)


    # New interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        declareOutput(self, wrappedOutputTree, self.branches)


    def analyze(self, event):
        writeOutput(self, self.run(event, NanoAODCollection))
        return True


    # Common processing
    def run(self, event, Collection):
        allret = {self.label : self.tag,
                  "isTop"    : int(self.isTop)}
        return allret
