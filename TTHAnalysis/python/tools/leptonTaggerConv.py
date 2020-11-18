from CMGTools.TTHAnalysis.treeReAnalyzer import *
import ROOT, copy, os
import array, math

        


## LeptonBuilderWZSM
## ___________________________________________________________________
class leptonTaggerConv:
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
        self.lepSelFO       = filter(lambda x: x.mcUCSX_v2 == 4 or x.mcUCSX_v2 == 14 ,[l             for l  in Collection(event, "LepGood", "nLepGood")  ])
        if not self.isData:
            self.gendressleps    = [l             for l  in Collection(event, "GenDressedLepton", "nGenDressedLepton")  ]
            self.genparts    = [p            for p  in Collection(event, "GenPart", "nGenPart")  ]        


    ## listBranches
    ## _______________________________________________________________
    def listBranches(self):
        biglist = [("Conversion_Tag", "I"),("nConversion","I")]
        return biglist




    ## Make gen to reco matching using dR < 0.4
    ## _______________________________________________________________ 
    def getGenMatch(self):
      #We need to rebuild a la UCSX to match 2016 analysis like inHeppy/python/analyzers/objects/LeptonAnalyzer.py
      if not self.isData:
          self.ret["nConversion"] = len(self.lepSelFO)

          for i in range(len(self.lepSelFO)):
              foundPhoton = False
              if self.lepSelFO[i].genPartIdx < 0 or self.lepSelFO[i].genPartIdx > len(self.genparts)-1: 
                  continue
              else:
                  match  = self.genparts[self.lepSelFO[i].genPartIdx]
                  #Find heaviest mother
                  mother = match
                  idx = self.lepSelFO[i].genPartIdx
                  sumTau = 0
                  nParents = 0
                  while nParents < 100:
                      if mother.pdgId == 22:
                          foundPhoton = True
                      elif abs(mother.pdgId) in [11,13,15,23] and foundPhoton: #If from Z or lepton
                          self.ret["Conversion_Tag"] = 1
                          break
                      elif abs(mother.pdgId) != 22 and foundPhoton: 
                          self.ret["Conversion_Tag"] = 0
                          break
                             
                      if not(mother.genPartIdxMother) >= 0:
                          break
                      else:
                          mother = self.genparts[mother.genPartIdxMother]
                          idx = mother.genPartIdxMother
                      nParents += 1

    ## resetMemory
    ## _______________________________________________________________
    def resetMemory(self):
        self.ret = {};
        self.ret["Conversion_Tag"] = -1 # -1 = No conversion, 0 = From hard scaterring, 1 = From Z or its decay
        self.ret["nConversion"]  = 0



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

