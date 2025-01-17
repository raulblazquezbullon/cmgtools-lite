#import ROOT as r
import tabulate as tb
import warnings as wr
import sys, os, copy, math
from collections import OrderedDict
#r.gROOT.SetBatch(True)

#def saveLaTeXfromhisto(histo, varname, path = "./", outname = "", ty = "folded", errhisto = None):
    #table   = [[], []]; headers = []
    #usehisto = r.TH1D()

    #if errhisto != None:
        #usehisto = copy.deepcopy(histo.Clone("usehisto"))
        #for bn in range(1, usehisto.GetNbinsX() + 1): usehisto.SetBinError(bn, errhisto.GetBinError(bn))
    #else: usehisto = copy.deepcopy(histo.Clone("usehisto"))


    #nbins   = usehisto.GetNbinsX()
    #limits  = [int(round(usehisto.GetXaxis().GetBinLowEdge(bn), 0)) for bn in range(1, nbins + 1)]

    ##### Construction of headers
    #headers.append(vl.varList[varname]["printname"])
    #if "DPhiLL" not in varname:
        #for b in range(1, nbins + 1):
            #if b == nbins:
                #headers.append("[{inf}, $\\infty$)".format(inf = limits[b - 1]))
            #else:
                #headers.append("[{inf}, {sup})".format(inf = limits[b - 1], sup = limits[b]))
    #else:
        #for b in range(1, nbins + 1):
            #if b == nbins:
                #headers.append("[{inf}, 1]".format(inf = round(usehisto.GetXaxis().GetBinLowEdge(b), 2)))
            #else:
                #headers.append("[{inf}, {sup})".format(inf = round(usehisto.GetXaxis().GetBinLowEdge(b), 2), sup = round(usehisto.GetXaxis().GetBinLowEdge(b + 1), 2)))


    ##### Construction of the table
    #table[0].append(vl.TableDict[ty]["prefix"] + vl.varList[varname]["mathprintname"] + "\\right)$ " + vl.TableDict[ty]["dimensions"])
    #table[1].append("Uncertainty " + vl.TableDict[ty]["dimensions"])
    #for bn in range(1, nbins + 1):
        #tmpval, tmpinc = getvalueandincstrings(usehisto, bn)
        #table[0].append(tmpval); table[1].append(tmpinc)

    ## To assure that we don't remove trailing zeros
    #frm = tuple([""] + [".{l}f".format(l = len(table[0][ind].split(".")[1] )) for ind in range(1, len(table[0])) ])

    #finaltab = tb.tabulate(table, headers = headers, floatfmt = frm, numalign = "decimal", stralign = "center", colalign=("left",))
    ##print(finaltab)

    ##print "\n\n"


    #finallatextab = tb.tabulate(table, headers = headers, floatfmt = frm, tablefmt = "latex_raw")
    ##print(finallatextab)

    #substr = "".join(["l"] + ["r" for x in range(nbins)])
    #finallatextab = finallatextab.replace(substr, "".join(["l|"] + ["c|" for x in range(nbins - 1)] + ["c"] ))


    ##print finallatextab
    #if not os.path.isdir(path): os.system("mkdir -p " + path)

    #name = outname if outname != "" else (varname + "_" + ty)

    #outfile = open(path + "/" + name + ".tex", "w")
    #outfile.write(finallatextab)
    #outfile.close(); del outfile

    #return


#def getvalueandincstrings(histo, b):
    #valstring = ""; incstring = ""; # NOTE: Python by default uses up to 12 characters when
                                    ##       transforming a float number into a string.
    #valstring = str(histo.GetBinContent(b))
    #incstring = str(histo.GetBinError(b))
    #ndeczeros = 0
    #numofdecs = 0

    #if "e" in (valstring + incstring): raise RuntimeError("Scientific notation detected: case not supported.")

    #if "." in incstring:
        #incparts = incstring.split(".")

        #if incparts[0].replace("0", "") == "": # There is no non-decimal part
            ## Count figures that are zero
            #if incparts[1][0] == "0":
                #selfig = "0"
                #while selfig == "0":
                    #selfig = incparts[1][ndeczeros + 1]
                    #ndeczeros += 1
                    #if ndeczeros == len(incparts[1]) and selfig == "0":
                        #raise RuntimeError("The uncertainty is completely zero!")

            #numofdecs = ndeczeros + 1 # number of total decimals that we will take

            ## Check if the first significant figure is a one or not.
            #if incparts[1][ndeczeros] == "1":
                #numofdecs += 1
        #else:
            #if   len(incparts[0]) == 1 and incparts[0][0] != 1: numofdecs = 0
            #elif len(incparts[0]) == 1:                         numofdecs = 1
            #else:
                #wr.warn("WARNING: the result is a real number with only integer part and more than one digit. This should be saved with scientific notation, but it is not implemented. The full integer will be returned.")
                #numofdecs = 0

        #finalvalstring = str(round(histo.GetBinContent(b), numofdecs))
        #finalincstring = str(round(histo.GetBinError(b), numofdecs))

        #if   len(finalincstring) < len(finalvalstring):
            #finalincstring += "0"
        #elif len(finalincstring) > len(finalvalstring):
            #finalvalstring += "0"

    #return finalvalstring, finalincstring


