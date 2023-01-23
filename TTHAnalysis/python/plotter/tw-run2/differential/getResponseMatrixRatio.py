import ROOT as r
from copy import deepcopy
import os, sys
sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
from . import varList as vl
from . import CMS_lumi, tdrstyle

r.gROOT.SetBatch(True)
tmpfil     = "temp_2022_06_13_diffentera/differential"
markersize = 0.8


for iV in vl.varList["Names"]["Variables"]:
#    if "Lep1_Pt" not in iV: continue
    f2016 = r.TFile(tmpfil + "/2016/{v}/UnfoldingInfo.root".format(v = iV), "READ")
    f2017 = r.TFile(tmpfil + "/2017/{v}/UnfoldingInfo.root".format(v = iV), "READ")
    f2018 = r.TFile(tmpfil + "/2018/{v}/UnfoldingInfo.root".format(v = iV), "READ")

    h1617 = deepcopy(f2016.Get("R" + iV + "_").Clone("h1617"))
    h1618 = deepcopy(f2016.Get("R" + iV + "_").Clone("h1618"))
    h1718 = deepcopy(f2017.Get("R" + iV + "_").Clone("h1718"))
    
    # 2016/2017
    h1617.Divide(f2017.Get("R" + iV + "_"))
    
    # 2016/2018
    h1618.Divide(f2018.Get("R" + iV + "_"))
    
    # 2017/2018
    h1718.Divide(f2018.Get("R" + iV + "_"))
    
    f2016.Close(); f2017.Close(); f2018.Close()
    
    for iH in [h1617, h1618, h1718]:
        iH.SetXTitle(vl.varList[iV]['xaxis'] + " [particle level]")
        iH.SetYTitle(vl.varList[iV]['xaxis'] + " [detector level]")

        tdrstyle.setTDRStyle()
        iH.SetStats(False)
        r.gStyle.SetLabelFont(43, "XYZ")
        r.gStyle.SetLabelSize(22, "XYZ")
        iH.GetYaxis().SetTitleOffset(1.4)
        iH.GetXaxis().SetTitleOffset(1.2)
        iH.GetXaxis().SetTitleFont(43)
        iH.GetXaxis().SetTitleSize(22)
        iH.GetXaxis().SetLabelFont(43)
        iH.GetXaxis().SetLabelSize(22)
        iH.GetYaxis().SetTitleFont(43)
        iH.GetYaxis().SetTitleSize(22)
        iH.GetYaxis().SetLabelFont(43)
        iH.GetYaxis().SetLabelSize(22)
        #c = r.TCanvas('c', "", 700, 500)
        c = r.TCanvas('c', "", 600, 600)
        plot = c.GetPad(0);
        #plot.SetPad(0.0, 0.23, 1.0, 1.0);
        plot.SetTopMargin(0.0475); plot.SetRightMargin(0.1); plot.SetLeftMargin(0.12); plot.SetBottomMargin(0.1)
        if 'resptxtsize' in vl.varList[iV]: iH.SetMarkerSize(vl.varList[iV]['resptxtsize'])
        else:                               iH.SetMarkerSize(markersize)
        iH.SetMarkerSize(markersize)
        iH.SetMarkerColor(r.kRed)
        
        iH.Draw("colz text e")
        r.gStyle.SetPaintTextFormat("4.3f")
        CMS_lumi.lumi_13TeV = ""
        #CMS_lumi.extraText  = 'Simulation Supplementary'
        CMS_lumi.extraText  = 'Simulation Preliminary'
        CMS_lumi.lumi_sqrtS = ''
        #CMS_lumi.cmsTextSize += 0.1
        CMS_lumi.CMS_lumi(r.gPad, 0, 0, 0.05)
        r.gStyle.SetLabelFont(43, "XYZ")
        r.gStyle.SetLabelSize(22, "XYZ")
        r.gPad.Update()
        
        if not os.path.isdir(tmpfil + "/run2/responseratios"):
            os.system("mkdir -p " + tmpfil + "/run2/responseratios")
        
        c.SaveAs(tmpfil + "/run2/responseratios/Ratio_" + iV + "_" + iH.GetName() + ".png")
        c.SaveAs(tmpfil + "/run2/responseratios/Ratio_" + iV + "_" + iH.GetName() + ".pdf")
        c.Close(); del c
        
