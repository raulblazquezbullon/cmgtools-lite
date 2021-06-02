import os, sys, argparse, enum
from multiprocessing import Pool
from copy import deepcopy
import warnings as wr
import ROOT as r

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import tdrstyle

r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

class ch(enum.IntEnum):
    NoChan = 0
    ElMu   = 1
    Muon   = 2
    Elec   = 3
    ElMuFromTaus = 4
    MuonFromTaus = 5
    ElecFromTaus = 6
    ElMuMixedFromTaus = 7
    MuonMixedFromTaus = 8
    ElecMixedFromTaus = 9

def loadHisto(fil, hist):
    tf = r.TFile.Open(fil)
    if not tf: raise RuntimeError("[lepScaleFactors_TopRun2::loadHisto] FATAL: no such file %s"%fil)
    hist = tf.Get(hist)
    if not hist: raise RuntimeError("[lepScaleFactors_TopRun2::loadHisto] FATAL: no such object %s in %s"%(hist,fil))
    ret = deepcopy(hist)
    tf.Close()
    return ret

def loadHistoWithUncs(fil, hist, uncs = []):
    tf = r.TFile.Open(fil)
    if not tf: raise RuntimeError("[lepScaleFactors_TopRun2::loadHistoWithVars] FATAL: no such file %s"%fil)
    histnom = tf.Get(hist)
    if not hist: raise RuntimeError("[lepScaleFactors_TopRun2::loadHistoWithVars] FATAL: no such object %s in %s"%(hist,fil))
    ret = [deepcopy(histnom)]

    for var in uncs:
        tmphist = tf.Get(hist + var)
        ret.append(deepcopy(tmphist))
    tf.Close()
    return ret

sfpath       = os.environ['CMSSW_BASE'] + "/src/CMGTools/TTHAnalysis/data/TopRun2/"
basepathlep  = sfpath + "/lepton/"
basepathtrig = sfpath + "/trigger/"
basepathbtag = sfpath + "/btagging/"
SFdict = {}
SFdict["lepton"] = {}; SFdict["lepton"] = {}; SFdict["trigger"] = {}
SFdict["lepton"]["m"] = {}; SFdict["lepton"]["e"] = {}
SFdict["trigger"][ch.ElMu] = {}; SFdict["trigger"][ch.Elec] = {}; SFdict["trigger"][ch.Muon] = {};
for y in [2016, 2017, 2018]:
    SFdict["lepton"]["m"][y] = {}
    SFdict["lepton"]["e"][y] = {}
    for chan in [ch.ElMu, ch.Elec, ch.Muon]:
        SFdict["trigger"][chan][y] = {}

## Muon ID
SFdict["lepton"]["m"][2016]["idtight,BCDEF"], SFdict["lepton"]["m"][2016]["idtight_stat,BCDEF"], SFdict["lepton"]["m"][2016]["idtight_syst,BCDEF"] = loadHistoWithUncs(basepathlep + "Muon_Run2016BCDEF_SF_ID.root", "NUM_TightID_DEN_genTracks_eta_pt"  , ["_stat", "_syst"])
SFdict["lepton"]["m"][2016]["idtight,GH"], SFdict["lepton"]["m"][2016]["idtight_stat,GH"], SFdict["lepton"]["m"][2016]["idtight_syst,GH"] = loadHistoWithUncs(basepathlep + "Muon_Run2016GH_SF_ID.root",    "NUM_TightID_DEN_genTracks_eta_pt"          , ["_stat", "_syst"])
SFdict["lepton"]["m"][2017]["idtight"], SFdict["lepton"]["m"][2017]["idtight_stat"], SFdict["lepton"]["m"][2017]["idtight_syst"] = loadHistoWithUncs(basepathlep + "Muon_Run2017BCDEF_SF_ID.root", "NUM_TightID_DEN_genTracks_pt_abseta"       , ["_stat", "_syst"])
SFdict["lepton"]["m"][2018]["idtight"], SFdict["lepton"]["m"][2018]["idtight_stat"], SFdict["lepton"]["m"][2018]["idtight_syst"] = loadHistoWithUncs(basepathlep + "Muon_Run2018ABCD_SF_ID.root",  "NUM_TightID_DEN_TrackerMuons_pt_abseta"    , ["_stat", "_syst"])

