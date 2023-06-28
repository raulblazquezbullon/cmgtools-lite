''' A code for plotting systematic variations from root files '''
# == Import libraries == #
import ROOT as r
import os, re, sys
from copy import deepcopy
import json
import argparse
import numpy as np

r.gROOT.SetBatch(1)
#r.gStyle.SetOptStats(0)

systematics = [
    "jes",
    "btag_HF",
    "btag_LF",
    "ISR",
    "FSR",
    "muonidsf",
    "elecidsf"
]

processes = [
    "prompt_WZ"
]

def add_parsing_options():
    parser = argparse.ArgumentParser()
    parser.add_argument('--outpath', '-j', metavar = "outpath", default = "plots", dest = "outpath", 
                     help = "File where plots are stored.")
    parser.add_argument('--processes', '-p', metavar = "processes", default = None, dest = "processes", 
                     help = "Plot variations of these processes (comma separated multiple processes can be parsed)")
    parser.add_argument('--binname', '-b', metavar = "binname", default = "wz-card", dest = "binname", 
                     help = "Main name of the card.")
    parser.add_argument('--systematics', '-s', metavar = "systematics", default = None, dest = "systematics", 
                     help = "Plot only these variations (by default plot everything, give a comma separated list otherwise)")
    parser.add_argument('--inpath', '-i', metavar = "inpath", default = None, dest = "inpath", 
                     help = "Input path to the cards that contain the histograms and the variations.")
    return parser.parse_args()

def process_line(line):
    # EXAMPLE: x_TTWW_CMS_scale_j_AbsoluteUp
    # HENCE  : x_PROCESS_SYSTNAME_TYPEOFSYSTEMATIC
    # ALSO   : x_PROCESS for nominal histograms
    process = line[1]
    if "prompt" in line: 
        process = "_".join([line[1], line[2]]) 
        extra = "_".join(line[3:])
    else:
        extra = "_".join(line[2:])
    if "Up" in extra: typ = "Up"
    elif "Down" in extra: typ = "Down"
    else: typ = "nominal"

    return process, extra, typ

def store_templates(f, processes, keytab):
    histos = {process : {} for process in processes}
    for key in f.GetListOfKeys():
        if keytab not in key.GetName(): continue
        line = key.GetName().split("_")	
        process, extra, typ = process_line(line)
        extra = extra.replace(typ, "")
        print(process, extra, typ)
        if (process not in processes) or (extra == "")	or (process == "data") or (extra in histos[process]): continue
        
        nom = f.Get("x_" + process) # Take the nominal histogram
        nom_up = f.Get("x_" + process + "_" + extra + "Up")
        nom_down = f.Get("x_" + process + "_" + extra + "Down")
        nom_copy = deepcopy(nom.Clone("x_" + process))
        nom_up_copy = deepcopy(nom_up.Clone("x_" + process + "_" + extra + "Up"))
        nom_down_copy = deepcopy(nom_down.Clone("x_" + process + "_" + extra + "Down"))

        histos[process]["nominal"] = nom_copy
        histos[process][extra] = {"Up": nom_up_copy, "Down": nom_down_copy}	
    return histos

def make_legend(corner, columns = 2):
    '''
    A nice legend format taken from mcPlots
    '''
    legWidth = 0.7
    height = (.18 + 0.03*max(5-3,0))
    if columns > 1: height = 1.3*height/columns
    (x1,y1,x2,y2) = (.85-legWidth, .9 - height, .90, .91)
    if corner == "TR":
        (x1,y1,x2,y2) = (.6, .8, .9, .91)
    elif corner == "TC":
        (x1,y1,x2,y2) = (.5, .9 - height, .55+legWidth, .91)
    elif corner == "TL":
        (x1,y1,x2,y2) = (.1, .7 - height, .2+legWidth, .89)
    elif corner == "BR":
        (x1,y1,x2,y2) = (.85-legWidth, .16 + height, .90, .15)
    elif corner == "BC":
        (x1,y1,x2,y2) = (.5, .16 + height, .5+legWidth, .15)
    elif corner == "BL":
        (x1,y1,x2,y2) = (.2, .06 + height, .2+legWidth, .2)
        
    legend = r.TLegend(.1, .7 - height, .2+legWidth, .89)
    legend.SetBorderSize(0)
    legend.SetFillColor(0)
    legend.SetShadowColor(0)
    legend.SetFillStyle(0)
    legend.SetTextFont(42)
    legend.SetTextSize(0.035)
    legend.SetNColumns(columns)

    return legend


