'''
Library of all the variables so everything is centralised and there are not confusions
'''

import ROOT as r
import warnings as wr
import os

# === ESSENTIAL PARAMETERS OF THE ANALYSIS. CHANGING THIS APPLIES TO EVERYTHING. ===
nuncs       = 3         # Number of uncs. shown in the relative uncertainty plots
nBinsForBDT = 4         # Number of bins for the BDT discr. distribution used for the signal extraction procedure
                        #   for the differential analysis when using maximum-likelihood fits.
diffControlReg = "3j2t" # Control region used in the differential signal extraction step

unifttbar   = True      # Force the BDT disc. distrib. bins to hace the same amount of ttbar events.
asimov      = True      # Use of Asimov dataset or data
doxsec      = True      # Show events or diff. cross section in final results
doPre       = True      # Show or not show the "Preliminary" in the plots
doSym       = True      # Symmetrise the uncertainties or not
doReg       = False     # Regularise distributions (general setting, can be overrrided for each variable separately)
doArea      = False     # Apply area constraint in unfolding (general setting, can be overrrided for each variable separately)
onlyTotal   = True      # Only show total unc. line in the differential relative unc. plots.


# === OTHER IMPORTANT DEFINITIONS ===
LumiDict    = {2016 : 36.33,
               2017 : 41.53,
               2018 : 59.74}
TotalLumi   = LumiDict[2016] + LumiDict[2017] + LumiDict[2018] # In femtobarns

plotlimits   = tuple([float(i) for i in "0.00, 0.25, 1.00, 1.00".split(',')]) # xlow, ylow, xup, yup
ratiolimits  = tuple([float(i) for i in "0.00, 0.00, 1.00, 0.25".split(',')]) # xlow, ylow, xup, yup
margins      = "0.06, 0.1, 0.04, 0.1" # top, bottom, right, left
marginsratio = "0.03, 0.4, 0.04, 0.1" # top, bottom, right, left
legpos       = (0.82, 0.65, 0.93, 0.93)

if asimov: labellegend = 'Asimov dataset'
else:      labellegend = 'Data'

#storagepath = "/pool/ciencias/userstorage/vrbouza/proyectos/TW/MiniTrees/"
storagepath = "/pool/phedex/userstorage/vrbouza/proyectos/TW/MiniTrees/"

def GetLastFolder(stpth):
    savefolders   = next(os.walk(stpth))[1]
    saveyears     = map(int, [i[6:]  for i in savefolders])
    savefolders   = [i for i in savefolders if int(i[6:]) == max(saveyears)]
    savemonths    = map(int, [i[3:5] for i in savefolders])
    savefolders   = [i for i in savefolders if int(i[3:5]) == max(savemonths)]
    savedays      = map(int, [i[:2]  for i in savefolders])
    savefolders   = [i for i in savefolders if int(i[:2]) == max(savedays)]
    return (stpth + savefolders[0] + "/")

def SetUpWarnings():
    wr.simplefilter("always", UserWarning)
    wr.filterwarnings(action = 'ignore', category = RuntimeWarning, message = 'TClass::Init:0: RuntimeWarning: no dictionary for class')
    return

def mean(numbers):
    return float(sum(numbers)) / max(len(numbers), 1)

def GiveMeTheExpNamesWOJER(inl):
    l = []
    for el in inl:
        if "JER" in el or "Down" in el: continue
        l.append(el.replace("Up", ""))
    return ",".join(l)

def confirm(message = "Do you wish to continue?"):
    """
    Ask user to enter y(es) or n(o) (case-insensitive).
    :return: True if the answer is Y.
    :rtype: bool
    """
    answer = ""
    while answer not in ["y", "n", "yes", "no"]:
        answer = raw_input(message + " [Y/N]\n").lower()
    return answer[0] == "y"

# === DICTIONARIES ===
# var           := name of the variable in the tree to make cards
# var_response  := name of the variable in the response matrix without the M
varList = {}
varList['LCurve'] = {
    'xaxis' : '\\log_{10}\\left(\\mathscr{L}_{1}\\right)',
    'yaxis' : '\\log_{10}\\left(\\mathscr{L}_{2}\\,/\\tau^{2}\\right)',
}

varList['LCurvature'] = {
    'xaxis' : '\\log_{10}\\left(\\tau\\right)',
    'yaxis' : '\\mathscr{C}\\left(\\log_{10}\\left(\\tau\\right)\\right)',
}

varList['LogTauCurv'] = varList['LCurvature']

varList['Names'] = {
    #'Variables'   : ["Lep1_Pt", "Jet1_Pt", "Lep1Lep2_DPhi", "Lep1Lep2Jet1MET_Pz", "Lep1Lep2Jet1MET_Mt", "Lep1Lep2Jet1_M"],
    #'Variables'   : ["Lep1_Pt", "Jet1_Pt", "Lep1Lep2_DPhi", "Lep1Lep2Jet1MET_Pz", "Lep1Lep2Jet1MET_Mt", "Lep1Lep2Jet1_M", "Fiducial"],
    'Variables'   : ["Lep1_Pt", "Jet1_Pt", "Lep1Lep2_DPhi", "Lep1Lep2Jet1MET_Pz", "Lep1Lep2Jet1MET_Mt", "Lep1Lep2Jet1_M"],
    'ExpSysts'    : ["JESUp", "JESDown", "JERUp", "ElecEffUp", "ElecEffDown", "MuonEffUp", #   DO NOT MOVE THE FIRST THREE TO OTHER
                     "MuonEffDown", "TrigUp", "TrigDown", "PUUp", "PUDown", "BtagUp",      # POSITION: it will affect the calculus
                     #"BtagDown", "MistagUp", "MistagDown"],                                # of the response matrices.
                     "BtagDown", "MistagUp", "MistagDown", "TopPtUp", "TopPtDown"],        # of the response matrices.  WITH TOP PT REW
    'ttbarSysts'  : ["ttbarMEUp", "ttbarMEDown", "pdfUp", "pdfDown", "hDampUp", "hDampDown", "UEUp", "UEDown"],
    'specialSysts': ["JERDown", "DSDown"],
    'colorSysts'  : ["GluonMoveCRTuneerdON", "PowhegerdON", "QCDbasedCRTuneerdON", "GluonMoveCRTune"],
    'NormSysts'   : ["ttbarUp", "ttbarDown", "Non-WorZUp", "Non-WorZDown", "DYUp", "DYDown", "VVttbarVUp", "VVttbarVDown"],
}


varList['Lep1Lep2Jet1MET_Mt'] = {
    #'xaxis'       : 'm_{T}(\\ell_{1}, \\ell_{2},\\slash{E}_{T}, j) (GeV)',
    'xaxis'       : '#it{m}_{T}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{p}_{T}^{miss}, #it{j}) (GeV)',
    'printname'   : "\\transmassvar (\GeV)",
    'printnamenodim':"\\transmassvar",
    'mathprintname': "\\transmassvar",
    'yaxis_particle'       : 'd#sigma/d(#it{m}_{T}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{p}_{T}^{miss}, #it{j})) (pb)',
    'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(#it{m}_{T}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{p}_{T}^{miss}, #it{j})) (adim.)',
    'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(#it{m}_{T}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{p}_{T}^{miss}, #it{j})) (1/GeV)',
    'yaxisnorm'   : 'd#sigma/d(#it{m}_{T}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{p}_{T}^{miss}, #it{j})) (pb/GeV)',
    'yaxis_unc'   : 'Relative uncertainty (adim.)',

    'bins_particle' : [100., 220., 280., 325., 400., 500.], # propuesta (5 bins)
    'bins_detector' : [100., 220., 250., 260., 270., 280., 290., 300., 325., 400., 500.], # propuesta (5 bins) SELECCIONADA

    #'bins_particle'  : [0., 220., 270., 300., 325., 400., 500.], # propuesta (6 bins)
    #'bins_detector' : [0., 220., 240., 250., 260., 270., 280., 290., 300., 310., 325., 400., 500.], # propuesta (6 bins)

    #'bins_particle'  : [0., 220., 260., 280., 300., 325., 400., 500.], # propuesta (7 bins)
    #'bins_detector' : [0., 220., 240., 250., 260., 270., 275., 280., 285., 290., 300., 310., 325., 400., 500.], # propuesta (7 bins)

    #'bins_particle'  : [0., 220., 240., 270., 300., 320., 350., 430., 500.], # propuesta (8 bins)
    #'bins_detector' : [0., 190., 220., 230., 240., 250., 260., 270., 280., 290., 300., 310., 320., 330., 350., 430., 500.], # propuesta (8 bins)

    #'bins_particle'  : [0., 220., 240., 250., 260., 270., 280., 320., 400., 500.], # propuesta (9 bins)
    #'bins_detector' : [0., 220., 230., 240., 250., 255., 260., 265., 270., 275., 280., 285., 290., 300., 310., 320., 330., 400., 500.], # propuesta (9 bins)

#    'bins_particle' : [100., 200., 240., 280., 300., 320., 340., 380., 440., 500., 600.], # propuesta (10 bins particula, 23 bines detector)
#    'bins_detector' : [100., 180., 200., 220., 240., 250., 260., 270., 280., 290., 300., 310., 320., 330., 340., 360., 380., 400., 420., 440., 460., 500., 550., 600.], # propuesta (10 bins particula, 23 bines detector)

    #'descbinning' : [0., 800.], ## TEMPORAL
    #'ndescbins'   : 20, ## TEMPORAL
    "var_detector"  : 'min(max(Lep1Lep2Jet1MET_Mt, 101.), 499.)',
#    "var_detector"  : 'min(max(Lep1Lep2Jet1MET_Mt, 101.), 599.)',
    'var_response'  : 'Lep1Lep2Jet1MET_Mt',
    'var_particle'  : 'min(max(DressLep1Lep2Jet1MET_Mt, 101.), 499.)',
    #'var_particle'  : 'min(max(DressLep1Lep2Jet1MET_Mt, 101.), 599.)',
    'legpos'      : (0.51, 0.55, 0.71, 0.93),
    #'legposdesc'  : (0.15, 0.425, 0.35, 0.81),
    "legposdesc"  : (0.65, 0.55, 0.85, 0.93),
    "maxdesc"  : 2600,
    'legpos_detectoras':"BL",
    'legpos_detector' : "BL",
    'legpos_particlefid'  : "TL",
    "legpos_particle"   : (.18, .26, .36, .03),
    #"legpos_particle"  : "BL",
    'legpos_particleas': "TL",
    'legpos_detectorunc' : "TL",
    'legpos_particleunc'  : "TC",
    'legpos_particlefidunc'  : "TL",
    #'legpos_particlefidbin':(.175, .73, .27, .49),
    'legpos_particlefidbin': (.52, .9, .72, .65),
    'legpos_particlefidbinunc':"TL",
    'resptxtsize' : 0.9,
    'txtsize_covdetector': 0.75,
    'txtsize_covparticle': 1.5,
    'txtangle_covparticle': 45,
    "txtsize_covparticlefidbin": 1.4,
    'txtangle_covparticlefidbin': 35,
    "yaxisuplimitunf": 0.176,
    "yaxismax_particlefid" : 1.6,
    #"yaxismax_particlefidbinunc" : 1.8,
    "yaxismax_particlefidbinunc" : 1.2,
    "yaxismax_unf" : 2,
    #"yaxismax_particlebinunc": 2.0,
    "yaxismax_particlebinunc": 2.1,
    'legpos_particlebin': "TL",
    "legpos_particlebinunc" : "TC",
    "yaxismax_particlebin": 0.0038,
    #"yaxismax_ratio_fidnorm" : 4.0,
#    "yaxismax_ratio_fidnorm" : 2.5,
    "yaxismax_ratio_fidnorm" : 1.5,
    "yaxismax_ratio_norm" : 5.0,
    "yaxismax_particlefidbin": 0.0155,
}