#def getyieldsLaTeXtable(xuanpath, outname = "yields", path = "./results/tables"):
    #xuanchivo = open(xuanpath, "r")

    #recordthings = False
    #procs = []; table = [[]];

    #procs.append("Source")
    #table[0].append("Amount")

    #for line in xuanchivo.readlines():
        #if "====" in line: recordthings = True
        #if recordthings and "|" in line:
            #sublines = line.replace(" ", "").split("|")
            #procs.append(sublines[0].replace("Background", "") if not sublines[0] in vl.ProcessNameTranslator else vl.ProcessNameTranslator[sublines[0]])
            #table[0].append(round(float(sublines[1].split("+-")[0]), 0))
    #xuanchivo.close()

    #allbkg = 0
    #for ind in range(1, len(procs)):
        ##print(procs[ind].lower())
        #if ("signal"  not in procs[ind].lower() and
            #"total"   not in procs[ind].lower() and
            #"data"    not in procs[ind].lower()):
            #allbkg += table[0][ind]

    #for ind in range(len(procs)):
        #if "signal" in procs[ind].lower():
            #procs.insert(ind, "Total background")
            #table[0].insert(ind, round(float(allbkg), 0))
            #break

    #finallatextab = tb.tabulate(table, headers = procs, tablefmt = "latex_raw")

    #substr = "".join(["l"] + ["r" for x in range(len(table[0]) - 1)])
    #finallatextab = finallatextab.replace(substr, "".join(["l|"] + ["c|" for x in range(len(table[0]) - 2)] + ["c"] ))

    ##print finallatextab
    #if not os.path.isdir(path): os.system("mkdir -p " + path)

    #name = outname if outname != "" else (varname + "_" + ty)

    #outfile = open(path + "/" + outname + ".tex", "w")
    #outfile.write(finallatextab)
    #outfile.close(); del outfile
    #return


#def getcondnumLaTeXtable(variables, path = "./results/tables", txttablespath = "./", outname = "", addasimov = False):
    #table   = []; headers = []

    #if len(variables) == 0: raise RuntimeError("No variables given.")

    ## First, obtain the info from the txts
    #listofsysts  = []
    #listoftuples = []
    #filledsysts  = False
    #for var in variables:
        #tmptupleofcontents = (vl.varList[var]["printname"], [])
        #tmpfile = open(txttablespath + "/" + var + ".txt", "r")
        #for line in tmpfile.readlines():
            #if "Condition" in line: continue
            #sublines = line.split("          ")  # TODO: enhance this shit
            #if len(sublines) > 1 and not filledsysts:
                #thegoodname = sublines[1].replace("\n", "").replace("Up", "").replace("Down", "").replace(" ", "")
                #print thegoodname
                #if addasimov:
                    #listofsysts.append(vl.PrintSysNameTranslator[thegoodname])
                    #if thegoodname + "Down" not in vl.varList["Names"]["specialSysts"] and thegoodname != "":
                        #listofsysts[-1] += " up" if "Up" in sublines[1] else " down"
                #elif "asimov" not in sublines[1]:
                    #listofsysts.append(vl.PrintSysNameTranslator[thegoodname])
                    #if thegoodname + "Down" not in vl.varList["Names"]["specialSysts"] and thegoodname != "":
                        #listofsysts[-1] += " up" if "Up" in sublines[1] else " down"

            #if not addasimov and "asimov" not in sublines[1]: tmptupleofcontents[1].append(float(sublines[0]))
            #elif addasimov:                                   tmptupleofcontents[1].append(float(sublines[0]))

        #listoftuples.append(tmptupleofcontents)
        #filledsysts = True
        #tmpfile.close();

    #listoftuples.insert(0, ("Syst./Variable", listofsysts))

    #thedict = OrderedDict(listoftuples)


    ##sys.exit()

    #finallatextab = tb.tabulate(thedict, headers = "keys", floatfmt = ".2f", tablefmt = "latex_raw")

    #substr = "".join(["l"] + ["r" for x in range(len(variables))])
    #finallatextab = finallatextab.replace(substr, "".join(["l|"] + ["c|" for x in range(len(variables) - 1)] + ["c"] ))


    #print finallatextab
    #if not os.path.isdir(path): os.system("mkdir -p " + path)

    #name = outname if outname != "" else "condnum"

    #outfile = open(path + "/" + name + ".tex", "w")
    #outfile.write(finallatextab)
    #outfile.close(); del outfile
    #return


