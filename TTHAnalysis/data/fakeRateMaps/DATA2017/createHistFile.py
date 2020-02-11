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

th1.SetBinContent(1,1, 0.197)
th1.SetBinContent(2,1, 0.185)
th1.SetBinContent(3,1, 0.179)
th1.SetBinContent(4,1, 0.173)
th1.SetBinContent(5,1, 0.151)

th1.SetBinContent(1,2, 0.200)
th1.SetBinContent(2,2, 0.193)
th1.SetBinContent(3,2, 0.183)
th1.SetBinContent(4,2, 0.159)
th1.SetBinContent(5,2, 0.141)

th1.SetBinContent(1,3, 0.212)
th1.SetBinContent(2,3, 0.202)
th1.SetBinContent(3,3, 0.184)
th1.SetBinContent(4,3, 0.158)
th1.SetBinContent(5,3, 0.135)

th1.SetBinContent(1,4, 0.212)
th1.SetBinContent(2,4, 0.207)
th1.SetBinContent(3,4, 0.190)
th1.SetBinContent(4,4, 0.165)
th1.SetBinContent(5,4, 0.136)

th1.SetBinContent(1,5, 0.211)
th1.SetBinContent(2,5, 0.200)
th1.SetBinContent(3,5, 0.179)
th1.SetBinContent(4,5, 0.174)
th1.SetBinContent(5,5, 0.149)

th1.Write()
tf1.Close()