# Muon iso
SFdict["lepton"]["m"][2016]["iso,BCDEF"], SFdict["lepton"]["m"][2016]["iso_stat,BCDEF"], SFdict["lepton"]["m"][2016]["iso_syst,BCDEF"] = loadHistoWithUncs(basepathlep + "Muon_Run2016BCDEF_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_eta_pt"   , ["_stat", "_syst"])
SFdict["lepton"]["m"][2016]["iso,GH"], SFdict["lepton"]["m"][2016]["iso_stat,GH"], SFdict["lepton"]["m"][2016]["iso_syst,GH"] = loadHistoWithUncs(basepathlep + "Muon_Run2016GH_SF_ISO.root",    "NUM_TightRelIso_DEN_TightIDandIPCut_eta_pt"   , ["_stat", "_syst"])
SFdict["lepton"]["m"][2017]["iso"], SFdict["lepton"]["m"][2017]["iso_stat"], SFdict["lepton"]["m"][2017]["iso_syst"] = loadHistoWithUncs(basepathlep + "Muon_Run2017BCDEF_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_pt_abseta", ["_stat", "_syst"])
SFdict["lepton"]["m"][2018]["iso"], SFdict["lepton"]["m"][2018]["iso_stat"], SFdict["lepton"]["m"][2018]["iso_syst"] = loadHistoWithUncs(basepathlep + "Muon_Run2018ABCD_SF_ISO.root",  "NUM_TightRelIso_DEN_TightIDandIPCut_pt_abseta", ["_stat", "_syst"])

# Elec ID
SFdict["lepton"]["e"][2016]["idtight"] = loadHisto(basepathlep + "Electron_2016_IDTight.root", "EGamma_SF2D")
SFdict["lepton"]["e"][2017]["idtight"] = loadHisto(basepathlep + "Electron_2017_IDTight.root", "EGamma_SF2D")
SFdict["lepton"]["e"][2018]["idtight"] = loadHisto(basepathlep + "Electron_2018_IDTight.root", "EGamma_SF2D")

# Elec reco
SFdict["lepton"]["e"][2016]["recotight"] = loadHisto(basepathlep + "Electron_2016_RECO.root", "EGamma_SF2D")
SFdict["lepton"]["e"][2017]["recotight"] = loadHisto(basepathlep + "Electron_2017_RECO.root", "EGamma_SF2D")
SFdict["lepton"]["e"][2018]["recotight"] = loadHisto(basepathlep + "Electron_2018_RECO.root", "EGamma_SF2D")

# Trigger elmu
SFdict["trigger"][ch.ElMu][2016] = loadHisto(basepathtrig + "TriggerSFfromReza_2016.root", "h2D_SF_emu_lepABpt_FullError")
SFdict["trigger"][ch.ElMu][2017] = loadHisto(basepathtrig + "TriggerSFfromReza_2017.root", "h2D_SF_emu_lepABpt_FullError")
SFdict["trigger"][ch.ElMu][2018] = loadHisto(basepathtrig + "TriggerSFfromReza_2018.root", "h2D_SF_emu_lepABpt_FullError")

# Trigger elel
SFdict["trigger"][ch.Elec][2016] = loadHisto(basepathtrig + "TriggerSFfromReza_2016.root", "h2D_SF_ee_lepABpt_FullError")
SFdict["trigger"][ch.Elec][2017] = loadHisto(basepathtrig + "TriggerSFfromReza_2017.root", "h2D_SF_ee_lepABpt_FullError")
SFdict["trigger"][ch.Elec][2018] = loadHisto(basepathtrig + "TriggerSFfromReza_2018.root", "h2D_SF_ee_lepABpt_FullError")

# Trigger mumu
SFdict["trigger"][ch.Muon][2016] = loadHisto(basepathtrig + "TriggerSFfromReza_2016.root", "h2D_SF_mumu_lepABpt_FullError")
SFdict["trigger"][ch.Muon][2017] = loadHisto(basepathtrig + "TriggerSFfromReza_2017.root", "h2D_SF_mumu_lepABpt_FullError")
SFdict["trigger"][ch.Muon][2018] = loadHisto(basepathtrig + "TriggerSFfromReza_2018.root", "h2D_SF_mumu_lepABpt_FullError")


SFdict["btagging"] = {}
f_eff   = r.TFile.Open(basepathbtag + "/BtagMCSF.root", "read")
for el in ["B", "C", "L"]:
    SFdict["btagging"][el] = {}
    for year in [2016, 2017, 2018]:
        SFdict["btagging"][el][year] = deepcopy(f_eff.Get("BtagSF{t}_{alg}{wp}_{y}".format(t   = el,
                                                                                           alg = "DFlav",
                                                                                           wp  = "M",
                                                                                           y   =  year)).Clone())

f_eff.Close()


