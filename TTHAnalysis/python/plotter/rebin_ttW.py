import ROOT as r
from array import array
import numpy as np
from copy import deepcopy
import os
import re
import sys

r.gROOT.SetBatch(1)

###################################################
#				      		  #
# syntax: python rebin_ttW [path] [nbins] [var]   #
#				      		  #
###################################################


# THIS PATH CONTAINS PLOTS FOR EACH REGION
#DIR = "/pool/phedex/userstorage/cvico/ttV/Plots/new_Rebining/{ch}/2016/3l_tight_legacy/2lss_3l_plots.root"

DIR = "/pool/phedexrw/userstorage/cvico/ttV/Plots/NewFtrees/plots_without_rebining/m3l/{ch}/2016/3l_tight_legacy/2lss_3l_plots.root"

NQUANT = sys.argv[1].split(",")
VAR = sys.argv[2]
MODE = sys.argv[3]


#verbose = False
PATH = "/pool/phedex/userstorage/clara/NanoAOD/Top_Nanov6_03_Nov_skim_enero"
verbose = True
QUEUE = "batch"
NCORES = "16"
YEAR = "2016"
lumi = "35.9" #This is for 2016

NCORES_LOCAL = "4"

command = '''sbatch -c {NCORES} -p {QUEUE} -J CMGTcard_{VARLABEL}_rebinIs{nq} -e slurm_logs/errors/log.%j.%x.err -o slurm_logs/outs/log.%j.%x.out  --wrap 'python makeShapeCardsNew.py  ttH-multilepton/mca-3l-mc.txt ttH-multilepton/3l_tight_legacy.txt "{VAR}" "{REBINING}" --unc ttH-multilepton/systsUnc.txt --amc --xu CMS_ttHl_TTZ_lnU,CMS_ttHl_TTW_lnU -P {PATH}/{YEAR} --FMCs {P}/0_jmeUnc_v1 --FDs {P}/1_recl_enero --FMCs {P}/1_recl_allvars --FMCs {P}/2_btag_SFs --FMCs {P}/2_scalefactors_lep --Fs {P}/3_tauCount --Fs {P}/4_evtVars --xf TTTW --xf TTWH  --tree NanoAOD --s2v -j {NCORES} -l {lumi} -f --WA prescaleFromSkim --split-factor=-1  --od cards/{OUTPATH}  -L ttH-multilepton/functionsTTH.cc --mcc ttH-multilepton/lepchoice-ttH-FO.txt --mcc ttH-multilepton/mcc-METFixEE2017.txt --plotgroup data_fakes+=.*_promptsub --neg   --threshold 0.01 --asimov signal -W L1PreFiringWeight_Nom*puWeight*btagSF_shape*triggerSF_3l*leptonSF_3l -E ^{cutJet} -E ^{cutB} -E ^{cutcharge} -E ^underflowVeto3l --binname ttW_3l_{YEAR}_{ch} --year {YEAR};' '''

command_local = '''python makeShapeCardsNew.py  ttH-multilepton/mca-3l-mc.txt ttH-multilepton/3l_tight_legacy.txt "{VAR}" "{REBINING}" --unc ttH-multilepton/systsUnc.txt --amc --xu CMS_ttHl_TTZ_lnU,CMS_ttHl_TTW_lnU -P {PATH}/{YEAR} --FMCs {P}/0_jmeUnc_v1 --FDs {P}/1_recl_enero --FMCs {P}/1_recl_allvars --FMCs {P}/2_btag_SFs --FMCs {P}/2_scalefactors_lep --Fs {P}/3_tauCount --Fs {P}/4_evtVars --xf TTTW --xf TTWH  --tree NanoAOD --s2v -j {NCORES} -l {lumi} -f --WA prescaleFromSkim --split-factor=-1  --od cards/{OUTPATH}  -L ttH-multilepton/functionsTTH.cc --mcc ttH-multilepton/lepchoice-ttH-FO.txt --mcc ttH-multilepton/mcc-METFixEE2017.txt --plotgroup data_fakes+=.*_promptsub --neg   --threshold 0.01 --asimov signal -W L1PreFiringWeight_Nom*puWeight*btagSF_shape*triggerSF_3l*leptonSF_3l -E ^{cutJet} -E ^{cutB} -E ^{cutcharge} -E ^underflowVeto3l --binname ttW_3l_{YEAR}_{ch} --year {YEAR};' '''

def histo_deepcopy(h):
	# return a deepcopy of a histo that surely won't lead to memory problems

	h.SetDirectory(0)
	histo = deepcopy(h.Clone())
	return histo
	