def create_canvas(ch, process, systype, npads = 1):
    if npads == 1:
        c = r.TCanvas("c_{}_{}_{}".format(ch, process, systype), "", 10, 10, 1200, 800)
    elif npads == 2:
        c = r.TCanvas("c_{}_{}_{}".format(ch, process, systype), "", 10, 10, 1000, 800)
        c.Divide(1,2)
        p1 = c.GetPad(1)
        p1.SetPad(0, 0.5, 1, 0.95)
        p1.SetTopMargin(0.1)
        p1.SetBottomMargin(0.02)

        p2 = c.GetPad(2)
        p2.SetPad(0, 0.1, 1, 0.5)
        p2.SetTopMargin(0.02)
        p2.SetBottomMargin(0.2)
         
        p1.SetGrid()
        p2.SetGrid()

    return c

def msg_log(hist):
    print("{}: ".format(hist.GetName()) + ",".join([str(hist.GetBinContent(i)) for i in range(1, hist.GetNbinsX())]))
    return

def save_plot(c, outpath, filename, ext):
    if not os.path.exists(outpath):
        os.system("mkdir -p " + outpath)
    c.Print("./%s/%s.%s"%(outpath, filename, ext))

def remove_error(hist):
    for bini in range(1, hist.GetNbinsX()):
        hist.SetBinError(bini, 0)
    return hist

def apply_cosmetics(hist, color):
    hist.SetLineColor(color)
    hist.SetTitle("")
    hist.SetFillColor(color)
    hist.SetFillStyle(0)
    hist.SetMarkerSize(0)
    hist.GetXaxis().SetLabelSize(0)
    hist.GetXaxis().SetTitleSize(0)
    hist.GetYaxis().SetTitle("Syst.Unc")		
    hist.GetYaxis().SetTitleSize(0.035)
    hist.GetYaxis().SetTitleOffset(1.5)
    hist.GetXaxis().SetTitle("m_{3l}")
    return hist
    
def get_histos_updown(nom, nom_up, nom_down, histkey, counter):	
    nom_copy  = deepcopy(nom.Clone("nom_copy"))
    hist_up	  = deepcopy(nom.Clone("hist_up_{}".format(histkey)))
    hist_down = deepcopy(nom.Clone("hist_down_{}".format(histkey)))
    
    hist_up.Add(nom_up, -1)
    hist_down.Add(nom_down, -1)

    # Set the error values to 0 for correctly propagating the uncertainties	
    nom_copy  = remove_error(nom_copy)
    hist_up   = remove_error(hist_up)
    hist_down = remove_error(hist_down)

    hist_up.Divide(nom)
    hist_down.Divide(nom)
    nom_copy.Divide(nom)


    hist_up.Add(nom_copy, 1)
    hist_down.Add(nom_copy, 1)
    
    return {"unc_up": hist_up, "unc_down": hist_down}

def get_unc_histos(histos):
    unc_histos = {}
    processes = histos.keys()
    for process in processes:
        if (process not in histos) or ("nominal" not in histos[process]): continue
        counter = 1
        nom = histos[process]["nominal"]
        unc_histos[process] = {"nominal" : nom}
        histkeys = histos[process].keys()
        for histkey in histkeys:
            if histkey == "nominal": continue
            nom_up = histos[process][histkey]["Up"]
            nom_down = histos[process][histkey]["Down"]
            unc_histos[process][histkey] = get_histos_updown(nom, nom_up, nom_down, histkey, counter)
    return unc_histos