#def getcondnumLaTeXtable(variables, path = "./results/tables", txttablespath = "./", outname = "", addasimov = False):
    #table   = []; headers = []

    #if len(variables) == 0: raise RuntimeError("No variables given.")

    ## First, obtain the info from the txts
    #listofsysts  = []
    #listoftuples = []
    #filledsysts  = False
    #for var in variables:
        #tmptupleofcontents = (vl.varList[var]["printname"], [])
        #tmpfile = open(txttablespath + "/" + var + ".txt", "r")
        #for line in tmpfile.readlines():
            #if "Condition" in line: continue
            #sublines = line.split("          ")  # TODO: enhance this shit
            #if len(sublines) > 1 and not filledsysts:
                #thegoodname = sublines[1].replace("\n", "").replace("Up", "").replace("Down", "").replace(" ", "")
                #print thegoodname
                #if addasimov:
                    #listofsysts.append(vl.PrintSysNameTranslator[thegoodname])
                    #if thegoodname + "Down" not in vl.varList["Names"]["specialSysts"] and thegoodname != "":
                        #listofsysts[-1] += " up" if "Up" in sublines[1] else " down"
                #elif "asimov" not in sublines[1]:
                    #listofsysts.append(vl.PrintSysNameTranslator[thegoodname])
                    #if thegoodname + "Down" not in vl.varList["Names"]["specialSysts"] and thegoodname != "":
                        #listofsysts[-1] += " up" if "Up" in sublines[1] else " down"

            #if not addasimov and "asimov" not in sublines[1]: tmptupleofcontents[1].append(float(sublines[0]))
            #elif addasimov:                                   tmptupleofcontents[1].append(float(sublines[0]))

        #listoftuples.append(tmptupleofcontents)
        #filledsysts = True
        #tmpfile.close();

    #listoftuples.insert(0, ("Syst./Variable", listofsysts))

    #thedict = OrderedDict(listoftuples)


    ##sys.exit()

    #finallatextab = tb.tabulate(thedict, headers = "keys", floatfmt = ".2f", tablefmt = "latex_raw")

    #substr = "".join(["l"] + ["r" for x in range(len(variables))])
    #finallatextab = finallatextab.replace(substr, "".join(["l|"] + ["c|" for x in range(len(variables) - 1)] + ["c"] ))


    #print finallatextab
    #if not os.path.isdir(path): os.system("mkdir -p " + path)

    #name = outname if outname != "" else "condnum"

    #outfile = open(path + "/" + name + ".tex", "w")
    #outfile.write(finallatextab)
    #outfile.close(); del outfile
    #return


