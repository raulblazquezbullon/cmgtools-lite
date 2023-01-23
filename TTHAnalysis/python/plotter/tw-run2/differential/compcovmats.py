import os, sys
import ROOT as r

path = "./temp_2022_03_29_nuevassuavizv2/differential/run2/Jet1_Pt/"

f1 = r.TFile(path + "CovMat_particlefidbin.root", "READ")
f2 = r.TFile(path + "CovMat_particlefidbin_v2.root", "READ")


m1 = f1.finalmat
m2 = f2.CovMat_fidbin

for i in range(1, m1.GetNbinsX() + 1):
    for j in range(1, m1.GetNbinsX() + 1):
#        print i, j, m1.GetBinContent(i, j), m2.GetBinContent(i, j)
        print(m1.GetBinContent(i, j) - m2.GetBinContent(i, j))
        
f1.Close(); f2.Close();
