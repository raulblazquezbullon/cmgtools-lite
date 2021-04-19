from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection
from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput
from CMGTools.TTHAnalysis.tools.nanoAOD.ttbarRun2_modules import tags

class addJetPtCorr(Module):
    def __init__(self, label = "Jet_pt_corr"):
        self.label    = label
        self.branches = [(self.label, "F", "", "nJet")]
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
        jets  = [j for j in Collection(event, "Jet")]

        newvals   = []
        if event.datatag == tags.mc:
            for jet in jets:
                newvals.append(jet.pt_nom)
        else:
            for jet in jets:
                newvals.append(jet.pt)

        allret = {self.label : newvals}
        return allret