varList['Lep1Lep2Jet1MET_MtATLAS'] = {
    #'xaxis'       : 'm_{T}(\\ell_{1}, \\ell_{2},\\slash{E}_{T}, j) (GeV)',
    'xaxis'       : '#it{m}_{T}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{p}_{T}^{miss}, #it{j}) (GeV)',
    'yaxis_particle'       : 'd#sigma/d(#it{m}_{T}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{p}_{T}^{miss}, #it{j})) (pb)',
    'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(#it{m}_{T}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{p}_{T}^{miss}, #it{j})) (adim.)',
    'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(#it{m}_{T}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{p}_{T}^{miss}, #it{j})) (1/GeV)',
    'bins_particle'  : [0., 275., 375., 500., 1000.],
    'bins_detector' : [0., 200., 235., 275., 300., 325., 400., 500., 1000.],
    "var_detector"         : 'Lep1Lep2Jet1MET_Mt',
    'var_response': 'Lep1Lep2Jet1MET_MtATLAS',
    'var_particle'     : 'DressLep1Lep2Jet1MET_Mt',
    'legpos'      : (0.51, 0.55, 0.71, 0.93),
    'legposdesc'  : (0.15, 0.425, 0.35, 0.81),
    'legpos_detectoras':"BL",
    'legpos_detector' : "BL",
    'legpos_particlefid'  : "TL",
    "legpos_particle"  : (.18, .65, .38, .40),
    'legpos_particleas': "TL",
    'legpos_detectorunc' : "TL",
    'legpos_particleunc'  : "TC",
    'legpos_particlefidunc'  : "TL",
    'legpos_particlefidbin':"ML",
    'legpos_particlefidbinunc':"TL",
    'resptxtsize' : 0.9,
    'txtsize_covdetector': 0.75,
    'txtsize_covparticle': 1.5,
    "txtsize_covparticlefidbin": 1.4,
    'txtangle_covparticlefidbin': "45",
    "yaxismax_particlebinunc": 1.7,
}

varList['Lep1Lep2Jet1_M'] = {
    #'xaxis'       : 'm(#ell_{1}, #ell_{2}, j) (GeV)',
    'xaxis'       : '#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}) (GeV)',
    'printname'   : '\\invmassvar (\\GeV)',
    'printnamenodim':'\\invmassvar',
    'mathprintname': '\\invmassvar',
    'yaxis_particle'       : 'd#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (pb)',
    'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (adim.)',
    'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (1/GeV)',
    'yaxisnorm'   : 'd#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (pb/GeV)',
    'yaxis_unc'   : 'Relative uncertainty (adim.)',
    #'bins_particle'  : [0., 125., 250., 350., 400.],                         # usado en drafts, en nota, etc. (4 bins)
    #'bins_detector' : [0., 125., 170., 180., 200., 240., 290., 350., 400.], # usado en drafts, en nota, etc. (4 bins)

    #'bins_particle'  : [0., 130., 170., 200., 325., 400.], # propuesta (5 bins)
    #'bins_detector' : [0., 130., 140., 150., 160., 170., 180., 190., 200., 325., 400.], # propuesta (5 bins)

    #'bins_particle'  : [0., 130., 170., 200., 205., 325., 400.], # propuesta (6 bins)
    #'bins_detector' : [0., 130., 140., 150., 160., 170., 180., 190., 200., 210., 240., 250., 325., 400.], # propuesta (6 bins) SELECCIONADA
    #'bins_particle'  : [0., 130., 170., 200., 250., 325., 400.], # propuesta (6 bins) BUENA
    #'bins_detector' : [0., 130., 140., 150., 160., 170., 180., 190., 200., 210., 220., 250., 325., 400.], # propuesta (6 bins) SELECCIONADA BUENA

    'bins_particle'  : [50., 130., 170., 200., 250., 325., 400.], # propuesta (6 bins) BUENA
    'bins_detector' : [50., 130., 140., 150., 160., 170., 180., 190., 200., 210., 220., 250., 325., 400.], # propuesta (6 bins) SELECCIONADA BUENA

    #'bins_particle'  : [0., 130., 150., 170., 200., 250., 325., 400.], # propuesta (7 bins)
    #'bins_detector' : [0., 130., 140., 150., 155., 160., 165., 170., 180., 190., 200., 210., 220., 250., 325., 400.], # propuesta (7 bins)

    #'bins_particle'  : [0., 125., 170., 180., 200., 240., 290., 350., 400.], # propuesta (8 bins)
    #'bins_detector' : [0., 125., 150., 160., 170., 180., 190., 200., 210., 220., 230., 240., 250., 275., 290., 350., 400.], # propuesta (8 bins)

    #'bins_particle'  : [0., 130., 150., 160., 170., 180., 200., 250., 325., 400.], # propuesta (9 bins)
    #'bins_detector' : [0., 130., 140., 145., 150., 155., 160., 165., 170., 175., 180., 185., 190., 195., 200., 225., 250., 325., 400.], # propuesta (9 bins)

    #'bins_particle'  : [0., 130., 140., 150., 160., 170., 180., 200., 250., 325., 400.], # propuesta (10 bins)
    #'bins_detector' : [0., 130., 140., 145., 150., 155., 160., 165., 170., 175., 180., 185., 190., 195., 200., 205., 210., 220., 250., 325., 400.], # propuesta (10 bins)

    'descbinning' : [0., 400.],
    'ndescbins'   : 16,
    'legpos'      : (0.75, 0.55, 0.95, 0.93),
    #'legposdesc'  : (0.11, 0.435, 0.31, 0.82),
    #'legposdesc'  : (0.65, 0.55, 0.85, 0.93),
    'legposdesc'  : (0.7, 0.55, 0.90, 0.93),
    "var_detector"         : 'min(max(Lep1Lep2Jet1_M, 51.), 399.)',
    'var_response'         : 'Lep1Lep2Jet1_M',
    'var_particle'         : 'min(max(DressLep1Lep2Jet1_M, 51.), 399.)',
    'legpos_detectorunc' : "TC",
    'legpos_particlefidunc'  : "TC",
    'legpos_particleunc'  : "TL",
    'legpos_particlefidbinunc': (.45, .615, .63, .9),
    'legpos_particlefidbin': (.52, .9, .72, .65),
    "legpos_particle"   : (.52, .9, .72, .65),
    'txtsize_covdetector': 0.5,
    'txtsize_covparticle': 1.5,
    'txtangle_covparticle': 35,
    'txtsize_covparticlefidbin': 1.3,
    'txtangle_covparticlefidbin': 35,
    "yaxisuplimitunf": 0.15,
    "yaxismax_particlefidunc" : 0.7,
    "yaxismax_particlefidbinunc" : 0.7,
    "yaxismax_particlefidbin" : 0.012,
    "yaxismax_unf" : 1.55,
    "yaxismax_particlebin": 0.004,
    "legpos_particlebinunc" : (.18, .5, .31, .785),
    "legpos_particlefidbinunc": (.4, .615, .58, .9),
#    "yaxismax_ratio_fidnorm" : 2.5,
    "yaxismax_ratio_fidnorm" : 1.5,
}


varList['Lep1Lep2Jet1_M_control'] = {
    #'xaxis'       : 'm(#ell_{1}, #ell_{2}, j) (GeV)',
    'xaxis'       : '#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}) (GeV)',
    'printname'   : '\\invmassvar (\\GeV)',
    'printnamenodim':'\\invmassvar',
    'mathprintname': '\\invmassvar',
    'yaxis_particle'       : 'd#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (pb)',
    'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (adim.)',
    'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (1/GeV)',
    'yaxisnorm'   : 'd#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (pb/GeV)',
    'yaxis_unc'   : 'Relative uncertainty (adim.)',


    'bins_particle'  : [50., 130., 170., 200., 250., 325., 400.],
    'bins_detector' : [0., 120., 180., 240., 300., 360., 420., 480., 540., 600.],

    'descbinning' : [0., 600.],
    'ndescbins'   : 16,
    'legpos'      : (0.75, 0.55, 0.95, 0.93),
    'legposdesc'  : (0.7, 0.55, 0.90, 0.93),
    "var_detector"         : 'min(max(Lep1Lep2Jet1_M, 0.), 599.)',
    'var_response'         : 'Lep1Lep2Jet1_M',
    'var_particle'         : 'min(max(DressLep1Lep2Jet1_M, 0.), 599.)',
    'legpos_detectorunc' : "TC",
    'legpos_particlefidunc'  : "TC",
    'legpos_particleunc'  : "TL",
    'legpos_particlefidbinunc': (.45, .615, .63, .9),
    'legpos_particlefidbin': (.52, .9, .72, .65),
    "legpos_particle"   : (.52, .9, .72, .65),
    'txtsize_covdetector': 0.5,
    'txtsize_covparticle': 1.5,
    'txtangle_covparticle': 35,
    'txtsize_covparticlefidbin': 1.3,
    'txtangle_covparticlefidbin': 35,
    "yaxisuplimitunf": 0.15,
    "yaxismax_particlefidunc" : 0.7,
    "yaxismax_particlefidbinunc" : 0.7,
    "yaxismax_unf" : 1.55,
    "yaxismax_particlebin": 0.004,
    "legpos_particlebinunc" : (.18, .5, .31, .785),
    "legpos_particlefidbinunc": (.4, .615, .58, .9),
    "yaxismax_ratio_fidnorm" : 2.5,
}


