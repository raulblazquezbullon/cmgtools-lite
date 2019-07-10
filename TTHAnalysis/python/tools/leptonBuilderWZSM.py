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
        self.systsJEC = {0: "", 1: "_jesTotalUp"   , -1: "_jesTotalDown"  }
        self.metbranch = metbranch
        self.isData = False
    ## __call__
    ## _______________________________________________________________
    def __call__(self, event):
        self.isData = not(hasattr(event, "genWeight"))
        self.resetMemory()
        self.collectObjects(event)
        self.analyzeTopology()
        self.writeLepSel()
        return self.ret


    ## analyzeTopology
    ## _______________________________________________________________
    def analyzeTopology(self):

        if len(self.lepSelFO)>=3: self.ret["is_3l"] = 1
        if len(self.lepSelFO)>=4: self.ret["is_4l"] = 1
        if len(self.lepSelFO)>=5: self.ret["is_5l"] = 1

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
            if hasattr(l, "correctedpt"): l.pt = l.correctedpt           
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
        self.gendressleps = []
        self.genparts = []

        if not self.isData:
            self.gendressleps    = [l             for l  in Collection(event, "GenDressedLepton", "nGenDressedLepton")  ]
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
          self.met[0]     = getattr(event, self.metbranch + "_pt_nom", self.metbranch+ "_pt")
          self.metphi[0]  = getattr(event, self.metbranch + "_phi_nom", self.metbranch+ "_phi")
        else:
          self.met[0]     = getattr(event, self.metbranch + "_pt", self.metbranch+ "_pt")
          self.metphi[0]  = getattr(event, self.metbranch + "_phi", self.metbranch+ "_phi")

        if hasattr(event, self.metbranch + "_pt" + self.systsJEC[1]):
          self.met[1]     = getattr(event, self.metbranch + "_pt" + self.systsJEC[1], self.met[0])
          self.met[-1]    = getattr(event, self.metbranch + "_pt" + self.systsJEC[-1], self.met[0])

          self.metphi[1]  = getattr(event, self.metbranch + "_phi" + self.systsJEC[1], self.metphi[0])
          self.metphi[-1] = getattr(event, self.metbranch + "_phi" + self.systsJEC[-1], self.metphi[0])

        else:
          self.met[1]  = self.met[0]
          self.met[-1] = self.met[0]

          self.metphi[1]  = self.metphi[0]
          self.metphi[-1] = self.metphi[0]

        #Only fot data
        self.metgen        = copy.deepcopy(self.met)
        self.metgenphi     = copy.deepcopy(self.metphi)
        
        if not self.isData:
            self.metgen[0]     = event.GenMET_pt
            self.metgen[1]     = self.metgen[0]
            self.metgen[-1]    = self.metgen[0]
            self.metgenphi[0]  = event.GenMET_phi
            self.metgenphi[1]  = self.metgenphi[0]
            self.metgenphi[-1] = self.metgenphi[0]

        self.OS = []

            
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
            
            for var in ["pt", "eta", "phi", "mass", "conePt", "dxy", "dz", "sip3d", "miniRelIso", "relIso", "ptratio", "ptrel", "mva","genpt", "geneta", "genphi", "genmass"]:
                if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
                self.ret["LepZ1_" + var] = getattr(self.bestOSPair.l1, var, 0)
                self.ret["LepZ2_" + var] = getattr(self.bestOSPair.l2, var, 0)
            for var in ["pdgId", "isTight", "mcMatchId", "mcMatchAny", "mcPromptGamma", "mcUCSX"]:
                if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
                self.ret["LepZ1_" + var] = int(getattr(self.bestOSPair.l1, var, 0))
                self.ret["LepZ2_" + var] = int(getattr(self.bestOSPair.l2, var, 0))
            for var in ["isMatched", "isMatchingWZ"]:
                if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
                self.ret["LepZ1_" + var] = int(getattr(self.bestOSPair.l1, var, 0))
                self.ret["LepZ2_" + var] = int(getattr(self.bestOSPair.l2, var, 0))

            for i in range(min(max,len(self.lepSelFO))):
                if self.lepSelFO[i] in used: continue
                self.ret["iW"] = self.lepSelFO[i].idx
                for var in ["pt", "eta", "phi", "mass", "conePt", "dxy", "dz", "sip3d", "miniRelIso", "relIso", "ptratio", "ptrel", "mva","genpt", "geneta", "genphi", "genmass"]:
                    if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
                    self.ret["LepW_" + var] = getattr(self.lepSelFO[i], var, 0)
                for var in ["pdgId", "isTight", "mcMatchId", "mcMatchAny", "mcPromptGamma", "mcUCSX"]:
                    if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
                    self.ret["LepW_" + var] = int(getattr(self.lepSelFO[i], var, 0))
                for var in ["isMatched", "isMatchingWZ"]:
                    if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
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
                metUp.SetPtEtaPhiM(self.met[1],0,self.metphi[1],0)
                metDn = ROOT.TLorentzVector()
                metDn.SetPtEtaPhiM(self.met[-1],0,self.metphi[-1],0)

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
                  sumtotUp = sumlep + metUp
                  sumtotDn = sumlep + metDn
                  self.ret["m3LmetRecUp" + self.systsJEC[var]] = sumtotUp.M()
                  self.ret["m3LmetRecDn" + self.systsJEC[var]] = sumtotDn.M()

            return

        self.ret["mll_" + str(max) + "l"] = -1


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
            if not self.isData:              
                if len(bufferGEN):
                    bufferGEN.sort()
                    self.ret["mT_" + str(max) + "l_gen" + self.systsJEC[var]] = bufferGEN[0]
                else:
                    self.ret["mT_" + str(max) + "l_gen" + self.systsJEC[var]] = -1


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

        biglist = [
            ("iZ1"            , "I"),
            ("iZ2"            , "I"),
            ("iW"             , "I"),
            ("is_3l"            , "I"),
            ("is_4l"            , "I"),
            ("is_5l"            , "I"),
            ("nOSSF_3l"         , "I"),
            ("nOSLF_3l"         , "I"),
            ("nOSTF_3l"         , "I"),
            ("mll_3l"           , "F"),
            ("m3L"              , "F"),
            ("nOSSF_4l"         , "I"),
            ("nOSLF_4l"         , "I"),
            ("nOSTF_4l"         , "I"),
            ("mll_4l"           , "F"),
            ("m4L"              , "F"),
            ("minDeltaR_3l"     , "F"),
            ("minDeltaR_4l"     , "F"),
            ("minDeltaR_3l_mumu", "F"),
            ("minDeltaR_4l_mumu", "F")]
            
        biglist.append(("nOS"   , "I"))
        biglist.append(("mll"   , "F", 20, "nOS"))
        biglist.append(("mll_i1", "I", 20, "nOS"))
        biglist.append(("mll_i2", "I", 20, "nOS"))
        biglist.append(("deltaR_WZ", "F"))

        biglist.append(("nLepSel"   , "I"))
        for var in ["pt", "eta", "phi", "mass", "conePt", "dxy", "dz", "sip3d", "miniRelIso", "relIso", "ptratio", "ptrel", "mva", "jetDR","genpt", "geneta", "genphi", "genmass","unc"]:
            if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
            biglist.append(("LepSel_" + var, "F", 4))
            biglist.append(("LepZ1_"  + var, "F"))
            biglist.append(("LepZ2_"  + var, "F"))
            biglist.append(("LepW_"   + var, "F"))
        for var in ["pdgId", "isTight", "mcMatchId", "mcMatchAny", "mcPromptGamma", "mcUCSX", "trIdx"]:
            if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
            biglist.append(("LepSel_" + var, "I", 4))
            biglist.append(("LepZ1_"  + var, "I"))
            biglist.append(("LepZ2_"  + var, "I"))
            biglist.append(("LepW_"   + var, "I"))
        for var in ["iscutPOGM", "iscutPOGT", "ismvaPOGRA7", "ismvaPOG80", "ismvaPOG90", "isMVAVL", "isMVAL", "isMVAM", "isMVAT", "isMVAVT", "isMVAET", "isStopSel", "isMatched", "isMatchingWZ"]:
            if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
            biglist.append(("LepSel_" + var, "I", 4))
            biglist.append(("LepZ1_"  + var, "I"))
            biglist.append(("LepZ2_"  + var, "I"))
            biglist.append(("LepW_"   + var, "I"))
        for var in ["pt", "conePt"]:
            biglist.append(("wzBalance_" + var, "F"))
  
        for var in self.systsJEC:
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
            if not self.isData:
                biglist.append(("mT_3l_gen"   + self.systsJEC[var], "F"))
                biglist.append(("mT2L_3l_gen" + self.systsJEC[var], "F"))
                biglist.append(("mT2T_3l_gen" + self.systsJEC[var], "F"))
                biglist.append(("mT_4l_gen"   + self.systsJEC[var], "F"))
                biglist.append(("mT2L_4l_gen" + self.systsJEC[var], "F"))
                biglist.append(("mT2T_4l_gen" + self.systsJEC[var], "F"))
                biglist.append(("m4Lmet"      + self.systsJEC[var], "F"))

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
                  while True:
                      if mother.pdgId == 22:
                          self.lepSelFO[i].mcUCSX = 4
                          break
                      if mother.pdgId == 24 or mother.pdgId == -24 or mother.pdgId == 23 or mother.pdgId == 25:
                          self.lepSelFO[i].mcUCSX = 0 if isFlip else 1                       
                          if not (mother.pdgId ==25): self.lepSelFO[i].isMatchingWZ = True
                          break
                      if abs(mother.pdgId) == 5 or abs(mother.pdgId) == 4:
                          self.lepSelFO[i].mcUCSX = 3
                          break
                      if abs(mother.pdgId) == 1 or abs(mother.pdgId) == 2 or abs(mother.pdgId) == 3:
                          self.lepSelFO[i].mcUCSX = 2
                          break
                      else:
                          if not(mother.genPartIdxMother) >= 0:
                              self.lepSelFO[i].mcUCSX = 5
                              break
                          else:
                              mother = self.genparts[mother.genPartIdxMother]
                   
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
                if not self.isData:
                    self.ret["mT2T_" + str(max) + "l_gen" + self.systsJEC[var]] = self.mt2(mt2t[0][1].l1, mt2t[0][1].l2, var, True)
            if len(mt2l)>0: 
                self.ret["mT2L_" + str(max) + "l"     + self.systsJEC[var]] = self.mt2(mt2l[0][1].l1, mt2l[0][1].l2, var)
                if not self.isData:
                    self.ret["mT2L_" + str(max) + "l_gen" + self.systsJEC[var]] = self.mt2(mt2l[0][1].l1, mt2l[0][1].l2, var, True)
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

        if useGenMet:
            vector_met = array.array('d', [0, self.metgen[var]*cos(self.metgenphi[var]), self.metgen[var]*sin(self.metgenphi[var])])

        self.mt2maker.set_momenta(vector_obj1, vector_obj2, vector_met)
        self.mt2maker.set_mn(0)

        return self.mt2maker.get_mt2()
    
    
    ## mtW
    ## _______________________________________________________________
    def mtW(self, lep, var, useGenMet = False):
        if useGenMet: return self.mt(lep.conePt, self.metgen[var], lep.phi, self.metgenphi[var])
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
        self.ret["is_5l"                ] = 0
        self.ret["nOSSF_3l"             ] = 0
        self.ret["nOSLF_3l"             ] = 0
        self.ret["nOSTF_3l"             ] = 0
        self.ret["mll_3l"               ] = 0
        self.ret["m3L"                  ] = 0
        self.ret["nOSSF_4l"             ] = 0
        self.ret["nOSLF_4l"             ] = 0
        self.ret["nOSTF_4l"             ] = 0
        self.ret["mll_4l"               ] = 0
        self.ret["m4L"                  ] = 0
        self.ret["minDeltaR_3l"         ] = -1
        self.ret["minDeltaR_4l"         ] = -1
        self.ret["minDeltaR_3l_mumu"    ] = -1
        self.ret["minDeltaR_4l_mumu"    ] = -1
        self.ret["deltaR_WZ"            ] = 0

        self.ret["nOS"   ] = 0
        self.ret["mll"   ] = [0.]*20
        self.ret["mll_i1"] = [-1]*20
        self.ret["mll_i2"] = [-1]*20

        self.ret["nLepSel"] = 0
        for var in ["pt", "eta", "phi", "mass", "conePt", "dxy", "dz", "sip3d", "miniRelIso", "relIso", "ptratio", "ptrel", "mva", "jetDR","genpt", "geneta", "genphi", "genmass"]:
            self.ret["LepSel_" + var] = [0.]*20
            self.ret["LepZ1_"  + var] = 0.
            self.ret["LepZ2_"  + var] = 0.
            self.ret["LepW_"   + var] = 0.
        for var in ["pdgId", "isTight", "mcMatchId", "mcMatchAny", "mcPromptGamma", "mcUCSX"]:
            self.ret["LepSel_" + var] = [0]*20
            self.ret["LepZ1_"  + var] = 0
            self.ret["LepZ2_"  + var] = 0
            self.ret["LepW_"   + var] = 0
        for var in ["isMatched", "isMatchingWZ"]:
            self.ret["LepSel_" + var] = [0]*20
            self.ret["LepZ1_"  + var] = 0
            self.ret["LepZ2_"  + var] = 0
            self.ret["LepW_"   + var] = 0
        for var in ["pt", "conePt"]:
            self.ret["wzBalance_" + var] = 0

        for var in self.systsJEC:
            self.ret["mT_3l"       + self.systsJEC[var]] = 0.
            self.ret["mT2L_3l"     + self.systsJEC[var]] = 0.  
            self.ret["mT2T_3l"     + self.systsJEC[var]] = 0. 
            self.ret["mT_4l"       + self.systsJEC[var]] = 0.
            self.ret["mT2L_4l"     + self.systsJEC[var]] = 0.  
            self.ret["mT2T_4l"     + self.systsJEC[var]] = 0. 
            self.ret["m3Lmet"      + self.systsJEC[var]] = 0. 
            self.ret["m3LmetUnc"   + self.systsJEC[var]] = 0. 
            self.ret["m3LmetRecUp" + self.systsJEC[var]] = 0. 
            self.ret["m3LmetRecDn" + self.systsJEC[var]] = 0.
            self.ret["mT_3l_gen"   + self.systsJEC[var]] = 0.
            self.ret["mT2L_3l_gen" + self.systsJEC[var]] = 0.  
            self.ret["mT2T_3l_gen" + self.systsJEC[var]] = 0. 
            self.ret["mT_4l_gen"   + self.systsJEC[var]] = 0.
            self.ret["mT2L_4l_gen" + self.systsJEC[var]] = 0.  
            self.ret["mT2T_4l_gen" + self.systsJEC[var]] = 0. 
            self.ret["m4Lmet"      + self.systsJEC[var]] = 0. 


    ## setAttributes 
    ## _______________________________________________________________
    def setAttributes(self, event, lepSel, isData = False,  isGen = False):

        for i, l in enumerate(lepSel): 
            if l in self.tausFO:
                tau = self.findTau(event, l)
                if not tau: continue
                setattr(l, "pdgId"        , -1*15*tau.charge                      )
                setattr(l, "isTight"      , (l.reclTauId == 2)                    )
                setattr(l, "mcMatchId"    , 1                                     )
                setattr(l, "mcMatchAny"   , 0                                     )
                setattr(l, "mcPromptGamma", 0                                     )
                setattr(l, "mcUCSX"       , tau.mcUCSXMatchId if ((not isData) and hasattr(tau, "mcUCSXMatchId")) else 0)
                setattr(l, "trIdx"        , self.taus.index(l)                    )
                setattr(l, "dxy"          , tau.dxy if not tau is None else 0   )
                setattr(l, "dz"           , tau.dz  if not tau is None else 0   )
                setattr(l, "sip3d"        , 0                                   )
                setattr(l, "miniRelIso"   , 0                                   )
                setattr(l, "relIso"       , 0                                   )
                setattr(l, "ptratio"      , 0                                   )
                setattr(l, "ptrel"        , 0                                   )
                setattr(l, "mva"          , tau.idMVAOldDMRun2 if not tau is None else 0 )
            elif  isGen:
                setattr(l, "motherId"     , l.motherId                          )
                setattr(l, "grandmotherId", l.grandmotherId                     )
            else:
                setattr(l, "isTight"      , (l in self.lepsT  )                 )
                setattr(l, "mcMatchId"    ,  0)
                setattr(l, "mcMatchAny"   ,  0)
                setattr(l, "mcPromptGamma",  0)
                setattr(l, "mcUCSX"       , l.mcUCSXMatchId if ((not isData) and hasattr(l, "mcUCSXMatchId")) else 0)
                setattr(l, "trIdx"        , self.leps.index(l)                  )
                setattr(l, "dxy"          , l.dxy                               )
                setattr(l, "dz"           , l.dz                                )
                setattr(l, "sip3d"        , l.sip3d                             )
                setattr(l, "miniRelIso"   , l.miniPFRelIso_all                  )
                setattr(l, "relIso"       , l.pfRelIso03_all                    )
                setattr(l, "ptratio"      , -1                                  )
                setattr(l, "ptrel"        , -1                                  )
                setattr(l, "mva"          , l.mvaTTH                            )
                





    ## writeLepSel
    ## _______________________________________________________________
    def writeLepSel(self):

        self.ret["nLepSel"] = len(self.lepSelFO)
        for i, l in enumerate(self.lepSelFO):
            if i == 4: break # only keep the first 4 entries
            for var in ["pt", "eta", "phi", "mass", "dxy", "dz", "sip3d", "miniRelIso", "relIso", "ptratio", "ptrel", "mva"]:
                self.ret["LepSel_" + var][i] = getattr(l, var, 0)
            for var in ["pdgId", "isTight", "mcMatchId", "mcMatchAny", "mcPromptGamma", "mcUCSX"]:
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

