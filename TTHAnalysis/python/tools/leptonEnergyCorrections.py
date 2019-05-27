from CMGTools.TTHAnalysis.treeReAnalyzer import *
from ROOT import TFile,TH1F
import ROOT, copy, os
import array, math
#from PhysicsTools.Heppy.physicsutils.RochesterCorrections import rochcor
# please look at TheRoch.py for compiling the rochester correction standalone module


## LeptonBuilderWZSM
## ___________________________________________________________________
class leptonEnergyCorrections:
    ## __init__
    ## _______________________________________________________________
    def __init__(self, inputlabel, muonFile, era):
        self.inputlabel = '_' + inputlabel
        self.isData = False
        ROOT.gROOT.ProcessLine('#include \"/nfs/fanae/user/carlosec/WZ/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/python/tools/RoccoR.cc\"')
        ROOT.gSystem.Load(os.path.join(os.path.dirname(__file__), 'RoccoR_cc.so'))
        #print "BLAH"
        self.rc = ROOT.RoccoR()
        #print "INIT"
        self.rc.init("%s/src/CMGTools/TTHAnalysis/data/Rochester/%s"%(os.environ['CMSSW_BASE'], muonFile ))
        #Elecs not needed anymore
        #self.elecScaleCorrector = elecScalerCORRECTOR("%s/src/CMGTools/TTHAnalysis/data/elecScales/2016_pt_R9_ele"%os.environ['CMSSW_BASE'])
        self.era = era
        #print "ERA"
    ## __call__
    ## _______________________________________________________________
    def __call__(self, event):
        self.isData = not(hasattr(event, "genWeight"))
        #print self.isData
        #print "RESET"
        self.resetMemory(event)
        #print "COLLECT"
        self.collectObjects(event)
        #print "WRITE"
        self.writeLepSel()
        #print "RETURN"
        return self.ret




    def correctTheLeptons(self, event, leps, isTau = False):
        correctedLeps = []

        for l in leps:
          if not(isTau):
            if abs(l.pdgId) == 13:
                if self.isData:
                    ptCorr = self.rc.kScaleDT(l.charge, l.pt, l.eta, l.phi, 0, 0)
                    setattr(l, "pt", l.pt*ptCorr)
                    #Now compute the systematic variations
                    stat = []
                    for i in range(100):
                        stat.append(self.rc.kScaleDT(l.charge, l.pt, l.eta, l.phi, 1,i))
                    stat = sum([(i - sum(stat)/100.)**2/(100.) for i in stat])
                    systs = 0.
                    for i in range(2,6):
                        systs = (systs**2 + (self.rc.kScaleDT(l.charge, l.pt, l.eta, l.phi, i,0)- ptCorr)**2)**0.5 
                    setattr(l, "ptUp", l.pt*(ptCorr + (stat**2+systs**2)**0.5))
                    setattr(l, "ptDown", l.pt*(ptCorr - (stat**2+systs**2)**0.5))

                elif l.isMatched:
                    ptCorr = self.rc.kSpreadMC(l.charge, l.pt, l.eta, l.phi, l.match.pt , 0, 0)
                    setattr(l, "pt", l.pt*ptCorr)
                    #Now compute the systematic variations
                    stat = []
                    for i in range(100):
                        stat.append(self.rc.kSpreadMC(l.charge, l.pt, l.eta, l.phi, l.match.pt, 1,i))
                    stat = sum([(i - sum(stat)/100.)**2/(100.) for i in stat])
                    systs = 0.
                    for i in range(2,6):
                        systs = (systs**2 + (self.rc.kSpreadMC(l.charge, l.pt, l.eta, l.phi, l.match.pt, i,0)- ptCorr)**2)**0.5
                    setattr(l, "ptUp", l.pt*(ptCorr + (stat**2+systs**2)**0.5))
                    setattr(l, "ptDown", l.pt*(ptCorr - (stat**2+systs**2)**0.5))


                else:
                    u = ROOT.gRandom.Rndm()
                    ptCorr = self.rc.kSmearMC(l.charge, l.pt, l.eta, l.phi, l.nTrackerLayers, u, 0, 0)
                    setattr(l, "pt", l.pt*ptCorr)
                    #Now compute the systematic variations
                    stat = []
                    for i in range(100):
                        stat.append(self.rc.kSmearMC(l.charge, l.pt, l.eta, l.phi, l.nTrackerLayers, u, 1,i))
                    stat = sum([(i - sum(stat)/100.)**2/(100.) for i in stat])
                    systs = 0.
                    for i in range(2,6):
                        systs = (systs**2 + (self.rc.kSmearMC(l.charge, l.pt, l.eta, l.phi, l.nTrackerLayers, u, i,0)- ptCorr)**2)**0.5
                    setattr(l, "ptUp", l.pt*(ptCorr + (stat**2+systs**2)**0.5))
                    setattr(l, "ptDown", l.pt*(ptCorr - (stat**2+systs**2)**0.5))



            if abs(l.pdgId) == 11:
                #nanoAOD already have this added
                eCorr  = 1
                if hasattr(l, "eCorr"): eCorr = l.eCorr
                setattr(l,"pt", l.pt)
                setattr(l,"ptUp", l.pt*eCorr)
                setattr(l,"ptDown", l.pt/eCorr)


          if isTau:
                if self.era == "2016":
                    if (l.decayMode  == 0): c,u,d = (-0.6,0.4,-1.6)
                    elif (l.decayMode== 1 or l.decayMode== 2): c,u,d = (-0.5,0.4,-1.4)
                    elif (l.decayMode==10): c,u,d=(0.0,1.1,-1.1)
                    else: c,u,d=(0.0,1.0,-1.0)    

                elif self.era == "2017":
                    if (l.decayMode  == 0): c,u,d = (0.7,1.5,-0.1)
                    elif (l.decayMode== 1 or l.decayMode== 2): c,u,d = (-0.2,0.6,-1.0)
                    elif (l.decayMode==10): c,u,d=(0.1,1.0,-0.8) 
                    elif (l.decayMode==11): c,u,d=(-0.1,0.9,-1.1)   
                    else: c,u,d=(0.0,1.0,-1.0) 

                elif self.era == "2018":
                    if (l.decayMode  == 0): c,u,d = (-1.3,-0.2,-2.4)
                    elif (l.decayMode== 1 or l.decayMode== 2): c,u,d = (-0.5,0.4,-1.4)
                    elif (l.decayMode==10): c,u,d=(-1.2,-0.4,-2.0)
                    else: c,u,d=(0.0,1.0,-1.0)
                setattr(l,"pt", l.pt*(1+c/100.))
                setattr(l,"ptUp", l.pt*(1+u/100.))
                setattr(l,"ptDown", l.pt*(1+d/100.))
          #print l.pt
          correctedLeps.append(l)
        return correctedLeps

    ## collectObjects
    ## _______________________________________________________________
    def collectObjects(self, event):

        ## Light leptons
        self.lepCorr    = [l             for l  in Collection(event, "LepGood", "nLepGood")  ]
        ## Hadronic Taus
        self.tauCorr    = [t             for t  in Collection(event, "TauGood" , "nTauGood" )]
               
        ## gen leptons if not for data
        if not self.isData:
            self.genPart    = [l             for l  in Collection(event, "GenPart", "nGenPart")  ]
        else: 
            self.genPart = []
        self.getGenMatch()
        self.lepCorr = self.correctTheLeptons(event,self.lepCorr)
        self.tauCorr = self.correctTheLeptons(event,self.tauCorr, True)
    ## listBranches
    ## _______________________________________________________________
    def listBranches(self):
        biglist = []            
        for var in ["pt","ptUp","ptDown","eta", "phi", "mass"]:
            biglist.append(("LepGood_corrected" + var, "F", 8))
            biglist.append(("TauGood_corrected" + var, "F", 8))
        return biglist



    ## Make gen to reco matching using dR < 0.4
    ## _______________________________________________________________ 
    def getGenMatch(self, dR = 0.4):
      if not self.isData:
          for i in range(len(self.lepCorr)):
            if hasattr(self.lepCorr[i],"genPartIdx"):
              self.lepCorr[i].isMatched = True
              self.lepCorr[i].match = self.genPart[getattr(self.lepCorr[i],"genPartIdx")]
            else:
              self.lepCorr[i].isMatched = False
              for j in range(len(self.genPart)):
                  deltaRTemp = deltaR(self.genPart[j].p4().Eta(), self.genPart[j].p4().Phi(), self.lepCorr[i].p4().Eta(), self.lepCorr[i].p4().Phi())
                  if (deltaRTemp < dR and self.genPart[j].pdgId == self.lepCorr[i].pdgId):
                      self.lepCorr[i].match = self.genPart[j]       
                      self.lepCorr[i].isMatched = True
          for i in range(len(self.tauCorr)):
            if hasattr(self.tauCorr[i],"genPartIdx"):
              self.tauCorr[i].isMatched = True
              self.tauCorr[i].match = self.genPart[getattr(self.tauCorr[i],"genPartIdx")]
            else:
              self.tauCorr[i].isMatched = False
              for j in range(len(self.genPart)):
                  deltaRTemp = deltaR(self.genPart[j].p4().Eta(), self.genPart[j].p4().Phi(), self.tauCorr[i].p4().Eta(), self.tauCorr[i].p4().Phi())
                  if (deltaRTemp < dR and self.genPart[j].pdgId == self.tauCorr[i].pdgId):
                      self.tauCorr[i].match = self.genPart[j]       
                      self.tauCorr[i].isMatched = True

    ## resetMemory
    ## _______________________________________________________________
    def resetMemory(self, ev):

        self.ret = {}
        #for i in range(8):
        for var in ["pt","ptUp","ptDown","eta", "phi", "mass"]:
                self.ret["LepGood_corrected" + var] = [-999.]*ev.nLepGood

        #for i in range(8):
        for var in ["pt","ptUp","ptDown","eta", "phi", "mass"]:
                self.ret["TauGood_corrected" + var] = [-999.]*ev.nTauGood



    ## writeLepSel
    ## _______________________________________________________________
    def writeLepSel(self):
        for i, l in enumerate(self.lepCorr):
            for var in ["pt","ptUp","ptDown","eta", "phi", "mass"]:
                self.ret["LepGood_corrected" + var][i] = getattr(l, var, -999.)

        for i, l in enumerate(self.tauCorr):
            for var in ["pt","ptUp","ptDown","eta", "phi", "mass"]:
                self.ret["TauGood_corrected" + var][i] = getattr(l, var, -999.)


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
    tree = file.Get("Events")
    tree.vectorTree = True
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf1 = leptonEnergyCorrections("", "RoccoR2017.txt", "2017")
        def analyze(self,ev):
            print "\n---------------- leps %d" % (ev.nLepGood)
            print self.sf1(ev)
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 50)

