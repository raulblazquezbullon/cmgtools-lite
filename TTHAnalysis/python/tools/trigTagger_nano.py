from CMGTools.TTHAnalysis.treeReAnalyzer import *

class trigTagger:
    def __init__(self,label,paths,vetos):
        self.label = label
        self.paths = paths
        self.vetos = vetos
    def listBranches(self):
        biglist = [(self.label,"I")]
        return biglist
    def __call__(self,event):
        self.isData = not(hasattr(event, "genWeight"))
        ret = {}
        good = False
        if self.isData:
            for p in self.vetos:
                if not(hasattr(event, p[0])): continue
                if getattr(event,p[0]) and p[1] <= event.run and  p[2] >= event.run :
                    ret[self.label] = 0
                    return ret
 
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
