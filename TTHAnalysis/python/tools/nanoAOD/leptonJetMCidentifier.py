import ROOT
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput
from copy import copy, deepcopy
import math

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



""" Proper class implementation """
class LeptonJetMCidentifier(Module):
  def __init__(self, loose_lepton, jet_sel, cleanJet, jetPt, tightLeptonSel):
    # --- Constructor --- #
    self.loose_lepton = loose_lepton
    self.selectJet      = jet_sel
    self.cleanJet     = cleanJet
    self.jetPt = jetPt
    self.strJetPt = str(int(jetPt))
    self.tightLeptonSel = tightLeptonSel
    self.listBranches()
    return 

  def listBranches(self):
    ''' Method to prompt with a list of the branches produced in this module'''
    branches = [
      ("nLepDressed","I"), 
      ("nLepLoose", "I"), 
      ("iL","I",20), # passing loose
      ("nLepLooseVeto", "I"), 
      ("iLV","I",20), # passing loose + veto
      ("nLepTight", "I"), 
      ("iT","I",20), # passing tight, sorted by conept
      ("nLepTightVeto", "I"), 
      ("iTV","I",20), # passing tight + veto, sorted by conept
      ("LepDressed_isLoose","I",20,"nLepDressed"),
      ("LepDressed_isLooseVeto","I",20,"nLepDressed"),
      ("LepDressed_isTight"    ,"I",20,"nLepDressed"),
      ("LepDressed_isTightVeto","I",20,"nLepDressed"),
      ("minMllAFAS","F"), 
      ("minMllAFOS","F"), 
      ("minMllAFSS","F"), 
      ("minMllSFOS","F"),
      ("nJetSel", "I"), 
      ("iJSel","I",20,"nJetSel"), # index >= 0 if in Jet; -1-index (<0) if in DiscJet
      ("nDiscJetSel", "I"), 
      ("iDiscJSel","I",20,"nDiscJetSel"), # index >= 0 if in Jet; -1-index (<0) if in DiscJet
      ("nJet25", "I"), 
      ("htJet25j"),
      ("mhtJet25") 
      ]
    for jfloat in "pt eta phi mass partonFlavour".split():
      branches.append( ("JetSel_"+jfloat, "F", 20, "nJetSel") )
    for lfloat in "pt eta phi mass pdgId hasTauAnc".split():
      branches.append( ("LepDressed_"+lfloat, "F", 20, "nLepDressed") )
    self.branches = branches
    return

  def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
    declareOutput(self, wrappedOutputTree, self.branches)
    return

  def collectObjects(self, event):
    self.genDressLeps = [ l for l in Collection(event, "GenDressedLepton", "nGenDressedLepton") ]    
    self.genJets      = [ j for j in Collection(event, "GenJet", "nGenJet") ]    
    self.genParts     = [ p for p in Collection(event, "GenPart", "nGenPart") ]    
    return
  def fillCollWithVeto(self,ret,refcollection,leps,lab,labext,selection,lepsforveto,sortby,ht=-1,pad_zeros_up_to=20):
    ''' 
       Method to categorise leptons using selections 
       
      Three lepton lists are crated: 
         * lepspass : leptons that pass selection criteria
         * lepsforveto : leptons to veto with
         * lepspassveto : vetoed leptons

    '''
    
    ret['i'+lab] = [];     # List of leptons that pass selection
    ret['i'+lab+'V'] = []; # List of vetoed leptons
    
    for lep in leps:
        ## doVeto: True if the lepton passes a given selection 
        ## ht = -1: selection = loose selection 
        ## ht = 1 : selection = other selection (cleaning, FO, tight) 
        doVeto = selection(lep) if ht <0 else selection(lep, self.jetColl)
        if (doVeto):
            ret['i'+lab].append(refcollection.index(lep)) # Keep the index of the leptons that pass the selection

    ## Sort the list of leptons 
    ret['i'+lab] = self.sortIndexListByFunction(ret['i'+lab], refcollection, sortby)
    ret['nLep'+labext] = len(ret['i'+lab])
    ret['LepDressed_is'+labext] = [(1 if i in ret['i'+lab] else 0) for i in xrange(len(refcollection))]
    
    ## Fetch leptons that pass the selection
    lepspass = [ refcollection[il] for il in ret['i'+lab]  ]
    if lepsforveto == None: lepsforveto = lepspass # Veto selected leptons among themselves
    for lep in lepspass:
        ## Keep any lepton pair if no veto to Z peak or low mass resonance is applied 
        if (passMllTLVeto(lep, lepsforveto, 76, 106, True)) and \
           (passMllTLVeto(lep, lepsforveto,  0,  12, True)):
            ret['i'+lab+'V'].append(refcollection.index(lep))

    ## Sort the vetoed leptons
    ret['i'+lab+'V'] = self.sortIndexListByFunction(ret['i'+lab+'V'],refcollection,sortby)
    ret['nLep'+labext+'Veto'] = len(ret['i'+lab+'V'])
    ret['LepDressed_is'+labext+'Veto'] = [(1 if i in ret['i'+lab+'V'] else 0) for i in xrange(len(refcollection))]

    ## List of leptons that pass selection criteria after vetos are applied 
    lepspassveto = [ refcollection[il] for il in ret['i'+lab+'V']  ]
    ret['i'+lab] = ret['i'+lab] + [0]*(pad_zeros_up_to-len(ret['i'+lab]))
    ret['i'+lab+'V'] = ret['i'+lab+'V'] + [0]*(pad_zeros_up_to-len(ret['i'+lab+'V']))

    return (ret, lepspass, lepspassveto)

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

      # 4. Store the jet 4-vectors
      for jfloat in "pt eta phi mass partonFlavour".split():
          jetret[jfloat] = []
          discjetret[jfloat] = []
      for idx in ret["iJSel"+postfix]:
          jet = jetcollcleaned[idx] if idx >= 0 else jetcolldiscarded[-1-idx]
          for jfloat in "pt eta phi mass partonFlavour".split():
              jetret[jfloat].append( getattr(jet,jfloat) )
      for idx in ret["iDiscJSel"+postfix]:
          jet = jetcollcleaned[idx] if idx >= 0 else jetcolldiscarded[-1-idx]
          for jfloat in "pt eta phi mass partonFlavour".split():
              discjetret[jfloat].append( getattr(jet,jfloat) )

       # 5. compute some variables and their sum
      ret["nJet"+self.strJetPt+postfix] = 0
      ret["htJet"+self.strJetPt+"j"+postfix] = 0
      ret["mhtJet"+self.strJetPt+postfix] = 0

      cleanjets = [];
      alljets = jetcollcleaned + jetcolldiscarded
      mhtJetPtvec  = ROOT.TLorentzVector(0,0,0,0)
      for x in lepcoll: 
        mhtJetPtvec = mhtJetPtvec - x.p4()
      for j in alljets:
          if not (j._clean and self.selectJet(j)): 
            continue
          cleanjets.append(j)
          if j.pt > float(self.jetPt):
            ret["nJet"+self.strJetPt+postfix] += 1
            ret["htJet"+self.strJetPt+"j"+postfix] += j.pt

      ret["mhtJet"+self.strJetPt+postfix]  = mhtJetPtvec.Pt()
      return cleanjets


  def analyzeTopology(self, ret, event):
    nLeps = event.nGenDressedLepton 
    nJets = event.nGenJet
    
    
    ## First of all, consider only those leptons that pass minimal selection criteria
    leps  = [self.genDressLeps[lepi] for lepi in range(nLeps)]
    jets  = [self.genJets[jeti] for jeti in range(nJets)]
    jetsd = [] # List of discarded jets
 
    self.jetColl = jets
    retwlabel = {}
    ret, lepsl, lepslv = self.fillCollWithVeto(ret = ret,
                                          refcollection = leps,
                                          leps = leps,
                                          lab = 'L',
                                          labext = 'Loose',
                                          selection = self.loose_lepton, 
                                          lepsforveto = None, 
                                          sortby = None, 
                                          ht = -1)
    ### Compute masses
    ret['minMllAFAS'] = minMllTL(lepsl, lepsl)
    ### At GEN level we have the pdgID to know the charge of a particle...
    ret['minMllAFOS'] = minMllTL(lepsl, lepsl, paircut = lambda l1,l2 : (l1.pdgId < 0 and  l2.pdgId > 0) or (l1.pdgId > 0 and l2.pdgId < 0) )
    ret['minMllAFSS'] = minMllTL(lepsl, lepsl, paircut = lambda l1,l2 : (l1.pdgId < 0 and  l2.pdgId < 0) or (l1.pdgId > 0 and l2.pdgId > 0) )
    ret['minMllSFOS'] = minMllTL(lepsl, lepsl, paircut = lambda l1,l2 : l1.pdgId  == -l2.pdgId)

    ## Clean jets with loose leptons
    jetret     = {}
    discjetret = {}
    cleanjets = self.recleanJets(jetcollcleaned = jets,
                                 jetcolldiscarded = jetsd,
                                 lepcoll = lepsl, 
                                 postfix = "",
                                 ret = retwlabel,
                                 jetret = jetret,
                                 discjetret = discjetret)
    ## Obtain tight leptons
    ret, lepst, lepstv = self.fillCollWithVeto(ret, 
                                              refcollection = leps,
                                              leps = lepsl,
                                              lab = 'T',
                                              labext = 'Tight',
                                              selection = self.tightLeptonSel,
                                              lepsforveto = lepsl, 
                                              ht = 1, 
                                              sortby = lambda x: x.pt)
    ### Attach labels and return
    ret["nLepDressed"]   = len(leps)
    for lfloat in "pt eta phi mass pdgId hasTauAnc".split():
      ret["LepDressed_%s"%lfloat] = [getattr(lep, lfloat) for lep in leps]
    ret.update(retwlabel)
    for k,v in jetret.iteritems():
      ret["JetSel%s_%s"%("",k)] = v

    return ret 

  def sortIndexListByFunction(self, indexlist, parentcollection, func):
    if not func: return indexlist[:]
    newsort = sorted([(ij,parentcollection[ij]) for ij in indexlist], key = lambda x: func(x[1]), reverse=True)
    return [x[0] for x in newsort]

  def analyze(self, event):
    ''' Main method '''
    ret = {}
    ## -- First, collect object collections -- #
    self.collectObjects(event)       
    ret = self.analyzeTopology(ret, event)

    ### Write the output
    writeOutput(self, ret)
    return True   
       

if  __name__ == '__main__':
  pass        
