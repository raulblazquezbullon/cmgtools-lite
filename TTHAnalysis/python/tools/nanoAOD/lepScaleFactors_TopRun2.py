from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
from CMGTools.TTHAnalysis.tools.nanoAOD.TopRun2_modules import ch
from copy import deepcopy
import ROOT as r
import os


class lepScaleFactors_TopRun2(Module):
    # =================== ### Main methods
    def __init__(self, lepenvars = ["mu"]):
        self.basepath     = os.environ["CMSSW_BASE"] + "/src/CMGTools/TTHAnalysis/data/TopRun2/"
        self.basepathlep  = self.basepath + "/lepton/"
        self.basepathtrig = self.basepath + "/trigger/"

        self.leptonSF = {}; self.leptonSFuncs = {}; self.triggerSF = {}
        self.leptonSF["m"] = {}; self.leptonSF["e"] = {}
        self.leptonSFuncs["m"] = {}; self.leptonSFuncs["e"] = {}
        self.triggerSF[ch.ElMu] = {}; self.triggerSF[ch.Elec] = {}; self.triggerSF[ch.Muon] = {};
        for y in [2016, 2017, 2018]:
            self.leptonSF["m"][y] = {}
            self.leptonSF["e"][y] = {}
            self.leptonSFuncs["m"][y] = {}
            self.leptonSFuncs["e"][y] = {}
            for chan in [ch.ElMu, ch.Elec, ch.Muon]:
                self.triggerSF[chan][y] = {}

        self.lumidict  = {}
        self.lumidict[2016] = {};
        self.lumidict[2016]["BCDEF"] = 19.706
        self.lumidict[2016]["GH"]    = 16.1454

        self.systsLepEn = {}
        if   len(lepenvars):
            for i, var in enumerate(lepenvars):
                self.systsLepEn[i+1]    = "_%sUp"%var
                self.systsLepEn[-(i+1)] = "_%sDown"%var

        print("[lepScaleFactors_TopRun2::constructor] - Loading histograms")
        #### OLD MUON: JOINT VARIATIONS
        ##Muon ID
        #self.leptonSF["m"][2016]["idtight,BCDEF"] = self.loadHisto(self.basepathlep + "Muon_Run2016BCDEF_SF_ID.root", "NUM_TightID_DEN_genTracks_eta_pt")
        #self.leptonSF["m"][2016]["idtight,GH"]    = self.loadHisto(self.basepathlep + "Muon_Run2016GH_SF_ID.root",    "NUM_TightID_DEN_genTracks_eta_pt")
        #self.leptonSF["m"][2017]["idtight"]       = self.loadHisto(self.basepathlep + "Muon_Run2017BCDEF_SF_ID.root", "NUM_TightID_DEN_genTracks_pt_abseta")
        #self.leptonSF["m"][2018]["idtight"]       = self.loadHisto(self.basepathlep + "Muon_Run2018ABCD_SF_ID.root",  "NUM_TightID_DEN_TrackerMuons_pt_abseta")

        ## Muon iso
        #self.leptonSF["m"][2016]["iso,BCDEF"] = self.loadHisto(self.basepathlep + "Muon_Run2016BCDEF_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_eta_pt")
        #self.leptonSF["m"][2016]["iso,GH"]    = self.loadHisto(self.basepathlep + "Muon_Run2016GH_SF_ISO.root",    "NUM_TightRelIso_DEN_TightIDandIPCut_eta_pt")
        #self.leptonSF["m"][2017]["iso"]       = self.loadHisto(self.basepathlep + "Muon_Run2017BCDEF_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_pt_abseta")
        #self.leptonSF["m"][2018]["iso"]       = self.loadHisto(self.basepathlep + "Muon_Run2018ABCD_SF_ISO.root",  "NUM_TightRelIso_DEN_TightIDandIPCut_pt_abseta")

        #### NEW MUON: SEPARATE UNCS
        ## Muon ID
        self.leptonSF["m"][2016]["idtight,BCDEF"], self.leptonSFuncs["m"][2016]["idtight_stat,BCDEF"], self.leptonSFuncs["m"][2016]["idtight_syst,BCDEF"] = self.loadHistoWithUncs(self.basepathlep + "Muon_Run2016BCDEF_SF_ID.root", "NUM_TightID_DEN_genTracks_eta_pt"  , ["_stat", "_syst"])
        self.leptonSF["m"][2016]["idtight,GH"], self.leptonSFuncs["m"][2016]["idtight_stat,GH"], self.leptonSFuncs["m"][2016]["idtight_syst,GH"] = self.loadHistoWithUncs(self.basepathlep + "Muon_Run2016GH_SF_ID.root",    "NUM_TightID_DEN_genTracks_eta_pt"          , ["_stat", "_syst"])
        self.leptonSF["m"][2017]["idtight"], self.leptonSFuncs["m"][2017]["idtight_stat"], self.leptonSFuncs["m"][2017]["idtight_syst"] = self.loadHistoWithUncs(self.basepathlep + "Muon_Run2017BCDEF_SF_ID.root", "NUM_TightID_DEN_genTracks_pt_abseta"       , ["_stat", "_syst"])
        self.leptonSF["m"][2018]["idtight"], self.leptonSFuncs["m"][2018]["idtight_stat"], self.leptonSFuncs["m"][2018]["idtight_syst"] = self.loadHistoWithUncs(self.basepathlep + "Muon_Run2018ABCD_SF_ID.root",  "NUM_TightID_DEN_TrackerMuons_pt_abseta"    , ["_stat", "_syst"])

        # Muon iso
        self.leptonSF["m"][2016]["iso,BCDEF"], self.leptonSFuncs["m"][2016]["iso_stat,BCDEF"], self.leptonSFuncs["m"][2016]["iso_syst,BCDEF"] = self.loadHistoWithUncs(self.basepathlep + "Muon_Run2016BCDEF_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_eta_pt"   , ["_stat", "_syst"])
        self.leptonSF["m"][2016]["iso,GH"], self.leptonSFuncs["m"][2016]["iso_stat,GH"], self.leptonSFuncs["m"][2016]["iso_syst,GH"] = self.loadHistoWithUncs(self.basepathlep + "Muon_Run2016GH_SF_ISO.root",    "NUM_TightRelIso_DEN_TightIDandIPCut_eta_pt"   , ["_stat", "_syst"])
        self.leptonSF["m"][2017]["iso"], self.leptonSFuncs["m"][2017]["iso_stat"], self.leptonSFuncs["m"][2017]["iso_syst"] = self.loadHistoWithUncs(self.basepathlep + "Muon_Run2017BCDEF_SF_ISO.root", "NUM_TightRelIso_DEN_TightIDandIPCut_pt_abseta", ["_stat", "_syst"])
        self.leptonSF["m"][2018]["iso"], self.leptonSFuncs["m"][2018]["iso_stat"], self.leptonSFuncs["m"][2018]["iso_syst"] = self.loadHistoWithUncs(self.basepathlep + "Muon_Run2018ABCD_SF_ISO.root",  "NUM_TightRelIso_DEN_TightIDandIPCut_pt_abseta", ["_stat", "_syst"])

        # Elec ID
        self.leptonSF["e"][2016]["idtight"] = self.loadHisto(self.basepathlep + "Electron_2016_IDTight.root", "EGamma_SF2D")
        self.leptonSF["e"][2017]["idtight"] = self.loadHisto(self.basepathlep + "Electron_2017_IDTight.root", "EGamma_SF2D")
        self.leptonSF["e"][2018]["idtight"] = self.loadHisto(self.basepathlep + "Electron_2018_IDTight.root", "EGamma_SF2D")

        # Elec reco
        self.leptonSF["e"][2016]["recotight"] = self.loadHisto(self.basepathlep + "Electron_2016_RECO.root", "EGamma_SF2D")
        self.leptonSF["e"][2017]["recotight"] = self.loadHisto(self.basepathlep + "Electron_2017_RECO.root", "EGamma_SF2D")
        self.leptonSF["e"][2018]["recotight"] = self.loadHisto(self.basepathlep + "Electron_2018_RECO.root", "EGamma_SF2D")

        # Trigger elmu
        # old (pre 2021-01)
        #self.triggerSF[ch.ElMu][2016] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2016_ElMu")
        #self.triggerSF[ch.ElMu][2017] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2017_ElMu")
        #self.triggerSF[ch.ElMu][2018] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2018_ElMu")
        # new (post 2021-01)
        self.triggerSF[ch.ElMu][2016] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza_2016.root", "h2D_SF_emu_lepABpt_FullError")
        self.triggerSF[ch.ElMu][2017] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza_2017.root", "h2D_SF_emu_lepABpt_FullError")
        self.triggerSF[ch.ElMu][2018] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza_2018.root", "h2D_SF_emu_lepABpt_FullError")

        # Trigger elel
        # old (pre 2021-01)
        #self.triggerSF[ch.Elec][2016] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2016_Elec")
        #self.triggerSF[ch.Elec][2017] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2017_Elec")
        #self.triggerSF[ch.Elec][2018] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2018_Elec")
        # new (post 2021-01)
        self.triggerSF[ch.Elec][2016] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza_2016.root", "h2D_SF_ee_lepABpt_FullError")
        self.triggerSF[ch.Elec][2017] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza_2017.root", "h2D_SF_ee_lepABpt_FullError")
        self.triggerSF[ch.Elec][2018] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza_2018.root", "h2D_SF_ee_lepABpt_FullError")

        # Trigger mumu
        # old (pre 2021-01)
        #self.triggerSF[ch.Muon][2016] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2016_Muon")
        #self.triggerSF[ch.Muon][2017] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2017_Muon")
        #self.triggerSF[ch.Muon][2018] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza.root", "trigSF2018_Muon")
        # new (post 2021-01)
        self.triggerSF[ch.Muon][2016] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza_2016.root", "h2D_SF_mumu_lepABpt_FullError")
        self.triggerSF[ch.Muon][2017] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza_2017.root", "h2D_SF_mumu_lepABpt_FullError")
        self.triggerSF[ch.Muon][2018] = self.loadHisto(self.basepathtrig + "TriggerSFfromReza_2018.root", "h2D_SF_mumu_lepABpt_FullError")
        print("[lepScaleFactors_TopRun2::constructor] - Finished loading histograms")
        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree

        for var in ["", "_Up", "_Dn"]:
            self.out.branch('ElecIDSF'   + var, 'F')
            self.out.branch('ElecRECOSF' + var, 'F')
            self.out.branch('TrigSF'     + var, 'F')
            if var == "":
                for delta,sys in self.systsLepEn.iteritems():
                    self.out.branch('MuonIDSF'   + sys, 'F')
                    self.out.branch('MuonISOSF'  + sys, 'F')
                    self.out.branch('ElecIDSF'   + sys, 'F')
                    self.out.branch('ElecRECOSF' + sys, 'F')
                    self.out.branch('TrigSF'     + sys, 'F')

        for var in ["", "_statUp", "_statDn", "_systUp", "_systDn"]:
            self.out.branch('MuonIDSF'   + var, 'F')
            self.out.branch('MuonISOSF'  + var, 'F')

        return


    def analyze(self, event):
        year = event.year
        chan = event.channel
        run  = event.run
        leps = [l for l in Collection(event, "LepGood")]
        varleps = []

        # leptons
        #### OLD (w/o dividing in stat & syst)
        #for var in ["", "_Up", "_Dn"]:
            #muonsf = 1; elecsf = 1

            ##### NOTE: electron SF are in terms of the eta of the associated supercluster and
            ## the pT of the electron. Take also into account that deltaEtaSC = etaSC - eta, as
            ## indicated in PhysicsTools/NanoAOD/python/electrons_cff.py.
            #if event.nLepGood > 0:
                #if   abs(leps[0].pdgId) == 11: # electron
                    #elecsf *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta + leps[0].deltaEtaSC, var, "e", year, event)
                #elif abs(leps[0].pdgId) == 13: # muon
                    #muonsf *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta, var, "m", year, event)

                #if event.nLepGood > 1:
                    #if   abs(leps[1].pdgId) == 11: # electron
                        #elecsf *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta + leps[1].deltaEtaSC, var, "e", year, event)
                    #elif abs(leps[1].pdgId) == 13: # muon
                        #muonsf *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta, var, "m", year, event)

        # muons (separated into stat & syst)
        for var in ["", "_statUp", "_statDn", "_systUp", "_systDn"]:
            muonidsf = 1; muonisosf  = 1;

            if event.nLepGood > 0:
                if abs(leps[0].pdgId) == 13: # muon
                    muonidsf  *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta, var, "m", year, event, "id")
                    muonisosf *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta, var, "m", year, event, "iso")

                if event.nLepGood > 1:
                    if abs(leps[1].pdgId) == 13: # muon
                        muonidsf  *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta, var, "m", year, event, "id")
                        muonisosf *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta, var, "m", year, event, "iso")

            self.out.fillBranch('MuonIDSF'   + var, muonidsf)
            self.out.fillBranch('MuonISOSF'  + var, muonisosf)


        for var in ["", "_Up", "_Dn"]:
            # electrons (they are not separated into stat/syst)
            #### NOTE: electron SF are in terms of the eta of the associated supercluster and
            # the pT of the electron. Take also into account that deltaEtaSC = etaSC - eta, as
            # indicated in PhysicsTools/NanoAOD/python/electrons_cff.py.
            elecidsf = 1; elecrecosf = 1
            if event.nLepGood > 0:
                if abs(leps[0].pdgId) == 11: # electron
                    elecidsf   *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta + leps[0].deltaEtaSC, var, "e", year, event, "id")
                    elecrecosf *= self.getLepSF(leps[0].pt_corrAll, leps[0].eta + leps[0].deltaEtaSC, var, "e", year, event, "reco")

                if event.nLepGood > 1:
                    if abs(leps[1].pdgId) == 11: # electron
                        elecidsf   *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta + leps[1].deltaEtaSC, var, "e", year, event, "id")
                        elecrecosf *= self.getLepSF(leps[1].pt_corrAll, leps[1].eta + leps[1].deltaEtaSC, var, "e", year, event, "reco")


            self.out.fillBranch('ElecIDSF'   + var, elecidsf)
            self.out.fillBranch('ElecRECOSF' + var, elecrecosf)

            # triggers
            trigsf = 1
            #if len(leps) > 1 and chan != ch.NoChan:
            if event.nLepGood > 1 and chan != ch.NoChan:
                if chan == ch.ElMu:
                    trigsf *= self.getTrigSFdependingOnFlavour((leps[0].pt_corrAll, leps[0].pdgId),
                                                               (leps[1].pt_corrAll, leps[1].pdgId),
                                                               var, chan, year, ev = event)
                else:
                    trigsf *= self.getTrigSF(leps[0].pt_corrAll, leps[1].pt_corrAll, var, chan, year, ev = event)

            self.out.fillBranch('TrigSF' + var, trigsf)


            # Now for the lepton energy variations...
            if var == "":
                for delta,sys in self.systsLepEn.iteritems():
                    # leptons
                    muonidsf = 1; muonisosf  = 1;
                    elecidsf = 1; elecrecosf = 1
                    varleps = [l for l in Collection(event, "LepGood" + sys[1:])]

                    if len(varleps) > 0:
                        if   abs(varleps[0].pdgId) == 11: # electron
                            elecidsf   *= self.getLepSF(getattr(varleps[0], "pt" + sys), varleps[0].eta + varleps[0].deltaEtaSC, var, "e", year, event, "id")
                            elecrecosf *= self.getLepSF(getattr(varleps[0], "pt" + sys), varleps[0].eta + varleps[0].deltaEtaSC, var, "e", year, event, "reco")
                        elif abs(varleps[0].pdgId) == 13: # muon
                            muonidsf  *= self.getLepSF(getattr(varleps[0], "pt" + sys), varleps[0].eta, var, "m", year, event, "id")
                            muonisosf *= self.getLepSF(getattr(varleps[0], "pt" + sys), varleps[0].eta, var, "m", year, event, "iso")

                        if len(varleps) > 1:
                            if   abs(varleps[1].pdgId) == 11: # electron
                                elecidsf   *= self.getLepSF(getattr(varleps[1], "pt" + sys), varleps[1].eta + varleps[1].deltaEtaSC, var, "e", year, event, "id")
                                elecrecosf *= self.getLepSF(getattr(varleps[1], "pt" + sys), varleps[1].eta + varleps[1].deltaEtaSC, var, "e", year, event, "reco")
                            elif abs(varleps[1].pdgId) == 13: # muon
                                muonidsf  *= self.getLepSF(getattr(varleps[1], "pt" + sys), varleps[1].eta, var, "m", year, event, "id")
                                muonisosf *= self.getLepSF(getattr(varleps[1], "pt" + sys), varleps[1].eta, var, "m", year, event, "iso")

                    self.out.fillBranch('MuonIDSF'   + sys, muonidsf)
                    self.out.fillBranch('MuonISOSF'  + sys, muonisosf)
                    self.out.fillBranch('ElecIDSF'   + sys, elecidsf)
                    self.out.fillBranch('ElecRECOSF' + sys, elecrecosf)

                    # triggers
                    trigsf = 1
                    if len(varleps) > 1 and getattr(event, "channel" + sys) != ch.NoChan:
                        if getattr(event, "channel" + sys) == ch.ElMu:
                            trigsf *= self.getTrigSFdependingOnFlavour((getattr(varleps[0], "pt" + sys), varleps[0].pdgId),
                                                                       (getattr(varleps[1], "pt" + sys), varleps[1].pdgId),
                                                                       var, getattr(event, "channel" + sys),
                                                                       year, ev = event)
                        else:
                            trigsf *= self.getTrigSF(getattr(varleps[0], "pt" + sys),
                                                     getattr(varleps[1], "pt" + sys),
                                                     var, getattr(event, "channel" + sys),
                                                     year, ev = event)

                    self.out.fillBranch('TrigSF' + sys, trigsf)

        return True


    # =================== ### Other methods
    def loadHisto(self, fil, hist):
        tf = r.TFile.Open(fil)
        if not tf: raise RuntimeError("[lepScaleFactors_TopRun2::loadHisto] FATAL: no such file %s"%fil)
        hist = tf.Get(hist)
        if not hist: raise RuntimeError("[lepScaleFactors_TopRun2::loadHisto] FATAL: no such object %s in %s"%(hist,fil))
        ret = deepcopy(hist)
        tf.Close()
        return ret


    def loadHistoWithUncs(self, fil, hist, uncs = []):
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


    def getTrigSF(self, pt1, pt2, var, fl, yr, ev = None):
        # NOTE: it will always use as the first lepton the one with largest pt
        hist = self.triggerSF[fl][yr]
        tmppt1 = min(max([pt1, pt2]), 499.); tmppt2 = min(min([pt1, pt2]), 499.)
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


    def getTrigSFdependingOnFlavour(self, l1tp, l2tp, var, fl, yr, ev = None):
        # NOTE: X -> electron, Y -> muon
        hist = self.triggerSF[fl][yr]

        if abs(l1tp[1]) == 11:
            elpt = min(l1tp[0], 499.)
            mupt = min(l2tp[0], 499.)
        else:
            elpt = min(l2tp[0], 499.)
            mupt = min(l1tp[0], 499.)
        pt1bin = max(1, min(hist.GetNbinsX(), hist.GetXaxis().FindBin(elpt)))
        pt2bin = max(1, min(hist.GetNbinsY(), hist.GetYaxis().FindBin(mupt)))

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


