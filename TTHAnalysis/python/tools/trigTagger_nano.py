from CMGTools.TTHAnalysis.treeReAnalyzer import *

class trigTagger:
    def __init__(self,label,paths):
        self.label = label
        self.paths = paths
    def listBranches(self):
        biglist = [(self.label,"I")]
        return biglist
    def __call__(self,event):
        self.isData = not(hasattr(event, "genWeight"))
        ret = {}
        good = False
        for p in self.paths:
            if not(hasattr(event, p[0])): continue
            if self.isData:
                if getattr(event,p[0]) and p[1] <= event.run and  p[2] >= event.run :
                    good = True
                    break
            else:
                if getattr(event,p[0]):
                    good = True
                    break

        ret[self.label] = 1 if good else 0
        return ret
