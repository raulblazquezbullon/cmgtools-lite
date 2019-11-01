from CMGTools.TTHAnalysis.treeReAnalyzer import *
from CMGTools.TTHAnalysis.tools.leptonJetReCleaner import passMllTLVeto, passTripleMllVeto
from ROOT import TFile,TH1F
import ROOT, copy, os
import array, math


## OSpair
## ___________________________________________________________________
class OSpair:

    ## __init__
    ## _______________________________________________________________
    def __init__(self, l1, l2):
        self.l1   = l1
        self.l2   = l2
        self.load()

    ## debug
    ## _______________________________________________________________
    def debug(self):
        add = "SF" if self.isSF else "OF"
        return "OSpair (%s, %3.1f) made up of (%3.1f, %d) and (%3.1f, %d)" % (add, self.mll, self.l1.pt, self.l1.pdgId, self.l2.pt, self.l2.pdgId)


    ## load
    ## _______________________________________________________________
    def load(self):

        self.isSF = False
        self.wTau = False

        if     self.l1.pdgId  ==          -self.l2.pdgId       : self.isSF = True
        if abs(self.l1.pdgId) == 15 or abs(self.l2.pdgId) == 15: self.wTau = True

        if   self.isSF                                           : self.target = 91.1876
        elif abs(self.l1.pdgId) == 15 or abs(self.l2.pdgId) == 15: self.target = 60
        else                                                     : self.target = 50
  
        self.mll  = (self.l1.p4(self.l1.conePt) + self.l2.p4(self.l2.conePt)).M()
        self.mllR = (self.l1.p4()               + self.l2.p4()              ).M()
        self.diff = abs(self.target - self.mll)

    ## test
    ## _______________________________________________________________
    def test(self, leps):
        if len(leps) > 2: return False
        ll = [self.l1, self.l2]
        return all([l in ll for l in leps])

        


