import array
import ROOT

ptbins  = [20,25,35,50,70,100]
etabins = [0,0.5,1.,1.5,2.,2.5]
npt = len(ptbins)-1
neta = len(etabins)-1

ptbins = array.array('d',ptbins)
etabins = array.array('d',etabins)

tf1 = ROOT.TFile("fakeRateTau_2017.root","RECREATE")
th1 = ROOT.TH2F("fakeRateTau", "fakeRateTau",  npt, ptbins, neta, etabins,)

th1.SetBinContent(1,1, 0.194)
th1.SetBinContent(2,1, 0.185)
th1.SetBinContent(3,1, 0.167)
th1.SetBinContent(4,1, 0.163)
th1.SetBinContent(5,1, 0.140)

th1.SetBinContent(1,2, 0.200)
th1.SetBinContent(2,2, 0.195)
th1.SetBinContent(3,2, 0.184)
th1.SetBinContent(4,2, 0.155)
th1.SetBinContent(5,2, 0.127)

th1.SetBinContent(1,3, 0.210)
th1.SetBinContent(2,3, 0.199)
th1.SetBinContent(3,3, 0.178)
th1.SetBinContent(4,3, 0.174)
th1.SetBinContent(5,3, 0.155)

th1.SetBinContent(1,4, 0.205)
th1.SetBinContent(2,4, 0.201)
th1.SetBinContent(3,4, 0.189)
th1.SetBinContent(4,4, 0.184)
th1.SetBinContent(5,4, 0.154)

th1.SetBinContent(1,5, 0.204)
th1.SetBinContent(2,5, 0.196)
th1.SetBinContent(3,5, 0.172)
th1.SetBinContent(4,5, 0.171)
th1.SetBinContent(5,5, 0.142)

th1.Write()
tf1.Close()