varList['Lep1Lep2Jet1_MATLAS'] = {
    #'xaxis'       : 'm(#ell_{1}, #ell_{2}, j) (GeV)',
    'xaxis'       : '#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}) (GeV)',
    'yaxis_particle'       : 'd#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (pb)',
    'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (adim.)',
    'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(#it{m}(#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (1/GeV)',
    'bins_particle'  : [0., 125., 175., 225., 300., 400., 1000.],
    'bins_detector' : [0., 125., 150., 165., 175., 190., 205., 225., 250., 300., 350., 400., 1000.],
    'descbinning' : [0., 400.],
    'ndescbins'   : 16,
    'legpos'      : (0.75, 0.55, 0.95, 0.93),
    #'legposdesc'  : (0.11, 0.435, 0.31, 0.82),
    'legposdesc'  : (0.65, 0.55, 0.85, 0.93),
    "var_detector"         : 'Lep1Lep2Jet1_M',
    'var_response': 'Lep1Lep2Jet1_MATLAS',
    'var_particle'     : 'DressLep1Lep2Jet1_M',
    'legpos_detectorunc' : "TC",
    'legpos_particlefidunc'  : "TL",
    'legpos_particlefidbin':"ML",
    'txtsize_covdetector': 0.5,
    'txtsize_covparticle': 1.3,
}

varList['Jet1_Pt'] = {
    'printname'   : 'Jet \\pt (\\GeV)',
    'printnamenodim':'Jet \\pt',
    'mathprintname': '\\text{Jet }\\pt',
    'xaxis'       : 'Jet #it{p}_{T} (GeV)',
    'yaxis_particle'       : 'd#sigma/d(jet #it{p}_{T}) (pb)',
    'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(jet #it{p}_{T}) (adim.)',
    'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(jet #it{p}_{T}) (1/GeV)',
    'yaxisnorm'   : '(1/#sigma_{fid.})d#sigma/d(jet #it{p}_{T}) (pb/GeV)',
    'yaxis_unc'   : 'Relative uncertainty (adim.)',
    #'bins_particle'  : [0, 75, 200, 300],
    #'bins_detector' : [0., 50., 75., 110., 150., 200., 300.],
   #'bins_particle'  : [0., 75., 140., 200., 300.],                            # binning presentado en singletop
   #'bins_detector' : [0., 60., 80., 105., 120., 140., 170., 210., 300.],
#    'bins_particle'  : [0., 60., 110., 150., 300.],
#    'bins_detector' : [0., 60., 75., 90., 110., 125., 150., 175., 300.],
    #'bins_particle'  : [0., 60., 90., 120., 150.],
    #'bins_detector' : [0., 60., 70., 80, 90., 100., 110., 120., 150.],
    #'bins_particle'  : [30., 60., 90., 120., 150.],                        # usado en drafts, en nota, etc. (4 bins)
    #'bins_detector' : [30., 60., 70., 80, 90., 100., 110., 120., 150.],   # usado en drafts, en nota, etc. (4 bins)

    #'bins_particle'  : [30., 50., 70., 90., 125., 150.], # propuesta (5 bins)
    #'bins_detector' : [30., 40., 45., 50., 55., 60., 65., 70., 90., 125., 150.], # propuesta (5 bins) SELECCTIONADA, VIEYA

    'bins_particle'  : [30., 50., 70., 85., 110., 150.], # propuesta (5 bins)
    'bins_detector' : [30., 40., 45., 50., 55., 60., 65., 70., 85., 110., 150.], # propuesta (5 bins) SELECCTIONADA

    #'bins_particle'  : [30., 40., 50., 70., 90., 125., 150.], # propuesta (6 bins)
    #'bins_detector' : [30., 35., 40., 45., 50., 55., 60., 65., 70., 90., 105., 125., 150.], # propuesta (6 bins)

    #'bins_particle'  : [30., 40., 50., 60., 70., 90., 125., 150.], # propuesta (7 bins)
    #'bins_detector' : [30., 35., 37.5,40., 42.5, 45., 50., 55.,  60., 65., 70., 80., 105., 125., 150.], # propuesta (7 bins)

    #'bins_particle'  : [30., 50., 60., 70., 80., 90., 105., 125., 150.], # propuesta (8 bins)
    #'bins_detector' : [30., 40., 50., 55., 60., 65., 70., 75., 80., 85., 90., 95., 100., 105., 115., 125., 150.], # propuesta (8 bins)

    #'bins_particle'  : [30., 40., 45., 50., 55., 60., 70., 80., 125., 150.], # propuesta (9 bins)
    #'bins_detector' : [30., 37.5, 40.,42.5, 45.,47.5, 50.,52.5,  55., 57.5, 60., 65., 70., 75., 80., 90., 105., 125., 150.], # propuesta (9 bins)

    #'bins_particle'  : [30., 40., 45., 50., 55., 60., 70., 80., 90., 125., 150.], # propuesta (10 bins)
    #'bins_detector' : [30., 35.,37.5, 40.,42.5, 45.,47.5, 50.,52.5,  55., 57.5, 60., 65., 70., 75., 80., 85., 90., 105., 125., 150.], # propuesta (10 bins)

    'descbinning' : [10., 150.],
    'ndescbins'   : 14,
    'legpos'      : (0.7, 0.55, 0.90, 0.93),
    'legposdesc'  : (0.7, 0.55, 0.90, 0.93),
    'maxdesc'     : 3600,
    "legpos_particle"  : "TC",
    "var_detector": 'min(max(Jet1_Pt, 31.), 149)',
    'var_response': 'Jet1_Pt',
    'var_particle': 'min(max(DressJet1_Pt, 31.), 149)',
    'legpos_detectorunc' : "TL",
    'legpos_particleunc'  : "TL",
    'legpos_particlefidunc'  : "TL",
    'legpos_particlefidbinunc':"TL",
    'legpos_particlefidbin':"TC",
    "legpos_particlebinunc" : "TL",
    'resptxtsize' : 1.5,
    'txtsize_covparticle': 2,
    'txtsize_covdetector': 1.25,
    "txtsize_covparticlefidbin": 1.8,
    'txtangle_covparticle': 45,
    "txtangle_covparticlefidbin": 45,
    "yaxisuplimitunf": 0.20,
    "yaxismax_particlefidbin": 0.029,
    "yaxismax_particlefid" : 1.8,
    #"yaxismax_particlefidbinunc" : 1.2,
    "yaxismax_particlefidbinunc" : 0.5,
    "yaxismax_unf" : 2.3,
    "yaxismax_particlebinunc": 1.8,
    "yaxismax_particlebin": 0.010,
    "yaxismax_ratio_norm" : 3.5,
#    "yaxismax_ratio_fidnorm" : 2.5,
    "yaxismax_ratio_fidnorm" : 1.5,
}

varList['Lep1_Pt'] = {
    #'xaxis'       : 'p_{T}(\\ell_{1}) (GeV)',
    'printname'   : 'Leading lepton \\pt (\\GeV)',
    'printnamenodim': 'Leading lepton \\pt',
    'mathprintname':'\\text{Leading lepton }\\pt',
    'xaxis'       : 'Leading lepton #it{p}_{T} (GeV)',
    'yaxis_particle'       : 'd#sigma/d(leading lepton #it{p}_{T}) (pb)',
    'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(leading lepton #it{p}_{T}) (adim.)',
    'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(leading lepton #it{p}_{T}) (1/GeV)',
    'yaxisnorm'   : 'd#sigma/d(leading lepton #it{p}_{T}) (pb/GeV)',
    'yaxis_unc'   : 'Relative uncertainty (adim.)',
    #'bins_particle'  : [0, 50, 120, 190, 250],
    #'bins_detector' : [0, 50, 65, 85, 97, 110, 145, 180, 250],
   #'bins_particle'  : [0, 50, 120, 160, 250],                            # binning presentado en singletop
   #'bins_detector' : [0, 50, 65, 85, 97, 110, 145, 180, 250],
#    'bins_particle'  : [0., 50., 90., 135., 250.],
#    'bins_detector' : [0., 50., 65., 80., 95., 110., 130., 150., 250.],
    #'bins_particle'  : [0., 50., 90., 135., 250.],
    #'bins_detector' : [0., 50., 60., 75., 90., 105., 115., 135., 250.],
    #'bins_particle'  : [0., 50., 90., 125., 150.],
    #'bins_detector' : [0., 50., 60., 70., 80., 90., 105., 125., 150.], # antes de 15-10-2018
    #'bins_particle'  : [25., 50., 90., 125., 150.],                      # usado en drafts, en nota, etc. (4 bins)
    #'bins_detector' : [25., 50., 60., 70., 80., 90., 105., 125., 150.], # usado en drafts, en nota, etc. (4 bins)

    #'bins_particle'  : [25., 45., 65., 90., 125., 150.], # propuesta (5 bins)
    #'bins_detector' : [25., 35., 45., 50.,  55., 60., 65., 75., 90., 125., 150.], # propuesta (5 bins)

    #'bins_particle'  : [25., 45., 65., 85., 100., 125., 150.], # propuesta (6 bins)
    #'bins_detector' : [25., 35., 45., 50., 55., 60., 65., 75., 85., 100., 115., 125., 150.], # propuesta (6 bins)

    #'bins_particle'  : [25., 45., 55., 65., 85., 100., 125., 150.], # propuesta (7 bins)
    #'bins_detector' : [25., 35., 45., 50., 55.,  60.,  65.,  70., 75., 80., 85., 100., 115., 125., 150.], # propuesta (7 bins)

    'bins_particle' : [25., 50., 60., 70., 80., 90., 105., 125., 150.], # propuesta (8 bins)
    'bins_detector' : [25., 35., 50., 55., 60., 65.,  70.,  75.,  80., 85., 90., 95., 100., 105., 115., 125., 150.], # propuesta (8 bins) SELECCIONADA

    #'bins_particle'  : [25., 45., 50., 55., 60., 65., 85., 100., 125., 150.], # propuesta (9 bins)
    #'bins_detector' : [25., 40., 42.5, 45.,47.5,50.,52.5,  55., 57.5,  60., 62.5, 65., 70., 75., 85., 100., 115., 125., 150.], # propuesta (9 bins)

    #'bins_particle'  : [25., 35., 45., 50., 55., 60., 65., 85., 100., 125., 150.], # propuesta (10 bins)
    #'bins_detector' : [25., 35., 40., 42.5, 45., 47.5, 50., 52.5, 55., 57.5, 60., 62.5, 65., 67.5, 70., 75., 85., 100., 115., 125., 150.], # propuesta (10 bins)

    'descbinning' : [10., 150.],
    'ndescbins'   : 14,
    'legpos'      : (0.7, 0.55, 0.90, 0.93),
    'legposdesc'  : (0.7, 0.55, 0.90, 0.93),
    "maxdesc"     : 3300,
    "var_detector": 'min(max(LepGood_pt_corrAll[0], 26.), 149.)',
    'var_response': 'Lep1_Pt',
    'var_particle': 'min(max(GenDressedLepton_pt[iDressSelLep[0]], 26.), 149.)',
    'legpos_detectorunc' : "TL",
    'legpos_particlefidunc'  : "TL",
    #"legpos_particle"   : (.18, .3, .32, .05),
    "legpos_particle"      : "TC",
    'legpos_particlefidbin': "TC",
    'legpos_particleunc'   : "TL",
    'legpos_particlefidbinunc': "TL",
    'resptxtsize'  : 1.5,
    'txtsize_covdetector': 1.2,
    'txtsize_covparticle': 1.35,
    'txtangle_covparticle': 42.50,
    "txtsize_covparticlefidbin": 1.2,
    "txtangle_covparticlefidbin": 35,
    "yaxisuplimitunf": 0.2,
    "yaxismax_particlefidbin": 0.025,
    "yaxismax_particlefid" : 1.1,
    #"yaxismax_particlefidbinunc" : 0.8,
    "yaxismax_particlefidbinunc" : 0.5,
    "yaxismax_unf" : 1.35,
    "yaxismax_particlebin": 0.0085,
    "legpos_particlebinunc" : "TL",
#    "yaxismax_ratio_fidnorm" : 2.5,
    "yaxismax_ratio_fidnorm" : 1.5,
}

