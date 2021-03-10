from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection 
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import writeOutput




class BtagSFs_new( Module ):
    def __init__(self, jetcoll, corrs={}):
        self.jetcoll = jetcoll
        self.corrs = corrs
        self.vars = ['', '_up_correlated', '_up_uncorrelated', '_down_correlated', '_down_uncorrelated', '_lf_up_correlated', '_lf_up_uncorrelated', '_lf_down_correlated', '_lf_down_uncorrelated']
        self.vars = [ 'btagSF%s'%x for x in self.vars ] 
        self.isGroups = False
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        for var in self.vars:
            if self.corrs and 'jes' in var: continue
            self.wrappedOutputTree.branch(var,'F')
        if self.corrs: 
            for key in self.corrs: 
                if type(self.corrs[key]) != int and type(self.corrs[key]) != float: 
                    self.isGroups=True
                    break
            if not self.isGroups: 
                for br in ['up_jesCorr','down_jesCorr','up_jesUnCorr','down_jesUnCorr']:
                    self.wrappedOutputTree.branch('btagSF_shape_%s'%br, 'F')
            else: 
                for key in self.corrs:
                    self.wrappedOutputTree.branch('btagSF_shape_up_jes%s'%key, 'F')
                    self.wrappedOutputTree.branch('btagSF_shape_down_jes%s'%key, 'F')

    def analyze(self, event):
        jets = [ j for j in Collection(event, self.jetcoll)] 
        ret = {} 
        for var in self.vars: 
            res = 1
            for jet in jets: 
                if jet.pt<25: continue
                res *= getattr(jet,var)
            ret[var] = res
       
        writeOutput(self, ret)
        return True
