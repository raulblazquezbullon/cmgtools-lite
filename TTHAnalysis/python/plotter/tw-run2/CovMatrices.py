#Script to commpute correlation and covariance matrices for the unfolding variables and the input variables of the 1j1b BDT
import os, sys, argparse
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)
from datetime import datetime
import numpy as np
import copy

#Variable definitions and bins
vars_Yaxis = {}
vars_Xaxis = {}
#--------Differential and BDT input variables------------
#vars_Yaxis["LepGood_pt_corrAll[0]"] =  [[0, 400, 40], "Lep1_Pt"]            #[xmin, xmax, nbins]
#vars_Yaxis["Jet1_Pt"] =                [[0, 400, 40], "Jet1_Pt"]
#vars_Yaxis["Lep1Lep2_DPhi"] =          [[-0.2, 1.1, 40], "Lep1Lep2_DPhi"] 
#vars_Yaxis["abs(Lep1Lep2Jet1MET_Pz)"] =     [[-0.2, 800, 40], "Lep1Lep2Jet1MET_Pz"] #differential vars
#vars_Yaxis["Lep1Lep2Jet1MET_Mt"] =     [[0, 800, 40], "Lep1Lep2Jet1MET_Mt"]
#vars_Yaxis["Lep1Lep2Jet1_M"] =         [[0, 800, 40], "Lep1Lep2Jet1_M"]
#
#vars_Xaxis["nJetSel20_Recl"] =      [[-0.5, 7.5, 9], "nLooseJet"]
#vars_Xaxis["Jet1_Pt"] =             [[0, 400, 40], "Jet1_Pt"]
#vars_Xaxis["max(JetLoose1_Pt, 0)"] =        [[-0.2, 34, 40], "JetLoose1_Pt"] #Bdt vars
#vars_Xaxis["Lep1Lep2Jet1MET_M"] =   [[0, 800, 40], "Lep1Lep2Jet1MET_M"]
#vars_Xaxis["Lep1Lep2Jet1_C"] =      [[0, 1.1, 40], "Lep1Lep2Jet1_C"]
#vars_Xaxis["Lep1Lep2Jet1_Pt"] =     [[0, 400, 40], "Lep1Lep2Jet1_Pt"]
#
#outpath = "./temp_cards/"+ datetime.today().strftime('%Y-%m-%d') + "_CardsForCovarianceMatrix"+"/run2/"
#cardsPath = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_cards/2021-03-01_CardsForCovarianceMatrix/run2/"
#table_titles = ["Unfolding var.", "Input BDT 1j1t var."]
#--------Differential and BDT input variables------------
#--------Data vs MC 1j1t------------
vars_Xaxis["nJetSel20_Recl"] =      [[-0.5, 7.5, 9], "nLooseJet"]
vars_Xaxis["Jet1_Pt"] =             [[0, 400, 5], "Jet1_Pt"]
vars_Xaxis["max(JetLoose1_Pt, 0)"] =  [[0, 34, 5], "JetLoose1_Pt"]
vars_Xaxis["Lep1Lep2Jet1MET_M"] =   [[0, 800, 5], "Lep1Lep2Jet1MET_M"]
vars_Xaxis["Lep1Lep2Jet1_C"] =      [[0, 1, 5], "Lep1Lep2Jet1_C"]
vars_Xaxis["Lep1Lep2Jet1_Pt"] =     [[0, 400, 5], "Lep1Lep2Jet1_Pt"]

vars_Yaxis = vars_Xaxis
outpath = "./temp_cards/"+ datetime.today().strftime('%Y-%m-%d') + "_CardsForDatavsMCcorr"+"/run2/"
#cardsPath = outpath
cardsPath = "./temp_cards/"+ "2021-03-03" + "_CardsForDatavsMCcorr"+"/run2/"
table_titles = ["Y axis var.", "X axis var."]
#--------Data vs MC 1j1t------------



#### Settings
friendspath  = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions/"
friendtrees = "--Fs {P}/0_yeartag --Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors --Fs {P}/5_mvas"

region = "1j1t"
production = "2020-09-20"
unctext = "--unc tw-run2/uncs-tw.txt"
asimovtext = ""

