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

btagsf_DeepCSV_102X    = os.path.join(utility_files_dir, "btag", "DeepCSV_102XSF_V1.csv")
btagsf_DeepFlavor_102X = os.path.join(utility_files_dir, "btag", "DeepJet_102XSF_V1.csv")

btag_efficiency_fullsimCSV        = os.path.join(utility_files_dir, "btag", "btagEffCSV.root")
btag_efficiency_fullsimDeepCSV    = os.path.join(utility_files_dir, "btag", "btagEffDeepCSV.root")
btag_efficiency_fullsimDeepFlavor = os.path.join(utility_files_dir, "btag", "btagEffDeepFlavor.root")

#For retrocompatibility
MODULES.append( ('eventBTagWeightDeepCSVM_2017',  lambda : bTagWeightAnalyzer(btagsf_DeepCSV_94X, btag_efficiency_fullsimDeepCSV, algo='DeepCSV', branchbtag='btagDeepB', branchflavor='hadronFlavour', label='eventBTagSFDeepCSVM', recllabel='Mini', wp=1, year=2017)))

#This is the one we use
MODULES.append( ('eventBTagWeightDeepCSVT_2017',  lambda : bTagWeightAnalyzer(btagsf_DeepCSV_94X, btag_efficiency_fullsimDeepCSV, algo='DeepCSV', branchbtag='btagDeepB', branchflavor='hadronFlavour', label='DeepCSVT', recllabel='Mini', wp=2, year=2017)))


#For retrocompatibility
MODULES.append( ('eventBTagWeightDeepCSVM_2018',  lambda : bTagWeightAnalyzer(btagsf_DeepCSV_102X, btag_efficiency_fullsimDeepCSV, algo='DeepCSV', branchbtag='btagDeepB', branchflavor='hadronFlavour', label='eventBTagSFDeepCSVM', recllabel='Mini', wp=1, year=2018)))

#This is the one we use
MODULES.append( ('eventBTagWeightDeepCSVT_2018',  lambda : bTagWeightAnalyzer(btagsf_DeepCSV_102X, btag_efficiency_fullsimDeepCSV, algo='DeepCSV', branchbtag='btagDeepB', branchflavor='hadronFlavour', label='DeepCSVT', recllabel='Mini', wp=2, year=2018)))

#Lepton energy scale corrections + uncertainties
from CMGTools.TTHAnalysis.tools.leptonEnergyCorrections import leptonEnergyCorrections
MODULES.append( ('leptonEnergyCorrections_2017', lambda: leptonEnergyCorrections("", "RoccoR2017.txt", "2017")))
MODULES.append( ('leptonEnergyCorrections_2018', lambda: leptonEnergyCorrections("", "RoccoR2018.txt", "2018")))

#Pileup reweighting
from CMGTools.TTHAnalysis.tools.vertexWeightFriend import VertexWeightFriend
MODULES.append( ('vtxWeight2018', lambda : VertexWeightFriend(myfile=None, targetfile=os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/data/pileup/pileup_Cert_314472-325175_13TeV_17SeptEarlyReReco2018ABC_PromptEraD_Collisions18_withVar.root",
                                                          myhist=None,targethist="pileup",name="vtxWeight2018Nominal",
                                                          verbose=False,vtx_coll_to_reweight="Pileup_nTrueInt",autoPU=True)) )
MODULES.append( ('vtxWeight2018Up', lambda : VertexWeightFriend(myfile=None, targetfile=os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/data/pileup/pileup_Cert_314472-325175_13TeV_17SeptEarlyReReco2018ABC_PromptEraD_Collisions18_withVar.root",
                                                          myhist=None,targethist="pileup_plus",name="vtxWeight2018Up",
                                                          verbose=False,vtx_coll_to_reweight="Pileup_nTrueInt",autoPU=True)) )
MODULES.append( ('vtxWeight2018Down', lambda : VertexWeightFriend(myfile=None, targetfile=os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/data/pileup/pileup_Cert_314472-325175_13TeV_17SeptEarlyReReco2018ABC_PromptEraD_Collisions18_withVar.root",
                                                          myhist=None,targethist="pileup_minus",name="vtxWeight2018Down",
                                                          verbose=False,vtx_coll_to_reweight="Pileup_nTrueInt",autoPU=True)) )

