from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection 
from copy import deepcopy
import math
import ROOT
import os 

class lepScaleFactors2lss(Module):
    def __init__(self):
        self.looseToTight  = {} 
        self.recoToLoose   = {} 
        self.looseToTightUncertainties = {}
        self.triggDict={}
        
        for fl in ['ee','mm','em','me','emu']:
            for year in '2016,2017,2018'.split(','):
                self.triggDict['%s,%s'%(year,fl)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF_ttW/%s/SF_trigger.root'%(year), "SF_%s"%(fl))
                

        for fl in ['e','m']:
            for chan in ['2lss']:
                for year in '2016,2017,2018'.split(','):
                    fl2 = 'ele' if fl=='e' else 'muon'
                    if fl=="e":
                       self.looseToTight['%s,%s,%s'%(year,fl,chan)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF_ttW/%s/egammaEffi.txt_EGM2D.root'%(year), "EGamma_SF2D")
                       #eta is x axis pt is y axis
                       self.looseToTightUncertainties['%s,%s'%(year, fl)] = self.loadErrorHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF_ttW/%s/egammaEffi.txt_EGM2D.root'%(year))
                       
                    else:
                       self.looseToTight['%s,%s,%s'%(year,fl,chan)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF_ttW/%s/muonTOPLeptonMVAMedium040%s.root'%(year,year), "SF")
                       self.looseToTightUncertainties['%s,%s'%(year, fl)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF_ttW/%s/muonTOPLeptonMVAMedium040%s.root'%(year,year), "SFTotUnc")
                           

    def loadHisto(self, fil, hist):
        tf = ROOT.TFile.Open(fil)
        if not tf: raise RuntimeError("No such file %s"%fil)
        hist = tf.Get(hist)
        if not hist: raise RuntimeError("No such object %s in %s"%(hist,fil))
        ret = deepcopy(hist)
        tf.Close()
        return ret
   
    def loadErrorHisto(self, fil):
        tf = ROOT.TFile.Open(fil)
        if not tf: raise RuntimeError("No such file %s"%fil)
        hist_sys = tf.Get("sys")
        hist_stat = tf.Get("stat")
       
        
        hist_sys_c = deepcopy(hist_sys)
        hist_stat_c = deepcopy(hist_stat)
        

        tf.Close()
        hist_tot = hist_sys_c.Clone()
        hist_tot.Reset()
        nbinpt =hist_tot.GetNbinsY()
        nbineta =hist_tot.GetNbinsX()
        for i in range(1,nbineta+1):
            for j in range(1,nbinpt+1):
                sys= hist_sys_c.GetBinContent(i,j)
                stat= hist_stat_c.GetBinContent(i,j)
                totalun = math.sqrt(sys*sys + stat*stat)
                hist_tot.SetBinContent(i,j,totalun)
        return hist_tot
    
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree

        #loose to tight
        self.out.branch('triggerSF_2lss','F')
        for var in ',_el_loosetotight_up,_el_loosetotight_dn,_mu_loosetotight_up,_mu_loosetotight_dn'.split(','):
            self.out.branch('leptonSF_2lss%s'%var,'F')   #Definicion de branches (1er momento)
        for var in ',_up,_dn'.split(','):
            self.out.branch('triggerSF_2lss%s'%var,'F')

  

    def getLooseToTight(self,lep,var_str,year,nlep):
        hist = self.looseToTight['%d,%s,%s'%(year, 'e' if abs(lep.pdgId) == 11 else 'm', '2lss' if nlep == 2 else '3l')]
        etabin = max(1, min(hist.GetNbinsX(), hist.GetXaxis().FindBin(abs(lep.eta))));
        ptbin  = max(1, min(hist.GetNbinsY(), hist.GetYaxis().FindBin(lep.pt)));
        out = hist.GetBinContent(etabin,ptbin)


        hist_unc  = self.looseToTightUncertainties['%d,%s'%(year, 'e' if abs(lep.pdgId) == 11 else 'm')]
        ptbin_e = max(1, min(hist_unc.GetNbinsY(), hist_unc.GetYaxis().FindBin( lep.pt)))
        etabin_e = max(1, min(hist_unc.GetNbinsX(), hist_unc.GetXaxis().FindBin( abs(lep.eta))))
        error = hist_unc.GetBinContent(etabin_e,ptbin_e) 
        
        
        if abs(lep.pdgId) == 13: 
            var = +1 if var_str == '_mu_loosetotight_up' else -1 if var_str == '_mu_loosetotight_dn' else 0
            out = out +var*error
        if abs(lep.pdgId) == 11: 
            var = +1 if var_str == '_el_loosetotight_up' else -1 if var_str == '_el_loosetotight_dn' else 0
            out = out + var*error
        return out

    def getRecoToLoose(self,lep,var_str,year):
        histList = []
        if abs(lep.pdgId) == 11:
            histList.append( self.recoToLoose['%d,e'%year] ) 
            histList.append( self.recoToLoose['%d,e,extra'%year] ) 
            reco = self.electronReco[int(year)]
            if year == 2018: 
                recohist = reco
            else: 
                recohist = reco[0] if lep.pt > 20 else reco[1]
            histList.append([recohist]) # recohist is a list so we can distinguish it afterwards :)

        if abs(lep.pdgId) == 13: 
            histList.append( self.recoToLoose['%d,m'%year] ) 
        out = 1
        for hist in histList:
            if type(hist) == list:
                eta = (lep.eta+lep.deltaEtaSC)
                hist = hist[0]
            else:
                eta = abs(lep.eta)
            etabin = max(1, min(hist.GetNbinsX(), hist.GetXaxis().FindBin(eta)));
            ptbin  = max(1, min(hist.GetNbinsY(), hist.GetYaxis().FindBin(lep.pt)));
            sf = hist.GetBinContent(etabin,ptbin)
            if '_mu_up' == var_str and abs(lep.pdgId) == 13: 
                sf = sf+hist.GetBinError(etabin,ptbin)
            if '_mu_dn' == var_str and abs(lep.pdgId) == 13: 
                sf = sf-hist.GetBinError(etabin,ptbin)
            if '_el_up' == var_str and abs(lep.pdgId) == 11: 
                sf = sf+hist.GetBinError(etabin,ptbin)
            if '_el_dn' == var_str and abs(lep.pdgId) == 11: 
                sf = sf-hist.GetBinError(etabin,ptbin)
            out = out*sf
            
        return out
        
    

    def analyze(self, event):   #Una vez que se esta procesando (2o momento)
        year = event.year
        # leptons
        all_leps = [l for l in Collection(event,"LepGood")]
        nFO = getattr(event,"nLepFO_Recl")
        chosen = getattr(event,"iLepFO_Recl")
        leps = [all_leps[chosen[i]] for i in xrange(nFO)]
        
        # trigger efficiency
        #2lss
        if len(leps)==2:   
                lep_pdgId_1=leps[0].pdgId
                lep_pdgId_2=leps[1].pdgId      #We must check in which channel the event is (electron has pdgId 11, muon pdgId 13)
                if lep_pdgId_1+lep_pdgId_2 == 22:
                    hist=self.triggDict['%d,ee'%(year)]
                    triggerSF_2lss=hist.GetBinContent(max(1, min(hist.GetNbinsX(), hist.GetXaxis().FindBin(leps[0].pt))),max(1, min(hist.GetNbinsY(), hist.GetYaxis().FindBin(leps[1].pt))))
                    self.out.fillBranch('triggerSF_2lss',triggerSF_2lss)
                
                if lep_pdgId_1+lep_pdgId_2 == 26:
                    hist=self.triggDict['%d,mm'%(year)]
                    triggerSF_2lss=hist.GetBinContent(max(1, min(hist.GetNbinsX(), hist.GetXaxis().FindBin(leps[0].pt))),max(1, min(hist.GetNbinsY(), hist.GetYaxis().FindBin(leps[1].pt))))
                    self.out.fillBranch('triggerSF_2lss',triggerSF_2lss)
                else:  #Also, we have different data for em (leading lepton is an electron) and me (leading lepton is a muon)
                    if lep_pdgId_1 == 11:
                        hist=self.triggDict['%d,em'%(year)]
                        triggerSF_2lss=hist.GetBinContent(max(1, min(hist.GetNbinsX(), hist.GetXaxis().FindBin(leps[0].pt))),max(1, min(hist.GetNbinsY(), hist.GetYaxis().FindBin(leps[1].pt))))
                        self.out.fillBranch('triggerSF_2lss',triggerSF_2lss)
                    else:
                        hist=self.triggDict['%d,me'%(year)]
                        triggerSF_2lss=hist.GetBinContent(max(1, min(hist.GetNbinsX(), hist.GetXaxis().FindBin(leps[0].pt))),max(1, min(hist.GetNbinsY(), hist.GetYaxis().FindBin(leps[1].pt))))
                        self.out.fillBranch('triggerSF_2lss',triggerSF_2lss)
                        
        #for var in ',_el_up,_el_dn,_mu_up,_mu_dn,_el_loosetotight_up,_el_loosetotight_dn,_mu_loosetotight_up,_mu_loosetotight_dn'.split(','):
        for var in ',_el_loosetotight_up,_el_loosetotight_dn,_mu_loosetotight_up,_mu_loosetotight_dn'.split(','):
            leptonSF_2lss = 1
            if len(leps) >= 2:
                leptonSF_2lss = self.getLooseToTight(leps[0],var,year,2) * self.getLooseToTight(leps[1],var,year,2)
                #leptonSF_2lss = leptonSF_2lss * self.getRecoToLoose(leps[0],var,year) * self.getRecoToLoose(leps[1],var,year)
            self.out.fillBranch('leptonSF_2lss%s'%var, leptonSF_2lss)
        

        return True