#def getgoftestsLaTeXtable(variables, path = "./results/tables", txttablespath = "./", outname = "", ty = "unfolding"):
    #table   = []; headers = []

    #if len(variables) == 0: raise RuntimeError("No variables given.")

    ## First, obtain the info from the txts
    #listofsamples = []
    #filledsamples = False
    #for var in variables:
        #tmplistofcontents = [ vl.varList[var]["printnamenodim"] ]
        #tmpfile = open(txttablespath + "/" + var + "_goftests_" + ty + ".txt", "r")
        #tmpsample = ""
        #for line in tmpfile.readlines(): # 1 p-value, 2 test statistic value
            #if "/" not in line: continue
            #sublines = line.replace(" ", "").split("/")
            #if "p-value" in sublines[1]:
                #tmplistofcontents.append( str( round(float(sublines[1].split(":")[1]), 3) ) )
                #if not filledsamples: listofsamples.append(vl.GOFTranslator[sublines[0]])
            #else:
                #tmplistofcontents[-1] += " | " + str( round( float(sublines[1].split(":")[1]), 3) )

        #table.append(tmplistofcontents)
        #filledsamples = True
        #tmpfile.close();


    #listofsamples.insert(0, "Variable/MC sample")
    ##sys.exit()

    #finallatextab = tb.tabulate(table, headers = listofsamples, tablefmt = "latex_raw")

    #substr = "".join(["l"] + ["l" for x in range(len(listofsamples) - 1)])
    #finallatextab = finallatextab.replace(substr, "".join(["l|"] + ["c|" for x in range(len(listofsamples) - 2)] + ["c"] ))


    #print finallatextab
    #if not os.path.isdir(path): os.system("mkdir -p " + path)

    #name = outname if outname != "" else "goftests"

    #outfile = open(path + "/" + name +"_" + ty + ".tex", "w")
    #outfile.write(finallatextab)
    #outfile.close(); del outfile
    #return

translateDict = {
    "mc_stat"     : "\\quad MC finite sample size",
    "jes"         : "\\qquad Jet energy scale",
    "jer"         : "\\qquad Jet energy resolution",
    "trigger"     : "\\qquad Trigger efficiencies",
    "pileup"      : "\\qquad Pileup",
    "elec"        : "\\qquad Electron efficiencies",
    "muon"        : "\\qquad Muon eff. and energy scales",
    "btag"        : "\\qquad b tagging efficiencies",
    "mistag"      : "\\qquad Mistagging efficiencies",
    "lumi"        : "\\qquad Integrated luminosity",
    "prefiring"   : "\\qquad 2016 and 2017 prefiring detector fix",
    "ttbar_norm"  : "\\qquad t$\\bar{\\mathrm{t}}$",
    "nonworz_norm": "\\qquad Non-W/Z",
    "dy_norm"     : "\\qquad Drell-Yan",
    "vvttv_norm"  : "\\qquad VV$+\\mathrm{t}\\bar{\\mathrm{t}}$V",
    "pdf"         : "\\qquad PDFs",
    "matching"    : "\\qquad Matrix element/PS matching",
    "ttbar_scales": "\\qquad t$\\bar{\\mathrm{t}}$ $\\mu_{R}$ and $\\mu_{F}$ scales",
    "tw_scales"   : "\\qquad tW $\\mu_{R}$ and $\\mu_{F}$ scales",
    "isr"         : "\\qquad Initial state radiation",
    "fsr"         : "\\qquad Final state radiation",
    "colour"      : "\\qquad Colour reconnection",
    "ue"          : "\\qquad Underlying event",
    "toppt"       : "\\qquad Top $p_{T}$ reweighting",
    "mtop"        : "\\qquad Top quark mass",
    "ds"          : "\\qquad DR-DS",
    "stat"        : "Statistical",
}


sysforsum = ['mc_stat', 'jes', "jer", 'trigger', 'pileup', 'elec', "muon", 'btag', 'mistag', 'prefiring', 'ttbar_norm', 'nonworz_norm', 'dy_norm' , 'vvttv_norm', "pdf", "matching","ttbar_scales", "tw_scales","isr", "fsr", "colour", "ue", "toppt", "mtop", "ds"]

orderOfTheUncs = ["_syst", "_systexp",
                    "trigger", "elec", "muon", "jes", "jer","btag", "mistag", "pileup", "prefiring",
                  "_systmod",
                    "ttbar_scales","tw_scales", "isr", "fsr", "ue", "matching","toppt", "colour", "pdf", "ds", "mtop",
                  "_systnorm",
                    "ttbar_norm", "vvttv_norm", "dy_norm", "nonworz_norm", 
                  "_mc_stat",
                  "_totalsyst",
                  "_lumi",
                  "_stat",
                  "_total"]


