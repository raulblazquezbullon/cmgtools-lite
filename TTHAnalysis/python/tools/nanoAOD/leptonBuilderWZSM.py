# -- Import libraries -- #
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput
from CMGTools.TTHAnalysis.tools.nanoAOD.leptonJetRecleanerWZSM import passMllTLVeto, passTripleMllVeto
import ROOT, copy, os
import array, math

class OSpair:
  def __init__(self, l1, l2):
    self.l1 = l1
    self.l2 = l2
    self.load()
    return

  def load(self):
    self.isSF = False
    self.wTau = False

    if self.l1.pdgId  == -self.l2.pdgId: self.isSF = True
    if abs(self.l1.pdgId) == 15 or abs(self.l2.pdgId) == 15: self.wTau = True

    if self.isSF: self.target = 91.1876
    elif abs(self.l1.pdgId) == 15 or abs(self.l2.pdgId) == 15: self.target = 60
    else: self.target = 50
   
    l1_p4 = self.l1.p4()
    l2_p4 = self.l2.p4()
    l1_p4.SetPtEtaPhiM(self.l1.conePt, self.l1.eta, self.l1.phi, self.l1.mass) 
    l2_p4.SetPtEtaPhiM(self.l2.conePt, self.l2.eta, self.l2.phi, self.l2.mass) 
    self.mll  = (l1_p4 + l2_p4).M()
    self.mllR = (self.l1.p4() + self.l2.p4()).M()
    self.diff = abs(self.target - self.mll)
    return

