from CMGTools.TTHAnalysis.treeReAnalyzer import *
import ROOT 


class prepareMVAHighLevelVariables: 
    def __init__(self, metbranch):
	self.metbranch = metbranch
        self.branches = ["LTpMET","mT3L"]

	
    def listBranches(self):
        return self.branches[:]

    def __call__(self,event):
        self.allret = {}
        self.leps =  [l             for l  in Collection(event, "LepSel", "nLepSel")        ]
	self.met  = getattr(event, self.metbranch )
	self.metphi = getattr(event, self.metbranch.replace("pt", "phi"))
	
	self.allret["LTpMET"] = self.leps[0].pT() + self.leps[1].pT() + self.leps[2].pT() + self.met
	self.allret["mT3L"]   = self.mt((self.leps[0].p4() + self.leps[1].p4() + self.leps[2].p4()).pT(), self.met, (self.leps[0].p4() + self.leps[1].p4() + self.leps[2].p4()).phi(), self.metphi) 
        return self.allret	

    def mt(self, pt1, pt2, phi1, phi2):
        return sqrt(2*pt1*pt2*(1-cos(phi1-phi2)))
