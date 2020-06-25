import ROOT as r
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

class CombinedObjectTaggerForCleaningTopRun2(Module):
    def __init__(self, label, year_ = None, debug = False):
        self.label = "" if (label in ["", None]) else ("_" + label)
        self.year  = year_
        self.debug = debug

        #### NOTE: here the tight selections for jet (excluding eta and pt requirements) are hardcoded per year
        self.selecsdict = {}
        self.selecsdict[2016] = lambda jet: jet.jetId > 0
        self.selecsdict[2017] = lambda jet: jet.jetId > 1
        self.selecsdict[2018] = lambda jet: jet.jetId > 1
        return


    # interface for old code
    def listBranches(self):
        return []


    def __call__(self,event):
        from CMGTools.TTHAnalysis.treeReAnalyzer import Collection
        jets = [j for j in Collection(event, "Jet", "nJet")]
        self.run(event, jets)
        return {}


    # interface for new code
    def analyze(self, event):
        from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
        jets = [j for j in Collection(event, "Jet")]
        self.run(event, jets)
        return True


    # General methods
    def run(self, event, jets):
        selection = lambda j : True
        if   hasattr(event, "year"):
            selection = self.selecsdict[event.year]
        elif self.year != None:
            selection = self.selecsdict[self.year]

        tags = r.CombinedObjectTagsTopRun2(len(jets))

        for i,jet in enumerate(jets):
            if selection(jet): tags.setJetFlags(i, True)

        setattr(event, '_CombinedTagsForCleaning{lab}'.format(lab = self.label), tags)
        return {}
