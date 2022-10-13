#---Input---# 
#   - fitDiagnostics rootfile obtained when running: combine -M FitDiagnostics with the option --plots
import os, sys, argparse
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)
import copy


#Nuisances to be plotted in mode 1
Nuisances = ["muonen_2016","muonen_2017","muonen_2018","muonidsf_stat_2016","muonidsf_stat_2017","muonidsf_stat_2018","muonidsf_syst","muonisosf_stat_2016","muonisosf_stat_2017","muonisosf_stat_2018","muonisosf_syst","elecidsf","elecrecosf"]

def executer(Mode, Tolerance, FitFile, Nuisances):
  
  path = FitFile #Path of the fitDiagnostics.root
  
  #Extract the covariance matrix from the rootfile
  rootfile = r.TFile(path)
  matrixName = "covariance_fit_s" #Signal + backgr fit case
  matrix = rootfile.Get(matrixName)
  
  Nbins = matrix.GetXaxis().GetNbins()
  if Mode == 1:
    nuisances = Nuisances
  elif Mode == 2:
    nuisances = []
    for i in range(1,Nbins+1):
      for j in range(1,Nbins+1):
        if abs(matrix.GetBinContent(i,j))>Tolerance and abs(matrix.GetBinContent(i,j))<0.99:
          nuisances.append(matrix.GetXaxis().GetBinLabel(i))
          nuisances.append(matrix.GetYaxis().GetBinLabel(j))
    nuisances = list(set(nuisances))
    if len(nuisances) == 0:
      raise Exception("No nuisances with correlation > %2.2f where found" %(Tolerance))
          
  else:
    raise Exception("Only mode = 1,2 is defined")
  #Get the bins names
  allNuisancesX = {}
  allNuisancesY = {}
  for i in range(1,Nbins+1):
    allNuisancesX[matrix.GetXaxis().GetBinLabel(i)] = i
    allNuisancesY[matrix.GetYaxis().GetBinLabel(i)] = i
  
  
  #Define new reduced covariance matrix
  c = r.TCanvas("c", "", 1400, 1400)
  c.SetLeftMargin(0.1)
  c.SetBottomMargin(0.1)
  c.SetRightMargin(0.02)
  c.SetTopMargin(0.02)
  newMatrix = r.TH2D("NewMatrix","",len(nuisances),0,len(nuisances),len(nuisances),0,len(nuisances))
  r.gStyle.SetPaintTextFormat('1.1f')
  newMatrix.SetStats(0)
  newMatrix.GetYaxis().SetLabelSize(0.02)
  newMatrix.GetXaxis().SetLabelSize(0.02)
  for i in range(1,len(nuisances)+1):
    for j in range(1,len(nuisances)+1):
      XBin = allNuisancesX[nuisances[i-1]]
      YBin = allNuisancesY[nuisances[j-1]]
      newMatrix.SetBinContent(i,j,matrix.GetBinContent(XBin,YBin))
      newMatrix.GetXaxis().SetBinLabel(i,nuisances[i-1])
      newMatrix.GetYaxis().SetBinLabel(j,nuisances[j-1])
  newMatrix.GetXaxis().LabelsOption("v")
  newMatrix.SetMarkerSize(0.4)
  newMatrix.Draw("text COL")
  c.SaveAs("NuisancesCorrelations.png")
  c.SaveAs("NuisancesCorrelations.pdf")
  c.Close()
  rootfile.Close()
  return
  




if __name__=="__main__":
  parser = argparse.ArgumentParser(usage = "python NuisanceCovarianceMatrixPlotter.py [options]", description = "Correlation matrices plotter.", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
  parser.add_argument('--plotMode' , '-p', metavar = "mode",      dest = "mode",      required = True, help = "Mode 1 = plot matrix with specified nuisances, Mode = 2 plot matrix with the most  correlated  nuisances")
  parser.add_argument('--tolerance', '-t', metavar = 'tolerance', dest = "tolerance", required = False, default = 0.1, type = float, help = "Plot correlated nuisances with more correlation than tolerance (for mode = 2 only)")
  parser.add_argument('--fitFile'  , '-f', metavar = 'fitFile',   dest = "fitFile",   required = False, default = "./fitDiagnosticsTest.root", help = "FitDiagnostics rootfile, neccesary --plots option")

  args       = parser.parse_args()
  mode       = int(args.mode)
  tolerance  = args.tolerance
  fitFile    = args.fitFile

  executer(mode, tolerance, fitFile, Nuisances)


