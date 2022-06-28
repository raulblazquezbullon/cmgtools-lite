from hepdata_lib import RootFileReader, Submission, Variable, Uncertainty, Table
import numpy as np
import os, sys

sys.path.append('./tw-run2')
from plot_postfit import dictBinsCenterRegions, dictRegionsYaxisLabels, dictRegionsXaxisLabels

### To do list
#   - Differential plots


#Create the submission obj
submission = Submission()


#### Configurations  Inclusive-------
pathOfCards = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_cards/2022-04-21_withMETUncertainty/run2/"
fitDiagnosticsName = "fitDiagnosticsrun2_1j1t2j1t2j2t.root"

processes = {"tw": "tW (signal)", "ttbar": "ttbar", "vvttv": "VV+ttbarV", "dy": "DY", "nonworz": "Non-W/Z", "total_background": "Total background", "data": "Data"}
channels = {"ch1": "a", "ch2": "b", "ch3": "c"}
channelsJets = {"ch1": "1j1b", "ch2": "2j1b", "ch3": "2j2b"}
unitsDict = {"ch1": "", "ch2": "", "ch3": "GeV"}
preOrPost = {"shapes_prefit": "prefit", "shapes_fit_s": "postfit"}
figure = {"ch1": "tmvaBDT_1j1b_20binspost.pdf", "ch2": "tmvaBDT_2j1b_12binspost.pdf", "ch3": "jet2_pt_rebinpost.pdf"}
positionCh = {"ch1": "top left", "ch2": "top right", "ch3": "bottom"}
numberBins = {"ch1": 20, "ch2": 12, "ch3": 16}
dictRegionsXaxisLabels = {
    "ch1"      : "BDT discriminant",
    "ch2"      : "BDT discriminant",
    "ch3"      : "Subleading jet $p_{T}$",
}

#### -------

#### Configurations  Differential-------
pathOfDiffCards = "/nfs/fanae/user/vrbouza/Proyectos/tw_run2/desarrollo/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp_2022_03_29_nuevassuavizv2/differential/run2/"
histosFile = "/particlefidbinOutput.root"
variablesOrdered = ["Lep1_Pt", "Lep1Lep2Jet1MET_Pz","Jet1_Pt", "Lep1Lep2Jet1_M", "Lep1Lep2_DPhi", "Lep1Lep2Jet1MET_Mt"]
variables = {"Lep1_Pt": "$Leading$ $lepton$ $p_{T}$", "Lep1Lep2Jet1MET_Pz": "$p_{Z}(e^{\pm}, \mu^{\pm}, j)$","Jet1_Pt": "$Jet$ $p_{T}$", "Lep1Lep2Jet1_M": "$m(e^{\pm}, \mu^{\pm}, j)$", "Lep1Lep2_DPhi": "$\Delta\varphi(e^{\pm}, \mu^{\pm})/\pi$", "Lep1Lep2Jet1MET_Mt": "$m_{T}(e^{\pm}, \mu^{\pm}, j, p_{T}^{miss})$"}
processesDiff = {"tru": "tW PH DR + P8", "tru_DS": "tW PH DS + P8", "tru_herwig": "tW PH DR + H7", "tru_aMC_dr": "tW aMC DR + P8", "tru_aMC_dr2": "tW aMC DR2 + P8", "tru_aMC_ds": "tW aMC DS + P8", "tru_aMC_ds_runn": "tW aMC DS dyn. + P8"} #Here the data has the same name as the variable
figureDiff = {"Jet1_Pt": "Jet1_Pt_particlefidbin.pdf", "Lep1Lep2Jet1MET_Mt": "Lep1Lep2Jet1MET_Mt_particlefidbin.pdf", "Lep1Lep2Jet1MET_Pz": "Lep1Lep2Jet1MET_Pz_particlefidbin.pdf", "Lep1Lep2Jet1_M": "Lep1Lep2Jet1_M_particlefidbin.pdf", "Lep1Lep2_DPhi": "Lep1Lep2_DPhi_particlefidbin.pdf", "Lep1_Pt": "Lep1_Pt_particlefidbin.pdf"}
unitsDiff = {"Jet1_Pt": "GeV", "Lep1Lep2Jet1MET_Mt": "GeV", "Lep1Lep2Jet1MET_Pz": "GeV", "Lep1Lep2Jet1_M": "GeV", "Lep1Lep2_DPhi": "", "Lep1_Pt": "GeV"}
names = {"Jet1_Pt": "c", "Lep1Lep2Jet1MET_Mt": "f", "Lep1Lep2Jet1MET_Pz": "b", "Lep1Lep2Jet1_M": "d", "Lep1Lep2_DPhi": "e", "Lep1_Pt": "a"}
positionDiff = {"Lep1_Pt": "top left", "Lep1Lep2Jet1MET_Pz": "top right","Jet1_Pt": "middle left", "Lep1Lep2Jet1_M": "middle right", "Lep1Lep2_DPhi": "bottom left", "Lep1Lep2Jet1MET_Mt": "bottom right"}