#### Old, combined code
    #def getLepSF(self, pt, eta, var, fl, yr, ev = None):
        #out = 1
        #doneSFtype = []

        #for sf in self.leptonSF[fl][yr]:
            ##tmpls = self.leptonSF[fl][yr][sf].split(",")
            #tmpls = sf.split(",")
            ##print sf, doneSFtype
            #if (len(tmpls) > 1) and (tmpls[0] not in doneSFtype):
                #doneSFtype.append(tmpls[0])

                #sftorescale = [sf]
                #for sf2 in self.leptonSF[fl][yr]:
                    #if   sf2 == sf: continue
                    #else:
                        #tmpls2 = sf2.split(",")
                        #if (len(tmpls) > 1):
                            #if tmpls2[0] == tmpls[0]:
                                #sftorescale.append(sf2)
                #tmpout  = 0
                #tmplumi = []

                #for i in sftorescale:
                    #tmplumi.append(self.lumidict[yr][i.split(",")[1]])
                    #tmpout += self.getFromHisto(pt, eta, self.leptonSF[fl][yr][i]) * tmplumi[-1]
                    ##tmpout += self.getFromHistoAbs(pt, eta, self.leptonSF[fl][yr][i]) * tmplumi[-1] ### Como'l stop

                #tmpout /= sum(tmplumi)
                ##if ev.event == 467503 or ev.event == 486099: print(var, fl, ev.event, tmpls[0], tmpout)
                #out *= tmpout

            #elif tmpls[0] not in doneSFtype:
                ##if fl == "e": out  *= self.getFromHistoNoAbs(pt, eta, self.leptonSF[fl][yr][sf]) ### Como'l stop
                ##else:         out  *= self.getFromHistoAbs(  pt, eta, self.leptonSF[fl][yr][sf]) ### Como'l stop
                #out  *= self.getFromHisto(pt, eta, self.leptonSF[fl][yr][sf])
                ##if ev.event == 467503 or ev.event == 486099:
                    ##print(var, fl, ev.event, tmpls[0], out)
                    ##print(var, fl, ev.event, tmpls[0], self.getFromHistoAbs(  pt, eta, self.leptonSF[fl][yr][sf]))
                #doneSFtype.append(sf)
        #if var != "":
            #doneSFtype = []
            #tmpsum = 0
            #for sf in self.leptonSF[fl][yr]:
                ##tmpls = self.leptonSF[fl][yr][sf].split(",")
                #tmpls = sf.split(",")
                #if (len(tmpls) > 1) and (tmpls[0] not in doneSFtype):
                    #doneSFtype.append(tmpls[0])

                    #sftorescale = [sf]
                    #for sf2 in self.leptonSF[fl][yr]:
                        #if   sf2 == sf: continue
                        #else:
                            #tmpls2 = sf2.split(",")
                            #if (len(tmpls) > 1):
                                #if tmpls2[0] == tmpls[0]:
                                    #sftorescale.append(sf2)
                    #tmpout  = 0
                    #tmplumi = []

                    #for i in sftorescale:
                        #tmplumi.append(self.lumidict[yr][i.split(",")[1]])
                        #tmpout += self.getFromHisto(pt, eta, self.leptonSF[fl][yr][i], err = True) * tmplumi[-1]

                    #tmpout /= sum(tmplumi)
                    #tmpsum += tmpout**2

                #elif tmpls[0] not in doneSFtype:
                    #tmpsum += (self.getFromHisto(pt, eta, self.leptonSF[fl][yr][sf], err = True))**2
                    #doneSFtype.append(sf)

            #if fl == "m": tmpsum += (out * 0.005)**2 # Extrapolation to top-like from DY-like phase space (CMS-AN-2018-210). Only for muons.
            #tmpsum = r.TMath.Sqrt(tmpsum)

            #if "up" in var.lower(): out += tmpsum
            #else:                   out -= tmpsum
        #return out


    #def getLepSF(self, pt, eta, var, fl, yr, ev = None):
        #return self.getIDSF(pt, eta, var, fl, yr, ev) * self.getISORECOSF(pt, eta, var, fl, yr, ev)


    #def getIDSF(self, pt, eta, var, fl, yr, ev = None):
        #out = 1
        #doneSFtype = []

        #for sf in self.leptonSF[fl][yr]:

            #if "id" not in sf.lower(): continue

            ##tmpls = self.leptonSF[fl][yr][sf].split(",")
            #tmpls = sf.split(",")
            ##print sf, doneSFtype
            #if (len(tmpls) > 1) and (tmpls[0] not in doneSFtype):
                #doneSFtype.append(tmpls[0])

                #sftorescale = [sf]
                #for sf2 in self.leptonSF[fl][yr]:
                    #if   sf2 == sf: continue
                    #else:
                        #tmpls2 = sf2.split(",")
                        #if (len(tmpls) > 1):
                            #if tmpls2[0] == tmpls[0]:
                                #sftorescale.append(sf2)
                #tmpout  = 0
                #tmplumi = []

                #for i in sftorescale:
                    #tmplumi.append(self.lumidict[yr][i.split(",")[1]])
                    #tmpout += self.getFromHisto(pt, eta, self.leptonSF[fl][yr][i]) * tmplumi[-1]
                    ##tmpout += self.getFromHistoAbs(pt, eta, self.leptonSF[fl][yr][i]) * tmplumi[-1] ### Como'l stop

                #tmpout /= sum(tmplumi)
                ##if ev.event == 467503 or ev.event == 486099: print(var, fl, ev.event, tmpls[0], tmpout)
                #out *= tmpout

            #elif tmpls[0] not in doneSFtype:
                ##if fl == "e": out  *= self.getFromHistoNoAbs(pt, eta, self.leptonSF[fl][yr][sf]) ### Como'l stop
                ##else:         out  *= self.getFromHistoAbs(  pt, eta, self.leptonSF[fl][yr][sf]) ### Como'l stop
                #out  *= self.getFromHisto(pt, eta, self.leptonSF[fl][yr][sf])
                ##if ev.event == 467503 or ev.event == 486099:
                    ##print(var, fl, ev.event, tmpls[0], out)
                    ##print(var, fl, ev.event, tmpls[0], self.getFromHistoAbs(  pt, eta, self.leptonSF[fl][yr][sf]))
                #doneSFtype.append(sf)
        #if var != "":
            #doneSFtype = []
            #tmpsum = 0
            #for sf in self.leptonSF[fl][yr]:

                #if "id" not in sf.lower(): continue

                ##tmpls = self.leptonSF[fl][yr][sf].split(",")
                #tmpls = sf.split(",")
                #if (len(tmpls) > 1) and (tmpls[0] not in doneSFtype):
                    #doneSFtype.append(tmpls[0])

                    #sftorescale = [sf]
                    #for sf2 in self.leptonSF[fl][yr]:
                        #if   sf2 == sf: continue
                        #else:
                            #tmpls2 = sf2.split(",")
                            #if (len(tmpls) > 1):
                                #if tmpls2[0] == tmpls[0]:
                                    #sftorescale.append(sf2)
                    #tmpout  = 0
                    #tmplumi = []

                    #for i in sftorescale:
                        #tmplumi.append(self.lumidict[yr][i.split(",")[1]])
                        #tmpout += self.getFromHisto(pt, eta, self.leptonSFuncs[fl][yr][i.replace(",", var[:-2] + ",")], err = True) * tmplumi[-1]

                    #tmpout /= sum(tmplumi)
                    #tmpsum += tmpout**2

                #elif tmpls[0] not in doneSFtype:
                    #tmpsum += (self.getFromHisto(pt, eta, self.leptonSFuncs[fl][yr][sf + var[:-2]], err = True))**2
                    #doneSFtype.append(sf)

            #tmpsum = r.TMath.Sqrt(tmpsum)

            #if "up" in var.lower(): out += tmpsum
            #else:                   out -= tmpsum
        #return out


    #def getISORECOSF(self, pt, eta, var, fl, yr, ev = None):
        #out = 1
        #doneSFtype = []

        #for sf in self.leptonSF[fl][yr]:

            #if "iso" not in sf.lower() and "reco" not in sf.lower(): continue

            ##tmpls = self.leptonSF[fl][yr][sf].split(",")
            #tmpls = sf.split(",")
            ##print sf, doneSFtype
            #if (len(tmpls) > 1) and (tmpls[0] not in doneSFtype):
                #doneSFtype.append(tmpls[0])

                #sftorescale = [sf]
                #for sf2 in self.leptonSF[fl][yr]:
                    #if   sf2 == sf: continue
                    #else:
                        #tmpls2 = sf2.split(",")
                        #if (len(tmpls) > 1):
                            #if tmpls2[0] == tmpls[0]:
                                #sftorescale.append(sf2)
                #tmpout  = 0
                #tmplumi = []

                #for i in sftorescale:
                    #tmplumi.append(self.lumidict[yr][i.split(",")[1]])
                    #tmpout += self.getFromHisto(pt, eta, self.leptonSF[fl][yr][i]) * tmplumi[-1]
                    ##tmpout += self.getFromHistoAbs(pt, eta, self.leptonSF[fl][yr][i]) * tmplumi[-1] ### Como'l stop

                #tmpout /= sum(tmplumi)
                ##if ev.event == 467503 or ev.event == 486099: print(var, fl, ev.event, tmpls[0], tmpout)
                #out *= tmpout

            #elif tmpls[0] not in doneSFtype:
                ##if fl == "e": out  *= self.getFromHistoNoAbs(pt, eta, self.leptonSF[fl][yr][sf]) ### Como'l stop
                ##else:         out  *= self.getFromHistoAbs(  pt, eta, self.leptonSF[fl][yr][sf]) ### Como'l stop
                #out  *= self.getFromHisto(pt, eta, self.leptonSF[fl][yr][sf])
                ##if ev.event == 467503 or ev.event == 486099:
                    ##print(var, fl, ev.event, tmpls[0], out)
                    ##print(var, fl, ev.event, tmpls[0], self.getFromHistoAbs(  pt, eta, self.leptonSF[fl][yr][sf]))
                #doneSFtype.append(sf)
        #if var != "":
            #doneSFtype = []
            #tmpsum = 0
            #for sf in self.leptonSF[fl][yr]:

                #if "iso" not in sf.lower() and "reco" not in sf.lower(): continue

                ##tmpls = self.leptonSF[fl][yr][sf].split(",")
                #tmpls = sf.split(",")
                #if (len(tmpls) > 1) and (tmpls[0] not in doneSFtype):
                    #doneSFtype.append(tmpls[0])

                    #sftorescale = [sf]
                    #for sf2 in self.leptonSF[fl][yr]:
                        #if   sf2 == sf: continue
                        #else:
                            #tmpls2 = sf2.split(",")
                            #if (len(tmpls) > 1):
                                #if tmpls2[0] == tmpls[0]:
                                    #sftorescale.append(sf2)
                    #tmpout  = 0
                    #tmplumi = []

                    #for i in sftorescale:
                        #tmplumi.append(self.lumidict[yr][i.split(",")[1]])
                        #tmpout += self.getFromHisto(pt, eta, self.leptonSFuncs[fl][yr][i.replace(",", var[:-2] + ",")], err = True) * tmplumi[-1]

                    #tmpout /= sum(tmplumi)
                    #tmpsum += tmpout**2

                #elif tmpls[0] not in doneSFtype:
                    #tmpsum += (self.getFromHisto(pt, eta, self.leptonSFuncs[fl][yr][sf + var[:-2]], err = True))**2
                    #doneSFtype.append(sf)

            #if fl == "m" and "syst" in var: tmpsum += (out * 0.005)**2 # Extrapolation to top-like from DY-like phase space (CMS-AN-2018-210). Only for muons.
            #tmpsum = r.TMath.Sqrt(tmpsum)

            #if "up" in var.lower(): out += tmpsum
            #else:                   out -= tmpsum
        #return out


    def getLepSF(self, pt, eta, var, fl, yr, ev = None, typ = None):
        out = 1
        doneSFtype = []

        for sf in self.leptonSF[fl][yr]:
            if typ:
                if typ not in sf.lower(): continue

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
                if typ:
                    if typ not in sf.lower(): continue

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
                        tmpout += self.getFromHisto(pt, eta, self.leptonSFuncs[fl][yr][i.replace(",", var[:-2] + ",")] if i.replace(",", var[:-2] + ",") in self.leptonSFuncs[fl][yr] else self.leptonSF[fl][yr][i], err = True) * tmplumi[-1]

                    tmpout /= sum(tmplumi)
                    tmpsum += tmpout**2

                elif tmpls[0] not in doneSFtype:
                    tmpsum += (self.getFromHisto(pt, eta, self.leptonSFuncs[fl][yr][sf + var[:-2]] if (sf + var[:-2]) in self.leptonSFuncs[fl][yr] else self.leptonSF[fl][yr][sf], err = True))**2
                    doneSFtype.append(sf)

            if fl == "m" and "syst" in var:
                if typ:
                    if "iso" in typ:
                        tmpsum += (out * 0.005)**2 # Extrapolation to top-like from DY-like phase space (CMS-AN-2018-210). Only for muons.
                else:
                    tmpsum += (out * 0.005)**2 # Extrapolation to top-like from DY-like phase space (CMS-AN-2018-210). Only for muons.
            tmpsum = r.TMath.Sqrt(tmpsum)

            if "up" in var.lower(): out += tmpsum
            else:                   out -= tmpsum
        return out
