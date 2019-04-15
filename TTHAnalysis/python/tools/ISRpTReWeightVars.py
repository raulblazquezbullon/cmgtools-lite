from CMGTools.TTHAnalysis.treeReAnalyzer import *

class ISRpTReWeightVars: 
    def __init__(self, dicCorr = None):
        self.branches = ["ISRWeight_Up","ISRWeight_Down"]
    def init(self,tree):
        totentries      = tree.GetEntries()
        if hasattr(tree,"ISRCorr_Up") and hasattr(tree, "ISRCorr_Down"):
            tree.Draw("ISRCorr_Up >> ISRCorrHistUp(2000,0,2)")
            self.totCorrUp   = 1./ROOT.gDirectory.Get('ISRCorrHistUp').GetMean()
            tree.Draw("ISRCorr_Down >> ISRCorrHistDown(2000,0,2)")
            self.totCorrDown = 1./ROOT.gDirectory.Get('ISRCorrHistDown').GetMean()

    def listBranches(self):
        return self.branches[:]

    def __call__(self,event):
        allret = {}
        allret["ISRWeight_Up"]   = getattr(event, "ISRCorr_Up")  *  self.totCorrUp
        allret["ISRWeight_Down"] = getattr(event, "ISRCorr_Down")*self.totCorrDown
        return allret
