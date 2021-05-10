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
YEAR = sys.argv[4]
OPHATH = sys.argv[5]

#verbose = False
PATH = "/pool/phedexrw/userstorage/clara/NanoAOD/Top_Nanov6_03_Nov_skim_enero"
PATH_DATA = "/pool/phedex/userstorage/clara/NanoAOD/Top_Nanov6_20jan_skim"
verbose = False
QUEUE = "batch"
NCORES = "16"


if YEAR == "2016":
   lumi = "36.33" #lumis: 41.53 36.3 59.74
elif YEAR == "2017":
   lumi = "41.53" 
elif YEAR == "2018":
   lumi = "59.74" 
else:
   print("no valid year")
NCORES_LOCAL = "10"

command = '''sbatch -c {NCORES} -p {QUEUE} -J CMGTcard_{VARLABEL}_rebinIs{nq} -e slurm_logs/errors/log.%j.%x.err -o slurm_logs/outs/log.%j.%x.out --wrap 'python makeShapeCardsNew.py  ttH-multilepton/mca-3l-mcdata-frdata.txt ttH-multilepton/3l_tight_legacy.txt "{VAR}" "{REBINING}" --unc ttH-multilepton/systsUnc.txt --amc --xu CMS_ttW_TTZ_lnU,CMS_ttW_TTW_lnU -P {PATH}/{YEAR} -P {PATH_DATA}/{YEAR} --FMCs {P}/0_jmeUnc_v1 --FDs {P}/1_recl_enero --FMCs {P}/1_recl_allvars --FMCs {P}/2_btag_SFs_fix11m --FMCs {P}/2_scalefactors_lep_new --Fs {P}/3_tauCount --Fs {P}/4_evtVars --xf TTTW --xf TTWH  --tree NanoAOD --s2v -j {NCORES} -l {lumi} -f --WA prescaleFromSkim --split-factor=-1  --od cards/{OUTPATH}  -L ttH-multilepton/functionsTTH.cc --mcc ttH-multilepton/lepchoice-ttH-FO.txt --mcc ttH-multilepton/mcc-METFixEE2017.txt --plotgroup data_fakes+=.*_promptsub --neg   --threshold 0.01 --asimov signal -W "L1PreFiringWeight_Nom*puWeight*bTagWeight*leptonSF_3l" -E ^{cutJet} -E ^{cutB} -E ^{cutcharge} -E ^underflowVeto3l --binname ttW_3l_{YEAR}_{ch} --year {YEAR} --fakeName nonprompt; ' '''

command_local = '''python makeShapeCardsNew.py  ttH-multilepton/mca-3l-mcdata-frdata.txt ttH-multilepton/3l_tight_legacy.txt "{VAR}" "{REBINING}" --unc ttH-multilepton/systsUnc.txt --amc --xu CMS_ttW_TTZ_lnU,CMS_ttW_TTW_lnU -P {PATH}/{YEAR} -P {PATH_DATA}/{YEAR} --FMCs {P}/0_jmeUnc_v1 --FDs {P}/1_recl_enero --FMCs {P}/1_recl_allvars --FMCs {P}/2_btag_SFs_fix11m --FMCs {P}/2_scalefactors_lep_new --Fs {P}/3_tauCount --Fs {P}/4_evtVars --xf TTTW --xf TTWH  --tree NanoAOD --s2v -j {NCORES} -l {lumi} -f --WA prescaleFromSkim --split-factor=-1  --od cards/{OUTPATH}  -L ttH-multilepton/functionsTTH.cc --mcc ttH-multilepton/lepchoice-ttH-FO.txt --mcc ttH-multilepton/mcc-METFixEE2017.txt --plotgroup data_fakes+=.*_promptsub --neg   --threshold 0.01 --asimov signal -W "L1PreFiringWeight_Nom*puWeight*bTagWeight*leptonSF_3l" -E ^{cutJet} -E ^{cutB} -E ^{cutcharge} -E ^underflowVeto3l --binname ttW_3l_{YEAR}_{ch} --year {YEAR} --fakeName nonprompt; '''

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



dic_rebin ={'gt3j2b_neg': [0.0, 116.87904699690597, 176.9744445678413, 263.1564711045274, 400.0],
'3j1b_pos' : [0.0, 114.41901760571838, 167.01160526170392, 238.3644737598468, 400.0],
'2j1b_neg': [0.0, 104.04501239963622, 145.92357261173623, 213.11089064762743, 400.0],
'2j2b_neg': [0.0, 122.27468898454849, 174.08453786011336, 256.68040237263375, 400.0],
'3j2b_neg': [0.0, 121.66742805658379, 184.59440374671547, 262.5334359807973, 400.0],
'2j1b_pos': [0.0, 106.61475918456767, 148.90002223766606, 214.94615299472412, 400.0],
'3j2b_pos': [0.0, 117.86392817723875, 175.0280421810029, 246.9031888282239, 400.0],
'2j2b_pos': [0.0, 113.79555554218635, 165.47193545439086, 242.75509740753085, 400.0],
'gt3j2b_pos': [0.0, 121.08847327321104, 179.06265910671766, 256.82387764863853, 400.0],
'3j1b_neg': [0.0, 113.01559787252796, 161.28994169111058, 233.51066271686423, 400.0],
'gt3j1b_neg': [0.0, 116.56814680619217, 173.57752753857946, 254.75168185678595, 400.0],
'gt3j1b_pos': [0.0, 122.5891692843204, 180.52139370950675, 257.39690883443814, 400.0]}
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
			print(",{}".format(ch))
			for nq in NQUANT:
				OUTPATH = OPHATH + "/".join(["SR", VAR])
				

				#rebining = rebin_histo(VAR, DIR.format(ch = ch), int(nq), firstBin)
				rebining = dic_rebin[ch]
                                print(rebining)
                                cutJet, cutB, cutcharge = getcut(ch)
				aux_command = deepcopy(command) if MODE == "0" else deepcopy(command_local)
				aux_command = aux_command.format(NCORES = NCORES if MODE == "0" else NCORES_LOCAL,  
						     REBINING = rebining,
						     nq = nq,
						     VARLABEL = VAR,
						     YEAR = YEAR, 
						     QUEUE = QUEUE,
						     PATH = PATH,
                                                     PATH_DATA = PATH_DATA,
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
				else:	    
                                     print(aux_command)
                                     os.system(aux_command)
				print("------")	


'''
app_json = json.dumps(dic)
with open('binning.txt', 'w') as json_file:
  json.dump(dic, json_file)
#create total histo with this binning -> save
'''
