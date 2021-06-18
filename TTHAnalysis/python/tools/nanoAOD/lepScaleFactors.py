from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection 
from copy import deepcopy
import math
import ROOT
import os 

class lepScaleFactors(Module):
    def __init__(self):
        self.looseToTight  = {} 
        self.recoToLoose   = {} 
        self.looseToTightUncertainties = {}
        

        for fl in ['e','m']:
            for chan in ['2lss','3l']:
                for year in '2016,2017,2018'.split(','):
                    fl2 = 'ele' if fl=='e' else 'muon'
                    #self.looseToTight['%s,%s,%s'%(year,fl,chan)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/looseToTight_%s_%s_%s.root'%(year,fl,chan), "EGamma_SF2D")

                    #self.looseToTightUncertainties_eta['%s,%s'%(year, fl)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/uncertainty/SFttbar_%s_%s_eta.root'%(year,fl2), "histo_eff_data")
                    #self.looseToTightUncertainties_pt['%s,%s'%(year, fl)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/uncertainty/SFttbar_%s_%s_pt.root'%(year,fl2), "histo_eff_data")
                    if fl=="e":
                       self.looseToTight['%s,%s,%s'%(year,fl,chan)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF_ttW/%s/egammaEffi.txt_EGM2D.root'%(year), "EGamma_SF2D")
                       #eta is x axis pt is y axis
                       self.looseToTightUncertainties['%s,%s'%(year, fl)] = self.loadErrorHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF_ttW/%s/egammaEffi.txt_EGM2D.root'%(year))
                       
                    else:
                       self.looseToTight['%s,%s,%s'%(year,fl,chan)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF_ttW/%s/muonTOPLeptonMVAMedium040%s.root'%(year,year), "SF")
                       self.looseToTightUncertainties['%s,%s'%(year, fl)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF_ttW/%s/muonTOPLeptonMVAMedium040%s.root'%(year,year), "SFTotUnc")
                      
                       

                    #self.recoToLoose['%s,%s'%(year, fl)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/TnP_loose_%s_%s.root'%(fl2, year), "EGamma_SF2D")
                    #if fl == 'm': continue
                    #self.recoToLoose['%s,%s,extra'%(year, fl)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/TnP_loose_%s_%s.root'%(fl2,year), "EGamma_SF2D")
                    #self.recoToLoose['%s,%s,extra'%(year, fl)] = self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/TnP_loosettH_%s_%s.root'%(fl2,year), "EGamma_SF2D")
        #self.electronReco    = {
        #    2016 : [self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/EGM2D_BtoH_GT20GeV_RecoSF_Legacy2016.root', "EGamma_SF2D"),
        #              self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/EGM2D_BtoH_low_RecoSF_Legacy2016.root', "EGamma_SF2D")], # first Et > 20, second Et < 20
        #    2017 : [self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/egammaEffi.txt_EGM2D_runBCDEF_passingRECO.root', "EGamma_SF2D"),
        #              self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/egammaEffi.txt_EGM2D_runBCDEF_passingRECO_lowEt.root', "EGamma_SF2D")], # first Et > 20, second Et < 20
        #    2018 : self.loadHisto(os.environ['CMSSW_BASE'] + '/src/CMGTools/TTHAnalysis/data/leptonSF/egammaEffi.txt_EGM2D_updatedAll.root', "EGamma_SF2D")
       # }
                                

                                      

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
        #for var in ',_el_up,_el_dn,_mu_up,_mu_dn,_el_up,_el_dn,_mu_up,_mu_dn'.split(','):
        #    self.out.branch('leptonSF_2lss%s'%var,'F')
        #    self.out.branch('leptonSF_3l%s'%var,'F')
        #    self.out.branch('leptonSF_4l%s'%var,'F')
        #loose to tight
        for var in ',_el_loosetotight_up,_el_loosetotight_dn,_mu_loosetotight_up,_mu_loosetotight_dn'.split(','):
            # self.out.branch('leptonSF_2lss%s'%var,'F')
            self.out.branch('leptonSF_3l%s'%var,'F')
            self.out.branch('leptonSF_4l%s'%var,'F')
        for var in ',_up,_dn'.split(','):
            #self.out.branch('triggerSF_2lss%s'%var,'F')
            self.out.branch('triggerSF_3l%s'%var,'F')

  

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

    def analyze(self, event):
        year = event.year
        # leptons
        all_leps = [l for l in Collection(event,"LepGood")]
        nFO = getattr(event,"nLepFO_Recl")
        chosen = getattr(event,"iLepFO_Recl")
        leps = [all_leps[chosen[i]] for i in xrange(nFO)]
        
        # trigger efficiency
        trilepSF =  {"2016":{'central':[0.878,0.997,0.996],'up':[0.081,0.005,0.002],'dn':[0.142,0.012,0.004]},"2017":{'central':[1.02,1.003,0.988],'up':[0.012,0.001,0.005],'dn':[0.236,0.024,0.008]},"2018":{'central':[0.935,0.99, 0.998],'up':[0.06,0.008,0.002],'dn':[0.147,0.017,0.003]}}
        
        dic = trilepSF[str(year)]

        if leps[0].conePt< 40:
            self.out.fillBranch('triggerSF_3l', dic["central"][0])
            self.out.fillBranch('triggerSF_3l_up', dic["central"][0] + dic["up"][0])
            self.out.fillBranch('triggerSF_3l_dn', dic["central"][0]- dic["dn"][0])
        elif leps[0].conePt >= 40 and leps[0].conePt <80 :
            self.out.fillBranch('triggerSF_3l', dic["central"][1])
            self.out.fillBranch('triggerSF_3l_up',dic["central"][1]+ dic["up"][1])
            self.out.fillBranch('triggerSF_3l_dn',dic["central"][1]- dic["dn"][1])
        else:
            self.out.fillBranch('triggerSF_3l',dic["central"][2])
            self.out.fillBranch('triggerSF_3l_up', dic["central"][2]+dic["up"][2])
            self.out.fillBranch('triggerSF_3l_dn', dic["central"][2]-dic["dn"][2])
        '''
        if year == 2016:
            for var, shift in zip(',_up,_dn'.split(','),[0,1,-1]):
                self.out.fillBranch('triggerSF_3l%s'%var, 1.+shift*0.03)
                triggerSF_2lss = 1 
                if len(leps) >= 2: 
                    comb = abs(leps[0].pdgId) + abs(leps[1].pdgId)
                    if (comb == 22): triggerSF_2lss = (1.01+shift*0.02)
                    if (comb == 24): triggerSF_2lss = (1.01+shift*0.01)
                    if (comb == 26): triggerSF_2lss = (1   +shift*0.01)
                self.out.fillBranch('triggerSF_2lss%s'%var, triggerSF_2lss)

        if year == 2017:
            for var, shift in zip(',_up,_dn'.split(','),[0,1,-1]):
                self.out.fillBranch('triggerSF_3l%s'%var, 1.+shift*0.05)
                triggerSF_2lss = 1
                if len(leps) >= 2: 
                    comb = abs(leps[0].pdgId) + abs(leps[1].pdgId)
                    pt1 = leps[0].pt
                    if (comb == 22): triggerSF_2lss = (0.937+shift*0.027)  if pt1 < 30 else (0.991+shift*0.002)
                    if (comb == 24): triggerSF_2lss = (0.952+shift*0.008)  if pt1 < 35 else (0.983+shift*0.003) if pt1 < 50 else 1.0+shift*0.001
                    if (comb == 26): triggerSF_2lss = (0.972+shift*0.006)  if pt1 < 35 else (0.994+shift*0.001)
                self.out.fillBranch('triggerSF_2lss%s'%var, triggerSF_2lss)

        if year == 2018: # using 2016 ones as placeholder
            for var, shift in zip(',_up,_dn'.split(','),[0,1,-1]):
                self.out.fillBranch('triggerSF_3l%s'%var, 1.+shift*0.03)
                triggerSF_2lss = 1 
                if len(leps) >= 2: 
                    comb = abs(leps[0].pdgId) + abs(leps[1].pdgId)
                    if (comb == 22): triggerSF_2lss = (1.01+shift*0.02)
                    if (comb == 24): triggerSF_2lss = (1.01+shift*0.01)
                    if (comb == 26): triggerSF_2lss = (1   +shift*0.01)
                self.out.fillBranch('triggerSF_2lss%s'%var, triggerSF_2lss)

        '''

        #for var in ',_el_up,_el_dn,_mu_up,_mu_dn,_el_loosetotight_up,_el_loosetotight_dn,_mu_loosetotight_up,_mu_loosetotight_dn'.split(','):
        for var in ',_el_loosetotight_up,_el_loosetotight_dn,_mu_loosetotight_up,_mu_loosetotight_dn'.split(','):
            #leptonSF_2lss = 1
            leptonSF_3l   = 1
            leptonSF_4l   = 1
            #if len(leps) >= 2:
            #    leptonSF_2lss = self.getLooseToTight(leps[0],var,year,2) * self.getLooseToTight(leps[1],var,year,2)
                #leptonSF_2lss = leptonSF_2lss * self.getRecoToLoose(leps[0],var,year) * self.getRecoToLoose(leps[1],var,year)
            if len(leps) >= 3:
                leptonSF_3l   = self.getLooseToTight(leps[0],var,year,3) * self.getLooseToTight(leps[1],var,year,3) * self.getLooseToTight(leps[2],var,year,3)
                #leptonSF_3l   = leptonSF_3l *  self.getRecoToLoose(leps[0],var,year) * self.getRecoToLoose(leps[1],var,year) * self.getRecoToLoose(leps[2],var,year)
            if len(leps) >= 4: 
                leptonSF_4l   = self.getLooseToTight(leps[0],'',year,3) * self.getLooseToTight(leps[1],'',year,3) * self.getLooseToTight(leps[2],'',year,3) * self.getLooseToTight(leps[3],'',year,3)
                #leptonSF_4l   = leptonSF_4l *  self.getRecoToLoose(leps[0],var,year) * self.getRecoToLoose(leps[1],var,year) * self.getRecoToLoose(leps[2],var,year) * self.getRecoToLoose(leps[3],var,year)
            #self.out.fillBranch('leptonSF_2lss%s'%var, leptonSF_2lss)
            self.out.fillBranch('leptonSF_3l%s'%var  , leptonSF_3l)
            self.out.fillBranch('leptonSF_4l%s'%var  , leptonSF_4l)
        

        return True
