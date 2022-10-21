import ROOT
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput
from copy import copy, deepcopy
import math
""" Define some useful functions """
def deltaPhi( p1, p2):
    '''Computes delta phi, handling periodic limit conditions.'''
    res = p1 - p2
    while res > math.pi:
        res -= 2*math.pi
    while res < -math.pi:
        res += 2*math.pi
    return res


def deltaR2( e1, p1, e2=None, p2=None):
    """Take either 4 arguments (eta,phi, eta,phi) or two objects that have 'eta', 'phi' attributes)"""
    if (e2 == None and p2 == None):
        return deltaR2(e1.eta,e1.phi, p1.eta, p1.phi)
    de = e1 - e2
    dp = deltaPhi(p1, p2)
    return de*de + dp*dp


def deltaR( *args ):
    return math.sqrt( deltaR2(*args) )



def minMllTL(lepsl, lepst, bothcut=lambda lep:True, onecut=lambda lep:True, paircut=lambda lep1,lep2:True):
      pairs = []
      for l1 in lepst:
          if not bothcut(l1): continue
          for l2 in lepsl:
              if l2 == l1 or not bothcut(l2): continue
              if not onecut(l1) and not onecut(l2): continue
              if not paircut(l1,l2): continue
              mll = (l1.p4() + l2.p4()).M()
              pairs.append(mll)
      if len(pairs):
          return min(pairs)
      return -1

def passMllVeto(l1, l2, mZmin, mZmax, isOSSF ):
  if  l1.pdgId == -l2.pdgId or not isOSSF:
      mz = (l1.p4() + l2.p4()).M()
      if mz > mZmin and  mz < mZmax:
          return False
  return True

def passMllTLVeto(lep, lepsl, mZmin, mZmax, isOSSF):
  for ll in lepsl:
      if ll == lep: continue
      if not passMllVeto(lep, ll, mZmin, mZmax, isOSSF):
          return False
  return True

def passTripleMllVeto(l1, l2, l3, mZmin, mZmax, isOSSF ):
  ls = [passMllVeto(l1, l2, mZmin, mZmax, isOSSF), \
        passMllVeto(l1, l3, mZmin, mZmax, isOSSF), \
        passMllVeto(l2, l3, mZmin, mZmax, isOSSF)]
  if all(ls): return True
  return False

