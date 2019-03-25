#Loose light lepton definition
def _susyEWK_lepId_CBloose(lep):
    if abs(lep.pdgId) == 13:
        if lep.pt <= 5: return False
        return True
    elif abs(lep.pdgId) == 11:
        if lep.pt <= 7: return False
        if not (lep.lostHits <= 1): 
            return False
        if not ( ((lep.mvaFall17V2noIso > -0.13 -0.19 * (abs(lep.eta) > 0.8) + 0.24 * (abs(lep.eta) > 1.479)) and  lep.pt < 10) or ((lep.mvaFall17V2noIso > -0.86 + 0.05 * (abs(lep.eta) > 0.8) + 0.09 * (abs(lep.eta) > 1.479)) and  lep.pt > 10)):
            return False
        return True
    return False

def _susyEWK_lepId_IPcuts(lep):
    if not (lep.sip3d<8): return False
    if not (abs(lep.dxy)<0.05): return False
    if not (abs(lep.dz)<0.1): return False
    return True

#For FO leptons, need conePt def + ID
def conept(lep):
    if (abs(lep.pdgId)!=11 and abs(lep.pdgId)!=13): return lep.pt
    if (abs(lep.pdgId)!=13 or lep.mediumId>0) and lep.mvaTTH > 0.90: return lep.pt
    else: return 0.90 * lep.pt * (1 + lep.jetRelIso)

def _susyEWK_lepId_MVAFO(lep, jetlist):
    if not _susyEWK_lepId_CBloose(lep): return False
    if not _susyEWK_lepId_IPcuts(lep): return False
    if not((abs(lep.pdgId) == 11 and  _susyEWK_idEmu_cuts(lep) and lep.convVeto) or (abs(lep.pdgId) == 13 and (lep.segmentComp > 0.3 or lep.mvaTTH > 0.90))): return False  

    #Needs Matching to closest jet around here, not saved at nanoAOD level
    dR = 200000
    jetbTag    = -1.
    jetPtRatio = 1./((1 + lep.jetRelIso)) 
    for j in jetlist[0]:
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag    = j.btagCSVV2
            jetPtRatio = lep.pt/(j.pt)
    if not( (lep.mvaTTH > 0.90 and jetbTag < 0.4941) or (jetPtRatio > 0.6 and jetbTag < 0.07 and ( (abs(lep.pdgId)==11 and  lep.mvaFall17V2noIso > 0.5) or (abs(lep.pdgId)==13 and  lep.segmentComp > 0.3)) )): return False 
    return True

def _susyEWK_idEmu_cuts(lep):
    if (abs(lep.pdgId)!=11): return True
    if (lep.hoe>=(0.10)): return False
    if (lep.eInvMinusPInv<=-0.04): return False
    if (lep.sigmaIEtaIEta>=(0.011+0.019*(abs(lep.eta)>1.479))): return False
    if (lep.lostHits > 0): return False 
    return True

#Last, the tight objects
def _susyEWK_lepId_MVATTH(lep, jetlist):
    if not _susyEWK_lepId_CBloose(lep): return False
    if not _susyEWK_lepId_IPcuts(lep): return False
    if not((abs(lep.pdgId) == 11 and  _susyEWK_idEmu_cuts(lep) and lep.convVeto) or (abs(lep.pdgId) == 13 and (lep.segmentComp > 0.3 or lep.mvaTTH > 0.90))): return False  

    #Needs Matching to closest jet around here, not saved at nanoAOD level
    dR = 200000
    jetbTag    = -1.
    jetPtRatio = 1./((1 + lep.jetRelIso)) 
    for j in jetlist[0]:
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag    = j.btagCSVV2
            jetPtRatio = lep.pt/(j.pt)
    if not( (lep.mvaTTH > 0.90 and jetbTag < 0.4941) and (abs(lep.pdgId)==11 or lep.mediumId>0)): return False 
    return True

#Also the tau IDs, TODO::Now using ttH's, update it with news from Liam whenever they are ready

def _susyEWK_tauId_CBloose(tau):
    return (tau.pt > 20 and abs(tau.eta)<2.3 and abs(tau.dxy)<1000 and abs(tau.dz)<0.2 and (ord(tau.idMVAoldDMdR032017v2) & 2))

def _susyEWK_tauId_CBtight(tau):
    if not _susyEWK_tauId_CBloose(tau): return False
    return (ord(tau.idMVAoldDMdR032017v2) & 8) 

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

