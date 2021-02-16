from CMGTools.TTHAnalysis.treeReAnalyzer import *
import ROOT, copy, os
import array, math

        


## LeptonBuilderWZSM
## ___________________________________________________________________
class jetPUIDSF:
    ## __init__
    ## _______________________________________________________________
    def __init__(self, select, efffile, sffile, effhists, sfhists):
        print "Loading PU SF histograms..."
        self.isData = False
        self.select = select
        self.effhistT = {}
        self.effhistF = {}
        self.sfhistT = {}
        self.sfhistF = {}
        self.sfhistUncT = {}
        self.sfhistUncF = {}
        self.efffile = ROOT.TFile(efffile,"READ")
        self.sffile  = ROOT.TFile(sffile,"READ")
        self.wpcuts = {"L":4, "M":6, "T":7}
        for wp in ["L", "M", "T"]:
           self.effhistT[wp] = self.efffile.Get(effhists[0].replace("[WP]",wp))
           self.effhistF[wp] = self.efffile.Get(effhists[1].replace("[WP]",wp))

           self.sfhistT[wp] = self.sffile.Get(sfhists[0].replace("[WP]",wp))
           self.sfhistF[wp] = self.sffile.Get(sfhists[1].replace("[WP]",wp))

           self.sfhistUncT[wp] = self.sffile.Get(sfhists[2].replace("[WP]",wp))
           self.sfhistUncF[wp] = self.sffile.Get(sfhists[3].replace("[WP]",wp))
        #self.efffile.Close()
        #self.sffile.Close()
        #print "Loaded"
    ## __call__
    ## _______________________________________________________________
    def __call__(self, event):
        #print "IS DATA?"
        self.isData = not(hasattr(event, "genWeight"))
        #print "RESET"
        self.resetMemory()
        #print "COLLECT"
        self.collectObjects(event)
        #print "COMPUTE"
        self.computeSFs()
        #print "RETURN"
        return self.ret




    ## collectObjects
    ## _______________________________________________________________
    def collectObjects(self, event):
        ## light leptons
        self.jets       = [j   for j in Collection(event, "Jet", "nJet") ]
        self.cleanindex = [iJ  for iJ in getattr(event,"iJSel_Mini")     ] 
        self.cleanjets  = []
        for iJ in self.cleanindex:
           if iJ < 0 or  iJ >= len(self.jets): continue
           if self.select(self.jets[iJ]): self.cleanjets.append(self.jets[iJ])
        self.cleanjets.sort(key=lambda x : x.pt_nom, reverse=True)
        for j in self.cleanjets: 
            setattr(j,"ispu",getattr(j,"genJetIdx") < 0) # This one is true for PU jets, false for non pu
 
    def computeSFs(self):
        self.computeSF("L")
        self.computeSF("M")
        self.computeSF("T")


    def computeSF(self, WP):
        pdata = 1.
        pmc   = 1.
        pdatatup = 1.
        pmctup   = 1.
        pdatatdn = 1.
        pmctdn   = 1.
        #print self.cleanjets
        for j in self.cleanjets:
            if j.pt >= 50: continue
            sf, sftup, sftdn    = self.getSF(j.pt, j.eta, WP, j.ispu)
            eff, effup, effdn = self.getEff(j.pt,j.eta, WP, j.ispu)
            #print "Pt:%1.3f Eta:%1.3f PU:%i WP:%s PUID:%i"%(j.pt, j.eta, j.ispu, WP, j.puId)
            #print "SF:%1.3f Eff:%1.3f SFUnc:%1.3f EFFUnc:%1.3f"%(sf, eff, sf-sftup, eff-effup)
            if j.puId < self.wpcuts[WP]:
                pdata *= (1-sf*eff)
                pmc   *= (1-eff)
                pdatatup *= (1-sftup*effup)
                pmctup   *= (1-effup)
                pdatatdn *= (1-sftdn*effdn)
                pmctdn   *= (1-effdn)

            else:
                pdata *= sf*eff
                pmc   *= eff
                pdatatup *= sftup*effup
                pmctup   *= effup
                pdatatdn *= sftdn*effdn
                pmctdn   *= effdn
            if pdata== 0 or pmc == 0:
                print "Pt:%1.3f Eta:%1.3f PU:%i WP:%s PUID:%i"%(j.pt, j.eta, j.ispu, WP, j.puId)
                print "SF:%1.3f Eff:%1.3f SFUnc:%1.3f EFFUnc:%1.3f"%(sf, eff, sf-sftup, eff-effup)
            #print pdatatup/pmctup - pdatatdn/pmctdn
        self.ret["PUJetWeight"+WP] = pdata/pmc
        self.ret["PUJetWeight"+WP+"_TUp"] = pdatatup/pmctup
        self.ret["PUJetWeight"+WP+"_TDn"] = pdatatdn/pmctdn

    def getSF(self, pt, eta, WP, ispu):
        if not(ispu):
          val = self.sfhistT[WP].GetBinContent(min(max(1,self.sfhistT[WP].GetXaxis().FindBin(pt)), self.sfhistT[WP].GetNbinsX()), min(max(1,self.sfhistT[WP].GetYaxis().FindBin(eta)), self.sfhistT[WP].GetNbinsY())) 
          err = self.sfhistUncT[WP].GetBinContent(min(max(1,self.sfhistT[WP].GetXaxis().FindBin(pt)), self.sfhistT[WP].GetNbinsX()), min(max(1,self.sfhistT[WP].GetYaxis().FindBin(eta)), self.sfhistT[WP].GetNbinsY()))
        else:
          val = self.sfhistF[WP].GetBinContent(min(max(1,self.sfhistT[WP].GetXaxis().FindBin(pt)), self.sfhistT[WP].GetNbinsX()), min(max(1,self.sfhistT[WP].GetYaxis().FindBin(eta)), self.sfhistT[WP].GetNbinsY()))
          err = self.sfhistUncF[WP].GetBinContent(min(max(1,self.sfhistT[WP].GetXaxis().FindBin(pt)), self.sfhistT[WP].GetNbinsX()), min(max(1,self.sfhistT[WP].GetYaxis().FindBin(eta)), self.sfhistT[WP].GetNbinsY()))
        return val, val+err, val-err

    def getEff(self, pt, eta, WP, ispu):
        if not(ispu):
          val = self.effhistT[WP].GetBinContent(min(max(1,self.sfhistT[WP].GetXaxis().FindBin(pt)), self.sfhistT[WP].GetNbinsX()), min(max(1,self.sfhistT[WP].GetYaxis().FindBin(eta)), self.sfhistT[WP].GetNbinsY()))
          err = self.effhistT[WP].GetBinError(min(max(1,self.sfhistT[WP].GetXaxis().FindBin(pt)), self.sfhistT[WP].GetNbinsX()), min(max(1,self.sfhistT[WP].GetYaxis().FindBin(eta)), self.sfhistT[WP].GetNbinsY()))
        else:
          val = self.effhistF[WP].GetBinContent(min(max(1,self.sfhistT[WP].GetXaxis().FindBin(pt)), self.sfhistT[WP].GetNbinsX()), min(max(1,self.sfhistT[WP].GetYaxis().FindBin(eta)), self.sfhistT[WP].GetNbinsY()))
          err = self.effhistF[WP].GetBinError(min(max(1,self.sfhistT[WP].GetXaxis().FindBin(pt)), self.sfhistT[WP].GetNbinsX()), min(max(1,self.sfhistT[WP].GetYaxis().FindBin(eta)), self.sfhistT[WP].GetNbinsY()))
        if val == 0: val = 0.000001
        return val, val+err, val-err


    ## _______________________________________________________________
    def listBranches(self):
        biglist = [("PUJetWeightL", "F"),
                   ("PUJetWeightL_TUp", "F"),
                   ("PUJetWeightL_TDn", "F"),
                   ("PUJetWeightM", "F"),
                   ("PUJetWeightM_TUp", "F"),
                   ("PUJetWeightM_TDn", "F"),
                   ("PUJetWeightT", "F"),
                   ("PUJetWeightT_TUp", "F"),
                   ("PUJetWeightT_TDn", "F"),]

        return biglist



    ## resetMemory
    ## _______________________________________________________________
    def resetMemory(self):
        self.ret = {}


if __name__ == '__main__':
    from sys import argv
    file = ROOT.TFile(argv[1])
    file2= ROOT.TFile(argv[2])
    tree = file.Get("Events")
    tree.vectorTree = True
    tf   = file2.Get("sf/t")
    tree.AddFriend(tf)
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf1 = jetPUIDSF(lambda x: x.pt_nom >= 25 and abs(x.eta) <= 2.5, "/nfs/fanae/user/carlosec/WZ/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/jetPU/effcyPUID_81Xtraining.root", "/nfs/fanae/user/carlosec/WZ/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/jetPU/scalefactorsPUID_81Xtraining.root", ["h2_eff_mc2016_[WP]","h2_mistag_mc2016_[WP]"], ["h2_eff_sf2016_[WP]","h2_mistag_sf2016_[WP]","h2_eff_sf2016_[WP]_Systuncty","h2_mistag_sf2016_[WP]_Systuncty"])

        def analyze(self,ev):
            print "----------------------------------"
            print self.sf1(ev)
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 10)