def plot_stat_uncertainties(unc_histos, process, ch, outpath):
    c1 = create_canvas(ch, process, "nominal_%s"%process, npads=1)
    l = make_legend("TC")
    h= unc_histos[process]["nominal"]
    unc = deepcopy(unc_histos[process]["nominal"].Clone("stat_nom_{}".format(ch)))
    h.SetFillColorAlpha(3, 0.3)
    h.SetTitle("")
    h.GetXaxis().SetTitle("m_{3l}")
    h.GetYaxis().SetTitle("Events")
    h.SetMaximum(h.GetMaximum()*1.2)
    unc.SetFillStyle(3004)
    unc.SetFillColor(1)
    l.AddEntry(h, "Nominal", "f")
    l.AddEntry(unc, "Statistical. Unc", "f")
    h.Draw("hist")
    unc.Draw("same e2")
    l.Draw("same")
    save_plot(c1, outpath, "stat_{}_{}".format(process, ch) , 'png')
    return

def plot_uncertainties(unc_histos, process, systype, ch, outpath):
    c = create_canvas(ch, process, systype, npads = 1)

    legend1 = make_legend("TC")

    maxi1 = 1.
    mini1 = 1.
    maxi = maxi1
    mini = mini1
    systs = unc_histos[process].keys()
    for index, syst in enumerate(systs):
        if (syst == "nominal"): continue
        up = unc_histos[process][syst]["unc_up"]
        down = unc_histos[process][syst]["unc_down"]
        color = index+1 if index not in [10, 18, 19] else index+1
        up = apply_cosmetics(up, color )
        down = apply_cosmetics(down, color)
        up.SetLineStyle(1)
        down.SetLineStyle(9)
        maxi = up.GetMaximum()
        mini = up.GetMinimum()
        up.SetMaximum(max(maxi1, maxi) + (0.20*max(maxi1, maxi) if max(maxi1, maxi) - 0.20*max(maxi1,maxi) < 0.15 else 0.15))
        up.SetMinimum(min(mini1, mini) - (0.15*min(mini1, mini) if abs(min(mini1, mini) - 0.15*min(mini1, mini) < 0.1) else 0.1))
        up.SetMaximum(1.15)
        up.SetMinimum(0.9)

        up.Draw("hist") if index == 1 else up.Draw("hist same")
        down.Draw("hist same")
        legend1.AddEntry(up, syst+"Up", "l")
        legend1.AddEntry(down, syst+"Down", "l")

    legend1.Draw("same")
    # Write a txt file with the bin contents:
    
    save_plot(c, outpath, "/systs_{}_{}".format(ch, systype), 'png')
    logfile = open(outpath + "/systs_{}_{}.txt".format(ch, systype), "w")
    logfile.write("bin | %4s | Down\n"%("Up"))
    for bini in range(1, up.GetNbinsX()+1):
      logfile.write(" %3d | %4.3f | %4.3f\n "%(bini, up.GetBinContent(bini), down.GetBinContent(bini)))
    return

def plot_cosas(unc_histos, systype, ch, outpath_root):
    processes = unc_histos.keys()
    for process in processes:
        out = "/".join([outpath, process])
        plot_uncertainties(unc_histos, process, systype, ch, out )
        plot_stat_uncertainties(unc_histos, process, ch, out )
    return

if __name__ == "__main__":
    opts = add_parsing_options()
    
    outpath = opts.outpath
    if opts.processes is not None:
        processes = opts.processes.split(",")
    if opts.systematics is not None:
        systematics = opts.systematics.split(",")
    
    # -- First of all, get the list of cards from the input path
    files = [fname for fname in os.listdir(opts.inpath) if "root" in fname]
 
    # -- Iterate over each file
    for fname in files:
        print(" >> File: %s"%fname)
        fullpath = os.path.join(opts.inpath, fname)
        channel = re.match("%s(.*).root"%(opts.binname), fname).groups()[0]

        f = r.TFile.Open(fullpath)
        for systype in systematics:
            print("\t - Syst: %s"%systype)
            histos = store_templates(f, processes, systype)
            unc_histos = get_unc_histos(histos)
            plot_cosas(unc_histos, systype, channel, outpath)
            print(histos)       
        f.Close()
     