varList['Fiducial'] = {
    'xaxis'         : 'a.u.',
    'yaxis_particle': 'd#sigma (pb)',
    'bins_particle' : [25., 150.],
    'bins_detector' : [25., 150.],
    #'bins_detector' : [25., 80., 150.],
    "var_detector"  : 'min(LepGood_pt_corrAll[0], 149.)',
    #"var_detector"  : 'min(Jet1_Pt, 149.)',
    'var_response'  : 'Fiducial',
    'var_particle'  : 'min(GenDressedLepton_pt[iDressSelLep[0]], 149.)',
    #'var_particle'  : 'min(DressJet1_Pt, 149.)',
}

varList['FiducialtWttbar'] = {
    'xaxis'       : 'a.u.',
    'yaxis_particle'       : 'd#sigma (pb)',
    'bins_particle'  : [25., 150.],
    'bins_detector' : [25., 150.],
    "var_detector"         : 'min(Lep1_Pt, 149.)',
    'var_response': 'FiducialtWttbar',
    'var_particle'     : 'min(DressLep1_Pt, 149.)',
}

varList['Lep1Lep2Jet1MET_Pz'] = {
    'xaxis'       : '#it{p}_{Z} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j}) (GeV)',
    'printname'   : '\\pzvar (\\GeV)',
    'printnamenodim':'\\pzvar',
    'mathprintname': '\\pzvar',
    'yaxis_particle'       : 'd#sigma/d(#it{p}_{Z} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (pb)',
    'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(#it{p}_{Z} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (adim.)',
    'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(#it{p}_{Z} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (1/GeV)',
    'yaxisnorm'   : 'd#sigma/d(#it{p}_{Z} (#it{e}^{#pm}, #it{#mu}^{#mp}, #it{j})) (pb/GeV)',
    'yaxis_unc'   : 'Relative uncertainty (adim.)',
    #'bins_particle'  : [0., 100., 200., 350., 450.],                        # usado en drafts, en nota, etc. (4 bins)
    #'bins_detector' : [0., 50., 100., 150., 200., 250., 300., 350., 450.], # usado en drafts, en nota, etc. (4 bins)

    #'bins_particle'  : [0., 40., 100., 175., 300., 450.],  # propuesta (5 bins)
    #'bins_detector' : [0., 20., 40., 60., 80., 100., 125., 150., 175., 350., 450.], # propuesta (5 bins)

    #'bins_particle'  : [0., 40., 100., 175., 250., 350., 450.],  # propuesta (6 bins)
    #'bins_detector' : [0., 20., 40., 60., 80., 100., 125., 150., 175., 200., 250., 350., 450.], # propuesta (6 bins)

    #'bins_particle'  : [0., 40., 60., 100., 175., 250., 350., 450.],  # propuesta (7 bins)
    #'bins_detector' : [0., 20., 30.,  40.,  50.,  60.,  80., 100., 125., 150., 175., 200., 250., 350., 450.], # propuesta (7 bins)

    'bins_particle'  : [0., 50., 100., 150., 200., 250., 300., 350., 450.],                        # propuesta (8 bins)
    'bins_detector' : [0., 20., 40., 60., 80., 100., 125., 150., 175., 200., 225., 250., 275., 300., 350., 400., 450.], # propuesta (8 bins) SELECCIONADA

    #'bins_particle'  : [0., 20., 40., 60., 80., 100., 175., 250., 350., 450.],  # propuesta (9 bins)
    #'bins_detector' : [0., 5.,  10., 15., 20.,  25.,  30.,  40.,  50.,  60.,  70.,  80.,  90., 100., 150., 175., 250., 350., 450.], # propuesta (9 bins)

    #'bins_particle'  : [0., 20., 40., 60., 80., 100., 125., 175., 250., 350., 450.],  # propuesta (10 bins)
    #'bins_detector' : [0., 5.,  10., 15., 20.,  25.,  30.,  40.,  50.,  60.,  70.,  80.,  90., 100., 125., 150., 175., 200., 250., 350., 450.], # propuesta (10 bins)

    'descbinning' : [0., 450.],
    'ndescbins'   : 18,
    "var_detector": 'min(max(abs(Lep1Lep2Jet1MET_Pz), 1.), 449.)',
    'var_response': 'Lep1Lep2Jet1MET_Pz',
    'var_particle': 'min(max(abs(DressLep1Lep2Jet1MET_Pz), 1.), 449.)',
    'legpos'      : (0.51, 0.55, 0.71, 0.93),
    #'legposdesc'  : (0.57, 0.55, 0.78, 0.93),
    'legposdesc'  : (0.65, 0.55, 0.85, 0.93),
    #'legpos_detector':  "TC",
    'legpos_detector' : (.5, .685, .725, .93),
    'legpos_detectoras':"BL",
    "legpos_particleunc" : "TL",
    'legpos_detectorunc' : "TL",
    'legpos_particlefidunc'  : "TL",
    'legpos_particlefidbinunc': "TL",
    'legpos_particlefidbin':"TC",
    "legpos_particle"  : "TC",
    'resptxtsize' : 1.7,
    'txtsize_covparticle': 1.4,
    'txtangle_covparticle': 45,
    'txtsize_covdetector': 1.4,
    "txtsize_covparticlefidbin": 1.2,
    "txtangle_covparticlefidbin": 45,
    "yaxisuplimitunf": 0.1,
    "yaxismax_particlefidbin": 0.0065,
    "yaxismax_particlefid" : 1,
    #"yaxismax_particlefidbinunc" : 1,
    "yaxismax_particlefidbinunc" : 0.7,
    "yaxismax_unf" : 1.3,
    "yaxismax_particlebin" : 0.002,
    "legpos_particlebinunc" : "TC",
#    "yaxismax_ratio_fidnorm" : 2.5,
    "yaxismax_ratio_fidnorm" : 1.5,
}

varList['Lep1Lep2_DPhi'] = {
    #'xaxis'       : '\\Delta \\varphi(\\ell_{1}, \\ell_{2}) (rad)',
    'xaxis'       : "#Delta#it{#varphi}(#it{e}^{#pm}, #it{#mu}^{#mp})/#it{#pi} (adim.)",
    'printname'   : "$\\deltaPhiVar/ \\pi$",
    'printnamenodim':"$\\deltaPhiVar/ \\pi$",
    'mathprintname': "\\deltaPhiVar/ \\pi",
    'yaxis_particle'       : "d#sigma/d(#Delta#it{#varphi}(#it{e}^{#pm}, #it{#mu}^{#mp})/#it{#pi}) (pb)",
    'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(#Delta#it{#varphi}(#it{e}^{#pm}, #it{#mu}^{#mp})/#it{#pi}) (adim.)',
    'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(#Delta#it{#varphi}(#it{e}^{#pm}, #it{#mu}^{#mp})/#it{#pi}) (adim.)',
    'yaxisnorm'   : 'd#sigma/d(#Delta#it{#varphi}(#it{e}^{#pm}, #it{#mu}^{#mp})/#it{#pi}) (pb)',
    'yaxis_unc'   : 'Relative uncertainty (adim.)',
    #'bins_particle'  : [0., .25, .50, 0.75, 1.0],                        # usado en drafts, en nota, etc. (4 bins)
    #'bins_detector' : [0., .125, .25, .375, .50, .625, .75, .875, 1.0], # usado en drafts, en nota, etc. (4 bins)
    #'bins_particle'  : [0., .75, 1.5, 2.25, r.TMath.Pi()],
    #'bins_detector' : [0., .35, .85, 1.25, 1.65, 2.05, 2.45, 2.85, r.TMath.Pi()],

    #'bins_particle'  : [0., .2, .4, .6, .8, 1.0],                        # propuesta (5 bins)
    #'bins_detector' : [0., 0.1, .2, 0.3, 0.4, 0.5, .6, 0.7, 0.8, 0.9, 1.0], # propuesta (5 bins)

    'bins_particle'  : [0., .17, .33, .5, .67, .83, 1.0],                        # propuesta (6 bins)
    'bins_detector' : [0., 0.083, .17, 0.25, 0.33, 0.417, .5, 0.583, 0.67, 0.75, 0.83, 0.917, 1.0], # propuesta (6 bins)

    #'bins_particle'  : [0., .14, .29, .42, .57, .71, .86, 1.0],                        # propuesta (7 bins)
    #'bins_detector' : [0., 0.07, .14, 0.21, 0.29, 0.36, .43, 0.5, 0.57, .64, 0.71, .79, 0.86, 0.93, 1.0], # propuesta (7 bins)

    #'bins_particle'  : [0., .125, .25, .375, .50, .625, .75, .875, 1.0],                        # propuesta (8 bins)
    #'bins_detector' : [0., 0.0625, .125, 0.1875, 0.25, 0.3125, .375, 0.4375, 0.50, 0.5625, 0.625, 0.6875, 0.75, 0.8125, 0.875, 0.9375, 1.0], # propuesta (8 bins)

    #'bins_particle'  : [0., .11, .22, .33, .44, .56, .67, .78, .89, 1.0],                        # propuesta (9 bins)
    #'bins_detector' : [0., 0.056, .11, 0.17, 0.22, 0.28, .33, 0.39, 0.44, 0.5, 0.56, .61, .67, .72, .78, .83, .89, .94, 1.0], # propuesta (9 bins)

    #'bins_particle'  : [0., .1, .2, .3, .4, .5, .6, .7, .8, .9, 1.0],                        # propuesta (10 bins)
    #'bins_detector' : [0., 0.05, .1, 0.15, 0.2, 0.25, .3, 0.35, 0.4, 0.45, 0.5, 0.55, .6, .65, .7, .75, .8, .85, .9, .95, 1.0], # propuesta (10 bins)

    "var_detector"  : 'Lep1Lep2_DPhi',
    'var_response'  : 'Lep1Lep2_DPhi',
    'var_particle'  : 'DressLep1Lep2_DPhi',
    #'var_particle'     : 'abs(TGenDPhiLL)',
    #'legpos'      : (0.82, 0.14, 0.93, 0.47),
    'legpos'      : (0.15, 0.425, 0.35, 0.81),
    #'legposdesc'  : (0.15, 0.425, 0.35, 0.81),
    'legposdesc'  : (0.15, 0.52, 0.35, 0.9215),
    'maxdesc'     : 2000,
    'legpos_detector' : "TL",
    'legpos_particlefid'  : "BR",
    #'legpos_particle'  : "BC",
    "legpos_particle"   : (.43, .255, .63, .04),
    'legpos_detectoras':"TL",
    'legpos_particleas': "TL",
    'legpos_particlefidbin':"BC",
    'legpos_particlefidbinunc': "TC",
    "legpos_particleunc"  : "TL",
    'resptxtsize' : 2,
    'txtsize_covparticle': 1.75,
    'txtangle_covparticle': 45,
    'txtsize_covdetector': 1.75,
    "txtsize_covparticlefidbin": 1.6,
    'txtangle_covparticlefidbin': 45,
    "equalbinsunf" : True,
    "equalbinsfol" : True,
    "yaxismax_particlefid" : 0.4,
    "yaxismax_particlefidbinunc" : 0.5,
    #"yaxismax_particlefidbinunc" : 0.35,
    "yaxismax_particlefidbin" : 1.7,
    "yaxismax_unf" : 1,
    #'legpos_particlebin':(.18, .75, .36, .52),
    'legpos_particlebin': (.35, 0.58950, .585, .9),
    "yaxismax_particlebin" : 0.85,
#    "yaxismax_ratio_fidnorm" : 2.5,
    "yaxismax_ratio_fidnorm" : 1.5,
}