#### -------

pathOfPaperFig = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/Documentacion/TOP-21-010/figures/"

def createIndependentVar(xBins, name, is_binned, units):
    indep = Variable(name, is_independent=True, is_binned=is_binned, units=units)
    
    if type(xBins) == type([1,2]):
        indep.values = xBins
    
    else:
        indep.values = xBins["x"]
    
    return indep
    
def createDependentVar(process, name, is_binned, units, nBins,uncType, symm, uncHisto=False, alsoStat = None):
    dep = Variable(name, is_independent=False, is_binned=is_binned, units=units)
    if nBins == -1:
        nBins = len(process["y"])
    
    dep.values = process["y"][0:nBins]
    
    # Add uncertainty
    if uncType == None:
        return dep
    
    if alsoStat != None:
        uncStat = Uncertainty("Statistical uncertainty", is_symmetric = symm)
        uncStat.values = alsoStat
        dep.add_uncertainty(uncStat)    

    if uncHisto:
        unc = Uncertainty(uncType, is_symmetric = symm)
        unc.values = uncHisto
        dep.add_uncertainty(unc)
    else:
        unc = Uncertainty(uncType, is_symmetric = symm)
        unc.values = process['dy'][0:nBins]
        dep.add_uncertainty(unc)
    
    return dep


