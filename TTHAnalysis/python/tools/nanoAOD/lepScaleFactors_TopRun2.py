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

            #### HAY QUE CAMBIAR LA ETA POR LA DEL SUPERCLUSTER

            if   chan == ch.ElMu:
                if abs(leps[0].pdgId) == 11: # electron
                    elecsf *= self.getLepSF(leps[0].pt, leps[0].eta, var, "e", year, run)
                    muonsf *= self.getLepSF(leps[1].pt, leps[1].eta, var, "m", year, run)
                else:
                    muonsf *= self.getLepSF(leps[0].pt, leps[0].eta, var, "m", year, run)
                    elecsf *= self.getLepSF(leps[1].pt, leps[1].eta, var, "e", year, run)
            elif chan == ch.Elec:
                elecsf *= self.getLepSF(leps[0].pt, leps[0].eta, var, "e", year, run)
                elecsf *= self.getLepSF(leps[1].pt, leps[1].eta, var, "e", year, run)
            elif chan == ch.Muon:
                muonsf *= self.getLepSF(leps[0].pt, leps[0].eta, var, "m", year, run)
                muonsf *= self.getLepSF(leps[0].pt, leps[0].eta, var, "m", year, run)

            self.out.fillBranch('MuonSF' + var, muonsf)
            self.out.fillBranch('ElecSF' + var, elecsf)

        # triggers

        for var in ["", "_Up", "_Dn"]:
            trigsf = 1
            if len(leps) >= 2:
                trigsf *= self.getTrigSF(leps[0].pt, leps[1].pt, var, chan, year)

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


    def getTrigSF(self, pt1, pt2, var, fl, yr):
        hist = self.triggerSF[fl][yr]
        pt1bin = max(1, min(hist.GetNbinsX(), hist.GetXaxis().FindBin(pt1)))
        pt2bin = max(1, min(hist.GetNbinsY(), hist.GetYaxis().FindBin(pt2)))

        out = hist.GetBinContent(pt1bin, pt2bin)
        if   "up" in var.lower():
            out += hist.GetBinError(pt1bin, pt2bin)
        elif "dn" in var.lower():
            out -= hist.GetBinError(pt1bin, pt2bin)

        return out


    def getFromHisto(self, pt, eta, histo, err = False):
        normal = True # normal := {x: pt, y: eta}
        if ((histo.GetXaxis()).GetBinUpEdge(histo.GetNbinsX())) < 10: normal = False

        if normal:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(abs(pt))))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(abs(eta))))
        else:
            xbin = max(1, min(histo.GetNbinsX(), histo.GetXaxis().FindBin(abs(eta))))
            ybin = max(1, min(histo.GetNbinsY(), histo.GetYaxis().FindBin(abs(pt))))

        if err: return histo.GetBinError(xbin, ybin)
        else:   return histo.GetBinContent(xbin, ybin)
        return


    def getLepSF(self, pt, eta, var, fl, yr, rn):
        out = 1
        doneSFtype = []

        for sf in self.leptonSF[fl][yr]:
            #tmpls = self.leptonSF[fl][yr][sf].split(",")
            tmpls = sf.split(",")
            if (len(tmpls) > 1) and (tmpls[0] not in doneSFtype):
                doneSFtype.append(tmpls[0])

                sftorescale = [sf]
                for sf2 in self.leptonSF[fl][yr]:
                    if   sf2 == sf: continue
                    else:
                        tmpls2 = self.leptonSF[fl][yr][sf2].split(",")
                        if (len(tmpls) > 1) and (tmpls2[0] == tmpls[0]):
                            sftorescale.append(sf2)
                tmpout  = 0
                tmplumi = []

                for i in sftorescale:
                    tmplumi.append(lumidict[yr][i.split(",")[1]])
                    tmpout += self.getFromHisto(pt, eta, histo = self.leptonSF[fl][yr][i]) * tmplumi[-1]

                tmpout /= sum(tmplumi)
                out *= tmpout

            else:
                out  *= self.getFromHisto(pt, eta, histo = self.leptonSF[fl][yr][sf])
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
                            tmpls2 = self.leptonSF[fl][yr][sf2].split(",")
                            if (len(tmpls) > 1) and (tmpls2[0] == tmpls[0]):
                                sftorescale.append(sf2)
                    tmpout  = 0
                    tmplumi = []

                    for i in sftorescale:
                        tmplumi.append(lumidict[yr][i.split(",")[1]])
                        tmpout += self.getFromHisto(pt, eta, histo = self.leptonSF[fl][yr][i], err = True) * tmplumi[-1]

                    tmpout /= sum(tmplumi)
                    tmpsum += tmpout**2

                else:
                    tmpsum += (self.getFromHisto(pt, eta, histo = self.leptonSF[fl][yr][sf], err = True))**2

            if fl == "m": tmpsum += (out * 0.005)**2 # Extrapolation to top-like from DY-like phase space (CMS-AN-2018-210)
            tmpsum = r.TMath.Sqrt(tmpsum)

            if "up" in var.lower(): out += tmpsum
            else:                   out -= tmpsum
        return out

