import array
import ROOT

ptbins  = [20,25,35,50,70,100]
etabins = [0,0.5,1.,1.5,2.,2.5]
npt = len(ptbins)-1
neta = len(etabins)-1

ptbins = array.array('d',ptbins)
etabins = array.array('d',etabins)

tf1 = ROOT.TFile("fakeRateTau_2016.root","RECREATE")
th1 = ROOT.TH2F("fakeRateTau", "fakeRateTau",  npt, ptbins, neta, etabins,)

th1.SetBinContent(1,1, 0.201)
th1.SetBinContent(2,1, 0.194)
th1.SetBinContent(3,1, 0.179)
th1.SetBinContent(4,1, 0.176)
th1.SetBinContent(5,1, 0.148)

th1.SetBinContent(1,2, 0.210)
th1.SetBinContent(2,2, 0.195)
th1.SetBinContent(3,2, 0.180)
th1.SetBinContent(4,2, 0.177)
th1.SetBinContent(5,2, 0.152)

th1.SetBinContent(1,3, 0.221)
th1.SetBinContent(2,3, 0.201)
th1.SetBinContent(3,3, 0.194)
th1.SetBinContent(4,3, 0.172)
th1.SetBinContent(5,3, 0.158)

th1.SetBinContent(1,4, 0.212)
th1.SetBinContent(2,4, 0.199)
th1.SetBinContent(3,4, 0.183)
th1.SetBinContent(4,4, 0.164)
th1.SetBinContent(5,4, 0.146)

th1.SetBinContent(1,5, 0.186)
th1.SetBinContent(2,5, 0.173)
th1.SetBinContent(3,5, 0.169)
th1.SetBinContent(4,5, 0.160)
th1.SetBinContent(5,5, 0.121)

th1.Write()
tf1.Close()