## LeptonBuilderWZSM
## ___________________________________________________________________
class leptonBuilderWZSM:


    ## __init__
    ## _______________________________________________________________
    def __init__(self, inputlabel, metbranch ="MET"):
        self.mt2maker = None
        self.inputlabel = '_' + inputlabel
        self.systsJEC = {0: "", 1: "_jesTotalCorrUp"   , -1: "_jesTotalCorrDown",  2: "_jesTotalUnCorrUp"   , -2: "_jesTotalUnCorrDown"}
        self.lepScaleSysts = {1:"_elScaleUp", -1:"_elScaleDown",2:"_muScaleUp",-2:"_muScaleDown",0:""}
        self.metbranch = metbranch
        self.isData = False
    ## __call__
    ## _______________________________________________________________
    def __call__(self, event):
        #print "START"
        self.isData = not(hasattr(event, "genWeight"))
        if self.isData: 
           self.systsJEC = {0: ""}
           self.lepScaleSysts = {0:""}
        self.totalret = {}
        #print "SYSTS"
        for lepVar in ([-2,-1,1,2,0] if not(self.isData) else [0]):
           self.lepVar = lepVar
           #print "RESET"
           self.resetMemory()
           self.currentVar = lepVar
           #print "COLLECT"
           self.collectObjects(event)
           #print "ANALYZE"
           self.analyzeTopology()
           #print "WRITE"
           self.writeLepSel()
           for branch in self.ret:
             self.totalret[branch + self.lepScaleSysts[lepVar]] = self.ret[branch]
        toPop = []
        #print "ALL RET"
        for key in self.totalret:
           if "jes" in key and ("elScale" in key or "muScale" in key): toPop.append(key)
        for p in toPop: self.totalret.pop(p)
        self.totalret["MET_pt_central"] = self.totalret["MET_pt"]
        self.totalret["MET_phi_central"] = self.totalret["MET_phi"]
        self.totalret.pop("MET_pt")
        self.totalret.pop("MET_phi")
        #print "RETURN"
        return self.totalret


    ## analyzeTopology
    ## _______________________________________________________________
    def analyzeTopology(self):

        if len(self.lepSelFO)>=3: self.ret["is_3l"] = 1
        if len(self.lepSelFO)>=4: self.ret["is_4l"] = 1
        self.getGenMatch()
        self.collectOSpairs(3, False)
        self.makeMass(3)
        self.makeMt2(3)
        self.findBestOSpair(3)
        self.findMtMin(3)
        self.makeMassMET(3)
        self.makeUncMassMET(3)

    def correctTheLeptons(self, event, leps):
        correctedLeps = []
        #LeptonScaleCorrections()
        for l in leps:
	    setattr(l,"uncorrpt",l.correctedpt)
            l.pt = l.correctedpt
            if self.lepVar == 1 and abs(l.pdgId) == 11: l.pt = l.correctedptUp
            if self.lepVar == -1 and abs(l.pdgId) == 11: l.pt = l.correctedptDown
            if self.lepVar == 2 and abs(l.pdgId) == 13: l.pt = l.correctedptUp
            if self.lepVar == -2 and abs(l.pdgId) == 13: l.pt = l.correctedptDown

            correctedLeps.append(l) 
        return correctedLeps


    ## collectObjects
    ## _______________________________________________________________
    def collectObjects(self, event):

        ## light leptons
        self.leps       = [l             for l  in Collection(event, "LepGood", "nLepGood")  ]
        
        correctedLeps = self.correctTheLeptons(event, self.leps)
        self.leps = correctedLeps


        self.lepsFO     = [self.leps[il] for il in list(getattr   (event, "iF" + self.inputlabel))[0:int(getattr(event,"nLepFO"+self.inputlabel))]]
        self.lepsT      = [self.leps[il] for il in list(getattr   (event, "iT" + self.inputlabel))[0:int(getattr(event,"nLepTight"+self.inputlabel))]]
        for i in range(len(self.lepsT)):
            self.lepsT[i].idx = i
        for i in range(len(self.lepsFO)):
            self.lepsFO[i].idx = i

        correctedLepsFO = self.correctTheLeptons(event, self.lepsFO)
        self.lepsFO = correctedLepsFO
        correctedLepsT = self.correctTheLeptons(event, self.lepsT)
        self.lepsT = correctedLepsT
       
        ## gen leptons
        self.genparts = []

        if not self.isData:
            self.genparts    = [p            for p  in Collection(event, "GenPart", "nGenPart")  ]

        ## taus
        self.goodtaus   = [t             for t  in Collection(event, "TauGood" , "nTauGood" )]
        for t in self.goodtaus:
            if hasattr(t, "correctedpt"): t.pt = getattr(t, "correctedpt")

        self.disctaus   = [] #[t             for t  in Collection(event, "TauOther", "nTauOther")]
        self.taus       = [t             for t  in Collection(event, "TauSel" + self.inputlabel , "nTauSel" + self.inputlabel )]
        for t in self.taus:
            if hasattr(t, "correctedpt"): t.pt = getattr(t, "correctedpt")

        for t in self.taus: t.conePt = t.pt
        self.tausFO     = self.taus

        ## FO, both flavors
        self.lepSelFO   = self.lepsFO
        self.setAttributes(event, self.lepSelFO, self.isData)
        self.lepSelFO.sort(key = lambda x: x.pt, reverse=True)

      
        ## tight leptons, both flavors
        self.lepsTT = []
        for t in self.lepSelFO: 
            if not t.isTight: continue
            self.lepsTT.append(t)
 
        self.met        = {}
        self.metphi     = {}
        if hasattr(event, self.metbranch + "_pt_nom"):
          self.met[0]     = getattr(event, self.metbranch + "_pt_nom")
          self.metphi[0]  = getattr(event, self.metbranch + "_phi_nom")
        else:
          self.met[0]     = getattr(event, self.metbranch + "_pt")
          self.metphi[0]  = getattr(event, self.metbranch + "_phi")


        if not self.isData:
         if hasattr(event, self.metbranch + "_pt" + self.systsJEC[1]):
          for var in self.systsJEC:
            if var == 0: continue
            self.met[var]     = getattr(event, self.metbranch + "_pt" + self.systsJEC[var])
            self.metphi[var]  = getattr(event, self.metbranch + "_phi" + self.systsJEC[var])

        #Recorrect MET based on lepton corrections

        for l in self.leps:
            oldlep = ROOT.TLorentzVector()
            newlep = ROOT.TLorentzVector()
            oldmet = ROOT.TLorentzVector()
            newmet = ROOT.TLorentzVector()
            oldlep.SetPtEtaPhiM(l.uncorrpt, l.eta,l.phi,l.mass)
            newlep.SetPtEtaPhiM(l.pt, l.eta, l.phi, l.mass)
            oldmet.SetPtEtaPhiM(self.met[0], 0, self.metphi[0], 0)
            newmet = oldmet + oldlep - newlep
            self.met[0] = newmet.Pt()
            self.metphi[0] = newmet.Phi()
        self.OS = []
        self.ret["MET_pt"]  = self.met[0]
        self.ret["MET_phi"] = self.metphi[0]
    ## collectOSpairs
    ## _______________________________________________________________
    def collectOSpairs(self, max, useBuffer = False):

        self.OS = []
        for i in range(min(max, len(self.lepSelFO))):
            for j in range(i+1,min(max, len(self.lepSelFO))):
                if abs(self.lepSelFO[i].pdgId) == 15 and abs(self.lepSelFO[j].pdgId) == 15: continue # no SF tautau pairs
                if useBuffer and abs(self.lepSelFO[i].pdgId) != abs(self.lepSelFO[j].pdgId): continue # if buffer then SF
                if self.lepSelFO[i].pdgId * self.lepSelFO[j].pdgId < 0: 
                    self.OS.append(OSpair(self.lepSelFO[i], self.lepSelFO[j]))

        ## loop over all pairs, only keep the best OSSF ones, and make sure that they do not overlap
        if useBuffer:
            self.OS.sort(key=lambda x: x.diff)
            buffer = self.OS
            self.OS = []
            used = []
            for os in buffer:
                if not os.l1 in used and not os.l2 in used:
                    self.OS.append(os)
                    used.append(os.l1); used.append(os.l2)

        self.ret["nOSSF_" + str(max) + "l"] = self.countOSSF(max)
        self.ret["nOSTF_" + str(max) + "l"] = self.countOSTF(max)
        self.ret["nOSLF_" + str(max) + "l"] = self.countOSLF(max)


    ## countOSLF
    ## _______________________________________________________________
    def countOSLF(self, max):
        return sum(1 if not os.wTau else 0 for os in self.OS)


    ## countOSSF
    ## _______________________________________________________________
    def countOSSF(self, max):
        return sum(1 if os.isSF else 0 for os in self.OS)


    ## countOSTF
    ## _______________________________________________________________
    def countOSTF(self, max):
        return sum(1 if os.wTau else 0 for os in self.OS)


    ## findBestOSpair
    ## _______________________________________________________________
    def findBestOSpair(self, max):

        self.bestOSPair = None

        all = []
        for os in self.OS:
            all.append((0 if os.isSF else 1, os.diff, os)) # priority to SF, then light, then difference to target

        if all:
            all.sort()
	    
            self.bestOSPair = all[0][2]
            self.ret["mll_" + str(max) + "l"] = self.bestOSPair.mll
            used = [self.bestOSPair.l1, self.bestOSPair.l2] if self.bestOSPair else []
            self.ret["iZ1"] = self.bestOSPair.l1.idx
            self.ret["iZ2"] = self.bestOSPair.l2.idx
            
            for var in ["pt", "eta", "phi", "mass", "conePt","genpt", "geneta", "genphi", "genmass"]:
                if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
                self.ret["LepZ1_" + var] = getattr(self.bestOSPair.l1, var, 0)
                self.ret["LepZ2_" + var] = getattr(self.bestOSPair.l2, var, 0)
            for var in ["pdgId", "isTight"]:
                if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
                self.ret["LepZ1_" + var] = int(getattr(self.bestOSPair.l1, var, 0))
                self.ret["LepZ2_" + var] = int(getattr(self.bestOSPair.l2, var, 0))

            for i in range(min(max,len(self.lepSelFO))):
                if self.lepSelFO[i] in used: continue
                self.ret["iW"] = self.lepSelFO[i].idx
                for var in ["pt", "eta", "phi", "mass", "conePt", "genpt", "geneta", "genphi", "genmass"]:
                    if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
                    self.ret["LepW_" + var] = getattr(self.lepSelFO[i], var, 0)
                for var in ["pdgId", "isTight"]:
                    if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
                    self.ret["LepW_" + var] = int(getattr(self.lepSelFO[i], var, 0))
                    self.ret["LepW_" + var] = int(getattr(self.lepSelFO[i], var, 0))
                #for var in ["pt", "conePt"]:
                #    self.ret["wzBalance_" + var] = getattr(self.bestOSPair.l1.p4()+self.bestOSPair.l2.p4()-self.lepSelFO[i].p4(), var, 0)
                balance = self.bestOSPair.l1.p4()
                balance += self.bestOSPair.l2.p4()
                self.ret["deltaR_WZ"] = deltaR(balance.Eta(), balance.Phi(), self.lepSelFO[i].p4().Eta(), self.lepSelFO[i].p4().Phi())
                balance += self.lepSelFO[i].p4()
                metmom = ROOT.TLorentzVector()
                metmom.SetPtEtaPhiM(self.met[0],0,self.metphi[0],0)
                balance += metmom
                # Later do it with standalone function like makeMassMET
                self.ret["wzBalance_pt"] = balance.Pt()
                balance = self.bestOSPair.l1.p4(self.bestOSPair.l1.conePt)
                balance += self.bestOSPair.l2.p4(self.bestOSPair.l2.conePt)
                balance += self.lepSelFO[i].p4(self.lepSelFO[i].conePt)
                balance += metmom
                self.ret["wzBalance_conePt"] = balance.Pt()

                #Now do the fit to the W mass, neglect lepton/neutrino masses
                phil = getattr(self.lepSelFO[i], "phi", 0)
                etal = getattr(self.lepSelFO[i], "eta", 0)
                ptl = getattr(self.lepSelFO[i], "pt", 0)
                phinu = self.metphi[0]
                etanu = 0
                ptnu  = self.met[0]
                muVal = (80.385)**2/2. + ptl*ptnu*cos(phil-phinu)
                disc  = (muVal**2*ptl**2*sinh(etal)**2/ptl**4 - ((ptl**2*cosh(etal)**2)*ptnu**2 - muVal**2)/ptl**2)

                
                metUp = ROOT.TLorentzVector()
                metUp.SetPtEtaPhiM(self.met[0],0,self.metphi[0],0)
                metDn = ROOT.TLorentzVector()
                metDn.SetPtEtaPhiM(self.met[0],0,self.metphi[0],0)

                if disc < 0:
                     metUp.SetPz(muVal*ptl*sinh(etal)/ptl**2)
                     metDn.SetPz(muVal*ptl*sinh(etal)/ptl**2)
                else:
                     metUp.SetPz(muVal*ptl*sinh(etal)/ptl**2 + sqrt(disc))
                     metDn.SetPz(muVal*ptl*sinh(etal)/ptl**2 - sqrt(disc))

                sumlep = self.lepSelFO[0].p4()
                for i in range(1,min(max,len(self.lepSelFO))):
                  sumlep += self.lepSelFO[i].p4(self.lepSelFO[i].conePt) 
                for var in self.systsJEC:
                  if var != 0 and (self.lepVar!= 0 or self.isData): continue
                  sumtotUp = sumlep + metUp
                  sumtotDn = sumlep + metDn
                  self.ret["m3LmetRecUp" + self.systsJEC[var]] = sumtotUp.M()
                  self.ret["m3LmetRecDn" + self.systsJEC[var]] = sumtotDn.M()

            return

        self.ret["mll_" + str(max) + "l"] = -1


    def getGenMatch(self):
      #A ultraslimmed version
      if not self.isData:
          for i in range(len(self.lepSelFO)):
              self.lepSelFO[i].genpt          = 0
              self.lepSelFO[i].geneta         = 0
              self.lepSelFO[i].genphi         = 0
              self.lepSelFO[i].genmass        = 0

              if self.lepSelFO[i].genPartIdx < 0 or self.lepSelFO[i].genPartIdx >= len(self.genparts):
                  self.lepSelFO[i].genpt          = 0
                  self.lepSelFO[i].geneta         = 0
                  self.lepSelFO[i].genphi         = 0
                  self.lepSelFO[i].genmass        = 0
              else:
                  match  = self.genparts[self.lepSelFO[i].genPartIdx]
                  self.lepSelFO[i].genpt          = match.pt
                  self.lepSelFO[i].geneta         = match.eta
                  self.lepSelFO[i].genphi         = match.phi
                  self.lepSelFO[i].genmass        = match.mass


    ## findMtMin
    ## _______________________________________________________________
    def findMtMin(self, max):

        self.mTmin = {}
        used = [self.bestOSPair.l1, self.bestOSPair.l2] if self.bestOSPair else []
        leps = []

        for i in range(min(max,len(self.lepSelFO))):
            if self.lepSelFO[i] in used: continue
            leps.append(self.lepSelFO[i])

        for var in self.systsJEC:
            if var != 0 and self.lepVar != 0: continue
            bufferPF  = []
            if not self.isData:              
                bufferGEN = [] 
            for l in leps:
                bufferPF .append(self.mtW(l, var      ))
                if not self.isData:              
                    bufferGEN.append(self.mtW(l, var, True))

            if len(bufferPF):
                bufferPF.sort()
                self.ret["mT_" + str(max) + "l" + self.systsJEC[var]] = bufferPF[0]
            else:
                self.ret["mT_" + str(max) + "l" + self.systsJEC[var]] = -1


    ## findTau
    ## _______________________________________________________________
    def findTau(self, event, tau):
        #if not event.iTauSel_Mini: return None
        #idx = int(event.iTauSel_Mini)
        #if   idx > 0: return self.goodtaus[idx     ]
        #elif idx < 0: return self.disctaus[-1*idx+1]
        #return None
        idx = self.isIn(tau, self.goodtaus)
        if idx > -1: return self.goodtaus[idx]
        idx = self.isIn(tau, self.disctaus)
        if idx > -1: return self.disctaus[idx]
        return None


    ## isIn
    ## _______________________________________________________________
    def isIn(self, object, collection):
        delta = math.pow(10,-6)
        for i in range(len(collection)):
            it = collection[i]
            if abs(it.pt-object.pt) < delta and abs(it.eta-object.eta)<delta and abs(it.phi-object.phi)<delta and abs(it.mass-object.mass)<delta: return i
        return -1


    ## listBranches
    ## _______________________________________________________________
    def listBranches(self):
        biglist = [("MET_pt_central","F"),
            ("MET_pt_elScaleUp", "F"),
            ("MET_pt_elScaleDown", "F"),
	    ("MET_pt_muScaleUp", "F"),
	    ("MET_pt_muScaleDown", "F"),
            ("MET_phi_central","F"),
            ("MET_phi_elScaleUp", "F"),
            ("MET_phi_elScaleDown", "F"),
            ("MET_phi_muScaleUp", "F"),
            ("MET_phi_muScaleDown", "F")]

        for tag in self.lepScaleSysts:
          var = self.lepScaleSysts[tag]
          biglist += [
            ("iZ1" + var           , "I"),
            ("iZ2" + var           , "I"),
            ("iW"  + var           , "I"),
            ("is_3l" + var           , "I"),
            ("is_4l" + var           , "I"),
            ("is_5l" + var           , "I"),
            ("nOSSF_3l" + var        , "I"),
            ("nOSLF_3l" + var        , "I"),
            ("nOSTF_3l" + var        , "I"),
            ("mll_3l"   + var        , "F"),
            ("m3L"      + var        , "F"),
            ("nOSSF_4l" + var        , "I"),
            ("nOSLF_4l" + var        , "I"),
            ("nOSTF_4l" + var        , "I"),
            ("mll_4l"   + var        , "F"),
            ("m4L"      + var        , "F"),
            ("minDeltaR_3l" + var    , "F"),
            ("minDeltaR_4l" + var    , "F"),]
            
          biglist.append(("nOS" + var  , "I"))
          biglist.append(("mll" + var  , "F", 20, "nOS"))
          biglist.append(("mll_i1"+ var, "I", 20, "nOS"))
          biglist.append(("mll_i2"+ var, "I", 20, "nOS"))
          biglist.append(("deltaR_WZ"+ var, "F"))

          biglist.append(("nLepSel" + var  , "I"))
          for vvar in ["pt", "eta", "phi", "mass", "conePt","genpt", "geneta", "genphi", "genmass","unc"]:
            if self.isData and ("gen" in vvar or "mc" in vvar or "Match" in vvar): continue
            biglist.append(("LepSel_" + vvar+ var, "F", 4))
            biglist.append(("LepZ1_"  + vvar+ var, "F"))
            biglist.append(("LepZ2_"  + vvar+ var, "F"))
            biglist.append(("LepW_"   + vvar+ var, "F"))
          for vvar in ["pdgId", "isTight"]:
            if self.isData and ("gen" in vvar or "mc" in vvar or "Match" in vvar): continue
            biglist.append(("LepSel_" + vvar+ var, "I", 4))
            biglist.append(("LepZ1_"  + vvar+ var, "I"))
            biglist.append(("LepZ2_"  + vvar+ var, "I"))
            biglist.append(("LepW_"   + vvar+ var, "I"))
          for vvar in ["pt", "conePt"]:
            biglist.append(("wzBalance_" + vvar+ var, "F"))
          biglist.append(("mT_3l"       + var, "F"))
          biglist.append(("mT2L_3l"     + var, "F"))
          biglist.append(("mT2T_3l"     + var, "F"))
          biglist.append(("mT_4l"       + var, "F"))
          biglist.append(("mT2L_4l"     + var, "F"))
          biglist.append(("mT2T_4l"     + var, "F"))
          biglist.append(("m3Lmet"      + var, "F"))
          # WARNING: I did not configure M3LmetUnc MET variations, as we will use it only as a quick comparison
          biglist.append(("m3LmetUnc"   + var, "F"))
          biglist.append(("m3LmetRecUp" + var, "F"))
          biglist.append(("m3LmetRecDn" + var, "F"))

        for var in self.systsJEC:
            if var == 0: continue
            biglist.append(("mT_3l"       + self.systsJEC[var], "F"))
            biglist.append(("mT2L_3l"     + self.systsJEC[var], "F"))
            biglist.append(("mT2T_3l"     + self.systsJEC[var], "F"))
            biglist.append(("mT_4l"       + self.systsJEC[var], "F"))
            biglist.append(("mT2L_4l"     + self.systsJEC[var], "F"))
            biglist.append(("mT2T_4l"     + self.systsJEC[var], "F"))
            biglist.append(("m3Lmet"      + self.systsJEC[var], "F"))
            # WARNING: I did not configure M3LmetUnc MET variations, as we will use it only as a quick comparison
            biglist.append(("m3LmetUnc"   + self.systsJEC[var], "F"))
            biglist.append(("m3LmetRecUp" + self.systsJEC[var], "F"))
            biglist.append(("m3LmetRecDn" + self.systsJEC[var], "F"))

        return biglist


    ## makeMass
    ## _______________________________________________________________
    def makeMass(self, max):
       
        if len(self.lepSelFO) < 3: return 
        sum = self.lepSelFO[0].p4()
        for i in range(1,min(max,len(self.lepSelFO))):
            sum += self.lepSelFO[i].p4(self.lepSelFO[i].conePt)
        self.ret["m" + str(max) + "L"] = sum.M()

    ## makeMassMET (leptons and MET)
    ## _______________________________________________________________
    def makeMassMET(self, max):
        # Using pt gives corrected pt
        if len(self.lepSelFO) < 3: return 
        sumlep = self.lepSelFO[0].p4()
        metp4 = ROOT.TLorentzVector()
        for i in range(1,min(max,len(self.lepSelFO))):
            sumlep += self.lepSelFO[i].p4() 
        for var in self.systsJEC:
            metp4.SetPtEtaPhiM(self.met[var],0,self.metphi[var],0)
            sumtot = sumlep + metp4
            self.ret["m" + str(max) + "Lmet" + self.systsJEC[var]] = sumtot.M()

    ## makeUncMassMET (leptons and MET)
    ## _______________________________________________________________
    def makeUncMassMET(self, max):
	return #Fix this 
        # Approximating conePt with pt, 
        if len(self.lepSelFO) < 3: return 
        sumlep = self.lepSelFO[0].p4(self.lepSelFO[0].unc)
        metp4 = ROOT.TLorentzVector()
        for i in range(1,min(max,len(self.lepSelFO))):
            sumlep += self.lepSelFO[i].p4(self.lepSelFO[i].unc) 
        for var in self.systsJEC:
            metp4.SetPtEtaPhiM(self.met[var],0,self.metphi[var],0)
            sumtot = sumlep + metp4
            self.ret["m" + str(max) + "LmetUnc" + self.systsJEC[var]] = sumtot.M()


                   
    ## makeMt2
    ## _______________________________________________________________
    def makeMt2(self, max):
        ## building two sets of MT2
        ## mT2L = two light flavor leptons from the OS pair (category C, D)
        ## mT2T = hardest light lepton and one tau (category E, F)

        if not self.mt2maker: return False
        #if self.mt2maker: print "I have mT2maker\n"
        anyPairs = []
        for i in range(min(max, len(self.lepSelFO))):
            for j in range(i+1,min(max, len(self.lepSelFO))):
                if abs(self.lepSelFO[i].pdgId) == 15 or abs(self.lepSelFO[j].pdgId) == 15:
                    anyPairs.append(OSpair(self.lepSelFO[i], self.lepSelFO[j]))

        mt2t = []
        mt2l = []
        for os in anyPairs:
            if os.wTau and abs(os.l1.pdgId) != 15 or  abs(os.l2.pdgId) != 15: mt2t.append((os.l1.pt+os.l2.pt, os))
        for os in self.OS:
            if             abs(os.l1.pdgId) != 15 and abs(os.l2.pdgId) != 15: mt2l.append((os.l1.pt+os.l2.pt, os))

        mt2t.sort(reverse=True) # we want the hardest leptons here! 
        mt2l.sort(reverse=True) # we want the hardest leptons here! 
        #if len(mt2l)>0: print "I have os pair for mt2l\n"
        for var in self.systsJEC:
            if len(mt2t)>0: 
                self.ret["mT2T_" + str(max) + "l"     + self.systsJEC[var]] = self.mt2(mt2t[0][1].l1, mt2t[0][1].l2, var)
            if len(mt2l)>0: 
                self.ret["mT2L_" + str(max) + "l"     + self.systsJEC[var]] = self.mt2(mt2l[0][1].l1, mt2l[0][1].l2, var)
        #if len(mt2l)>0: print self.ret["mT2L_" + str(max) + "l"]

    ## mt  
    ## _______________________________________________________________
    def mt(self, pt1, pt2, phi1, phi2):
        return sqrt(2*pt1*pt2*(1-cos(phi1-phi2)))


    ## mt2
    ## _______________________________________________________________
    def mt2(self, obj1, obj2, var, useGenMet = False):
            
        vector_met     = array.array('d', [0, self.met[var]*cos(self.metphi[var]), self.met[var]*sin(self.metphi[var])])
        vector_obj1    = array.array('d', [obj1.mass, obj1.p4(obj1.pt).Px(), obj1.p4(obj1.pt).Py()])
        vector_obj2    = array.array('d', [obj2.mass, obj2.p4(obj2.pt).Px(), obj2.p4(obj2.pt).Py()])


        self.mt2maker.set_momenta(vector_obj1, vector_obj2, vector_met)
        self.mt2maker.set_mn(0)

        return self.mt2maker.get_mt2()
    
    
    ## mtW
    ## _______________________________________________________________
    def mtW(self, lep, var, useGenMet = False):
        return self.mt(lep.conePt, self.met[var], lep.phi, self.metphi[var])


    ## resetMemory
    ## _______________________________________________________________
    def resetMemory(self):

        self.ret = {};

        self.ret["iZ1"                ]   = -1
        self.ret["iZ2"                ]   = -1
        self.ret["iW"                 ]   = -1
        self.ret["is_3l"                ] = 0
        self.ret["is_4l"                ] = 0
        self.ret["nOSSF_3l"             ] = 0
        self.ret["nOSLF_3l"             ] = 0
        self.ret["nOSTF_3l"             ] = 0
        self.ret["mll_3l"               ] = 0
        self.ret["m3L"                  ] = 0
        self.ret["minDeltaR_3l"         ] = -1
        self.ret["deltaR_WZ"            ] = 0

        self.ret["nOS"   ] = 0
        self.ret["mll"   ] = [0.]*20
        self.ret["mll_i1"] = [-1]*20
        self.ret["mll_i2"] = [-1]*20

        self.ret["nLepSel"] = 0
        for var in ["pt", "eta", "phi", "mass", "conePt", "genpt", "geneta", "genphi", "genmass"]:
            self.ret["LepSel_" + var] = [0.]*20
            self.ret["LepZ1_"  + var] = 0.
            self.ret["LepZ2_"  + var] = 0.
            self.ret["LepW_"   + var] = 0.
        for var in ["pdgId", "isTight"]:
            self.ret["LepSel_" + var] = [0]*20
            self.ret["LepZ1_"  + var] = 0
            self.ret["LepZ2_"  + var] = 0
            self.ret["LepW_"   + var] = 0
        for var in ["pt", "conePt"]:
            self.ret["wzBalance_" + var] = 0

        for var in self.systsJEC:
            if var != 0 and self.lepVar != 0: continue
            self.ret["mT_3l"       + self.systsJEC[var]] = 0.
            self.ret["mT2L_3l"     + self.systsJEC[var]] = 0.  
            self.ret["mT2T_3l"     + self.systsJEC[var]] = 0. 
            self.ret["m3Lmet"      + self.systsJEC[var]] = 0. 
            self.ret["m3LmetUnc"   + self.systsJEC[var]] = 0. 
            self.ret["m3LmetRecUp" + self.systsJEC[var]] = 0. 
            self.ret["m3LmetRecDn" + self.systsJEC[var]] = 0.


    ## setAttributes 
    ## _______________________________________________________________
    def setAttributes(self, event, lepSel, isData = False,  isGen = False):

        for i, l in enumerate(lepSel): 
            if l in self.tausFO:
                tau = self.findTau(event, l)
                if not tau: continue
                setattr(l, "pdgId"        , -1*15*tau.charge                      )
                setattr(l, "isTight"      , (l.reclTauId == 2)                    )
            elif  isGen:
                setattr(l, "motherId"     , l.motherId                          )
                setattr(l, "grandmotherId", l.grandmotherId                     )
            else:
                setattr(l, "isTight"      , (l in self.lepsT  )                 )
                





    ## writeLepSel
    ## _______________________________________________________________
    def writeLepSel(self):

        self.ret["nLepSel"] = len(self.lepSelFO)
        for i, l in enumerate(self.lepSelFO):
            if i == 4: break # only keep the first 4 entries
            for var in ["pt", "eta", "phi", "mass"]:
                self.ret["LepSel_" + var][i] = getattr(l, var, 0)
            for var in ["pdgId", "isTight"]:
                self.ret["LepSel_" + var][i] = int(getattr(l, var, 0))


        all = []
        for os in self.OS:
            all.append((0 if os.isSF else 1, 1 if os.wTau else 0, os.diff, os)) # priority to SF, then light, then difference to target
        if all:
            all.sort()
            self.ret["nOS"] = len(all)
            for i,os in enumerate(all):
                self.ret["mll"][i] = os[3].mll
                self.ret["mll_i1"][i] = self.lepSelFO.index(os[3].l1)
                self.ret["mll_i2"][i] = self.lepSelFO.index(os[3].l2)


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

