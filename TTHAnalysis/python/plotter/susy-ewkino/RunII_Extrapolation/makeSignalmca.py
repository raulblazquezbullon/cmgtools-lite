import os

sampleList = os.listdir("/pool/ciencias/userstorage/carlosec/EWKINO_2016Data/unSkimmed_Signals_estructure/")

xsecFile = open("../../susy-interface/scan/xsec/xsec_ChiNeu.txt", "r")

brCorr = {"TChiWZ": "0.10099/1000.", "TChiWH": "0.03634/1000.", "TChiZZ4L": "0.01/1000.", "TChiHZ": "0.0305/1000.", "TChiHH": "0.09/1000.", "TChiSlepSnuTE": "1.0/1000.", "TChiStauStau":"1.0/1000.", "TChiSlepSnu":"0.5/1000."}

dictXSEC = {}
for line in xsecFile:
    words = line.split(":")
    dictXSEC[words[0].replace(" ",'')] = words[1].replace(" ",'')

for s in sampleList:
    if not(s[0] == "T"): continue
    short, m1, m2 = s.split("_")
    shortshort = short.split("x")[0]
    if not(shortshort in brCorr.keys()): continue
    print "sig_%s+ : %s : %s*%s; isFastSim=True"%(s, s, dictXSEC[m1],brCorr[shortshort])
