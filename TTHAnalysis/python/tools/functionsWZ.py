#######################################
########## Common functions ###########
#######################################

#For loose leptons
def _lepId_IPcuts(lep):
    if not (lep.sip3d<8): return False
    if not (abs(lep.dxy)<0.05): return False
    if not (abs(lep.dz)<0.1): return False
    return True

#For FO leptons
def conept(lep):
    if (abs(lep.pdgId)!=11 and abs(lep.pdgId)!=13): return lep.pt
    if (abs(lep.pdgId)!=13 or lep.mediumId>0) and lep.mvaTTH > 0.90: return lep.pt
    else: return 0.90 * lep.pt * (1 + lep.jetRelIso)

###########################
########## 2016 ###########
###########################

def _looseID_ExtraCuts_2016(lep):
    if abs(lep.pdgId) == 13:
        if lep.pt <= 5: return False
        return True
    elif abs(lep.pdgId) == 11:
        if lep.pt <= 7: return False
        if ord(lep.lostHits) > 1: return False
        if not ( ((lep.mvaFall17V2noIso > 0.0 - 0.0 * (abs(lep.eta) > 0.8) + 0.7 * (abs(lep.eta) > 1.479)))): return False
        return True
    return False

def _FOID_2016(lep, jetlist):
    if not _looseID_ExtraCuts_2017(lep): return False
    if not _lepId_IPcuts(lep): return False
    if not((abs(lep.pdgId) == 11 and  _elidEmu_cuts_2017(lep) and lep.convVeto) or (abs(lep.pdgId) == 13 and (lep.segmentComp > 0.3 or lep.mvaTTH > 0.90))): return False  

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
    if not( (lep.mvaTTH > 0.90 and jetbTag < 0.8484 and lep.tightCharge and (abs(lep.pdgId)==11 or (lep.mediumId>0))) or (jetPtRatio > 0.5 and jetbTag < 0.3 and ( (abs(lep.pdgId)==11 and  (lep.mvaFall17V2noIso > 0.0+0.7*(abs(lep.eta)>1.479)  )) or (abs(lep.pdgId)==13 and  lep.segmentComp > 0.3)) )): return False

    return True

def _elidEmu_cuts_2016(lep):
    if (abs(lep.pdgId)!=11): return True
    if (lep.hoe>=(0.010-0.003*(abs(lep.eta)>1.479))): return False
    if (lep.eInvMinusPInv<=(-0.05) or  lep.eInvMinusPInv > (0.10 - 0.05*(abs(lep.pdgId)>1.479))): return False
    if (lep.sieie>=(0.011+0.019*(abs(lep.eta)>1.479))): return False
    if (ord(lep.lostHits) > 0): return False 
    return True

def _Tight_2016(lep, jetlist):
    if not _looseID_ExtraCuts_2016(lep): return False
    if not _lepId_IPcuts(lep): return False
    if not((abs(lep.pdgId) == 11 and  _elidEmu_cuts_2016(lep) and lep.convVeto) or (abs(lep.pdgId) == 13 and (lep.segmentComp > 0.3 or lep.mvaTTH > 0.90))): return False  

    #Needs Matching to closest jet around here, the links in nanoAOD are broken
    dR = 200000
    jetbTag    = -1.
    for j in jetlist[0]:
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag    = j.btagCSVV2
    if not( (lep.mvaTTH > 0.90 and jetbTag < 0.8484) and (abs(lep.pdgId)==11 or lep.mediumId>0)): return False 
    return True

###########################
########## 2017 ###########
###########################

def _looseID_ExtraCuts_2017(lep):
    if abs(lep.pdgId) == 13:
        if lep.pt <= 5: return False
        return True
    elif abs(lep.pdgId) == 11:
        if lep.pt <= 7: return False
        if ord(lep.lostHits) > 1: return False
        if not ( ((lep.mvaFall17V2noIso > -0.13 -0.19 * (abs(lep.eta) > 0.8) + 0.24 * (abs(lep.eta) > 1.479)) and  lep.pt < 10) or ((lep.mvaFall17V2noIso > -0.86 + 0.05 * (abs(lep.eta) > 0.8) + 0.09 * (abs(lep.eta) > 1.479)) and  lep.pt > 10)): return False
        return True
    return False

def _FOID_2017(lep, jetlist):
    if not _looseID_ExtraCuts_2017(lep): return False
    if not _lepId_IPcuts(lep): return False
    if not((abs(lep.pdgId) == 11 and  _elidEmu_cuts_2017(lep) and lep.convVeto) or (abs(lep.pdgId) == 13 and (lep.segmentComp > 0.3 or lep.mvaTTH > 0.90))): return False  

    #Needs Matching to closest jet around here, not saved at nanoAOD level
    dR = 200000
    jetbTag    = -1.
    jetPtRatio = 1./((1 + lep.jetRelIso)) 
    for j in jetlist[0]:
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag    = j.btagDeepB
            jetPtRatio = lep.pt/(j.pt)
    if not( (lep.mvaTTH > 0.90 and jetbTag < 0.4941 and (abs(lep.pdgId)==11 or lep.mediumId>0)) or (jetPtRatio > 0.6 and jetbTag < 0.07 and ( (abs(lep.pdgId)==11 and  lep.mvaFall17V2noIso > 0.5) or (abs(lep.pdgId)==13 and  lep.segmentComp > 0.3)) )): return False 
    return True

