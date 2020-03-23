from CMGTools.TTHAnalysis.treeReAnalyzer import *
from numpy.random import poisson

class eventWeighter:
    def __init__(self,nVars=1000,seed=123456):
    	self.nVars = nVars
	self.ret = {}
    def listBranches(self):
        biglist = [("weights_Pois","F", self.nVars)]
        return biglist

    def __call__(self,event):
        self.ret["weights_Pois"] = poisson(lam=1.0,size=self.nVars).tolist()        
        return self.ret
