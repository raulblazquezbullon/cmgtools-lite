import ROOT
ROOT.PyConfig.IgnoreCommandLineOptions = True
# group jec components
# taken from https://docs.google.com/spreadsheets/d/1Feuj1n0MdotcPq19Mht7SUIgvkXkA4hiB0BxEuBShLw/edit?ouid=111820255692530107608&usp=sheets_home&ths=true

import os
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection, Object
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
import math

class jetmetGrouper_TopRun2(Module):
    def __init__(self, groups, jetbranch):
        self.groups    = groups
        self.jetbranch = jetbranch
        return

    def beginJob(self):
        pass

    def endJob(self):
        pass

    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        for group in self.groups:
            for sign in ['Up','Down']:
                self.wrappedOutputTree.branch("%s_mass_jes%s%s"%(self.jetbranch,group,sign) , "F", lenVar="n%s"%self.jetbranch)
        return

    def endFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        pass


    def analyze(self, event):
        """Nominal variables"""
        jets = Collection(event, '%s'%self.jetbranch)
        for group in self.groups:
            for sign in ['Up','Down']:
                jetVar    = []
                for j in jets:
                    theMass  = getattr(j, "mass_nom", "mass")
                    jetVar.append(0)
                    for comp in self.groups[group]:
                        jetVar[-1] = (jetVar[-1]**2 + (getattr(j, "mass_jes" + comp + sign) - theMass)**2)**0.5

                    jetVar[-1]  = theMass + (1 if sign == 'Up' else -1) * jetVar[-1]
                self.wrappedOutputTree.fillBranch("%s_mass_jes%s%s"%(self.jetbranch, group, sign),  jetVar )
        return True



groups = {'HF'                 : ['PileUpPtHF', 'RelativeJERHF', 'RelativePtHF'],
          'BBEC1_year'         : ['RelativeJEREC1', 'RelativePtEC1', 'RelativeStatEC'],
          'FlavorQCD'          : ['FlavorQCD'],
          'RelativeSample_year': ['RelativeSample'],
          'EC2'                : ['PileUpPtEC2'],
          'HF_year'            : ['RelativeStatHF'],
          'RelativeBal'        : ['RelativeBal'],
          'Absolute_year'      : ['AbsoluteStat', 'RelativeStatFSR', 'TimePtEta'],
          'BBEC1'              : ['PileUpPtBB', 'PileUpPtEC1', 'RelativePtBB'],
          'EC2_year'           : ['RelativeJEREC2', 'RelativePtEC2'],
          'Absolute'           : ['AbsoluteMPFBias', 'AbsoluteScale', 'Fragmentation', 'PileUpDataMC',
                                  'PileUpPtRef', 'RelativeFSR', 'SinglePionECAL', 'SinglePionHCAL'],
}

jetMetCorrelate2016_TopRun2 = lambda  : jetmetGrouper_TopRun2( groups, "Jet")
jetMetCorrelate2017_TopRun2 = lambda  : jetmetGrouper_TopRun2( groups, "Jet")
jetMetCorrelate2018_TopRun2 = lambda  : jetmetGrouper_TopRun2( groups, "Jet")
