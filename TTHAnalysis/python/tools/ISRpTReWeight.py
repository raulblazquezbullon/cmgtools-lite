from CMGTools.TTHAnalysis.treeReAnalyzer import *

class ISRpTReWeight: 
    def __init__(self, dicCorr = None):
        self.branches = ["ISRWeight_Nominal", "ISRCorr_Up", "ISRCorr_Down"]
    def init(self,tree):
        totentries      = tree.GetEntries()
        if hasattr(tree,"ISRCorr_Central"):            
            tree.Draw("ISRCorr_Central >> ISRCorrHistCentral(4,0,2)")
            hC = ROOT.gDirectory.Get('ISRCorrHistCentral')
            self.totCorrCentral = 1./hC.GetMean()

    def listBranches(self):
        return self.branches[:]
    def __call__(self,event):
        allret = {}
        corr = getattr(event, "ISRCorr_Central")
        c = corr*self.totCorrCentral
        allret["ISRWeight_Nominal"] = c
        if c >= 1:
            allret["ISRCorr_Up"]      = 2.*c - 1.
            allret["ISRCorr_Down"]    = 1.
        else:
            allret["ISRCorr_Up"]      = 1.
            allret["ISRCorr_Down"]    = 2.*c - 1.
        return allret