def plotSFhisto(tsk):
    thehisto, outfolder, outname, xtitle, ytitle = tsk
    print "\n> Plotting " + thehisto.GetName()

    tdrstyle.setTDRStyle()
    thehisto.SetStats(False)
    thehisto.GetYaxis().SetTitleOffset(1.4)
    thehisto.GetXaxis().SetTitle(xtitle)
    thehisto.GetXaxis().SetTitleOffset(1.2)
    thehisto.GetXaxis().SetTitleFont(43)
    thehisto.GetXaxis().SetTitleSize(22)
    thehisto.GetXaxis().SetLabelFont(43)
    thehisto.GetXaxis().SetLabelSize(22)
    thehisto.GetYaxis().SetTitle(ytitle)
    thehisto.GetYaxis().SetTitleFont(43)
    thehisto.GetYaxis().SetTitleSize(22)
    thehisto.GetYaxis().SetLabelFont(43)
    thehisto.GetYaxis().SetLabelSize(22)

    c = r.TCanvas('c', "", 600, 600)
    plot = c.GetPad(0);
    plot.SetTopMargin(0.0475); plot.SetRightMargin(0.15); plot.SetLeftMargin(0.12); plot.SetBottomMargin(0.1)
    thehisto.SetMarkerSize(1)
    thehisto.SetMarkerColor(r.kRed)
    thehisto.Draw("colz text45 e")
    r.gStyle.SetPaintTextFormat("4.3f")
    r.gStyle.SetLabelFont(43, "XYZ")
    r.gStyle.SetLabelSize(22, "XYZ")
    r.gPad.Update()
    c.SaveAs(outfolder + "/" + outname + ".png")
    c.SaveAs(outfolder + "/" + outname + ".pdf")
    c.Close(); del c, plot
    return


axisdict = {}
axisdict["lepton"]   = {}
axisdict["trigger"]  = {}
axisdict["btagging"] = {}


axisdict["lepton"]["m"] = {"x" : "Muon p_{T} (GeV)",
                           "y" : "Muon |#eta| (adim.)"}
axisdict["lepton"]["e"] = {"x" : "Electron supercluster #eta (adim.)",
                           "y" : "Electron p_{T} (GeV)"}
axisdict["trigger"]     = {"x" : "Electron p_{T} (GeV)",
                           "y" : "Muon p_{T} (GeV)"}
axisdict["btagging"]    = {"x" : "Jet p_{T} (GeV)",
                           "y" : "Jet |#eta| (adim.)"}

def getTasks(outdir):
    if not os.path.isdir(outdir):
        os.system("mkdir -p " + outdir)

    alltasks = []
    for y in [2016, 2017, 2018]:
        if not os.path.isdir(outdir + "/" + str(y)):
            os.system("mkdir -p " + outdir + "/" + str(y))
        # Lepton
        for ty in ["e", "m"]:
            for iH,theH in SFdict["lepton"][ty][y].iteritems():
                if any([subel in iH for subel in ["stat", "syst"]]): continue
                alltasks.append( (theH,
                                  outdir + "/" + str(y),
                                  "leptonSF_" + ty + "_" + iH.replace(",", "_") + "_" + str(y),
                                   axisdict["lepton"][ty]["x"],
                                   axisdict["lepton"][ty]["y"]) )

        # Trigger
        for iC in [ch.ElMu]:
            alltasks.append( (SFdict["trigger"][iC][y],
                              outdir + "/" + str(y),
                              "triggerSF_" + str(iC).replace("ch.", "") + "_" + str(y),
                              axisdict["trigger"]["x"],
                              axisdict["trigger"]["y"]
                              ) )

        # Btagging
        for el in ["B", "C", "L"]:
            alltasks.append( (SFdict["btagging"][el][y],
                              outdir + "/" + str(y),
                              "btaggingEff_" + el + "_" + str(y),
                              axisdict["btagging"]["x"],
                              axisdict["btagging"]["y"]) )

    return alltasks


if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python plotUncsVariations.py folder", description = "Helper for plotting.", formatter_class = argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('outfolder')
    parser.add_argument("-j", metavar = 'ncores',  dest = "ncores", required = False, default = 1, type = int)

    args     = parser.parse_args()
    outfolder= args.outfolder
    ncores   = args.ncores

    tasks    = getTasks(outfolder)

    #print(tasks)
    #sys.exit()

    if ncores > 1:
        pool = Pool(ncores)
        pool.map(plotSFhisto, tasks)
        pool.close()
        pool.join()
    else:
        for tsk in tasks:
            plotSFhisto(tsk)
