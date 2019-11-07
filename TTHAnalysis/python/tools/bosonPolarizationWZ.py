from CMGTools.TTHAnalysis.treeReAnalyzer import *
import ROOT, copy, os
import array, math


## bosonPolarizationWZ
## ___________________________________________________________________
class bosonPolarizationWZ:


    ## __init__
    ## _______________________________________________________________
    def __init__(self, metbranch = "MET"):
        self.pl1 = ROOT.TLorentzVector()
        self.pl2 = ROOT.TLorentzVector()
        self.pl3 = ROOT.TLorentzVector()
        self.met = ROOT.TLorentzVector()
        self.metUp = ROOT.TLorentzVector()
        self.metDn = ROOT.TLorentzVector()
        self.metbranch = metbranch
        self.systsJEC = {0: "", 1: "_jesTotalCorrUp"   , -1: "_jesTotalCorrDown",  2: "_jesTotalUnCorrUp"   , -2: "_jesTotalUnCorrDown"}
        self.lepScaleSysts = {1:"_elScaleUp", -1:"_elScaleDown",2:"_muScaleUp",-2:"_muScaleDown",0:""}

    ## __call__
    ## _______________________________________________________________
    def __call__(self, event):
        self.allret = {}
        self.isData = not(hasattr(event, "genWeight"))
        if self.isData: 
           self.systsJEC = {0: ""}
           self.lepScaleSysts = {0:""}
        for var in self.lepScaleSysts:
          for jes in (self.systsJEC if var == 0 else [0]):
            self.lSyst = self.lepScaleSysts[var] 
            self.jSyst = self.systsJEC[jes] 
            self.resetMemory()
            if getattr(event, "nLepSel"+self.lepScaleSysts[var]) < 3 or getattr(event, "nOSSF_3l" + self.lepScaleSysts[var]) < 1: continue
            self.collectObjects(event)
            self.analyzeTopology()
            for branch in self.ret:
              self.allret[branch + self.lSyst + self.jSyst] = self.ret[branch]

        return self.allret


    ## analyzeTopology
    ## _______________________________________________________________
    def analyzeTopology(self):
        #Fill up the ret
        self.getNeuEta()
        self.buildBosonP_Lab()
        #Lorentz's transformation from LAB, i.e. as in Helicity frame in https://arxiv.org/pdf/1810.11034.pdf
        self.LorToWUp = self.getPartRestFrameLor( self.pWUp)
        self.LorToWDn = self.getPartRestFrameLor( self.pWDn)
        self.LorToZ   = self.getPartRestFrameLor( self.pZ  )
        #Lorentz's transformation from LAB to WZ system, i.e. as in ATLAS-CONF-18-034
        self.LorToWZUp   = self.getPartRestFrameLor(self.pWZUp)
        self.LorToWUp_CM = self.LorToWZUp*self.getPartRestFrameLor(self.LorToWZUp*self.pWUp)
        self.LorToZUp_CM = self.LorToWZUp*self.getPartRestFrameLor(self.LorToWZUp*self.pZ)
        self.LorToWZDn   = self.getPartRestFrameLor(self.pWZDn)
        self.LorToWDn_CM = self.LorToWZUp*self.getPartRestFrameLor(self.LorToWZDn*self.pWDn)
        self.LorToZDn_CM = self.LorToWZUp*self.getPartRestFrameLor(self.LorToWZDn*self.pZ)
        #Now get the interesting angles
        self.ret["ThetaWUp_HE"] = (self.LorToWUp*self.pl3).Theta()
        self.ret["ThetaWDn_HE"] = (self.LorToWDn*self.pl3).Theta()
        self.ret["ThetaZUp_HE"] = (self.LorToZ*self.lepforZ).Theta()
        self.ret["ThetaZDn_HE"] = (self.LorToZ*self.lepforZ).Theta() #Not a bug, there is just one solution in this case
        self.ret["cos_ThetaWDn_HE"] = math.cos((self.LorToWUp*self.pl3).Theta())*self.charge
        self.ret["cos_ThetaZDn_HE"] = math.cos((self.LorToWUp*self.pl3).Theta())
        #Now get the other interesting angles
        self.ret["ThetaWUp_HE_CM"] = (self.LorToWUp_CM*self.pl3).Theta()
        self.ret["ThetaWDn_HE_CM"] = (self.LorToWDn_CM*self.pl3).Theta()
        self.ret["ThetaZUp_HE_CM"] = (self.LorToZUp_CM*self.lepforZ).Theta()
        self.ret["ThetaZDn_HE_CM"] = (self.LorToZDn_CM*self.lepforZ).Theta() #In this case they are different


        #print "________________________________________________________"
        #print " EVENT DONE "
        #print "________________________________________________________"
    ## collectObjects
    ## _______________________________________________________________
    def collectObjects(self, event):
        self.pl1.SetPtEtaPhiM(getattr(event, "LepZ1_pt"+self.lSyst), getattr(event, "LepZ1_eta"+self.lSyst),getattr(event, "LepZ1_phi"+self.lSyst), getattr(event, "LepZ1_mass"+self.lSyst))
        self.pl2.SetPtEtaPhiM(getattr(event, "LepZ2_pt"+self.lSyst), getattr(event, "LepZ2_eta"+self.lSyst),getattr(event, "LepZ2_phi"+self.lSyst), getattr(event, "LepZ2_mass"+self.lSyst))
        if getattr(event, "LepZ1_pdgId"+self.lSyst) > 0:
            self.lepforZ = self.pl1
        else:
            self.lepforZ = self.pl2
        self.charge = (getattr(event, "LepW_pdgId"+self.lSyst) < 0)*2 - 1
        self.pl3.SetPtEtaPhiM(getattr(event, "LepW_pt"+self.lSyst) , getattr(event, "LepW_eta"+self.lSyst) ,getattr(event, "LepW_phi"+self.lSyst) , getattr(event, "LepW_mass") )

        if self.lSyst == "" and self.jSyst=="":
            self.metUp.SetPtEtaPhiM(getattr(event, "MET_pt_central"+self.lSyst)  , 0  ,getattr(event, "MET_phi_central" +self.lSyst)                          , 0                           )
            self.metUp.SetPtEtaPhiM(getattr(event, "MET_pt_central" + self.lSyst)  , 0  ,getattr(event, "MET_phi_central" +self.lSyst)                          , 0                           )
            self.metDn.SetPtEtaPhiM(getattr(event, "MET_pt_central" + self.lSyst)  , 0  ,getattr(event, "MET_phi_central" +self.lSyst)                          , 0                           )

        elif self.jSyst == "":
            self.metUp.SetPtEtaPhiM(getattr(event, "MET_pt" + self.lSyst)  , 0  ,getattr(event, "MET_phi" +self.lSyst)                          , 0                           )
            self.metUp.SetPtEtaPhiM(getattr(event, "MET_pt" + self.lSyst)  , 0  ,getattr(event, "MET_phi" +self.lSyst)                          , 0                           )
            self.metDn.SetPtEtaPhiM(getattr(event, "MET_pt" + self.lSyst)  , 0  ,getattr(event, "MET_phi" +self.lSyst)                          , 0                           )

        else:
            self.metUp.SetPtEtaPhiM(getattr(event, self.metbranch + "_pt" + self.lSyst)  , 0  ,getattr(event, self.metbranch + "_phi" +self.lSyst)                          , 0                           )
            self.metUp.SetPtEtaPhiM(getattr(event, self.metbranch + "_pt" + self.lSyst)  , 0  ,getattr(event, self.metbranch + "_phi" +self.lSyst)                          , 0                           )
            self.metDn.SetPtEtaPhiM(getattr(event, self.metbranch + "_pt" + self.lSyst)  , 0  ,getattr(event, self.metbranch + "_phi" +self.lSyst)                          , 0                           )
       
        
    def getNeuEta(self):
        #Solve for W mass
        phil = self.pl3.Phi()
        etal = self.pl3.Eta()
        ptl = self.pl3.Pt()
        phinu = self.met.Phi()
        etanuUp = 0
        etanuDn = 0
        ptnu  = self.met.Pt()
        muVal = (80.385)**2/2. + ptl*ptnu*cos(phil-phinu)
        disc  = (muVal**2*ptl**2*sinh(etal)**2/ptl**4 - ((ptl**2*cosh(etal)**2)*ptnu**2 - muVal**2)/ptl**2)        
        #print disc
        if disc < 0:
             print "IMAGINARY!!!"
             self.metUp.SetXYZM(ptnu*cos(phinu), ptnu*sin(phinu),muVal*ptl*sinh(etal)/ptl**2,0)
             self.metDn.SetXYZM(ptnu*cos(phinu), ptnu*sin(phinu),muVal*ptl*sinh(etal)/ptl**2,0)
        else:
             self.metUp.SetXYZM(ptnu*cos(phinu), ptnu*sin(phinu),muVal*ptl*sinh(etal)/ptl**2 + sqrt(disc),0)
             self.metDn.SetXYZM(ptnu*cos(phinu), ptnu*sin(phinu),muVal*ptl*sinh(etal)/ptl**2 - sqrt(disc),0)

    def buildBosonP_Lab(self):
        self.pZ = self.pl1 + self.pl2
        self.pWUp = self.pl3 + self.metUp
        self.pWDn = self.pl3 + self.metDn
        self.pWZUp = self.pZ + self.pWUp
        self.pWZDn = self.pZ + self.pWDn
        for part in ["Z", "WUp", "WDn", "WZUp", "WZDn"]:
            self.ret[part+"_pt_Lab"] = getattr(self, "p" + part).Pt()
            self.ret[part+"_eta_Lab"] = getattr(self, "p" + part).Eta()
            self.ret[part+"_phi_Lab"] = getattr(self, "p" + part).Phi()
            self.ret[part+"_mass_Lab"] = getattr(self, "p" + part).M()
    
    def getPartRestFrameLor(self, p4): #Gets Lorentz Transformation from lab frame to W boson rest frame with the Z axis aligned to the W boson pT direction in the lab frame
        #First the rotation
        rot    = ROOT.TRotation()
        rot.SetZAxis(p4.Vect())        
        rotLor = ROOT.TLorentzRotation(rot)
        p4p    = rotLor.Inverse()*p4
        #print "P4P", p4p.X(), p4p.Y(), p4p.Z(), p4p.T()
        #Then the boost
        boost  = p4p.BoostVector()
        rotboost = ROOT.TLorentzRotation(boost)  
        p4pp   = rotboost.Inverse() * p4p
        #print "P4PP", p4pp.X(), p4pp.Y(), p4pp.Z(), p4pp.T()
        #print "NEXT=================\n\n"
        return rotboost.Inverse()*rotLor.Inverse()

      
    ## listBranches
    ## _______________________________________________________________
    def listBranches(self):

        biglist = []
        for l in self.lepScaleSysts:
          biglist += [
            ("ThetaWUp_HE"+self.lepScaleSysts[l]               , "F"),
            ("ThetaWDn_HE"+self.lepScaleSysts[l]               , "F"),
            ("ThetaZUp_HE"+self.lepScaleSysts[l]               , "F"),
            ("ThetaZDn_HE"+self.lepScaleSysts[l]               , "F"),
            ("ThetaWUp_HE_CM"+self.lepScaleSysts[l]            , "F"),
            ("ThetaWDn_HE_CM"+self.lepScaleSysts[l]            , "F"),
            ("ThetaZUp_HE_CM"+self.lepScaleSysts[l]            , "F"),
            ("ThetaZDn_HE_CM"+self.lepScaleSysts[l]            , "F"),
            ("cos_ThetaWDn_HE"+self.lepScaleSysts[l]           , "F"),
            ("cos_ThetaZDn_HE"+self.lepScaleSysts[l]           , "F")]
          for part in ["Z", "WUp", "WDn", "WZUp", "WZDn"]:
            for var in ["pt", "eta", "phi", "mass"]:
                biglist.append((part+"_" + var +"_Lab" +self.lepScaleSysts[l], "F"))
        for l in self.systsJEC:
          if l == 0: continue
          biglist += [
            ("ThetaWUp_HE"+self.systsJEC[l]               , "F"),
            ("ThetaWDn_HE"+self.systsJEC[l]               , "F"),
            ("ThetaZUp_HE"+self.systsJEC[l]               , "F"),
            ("ThetaZDn_HE"+self.systsJEC[l]               , "F"),
            ("ThetaWUp_HE_CM"+self.systsJEC[l]            , "F"),
            ("ThetaWDn_HE_CM"+self.systsJEC[l]            , "F"),
            ("ThetaZUp_HE_CM"+self.systsJEC[l]            , "F"),
            ("ThetaZDn_HE_CM"+self.systsJEC[l]            , "F"),
            ("cos_ThetaWDn_HE"+self.systsJEC[l]           , "F"),
            ("cos_ThetaZDn_HE"+self.systsJEC[l]           , "F")]
          for part in ["Z", "WUp", "WDn", "WZUp", "WZDn"]:
            for var in ["pt", "eta", "phi", "mass"]:
                biglist.append((part+"_" + var +"_Lab" +self.systsJEC[l], "F"))
        return biglist



    ## resetMemory
    ## _______________________________________________________________
    def resetMemory(self):
        self.pl1.SetPtEtaPhiM(0,0,0,0)
        self.pl2.SetPtEtaPhiM(0,0,0,0)
        self.pl3.SetPtEtaPhiM(0,0,0,0)
        self.met.SetPtEtaPhiM(0,0,0,0)

        self.ret = {};
        #Set everything to 0
        for l in self.listBranches():
            if ("Scale" in l[0]) or ("jes" in l[0]): continue
            self.ret[l[0]] = -99

if __name__ == '__main__':
    from sys import argv
    file = ROOT.TFile(argv[1])
    tree = file.Get("tree")
    tree.AddFriend("sf/t",argv[2]) # recleaner
    tree.vectorTree = True
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf1 = bosonPolarizationWZ()
        def analyze(self,ev):
            #print "\nrun %6d lumi %4d event %d: leps %d" % (ev.run, ev.lumi, ev.evt, ev.nLepGood)
            self.sf1(ev)
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 20)

