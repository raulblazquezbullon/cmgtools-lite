from math import sqrt, cos
from copy import deepcopy
import struct as st
import warnings as wr
import ROOT as r

from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection 
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaR,deltaPhi

from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput
from CMGTools.TTHAnalysis.tools.nanoAOD.TopRun2_modules import ch, tags


class altHEMcheck(Module):
    def __init__(self, label = "", recllabel = 'Recl'):

        self.branches = [("isThisEventVetoed", "I"),]
                            
        self.label    = "" if (label in ["", None]) else ("_" + label)

        self.nominaljecscaff = "_nom"
        self.inputlabel = '_' + recllabel
        self.htmiss = None

        return


    # Old interface (CMG)
    def listBranches(self):
        return self.branches[:]


    def __call__(self, event):
        return self.run(event, CMGCollection, "met")


    # New interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        declareOutput(self, wrappedOutputTree, self.branches)


    def analyze(self, event):
        writeOutput(self, self.run(event, NanoAODCollection))
        return True


    # Common processing
    def run(self, event, Collection):
        # ============================ Definitions and declarations
        allret = {}

        leps    = [l for l in Collection(event, "LepGood")]
        leps_4m = [l.p4() for l in leps]

        for i in range(len(leps_4m)):
            leps_4m[i].SetPtEtaPhiM(leps[i].pt_corrAll, leps_4m[i].Eta(),
                                    leps_4m[i].Phi(),   leps_4m[i].M())

        all_jets = [j for j in Collection(event, "Jet")]
        jets    = [all_jets[getattr(event, 'iJetSel30_Recl')[j]]
                   for j in xrange(min([getattr(event, 'nJetSel30_Recl'), 5]))]
                   
        jets_4m = [j.p4() for j in jets]

        jetjecsysscaff = (self.nominaljecscaff)
        if event.isData: jetjecsysscaff = ""

        for i in range(len(jets_4m)):
            jets_4m[i].SetPtEtaPhiM(getattr(jets[i], "pt" + jetjecsysscaff), jets_4m[i].Eta(),
                                    jets_4m[i].Phi(), getattr(jets[i], "mass" + jetjecsysscaff))



        # ============================ Initialisations
        for var in self.branches:
            if type(var) == tuple:
                allret[var[0]] = 0

        if event.year == 2018:
            thesample = ""
            for i in range(event.nDatasetName):
                thesample += str(event.DatasetName_name[i])

            if "2018C" in thesample or "2018D" in thesample:
                for i in range(len(leps)):
                    if abs(leps[i].pdgId) == 11:
                        if leps_4m[i].Pt() > 30:
                            tmpeta = leps_4m[i].Eta()
                            if tmpeta < -1.4 and tmpeta > -3.0:
                                tmphi = leps_4m[i].Phi()
                                if tmphi < -0.87 and tmphi > -1.57:
                                    allret["isThisEventVetoed"] = 1
                                    return allret

                self.htmiss = None
                for i in range(len(jets)):
                    tmpeta = jets_4m[i].Eta()
                    if tmpeta < -1.2 and tmpeta > -3.2:
                        tmphi = jets_4m[i].Phi()
                        if tmphi < -0.67 and tmphi > -1.77:
                            if not self.htmiss:
                                self.getHTmiss(leps_4m, jets_4m)
                            if abs(jets_4m[i].DeltaPhi(self.htmiss)) < 0.5:
                                allret["isThisEventVetoed"] = 1
                                return allret
        return allret
        
        
    def getHTmiss(self, leps4m, jets4m):
        self.htmiss = r.TLorentzVector()
        for el in leps4m: self.htmiss += el
        for el in jets4m: self.htmiss += el
        
        self.htmiss = -self.htmiss
        return