list_processes = ["vvttv", "nonworz", "dy", "ttbar", "tw"] #processes to include in the THStack plot
process = "tw" #change the process plotted for the option Plots2D
ColourMapForProcesses = {
    "tw"       : 798,
    "ttbar"    : 633,
    "nonworz"  : 413,
    "vvttv"    : 390,
    "dy"       : 852
}




# Card maker command
commandscaff =  "python makeShapeCardsNew.py --tree NanoAOD tw-run2/mca-tw.txt tw-run2/cuts-tw-{region}.txt '{function}' '{Nbins}' -P {prodpath} {friendtrees} --od {directory} -l 35.92,41.53,59.74 -f -L tw-run2/functions_tw.cc --neg --threshold 0.01 -W 'MuonIDSF * MuonISOSF * ElecRECOSF * ElecIDSF * TrigSF * puWeight * bTagWeight * PrefireWeight' --year 2016,2017,2018 {uncs} --amc {asimovtext} --split-factor=-1 -j 32 --AP --binname {BinName}"

slurmscaff   = 'sbatch -c 32 -p batch -J Cards_{region} -e /pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions/2020-09-20/run2/logs/plots/log.%j.%x.err -o /pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions/2020-09-20/run2/logs/plots/log.%j.%x.out --wrap "{command}"'



