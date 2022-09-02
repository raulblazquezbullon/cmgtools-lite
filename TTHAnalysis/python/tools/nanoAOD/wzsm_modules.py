'''
Modules used for the WZ-Run3 Analysis.
'''

import os
import ROOT 


# ---------------------------------------------------- LEPTON MERGER+SKIM  ---------------------------------------------------- # 
### Lepton definitions 

# ** Muons ** #
min_mu_pt = 0.5
max_mu_eta = 2.4

# ** Electrons ** # 
min_el_pt = 5
max_el_eta = 2.5

# ** Both ** #
relIso = 0.4
dxy = 0.05
dz = 0.1
sip3d = 8


### Lambda selectors
isoAndIPCuts = lambda  l : l.miniPFRelIso_all < relIso  and abs(l.dxy) < dxy and abs(l.dz) < dz and l.sip3d < sip3d 
muonSelection = lambda l : ((abs(l.eta) < max_mu_eta)
                             and (l.pt > min_mu_pt)
                             and isoAndIPCuts(l)
                             and l.looseId)
elecSelection = lambda l : (( abs(l.eta) < max_el_eta)
                              and (l.pt > min_mu_pt)
                              and isoAndIPCuts(l)
                              and l.lostHits < 2)

from PhysicsTools.NanoAODTools.postprocessing.modules.common.collectionMerger import collectionMerger
lepMerge = collectionMerger(input = ["Electron", "Muon"],
                            output = "LepGood",
                            selector = dict(Muon = muonSelection, Electron = elecSelection))

### Skim configuration
from CMGTools.TTHAnalysis.tools.nanoAOD.skimNRecoLeps import SkimRecoLeps

lepSkim = SkimRecoLeps()
wz_seq1 = [lepMerge, lepSkim]

# ------------------------ #
#     TRIGGER GROUPS       #
# ------------------------ #
 
def _fires(ev, path):
    ''' This function checks if an event has fired a given HLT path by looking at a dictionary '''
    # VERY IMPORTANT: 
    # * THE HASFIRED DICTIONARY IS NOT PREPARED FOR RUN3 SO WE WILL HAVE TO BE CAREFUL
    # * Probably it's better not to use it yet...

    if "/hasfiredtriggers_cc.so" not in ROOT.gSystem.GetLibraries():
        ROOT.gROOT.ProcessLine(".L %s/src/CMGTools/Production/src/hasfiredtriggers.cc+O" % os.environ['CMSSW_BASE'])
    if not hasattr(ev,path): return False 
    if ev.run == 1:  # is MC
        return getattr( ev,path ) 
    return getattr(ROOT, 'fires_%s_%d'%(path, ev.year))( ev.run, getattr(ev,path))

import triggers_13p6TeV_DATA2022 as triggers2022

### Keywords to designate different groups of trigger paths 
triggerlist = [ "triggers_mumu_iso", "triggers_mumu_noniso", "triggers_mumu_ss", "triggers_mumu", "triggers_mumu_ht",# DIMUON
                "triggers_ee", "triggers_ee_noniso", "triggers_ee_ht",   # DIELECTRON
                "triggers_mue", "triggers_mue_noiso", "triggers_mue_ht", # SEMILEPTONIC (MUON + ELECTRON)
                "triggers_3e", # TRIELECTRON
                "triggers_3mu", "triggers_3mu_alt", # TRIMUON 
                "triggers_2mu1e", "triggers_2e1mu", # MIXED
                "triggers_1mu_iso", "triggers_1mu_noniso", # SINGLE MUON 
                "triggers_1e_iso", "triggers_1e_noniso", # SINGLE ELECTRON
                "triggers_FR_1mu_noiso",  "triggers_FR_1mu_iso", # QCD?
"triggers_FR_1mu_noiso_highpt", "triggers_FR_1e_noiso", "triggers_FR_1e_iso", "triggers_pfht1050", "triggers_pfht800_mass50", "triggers_pfjet500", 
"triggers_pfjet400_mass30", "triggers_mutau", "triggers_etau", "triggers_leptau", "triggers_htmet", "triggers_metNoMu100_mhtNoMu100", "triggers_met", "triggers_pfht"
]

### Dictionary to use in CMGTools modules
triggerGroups_dict = { trig : {2022 : eval("triggers2022.%s"%trig)} for trig in triggerlist }

### triggerGroups is a dictionary computed in a per-event basis:
#   it contains the information of which triggers have been fired
#   by a given event. It's basically a bunch of lambda functions
#   consisting of several OR concatenations. It makes use of the 
#   _fires function defined above.

triggerGroups = {}
for trig in triggerlist:
  for year in triggerGroups_dict[trig]:
    funcs = ["_fires(ev, %s)"%path for path in triggerGroups_dict[trig][year]]
    triggerGroups[trig] = {'2022' : lambda ev : " or ".join(funcs)}

# ---------------------------------------------------- LEPTON RECLEANER  ---------------------------------------------------- # 
### To be implemented
if __name__ == "__main__":
  pass