#varList['E_LLB'] = {
    #'xaxis'       : 'E(\\ell_{1}, \\ell_{2}, j) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0, 190, 330, 550, 700],
    #'bins_detector' : [0, 160, 220, 280, 340, 400, 450, 550, 700],
    #"var_detector"         : 'TE_LLB',
    #'var_response': 'ELLB',
    #'var_particle'     : 'TGenE_LLB',
#}

#varList['LeadingJetE'] = {
    #'xaxis'       : 'E(j) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0, 75, 275, 400],
    #'bins_detector' : [0., 40., 70., 120., 175., 275., 400.],
    #"var_detector"         : 'TLeadingJetE',
    #'var_response': 'LeadingJetE',
    #'var_particle'     : 'TGenLeadingJetE',
#}

#varList['M_LeadingB'] = {
    #'xaxis'       : 'm(\\ell_{1}, j) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 75., 175., 275., 400.],
    #'bins_detector' : [0., 75., 95., 115., 135., 175., 225., 275., 400.],
    #"var_detector"         : 'TM_LeadingB',
    #'var_response': 'MLeadingB',
    #'var_particle'     : 'TGenM_LeadingB',
#}

#varList['M_SubLeadingB'] = {
    #'xaxis'       : 'm(\\ell_{2}, j) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 60., 100., 150., 300.],
    #'bins_detector' : [0., 60., 70., 80., 90., 100., 125., 150., 300.],
    #"var_detector"         : 'TM_SubLeadingB',
    #'var_response': 'MSubLeadingB',
    #'var_particle'     : 'TGenM_SubLeadingB',
#}

#varList['MET'] = {
    #'xaxis'       : '\\slash{E}_{T} (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0, 50, 140, 200],
    #'bins_detector' : [0., 20., 35., 50., 70., 140., 200.],
    #"var_detector"         : 'TMET',
    #'var_response': 'MET',
    #'var_particle'     : 'TGenMET'
#}

#varList['MET_Phi'] = {
    #'xaxis'       : '\\varphi(\\slash{E}_{T}) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [-r.TMath.Pi(), -1.5, 0, 1.5, r.TMath.Pi()],
    #'bins_detector' : [-r.TMath.Pi(), -2.25, -1.5, -.75, 0, .75, 1.5, 2.25, r.TMath.Pi()],
    #"var_detector"         : 'TMET_Phi',
    #'var_response': 'METPhi',
    #'var_particle'     : 'TGenMET_Phi',
#}

#varList['LeadingJetEta'] = {
    #'xaxis'       : '|\\eta|(j)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 0.6, 1.2, 1.8, 2.4],
    #'bins_detector' : [0., 0.3, 0.6, 0.9, 1.2, 1.5, 1.8, 2.1, 2.4],
    #"var_detector"         : 'abs(TLeadingJetEta)',
    #'var_response': 'LeadingJetEta',
    #'var_particle'     : 'abs(TGenLeadingJetEta)',
#}

#varList['LeadingJetPhi'] = {
    #'xaxis'       : '\\varphi(j) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [-r.TMath.Pi(), -1.5, 0, 1.5, r.TMath.Pi()],
    #'bins_detector' : [-r.TMath.Pi(), -2.25, -1.5, -.75, 0, .75, 1.5, 2.25, r.TMath.Pi()],
    #"var_detector"         : 'TLeadingJetPhi',
    #'var_response': 'LeadingJetPhi',
    #'var_particle'     : 'TGenLeadingJetPhi',
#}

#varList['LeadingLepE'] = {
    #'xaxis'       : 'E(\\ell_{1}) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0, 70, 120, 250, 350],
    #'bins_detector' : [0., 40., 60., 80., 100., 120., 150., 250., 350.],
    #"var_detector"         : 'TLeadingLepE',
    #'var_response': 'LeadingLepE',
    #'var_particle'     : 'TGenLeadingLepE',
#}

#varList['LeadingLepPhi'] = {
    #'xaxis'       : '\\varphi(\\ell_{1}) (rad)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [-r.TMath.Pi(), -1.5, 0, 1.5, r.TMath.Pi()],
    #'bins_detector' : [-r.TMath.Pi(), -2.25, -1.5, -.75, 0, .75, 1.5, 2.25, r.TMath.Pi()],
    #"var_detector"         : 'TLeadingLepPhi',
    #'var_response': 'LeadingLepPhi',
    #'var_particle'     : 'TGenLeadingLepPhi',
#}

#varList['LeadingLepEta'] = {
    #'xaxis'       : '|\\eta|(\\ell_{1})',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 0.6, 1.2, 1.8, 2.4],
    #'bins_detector' : [0., 0.3, 0.6, 0.9, 1.2, 1.5, 1.8, 2.1, 2.4],
    ##'bins_particle'  : [0., 0.5, 1., 1.6, 2.4],
    ##'bins_detector' : [0., 0.25, 0.5, 0.75, 1., 1.3, 1.6, 2., 2.4],
    #"var_detector"         : 'abs(TLeadingLepEta)',
    #'var_response': 'LeadingLepEta',
    #'var_particle'     : 'abs(TGenLeadingLepEta)',
#}

#varList['SubLeadingLepE'] = {
    #'xaxis'       : 'E(\\ell_{2}) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0, 50, 100, 175, 250],
    #'bins_detector' : [0., 30., 50., 70., 90., 115., 140., 175., 250.],
    #"var_detector"         : 'TSubLeadingLepE',
    #'var_response': 'SubLeadingLepE',
    #'var_particle'     : 'TGenSubLeadingLepE',
#}

#varList['SubLeadingLepPt'] = {
    #'xaxis'       : 'p_{T}(\\ell_{2}) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0, 30, 60, 100, 150],
    #'bins_detector' : [0., 30., 40., 50., 58., 68., 78., 100., 150.],
    #"var_detector"         : 'TSubLeadingLepPt',
    #'var_response': 'SubLeadingLepPt',
    #'var_particle'     : 'TGenSubLeadingLepPt',
#}

#varList['SubLeadingLepPhi'] = {
    #'xaxis'       : '\\varphi(\\ell_{2}) (rad)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [-r.TMath.Pi(), -1.5, 0, 1.5, r.TMath.Pi()],
    #'bins_detector' : [-r.TMath.Pi(), -2.25, -1.5, -.75, 0, .75, 1.5, 2.25, r.TMath.Pi()],
    #"var_detector"         : 'TSubLeadingLepPhi',
    #'var_response': 'SubLeadingLepPhi',
    #'var_particle'     : 'TGenSubLeadingLepPhi',
#}

#varList['SubLeadingLepEta'] = {
    #'xaxis'       : '\\eta(\\ell_2)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 0.6, 1.2, 1.8, 2.4],
    #'bins_detector' : [0., 0.3, 0.6, 0.9, 1.2, 1.5, 1.8, 2.1, 2.4],
    #"var_detector"         : 'abs(TSubLeadingLepEta)',
    #'var_response': 'SubLeadingLepEta',
    #'var_particle'     : 'abs(TGenSubLeadingLepEta)',
#}

#varList['DilepPt'] = {
    #'xaxis'       : '#it{p}_{T} (#it{e}^{#pm}, #it{#mu}^{#mp}) (GeV)',
    #'yaxis_particle'       : 'd#sigma/d(#it{p}_{T} (#it{e}^{#pm}, #it{#mu}^{#mp})) (pb)',
    #'yaxisfid'    : '(1/#sigma_{fid.})d#sigma/d(#it{p}_{T} (#it{e}^{#pm}, #it{#mu}^{#mp})) (adim.)',
    #'yaxisfidbin' : '(1/#sigma_{fid.})d#sigma/d(#it{p}_{T} (#it{e}^{#pm}, #it{#mu}^{#mp})) (1/GeV)',
    #'yaxisnorm'   : 'd#sigma/d(#it{p}_{T} (#it{e}^{#pm}, #it{#mu}^{#mp})) (pb/GeV)',
    #'bins_particle'  : [0, 40, 70, 100, 150, 175, 200],
    #'bins_detector' : [0, 30, 40, 50, 60, 70, 85, 100, 115, 130, 150, 175, 200],
    #"var_detector"         : 'TDilepPt',
    #'var_response': 'DilepPt',
    #'var_particle'     : 'TGenDilepPt',
#}

#varList['DilepJetPt'] = {
    #'xaxis'       : 'p_{T}(\\ell_{1}, \\ell_{2}, j) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 40., 80., 120., 200.],
    #'bins_detector' : [0., 20., 30., 40., 50., 60., 80., 120., 200.],
    #"var_detector"         : 'TDilepJetPt',
    #'var_response': 'DilepJetPt',
    #'var_particle'     : 'TGenDilepJetPt',
#}

#varList['DilepMETJetPt'] = {
    #'xaxis'       : 'p_{T}(\\ell_{1} ,\\ell_{2}, j,\\slash{E}_{T}) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 20., 40., 70., 150.],
    #'bins_detector' : [0., 10., 20., 30., 40., 50., 60., 70., 150.],
    #"var_detector"         : 'TDilepMETJetPt',
    #'var_response': 'DilepMETJetPt',
    #'var_particle'     : 'TGenDilepMETJetPt',
