import ROOT
import matplotlib.pyplot as plt

inFile =  ROOT.TFile("../testbTag/plots_csv.root", "READ")



def getRoc(sigs, backs,points1, doLabels,tag,colorTag):
    sigH = inFile.Get(sigs[0])

    for i in range(1, len(sigs)):
        sigH.Add(inFile.Get(sigs[i]))


    backH = inFile.Get(backs[0])
    for i in range(1, len(backs)):
        backH.Add( inFile.Get(backs[i]))

    backC = []
    sigC = []

    pB = []
    pS = []
    nbins = backH.GetNbinsX()
    roc = 0.
    for b in range(2,nbins+1):
        #print b
        if backH.Integral(b,nbins)/backH.Integral(2,nbins)== 1 or sigH.Integral(b,nbins)/sigH.Integral(2,nbins)==1: continue
        backC.append(1.-backH.Integral(b,nbins)/backH.Integral(2,nbins))
        sigC.append(1.-sigH.Integral(b,nbins)/sigH.Integral(2,nbins))
   
    sigPoints = points1
    colors = ["go", "ko", "yo"]
    labels = ["Loose WP","Medium WP","Tight WP"]
    bP = []
    sP = []



    k= 0
    for p in sigPoints:
        bin = int(round((p)*1000.))
        print bin
        bP.append(1-backH.Integral(bin,nbins)/backH.Integral(2,nbins))
        sP.append(1-sigH.Integral(bin,nbins)/sigH.Integral(2,nbins))
        if doLabels == True:
            plt.semilogx(bP[-1], sP[-1], colors[k], label = labels[k])
        else:
            plt.semilogx(bP[-1], sP[-1], colors[k])
        k += 1
        print bP[-1], sP[-1]
    plt.semilogx(backC, sigC, colorTag+"-", label = tag)
    k= 0
    for p in sigPoints:
        bin = int(round((p)*1000.))
        print bin
        bP.append(1-backH.Integral(bin,nbins)/backH.Integral(2,nbins))
        sP.append(1-sigH.Integral(bin,nbins)/sigH.Integral(2,nbins))
        if True:
            plt.semilogx(bP[-1], sP[-1], colors[k])
        k += 1
        print bP[-1], sP[-1]
sigs1 = ["maxbTagCSV_%s_prompt_WZ"%str(i) for i in range(16)]
backs1 = ["maxbTagCSV_%s_fakes_TT"%str(i) for i in range(16)]
sigs2 = ["maxbTagDeepCSV_%s_prompt_WZ"%str(i) for i in range(16)]
backs2 = ["maxbTagDeepCSV_%s_fakes_TT"%str(i) for i in range(16)]
sigs3 = ["maxbTagCSV_%s_prompt_WZ"%str(i) for i in range(16)]
backs3 = ["maxbTagCSV_%s_rares_ttX"%str(i) for i in range(16)]
sigs4 = ["maxbTagDeepCSV_%s_prompt_WZ"%str(i) for i in range(16)]
backs4 = ["maxbTagDeepCSV_%s_rares_ttX"%str(i) for i in range(16)]
wp1 = [0.5803,0.8838,0.9693]
wp2 = [0.1422,0.4941,0.8001]

getRoc(sigs1, backs1,wp1, True, "CSV WZ vs TT", "b")
getRoc(sigs2, backs2,wp2, False, "DeepCSV WZ vs TT", "r")
getRoc(sigs3, backs3,wp1, False, "CSV WZ vs TTX", "b-")
getRoc(sigs4, backs4,wp2, False, "DeepCSV WZ vs TTX", "r-")

#382, 490
dxB1 = (382.)/1000.
xB1 = [dxB1]
yB1 = [(dxB1+ (dxB1*0.5)**2)**0.5/50]

while xB1[-1] < (382.):
    xB1.append(xB1[-1] + dxB1)
    yB1.append((xB1[-1]+ (xB1[-1]*0.5)**2)**0.5/50)
    #print xB[-1], yB[-1]
for i in range(len(xB1)):
    xB1[i] *=1./(382.)
dxB2 = (490.)/1000.
xB2 = [dxB2]
yB2 = [(dxB2+ (dxB2*0.5)**2)**0.5/100]

while xB2[-1] < (490.):
    xB2.append(xB2[-1] + dxB2)
    yB2.append((xB2[-1]+ (xB2[-1]*0.5)**2)**0.5/100)
    #print xB[-1], yB[-1]
for i in range(len(xB2)):
    xB2[i] *=1./(490.)

plt.semilogx(xB1,yB1, "k--", label=r"dTTX/50")
plt.semilogx(xB2,yB2, "k", label=r"dTT/100")
plt.ylabel("MisId efficiency (\"signal\")")
plt.xlabel("Id efficiency (\"top-enriched\")")
plt.axis([0.05,3,0.5,1])
plt.legend(loc="lower right")
plt.title("Anti b-tagging efficiency")
plt.savefig("bTagging.pdf")
plt.savefig("bTagging.png")
plt.savefig("bTagging.eps")
