from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
import ROOT as r
import os


class TopPtWeight(Module):
    # =================== ### Main methods
    def __init__(self):
        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree
        self.out.branch('TopPtWeight', 'F')
        return


    def analyze(self, event):
        topptw = 1.0
        if event.isTop and event.Top2_pt >= 0:
            topptw *= r.TMath.Exp(0.0615 - 0.0005 * event.Top1_pt)
            topptw *= r.TMath.Exp(0.0615 - 0.0005 * event.Top2_pt)
            topptw = r.TMath.Sqrt(topptw)

        self.out.fillBranch('TopPtWeight', topptw)
        return True
