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
                      if self.ret["LepGood_motherId"] == -999: 
                          self.ret["LepGood_motherId"] = mother.pdgId
                          self.ret["LepGood_motherId"] = idx

                      if self.ret["LepGood_grandmotherId"] == -999 and self.ret["LepGood_motherId"] != -999: 
                          self.ret["LepGood_grandmotherId"]  = mother.pdgId
                          self.ret["LepGood_grandmotherIdx"] = idx

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

                      nParents += 1
                  self.ret["LepGood_mcUCSX_v2"][i] = self.lepSelFO[i].mcUCSX

    ## resetMemory
    ## _______________________________________________________________
    def resetMemory(self):
        self.ret = {};
        self.ret["LepGood_mcUCSX_v2"] = [0]*20
        self.ret["LepGood_motherId"]  = [-999]*20
        self.ret["LepGood_grandmotherId"]  = [-999]*20
        self.ret["LepGood_motherIdx"]  = [-999]*20
        self.ret["LepGood_grandmotherIdx"]  = [-999]*20


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
    tree = file.Get("tree")
    tree.vectorTree = True
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf1 = LeptonChoiceEWK("Old", 
                lambda lep : lep.relIso03 < 0.5, 
                lambda lep : lep.relIso03 < 0.1 and lep.sip3d < 4 and _susy2lss_lepId_CB(lep),
                cleanJet = lambda lep,jet,dr : (lep.pt > 10 and dr < 0.4))
            self.sf2 = LeptonChoiceEWK("PtRel", 
                lambda lep : lep.relIso03 < 0.4 or lep.jetPtRel > 5, 
                lambda lep : (lep.relIso03 < 0.1 or lep.jetPtRel > 14) and lep.sip3d < 4 and _susy2lss_lepId_CB(lep),
                cleanJet = lambda lep,jet,dr : (lep.pt > 10 and dr < 0.4))
            self.sf3 = LeptonChoiceEWK("MiniIso", 
                lambda lep : lep.miniRelIso < 0.4, 
                lambda lep : lep.miniRelIso < 0.05 and lep.sip3d < 4 and _susy2lss_lepId_CB(lep),
                cleanJet = lambda lep,jet,dr : (lep.pt > 10 and dr < 0.4))
            self.sf4 = LeptonChoiceEWK("PtRelJC", 
                lambda lep : lep.relIso03 < 0.4 or lep.jetPtRel > 5, 
                lambda lep : (lep.relIso03 < 0.1 or lep.jetPtRel > 14) and lep.sip3d < 4 and _susy2lss_lepId_CB(lep),
                cleanJet = lambda lep,jet,dr : (lep.pt > 10 and dr < 0.4 and not (lep.jetPtRel > 5 and lep.pt*(1/lep.jetPtRatio-1) > 25)))
            self.sf5 = LeptonChoiceEWK("MiniIsoJC", 
                lambda lep : lep.miniRelIso < 0.4, 
                lambda lep : lep.miniRelIso < 0.05 and lep.sip3d < 4 and _susy2lss_lepId_CB(lep),
                cleanJet = lambda lep,jet,dr : (lep.pt > 10 and dr < 0.4 and not (lep.jetDR > 0.5*10/min(50,max(lep.pt,200)) and lep.pt*(1/lep.jetPtRatio-1) > 25)))
        def analyze(self,ev):
            print "\nrun %6d lumi %4d event %d: leps %d" % (ev.run, ev.lumi, ev.evt, ev.nLepGood)
            print self.sf1(ev)
            print self.sf2(ev)
            print self.sf3(ev)
            print self.sf4(ev)
            print self.sf5(ev)
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 50)

