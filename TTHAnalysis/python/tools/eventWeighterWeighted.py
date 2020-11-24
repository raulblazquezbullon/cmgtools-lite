from CMGTools.TTHAnalysis.treeReAnalyzer import *
from numpy.random import poisson

class eventWeighterWeighted:
    def __init__(self,nVars=1000,seed=123456, mu=1.0):
    	self.nVars = nVars
	self.ret = {}
        self.mu = mu
    def listBranches(self):
        biglist = [("weights_Pois","F", self.nVars)]
        return biglist

    def __call__(self,event):
        self.ret["weights_Pois"] = poisson(lam=self.mu,size=self.nVars).tolist()
        #First is always nominal
        self.ret["weights_Pois"][0] = self.mu 
        return self.ret
