from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.TopRun2_modules import ch
from copy import deepcopy
import ROOT as r
import os


class lepScaleFactors_TopRun2(Module):
    # =================== ### Main methods
    def __init__(self):
        self.basepath     = os.environ["CMSSW_BASE"] + "/src/CMGTools/TTHAnalysis/data/TopRun2/"
        self.basepathlep  = self.basepath + "/lepton/"
        self.basepathtrig = self.basepath + "/trigger/"

        self.leptonSF  = {}; self.triggerSF = {}
        self.leptonSF["m"] = {}; self.leptonSF["e"] = {}
        self.triggerSF[ch.ElMu] = {}; self.triggerSF[ch.Elec] = {}; self.triggerSF[ch.Muon] = {};
        for y in [2016, 2017, 2018]:
            self.leptonSF["m"][y] = {}
            self.leptonSF["e"][y] = {}
            for chan in [ch.ElMu, ch.Elec, ch.Muon]:
                self.triggerSF[chan][y] = {}

        self.lumidict  = {}
        self.lumidict[2016] = {};
        self.lumidict[2016]["BCDEF"] = 19.706
        self.lumidict[2016]["GH"]    = 16.1454


        print("[lepScaleFactors_TopRun2::constructor] - Loading histograms")
        # Muon ID
        self.leptonSF["m"][2016]["tight,BCDEF"] = self.loadHisto(self.basepathlep + "2016LegacyReReco_RunBCDEF_SF_ID.root", "NUM_TightID_DEN_genTracks_eta_pt")
        self.leptonSF["m"][2016]["tight,GH"]    = self.loadHisto(self.basepathlep + "2016LegacyReReco_RunGH_SF_ID.root", "NUM_TightID_DEN_genTracks_eta_pt")
        self.leptonSF["m"][2017]["tight"]       = self.loadHisto(self.basepathlep + "RunBCDEF_SF_ID.root", "NUM_TightID_DEN_genTracks_pt_abseta")
        self.leptonSF["m"][2018]["tight"]       = self.loadHisto(self.basepathlep + "Run2018ABCD_SF_ID.root", "NUM_TightID_DEN_TrackerMuons_pt_abseta")

        # Muon iso
        self.leptonSF["m"][2016]["iso,BCDEF"] = self.loadHisto(self.basepathlep + "2016LegacyReReco_RunBCDEF_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_eta_pt")
        self.leptonSF["m"][2016]["iso,GH"]    = self.loadHisto(self.basepathlep + "2016LegacyReReco_RunGH_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_eta_pt")
        self.leptonSF["m"][2017]["iso"]       = self.loadHisto(self.basepathlep + "RunBCDEF_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_pt_abseta")
        self.leptonSF["m"][2018]["iso"]       = self.loadHisto(self.basepathlep + "Run2018ABCD_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_pt_abseta")

        # Elec ID
        self.leptonSF["e"][2016]["idtight"] = self.loadHisto(self.basepathlep + "2016LegacyReReco_ElectronTight_Fall17V2.root", "EGamma_SF2D")
        self.leptonSF["e"][2017]["idtight"] = self.loadHisto(self.basepathlep + "2017_ElectronTight.root", "EGamma_SF2D")
        self.leptonSF["e"][2018]["idtight"] = self.loadHisto(self.basepathlep + "2018_ElectronTight.root", "EGamma_SF2D")

        # Elec reco
        self.leptonSF["e"][2016]["recotight"] = self.loadHisto(self.basepathlep + "2016ReReco_ElecRECO.root", "EGamma_SF2D")
        self.leptonSF["e"][2017]["recotight"] = self.loadHisto(self.basepathlep + "2017_ElecRECO.root", "EGamma_SF2D")
        self.leptonSF["e"][2018]["recotight"] = self.loadHisto(self.basepathlep + "2018_ElecRECO.root", "EGamma_SF2D")

        # Trigger elmu
        self.triggerSF[ch.ElMu][2016] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2016_ElMu")
        self.triggerSF[ch.ElMu][2017] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2017_ElMu")
        self.triggerSF[ch.ElMu][2018] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2018_ElMu")

        # Trigger elel
        self.triggerSF[ch.Elec][2016] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2016_Elec")
        self.triggerSF[ch.Elec][2017] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2017_Elec")
        self.triggerSF[ch.Elec][2018] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2018_Elec")

        # Trigger mumu
        self.triggerSF[ch.Muon][2016] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2016_Muon")
        self.triggerSF[ch.Muon][2017] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2017_Muon")
        self.triggerSF[ch.Muon][2018] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2018_Muon")
        print("[lepScaleFactors_TopRun2::constructor] - Finished loading histograms")
        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree

        for var in ["", "_Up", "_Dn"]:
            self.out.branch('MuonSF' + var, 'F')
            self.out.branch('ElecSF' + var, 'F')
            self.out.branch('TrigSF' + var, 'F')
        return


    def analyze(self, event):
        year = event.year
        chan = event.channel
        run  = event.run
        leps = [l for l in Collection(event, "LepGood")]

        # leptons
        for var in ["", "_Up", "_Dn"]:
            muonsf = 1; elecsf = 1

            #### NOTE: electron SF are in terms of the eta of the associated supercluster and
            # the pT of the electron. Take also into account that deltaEtaSC = etaSC - eta, as
            # indicated in PhysicsTools/NanoAOD/python/electrons_cff.py.
            if len(leps) > 0:
                if   chan == ch.ElMu:
                    if abs(leps[0].pdgId) == 11: # electron
                        elecsf *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta + leps[0].deltaEtaSC, var, "e", year, event)
                        if len(leps) > 1: muonsf *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta, var, "m", year, event)
                    else:
                        muonsf *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta, var, "m", year, event)
                        if len(leps) > 1: elecsf *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta + leps[1].deltaEtaSC, var, "e", year, event)
                elif chan == ch.Elec:
                    elecsf *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta + leps[0].deltaEtaSC, var, "e", year, event)
                    if len(leps) > 1: elecsf *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta + leps[1].deltaEtaSC, var, "e", year, event)
                elif chan == ch.Muon:
                    muonsf *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta, var, "m", year, event)
                    if len(leps) > 1: muonsf *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta, var, "m", year, event)

            self.out.fillBranch('MuonSF' + var, muonsf)
            self.out.fillBranch('ElecSF' + var, elecsf)

        # triggers
        for var in ["", "_Up", "_Dn"]:
            trigsf = 1
            if len(leps) > 1 and chan != ch.NoChan:
                trigsf *= self.getTrigSF(leps[0].pt_corrAll, leps[1].pt_corrAll, var, chan, year, ev = event)

            self.out.fillBranch('TrigSF' + var, trigsf)

        return True


    # =================== ### Other methods
    def loadHisto(self, fil, hist):
        tf = r.TFile.Open(fil)
        if not tf: raise RuntimeError("No such file %s"%fil)
        hist = tf.Get(hist)
        if not hist: raise RuntimeError("No such object %s in %s"%(hist,fil))
        ret = deepcopy(hist)
        tf.Close()
        return ret


    def getTrigSF(self, pt1, pt2, var, fl, yr, ev = None):
        # NOTE: it will always use as the first lepton the one with largest pt
        hist = self.triggerSF[fl][yr]
        tmppt1 = max([pt1, pt2]); tmppt2 = min([pt1, pt2])
        pt1bin = max(1, min(hist.GetNbinsX(), hist.GetXaxis().FindBin(tmppt1)))
        pt2bin = max(1, min(hist.GetNbinsY(), hist.GetYaxis().FindBin(tmppt2)))

        #if ev.event == 467503 or ev.event == 486099:
            #print "\n======================================"

            #print "pt1:", pt1,       "pt2:", pt2
            #print "tmppt1:", tmppt1, "tmppt2:", tmppt2
            #print "pt1bin:", pt1bin, "pt2bin:", pt2bin
            #print "histname:", hist.GetName()
            #print "yr:", yr
            #print "dict:", self.triggerSF

            #print "======================================\n"

        out = hist.GetBinContent(pt1bin, pt2bin)
        if   "up" in var.lower():
            out += hist.GetBinError(pt1bin, pt2bin)
        elif "dn" in var.lower():
            out -= hist.GetBinError(pt1bin, pt2bin)

        return out


    def getFromHisto(self, pt, eta, histo, err = False):
        #### NOTE: this method obtains the information for a given pt and eta. In the
        # case, like e.g. electron SF, where the histogram is in terms of the supercluster
        # pseudorapidity rather than the final pseudorapidity, this script will not
        # automatically change it.
        normal = True # normal := {x: pt, y: eta}
        if (histo.GetXaxis().GetBinUpEdge(histo.GetNbinsX())) < 10: normal = False

        tmpeta = eta
        #tmpeta = abs(eta)

        if    ((normal     and histo.GetYaxis().GetBinLowEdge(1) >= 0)
            or (not normal and histo.GetXaxis().GetBinLowEdge(1) >= 0)):
            tmpeta = abs(tmpeta)

        if normal:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(pt)))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(tmpeta)))
        else:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(tmpeta)))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(pt)))

        if err: return histo.GetBinError(xbin, ybin)
        else:   return histo.GetBinContent(xbin, ybin)
        return


    def getFromHistoNoAbs(self, pt, eta, histo, err = False): #### Pal stop
        normal = True # normal := {x: pt, y: eta}
        if (histo.GetXaxis().GetBinUpEdge(histo.GetNbinsX())) < 10: normal = False

        tmpeta = eta

        #if    ((normal     and histo.GetYaxis().GetBinLowEdge(1) >= 0)
            #or (not normal and histo.GetXaxis().GetBinLowEdge(1) >= 0)):
            #tmpeta = abs(tmpeta)

        if normal:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(pt)))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(tmpeta)))
        else:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(tmpeta)))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(pt)))

        if err: return histo.GetBinError(xbin, ybin)
        else:   return histo.GetBinContent(xbin, ybin)
        return


    def getFromHistoAbs(self, pt, eta, histo, err = False): #### Pal stop
        return self.getFromHisto(pt, abs(eta), histo, err)


    def getLepSF(self, pt, eta, var, fl, yr, ev = None):
        out = 1
        doneSFtype = []

        for sf in self.leptonSF[fl][yr]:
            #tmpls = self.leptonSF[fl][yr][sf].split(",")
            tmpls = sf.split(",")
            #print sf, doneSFtype
            if (len(tmpls) > 1) and (tmpls[0] not in doneSFtype):
                doneSFtype.append(tmpls[0])

                sftorescale = [sf]
                for sf2 in self.leptonSF[fl][yr]:
                    if   sf2 == sf: continue
                    else:
                        tmpls2 = sf2.split(",")
                        if (len(tmpls) > 1):
                            if tmpls2[0] == tmpls[0]:
                                sftorescale.append(sf2)
                tmpout  = 0
                tmplumi = []

                for i in sftorescale:
                    tmplumi.append(self.lumidict[yr][i.split(",")[1]])
                    tmpout += self.getFromHisto(pt, eta, self.leptonSF[fl][yr][i]) * tmplumi[-1]
                    #tmpout += self.getFromHistoAbs(pt, eta, self.leptonSF[fl][yr][i]) * tmplumi[-1] ### Como'l stop

                tmpout /= sum(tmplumi)
                #if ev.event == 467503 or ev.event == 486099: print(var, fl, ev.event, tmpls[0], tmpout)
                out *= tmpout

            elif tmpls[0] not in doneSFtype:
                #if fl == "e": out  *= self.getFromHistoNoAbs(pt, eta, self.leptonSF[fl][yr][sf]) ### Como'l stop
                #else:         out  *= self.getFromHistoAbs(  pt, eta, self.leptonSF[fl][yr][sf]) ### Como'l stop
                out  *= self.getFromHisto(pt, eta, self.leptonSF[fl][yr][sf])
                #if ev.event == 467503 or ev.event == 486099:
                    #print(var, fl, ev.event, tmpls[0], out)
                    #print(var, fl, ev.event, tmpls[0], self.getFromHistoAbs(  pt, eta, self.leptonSF[fl][yr][sf]))
                doneSFtype.append(sf)
        if var != "":
            doneSFtype = []
            tmpsum = 0
            for sf in self.leptonSF[fl][yr]:
                #tmpls = self.leptonSF[fl][yr][sf].split(",")
                tmpls = sf.split(",")
                if (len(tmpls) > 1) and (tmpls[0] not in doneSFtype):
                    doneSFtype.append(tmpls[0])

                    sftorescale = [sf]
                    for sf2 in self.leptonSF[fl][yr]:
                        if   sf2 == sf: continue
                        else:
                            tmpls2 = sf2.split(",")
                            if (len(tmpls) > 1):
                                if tmpls2[0] == tmpls[0]:
                                    sftorescale.append(sf2)
                    tmpout  = 0
                    tmplumi = []

                    for i in sftorescale:
                        tmplumi.append(self.lumidict[yr][i.split(",")[1]])
                        tmpout += self.getFromHisto(pt, eta, self.leptonSF[fl][yr][i], err = True) * tmplumi[-1]

                    tmpout /= sum(tmplumi)
                    tmpsum += tmpout**2

                elif tmpls[0] not in doneSFtype:
                    tmpsum += (self.getFromHisto(pt, eta, self.leptonSF[fl][yr][sf], err = True))**2
                    doneSFtype.append(sf)

            if fl == "m": tmpsum += (out * 0.005)**2 # Extrapolation to top-like from DY-like phase space (CMS-AN-2018-210). Only for muons.
            tmpsum = r.TMath.Sqrt(tmpsum)

            if "up" in var.lower(): out += tmpsum
            else:                   out -= tmpsum
        return out

