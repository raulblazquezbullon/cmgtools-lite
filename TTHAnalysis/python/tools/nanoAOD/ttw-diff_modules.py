'''
Modules used for the ttW differential analysis
'''

import os
import ROOT

# -- There's just one module to identify GEN objects and perform a basic analysis -- #
from leptonJetMCidentifier import LeptonJetMCidentifier
import math

loose_lepton = lambda l: l.pt > 15 and abs(l.eta) < 2.5
jet_sel      = lambda j: j.pt > 25 and abs(j.eta) < 2.5

def deltaR(eta1, phi1, eta2, phi2):
    dEta = abs(eta1-eta2)
    dPhi = deltaPhi(phi1, phi2)
    return math.sqrt(dEta*dEta + dPhi*dPhi)

def deltaPhi(phi1, phi2):
    res = phi1 - phi2
    while res >   math.pi: res -= 2*math.pi
    while res <= -math.pi: res += 2*math.pi
    return res


def tight_lepton(lep, jetlist):
  if lep.pt < 25: return False
  if not loose_lepton(lep): return False
  if lep.hasTauAnc: return False
  return True

cleanJet     = lambda lep, jet, dr : dr < 0.4 
leptonJetID = [ lambda : LeptonJetMCidentifier(loose_lepton, jet_sel, cleanJet, 25, tight_lepton)]