if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python plotterHelper.py [options]", description = "Helper for cards at Nbins.", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--Cards',   '-c', action  = "store_true", dest = "Cards",  required = False, default = False)
    parser.add_argument('--usefibre',   '-f', action  = "store_true", dest = "useFibre",  required = False, default = False)
    parser.add_argument('--Plots2D',   '-p', action  = "store_true", dest = "Plots2D",  required = False, default = False)
    parser.add_argument('--StackPlot',   '-s', action  = "store_true", dest = "StackPlot",  required = False, default = False)
    parser.add_argument('--nounc',     '-nu', action  = "store_true", dest = "nounc",    required = False, default = False)
    parser.add_argument('--asimov',    '-a', action  = "store_true", dest = "asimov",   required = False, default = False)
    
    args     = parser.parse_args()
    Cards     = args.Cards
    useFibre  = args.useFibre
    Plots2D     = args.Plots2D
    StackPlot     = args.StackPlot
    nounc =         args.nounc
    asimov =     args.asimov
    
    if asimov:
        asimovtext = "--asimov s+b"
    
    if nounc:
        unctext = ""
    
    if Cards:
        if not os.path.isdir(outpath):
            os.system("mkdir -p " + outpath)
        if useFibre:
            friendspath = friendspath.replace("phedexrw", "phedex")
        for variableYaxis in vars_Yaxis:
            for variableXaxis in vars_Xaxis:
                ArrayBinsYaxis = str(np.linspace(vars_Yaxis[variableYaxis][0][0], vars_Yaxis[variableYaxis][0][1], vars_Yaxis[variableYaxis][0][2]).tolist())
                ArrayBinsXaxis = str(np.linspace(vars_Xaxis[variableXaxis][0][0], vars_Xaxis[variableXaxis][0][1], vars_Xaxis[variableXaxis][0][2]).tolist())
                comando = commandscaff.format(region = region, function = variableYaxis + ":" + variableXaxis, Nbins =  ArrayBinsXaxis + "*" +  ArrayBinsYaxis, prodpath = friendspath + production, friendtrees = friendtrees, directory = outpath + vars_Yaxis[variableYaxis][1] + "______" + vars_Xaxis[variableXaxis][1], BinName = "Reg" + region, uncs = unctext, asimovtext = asimovtext)
                comandoSlurm = slurmscaff.format(region = region, command = comando)
                print("")
                print(comandoSlurm)
                os.system(comandoSlurm)
    
    if Plots2D:  
        folders =  sorted(os.listdir(cardsPath))
        if not os.path.isdir(cardsPath + "/TH2Plots"):
            os.system("mkdir " + cardsPath + "/TH2Plots")
        table = "%20s %20s %20s \n"  %(table_titles[0], table_titles[1], "Pearson corr coef.")
        for variables in folders:
            if 'Reg' + region +'.root' not in os.listdir(cardsPath + variables):
                continue
            else: 
                rootfile = r.TFile(cardsPath + variables + "/Reg" + region + ".root")
                histogram = rootfile.Get("x_" + process)
                if str(type(histogram)) == "<class 'ROOT.TH2D'>":
                    table = table + "%20s %20s %20s \n"  %(variables.split("______")[0], variables.split("______")[1], str(histogram.GetCorrelationFactor()))
                    c = r.TCanvas("c", "", 900, 900)
                    c.SetLeftMargin(0.15);
                    histogram.GetXaxis().SetTitle(variables.split("______")[1])
                    histogram.GetYaxis().SetTitle(variables.split("______")[0])
                    histogram.SetTitle("Process: " + process + "       Corr coef: " + str(round(histogram.GetCorrelationFactor(),5)))
                    histogram.SetMarkerStyle(1)
                    #histogram.SetMarkerSize(0.1)
                    histogram.SetStats(0)
                    histogram.Draw()
                    c.SaveAs(cardsPath + "/TH2Plots/" + "x_" + process + "_" + variables + ".png")
                    c.SaveAs(cardsPath + "/TH2Plots/" + "x_" + process + "_" + variables + ".pdf")
                    c.Close(); del c;
                    rootfile.Close()
                else:
                    table = table + "%20s %20s %20s \n"  %(variables.split("______")[0], variables.split("______")[1], "n/a")
        print(table)
        tabla = open(cardsPath + "/TH2Plots/" + "table_" + process + ".txt", "w")
        tabla.write(table)
        tabla.close()
    
    if StackPlot:  #This option plots all the 2D histograms in 1D stack plots to compare data vs MC. The unc are plotted simmetrized. 
        folders =  sorted(os.listdir(cardsPath))
        if not os.path.isdir(cardsPath + "/DatavsMC2D"):
            os.system("mkdir " + cardsPath + "/DatavsMC2D")
        for variables in folders:
            if 'Reg' + region +'.root' not in os.listdir(cardsPath + variables):
                continue
            else:
                rootfile = r.TFile(cardsPath + variables + "/Reg" + region + ".root")
                ##---data----##
                data = rootfile.Get("x_data_obs")
                data1D = r.TH1D("data", "data", data.GetNbinsX()*data.GetNbinsY(),0,10)
                contador = 0
                for x in range(0,data.GetNbinsX()):
                    for y in range(0,data.GetNbinsY()):
                        data1D.SetBinContent(contador + 1, data.GetBinContent(x+1,y+1))                            
                        contador += 1
                ##---data----##
                #Stacked Plot
                StackPlot = r.THStack("stack", "")
                MCTot1D = r.TH1D("MCTot", "MCTot", data.GetNbinsX()*data.GetNbinsY(),0,10)
                MCTotStat1D = r.TH1D("MCTotStat", "MCTotStat", data.GetNbinsX()*data.GetNbinsY(),0,10)
                MCTotNoUnc1D = r.TH1D("MCTotNoUnc", "MCTotNoUnc", data.GetNbinsX()*data.GetNbinsY(),0,10)
                leg = r.TLegend(0.75, 0.75, 0.99, 0.89)
                leg.SetTextFont(42)
                leg.SetTextSize(0.025)
                leg.SetBorderSize(0)
                leg.SetFillColor(10)
                leg.SetFillStyle(0)
                
                leg2 = r.TLegend(0.16, 0.85, 0.30, 0.99)
                leg2.SetTextFont(42)
                leg2.SetTextSize(0.075)
                leg2.SetBorderSize(0)
                leg2.SetFillColor(10)
                #leg2.SetFillStyle(0)
                for proceso in list_processes:
                    nominal = rootfile.Get("x_" + proceso)
                    #Define the histogram to each process
                    histo1D = r.TH1D("histo_" + proceso, "histo_" + proceso, nominal.GetNbinsX()*nominal.GetNbinsY(),0,10)
                    histoNoUnc1D = r.TH1D("histoNo_" + proceso, "histoNo_" + proceso, nominal.GetNbinsX()*nominal.GetNbinsY(),0,10)
                    statHisto = r.TH1D("stathisto_" + proceso, "stathisto_" + proceso, nominal.GetNbinsX()*nominal.GetNbinsY(),0,10)
                    contador = 0
                    for x in range(0,nominal.GetNbinsX()):
                        for y in range(0,nominal.GetNbinsY()):
                            UncUp = 0
                            UncDown = 0
                            histo1D.SetBinContent(contador+1, nominal.GetBinContent(x+1,y+1))
                            statHisto.SetBinContent(contador+1, nominal.GetBinContent(x+1,y+1))                            
                            statHisto.SetBinError(contador+1, nominal.GetBinError(x+1,y+1))
                            histoNoUnc1D.SetBinContent(contador+1, nominal.GetBinContent(x+1,y+1))
                            histoNoUnc1D.SetBinError(contador+1, 0)
                            for key in rootfile.GetListOfKeys():
                                nameHisto = key.GetName()
                                if nameHisto.find("x_" + proceso + "_") == -1:
                                    continue
                                variation = rootfile.Get(nameHisto)
                                diference = variation.GetBinContent(x+1,y+1) - nominal.GetBinContent(x+1,y+1)
                                if diference > 0:
                                    UncUp += diference**2
                                else:
                                    UncDown += diference**2
                            
                            UncSyst = (((UncUp**(0.5)+UncDown**(0.5))/2)**2 + (nominal.GetBinError(x+1,y+1))**2)**(0.5)
                            histo1D.SetBinError(contador+1, UncSyst)
                            
                            if nominal.GetBinContent(x+1,y+1)<2e-5:
                                histo1D.SetBinContent(contador+1, 0)
                                histo1D.SetBinError(contador+1, 0)
                                statHisto.SetBinContent(contador+1, 0)
                                statHisto.SetBinError(contador+1, 0)
                            
                            contador += 1

                            if variables.split("______")[1] == "nLooseJet":
                                histo1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0.1f}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), nominal.GetYaxis().GetBinLowEdge(y+1)))
                                MCTot1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0.1f}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), nominal.GetYaxis().GetBinLowEdge(y+1)))
                                data1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0.1f}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), nominal.GetYaxis().GetBinLowEdge(y+1)))
                                histoNoUnc1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0.1f}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), nominal.GetYaxis().GetBinLowEdge(y+1)))
                                MCTotNoUnc1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0.1f}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), nominal.GetYaxis().GetBinLowEdge(y+1)))
                            elif variables.split("______")[0] == "nLooseJet":
                                histo1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0d}" %(nominal.GetXaxis().GetBinLowEdge(x+1), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001)))
                                MCTot1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0d}" %(nominal.GetXaxis().GetBinLowEdge(x+1), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001)))
                                data1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0d}" %(nominal.GetXaxis().GetBinLowEdge(x+1), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001)))
                                histoNoUnc1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0d}" %(nominal.GetXaxis().GetBinLowEdge(x+1), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001)))
                                MCTotNoUnc1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0d}" %(nominal.GetXaxis().GetBinLowEdge(x+1), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001))) 
                            elif variables.split("______")[1] == "nLooseJet" and variables.split("______")[0] == "nLooseJet":
                                histo1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0d}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001)))
                                MCTot1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0d}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001)))
                                data1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0d}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001)))
                                histoNoUnc1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0d}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001)))
                                MCTotNoUnc1D.GetXaxis().SetBinLabel(contador,"#splitline{%0d}{%0d}" %(round(nominal.GetXaxis().GetBinLowEdge(x+1)+0.0001), round(nominal.GetYaxis().GetBinLowEdge(y+1)+0.0001)))                            
                            else:
                                histo1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0.1f}" %(nominal.GetXaxis().GetBinLowEdge(x+1), nominal.GetYaxis().GetBinLowEdge(y+1)))
                                MCTot1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0.1f}" %(nominal.GetXaxis().GetBinLowEdge(x+1), nominal.GetYaxis().GetBinLowEdge(y+1)))
                                data1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0.1f}" %(nominal.GetXaxis().GetBinLowEdge(x+1), nominal.GetYaxis().GetBinLowEdge(y+1)))
                                histoNoUnc1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0.1f}" %(nominal.GetXaxis().GetBinLowEdge(x+1), nominal.GetYaxis().GetBinLowEdge(y+1)))
                                MCTotNoUnc1D.GetXaxis().SetBinLabel(contador,"#splitline{%0.1f}{%0.1f}" %(nominal.GetXaxis().GetBinLowEdge(x+1), nominal.GetYaxis().GetBinLowEdge(y+1)))
                            

                            
                    histo1D.SetFillColor(ColourMapForProcesses[proceso])
                    StackPlot.Add(histo1D)
                    MCTot1D.Add(histo1D)
                    MCTotNoUnc1D.Add(histoNoUnc1D)
                    leg.AddEntry(histo1D, proceso, "f")
                    MCTotStat1D.Add(statHisto)
                            
                c = r.TCanvas("c", "", 1400, 1400)
                pad1 = r.TPad("pad1","pad1",0,0.3,1,1)
                pad1.SetBottomMargin(0)
                pad1.Draw()
                pad1.cd()
                pad1.SetLeftMargin(0.15)
                #c.SetBottomMargin(0.20)
                StackPlot.Draw("hist")
                StackPlot.GetHistogram().GetYaxis().SetTitle("Events")
                StackPlot.GetHistogram().GetXaxis().SetTitle("#splitline{%s}{%s}" %(variables.split("______")[1], variables.split("______")[0]))
                StackPlot.GetHistogram().GetXaxis().SetTitleOffset(1.6)    
                StackPlot.GetHistogram().GetXaxis().SetLabelSize(0.02) 
                data1D.SetMarkerStyle(20)
                data1D.SetMarkerColor(1)
                data1D.SetMarkerSize(1.5)
                data1D.Draw("E1same")
                
                MCTot1D.SetFillColor(14)
                MCTot1D.SetFillStyle(3244)
                MCTot1D.SetLineColor(0)
                MCTot1D.Draw("E2 SAME")
                leg.Draw("same")
                
                
                c.cd()
                datos1D = copy.deepcopy(data1D.Clone('datos'))
                MCcopy1D = copy.deepcopy(MCTot1D.Clone('monteCarlo'))
                datos1D.GetYaxis().SetTitle("Data/MC")
                datos1D.GetXaxis().SetTitle("#splitline{%s}{%s}" %(variables.split("______")[1], variables.split("______")[0]))
                datos1D.GetXaxis().SetTitleOffset(2)
                datos1D.GetYaxis().SetTitleOffset(0.8)
                datos1D.GetYaxis().SetRangeUser(0.8,1.2)    
                datos1D.GetXaxis().SetLabelSize(0.06) 
                pad2 = r.TPad("pad2","pad2",0,0,1,0.3)
                pad2.SetTopMargin(0)
                pad2.SetLeftMargin(0.15)
                pad2.SetBottomMargin(0.4)
                pad2.Draw()
                pad2.cd()
                #datos1D.Divide(MCTot1D)
                datos1D.Divide(MCTotNoUnc1D)
                datos1D.GetYaxis().SetTitleSize(0.08)
                datos1D.GetXaxis().SetTitleSize(0.08)
                datos1D.SetTitle("")
                datos1D.SetStats(0)
                datos1D.Draw("E1")
                MCcopy1D.Divide(MCcopy1D)
                MCcopy1D.SetFillStyle(1000)
                MCcopy1D.SetFillColorAlpha(r.kBlue,0.35)
                MCcopy1D.SetLineColor(0)
                MCcopy1D.Draw("E2 same")
                MCTotStat1D.Divide(MCTotStat1D)
                MCTotStat1D.SetFillStyle(1000)
                MCTotStat1D.SetFillColorAlpha(r.kBlue+4,0.35)
                MCTotStat1D.SetLineColor(0)
                MCTotStat1D.Draw("E2 same")
                leg2.AddEntry(MCTotStat1D, "stat unc.", "f")
                leg2.AddEntry(MCcopy1D, "total unc.", "f")
                leg2.Draw("same")
                c.cd()
                c.SaveAs(cardsPath + "/DatavsMC2D/" + variables + ".png")
                c.SaveAs(cardsPath + "/DatavsMC2D/" + variables + ".pdf")
                c.Close()
                del c
                rootfile.Close()   
                    
                    
                    
                