class leptonBuilderWZSM(Module):
  def __init__(self, inputlabel, metbranch = "MET"):
    ''' Initialise some variables '''
    self.mt2maker = None
    self.inputlabel = '_' + inputlabel

    self.systsJEC = {0: "", 
                    # 1: "_jesTotalCorrUp", 
                    #-1: "_jesTotalCorrDown",  
                    # 2: "_jesTotalUnCorrUp", 
                    #-2: "_jesTotalUnCorrDown"
                    }

    self.lepScaleSysts = {0:"",
                          1:"_elScaleUp", 
                         -1:"_elScaleDown",
                          2:"_muScaleUp",
                         -2:"_muScaleDown"}

    self.metbranch = metbranch
    self.isData = False
    self.listBranches()
    return

  def listBranches(self):
    branches = [("MET_pt_central","F"),
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
      branches += [
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
        
      branches.append(("nOS" + var  , "I"))
      branches.append(("mll" + var  , "F", 20, "nOS"))
      branches.append(("mll_i1"+ var, "I", 20, "nOS"))
      branches.append(("mll_i2"+ var, "I", 20, "nOS"))
      branches.append(("deltaR_WZ"+ var, "F"))

      branches.append(("nLepSel" + var  , "I"))
      for vvar in ["pt", "eta", "phi", "mass", "conePt","genpt", "geneta", "genphi", "genmass","unc"]:
        if self.isData and ("gen" in vvar or "mc" in vvar or "Match" in vvar): continue
        branches.append(("LepSel_" + vvar+ var, "F", 4))
        branches.append(("LepZ1_"  + vvar+ var, "F"))
        branches.append(("LepZ2_"  + vvar+ var, "F"))
        branches.append(("LepW_"   + vvar+ var, "F"))
      for vvar in ["pdgId", "isTight"]:
        if self.isData and ("gen" in vvar or "mc" in vvar or "Match" in vvar): continue
        branches.append(("LepSel_" + vvar+ var, "I", 4))
        branches.append(("LepZ1_"  + vvar+ var, "I"))
        branches.append(("LepZ2_"  + vvar+ var, "I"))
        branches.append(("LepW_"   + vvar+ var, "I"))
      for vvar in ["pt", "conePt"]:
        branches.append(("wzBalance_" + vvar+ var, "F"))
      branches.append(("mT_3l"       + var, "F"))
      branches.append(("mT2L_3l"     + var, "F"))
      branches.append(("mT2T_3l"     + var, "F"))
      branches.append(("mT_4l"       + var, "F"))
      branches.append(("mT2L_4l"     + var, "F"))
      branches.append(("mT2T_4l"     + var, "F"))
      branches.append(("m3Lmet"      + var, "F"))
      # WARNING: I did not configure M3LmetUnc MET variations, as we will use it only as a quick comparison
      branches.append(("m3LmetUnc"   + var, "F"))
      branches.append(("m3LmetRecUp" + var, "F"))
      branches.append(("m3LmetRecDn" + var, "F"))

    for var in self.systsJEC:
        if var == 0: continue
        branches.append(("mT_3l"       + self.systsJEC[var], "F"))
        branches.append(("mT2L_3l"     + self.systsJEC[var], "F"))
        branches.append(("mT2T_3l"     + self.systsJEC[var], "F"))
        branches.append(("mT_4l"       + self.systsJEC[var], "F"))
        branches.append(("mT2L_4l"     + self.systsJEC[var], "F"))
        branches.append(("mT2T_4l"     + self.systsJEC[var], "F"))
        branches.append(("m3Lmet"      + self.systsJEC[var], "F"))
        # WARNING: I did not configure M3LmetUnc MET variations, as we will use it only as a quick comparison
        branches.append(("m3LmetUnc"   + self.systsJEC[var], "F"))
        branches.append(("m3LmetRecUp" + self.systsJEC[var], "F"))
        branches.append(("m3LmetRecDn" + self.systsJEC[var], "F"))
    self.branches = branches
    return

  def analyze(self, event):
    ''' Called from postprocessor '''
    self.isData = not(hasattr(event, "genWeight"))

    if self.isData:
      self.systsJEC = {0 : ""}
      self.lepScaleSysts = {0 : ""}
    self.totalret = {}
    
    lepVars = [-2, -1, 1, 2, 0] if not(self.isData) else [0]
    for lepVar in lepVars:
      self.lepVar = lepVar
      # -- Reset memory -- #
      self.resetMemory()    
      self.currentVar = lepVar
      # -- Collect objects -- #
      self.collectObjects(event)
      # -- Analyze objects -- #
      self.analyzeTopology()
      # -- Write lepton objects -- #
      self.writeLepSel()     
      # -- Save branches -- #
      for branch in self.ret:
        self.totalret[branch + self.lepScaleSysts[lepVar]] = self.ret[branch]
    toPop = []
    for key in self.totalret:
      if "jes" in key and ("elScale" in key or "muScale" in key): toPop.append(key)
    for p in toPop: self.totalret.pop(p) 
    self.totalret["MET_pt_central"] = self.totalret["MET_pt"]
    self.totalret["MET_phi_central"] = self.totalret["MET_phi"]
    self.totalret.pop("MET_pt")
    self.totalret.pop("MET_phi")
    #print(len(self.lepSelFO), self.totalret["m3L"])
    # -- Write output -- #
    writeOutput(self, self.totalret)
    return True

  def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
    declareOutput(self, wrappedOutputTree, self.branches)
    return

  def writeLepSel(self):
    self.ret["nLepSel"] = len(self.lepSelFO)
    for i, l in enumerate(self.lepSelFO):
      if i == 4: break # Only keep the first 4 entries
      for var in ["pt", "eta", "phi", "mass"]:
        self.ret["LepSel_" + var][i] = getattr(l, var, 0)
      for var in ["pdgId", "isTight"]:
        self.ret["LepSel_" + var][i] = int(getattr(l, var, 0))

    allpairs = []
    for os in self.OS:
      allpairs.append( (0 if os.isSF else 1, 1 if os.wTau else 0, os.diff, os) ) # Priority to SF-light-diff-target
    if allpairs:
      allpairs.sort()
      self.ret["nOS"] = len(allpairs)
      for i, os in enumerate(allpairs):
        self.ret["mll"][i] = os[3].mll
        self.ret["mll_i1"][i] = self.lepSelFO.index(os[3].l1)
        self.ret["mll_i2"][i] = self.lepSelFO.index(os[3].l2)
    return

  def analyzeTopology(self):
    if len(self.lepSelFO) >= 3: self.ret["is_3l"] = 1
    if len(self.lepSelFO) >= 4: self.ret["is_4l"] = 1
    self.getGenMatch() 
    self.collectOSpairs(3, False)
    self.makeMass(3)
    self.makeMt2(3)
    self.findBestOSpair(3)
    self.findMtMin(3)
    self.makeMassMET(3)
    self.makeUncMassMET(3)
    return
 
  def makeUncMassMET(self, maxlep):
    return #Fix this
  
  def makeMassMET(self, maxlep):
    # Using pt gives corrected pt
    if len(self.lepSelFO) < 3: return
    sumlep = self.lepSelFO[0].p4()
    metp4 = ROOT.TLorentzVector()
    for i in range(1, min(maxlep, len(self.lepSelFO))):
      sumlep += self.lepSelFO[i].p4()
    for var in self.systsJEC:
      metp4.SetPtEtaPhiM(self.met[var], 0, self.metphi[var], 0)
      sumtot = sumlep + metp4
      self.ret["m" + str(maxlep) + "Lmet" + self.systsJEC[var]] = sumtot.M()
    return

  def findMtMin(self, maxlep):
    self.mTmin = {}
    used = [self.bestOSPair.l1, self.bestOSPair.l2] if self.bestOSPair else [] 
    leps = []

    for i in range(min(maxlep, len(self.lepSelFO))):
      if self.lepSelFO[i] in used: continue
      leps.append(self.lepSelFO[i])
   
    for var in self.systsJEC:
      if var != 0 and self.lepVar != 0: continue
      bufferPF = []
      if not self.isData:
        bufferGEN = []
      for l in leps:
        bufferPF.append(self.mtW(l, var))
        if not self.isData:
          bufferGEN.append(self.mtW(l, var, True))
      if len(bufferPF):
        bufferPF.sort()
        self.ret["mT_" + str(maxlep) + "l" + self.systsJEC[var]] = bufferPF[0]
      else:
        self.ret["mT_" + str(maxlep) + "l" + self.systsJEC[var]] = -1
    return
  
  def mtW(self, lep, var, useGenMet = False):
    return self.mt(lep.conePt, self.met[var], lep.phi, self.metphi[var])


  def findBestOSpair(self, maxlep): 
    self.bestOSPair = None
    allpairs = []
    for os in self.OS:
      allpairs.append( (0 if os.isSF else 1, os.diff, os) )
    if allpairs:
      allpairs.sort()
      
      self.bestOSPair = allpairs[0][2]
      self.ret["mll_" + str(maxlep) + "l"] = self.bestOSPair.mll
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

      for i in range(min(maxlep,len(self.lepSelFO))):
        if self.lepSelFO[i] in used: continue
        self.ret["iW"] = self.lepSelFO[i].idx
        for var in ["pt", "eta", "phi", "mass", "conePt", "genpt", "geneta", "genphi", "genmass"]:
            if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
            self.ret["LepW_" + var] = getattr(self.lepSelFO[i], var, 0)
        for var in ["pdgId", "isTight"]:
            if self.isData and ("gen" in var or "mc" in var or "Match" in var): continue
            self.ret["LepW_" + var] = int(getattr(self.lepSelFO[i], var, 0))
            self.ret["LepW_" + var] = int(getattr(self.lepSelFO[i], var, 0))
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
        muVal = (80.385)**2/2. + ptl*ptnu*math.cos(phil-phinu)
        disc  = (muVal**2*ptl**2*math.sinh(etal)**2/ptl**4 - ((ptl**2*math.cosh(etal)**2)*ptnu**2 - muVal**2)/ptl**2)

        
        metUp = ROOT.TLorentzVector()
        metUp.SetPtEtaPhiM(self.met[0],0,self.metphi[0],0)
        metDn = ROOT.TLorentzVector()
        metDn.SetPtEtaPhiM(self.met[0],0,self.metphi[0],0)

        if disc < 0:
             metUp.SetPz(muVal*ptl*math.sinh(etal)/ptl**2)
             metDn.SetPz(muVal*ptl*math.sinh(etal)/ptl**2)
        else:
             metUp.SetPz(muVal*ptl*math.sinh(etal)/ptl**2 + math.sqrt(disc))
             metDn.SetPz(muVal*ptl*math.sinh(etal)/ptl**2 - math.sqrt(disc))

        sumlep = self.lepSelFO[0].p4()
        for i in range(1,min(maxlep,len(self.lepSelFO))):
          sumlep += self.lepSelFO[i].p4(self.lepSelFO[i].conePt) 
        for var in self.systsJEC:
          if var != 0 and (self.lepVar!= 0 or self.isData): continue
          sumtotUp = sumlep + metUp
          sumtotDn = sumlep + metDn
          self.ret["m3LmetRecUp" + self.systsJEC[var]] = sumtotUp.M()
          self.ret["m3LmetRecDn" + self.systsJEC[var]] = sumtotDn.M()
    return

  def makeMt2(self, maxlep):
    ## Building two sets of MT2
    ## mT2L: two light flavor leptons from the OS pair (category, C, D)
    ## mT2T: hardest light lepton and one tau (category, E, F)
    
    if not self.mt2maker: return False
    anyPairs = []
    for i in range(min(maxlep, len(self.lepSelFO))):
      for j in range(i+1, min(maxlep, len(self.lepSelFO))):
        if abs(self.lepSelFO[i].pdgId) == 15 or abs(self.lepSelFO[j].pdgId) == 15:
          anyPairs.append(OSpair(self.lepSelFO[i], self.lepSelFO[j]))

    mt2t = []
    mt2l = []
    for os in anyPairs:
      if os.wTau and abs(os.l1.pdgId) != 15 or  abs(os.l2.pdgId) != 15: mt2t.append((os.l1.pt+os.l2.pt, os))
    for os in self.OS:
      if abs(os.l1.pdgId) != 15 and abs(os.l2.pdgId) != 15: mt2l.append((os.l1.pt+os.l2.pt, os))

    mt2t.sort(reverse=True) # we want the hardest leptons here! 
    mt2l.sort(reverse=True) # we want the hardest leptons here! 
    for var in self.systsJEC:
      if len(mt2t)>0: 
          self.ret["mT2T_" + str(maxlep) + "l" + self.systsJEC[var]] = self.mt2(mt2t[0][1].l1, mt2t[0][1].l2, var)
      if len(mt2l)>0: 
          self.ret["mT2L_" + str(maxlep) + "l" + self.systsJEC[var]] = self.mt2(mt2l[0][1].l1, mt2l[0][1].l2, var)
    return 

  def mt(self, pt1, pt2, phi1, phi2):
    return math.sqrt(2*pt1*pt2*(1-math.cos(phi1-phi2)))

  def mt2(self, obj1, obj2, var, useGenMet = False):
    vector_met     = array.array('d', [0, self.met[var]*math.cos(self.metphi[var]), self.met[var]*sin(self.metphi[var])])
    vector_obj1    = array.array('d', [obj1.mass, obj1.p4(obj1.pt).Px(), obj1.p4(obj1.pt).Py()])
    vector_obj2    = array.array('d', [obj2.mass, obj2.p4(obj2.pt).Px(), obj2.p4(obj2.pt).Py()])


    self.mt2maker.set_momenta(vector_obj1, vector_obj2, vector_met)
    self.mt2maker.set_mn(0)

    return self.mt2maker.get_mt2()

  def makeMass(self, maxlep):
    if len(self.lepSelFO) < 3: return
    summed_p4 = self.lepSelFO[0].p4()
    for i in range(1, min(maxlep, len(self.lepSelFO))):
      summed_p4 += self.lepSelFO[i].p4(self.lepSelFO[i].conePt) 
    self.ret["m" + str(maxlep) + "L"] = summed_p4.M()
    return

  def collectOSpairs(self, maxlep, useBuffer = False):
    self.OS = []
    nFO = len(self.lepSelFO)
    ### Iterate over a maximum of maxlep and a minimum of nFO leptons
    for i in range(min(maxlep, nFO)): 
      for j in range(i+1, min(maxlep, nFO)):
        ### Forget about taus
        if abs(self.lepSelFO[i].pdgId) == 15 and abs(self.lepSelFO[j].pdgId) == 15: continue 
        ### Make sure leptons are of the same flavor
        if useBuffer and abs(self.lepSelFO[i].pdgId) != abs(self.lepSelFO[j].pdgId): continue
        if self.lepSelFO[i].pdgId * self.lepSelFO[j].pdgId < 0: 
          ### You got yourself an OSSF :D
          self.OS.append(OSpair(self.lepSelFO[i], self.lepSelFO[j]))

    ### Snippet below the if statement is effectively never used
    if useBuffer:
       self.OS.sort(key = lambda x: x.diff)
       buffer = self.OS
       self.OS = []
       used = []
       for os in buffer:
         if not os.l1 in used and not os.l2 in used:
           self.os.append(os)
           used.append(os.l1); used.append(os.l2)
    self.ret["nOSSF_" + str(maxlep) + "l"] = self.countOSSF(maxlep)
    self.ret["nOSTF_" + str(maxlep) + "l"] = self.countOSTF(maxlep)
    self.ret["nOSLF_" + str(maxlep) + "l"] = self.countOSLF(maxlep)
    return

  def countOSLF(self, maxlep):
    return sum(1 if not os.wTau else 0 for os in self.OS)
  def countOSSF(self, maxlep):
    return sum(1 if os.isSF else 0 for os in self.OS)
  def countOSTF(self, maxlep):
    return sum(1 if os.wTau else 0 for os in self.OS)

  def getGenMatch(self):
    if not self.isData:
      for i in range(len(self.lepSelFO)):
        self.lepSelFO[i].genpt   = 0
        self.lepSelFO[i].geneta  = 0
        self.lepSelFO[i].genphi  = 0
        self.lepSelFO[i].genmass = 0

        if self.lepSelFO[i].genPartIdx < 0 or self.lepSelFO[i].genPartIdx >= len(self.genparts):
          self.lepSelFO[i].genpt   = 0
          self.lepSelFO[i].geneta  = 0
          self.lepSelFO[i].genphi  = 0
          self.lepSelFO[i].genmass = 0
        else:
          match  = self.genparts[self.lepSelFO[i].genPartIdx]
          self.lepSelFO[i].genpt   = match.pt
          self.lepSelFO[i].geneta  = match.eta
          self.lepSelFO[i].genphi  = match.phi
          self.lepSelFO[i].genmass = match.mass
    return

  def collectObjects(self, event):
    ''' Gather lepton collections into iterators '''
    self.leps = [l for l in Collection(event, "LepGood", "nLepGood")]
    correctedLeps = self.correctTheLeptons(event, self.leps)

    # -- Collect Fakeable Objects (FO) -- # 
    nLepsFO     = event.__getitem__("nLepFO" + self.inputlabel)
    chosenFO    = event.__getitem__("iF" + self.inputlabel) 
    self.lepsFO = [self.leps[chosenFO[il]] for il in range(nLepsFO)]
 
    # -- Collect Tight leptons -- #
    nLepsTight  = event.__getitem__("nLepTight" + self.inputlabel)
    chosenTight = event.__getitem__("iT" + self.inputlabel) 
    self.lepsT  = [self.leps[chosenTight[il]] for il in range(nLepsTight)]

    for i in range(len(self.lepsT)): self.lepsT[i].idx = i
    for i in range(len(self.lepsFO)): self.lepsFO[i].idx = i
 
    correctedLepsFO = self.correctTheLeptons(event, self.lepsFO)
    correctedLepsT = self.correctTheLeptons(event, self.lepsT)
    # -- Collect Generated leptons -- #
    self.genparts = []
    if not self.isData:
      self.genparts = [p for p in Collection(event, "GenPart", "nGenPart")]

    ### FO, both flavors -- ordered by pT
    self.lepSelFO = self.lepsFO
    #print("nLepSelFO", len(self.lepSelFO))
    self.setAttributes(event, self.lepSelFO, self.isData)
    self.lepSelFO.sort(key = lambda x: x.pt, reverse = True)

    ### Tight leptons, both flavors
    self.lepsTT = [t for t in self.lepSelFO if t.isTight]
    
    self.met    = {}
    self.metphi = {} 
    if hasattr(event, self.metbranch + "_pt_nom"):
      self.met[0]    = event.__getitem__(self.metbranch + "_pt_nom")
      self.metphi[0] = event.__getitem__(self.metbranch + "_phi_nom")
    else:
      self.met[0]    = event.__getitem__(self.metbranch + "_pt")
      self.metphi[0] = event.__getitem__(self.metbranch + "_phi")

    # Fix this once I understand how met_unc branches are created in Carlos' workflow
    #if not self.isData:
    #  if hasattr(event, self.metbranch + "_pt" + self.systsJEC[1]):
    #    for var in self.systsJEC:
    #      if var == 0: continue
    #      self.met[var]    = event.__getitem__(self.metbranch + "_pt" + self.systsJEC[var]) 
    #      self.metphi[var] = event.__getitem__(self.metbranch + "_phi" + self.systsJEC[var])

    ### Recorrect MET based on lepton corrections
    for l in self.leps:
      oldlep = ROOT.TLorentzVector() 
      newlep = ROOT.TLorentzVector()
      oldmet = ROOT.TLorentzVector()
      newmet = ROOT.TLorentzVector()
      oldlep.SetPtEtaPhiM(l.uncorrpt, l.eta,l.phi,l.mass)
      newlep.SetPtEtaPhiM(l.pt, l.eta, l.phi, l.mass)
      oldmet.SetPtEtaPhiM(self.met[0], 0, self.metphi[0], 0)
      newmet = oldmet + oldlep - newlep
    self.met[0]    = newmet.Pt()
    self.metphi[0] = newmet.Phi()
    self.OS = []
    self.ret["MET_pt"]  = self.met[0]
    self.ret["MET_phi"] = self.metphi[0]
    return 

  def setAttributes(self, event, lepSel, isData = False,  isGen = False):
    ''' Set properties in lepton objects '''
    for i, l in enumerate(lepSel): 
      if isGen:
        setattr(l, "motherId", l.motherId)
        setattr(l, "grandmotherId", l.grandmotherId)
      else:
        setattr(l, "isTight", (l in self.lepsT))
    return            


  def correctTheLeptons(self, event, leps):
    ''' Method to select the correct pT branch for leptons depending
        on the lepton scale we are currently processing '''

    # IMPORTANT NOTE: WE ARE NOT CURRENTLY TREATING SCALES, SO WE
    # WILL ONLY USE THE "PT" NOMINAL BRANCH.
    correctedLeps = []
    for l in leps:
      setattr(l,"uncorrpt",l.pt)
      l.pt = l.pt
      if self.lepVar == 1 and abs(l.pdgId)  == 11: l.pt = l.pt
      if self.lepVar == -1 and abs(l.pdgId) == 11: l.pt = l.pt
      if self.lepVar == 2 and abs(l.pdgId)  == 13: l.pt = l.pt
      if self.lepVar == -2 and abs(l.pdgId) == 13: l.pt = l.pt

      correctedLeps.append(l) 
    return correctedLeps

  def resetMemory(self):
    ''' Reset variables to a default state at each event iteration '''
    self.ret = {};

    self.ret["iZ1"]          = -1
    self.ret["iZ2"]          = -1
    self.ret["iW" ]          = -1
    self.ret["is_3l"]        = 0
    self.ret["is_4l"]        = 0
    self.ret["nOSSF_3l"]     = 0
    self.ret["nOSLF_3l"]     = 0
    self.ret["nOSTF_3l"]     = 0
    self.ret["mll_3l"]       = 0
    self.ret["m3L"]          = 0
    self.ret["minDeltaR_3l"] = -1
    self.ret["deltaR_WZ"]    = 0

    self.ret["nOS"]          = 0
    self.ret["mll"]          = [0.]*20
    self.ret["mll_i1"]       = [-1]*20
    self.ret["mll_i2"]       = [-1]*20

    self.ret["nLepSel"] = 0
    for var in ["pt", "eta", "phi", "mass", "conePt", "genpt", "geneta", "genphi", "genmass"]:
      self.ret["LepSel_" + var] = [0.]*4
      self.ret["LepZ1_"  + var] = 0.
      self.ret["LepZ2_"  + var] = 0.
      self.ret["LepW_"   + var] = 0.
    for var in ["pdgId", "isTight"]:
      self.ret["LepSel_" + var] = [0]*4
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
    return

def deltaPhi(phi1, phi2):
  res = phi1 - phi2
  while res >   math.pi: res -= 2*math.pi
  while res <= -math.pi: res += 2*math.pi
  return res

def deltaR(eta1, phi1, eta2, phi2):
  dEta = abs(eta1-eta2)
  dPhi = deltaPhi(phi1, phi2)
  return math.sqrt(dEta*dEta + dPhi*dPhi)

if __name__ == '__main__':
  pass












