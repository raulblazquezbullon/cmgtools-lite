# -- Utilities
import math
def deltaR(eta1, phi1, eta2, phi2):
        dEta = abs(eta1-eta2)
        dPhi = deltaPhi(phi1, phi2)
        return math.sqrt(dEta*dEta + dPhi*dPhi)

def deltaPhi(phi1, phi2):
        res = phi1 - phi2
        while res >     math.pi: res -= 2*math.pi
        while res <= -math.pi: res += 2*math.pi
        return res

def conept(lep):
        if (abs(lep.pdgId)!=11 and abs(lep.pdgId)!=13): return lep.pt
        if (abs(lep.pdgId)!=13 or lep.mediumId>0) and lep.mvaTTH_run3 > 0.90: return lep.pt
        else: return 0.90 * lep.pt * (1 + lep.jetRelIso)

def closest_b(lep, jetlist):
    dR = 200000
    jetbTag = -1.
    for j in jetlist: 
        testR = deltaR(lep.eta, lep.phi, j.eta, j.phi)
        if testR < dR:
            dR = testR
            jetbTag = j.btagDeepFlavB
    return jetbTag

# ==== Looose definitions ==== #
def _loose_muon(lep):
    """ Muon loose ID criteria    """
    # Common selections
    if         lep.pt < 5: return False
    if not (abs(lep.eta)<2.4): return False
    if not (lep.sip3d<8): return False
    if not (abs(lep.dxy)<0.05): return False
    if not (abs(lep.dz)<0.1): return False
    if not (lep.miniPFRelIso_all < 0.4): return False
    if not (lep.looseId): return False
    return True

def _loose_electron(lep):
    """ Electron loose ID criteria """
    if         lep.pt < 7: return False
    if not (abs(lep.eta)<2.5): return False
    if not (lep.sip3d<8): return False
    if not (abs(lep.dxy)<0.05): return False
    if not (abs(lep.dz)<0.1): return False
    if not (lep.miniPFRelIso_all < 0.4): return False
    if not (lep.cutBased >= 2): return False
    if         (lep.lostHits): return False
    return True

# ==== Fakeable definitions ==== #
def _fO_muon(lep, btagWPM, btagWPL, jetlist, selector):
    """ 
        Fakeable muon ID criteria
        -------------------------
    Fakeable muons need to pass minimum selection criteria, and then they are
    required to either:
     1. Pass the tight MVA working point
     2. Not pass the tight MVA working point, but satisfy certain ISO requirements.
    """
    
    # ---- Common selection criteria ---- #
    # + At least loose ID    
    if not _loose_muon(lep): return False

    # + Minimum kinematics
    if lep.pt < 10: return False
 
    # + Get the WP of the nearest jet in the \eta-\phi plane
    jetbTag = closest_b(lep, jetlist)

    
    # + Selector IDs: to select prompt leptons
    passSelector = False
    if selector == "mva":
        passSelector = (lep.mvaTTH_run3 > 0.85)
    elif selector == "cutbased":
        # In this case we don't have an MVA, so ask also for ISO
        passSelector = (lep.tightId and lep.pfRelIso04_all < 0.15)
    
    # + Cone pT is used for considering fakeable selections
    ptcone = max(min(conept(lep), 40),20)
    
    
    if passSelector:
        # This is a possible fakeable muon that passes tight MVA 
        return True 
    
    # Now consider the case where the muon does not pass tight MVA
    # + Jet relative isolation (the less the more isolated)
    elif (lep.jetRelIso > 0.5): 
        return False 
    # + Interpolated WP of the b jet
    elif (jetbTag > (btagWPM + (ptcone - 20.)/20.*(btagWPL - btagWPM)) ): 
        return False
    
    return True

def _fO_electron(lep, btagWPM, jetlist, selector):
    """ Fakeable electron ID criteria """
    # ---- Common selection criteria ---- #
    # + At least loose ID     
    if not _loose_electron(lep): return False
    
    # + Minimum kinematics
    if lep.pt < 10: return False
    
    # ID criteria
    if (lep.lostHits): return False
    if (lep.hoe >= 0.10): return False
    if (lep.eInvMinusPInv <= (-0.04)): return False
    if (lep.sieie >= (0.011+0.019*( abs(lep.eta) > 1.479 ))): return False
    if not(lep.convVeto): return False

    # -- Better not to use MVAs at the beginning of Run3
    if not (lep.cutBased == 2 or lep.cutBased == 4): return False
    #if not ((lep.mvaNoIso_WPL and lep.cutBased == 4) or lep.mvaNoIso_WP80): return False
    
    # + Get the closest b tag in the \eta-\phi plane
    jetbTag = closest_b(lep, jetlist)
    
    # + Selector IDs: to select prompt leptons
    passSelector = False
    if selector == "mva":
        passSelector = (lep.mvaTTH_run3 > 0.80)
    elif selector == "cutbased":
        # In this case we don't have an MVA, so ask also for ISO
        passSelector = (lep.cutBased == 4)

    if passSelector:
        # This is a possible fakeable electron that passes tight MVA 
        return True 
    
    # + Jet relative isolation (the less the more isolated)
    elif (lep.jetRelIso > 0.7): 
        return False
    
    # + WP of the b jet
    elif (jetbTag > btagWPM): 
        return False
    return True

# ==== Tight definitions ==== #
def _tight_electron(lep, btagWPM, jetlist, selector):
    """ Tight electron criteria """
    if not _fO_electron(lep, btagWPM, jetlist, selector): return False
    
    # Tight electrons must pass mva requirements
    passSelector = False
    if selector == "mva":
        passSelector = (lep.mvaTTH_run3 > 0.80)
    elif selector == "cutbased":
        passSelector = (lep.cutBased == 4)    
        
    if not passSelector: return False
    return True

def _tight_muon(lep, btagWPM, btagWPL,jetlist, selector):
    """ Tight muon criteria """
    if not _fO_muon(lep,btagWPM,btagWPL,jetlist, selector): return False
    
    # Tight muons must pass mva requirements
    passSelector = False
    if selector == "mva":
        passSelector = (lep.mvaTTH_run3 > 0.85)
    elif selector == "cutbased":
        passSelector = (lep.tightId and lep.pfRelIso04_all < 0.15)
    
    if not passSelector: return False 
    if not (lep.mediumId): return False
    return True

# ==== Helper functions ==== #
def _loose_lepton(lep, btagWPM, btagWPL):
    """ Function called by the CMGTools modules """
    return _loose_muon(lep) if abs(lep.pdgId) == 13 else _loose_electron(lep)

def _fO_lepton(lep, btagWPM, btagWPL, jetlist, selector = "mva"):
    """ Function called from the CMGTools modules """
    if selector not in ["mva", "cutbased"]:
        raise RuntimeError("Wrong selector. Please choose either mva (to apply retrain TTH mva) or cutbased.")
    return _fO_muon(lep, btagWPM, btagWPL, jetlist, selector) if abs(lep.pdgId) == 13 else _fO_electron(lep, btagWPM, jetlist, selector)

def _tight_lepton(lep, btagWPM, btagWPL, jetlist, selector = "mva"):
    """ Function called by the CMGTools modules """
    if selector not in ["mva", "cutbased"]:
        raise RuntimeError("Wrong selector. Please choose either mva (to apply retrain TTH mva) or cutbased.")
    return _tight_muon(lep, btagWPM, btagWPL, jetlist, selector) if abs(lep.pdgId) == 13 else _tight_electron(lep, btagWPM, jetlist, selector)






