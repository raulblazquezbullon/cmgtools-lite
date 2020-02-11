from CMGTools.TTHAnalysis.treeReAnalyzer import *
import ROOT, copy, os
import array, math

        


## LeptonBuilderWZSM
## ___________________________________________________________________
class leptonMatcher:
    ## __init__
    ## _______________________________________________________________
    def __init__(self, inputlabel, metbranch ="MET"):
        self.isData = False
        self.inputlabel = inputlabel
    ## __call__
    ## _______________________________________________________________
    def __call__(self, event):
        self.isData = not(hasattr(event, "genWeight"))
        self.resetMemory()
        self.collectObjects(event)
        self.analyzeTopology()
        return self.ret


    ## analyzeTopology
    ## _______________________________________________________________
    def analyzeTopology(self):
        self.getGenMatch()


    ## collectObjects
    ## _______________________________________________________________
    def collectObjects(self, event):
        ## light leptons
        self.lepSelFO       = [l             for l  in Collection(event, "LepGood", "nLepGood")  ]
        if not self.isData:
            self.gendressleps    = [l             for l  in Collection(event, "GenDressedLepton", "nGenDressedLepton")  ]
            self.genparts    = [p            for p  in Collection(event, "GenPart", "nGenPart")  ]        

    ## listBranches
    ## _______________________________________________________________
    def listBranches(self):
        biglist = [("LepGood_mcUCSX_v2", "I", 4), ("LepGood_motherId", "I",4), ("LepGood_motherIdx","I",4), ("LepGood_grandmotherId","I",4), ("LepGood_grandmotherIdx","I",4)]
        return biglist




    ## Make gen to reco matching using dR < 0.4
    ## _______________________________________________________________ 
    def getGenMatch(self):
      #We need to rebuild a la UCSX to match 2016 analysis like inHeppy/python/analyzers/objects/LeptonAnalyzer.py
      if not self.isData:
          for i in range(len(self.lepSelFO)):
              print i, len(self.lepSelFO)

              self.lepSelFO[i].isMatched      = False
              self.lepSelFO[i].genpt          = 0
              self.lepSelFO[i].geneta         = 0
              self.lepSelFO[i].genphi         = 0
              self.lepSelFO[i].genmass        = 0
              self.lepSelFO[i].isMatchingWZ   = False

              if self.lepSelFO[i].genPartIdx < 0: 
                  self.lepSelFO[i].isMatched      = False
                  self.lepSelFO[i].genpt          = 0
                  self.lepSelFO[i].geneta         = 0
                  self.lepSelFO[i].genphi         = 0
                  self.lepSelFO[i].genmass        = 0
                  self.lepSelFO[i].isMatchingWZ   = False
                  self.lepSelFO[i].mcUCSX         = -1

              else:
                  match  = self.genparts[self.lepSelFO[i].genPartIdx]
                  isPrompt = (match.statusFlags & 1) or (match.statusFlags & 32) or (match.statusFlags & 128)
                  isFlip   = (match.pdgId*self.lepSelFO[i].pdgId > 0)
                  self.lepSelFO[i].isMatched      = True
                  self.lepSelFO[i].genpt          = match.pt
                  self.lepSelFO[i].geneta         = match.eta
                  self.lepSelFO[i].genphi         = match.phi
                  self.lepSelFO[i].genmass        = match.mass

                  #Find heaviest mother
                  mother = match
                  idx = self.lepSelFO[i].genPartIdx
                  sumTau = 0
                  nParents = 0
                  while nParents < 1000:
                      print "nParents", nParents, idx 
                      if self.ret["LepGood_grandmotherId"][i] == -999 and self.ret["LepGood_motherId"][i] != -999: 
                          self.ret["LepGood_grandmotherId"][i]  = mother.pdgId
                          self.ret["LepGood_grandmotherIdx"][i] = idx

                      if self.ret["LepGood_motherId"][i] == -999: 
                          self.ret["LepGood_motherId"][i] = mother.pdgId
                          self.ret["LepGood_motherIdx"][i] = idx


                      if mother.pdgId == 22:
                          self.lepSelFO[i].mcUCSX = 4 + sumTau
                          break
                      if mother.pdgId == 24 or mother.pdgId == -24 or mother.pdgId == 23 or mother.pdgId == 25:
                          self.lepSelFO[i].mcUCSX =  sumTau if isFlip else  1 + sumTau                       
                          if not (mother.pdgId ==25): self.lepSelFO[i].isMatchingWZ = True
                          break
                      if abs(mother.pdgId) == 5 or abs(mother.pdgId) == 4:
                          self.lepSelFO[i].mcUCSX = 3  + sumTau
                          break
                      if abs(mother.pdgId) == 1 or abs(mother.pdgId) == 2 or abs(mother.pdgId) == 3:
                          self.lepSelFO[i].mcUCSX = 2 + sumTau
                          break
                      if abs(mother.pdgId) == 15:
                          sumTau = 10
                          mother = self.genparts[mother.genPartIdxMother]
                          idx = mother.genPartIdxMother
                      else:            
                          if not(mother.genPartIdxMother) >= 0:
                              self.lepSelFO[i].mcUCSX = 5 + sumTau
                              break
                          else:
                              mother = self.genparts[mother.genPartIdxMother]
                              idx = mother.genPartIdxMother
                      self.lepSelFO[i].mcUCSX = sumTau
                      if self.ret["LepGood_grandmotherId"][i] == -999 and self.ret["LepGood_motherId"][i] != -999: 
                          self.ret["LepGood_grandmotherId"][i]  = mother.pdgId
                          self.ret["LepGood_grandmotherIdx"][i] = idx

                      if self.ret["LepGood_motherId"][i] == -999: 
                          self.ret["LepGood_motherId"][i] = mother.pdgId
                          self.ret["LepGood_motherIdx"][i] = idx


                      nParents += 1

              self.ret["LepGood_mcUCSX_v2"][i] = self.lepSelFO[i].mcUCSX
      print self.ret
    ## resetMemory
    ## _______________________________________________________________
    def resetMemory(self):
        self.ret = {};
        self.ret["LepGood_mcUCSX_v2"] = [0]*4
        self.ret["LepGood_motherId"]  = [-999]*4
        self.ret["LepGood_grandmotherId"]  = [-999]*4
        self.ret["LepGood_motherIdx"]  = [-999]*4
        self.ret["LepGood_grandmotherIdx"]  = [-999]*4


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




## leptonMVA Preselection
## _______________________________________________________________

## passPtCutTriple
## _______________________________________________________________


if __name__ == '__main__':
    from sys import argv
    file = ROOT.TFile(argv[1])
    tree = file.Get("Events")
    tree.vectorTree = True
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf1 = leptonMatcher("Mini", metbranch ="MET")

        def analyze(self,ev):
            #print "\nrun %6d lumi %4d event %d: leps %d" % (ev.run, ev.lumi, ev.evt, ev.nLepGood)
            print self.sf1(ev)
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 50)