#}

#varList['HTtot'] = {
    #'xaxis'       : 'p_{T}(\\ell_{1}, \\ell_{2}, j,\\slash{E}_{T}) (GeV)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0, 200, 300, 450, 600],
    #'bins_detector' : [0., 150., 200., 250., 300., 350., 400., 450., 600.],
    #"var_detector"         : 'THTtot',
    #'var_response': 'HTtot',
    #'var_particle'     : 'TGenHTtot',
#}

#varList['LLMETBEta'] = {
    #'xaxis'       : '\\eta(\\ell_{1}, \\ell_{2}, j)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 1.25, 2.5, 3.75, 5.],
    #'bins_detector' : [0., 0.75, 1.25, 1.75, 2.25, 2.75, 3.25, 3.75, 5.],
    #"var_detector"         : 'abs(TLLMETBEta)',
    #'var_response': 'LLMETBEta',
    #'var_particle'     : 'abs(TGenLLMETBEta)',
#}

#varList['MSys'] = {
    #'xaxis'       : 'm(\\ell_{1}, \\ell_{2}, j,\\slash{E}_{T})',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 225., 325., 425., 700.],
    #'bins_detector' : [0., 225., 250., 275., 300., 325., 350., 425., 700.],
    #"var_detector"         : 'TMSys',
    #'var_response': 'MSys',
    #'var_particle'     : 'TGenMSys',
#}

#varList['Mll'] = {
    #'xaxis'       : 'm(\\ell_{1}, \\ell_{2})',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0., 50., 100., 150., 300.],
    #'bins_detector' : [0., 25., 45., 60., 75., 100., 125., 150., 300.],
    #"var_detector"         : 'TMll',
    #'var_response': 'Mll',
    #'var_particle'     : 'TGenMll',
#}

#varList['DPhiLeadJet'] = {
    #'xaxis'       : '\\Delta \\varphi(\\ell_{1}, j) (rad)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0, 1., 1.75, 2.5, r.TMath.Pi()],
    #'bins_detector' : [0, .5, 1., 1.5, 1.75, 2., 2.5, 2.85, r.TMath.Pi()],
    #"var_detector"         : 'abs(TDPhiLeadJet)',
    #'var_response': 'DPhiLeadJet',
    #'var_particle'     : 'abs(TGenDPhiLeadJet)',
#}

#varList['DPhiSubLeadJet'] = {
    #'xaxis'       : '\\Delta \\varphi(\\ell_{2}, j) (rad)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [0, 1., 1.75, 2.5, r.TMath.Pi()],
    #'bins_detector' : [0, .5, 1., 1.5, 1.75, 2., 2.5, 2.85, r.TMath.Pi()],
    #"var_detector"         : 'abs(TDPhiSubLeadJet)',
    #'var_response': 'DPhiSubLeadJet',
    #'var_particle'     : 'abs(TGenDPhiSubLeadJet)',
#}

#varList['nLooseCentral'] = {
    #'xaxis'       : 'Number of loose jets',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [-0.5, 1.5, 3.5, 4.5],
    #'bins_detector' : [-0.5, 0.5, 1.5, 2.5, 3.5, 4.5],
    #'legpos'      : (0.70, 0.55, 0.90, 0.93),
    #"var_detector"         : 'TnLooseCentral',
    #'var_response': 'nLooseCentral',
    #'var_particle'     : 'TnSergioLooseCentralJets',
#}

#varList['NJetsNBJets'] = {
    #'xaxis'       : '(Number of jets, number of b-tagged jets)',
    #'yaxis_particle'       : 'd#sigma (pb)',
    #'bins_particle'  : [-0.5, 1.5, 3.5, 4.5],
    #'bins_detector' : [-0.5, 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5],
    #'legpos'      : (0.7, 0.55, 0.90, 0.93),
    #'legposdesc'  : (0.58, 0.55, 0.78, 0.93),
    #"maxdesc"     : 110000,
    #"var_detector"         : 'nJetsnBs(TNJets, TNBJets)',
    #'var_response': 'NBJets',
    #'var_particle'     : 'TDressNBJets',
#}