if __name__=="__main__":
    
    # Inclusive cross section results ----
    reader = RootFileReader(pathOfCards + fitDiagnosticsName)
    for folder in ["shapes_prefit", "shapes_fit_s"]:
        for ch in channels:
            ## Table
            table = Table("Figure 6" + channels[ch] + " " + preOrPost[folder])
            table.description = preOrPost[folder].capitalize() + " distribution of the " + dictRegionsXaxisLabels[ch] + " in the " + channelsJets[ch] + "  region. The uncertainty band includes the statistical and systematic sources. The bottom of each panel shows the ratios of data to the prediction from simulations (red line) and from the fit (points), together with their corresponding uncertainties (solid and hatched band, respectively)."
            table.location = "Data from Figure 6 (" + positionCh[ch] + "), located on page 12."
            #table.keywords["observables"] = ["N"]
            table.add_image(pathOfPaperFig + figure[ch])
            
            nameX, nameY, units = dictRegionsXaxisLabels[ch], dictRegionsYaxisLabels[ch] + " ", unitsDict[ch]
            table.add_variable(createIndependentVar(dictBinsCenterRegions[ch], nameX, False, units))
    
            for process in processes:
                if process == "data":
                    dataGraph = reader.read_graph(folder + "/" + ch + "/" + process)
                    table.add_variable(createDependentVar(dataGraph, nameY + processes[process], False, "", numberBins[ch],"Statistical uncertainty", False))
                else:
                    histogram = reader.read_hist_1d(folder + "/" + ch + "/" + process)
                    table.add_variable(createDependentVar(histogram, nameY + processes[process], False, "", numberBins[ch], "Total uncertainty", True))
            ## Add table and create the yaml files
            submission.add_table(table)
    
    # ----
    table = Table("Cross section")
    table.location = "Data from page 13."
    table.description = "Observed and theoretical cross sections. In the observed, the first uncertainty is statistical, the second is the systematic, and the third the luminosity. In the theoretical, the first uncertainty is due to scale variations, the second due to the choice of PDF."
    sigmaTheo = Variable("$\sigma_{tW}^{SM}$ ($\sqrt{s}=13$ TeV)", is_independent=False, is_binned=False, units="pb")
    sigmaTheoUncScale = Uncertainty("scale", is_symmetric = True)
    sigmaTheoUncPDF = Uncertainty("PDF", is_symmetric = True)
    sigmaTheo.values = [71.7]
    sigmaTheoUncScale.values = [1.8]
    sigmaTheoUncPDF.values = [3.4]
    sigmaTheo.add_uncertainty(sigmaTheoUncScale)
    sigmaTheo.add_uncertainty(sigmaTheoUncPDF)
    
    sigmaExp = Variable("$\sigma_{tW}^{Obs.}$ ($\sqrt{s}=13$ TeV)", is_independent=False, is_binned=False, units="pb")
    sigmaExpUncStat = Uncertainty("stat", is_symmetric = True)
    sigmaExpUncSys = Uncertainty("syst", is_symmetric = False)
    sigmaExpUncLum = Uncertainty("lumi", is_symmetric = True)
    sigmaExp.values = [79.2]
    sigmaExpUncStat.values = [0.9]
    sigmaExpUncSys.values = [(-8.0,7.7)]
    sigmaExpUncLum.values = [1.2]
    sigmaExp.add_uncertainty(sigmaExpUncStat)
    sigmaExp.add_uncertainty(sigmaExpUncSys)
    sigmaExp.add_uncertainty(sigmaExpUncLum)
    
    table.add_variable(sigmaExp)
    table.add_variable(sigmaTheo)
    submission.add_table(table)
    # Differential cross section ----
    
    for folder in variablesOrdered:
        processesDiff[folder] = "Data"
        reader = RootFileReader(pathOfDiffCards + folder + histosFile)
        ## Table
        table = Table("Figure 8" + names[folder])
        table.description = "Normalised differential tW production cross section as a function of the " + variables[folder] + ". Predictions from POWHEG (PH) + PYTHIA 8 (P8) DR and DS, POWHEG + HERWIG 7 (H7) DR, MADGRAPH5_aMC@NLO (aMC) + PYTHIA 8 DR, DR2, DS and DS with a dynamic factor are also shown. The grey band shows the statistical uncertainty whereas the orange the total one. In the bottom panel, the ratio between predictions and data is shown."
        table.location = "Data from Figure 8 (" + positionDiff[folder] + "), located on page 15."
        #table.keywords["observables"] = ["N"]
        table.add_image(pathOfPaperFig + figureDiff[folder])
        
        nameX, nameY, unitsX, unitsY = variables[folder], "$(1/\sigma_{fid.})d\sigma/d$" + variables[folder], unitsDiff[folder], "1/GeV"
        
    
        for process in processesDiff:
            if processesDiff[process] == "Data":
                dataGraph = reader.read_hist_1d(folder)
                table.add_variable(createIndependentVar(dataGraph, nameX, False, unitsX))
                histSysUp = reader.read_hist_1d(folder + "_totalUp")
                histSysDown = reader.read_hist_1d(folder + "_totalDown")
                histSysUpVal = histSysUp["dy"]
                histSysDownVal = histSysDown["dy"]
                histStatUp = reader.read_hist_1d(folder + "_statUp")
                histStatDown = reader.read_hist_1d(folder + "_statDown")
                histStatUpVal = histStatUp["dy"]
                histStatDownVal = histStatDown["dy"]
                for nbin in range(0,len(histSysUpVal)):
                    histSysUpVal[nbin] = abs(histSysUpVal[nbin])
                    histSysDownVal[nbin] = -abs(histSysDownVal[nbin])
                    histStatUpVal[nbin] = abs(histStatUpVal[nbin])
                    histStatDownVal[nbin] = -abs(histStatDownVal[nbin])

                histoSys = zip(histSysUpVal,histSysDownVal)
                histoStat = zip(histStatUpVal,histStatDownVal)
                table.add_variable(createDependentVar(dataGraph, nameY + " " + processesDiff[process], False, unitsY, -1,"Total uncertainty", False, histoSys, histoStat))
                
            else:
                histogram = reader.read_hist_1d(process)
                table.add_variable(createDependentVar(histogram, nameY + " " + processesDiff[process], False, unitsY, -1, None, True))
        
        del processesDiff[folder]
        ## Add table and create the yaml files
        submission.add_table(table)    
    
    # ----
    
    submission.create_files("./tw-run2/HEP-Data/example_output")
    os.system("mv submission.tar.gz ./tw-run2/HEP-Data/example_output")

