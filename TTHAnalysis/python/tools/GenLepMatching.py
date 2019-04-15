from CMGTools.TTHAnalysis.treeReAnalyzer import *
import ROOT 
import math

class GenLepMatching: 
    def __init__(self, dictDR = {"01":0.1, "04":0.4, "08":0.8}):
        self.branches = []
        self.dictDR = dictDR

        for var in ["dRMinRecoGen", "bestMatchIndexGen", "bestMatchpdgId", "nMatchGen", "matchlepGen", "matchbGen", "motherId", "grandMotherId", "isMatchFlavor","firstAncestor"]:
            for key in self.dictDR.keys():
                self.branches.append("LepGood_"  + var + "dR" + key)     

    def listBranches(self):
        biglist = []
        for b in self.branches:
            if "dRMin" in b:
                biglist.append((b        , "F", 6))
            else:
                biglist.append((b        , "I", 6))

        return biglist
    def initBranches(self):
        for b in self.branches:
            self.allret[b] = [-999]*6

    def __call__(self,event):
        self.allret = {}
        self.initBranches()
        #Build collections
        #This works for EWKINO like trees
        self.leps        = [l             for l  in Collection(event, "LepGood", "nLepGood")  ]
        self.genparts    = [l for l in Collection(event, "GenPart", "nGenPart")]
        for key in self.dictDR.keys():
            self.matchGenToReco(self.dictDR[key])
            self.saveBranches(key)
        return self.allret

    def matchGenToReco(self, dRMax = 0.1):
        for i in range(len(self.leps)): #Loop like this because I'm tired of python's random way of treating things as pointers or copys
            dRMin        = dRMax
            bestIndex    = -1
            nMatch       = 0
            mlep         = 0
            mb           = 0
            match        = 0
            firstAncestor = 0
            for j in range(len(self.genparts)):
                if self.genparts[j].pt < 5: continue #Hard enough particles
                dRgen = deltaR(self.leps[i].eta, self.leps[i].phi, self.genparts[j].eta, self.genparts[j].phi)
                if dRgen < dRMax and not(self.genparts[j] in [-6,6,23,24,-24,25]): #Exclude matching to a heavy particle
                    nMatch += 1
                    if self.genparts[j].pdgId in [-5,5]:
                        mb += 1
                    if self.genparts[j].pdgId in [-15,-13,-11,11,13,15]:
                        mlep += 1

                    if ((self.genparts[j].pdgId == self.leps[i].pdgId or dRgen < dRMin) and not match) or (self.genparts[j].pdgId == self.leps[i].pdgId and dRgen < dRMin and match) :
                        dRMin = dRgen
                        bestIndex = j
                        match = 1 if (self.leps[i].pdgId == self.genparts[j].pdgId) else 0
            self.leps[i].dRMinRecoGen      = dRMin
            self.leps[i].bestMatchIndexGen = bestIndex
            if bestIndex != -1:
                self.leps[i].bestMatchpdgId    = self.genparts[bestIndex].pdgId
                self.leps[i].motherId          = self.genparts[bestIndex].motherId
                if self.genparts[bestIndex].motherIndex >= 0:              
                    self.leps[i].grandMotherId     = self.genparts[self.genparts[bestIndex].motherIndex].motherId
                else:
                    self.leps[i].grandMotherId     = -999

            else:
                self.leps[i].bestMatchpdgId    = -999
                self.leps[i].motherId          = -999
                self.leps[i].grandMotherId     = -999

            self.leps[i].nMatchGen         = nMatch
            self.leps[i].matchlepGen       = mlep
            self.leps[i].matchbGen         = mb
            self.leps[i].isMatchFlavor     = match
            self.leps[i].firstAncestor     = -999
            matchedMotherIndex = bestIndex
            while matchedMotherIndex >= 0:
                if self.genparts[matchedMotherIndex].motherId == -9999: break
                self.leps[i].firstAncestor = self.genparts[matchedMotherIndex].motherId
                matchedMotherIndex = self.genparts[matchedMotherIndex].motherIndex

    def saveBranches(self, tag):
        for i in range(len(self.leps)):
            for var in ["dRMinRecoGen", "bestMatchIndexGen", "bestMatchpdgId", "nMatchGen", "matchlepGen", "matchbGen", "motherId", "grandMotherId", "isMatchFlavor","firstAncestor"]:
                self.allret["LepGood_" + var + "dR" + tag][i] = getattr(self.leps[i], var)

## Useful functions
## deltaPhi
## _______________________________________________________________
def deltaPhi(phi1, phi2):
    res = phi1 - phi2
    while res >   math.pi: res -= 2*math.pi
    while res <= -math.pi: res += 2*math.pi
    return res

## deltaR
## _______________________________________________________________
def deltaR(eta1, phi1, eta2, phi2):
    dEta = abs(eta1-eta2)
    dPhi = deltaPhi(phi1, phi2)
    return math.sqrt(dEta*dEta + dPhi*dPhi)


if __name__ == '__main__':
    from sys import argv
    file = ROOT.TFile(argv[1])
    tree = file.Get("tree")
    tree.vectorTree = True
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf1 = GenLepMatching()
        def analyze(self,ev):
            print "\nrun %6d lumi %4d event %d: leps %d" % (ev.run, ev.lumi, ev.evt, ev.nLepGood)
            print self.sf1(ev)
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 10000)


