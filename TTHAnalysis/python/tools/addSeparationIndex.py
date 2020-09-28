from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection
from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput
import ROOT as r

class addSeparationIndex(Module):
    def __init__(self, isThisSampleForMVA = False, applicationProp = 0.6, label = "separationIndex"):
        self.label     = label
        self.isThisSampleForMVA = isThisSampleForMVA
        self.appProp = applicationProp
        self.branches  = [(self.label, "I")]
        self.randomObj = r.TRandomMixMax()
        self.randomObj.SetSeed(34)
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
        tmpval = 1 #### 1 means belonging to the APPLICATION zone
        if self.isThisSampleForMVA:
            #print "\n1if"
            if event.pass_trigger:
                print "trig"
                if event.Flag_goodVertices and event.Flag_globalSuperTightHalo2016Filter and event.Flag_HBHENoiseFilter and event.Flag_HBHENoiseIsoFilter and event.Flag_EcalDeadCellTriggerPrimitiveFilter and event.Flag_BadPFMuonFilter:
                    #print "flags"
                    if event.nLepGood >= 2 and event.isSS == 0:
                        print "\nleps"
                        print event.LepGood_pt_corrAll[0], event.LepGood_pt_corrAll[1], event.minMllAFAS
                        if event.LepGood_pt_corrAll[0] > 25 and event.LepGood_pt_corrAll[1] > 20 and event.minMllAFAS > 20:
                            print "todos"
                            if self.randomObj.Rndm() > self.appProp:
                                tmpval = 0
                                print "final"

        writeOutput(self, {self.label : tmpval})
        return True
