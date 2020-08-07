from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection
from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput

class addRochester(Module):
    def __init__(self, label = "LepGood_pt_corrAll"):
        self.label    = label
        self.branches = [(self.label,        "F", "", "nLepGood"),
                         (self.label + "Up", "F", "", "nLepGood"),
                         (self.label + "Dn", "F", "", "nLepGood")]
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
        leps  = [l for l in Collection(event, "LepGood")]

        newvals   = []
        newvalsup = []
        newvalsdn = []
        for lep in leps:
            if abs(lep.pdgId) == 11:
                newvals.append(  lep.pt)
                newvalsup.append(lep.pt)
                newvalsdn.append(lep.pt)
            else:
                newvals.append(  lep.corrected_pt)
                newvalsup.append(lep.correctedUp_pt)
                newvalsdn.append(lep.correctedDown_pt)



        allret = {self.label       : newvals,
                  self.label + "Up": newvalsup,
                  self.label + "Dn": newvalsdn}
        return allret
