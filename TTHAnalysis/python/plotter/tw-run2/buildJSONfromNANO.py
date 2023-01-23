import ROOT
import os
import json

year = "2017"
filename= "SingleElectron"
cosa="HighEGJet_ext2"
inputDir = "/pool/ciencias/nanoAODv6/13jan2020/%s/"%year #stop
#inputDir="/pool/ciencias/nanoAODv4/5TeV/nanoAODnoSkim/postProc/skim2l/"
#inputDir="/eos/cms/store/group/phys_muon/folguera/5TeV_Mar23/"
#inputDir="/pool/ciencias/nanoAODv6/tt5TeV_24ago2020/trees/"

inputFiles = []
for f in os.listdir(inputDir):
	if filename in f:
		inputFiles.append(inputDir + f)

runs = {}

print(inputFiles)

for f in inputFiles:
	ff    = ROOT.TFile(f, "READ")
	lumis = ff.Get("LuminosityBlocks") #antes luminosityBlock
	for ev in lumis:
		if ev.run in list(runs.keys()): runs[ev.run].append(ev.luminosityBlock)
		else: runs[ev.run] = [ev.luminosityBlock]

#Now build it JSON like
forjson = {}
for key in list(runs.keys()):
	forjson[str(key)] = []
	templist = runs[key]
	templist.sort()
	saving = False
	start  = 0 
	end    = 0
	for t in templist:
		if not saving:
			saving = True
			start = t
			end = t
		elif t == end +1:
			end = t 
		else:
			forjson[str(key)].append([start, end])
			start = t
			end = t
	forjson[str(key)].append([start,end])
json.dump(forjson, open("stop/%s_%s.json"%(year,filename),"w"), sort_keys=True)

