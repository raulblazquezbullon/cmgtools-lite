import ROOT
import sys

ROOT.gStyle.SetOptStat(0)
ROOT.gROOT.SetBatch(True)

tf = ROOT.TFile(sys.argv[1], "READ")
tt = tf.Get(sys.argv[2])
ttup = tf.Get(sys.argv[2]+"_up")
ttdn = tf.Get(sys.argv[2]+"_down")

for i in range(1, tt.GetNbinsX()+1):
  for j in range(1, tt.GetNbinsY()+1):
    tt.SetBinError(i,j, (tt.GetBinError(i,j)**2 + max(abs(ttup.GetBinContent(i,j)-tt.GetBinContent(i,j)), abs(ttdn.GetBinContent(i,j)-tt.GetBinContent(i,j)))**2)**0.5)

canvas = ROOT.TCanvas("c1","c1",800,600)
canvas.SetLeftMargin(0.10)
canvas.SetRightMargin(0.05)
canvas.SetBottomMargin(0.14)
canvas.SetLogx(True)
tt.GetXaxis().SetTitle("p_{T} [GeV]")
tt.GetYaxis().SetTitle("|#eta|")
tt.GetYaxis().SetTitleOffset(0.85)
tt.SetTitle(sys.argv[3])
tt.Draw("textcolzE")
canvas.SaveAs(sys.argv[4])
