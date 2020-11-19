from CMGTools.TTHAnalysis.treeReAnalyzer import *
from numpy.random import poisson

ROOT.gROOT.ProcessLine("Float_t ISR_nJets(int nJet, int var = 0) {if (nJet == 0) return 1+0.043*var;if (nJet == 1) return 0.914+0.043*var;if (nJet == 2) return 0.796+0.102*var;if (nJet == 3) return 0.698+0.151*var;if (nJet == 4) return 0.602+0.199*var;if (nJet == 5) return 0.579+0.211*var;if (nJet >= 6) return 0.580+0.210*var;}")

class ISRnJets:
    def __init__(self,nJetVar):
    	self.nJetVar = nJetVar
	self.ret = {}
    def listBranches(self):
        biglist = [("ISR_nJet_weight","F"),("ISR_nJet_weightUp","F"),("ISR_nJet_weightDn","F"),("ISR_D","F")]
        return biglist

    def __call__(self,event):
        self.ret["ISR_nJet_weight"] = self.D*ROOT.ISR_nJets(getattr(event, self.nJetVar))
        self.ret["ISR_nJet_weightUp"] = self.D*ROOT.ISR_nJets(getattr(event, self.nJetVar),1)
        self.ret["ISR_nJet_weightDn"] = self.D*ROOT.ISR_nJets(getattr(event, self.nJetVar),-1)
        self.ret["ISR_D"] = self.D
        return self.ret


    def init(self,tree):
        print 'Auto-determining normalization from source file, using %s as the variable to reweight...'%self.nJetVar
        tree.Draw("ISR_nJets(%s,0) >> autoISRhist(40,0.5,1.5)"%self.nJetVar)
        hist = ROOT.gDirectory.Get('autoISRhist')
        print hist
        oldNorm = hist.GetEntries()
        newNorm = hist.GetMean()*oldNorm
        self.D = (1.*oldNorm)/newNorm 
        print oldNorm, newNorm
