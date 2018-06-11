import ROOT
import matplotlib.pyplot as plt

inFile =  ROOT.TFile("/nfs/fanae/user/carlosec/www/ewk_2017_summer_mvaCUT//plots_mva.root", "READ")

sigs = ["mu1_mva_high_PROMPT_prompt_WZ","mu2_mva_high_PROMPT_prompt_WZ","mu3_mva_high_PROMPT_prompt_WZ"]
backs = ["mu1_mva_high_FAKES_fakes_TT", "mu2_mva_high_FAKES_fakes_TT", "mu3_mva_high_FAKES_fakes_TT"]

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
  backC.append(backH.Integral(b,nbins)/backH.Integral(2,nbins))
  sigC.append(sigH.Integral(b,nbins)/sigH.Integral(2,nbins))
  
sigPoints = [1.,0.9,0.15,-0.20,-0.60,-1.]
colors = ["ko", "ro", "bo", "go", "co", "mo"]
bP = []
sP = []


plt.semilogx(backC, sigC, "r-", label = "ROC")
k= 0
for p in sigPoints:
  bin = int((p + 1.)*5000.)
  bP.append(backH.Integral(bin,nbins)/backH.Integral(2,nbins))
  sP.append(sigH.Integral(bin,nbins)/sigH.Integral(2,nbins))
  plt.plot(bP[-1], sP[-1], colors[k], label = str(p))
  k += 1
  print bP[-1], sP[-1]

plt.ylabel("Efficiency sig.")
plt.xlabel("Efficiency back.")
plt.axis([0.000001,1,0.0,1])
plt.legend(loc="best")
plt.title("Muons, pt < 25 GeV")
plt.savefig("test.pdf")