def getFitUncsLaTeXtable(path = "./", inname = "outputfit_all.txt", outname = "unctable"):
    table   = []; headers = ["Source", "Average unc. (\%)", "Unc. up (\%)", "Unc. down (\%)"]

    # First, obtain the info from the txts
    infodict = {}
    tmpfile = open(path + "/" + inname, "r")
    for line in tmpfile.readlines(): # 1 p-value, 2 test statistic value
        if ":" not in line: continue

        sublines = line.replace(" ", "").replace("\n", "").split(":")

        if "val" in sublines[0]:
            infodict[""] = {"val" : float(sublines[1]) }
        else:
            infodict[sublines[0].replace("inc_", "")] = {
                "up"   : float(sublines[1]),
                "down" : float(sublines[2]),
                "ave"  : (float(sublines[1]) + float(sublines[2])) / 2
            }
    tmpfile.close();

    totalup = 0; totaldown = 0; totalsystnolumiup = 0; totalsystnolumidown = 0
    for key in infodict:
        if key != "":
            totalup   += infodict[key]["up"]**2
            totaldown += infodict[key]["down"]**2

            if key in sysforsum:
                totalsystnolumiup   += infodict[key]["up"]**2
                totalsystnolumidown += infodict[key]["down"]**2
    totalup   = math.sqrt(totalup)
    totaldown = math.sqrt(totaldown)
    totalsystnolumiup   = math.sqrt(totalsystnolumiup)
    totalsystnolumidown = math.sqrt(totalsystnolumidown)
    infodict[""]["up"]   = totalup
    infodict[""]["down"] = totaldown
    infodict[""]["ave"]  = (totalup + totaldown) / 2
    infodict["totalsyst"] = {"up"   : totalsystnolumiup,
                             "down" : totalsystnolumidown,
                             "ave"  : (totalsystnolumiup + totalsystnolumidown)/2}

    for key in infodict:
        infodict[key]["up"]   = infodict[key]["up"]   * 100 / infodict[""]["val"]
        infodict[key]["down"] = infodict[key]["down"] * 100 / infodict[""]["val"]
        infodict[key]["ave"]  = infodict[key]["ave"]  * 100 / infodict[""]["val"]

    print(infodict)
    #sys.exit()

    ndec = 1

    for i in orderOfTheUncs:
        tmprow = ""
        if   i == "_syst":
            tmprow = ["\\textbf{Systematic}", "", ""]
        elif i == "_systexp":
            tmprow = ["\\quad Experimental", "", ""]
        elif i == "_systmod":
            tmprow = ["\\quad  Modelling", "", ""]
        elif i == "_systnorm":
            tmprow = ["\\quad  Background normalisation", "", ""]
        elif i == "_mc_stat":
            tmprow = ["  " + translateDict["mc_stat"], round(infodict["mc_stat"]["ave"], 1), round(infodict["mc_stat"]["up"], 1), round(infodict["mc_stat"]["down"],1) ]
        elif i == "_totalsyst":
            tmprow = ["\\textbf{{Total systematic (excl. lum.)}}", round(infodict["totalsyst"]["ave"], 1), round(infodict["totalsyst"]["up"], 1), round(infodict["totalsyst"]["down"], 1)]
        elif i == "_lumi":
            tmprow = ["\\textbf{{Integrated luminosity}}", round(infodict["lumi"]["ave"], 1), round(infodict["lumi"]["up"], 1), round(infodict["lumi"]["down"], 1)]
        elif i == "_stat":
            tmprow = ["\\textbf{{Statistical}}", round(infodict["stat"]["ave"], 1), round(infodict["stat"]["up"], 1), round(infodict["stat"]["down"], 1)]
        elif i == "_total":
            tmprow = ["\\textbf{{Total}}", round(infodict[""]["ave"], 1), round(infodict[""]["up"], 1), round(infodict[""]["down"], 1)]
        else:
            tmprow = [translateDict[i], round(infodict[i]["ave"], 1), round(infodict[i]["up"], 1), round(infodict[i]["down"], 1)]

        table.append(tmprow)
        #print tmprow

    #sys.exit()
    finallatextab = tb.tabulate(table, headers = headers, tablefmt = "latex_raw", floatfmt=".1f")

    substr = "".join(["l"] + ["l" for x in range(len(headers) - 1)])
    finallatextab = finallatextab.replace(substr, "".join(["l|"] + ["c|" for x in range(len(headers) - 2)] + ["c"] ))


    print(finallatextab)

    outfile = open(path + "/" + outname + ".tex", "w")
    outfile.write(finallatextab)
    outfile.close(); del outfile
    return


if __name__ == "__main__":
    getFitUncsLaTeXtable("./")
