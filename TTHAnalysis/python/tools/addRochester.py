from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection
from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput

class addRochester(Module):
    def __init__(self, label = "LepGood_pt_corrAll", labelvars = "LepGood_pt_mu", isMC = True):
        self.label     = label
        self.labelvars = labelvars
        self.isMC      = isMC
        self.branches  = [(self.label,              "F", "", "nLepGood"),
                          (self.labelvars + "Up",   "F", "", "nLepGood"),
                          (self.labelvars + "Down", "F", "", "nLepGood"),]
        if self.isMC:
          self.branches.append(("LepGoodmuUp_pt_muUp",   "F", "", "nLepGoodmuUp"))
          self.branches.append(("LepGoodmuDown_pt_muDown", "F", "", "nLepGoodmuDown"))
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

        newvals    = []
        newvalsup  = []
        newvalsup2 = []
        newvalsdn  = []
        newvalsdn2 = []
        for lep in leps:
            if abs(lep.pdgId) == 11:
                newvals.append(  lep.pt)
                newvalsup.append(lep.pt)
                newvalsdn.append(lep.pt)
            else:
                newvals.append(  lep.corrected_pt)
                newvalsup.append(lep.correctedUp_pt)
                newvalsdn.append(lep.correctedDown_pt)

        allret = {self.label           : newvals,
                  self.labelvars + "Up": newvalsup,
                  self.labelvars + "Down": newvalsdn,
        }

        if self.isMC:
            leps  = [l for l in Collection(event, "LepGoodmuUp")]
            for lep in leps:
                if abs(lep.pdgId) == 11:
                    newvalsup2.append(lep.pt)
                else:
                    newvalsup2.append(lep.correctedUp_pt)
            leps  = [l for l in Collection(event, "LepGoodmuDown")]
            for lep in leps:
                if abs(lep.pdgId) == 11:
                    newvalsdn2.append(lep.pt)
                else:
                    newvalsdn2.append(lep.correctedDown_pt)

            allret["LepGoodmuUp_pt_muUp"]     = newvalsup2
            allret["LepGoodmuDown_pt_muDown"] = newvalsdn2

        return allret
