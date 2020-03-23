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
    if not(lep.mvaTTH >= 0.4) and (abs(lep.pdgId) == 11): return 0.85*lep.pt* (1 + lep.jetRelIso)
    if not(lep.mvaTTH >= 0.4 and lep.mediumId) and (abs(lep.pdgId) == 13): return 0.65*lep.pt* (1 + lep.jetRelIso)
    else: return lep.pt



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

def _fO_muon_16(lep, btagWPM, btagWPL,jetlist):
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
    ptcone = max(min(conept(lep),50),10)
    if (lep.mvaTTH > 0.4): return True
    elif (1./(1 + lep.jetRelIso) < 0.35): return False
    elif (jetbTag > (btagWPL/1.5 + (ptcone - 10.)/40.*(btagWPL/5. - btagWPL/1.5)) ): return False
    return True

def _fO_muon_17(lep, btagWPM, btagWPL,jetlist):
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
    ptcone = max(min(conept(lep),50),10)
    if (lep.mvaTTH > 0.4): return True
    elif (1./(1 + lep.jetRelIso) < 0.35): return False
    elif (jetbTag > (btagWPM/2. + (ptcone - 10.)/40.*(btagWPL/5. - btagWPM/2.)) ): return False
    return True

def _fO_muon_18(lep, btagWPM, btagWPL,jetlist):
    return _fO_muon_17(lep, btagWPM, btagWPL,jetlist)


def _tight_muon(lep, btagWPM, btagWPL,jetlist):
    if not _fO_muon_16(lep,btagWPM,btagWPL,jetlist): return False #Just don't care about years differences here, it gets cleaned by the mva cut anyway
    if not (lep.mvaTTH > 0.4): return False
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

def _fO_electron_16(lep, btagWPT,jetlist):
    if lep.pt < 10: return False
    if not _loose_electron(lep): return False
    if not ((lep.mvaFall17V2noIso_WPL and lep.mvaTTH > 0.40) or lep.mvaFall17V2noIso_WP90): return False
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
    ptcone = max(min(conept(lep),50),10)
    if (lep.mvaTTH > 0.40): return True
    elif (1./(1 + lep.jetRelIso) < 0.7): return False
    elif (jetbTag > btagWPT): return False
    return True

def _fO_electron_17(lep, btagWPT,jetlist):
    return _fO_electron_16(lep, btagWPT,jetlist)


def _fO_electron_18(lep, btagWPT,jetlist):
    if lep.pt < 10: return False
    if not _loose_electron(lep): return False
    if not ((lep.mvaFall17V2noIso_WPL and lep.mvaTTH > 0.40) or lep.mvaFall17V2noIso_WP90): return False
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
    ptcone = max(min(conept(lep),50),10)
    if (lep.mvaTTH > 0.40): return True
    elif (1./(1 + lep.jetRelIso) < 0.6): return False
    elif (jetbTag > btagWPT): return False
    return True

def _tight_electron(lep, btagWPT,jetlist):
    if not _fO_electron_16(lep,btagWPT,jetlist): return False
    if not (lep.mvaTTH > 0.4): return False
    return True


def _loose_lepton(lep, btagWPT, btagWPM, btagWPL):
    return _loose_muon(lep) if abs(lep.pdgId) == 13 else _loose_electron(lep)

def _fO_lepton(lep, btagWPT, btagWPM, btagWPL,jetlist, year):
    if year == 2016: return _fO_muon_16(lep,btagWPM,btagWPL,jetlist) if abs(lep.pdgId) == 13 else _fO_electron_16(lep,btagWPT,jetlist)
    if year == 2017: return _fO_muon_17(lep,btagWPM,btagWPL,jetlist) if abs(lep.pdgId) == 13 else _fO_electron_17(lep,btagWPT,jetlist)
    if year == 2018: return _fO_muon_18(lep,btagWPM,btagWPL,jetlist) if abs(lep.pdgId) == 13 else _fO_electron_18(lep,btagWPT,jetlist)

def _tight_lepton(lep, btagWPT, btagWPM, btagWPL,jetlist):
    return _tight_muon(lep,btagWPM,btagWPL,jetlist) if abs(lep.pdgId) == 13 else _tight_electron(lep,btagWPM,jetlist)

