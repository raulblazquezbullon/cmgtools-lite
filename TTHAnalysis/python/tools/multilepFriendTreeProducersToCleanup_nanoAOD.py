import os
utility_files_dir = os.path.join(os.environ["CMSSW_BASE"], "src/CMGTools/TTHAnalysis/data/")

MODULES = []

from CMGTools.TTHAnalysis.tools.leptonJetReCleaner import LeptonJetReCleaner
from CMGTools.TTHAnalysis.tools.functionsEWKino_nano import _susyEWK_lepId_CBloose, _susyEWK_lepId_IPcuts, conept, _susyEWK_lepId_MVAFO, _susyEWK_lepId_MVATTH,_susyEWK_tauId_CBloose, _susyEWK_tauId_CBtight

MODULES.append( ('leptonJetReCleanerSusyEWK3L_nanoAOD', lambda : LeptonJetReCleaner("Mini", 
                   lambda lep : lep.miniPFRelIso_all < 0.4 and _susyEWK_lepId_CBloose(lep) and _susyEWK_lepId_IPcuts(lep), #Loose selection 
                   lambda lep,jetlist: lep.pt>5 and conept(lep)>5 and (_susyEWK_lepId_MVAFO(lep, jetlist)), #We clean on the FO
                   lambda lep,jetlist: lep.pt>5 and conept(lep)>5 and (_susyEWK_lepId_MVAFO(lep, jetlist)), #FO selection
                   lambda lep,jetlist: lep.pt>5 and conept(lep)>5 and (_susyEWK_lepId_MVATTH(lep,jetlist)), #Tight selection
                   cleanJet = lambda lep,jet,dr : dr<0.4,
                   selectJet = lambda jet: abs(jet.eta)<2.4 and (jet.jetId & 2), #Jet ID tight as it is already very efficient (>=98%), Take second bit with python "/" def + evaluate it with %
                   cleanTau = lambda lep,tau,dr: dr<0.4,
                   looseTau = lambda tau: _susyEWK_tauId_CBloose(tau), # used in cleaning
                   tightTau = lambda tau: _susyEWK_tauId_CBtight(tau), # on top of loose
                   cleanJetsWithTaus = True,
                   cleanTausWithLoose = True,
                   doVetoZ = False,
                   doVetoLMf = False,
                   doVetoLMt = True,
                   jetPt = 30,
                   bJetPt = 25,
                   coneptdef = lambda lep: conept(lep),
                 ) ))



from CMGTools.TTHAnalysis.tools.leptonBuilderEWK_nanoAOD import LeptonBuilderEWK_nanoAOD

MODULES.append( ('leptonBuilderEWK_nanoAOD', lambda : LeptonBuilderEWK_nanoAOD("Mini")))

from CMGTools.TTHAnalysis.tools.bTagWeightAnalyzer import bTagWeightAnalyzer

btagsf_CSV_94X        = os.path.join(utility_files_dir, "btag", "CSVv2_94XSF_V2_B_F.csv")
btagsf_DeepCSV_94X    = os.path.join(utility_files_dir, "btag", "DeepCSV_94XSF_V3_B_F.csv")
btagsf_DeepFlavor_94X = os.path.join(utility_files_dir, "btag", "DeepFlavour_94XSF_V1_B_F.csv")


btag_efficiency_fullsimCSV        = os.path.join(utility_files_dir, "btag", "btagEffCSV.root")
btag_efficiency_fullsimDeepCSV    = os.path.join(utility_files_dir, "btag", "btagEffDeepCSV.root")
btag_efficiency_fullsimDeepFlavor = os.path.join(utility_files_dir, "btag", "btagEffDeepFlavor.root")


MODULES.append( ('eventBTagWeightDeepCSVM',  lambda : bTagWeightAnalyzer(btagsf_DeepCSV_94X, btag_efficiency_fullsimDeepCSV, algo='DeepCSV', branchbtag='btagDeepB', branchflavor='hadronFlavour', label='eventBTagSFDeepCSVM', recllabel='Mini', wp=1)))