def _elidEmu_cuts_2017(lep):
    if (abs(lep.pdgId)!=11): return True
    if (lep.hoe>=(0.10)): return False
    if (lep.eInvMinusPInv<=-0.04): return False
    if (lep.sieie>=(0.011+0.019*(abs(lep.eta)>1.479))): return False
    if (ord(lep.lostHits) > 0): return False 
    return True

def _Tight_2017(lep, jetlist):
    if not _looseID_ExtraCuts_2017(lep): return False
    if not _lepId_IPcuts(lep): return False
    if not((abs(lep.pdgId) == 11 and  _elidEmu_cuts_2017(lep) and lep.convVeto) or (abs(lep.pdgId) == 13 and (lep.segmentComp > 0.3 or lep.mvaTTH > 0.90))): return False  

    #Needs Matching to closest jet around here, the links in nanoAOD are broken
    dR = 200000
    jetbTag    = -1.
    for j in jetlist[0]:
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag    = j.btagDeepB
    if not( (lep.mvaTTH > 0.90 and jetbTag < 0.4941) and (abs(lep.pdgId)==11 or lep.mediumId>0)): return False 
    return True

###########################
########## 2018 ###########
###########################

def _looseID_ExtraCuts_2018(lep):
    if abs(lep.pdgId) == 13:
        if lep.pt <= 5: return False
        return True
    elif abs(lep.pdgId) == 11:
        if lep.pt <= 7: return False
        if ord(lep.lostHits) > 1: return False
        if not ( ((lep.mvaFall17V2noIso > -0.13 -0.19 * (abs(lep.eta) > 0.8) + 0.24 * (abs(lep.eta) > 1.479)) and  lep.pt < 10) or ((lep.mvaFall17V2noIso > -0.86 + 0.05 * (abs(lep.eta) > 0.8) + 0.09 * (abs(lep.eta) > 1.479)) and  lep.pt > 10)): return False
        return True
    return False

def _FOID_2018(lep, jetlist):
    if not _looseID_ExtraCuts_2017(lep): return False
    if not _lepId_IPcuts(lep): return False
    if not((abs(lep.pdgId) == 11 and  _elidEmu_cuts_2018(lep) and lep.convVeto) or (abs(lep.pdgId) == 13 and (lep.segmentComp > 0.3 or lep.mvaTTH > 0.90))): return False  

    #Needs Matching to closest jet around here, not saved at nanoAOD level
    dR = 200000
    jetbTag    = -1.
    jetPtRatio = 1./((1 + lep.jetRelIso)) 
    for j in jetlist[0]:
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag    = j.btagDeepB
            jetPtRatio = lep.pt/(j.pt)
    if not( (lep.mvaTTH > 0.90 and jetbTag < 0.4941 and (abs(lep.pdgId)==11 or lep.mediumId>0)) or (jetPtRatio > 0.6 and jetbTag < 0.07 and ( (abs(lep.pdgId)==11 and  lep.mvaFall17V2noIso > 0.5) or (abs(lep.pdgId)==13 and  lep.segmentComp > 0.3)) )): return False 
    return True

def _elidEmu_cuts_2018(lep):
    if (abs(lep.pdgId)!=11): return True
    if (lep.hoe>=(0.10)): return False
    if (lep.eInvMinusPInv<=-0.04): return False
    if (lep.sieie>=(0.011+0.019*(abs(lep.eta)>1.479))): return False
    if (ord(lep.lostHits) > 0): return False 
    return True

def _Tight_2018(lep, jetlist):
    if not _looseID_ExtraCuts_2018(lep): return False
    if not _lepId_IPcuts(lep): return False
    if not((abs(lep.pdgId) == 11 and  _elidEmu_cuts_2018(lep) and lep.convVeto) or (abs(lep.pdgId) == 13 and (lep.segmentComp > 0.3 or lep.mvaTTH > 0.90))): return False  

    #Needs Matching to closest jet around here, the links in nanoAOD are broken
    dR = 200000
    jetbTag    = -1.
    for j in jetlist[0]:
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag    = j.btagDeepB
    if not( (lep.mvaTTH > 0.90 and jetbTag < 0.4941) and (abs(lep.pdgId)==11 or lep.mediumId>0)): return False 
    return True


###############################################################################################################################
def _tauId_CBloose(tau):
    return (tau.pt > 20 and abs(tau.eta)<2.3 and abs(tau.dxy)<1000 and abs(tau.dz)<0.2 and (ord(tau.idMVAoldDMdR032017v2) & 2)) 

def _tauId_CBtight(tau):
    if not _tauId_CBloose(tau): return False
    return (ord(tau.idMVAoldDMdR032017v2) & 16) and (ord(tau.idAntiMu) & 1) and (ord(tau.idAntiEle) & 2)

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