""" Proper class implementation """
class LeptonJetRecleanerWZSM(Module):
  def __init__(self, label,
               # Lepton selectors
               looseLeptonSel,
               cleaningLeptonSel, 
               FOLeptonSel,
               tightLeptonSel,
               # Jet selectors
               cleanJet, 
               selectJet,
               # Tau selectors
               cleanTau,
               looseTau,
               tightTau,
               cleanJetsWithTaus,
               # extra stuff
               doVetoZ,
               doVetoLMf,
               doVetoLMt,
               jetPt,
               bJetPt,
               coneptdef,
               storeJetVariables=False,
               cleanTausWithLoose=False, 
               year=2022, bAlgo="DeepCSV"):

    # --- Constructor --- #
    # * Label for output variables
    self.label = "" if (label in ["",None]) else ("_"+label)
    
    # * Lepton selection at different levels
    self.looseLeptonSel = looseLeptonSel
     
    # * The following are applied on top of looseLepton selections
    self.cleaningLeptonSel = cleaningLeptonSel 
    self.FOLeptonSel = FOLeptonSel             
    self.tightLeptonSel = tightLeptonSel 
    
    # * Jet selections
    self.selectJet = selectJet
    self.cleanJet = cleanJet

    # * Tau selections
    self.cleanTau = cleanTau
    self.looseTau = looseTau
    self.tightTau = tightTau
    
    # * Booleans to control which leptons are to be cleaned from the jets. 
    self.cleanJetsWithTaus = cleanJetsWithTaus
    self.cleanTausWithLoose = cleanTausWithLoose

    # * Other vetos
    self.doVetoZ = doVetoZ
    self.doVetoLMf = doVetoLMf
    self.doVetoLMt = doVetoLMt
    
    # * Definitions
    self.coneptdef = coneptdef
    self.jetPt = jetPt # Minimum jet pT
    self.bJetPt = bJetPt # Minimum b tag pT
    self.strJetPt = str(int(jetPt))
    self.strBJetPt = str(int(bJetPt))

    # * Systematic variations 
    self.systsJEC      = {0:"", 1:"", -1:"",2:"", -2:""}
    self.systsLepScale = {0:"", 1:"_elScaleUp", 2:"_elScaleDown", 3:"_muScaleUp",4:"_muScaleDown"}
    #self.systsJEC = {0:"", 1:"_jesTotalCorrUp", -1:"_jesTotalCorrDown",2:"_jesTotalUnCorrUp", -2:"_jesTotalUnCorrDown"}
    #self.systsLepScale = {0:"", 1:"_elScaleUp", 2:"_elScaleDown", 3:"_muScaleUp",4:"_muScaleDown"}

    # * Control verbosity 
    self.debugprinted = False

    # * Other stuff
    self.storeJetVariables = storeJetVariables
    self.year = year
    self.bAlgo = bAlgo
    
    # List the branches that will be written to declare the output
    self.listBranches()
  def listBranches(self):
    ''' Method to prompt with a list of the branches produced in this module'''
    label = self.label
    branches = []
    for key in self.systsLepScale:
      branches.extend([
        ("nLepGood"+self.systsLepScale[key],"I"), ("LepGood_conePt"+self.systsLepScale[key],"F",20,"nLepGood"+self.systsLepScale[key]),
        ("nLepLoose"+self.systsLepScale[key]+label, "I"), ("iL"+self.systsLepScale[key]+label,"I",20), # passing loose
        ("nLepLooseVeto"+self.systsLepScale[key]+label, "I"), ("iLV"+self.systsLepScale[key]+label,"I",20), # passing loose + veto
        ("nLepCleaning"+self.systsLepScale[key]+label, "I"), ("iC"+self.systsLepScale[key]+label,"I",20), # passing cleaning
        ("nLepCleaningVeto"+self.systsLepScale[key]+label, "I"), ("iCV"+self.systsLepScale[key]+label,"I",20), # passing cleaning + veto
        ("nLepFO"+self.systsLepScale[key]+label, "I"), ("iF"+self.systsLepScale[key]+label,"I",20), # passing FO, sorted by conept
        ("nLepFOVeto"+self.systsLepScale[key]+label, "I"), ("iFV"+self.systsLepScale[key]+label,"I",20), # passing FO + veto, sorted by conept
        ("nLepTight"+self.systsLepScale[key]+label, "I"), ("iT"+self.systsLepScale[key]+label,"I",20), # passing tight, sorted by conept
        ("nLepTightVeto"+self.systsLepScale[key]+label, "I"), ("iTV"+self.systsLepScale[key]+label,"I",20), # passing tight + veto, sorted by conept
        ("LepGood_isLoose"+self.systsLepScale[key]+label,"I",20,"nLepGood"+self.systsLepScale[key]),("LepGood_isLooseVeto"+self.systsLepScale[key]+label,"I",20,"nLepGood"+self.systsLepScale[key]),
        ("LepGood_isCleaning"+self.systsLepScale[key]+label,"I",20,"nLepGood"+self.systsLepScale[key]),("LepGood_isCleaningVeto"+self.systsLepScale[key]+label,"I",20,"nLepGood"+self.systsLepScale[key]),
        ("LepGood_isFO"+self.systsLepScale[key]+label,"I",20,"nLepGood"+self.systsLepScale[key]),("LepGood_isFOVeto"+self.systsLepScale[key]+label,"I",20,"nLepGood"+self.systsLepScale[key]),
        ("LepGood_isTight"+self.systsLepScale[key]+label,"I",20,"nLepGood"+self.systsLepScale[key]),("LepGood_isTightVeto"+self.systsLepScale[key]+label,"I",20,"nLepGood"+self.systsLepScale[key]),
        ])

      branches.extend([
            ("mZ1"+self.systsLepScale[key]+label,"F"), ("minMllAFAS"+self.systsLepScale[key]+label,"F"), ("minMllAFOS"+self.systsLepScale[key]+label,"F"), ("minMllAFSS"+self.systsLepScale[key]+label,"F"), ("minMllSFOS"+self.systsLepScale[key]+label,"F")
            ])


    for key in self.systsJEC:
      branches.extend([
      ("nJetSel"+label+self.systsJEC[key], "I"), ("iJSel"+label+self.systsJEC[key],"I",20,"nJetSel"+label+self.systsJEC[key]), # index >= 0 if in Jet; -1-index (<0) if in DiscJet
      ("nDiscJetSel"+label+self.systsJEC[key], "I"), ("iDiscJSel"+label+self.systsJEC[key],"I",20,"nDiscJetSel"+label+self.systsJEC[key]), # index >= 0 if in Jet; -1-index (<0) if in DiscJet
      ("nJet"+self.strJetPt+label+self.systsJEC[key], "I"), "htJet"+self.strJetPt + "j"+label+self.systsJEC[key],
      "mhtJet"+self.strJetPt + label+self.systsJEC[key], ("nBJetLoose"+self.strJetPt+label+self.systsJEC[key], "I"), ("nBJetMedium"+self.strJetPt+label+self.systsJEC[key], "I"), ("nBJetTight"+self.strJetPt+label+self.systsJEC[key], "I"),
      ("nJet"+self.strBJetPt+label+self.systsJEC[key], "I"), "htJet"+self.strBJetPt+"j"+label+self.systsJEC[key],
      "mhtJet"+self.strBJetPt + label+self.systsJEC[key], ("nBJetLoose"+self.strBJetPt+label+self.systsJEC[key], "I"), ("nBJetMedium"+self.strBJetPt+label+self.systsJEC[key], "I"), ("nBJetTight"+self.strBJetPt+label+self.systsJEC[key], "I"),
      ])


    if self.storeJetVariables:
        for jfloat in "pt eta phi mass btagCSV rawPt".split():
            for key in self.systsJEC:
                branches.append( ("JetSel"+label+self.systsJEC[key]+"_"+jfloat,"F",20,"nJetSel"+label) )
    self.branches = branches
    return 
  def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
    declareOutput(self, wrappedOutputTree, self.branches)
    return
  
  def fillCollWithVeto(self,ret,refcollection,leps,lab,labext,selection,lepsforveto,doVetoZ,doVetoLM,sortby,ht=-1,pad_zeros_up_to=20,extraTag=""):
      ''' 
         Method to categorise leptons using selections 
         
        Three lepton lists are crated: 
           * lepspass : leptons that pass selection criteria
           * lepsforveto : leptons to veto with
           * lepspassveto : vetoed leptons

      '''
      
      ret['i'+lab+extraTag] = [];     # List of leptons that pass selection
      ret['i'+lab+'V'+extraTag] = []; # List of vetoed leptons
      
      for lep in leps:
          ## doVeto: True if the lepton passes a given selection 
          ## ht = -1: selection = loose selection 
          ## ht = 1 : selection = other selection (cleaning, FO, tight) 
          doVeto = selection(lep) if ht <0 else selection(lep, self.jetColl)
          if (doVeto):
              ret['i'+lab+extraTag].append(refcollection.index(lep)) # Keep the index of the leptons that pass the selection

      ## Sort the list of leptons 
      ret['i'+lab+extraTag] = self.sortIndexListByFunction(ret['i'+lab+extraTag], refcollection, sortby)
      ret['nLep'+labext+extraTag] = len(ret['i'+lab+extraTag])
      ret['LepGood_is'+labext+extraTag] = [(1 if i in ret['i'+lab+extraTag] else 0) for i in xrange(len(refcollection))]
      
      ## Fetch leptons that pass the selection
      lepspass = [ refcollection[il] for il in ret['i'+lab+extraTag]  ]
      if lepsforveto == None: lepsforveto = lepspass # Veto selected leptons among themselves
      for lep in lepspass:
          ## Keep any lepton pair if no veto to Z peak or low mass resonance is applied 
          if (not doVetoZ  or passMllTLVeto(lep, lepsforveto, 76, 106, True)) and \
             (not doVetoLM or passMllTLVeto(lep, lepsforveto,  0,  12, True)):
              ret['i'+lab+'V'+extraTag].append(refcollection.index(lep))

      ## Sort the vetoed leptons
      ret['i'+lab+'V'+extraTag] = self.sortIndexListByFunction(ret['i'+lab+'V'+extraTag],refcollection,sortby)
      ret['nLep'+labext+'Veto'+extraTag] = len(ret['i'+lab+'V'+extraTag])
      ret['LepGood_is'+labext+'Veto'+extraTag] = [(1 if i in ret['i'+lab+'V'+extraTag] else 0) for i in xrange(len(refcollection))]

      ## List of leptons that pass selection criteria after vetos are applied 
      lepspassveto = [ refcollection[il] for il in ret['i'+lab+'V'+extraTag]  ]
      ret['i'+lab+extraTag] = ret['i'+lab+extraTag] + [0]*(pad_zeros_up_to-len(ret['i'+lab+extraTag]))
      ret['i'+lab+'V'+extraTag] = ret['i'+lab+'V'+extraTag] + [0]*(pad_zeros_up_to-len(ret['i'+lab+'V'+extraTag]))

      return (ret, lepspass, lepspassveto)

  def sortIndexListByFunction(self, indexlist, parentcollection, func):
      if not func: return indexlist[:]
      newsort = sorted([(ij,parentcollection[ij]) for ij in indexlist], key = lambda x: func(x[1]), reverse=True)
      return [x[0] for x in newsort]

  def recleanJets(self, jetcollcleaned, jetcolldiscarded, lepcoll, postfix, ret, jetret, discjetret):
      ## Define jets
      ret["iJSel"+postfix]     = [] 
      ret["iDiscJSel"+postfix] = []

      # 0. mark each jet as clean
      for j in jetcollcleaned+jetcolldiscarded: 
        j._clean = True

      # 1. associate to each lepton passing the cleaning selection its nearest jet 
      for lep in lepcoll:
          best = None; bestdr = 0.4
          for j in jetcollcleaned+jetcolldiscarded:
              dr = deltaR(lep, j)
              if dr < bestdr:
                  best = j; bestdr = dr
          if best is not None and self.cleanJet(lep, best, bestdr):
              best._clean = False

      # 2. compute the jet list
      for ijc, j in enumerate(jetcollcleaned):
          if not self.selectJet(j): 
            continue
          elif not j._clean: 
            ret["iDiscJSel"+postfix].append(ijc)
          else: 
              ret["iJSel"+postfix].append(ijc)

      for ijd,j in enumerate(jetcolldiscarded):
          if not self.selectJet(j): 
            continue
          elif not j._clean: 
            ret["iDiscJSel"+postfix].append(-1-ijd)
          else: 
            ret["iJSel"+postfix].append(-1-ijd)

      # 3. sort the jets by pt
      ret["iJSel"+postfix].sort(key = lambda idx : jetcollcleaned[idx].pt if idx >= 0 else jetcolldiscarded[-1-idx].pt, reverse = True)
      ret["iDiscJSel"+postfix].sort(key = lambda idx : jetcollcleaned[idx].pt if idx >= 0 else jetcolldiscarded[-1-idx].pt, reverse = True)
      ret["nJetSel"+postfix] = len(ret["iJSel"+postfix])
      ret["nDiscJetSel"+postfix] = len(ret["iDiscJSel"+postfix])

      # 4. if needed, store the jet 4-vectors
      if self.storeJetVariables:
          if postfix==self.label:
              for jfloat in "pt eta phi mass btagCSV rawPt".split():
                  jetret[jfloat] = []
                  discjetret[jfloat] = []
              for idx in ret["iJSel"+postfix]:
                  jet = jetcollcleaned[idx] if idx >= 0 else jetcolldiscarded[-1-idx]
                  for jfloat in "pt eta phi mass btagCSV rawPt".split():
                      jetret[jfloat].append( getattr(jet,jfloat) )
              for idx in ret["iDiscJSel"+postfix]:
                  jet = jetcollcleaned[idx] if idx >= 0 else jetcolldiscarded[-1-idx]
                  for jfloat in "pt eta phi mass btagCSV rawPt".split():
                      discjetret[jfloat].append( getattr(jet,jfloat) )

       # 5. compute some variables and their sum
      ret["nJet"+self.strBJetPt+postfix] = 0
      ret["htJet"+self.strBJetPt+"j"+postfix] = 0
      ret["mhtJet"+self.strBJetPt+postfix] = 0
      ret["nBJetLoose"+self.strBJetPt+postfix] = 0
      ret["nBJetMedium"+self.strBJetPt+postfix] = 0 
      ret["nBJetTight"+self.strBJetPt+postfix] = 0
             
      ret["nJet"+self.strJetPt+postfix] = 0
      ret["htJet"+self.strJetPt+"j"+postfix] = 0
      ret["mhtJet"+self.strJetPt+postfix] = 0
      ret["nBJetLoose"+self.strJetPt+postfix] = 0
      ret["nBJetMedium"+self.strJetPt+postfix] = 0
      ret["nBJetTight"+self.strJetPt+postfix] = 0

      cleanjets = [];
      alljets = jetcollcleaned + jetcolldiscarded
      mhtBJetPtvec = ROOT.TLorentzVector(0,0,0,0)
      mhtJetPtvec = ROOT.TLorentzVector(0,0,0,0)
      for x in lepcoll: 
        mhtBJetPtvec = mhtBJetPtvec - x.p4()
      for x in lepcoll: 
        mhtJetPtvec = mhtJetPtvec - x.p4()
      for j in alljets:
          if not (j._clean and self.selectJet(j)): 
            continue
          cleanjets.append(j)
          if j.pt > float(self.bJetPt):
              if self.year == 2022 and self.bAlgo == "DeepCSV":
                  ret["nJet"+self.strBJetPt+postfix] += 1
                  ret["htJet"+self.strBJetPt+"j"+postfix] += j.pt 
                  if j.btagDeepB>0.2217: ret["nBJetLoose"+self.strBJetPt+postfix]  += 1
                  if j.btagDeepB>0.6321: ret["nBJetMedium"+self.strBJetPt+postfix] += 1
                  if j.btagDeepB>0.8953: ret["nBJetTight"+self.strBJetPt+postfix]  += 1
                  mhtBJetPtvec = mhtBJetPtvec - j.p4()
              if self.year == 2022 and self.bAlgo == "DeepJet":
                  ret["nJet"+self.strBJetPt+postfix] += 1
                  ret["htJet"+self.strBJetPt+"j"+postfix] += j.pt 
                  if j.btagDeepFlavB>0.0614: ret["nBJetLoose"+self.strBJetPt+postfix]  += 1
                  if j.btagDeepFlavB>0.3093: ret["nBJetMedium"+self.strBJetPt+postfix] += 1
                  if j.btagDeepFlavB>0.7221: ret["nBJetTight"+self.strBJetPt+postfix]  += 1
                  mhtBJetPtvec = mhtBJetPtvec - j.p4()

          if j.pt > float(self.jetPt):
              if self.year == 2018 and self.bAlgo == "DeepCSV":
                  ret["nJet"+self.strJetPt+postfix] += 1
                  ret["htJet"+self.strJetPt+"j"+postfix] += j.pt
                  if j.btagDeepB>0.2217: ret["nBJetLoose"+self.strJetPt+postfix]  += 1
                  if j.btagDeepB>0.6321: ret["nBJetMedium"+self.strJetPt+postfix] += 1
                  if j.btagDeepB>0.8953: ret["nBJetTight"+self.strJetPt+postfix]  += 1
                  mhtBJetPtvec = mhtBJetPtvec - j.p4()
              if self.year == 2022 and self.bAlgo == "DeepJet":
                  ret["nJet"+self.strJetPt+postfix] += 1; ret["htJet"+self.strJetPt+"j"+postfix] += j.pt; 
                  if j.btagDeepFlavB>0.0614: ret["nBJetLoose"+self.strJetPt+postfix]  += 1
                  if j.btagDeepFlavB>0.3093: ret["nBJetMedium"+self.strJetPt+postfix] += 1
                  if j.btagDeepFlavB>0.7221: ret["nBJetTight"+self.strJetPt+postfix]  += 1
                  mhtBJetPtvec = mhtBJetPtvec - j.p4()

      ret["mhtJet"+self.strBJetPt+postfix] = mhtBJetPtvec.Pt()
      ret["mhtJet"+self.strJetPt+postfix] = mhtJetPtvec.Pt()
      return cleanjets
  
  def analyze(self, event):
    ''' Main method -- executed at runtime '''

    self.ev = event
    fullret = {}
     

    # -- CREATE THE OUTPUT COLLECTIONS -- #
    ## lepsl : loose leptons
    ## lepsc : cleaned leptons
    ## lepsf : fakeable leptons
    ## lepst : tight leptons
    ## jetsc : clean jets
    ## jetsd : discarded jets 

    leps  = {}
    taus  = {}
    jetsc = {}
    jetsd = {}

    leps = {key: [copy(l) for l in Collection(event,"LepGood","nLepGood")] for key in [0, 1, 2, 3, 4]}
    #tausc = {key: [copy(t) for t in Collection(event,"TauGood","nTauGood")] for key in [1, 2, 3, 4]}
    #tausc = {key: [copy(t) for t in Collection(event,"TauGood","nTauGood")] for key in [1, 2, 3, 4]}
    jetsc = {key: [copy(j) for j in Collection(event,"Jet","nJet")] for key in [0, -1, 1, -2, 2]}
    jetsd = {key: [] for key in [0, -1, 1, -2, 2]}

 
    isData = not(hasattr(event, "genWeight"))
    if isData:
      # -- NOTE: Jet energy scales and corrections are still preliminary [05-09-2022]
      self.systsJEC      = {0:"", 1:"", -1:"",2:"", -2:""}
      self.systsLepScale = {0:"", 1:"_elScaleUp", 2:"_elScaleDown", 3:"_muScaleUp",4:"_muScaleDown"}

    if not self.coneptdef:
      raise RuntimeError("[leptonJetReCleaner::Error]: Choose a definition for cone pt")

    ### Compute the cone-corrected pT for each lepton
    for key in leps:
      for lep in leps[key]:
        lep.conept = self.coneptdef(lep)
    
    for var in [-1, 1, -2, 2]:
      if hasattr(event, "nJet"):
        for ij, j in enumerate(jetsc[var]):
          setattr(jetsc[var][ij], "pt", getattr(jetsc[var][ij], "pt"+self.systsJEC[var]))
    for j in jetsc[0]:
      if hasattr(j, "pt_nom"): jet.pt = j.pt_nom

    ### Save jets in a collection
    self.jetColl = jetsc   
 
    for key in self.systsLepScale:
      self.debugprinted = True
      ret = {}; retwlabel = {}
      
      lepsl = []; lepsl = [];
      ret, lepsl, lepslv = self.fillCollWithVeto(ret = ret,
                           refcollection = leps[key],
                           leps = leps[key],
                           lab = 'L',
                           labext = 'Loose', 
                           selection = self.looseLeptonSel, 
                           lepsforveto = None, 
                           doVetoZ = self.doVetoZ, 
                           doVetoLM = self.doVetoLMf, 
                           sortby = None, 
                           ht = -1, 
                           extraTag = self.systsLepScale[key])

      lepsc = []; lepscv = [];
      ret, lepsc, lepscv = self.fillCollWithVeto(ret,
                           refcollection = leps[key],
                           leps = lepsl,
                           lab = 'C',
                           labext = 'Cleaning',
                           selection = self.cleaningLeptonSel, 
                           lepsforveto = lepsl, 
                           doVetoZ = self.doVetoZ, 
                           doVetoLM = self.doVetoLMf, 
                           sortby = None, 
                           ht = 1, 
                           extraTag = self.systsLepScale[key]) 

      ### Compute masses
      ret['mZ1'+self.systsLepScale[key]]        = bestZ1TL(lepsl, lepsl)
      ret['minMllAFAS'+self.systsLepScale[key]] = minMllTL(lepsl, lepsl)
      ret['minMllAFOS'+self.systsLepScale[key]] = minMllTL(lepsl, lepsl, paircut = lambda l1,l2 : l1.charge !=  l2.charge)
      ret['minMllAFSS'+self.systsLepScale[key]] = minMllTL(lepsl, lepsl, paircut = lambda l1,l2 : l1.charge ==  l2.charge)
      ret['minMllSFOS'+self.systsLepScale[key]] = minMllTL(lepsl, lepsl, paircut = lambda l1,l2 : l1.pdgId  == -l2.pdgId)

      ### Clean the Jets with loose leptons
      jetret = {}
      discjetret = {}
      if key == 0:
        cleanjets = {}
        for var in self.systsJEC:
          cleanjets[var] = self.recleanJets(jetcollcleaned = jetsc[var],
                                            jetcolldiscarded = jetsd[var],
                                            lepcoll = lepsc, 
                                            postfix = self.label+self.systsJEC[var],
                                            ret = retwlabel,
                                            jetret = jetret,
                                            discjetret = discjetret)
        ## Calculate FOs and tight leptons using the cleaned Jets, and sort by conePt
        lepsf = []; lepsfv = [];
        ret, lepsf, lepsfv = self.fillCollWithVeto(ret, 
                                                   refcollection = leps[key],
                                                   leps = lepsl,
                                                   lab = 'F',
                                                   labext = 'FO',
                                                   selection = self.FOLeptonSel,
                                                   lepsforveto = lepsl, 
                                                   ht=1, 
                                                   sortby = lambda x: x.conept, 
                                                   doVetoZ = self.doVetoZ, 
                                                   doVetoLM = self.doVetoLMf, 
                                                   extraTag = self.systsLepScale[key])
        lepst = []; lepstv = [];
        ret, lepst, lepstv = self.fillCollWithVeto(ret, 
                                                   refcollection = leps[key],
                                                   leps = lepsl,
                                                   lab = 'T',
                                                   labext = 'Tight',
                                                   selection = self.tightLeptonSel,
                                                   lepsforveto = lepsl, 
                                                   ht=1, 
                                                   sortby = lambda x: x.conept, 
                                                   doVetoZ = self.doVetoZ, 
                                                   doVetoLM = self.doVetoLMf, 
                                                   extraTag = self.systsLepScale[key])
      ### Attach labels and return
      fullret["nLepGood"+self.systsLepScale[key]] = len(leps[key])
      fullret["LepGood_conePt"+self.systsLepScale[key]] = [lep.conept for lep in leps[key]]
      for k,v in ret.iteritems():
        fullret[k+self.label] = v
      if key == 0:
        fullret.update(retwlabel)
        for k,v in jetret.iteritems():
          fullret["JetSel%s_%s" % (self.label,k)] = v

    ### Write the output
    writeOutput(self, fullret)
    return True   
       


def bestZ1TL(lepsl,lepst,cut=lambda lep:True):
    pairs = []
    for l1 in lepst:
      if not cut(l1): continue
      for l2 in lepsl:
          if not cut(l2): continue
          if l1.pdgId == -l2.pdgId:
             mz = (l1.p4() + l2.p4()).M()
             diff = abs(mz-91)
             pairs.append( (diff,mz) )
    if len(pairs):
        pairs.sort()
        return pairs[0][1]
    return 0.


if  __name__ == '__main__':
  pass        
