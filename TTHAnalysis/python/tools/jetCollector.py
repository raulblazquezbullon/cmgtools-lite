from CMGTools.TTHAnalysis.treeReAnalyzer import *
import ROOT, copy, os
import array, math

        


## LeptonBuilderWZSM
## ___________________________________________________________________
class jetCollector:
    ## __init__
    ## _______________________________________________________________
    def __init__(self, select, tag, label):
        self.isData = False
        self.select = select
        self.label = label
        if tag == "MC":
            self.subbranchesF = ['area', 'btagCMVA', 'btagCSVV2', 'btagDeepB', 'btagDeepC', 'btagDeepFlavB', 'btagDeepFlavC', 'chEmEF', 'chHEF', 'eta', 'jercCHF', 'jercCHPUF', 'mass', 'muEF', 'muonSubtrFactor', 'neEmEF', 'neHEF', 'phi', 'pt', 'qgl', 'rawFactor', 'bRegCorr', 'bRegRes', 'pt_nom', 'corr_JEC', 'corr_JER', 'mass_nom', 'pt_jerUp', 'mass_jerUp', 'mass_jmrUp', 'mass_jmsUp', 'pt_jesTotalUp', 'mass_jesTotalUp', 'pt_jerDown', 'mass_jerDown', 'mass_jmrDown', 'mass_jmsDown', 'pt_jesTotalDown', 'mass_jesTotalDown', 'pt_jesTotalCorrUp', 'pt_jesTotalCorrDown', 'pt_jesTotalUnCorrUp', 'pt_jesTotalUnCorrDown']
            self.subbranchesI = ['electronIdx1', 'electronIdx2', 'jetId', 'muonIdx1', 'muonIdx2', 'nConstituents', 'nElectrons', 'nMuons', 'puId', 'genJetIdx', 'hadronFlavour', 'partonFlavour', 'cleanmask'] 
        elif tag == "DATA":
            self.subbranchesF = ['area', 'btagCMVA', 'btagCSVV2', 'btagDeepB', 'btagDeepC', 'btagDeepFlavB', 'btagDeepFlavC', 'chEmEF', 'chHEF', 'eta', 'jercCHF', 'jercCHPUF', 'mass', 'muEF', 'muonSubtrFactor', 'neEmEF', 'neHEF', 'phi', 'pt', 'qgl', 'rawFactor', 'bRegCorr', 'bRegRes', 'pt_nom']
            self.subbranchesI = ['electronIdx1', 'electronIdx2', 'jetId', 'muonIdx1', 'muonIdx2', 'nConstituents', 'nElectrons', 'nMuons', 'puId', 'cleanmask']

    ## __call__
    ## _______________________________________________________________
    def __call__(self, event):
        self.isData = not(hasattr(event, "genWeight"))
        self.resetMemory()
        self.collectObjects(event)
        self.writebranches()
        return self.ret




    ## collectObjects
    ## _______________________________________________________________
    def collectObjects(self, event):
        ## light leptons
        self.jets       = [j   for j in Collection(event, "Jet", "nJet") ]
        self.cleanindex = [iJ  for iJ in getattr(event,"iJSel_Mini")     ] 
        self.cleanjets  = []
        for iJ in self.cleanindex:
           if self.select(self.jets[iJ]):
              self.cleanjets.append(self.jets[iJ])
        self.cleanjets.sort(key=lambda x : x.pt_nom, reverse=True)
        for j in self.cleanjets: 
            setattr(j,"pt",getattr(j,"pt_nom")) # Just put the corrected value already
 
    def writebranches(self):
        self.ret["nJet"+self.label] = len(self.cleanjets)
        for br in self.subbranchesF + self.subbranchesI:
            self.ret["Jet"+self.label + "_" + br] = [-999.] * self.ret["nJet"+self.label]
            for ij, j in enumerate(self.cleanjets):
                value = getattr(j,br)
                if type(value) == type("a"): value = ord(value)
                self.ret["Jet"+self.label + "_" + br][ij] = value

    ## listBranches
    ## _______________________________________________________________
    def listBranches(self):
        biglist = [("nJet"+self.label, "I")]
        for br in self.subbranchesF:
            biglist.append(("Jet"+self.label + "_" + br,"F",20,"nJet"+self.label))
        for br in self.subbranchesI:
            biglist.append(("Jet"+self.label + "_" + br,"I",20,"nJet"+self.label))

        return biglist




    ## resetMemory
    ## _______________________________________________________________
    def resetMemory(self):
        self.ret = {}


if __name__ == '__main__':
    from sys import argv
    file = ROOT.TFile(argv[1])
    file2= ROOT.TFile(argv[2])
    tree = file.Get("Events")
    tree.vectorTree = True
    tf   = file2.Get("sf/t")
    tree.AddFriend(tf)
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf1 = jetCollector(lambda jet : jet.pt_nom >= 25, "DATA", "Clean25")

        def analyze(self,ev):
            print "----------------------------------"
            print self.sf1(ev)
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 10)

