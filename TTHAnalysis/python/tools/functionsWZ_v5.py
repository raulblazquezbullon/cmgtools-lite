#Utilities
import math
def deltaR(eta1, phi1, eta2, phi2):
    dEta = abs(eta1-eta2)
    dPhi = deltaPhi(phi1, phi2)
    return math.sqrt(dEta*dEta + dPhi*dPhi)

def deltaPhi(phi1, phi2):
    res = phi1 - phi2
    while res >   math.pi: res -= 2*math.pi
    while res <= -math.pi: res += 2*math.pi
    return res

def conept(lep):
    if (abs(lep.pdgId)!=11 and abs(lep.pdgId)!=13): return lep.pt
    if (abs(lep.pdgId)!=13 or lep.mediumId>0) and lep.mvaTTH > 0.90: return lep.pt
    else: return 0.90 * lep.pt * (1 + lep.jetRelIso)



#######################################
########## Common functions ###########

def _loose_muon(lep):
    if lep.pt < 5: return False
    if not (abs(lep.eta)<2.4): return False
    if not (lep.sip3d<8): return False
    if not (abs(lep.dxy)<0.05): return False
    if not (abs(lep.dz)<0.1): return False
    if not (lep.miniPFRelIso_all < 0.4): return False
    if not (lep.looseId): return False
    return True

def _fO_muon(lep, btagWPM, btagWPL,jetlist):
    if lep.pt < 10: return False
    if not _loose_muon(lep): return False
    #Jet matching
    dR = 200000
    jetbTag    = -1.
    for j in jetlist[0]:
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag    = j.btagDeepFlavB
    ptcone = max(min(conept(lep),40),20)
    if (lep.mvaTTH > 0.85): return True
    elif (lep.jetRelIso > 0.5): return False
    elif (jetbTag > (btagWPM + (ptcone - 20.)/20.*(btagWPL - btagWPM)) ): return False
    return True


def _tight_muon(lep, btagWPM, btagWPL,jetlist):
    if not _fO_muon(lep,btagWPM,btagWPL,jetlist): return False
    if not (lep.mvaTTH > 0.85): return False
    if not (lep.mediumId): return False
    return True


def _loose_electron(lep):
    if lep.pt < 7: return False
    if not (abs(lep.eta)<2.5): return False
    if not (lep.sip3d<8): return False
    if not (abs(lep.dxy)<0.05): return False
    if not (abs(lep.dz)<0.1): return False
    if not (lep.miniPFRelIso_all < 0.4): return False
    if not (lep.mvaFall17V2noIso_WPL): return False
    if (ord(lep.lostHits) > 1): return False
    return True

def _fO_electron(lep, btagWPM,jetlist):
    if lep.pt < 10: return False
    if not _loose_electron(lep): return False
    if not ((lep.mvaFall17V2noIso_WPL and lep.mvaTTH > 0.80) or lep.mvaFall17V2noIso_WP80): return False
    if (ord(lep.lostHits) > 0): return False
    if (lep.hoe>=0.10): return False
    if (lep.eInvMinusPInv<=(-0.04)): return False
    if (lep.sieie>=(0.011+0.019*(abs(lep.eta)>1.479))): return False
    if not(lep.convVeto): return False
    #Jet matching
    dR = 200000
    jetbTag    = -1.
    for j in jetlist[0]:
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag    = j.btagDeepFlavB
    ptcone = max(min(conept(lep),40),20)
    if (lep.mvaTTH > 0.80): return True
    elif (lep.jetRelIso > 0.7): return False
    elif (jetbTag > btagWPM): return False
    return True

def _tight_electron(lep, btagWPM,jetlist):
    if not _fO_electron(lep,btagWPM,jetlist): return False
    if not (lep.mvaTTH > 0.8): return False
    return True


def _loose_lepton(lep, btagWPM, btagWPL):
    return _loose_muon(lep) if abs(lep.pdgId) == 13 else _loose_electron(lep)

def _fO_lepton(lep, btagWPM, btagWPL,jetlist):
    return _fO_muon(lep,btagWPM,btagWPL,jetlist) if abs(lep.pdgId) == 13 else _fO_electron(lep,btagWPM,jetlist)

def _tight_lepton(lep, btagWPM, btagWPL,jetlist):
    return _tight_muon(lep,btagWPM,btagWPL,jetlist) if abs(lep.pdgId) == 13 else _tight_electron(lep,btagWPM,jetlist)
