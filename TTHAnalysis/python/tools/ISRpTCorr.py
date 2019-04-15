from CMGTools.TTHAnalysis.treeReAnalyzer import *

class ISRpTCorr: 
    def __init__(self, dicCorr = None):
        self.branches = ["ISRCorr_Central","ISR_pt"]
        if dicCorr == None: #Use 2016 as default
            self.dicCorr = {(0,50): 1, (50,100):1.052, (100,150):1.179, (150,200):1.150, (200,300):1.057, (300,400): 1.000, (400,600): 0.912, (600,): 0.783}

    def listBranches(self):
        return self.branches[:]

    def __call__(self,event):
        allret = {}
        ptGen = self.getSUSYGenPartPt(event)
        idx   = self.getKey(ptGen)
        corr  = self.dicCorr[idx]
        allret["ISRCorr_Central"] = corr
        allret["ISR_pt"] = ptGen
        return allret

    def getSUSYGenPartPt(self, ev):
        genParts = [ p for p in Collection(ev,"GenPart","nGenPart")]
        for p in genParts:
            if p.pdgId == 1000023: #Neutralino
                genNeu  = p
            if abs(p.pdgId) == 1000024: #Chargino
                genChar = p
        return (genNeu.p4() + genChar.p4()).Pt()


    def getKey(self, pt):
        for p in self.dicCorr.keys():
            print p, len(p)
            if len(p) == 1: 
                if pt > p[0]: return p
            else:
                if pt > p[0] and pt < p[1]: return p
        print "WARNING: PT %1.3f not found in Dict, returning ISR SF 1!!!!"%pt
        return 1