# Profiling things
systMap = {
    'btagging_2016'       : True,
    'btagging_1718'       : True,
    'mistagging_2016'     : True,
    'mistagging_1718'     : True,
    'muonen_2016'         : True,
    'muonen_2017'         : True,
    'muonen_2018'         : True,
    'elecidsf'            : True,
    'elecrecosf'          : True,
    'muonidsf_stat_2016'  : True,
    'muonidsf_stat_2017'  : True,
    'muonidsf_stat_2018'  : True,
    'muonidsf_syst'       : True,
    'muonisosf_stat_2016' : True,
    'muonisosf_stat_2017' : True,
    'muonisosf_stat_2018' : True,
    'muonisosf_syst'      : True,
    'pileup'              : True,
    'prefiring_2016'      : True,
    'prefiring_2017'      : True,
    'jes'                 : True,
    'jer_2016'            : True,
    'jer_2017'            : True,
    'jer_2018'            : True,
    'triggereff_2016'     : True,
    'triggereff_2017'     : True,
    'triggereff_2018'     : True,
    'ttbar_matching' : {'tw'      : False,
                        'ttbar'   : True,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
    'ue'           : {  'tw'      : False,
                        'ttbar'   : True,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
    'isr_ttbar' : {     'tw'      : False,
                        'ttbar'   : True,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
    'isr_tw' : {        'tw'       : True,
                        'ttbar'   : False,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
    'fsr_ttbar' : {     'tw'      : False,
                        'ttbar'   : True,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
    'fsr_tw' : {        'tw'       : True,
                        'ttbar'   : False,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
    'ttbar_scales' : {  'tw'      : False,
                        'ttbar'   : True,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
    'tw_scales' : {    'tw'       : True,
                        'ttbar'   : False,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
    'topptrew'   : {    'tw'      : False,
                        'ttbar'   : True,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
    'colour_rec' : {    'tw'      : False,
                        'ttbar'   : True,
                        'dy'      : False,
                        'nonworz' : False,
                        'vvttv'   : False},
}

ModifiedSystMap = {
    #'btagging_2016'   : True,
    #'btagging_1718'   : True,
    #'mistagging_2016' : True,
    #'mistagging_1718' : True,
    #'muonen_2016': True,
    #'muonen_2017': True,
    #'muonen_2018': True,
    #'elecidsf'   : True,
    #'elecrecosf' : True,
    #'muonidsf_stat_2016'  : True,
    #'muonidsf_stat_2017'  : True,
    #'muonidsf_stat_2018'  : True,
    #'muonidsf_syst'       : True,
    #'muonisosf_stat_2016' : True,
    #'muonisosf_stat_2017' : True,
    #'muonisosf_stat_2018' : True,
    #'muonisosf_syst'      : True,
    #'pileup'         : True,
    #'prefiring_2016' : True,
    #'prefiring_2017' : True,
    #'jes'        : True,
    #'jer_2016'   : True,
    #'jer_2017'   : True,
    #'jer_2018'   : True,
    #'triggereff_2016' : True,
    #'triggereff_2017' : True,
    #'triggereff_2018' : True,
    #'isr_ttbar' : {     'tw'      : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'isr_tw' : {        'tw'      : True,
                        #'ttbar'   : False,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'fsr_ttbar' : {     'tw'      : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'fsr_tw' : {        'tw'      : True,
                        #'ttbar'   : False,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'topptrew'   : {    'tw'      : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'ttbar_scales' : {  'tw'      : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'ttbar_scales_00' : {'tw'     : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'ttbar_scales_01' : {'tw'     : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'ttbar_scales_10' : {'tw'     : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'ttbar_scales_12' : {'tw'     : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'ttbar_scales_21' : {'tw'     : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'ttbar_scales_22' : {'tw'     : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'tw_scales' : {     'tw'      : True,
                        #'ttbar'   : False,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'tw_scales_00' : {  'tw'      : True,
                        #'ttbar'   : False,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'tw_scales_01' : {  'tw'      : True,
                        #'ttbar'   : False,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'tw_scales_10' : {  'tw'      : True,
                        #'ttbar'   : False,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'tw_scales_12' : {  'tw'      : True,
                        #'ttbar'   : False,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'tw_scales_21' : {  'tw'      : True,
                        #'ttbar'   : False,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'tw_scales_22' : {  'tw'      : True,
                        #'ttbar'   : False,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'colour_rec' : {    'tw'      : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'ttbar_matching' : {'tw'      : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'ue'           : {  'tw'      : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'colour_erdon' : {  'tw'      : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'colour_qcd' : {    'tw'      : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
    #'colour_gluonmove' : {'tw'    : False,
                        #'ttbar'   : True,
                        #'dy'      : False,
                        #'nonworz' : False,
                        #'vvttv'   : False},
}

UncsColourMap = {
    'fit'                 : r.kPink-7,
    'btagging_corr'       : r.TColor.GetColor("#b2df8a"),
    'btagging_2016'       : r.TColor.GetColor("#b2df8a"),
    'btagging_2017'       : r.TColor.GetColor("#b2df8a"),
    'btagging_2018'       : r.TColor.GetColor("#b2df8a"),
    'mistagging_corr'     : r.TColor.GetColor("#ff7f00"),
    'mistagging_2016'     : r.TColor.GetColor("#ff7f00"),
    'mistagging_2017'     : r.TColor.GetColor("#ff7f00"),
    'mistagging_2018'     : r.TColor.GetColor("#ff7f00"),
    'muonen_2016'         : r.kYellow-4,
    'muonen_2017'         : r.kYellow-2,
    'muonen_2018'         : r.kYellow-12,
    'elecidsf'            : r.kGray+7,
    'elecrecosf'          : r.kGray+12,
    'muonidsf_stat_2016'  : r.kBlue+5,
    'muonidsf_stat_2017'  : r.kBlue+8,
    'muonidsf_stat_2018'  : r.kBlue+11,
    'muonidsf_syst'       : r.kBlue+17,
    'muonisosf_stat_2016' : r.kGreen+6,
    'muonisosf_stat_2017' : r.kGreen+8,
    'muonisosf_stat_2018' : r.kGreen+10,
    'muonisosf_syst'      : r.kGreen+12,
    'pileup'              : r.TColor.GetColor("#fb9a99"),
    'prefiring_2016'      : r.kGreen+1,
    'prefiring_2017'      : r.kBlue+3,
    'jes'                 : r.kPink+1,
    'jes_hf'              : r.kPink+1,
    'jes_bbec1_2016'      : r.kPink+1,
    'jes_bbec1_2017'      : r.kPink+1,
    'jes_bbec1_2018'      : r.kPink+1,
    'jes_flavorqcd'       : r.kPink+1,
    'jes_relativesample_2016'   : r.kPink+1,
    'jes_relativesample_2017'   : r.kPink+1,
    'jes_relativesample_2018'   : r.kPink+1,
    'jes_ec2'             : r.kPink+1,
    'jes_hf_2016'         : r.kPink+1,
    'jes_hf_2017'         : r.kPink+1,
    'jes_hf_2018'         : r.kPink+1,
    'jes_relativebal'     : r.kPink+1,
    'jes_absolute_2016'   : r.kPink+1,
    'jes_absolute_2017'   : r.kPink+1,
    'jes_absolute_2018'   : r.kPink+1,
    'jes_bbec1'           : r.kPink+1,
    'jes_EC2_2016'        : r.kPink+1,
    'jes_ec2_2017'        : r.kPink+1,
    'jes_ec2_2018'        : r.kPink+1,
    'jes_absolute'        : r.kPink+1,
    'jer_2016'            : r.TColor.GetColor("#1f77b4"),
    'jer_2017'            : r.TColor.GetColor("#a6cee3"),
    'jer_2018'            : r.TColor.GetColor("#33a02c"),
    'triggereff_2016'     : r.kOrange-6,
    'triggereff_2017'     : r.kSpring-9,
    'triggereff_2018'     : r.kOrange-9,
    'isr_ttbar'           : r.TColor.GetColor("#cab2d6"),
    'isr_tw'              : r.kAzure-6,
    'fsr_ttbar'           : r.kGray+2,
    'fsr_tw'              : r.TColor.GetColor("#fdbf6f"),
    'topptrew'            : r.kPink-5,
    'ue'                  : r.kTeal-7,
    'ttbar_matching'      : r.kTeal,
    'ttbar_scales'        : r.kGreen+4,
    'tw_scales'           : r.kYellow-6,
    'colour_rec'          : r.kViolet-2,
    'ttbar_norm'          : r.kBlue,
    'vvttv_norm'          : r.kAzure-9,
    'nonworz_norm'        : r.kMagenta-4,
    'dy_norm'             : r.kMagenta,
    'mtop'                : r.kMagenta-3,
}
UncsColourMap["colour"] = UncsColourMap["colour_rec"]

ColorMapList = [
    r.TColor.GetColor("#a6cee3"),
    r.TColor.GetColor("#1f77b4"),
    r.TColor.GetColor("#b2df8a"),
    r.TColor.GetColor("#33a02c"),
    r.TColor.GetColor("#e31a1c"),
    r.TColor.GetColor("#fdbf6f"),
    r.TColor.GetColor("#ff7f00"),
    r.TColor.GetColor("#6a3d9a"),
    r.kOrange-6,
    r.TColor.GetColor("#cab2d6"),
    r.kAzure-6,
    r.kMagenta,
    r.kGray+2,
    r.kBlue,
    r.kRed,
    r.kGreen+4,
    r.kYellow-6,
    r.kTeal-7,
    r.kViolet-2,
    r.kPink+1,
    r.kSpring-9,
    r.TColor.GetColor("#fb9a99"),
    r.kGreen+1,
    r.kBlue+3,
    r.kPink-5,
    r.kTeal,
]


ColourMapForProcesses = {
    "tw"       : 798,
    "ttbar"    : 633,
    "nonworz"  : 413,
    "vvttv"    : 390,
    "dy"       : 852
}


# Plots (llaves en minuscula)
SysNameTranslator = {
    'fit'                 : "Fit",
    'asimov'              : "Asimov",
    'Nominal'             : "Nominal",
    'btagging_corr'       : "B-tag.",
    'btagging_2016'       : "B-tag. (16)",
    'btagging_2017'       : "B-tag. (17)",
    'btagging_2018'       : "B-tag. (18)",
    "lumi_2016"           : "Lumi. uncorr. (16)",
    "lumi_2017"           : "Lumi. uncorr. (17)",
    "lumi_2018"           : "Lumi. uncorr. (18)",
    'mistagging_corr'     : "Mistag.",
    'mistagging_2016'     : "Mistag. (16)",
    'mistagging_2017'     : "Mistag. (17)",
    'mistagging_2018'     : "Mistag. (18)",
    'muonen_2016'         : "Muon en. corr. (16)",
    'muonen_2017'         : "Muon en. corr. (17)",
    'muonen_2018'         : "Muon en. corr. (18)",
    'elecidsf'            : "Electron ID eff.",
    'elecrecosf'          : "Electron reco. eff.",
    'muonidsf_stat_2016'  : "Muon ID eff. (16, stat.)",
    'muonidsf_stat_2017'  : "Muon ID eff. (17, stat.)",
    'muonidsf_stat_2018'  : "Muon ID eff. (18, stat.)",
    'muonidsf_syst'       : "Muon ID eff. (syst.)",
    'muonisosf_stat_2016' : "Muon ISO eff. (16, stat.)",
    'muonisosf_stat_2017' : "Muon ISO eff. (17, stat.)",
    'muonisosf_stat_2018' : "Muon ISO eff. (18, stat.)",
    'muonisosf_syst'      : "Muon ISO eff. (syst.)",
    'pileup'              : "Pile-up",
    'prefiring_2016'      : "Prefiring (16)",
    'prefiring_2017'      : "Prefiring (17)",
    'jes'                 : "JES",
    'jes_hf'              : "JES",
    'jes_bbec1_2016'      : "JES",
    'jes_bbec1_2017'      : "JES",
    'jes_bbec1_2018'      : "JES",
    'jes_flavorqcd'       : "JES",
    'jes_relativesample_2016'   : "JES",
    'jes_relativesample_2017'   : "JES",
    'jes_relativesample_2018'   : "JES",
    'jes_ec2'             : "JES",
    'jes_hf_2016'         : "JES",
    'jes_hf_2017'         : "JES",
    'jes_hf_2018'         : "JES",
    'jes_relativebal'     : "JES",
    'jes_absolute_2016'   : "JES",
    'jes_absolute_2017'   : "JES",
    'jes_absolute_2018'   : "JES",
    'jes_bbec1'           : "JES",
    'jes_ec2_2016'        : "JES",
    'jes_ec2_2017'        : "JES",
    'jes_ec2_2018'        : "JES",
    'jes_absolute'        : "JES",
    'jer_2016'            : "JER (16)",
    'jer_2017'            : "JER (17)",
    'jer_2018'            : "JER (18)",
    'triggereff_2016'     : "Trigger eff. (16)",
    'triggereff_2017'     : "Trigger eff. (17)",
    'triggereff_2018'     : "Trigger eff. (18)",
    'isr_ttbar'           : "ISR (t#bar{t})",
    'isr_tw'              : "ISR (tW)",
    'fsr_ttbar'           : "FSR (t#bar{t})",
    'fsr_tw'              : "FSR (tW)",
    'topptrew'            : "Top p_{T} rew.",
    'ue'                  : "UE",
    'ttbar_matching'      : "ME/PS matching (t#bar{t})",
    'ttbar_scales'        : "t#bar{t} #mu_{R}/#mu_{F}",
    'tw_scales'           : "tW #mu_{R}/#mu_{F}",
    'colour_rec'          : "Colour rec.",
    'ttbar_norm'          : "t#bar{t} norm.",
    'vvttv_norm'          : "VVt#bar{t}V norm.",
    'nonworz_norm'        : "Non-W/Z norm.",
    'dy_norm'             : "DY norm.",
    'mtop'                : "Top mass",
}
SysNameTranslator["colour"] = SysNameTranslator["colour_rec"]

# LaTeX puro (tablas)
PrintSysNameTranslator = {
    'asimov'              : "Asimov",
    'Nominal'             : "Nominal",
    'lumi_corr'           : "Luminosity corr. (16, 17, 18)",
    'lumi_corr1718'       : "Luminosity corr. (17, 18)",
    'lumi_2016'           : "Luminosity uncorr. (2016)",
    'lumi_2017'           : "Luminosity uncorr. (2017)",
    'lumi_2018'           : "Luminosity uncorr. (2018)",
    'btagging'            : "B-tagging",
    #'btagging_2016'       : "B-tagging (2016)",
    'btagging_1718'       : "B-tagging (2017, 2018)",
    'mistagging'          : "Mistagging",
    'mistagging_2016'     : "Mistagging (2016)",
    'mistagging_1718'     : "Mistagging (2017, 2018)",
    "btagging_corr"       : "B-tagging corr.",
    'btagging_2016'       : "B-tagging uncorr. (2016)",
    'btagging_2017'       : "B-tagging uncorr. (2017)",
    'btagging_2018'       : "B-tagging uncorr. (2018)",
    "mistagging_corr"     : "Mistagging corr.",
    'mistagging_2016'     : "Mistagging uncorr. (2016)",
    'mistagging_2017'     : "Mistagging uncorr. (2017)",
    'mistagging_2018'     : "Mistagging uncorr. (2018)",
    'muonen_2016'         : "Muon en. corr. (2016)",
    'muonen_2017'         : "Muon en. corr. (2017)",
    'muonen_2018'         : "Muon en. corr. (2018)",
    'elecidsf'            : "Electron ID eff.",
    'elecrecosf'          : "Electron reco. eff.",
    'muonidsf_stat_2016'  : "Muon ID eff. (2016, stat.)",
    'muonidsf_stat_2017'  : "Muon ID eff. (2017, stat.)",
    'muonidsf_stat_2018'  : "Muon ID eff. (2018, stat.)",
    'muonidsf_syst'       : "Muon ID eff. (syst.)",
    'muonisosf_stat_2016' : "Muon ISO eff. (2016, stat.)",
    'muonisosf_stat_2017' : "Muon ISO eff. (2017, stat.)",
    'muonisosf_stat_2018' : "Muon ISO eff. (2018, stat.)",
    'muonisosf_syst'      : "Muon ISO eff. (syst.)",
    'pileup'              : "Pile-up",
    'prefiring_2016'      : "L1 ECAL prefiring (2016)",
    'prefiring_2017'      : "L1 ECAL prefiring (2017)",
    'jes'                 : "JES",
    "jes_HF"                  : "JES - HF corr.",
    "jes_HF_2016"             : "JES - HF uncorr. (2016)",
    "jes_HF_2017"             : "JES - HF uncorr. (2017)",
    "jes_HF_2018"             : "JES - HF uncorr. (2018)",
    "jes_BBEC1"               : "JES - BBEC1 corr.",
    "jes_BBEC1_2016"          : "JES - BBEC1 uncorr. (2016)",
    "jes_BBEC1_2017"          : "JES - BBEC1 uncorr. (2017)",
    "jes_BBEC1_2018"          : "JES - BBEC1 uncorr. (2018)",
    "jes_FlavorQCD"           : "JES - Flavour QCD",
    "jes_RelativeSample_2016" : "JES - Relative sample (2016)",
    "jes_RelativeSample_2017" : "JES - Relative sample (2017)",
    "jes_RelativeSample_2018" : "JES - Relative sample (2018)",
    "jes_EC2"                 : "JES - EC2 corr.",
    "jes_EC2_2016"            : "JES - EC2 uncorr. (2016)",
    "jes_EC2_2017"            : "JES - EC2 uncorr. (2017)",
    "jes_EC2_2018"            : "JES - EC2 uncorr. (2018)",
    "jes_RelativeBal"         : "JES - RelativeBal",
    "jes_Absolute"            : "JES - Absolute corr.",
    "jes_Absolute_2016"       : "JES - Absolute corr. (2016)",
    "jes_Absolute_2017"       : "JES - Absolute corr. (2017)",
    "jes_Absolute_2018"       : "JES - Absolute corr. (2018)",
    'jer_2016'            : "JER (2016)",
    'jer_2017'            : "JER (2017)",
    'jer_2018'            : "JER (2018)",
    'triggereff_2016'     : "Trigger eff. (2016)",
    'triggereff_2017'     : "Trigger eff. (2017)",
    'triggereff_2018'     : "Trigger eff. (2018)",
    "pdfhessian"          : "PDF + $\\alpha_{S}$",
    'isr_ttbar'           : "ISR (\\ttbar)",
    'isr_tw'              : "ISR (\\tw)",
    'fsr'                 : "FSR (\\ttbar, \\tw)",
    'fsr_ttbar'           : "FSR (\\ttbar)",
    'fsr_tw'              : "FSR (\\tw)",
    'topptrew'            : "Top \pt rew.",
    'ue'                  : "UE",
    "mtop"                : "$m_{top}$",
    "ds"                  : "tW DR/DS",
    'ttbar_matching'      : "ME/PS matching (\\ttbar)",
    'ttbar_scales'        : "\\ttbar $\\mu_{R}$/$\\mu_{F}$",
    'tw_scales'           : "\\tw $\\mu_{R}$/$\\mu_{F}$",
    'colour_rec'          : "Colour rec.",
}


# Details for transcribing to table
ProcessNameTranslator = {
    "ttbar"        : "\\ttbar",
    "nonworz"      : "Non W/Z",
    "dy"           : "Drell-Yan",
    "vvttv"        : "VV and \\ttbar V",
    "tw"           : "tW (signal)",
}
ProcessNameTranslator["tW"]           = ProcessNameTranslator["tw"]
ProcessNameTranslator["t#bar{t}"]     = ProcessNameTranslator["ttbar"]
ProcessNameTranslator["Non-WorZ"]     = ProcessNameTranslator["nonworz"]
ProcessNameTranslator["DY"]           = ProcessNameTranslator["dy"]
ProcessNameTranslator["VVttbarV"]     = ProcessNameTranslator["vvttv"]
ProcessNameTranslator["VV+t#bar{t}V"] = ProcessNameTranslator["vvttv"]


GOFTranslator = {
    "DR"       : "\\POWHEG DR",
    "DS"       : "\\POWHEG DS",
    "aMCatNLO" : "\\MGaMCatNLO",
}


TableDict = {
    "detector" : {
            "prefix"     : "$d\\sigma/d\\left(",
            "dimensions" : "(pb)",
        },
    "particle" : {
            "prefix"     : "$d\\sigma/d\\left(",
            "dimensions" : "(pb)",
        },
    "particlefidbin" : {
            "prefix"     : "$(1/\\sigma_{\\rm{fid}})d\\sigma/d\\left(",
            "dimensions" : "(1/\\GeV)",
        },
}

#### NOTE: it is important to note that they are all normalisation uncertainties (ahora ya no jiji)
ProfileSysts = {"dy_norm", "nonworz_norm", "ttbar_norm", "vvttv_norm",
                "lumi_2016", "lumi_2017", "lumi_2018",
                "lumi_BBD", "lumi_DB", "lumi_LS", "lumi_BCC", "lumi_GS", "lumi_XY"}

ModifiedProfileSysts = {"dy_norm", "nonworz_norm", "ttbar_norm", "vvttv_norm",
                        "lumi_2016", "lumi_2017", "lumi_2018",
                        "lumi_BBD", "lumi_DB", "lumi_LS", "lumi_BCC", "lumi_GS", "lumi_XY",
    'btagging_2016'  ,
    'btagging_1718'  ,
    'mistagging_2016',
    'mistagging_1718',
    'muonen_2016',
    'muonen_2017',
    'muonen_2018',
    'elecidsf'  ,
    'elecrecosf',
    'muonidsf_stat_2016' ,
    'muonidsf_stat_2017' ,
    'muonidsf_stat_2018' ,
    'muonidsf_syst'      ,
    'muonisosf_stat_2016',
    'muonisosf_stat_2017',
    'muonisosf_stat_2018',
    'muonisosf_syst'     ,
    'pileup'        ,
    'prefiring_2016',
    'prefiring_2017',
    'jes'       ,
    'jer_2016'  ,
    'jer_2017'  ,
    'jer_2018'  ,
    'triggereff_2016',
    'triggereff_2017',
    'triggereff_2018',
    #'tw_scales',
    #'ttbar_scales',
    #'topptrew',
    #'isr_ttbar',
    #'isr_tw',
    #'fsr_ttbar',
    #'fsr_tw',
    }

ModifiedProfileSystsThatAreNotPresentAllYears = {
    "lumi_2016"           : ["2016"],
    "lumi_2017"           : ["2017"],
    "lumi_2018"           : ["2018"],
    "lumi_BBD"            : ["2016", "2017"],
    "lumi_DB"             : ["2016", "2017"],
    "lumi_LS"             : ["2017", "2018"],
    "lumi_BCC"            : ["2017", "2018"],
    "lumi_GS"             : ["2016", "2017"],
    "lumi_XY"             : ["2016", "2017", "2018"],
    'btagging_2016'       : ["2016"],
    'btagging_1718'       : ["2017", "2018"],
    'mistagging_2016'     : ["2016"],
    'mistagging_1718'     : ["2017", "2018"],
    'muonen_2016'         : ["2016"],
    'muonen_2017'         : ["2017"],
    'muonen_2018'         : ["2018"],
    'elecidsf'            : ["2016", "2017", "2018"],
    'elecrecosf'          : ["2016", "2017", "2018"],
    'muonidsf_stat_2016'  : ["2016"],
    'muonidsf_stat_2017'  : ["2017"],
    'muonidsf_stat_2018'  : ["2018"],
    'muonidsf_syst'       : ["2016", "2017", "2018"],
    'muonisosf_stat_2016' : ["2016"],
    'muonisosf_stat_2017' : ["2017"],
    'muonisosf_stat_2018' : ["2018"],
    'muonisosf_syst'      : ["2016", "2017", "2018"],
    'pileup'              : ["2016", "2017", "2018"],
    'prefiring_2016'      : ["2016"],
    'prefiring_2017'      : ["2017"],
    'jes'                 : ["2016", "2017", "2018"],
    'jer_2016'            : ["2016"],
    'jer_2017'            : ["2017"],
    'jer_2018'            : ["2018"],
    'triggereff_2016'     : ["2016"],
    'triggereff_2017'     : ["2017"],
    'triggereff_2018'     : ["2018"],
    #'tw_scales'           : ["2016", "2017", "2018"],
    #'ttbar_scales'        : ["2016", "2017", "2018"],
    #'topptrew'            : ["2016", "2017", "2018"],
    #'isr_ttbar'           : ["2016", "2017", "2018"],
    #'isr_tw'              : ["2016", "2017", "2018"],
    #'fsr_ttbar'           : ["2016", "2017", "2018"],
    #'fsr_tw'              : ["2016", "2017", "2018"],
}


ProfileSystsThatAreNotPresentAllYears = {
    "lumi_2016" : ["2016"],
    "lumi_2017" : ["2017"],
    "lumi_2018" : ["2018"],
    "lumi_BBD"  : ["2016", "2017"],
    "lumi_DB"   : ["2016", "2017"],
    "lumi_LS"   : ["2017", "2018"],
    "lumi_BCC"  : ["2017", "2018"],
    "lumi_GS"   : ["2016", "2017"],
    "lumi_XY"   : ["2016", "2017", "2018"],
}


ProcessesNames = {"tw", "ttbar", "dy", "nonworz", "vvttv"}


ControlRegionVariableDict = {"3j2t" : "Lep1Lep2Jet1_M_control",
}


WeightsToChange = {
    'btagging_2016'      : "bTagWeight_btag",
    'btagging_1718'      : "bTagWeight_btag",
    'mistagging_2016'    : "bTagWeight_mistag",
    'mistagging_1718'    : "bTagWeight_mistag",
    'elecidsf'           : "ElecIDSF",
    'elecrecosf'         : "ElecRECOSF",
    'muonidsf_stat_2016' : "MuonIDSF_stat",
    'muonidsf_stat_2017' : "MuonIDSF_stat",
    'muonidsf_stat_2018' : "MuonIDSF_stat",
    'muonidsf_syst'      : "MuonIDSF_syst",
    'muonisosf_stat_2016': "MuonISOSF_stat",
    'muonisosf_stat_2017': "MuonISOSF_stat",
    'muonisosf_stat_2018': "MuonISOSF_stat",
    'muonisosf_syst'     : "MuonISOSF_syst",
    'pileup'             : "puWeight",
    'prefiring_2016'     : "PrefireWeight",
    'prefiring_2017'     : "PrefireWeight",
    'triggereff_2016'    : "TrigSF",
    'triggereff_2017'    : "TrigSF",
    'triggereff_2018'    : "TrigSF",
}

#UncertaintiesToEnvelope = {"ttbar_scales", "tw_scales", "colour"}
#UncertaintiesToEnvelope = {"ttbar_scales", "tw_scales"}
#UncertaintiesToEnvelope = {"colour"}
UncertaintiesToEnvelope = {}

VariatedSamplesUncertaintySources = { "ue", "colour_rec_erdon", "colour_rec_cr1", "colour_rec_cr2", "tw_matching", "mtop", "ds"}

nuisanceColours = {
    'Gaussian'          : 1,
    'Poisson'           : 8,
    'AsymmetricGaussian': 9,
    'Unconstrained'     : 39,
    'Unrecognised'      : 2
}

lo_colour = {
    'default': 38,
    'hesse'  : r.kOrange - 3,
    'robust' : r.kGreen + 1
}
hi_colour = {
    'default': 46,
    'hesse'  : r.kBlue,
    'robust' : r.kAzure - 5
}

coloursForDiffWithCombine = {
    'bkg': r.kOrange + 10, # bkg proc
    0    : r.kOrange + 10, # bkg proc
    1    : r.kOrange,
    2    : r.kOrange - 1,
    3    : r.kOrange - 2,
    4    : r.kOrange - 3,
    5    : r.kOrange - 4,
    6    : r.kOrange - 5,
    7    : r.kOrange - 6,
    8    : r.kOrange - 7,
    9    : r.kOrange - 8,
    10   : r.kOrange - 9,
}
