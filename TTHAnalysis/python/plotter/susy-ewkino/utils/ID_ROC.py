import ROOT
import matplotlib.pyplot as plt

import os
from optparse import OptionParser

parser = OptionParser(usage="%prog [options]")
parser.add_option("-f", "--histfile", dest="histfile",  type="string", default='', help="File with the input histograms as obtained from mcPlots")
parser.add_option("-s", "--signals", dest="signals", type="string", default='', help="Set of signals. If separated with \',\' they are added, if separated by \';\' they form a new set")
parser.add_option("-b", "--backgrounds", dest="backgrounds", type="string", default='', help="Set of bakgrounds. If separated with \',\' they are added, if separated by \';\' they form a new set")
parser.add_option("-t", "--tags", dest="tags", type="string", default='', help="Labels, separated by \';\'.")
parser.add_option("-o", "--pdir", dest="pdir", type="string", default='test', help="Output plot name")
(options, args) = parser.parse_args()




def getRoc(sigs, backs,points1, doLabels,tag,colorTag, reverse=False):
    sigH = inFile.Get(sigs[0])
    sigH.Scale(1./sigH.Integral())

    for i in range(1, len(sigs)):
	print sigs[i]
	ht = inFile.Get(sigs[i])
	ht.Scale(1./ht.Integral())
        sigH.Add(ht)


    backH = inFile.Get(backs[0])
    backH.Scale(1./backH.Integral())
    for i in range(1, len(backs)):
	print backs[i]
	ht = inFile.Get(backs[i])
	ht.Scale(1./ht.Integral())
        backH.Add(ht)

    backC = []
    sigC = []

    pB = []
    pS = []
    nbins = backH.GetNbinsX()
    roc = 0.
    for b in range(2,nbins+1):
        #print b
        if backH.Integral(b,nbins)/backH.Integral(2,nbins)== 1 or sigH.Integral(b,nbins)/sigH.Integral(2,nbins)==1: continue
        backC.append(backH.Integral(b,nbins)/backH.Integral(2,nbins))
        sigC.append(sigH.Integral(b,nbins)/sigH.Integral(2,nbins))
   
    sigPoints = points1
    colors = ["go", "ko", "yo"]
    labels = ["","",""]
    bP = []
    sP = []



    k= 0
    for p in sigPoints:
        bin = int(round((p)*1000.))
        print bin
        bP.append(backH.Integral(bin,nbins)/backH.Integral(2,nbins))
        sP.append(sigH.Integral(bin,nbins)/sigH.Integral(2,nbins))
        if doLabels == True:
            plt.plot(bP[-1], sP[-1], colors[k], label = labels[k])
        else:
            plt.plot(bP[-1], sP[-1], colors[k])
        k += 1
        print bP[-1], sP[-1]
    plt.plot(backC, sigC, colorTag+"-", label = tag)
    k= 0
    for p in sigPoints:
        bin = int(round((p)*1000.))
        print bin
        bP.append(1-backH.Integral(bin,nbins)/backH.Integral(2,nbins))
        sP.append(1-sigH.Integral(bin,nbins)/sigH.Integral(2,nbins))
        if True:
            plt.plot(bP[-1], sP[-1], colors[k])
        k += 1
        print bP[-1], sP[-1]

inFile =  ROOT.TFile(options.histfile, "READ")



#sigs1 = ["2l_susyMVA_prompt_WZ"]
sigs  = [["dummy", "dummy2"]]
bckgs = [["dummy", "dummy2"]]
tags  = ["dummy"]

sigWords = options.signals.split(";")
bkgWords = options.backgrounds.split(";")
sigs    += [i.split(",") for i in sigWords]
bckgs   += [i.split(",") for i in bkgWords]
tags    += options.tags.split(";")

print sigs
print bckgs
#sigs1  = ["2l_susyMVA_sig_TChiWZ_100_10", "2l_susyMVA_sig_TChiWZ_150_60", "2l_susyMVA_sig_TChiWZ_125_35"]
#backs1 = ["2l_susyMVA_fakes"]#, "2l_susyMVA_sig_TChiWZ_300_250", "2l_susyMVA_sig_TChiWZ_250_200", "2l_susyMVA_sig_TChiWZ_150_100"]
#wp1 = []
#wp2 = []
Bigcolors = ["d","b", "r", "g", "k", "y"]

x = [0,1]
y = [0,1]
plt.plot(x,y,"k--", label="Random sampling")
for i in range(1, len(bckgs)):
	if len(sigs) <= i: sigs.append(sigs[-1])
	print i, sigs[i], bckgs[i]
	getRoc(sigs[i], bckgs[i],[], True, tags[i], Bigcolors[i])

plt.ylabel(r"Sample 1 efficiency")
plt.xlabel(r"Sample 2 efficiency")

#plt.xlabel(options.xlabel)
#plt.ylabel(options.ylabel)

plt.axis([0.001,1,0.001,1.])
plt.legend(loc="lower right")
plt.title(r"LeptonMVA eff. (over FO) at 2lSS selection")
plt.savefig(options.pdir + ".pdf")

saveCommand = open(options.pdir + ".sh", "w")
saveCommand.write("python ID_ROC.py -f %s -s %s -b %s -l %s"%(options.histfile, options.signals, options.backgrounds, options.tags))
saveCommand.close()