def get_histos(var, path, someProcess = ""):
	histos = {}
	f = r.TFile.Open(path)
	
	if someProcess != "":
		histo = histo_deepcopy(f.Get(var + "_" + someProcess))
		f.Close()
		del f
		return histo

	for key in f.GetListOfKeys():
		name = key.GetName()
		if (var not in name) or ("stack" in name) or ("canvas" in name): continue
		process = name.split('_')[-1]
		histos[process] = histo_deepcopy(f.Get(name))	

	f.Close()
	del f
	return histos

def rebin_histo(var, path, nquant, firstBin = [0.0]):
	
	h = get_histos(var, path, someProcess = "background")
	
	xquant = array('d')
	yquant = array('d', [0.] * nquant)
	init = array('d', firstBin) #min bin

	for q in range(0, nquant):
	    	xquant.append(float((q+1))/nquant)

	h.GetQuantiles(nquant, yquant, xquant) # Use background to rebin


	rebining = init + yquant
	rebining = rebining.tolist()
	
	return rebining


def getcut(channel):
	cutJet = "eq2J"
	cutB = "eq1B"
	cutcharge = "pos"


	if "neg" in channel: 
		cutcharge = cutcharge.replace("pos", "neg")
	if "2b" in channel: 
		cutB = cutB.replace("1B", "2B")
	if "3j" in channel and not "gt" in channel : 
		cutJet = cutJet.replace("2J","3J")
	elif "3j" in channel and "gt" in channel: 
		cutJet = cutJet.replace("eq2J", "gt3J")
	
	return cutJet, cutB, cutcharge

if __name__ == "__main__":

	if MODE == "":
		print("please select a mode to run: 0 for batch, 1 for local")
	firstBin = [0.0]

	channels = []
	for njets in [2, 3]:
		for btags in [1, 2]:
			for charge in ["neg", "pos"]:
				channels.append("{}j{}b_{}".format(njets, btags, charge))
	channels.append("gt3j1b_pos")
	channels.append("gt3j1b_neg")
	channels.append("gt3j2b_pos")
	channels.append("gt3j2b_neg")

		
	var_to_comm = ""
	if VAR == "sum_3l_pt": 
		var_to_comm = "LepGood1_pt+LepGood2_pt+LepGood3_pt"
		firstBin = [50.0]
	if VAR == "htJet25j" : var_to_comm = VAR
	if VAR == "met": var_to_comm = "MET_pt"
	if VAR == "3lep_m3l": var_to_comm = "mass_3_cheap(LepGood1_pt,LepGood1_eta,LepGood2_pt,LepGood2_eta,LepGood2_phi-LepGood1_phi,LepGood3_pt,LepGood3_eta,LepGood3_phi-LepGood1_phi)"
	if VAR == "3l_minDeltaR": 
		var_to_comm = "minDeltaR_3l(LepGood1_eta, LepGood1_phi, LepGood2_eta, LepGood2_phi, LepGood3_eta, LepGood3_phi)"
	if var_to_comm == "": print("INVALID VARIABLE TO MAKE CARDS")
	else:
		for ch in channels:
			print("------")
			print("ch: {}".format(ch))
			for nq in NQUANT:
				OUTPATH = "cards_ttW/" + "/".join([YEAR, "New_good_rebining", VAR, "nbins_" + nq])
				

				rebining = rebin_histo(VAR, DIR.format(ch = ch), int(nq), firstBin)
				cutJet, cutB, cutcharge = getcut(ch)
				aux_command = deepcopy(command) if MODE == "0" else deepcopy(command_local)
				aux_command = aux_command.format(NCORES = NCORES if MODE == "0" else NCORES_LOCAL,  
						     REBINING = rebining,
						     nq = nq,
						     VARLABEL = VAR,
						     YEAR = YEAR, 
						     QUEUE = QUEUE,
						     PATH = PATH,
						     lumi = lumi,
		        	                     OUTPATH = OUTPATH, 
						     P = "{P}", # problem with this key when formatting...
						     ch = ch,
						     cutJet = cutJet,
					             cutB = cutB,
						     cutcharge = cutcharge,
 						     VAR = var_to_comm)
				
				if verbose: 
					print(aux_command)
				else:	    os.system(aux_command)
				print("------")	


'''
app_json = json.dumps(dic)
with open('binning.txt', 'w') as json_file:
  json.dump(dic, json_file)
#create total histo with this binning -> save
'''
