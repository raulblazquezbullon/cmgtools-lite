## basically taken from https://github.com/CMSEdge/cmgtools-lite/blob/8020/TTHAnalysis/python/tools/edgeFriends.py

from CMGTools.TTHAnalysis.treeReAnalyzer import *
from ROOT import gSystem
            


## bTagWeightAnalyzer
## ___________________________________________________________________
class bTagWeightAnalyzerFastSim():


    ## __init__
    ## _______________________________________________________________
    def __init__(self, csv, eff, algo='CSVv2', wp=1, branchbtag='btagCSV', branchflavor='hadronFlavour', recllabel='Recl', label="", isFastSim=False, year=2017):

        self.recllabel = "_"+recllabel if recllabel and recllabel[0:1]!="_" else recllabel
        self.algo      = algo
        self.wp        = wp
        self.isFastSim = isFastSim
        self.label     = label
        self.year = year
        self.branchflavor = branchflavor
        self.branchbtag   = branchbtag
        self.cutVal       = self.getCutVal()
       
        vector = ROOT.vector('string')()
        vector.push_back("up")
        vector.push_back("down")

        ## load POG stuff
        ## in reader instance: 1 = medium wp
        ## in loading: 0,1,2 = b-jets, c-jets, light-jets
        self.calib    = ROOT.BTagCalibration(self.algo, csv)
        self.reader_b = ROOT.BTagCalibrationReader(wp, "central", vector)
        self.reader_b.load(self.calib, 0, "fastsim" if not isFastSim else "fastsim")
        self.reader_c = ROOT.BTagCalibrationReader(wp, "central", vector)
        self.reader_c.load(self.calib, 1, "fastsim" if not isFastSim else "fastsim")
        self.reader_l = ROOT.BTagCalibrationReader(wp, "central", vector)
        self.reader_l.load(self.calib, 2, "fastsim" if not isFastSim else "fastsim")

        f_eff        = ROOT.TFile.Open(eff, "read")
        self.h_eff_b = f_eff.Get("eff_TT_%s_b"%(["L", "M", "T"][wp])   ); self.h_eff_b.SetDirectory(0)
        self.h_eff_c = f_eff.Get("eff_TT_%s_c"%(["L", "M", "T"][wp])   ); self.h_eff_c.SetDirectory(0)
        self.h_eff_l = f_eff.Get("eff_TT_%s_udsg"%(["L", "M", "T"][wp])); self.h_eff_l.SetDirectory(0)
        f_eff.Close()


	## __call__
    ## _______________________________________________________________
    def __call__(self, event):
        self.event = event
        self.resetMemory()
        self.collectObjects()
        self.computeWeights()
        return self.ret


    ## collectObjects
    ## _______________________________________________________________
    def collectObjects(self):
        goodJets  = [j for j in Collection(self.event, "Jet"    , "nJet"    )]
        #discJets  = [j for j in Collection(self.event, "DiscJet", "nDiscJet")] No discjet collection now
        if hasattr(self.event, "iJSel" + self.recllabel): 
            self.jets = []
            indices = list(getattr(self.event, "iJSel" + self.recllabel))[0:int(getattr(self.event,"nJetSel"+self.recllabel))]
            for idx in indices:
                if abs(idx)>99 or idx < 0: continue
                if   idx >= 0 and idx   <len(goodJets): self.jets.append(goodJets[idx]   )
                elif idx <  0 and -idx-1<len(discJets): self.jets.append(discJets[-idx-1])
        else:
            self.jets = goodJets


    ## computeWeights
    ## _______________________________________________________________
    def computeWeights(self):

        mcTag     = 1.
        mcNoTag   = 1.
        dataTag   = 1.
        dataNoTag = 1.
        sysHFup   = 0
        sysHFdn   = 0
        sysLFup   = 0
        sysLFdn   = 0
        
        for jet in self.jets:
        
            flavor = getattr(jet, self.branchflavor) if hasattr(jet, self.branchflavor) else jet.mcFlavour
            if hasattr(jet, "pt_nom"): jet.pt = getattr(jet, "pt_nom")
            if(abs(jet.eta) > 2.5): continue
            if(abs(jet.pt)  < 20 ): continue

            eff = self.getEff(jet.pt, jet.eta, flavor) #Warning, do not use later without changing it back!!
            SF  = self.getSF (jet.pt, jet.eta, flavor)
            if getattr(jet, self.branchbtag) > self.ret["maxBTag" + self.label]: self.ret["maxBTag" + self.label] = getattr(jet, self.branchbtag)
            if getattr(jet, self.branchbtag) > self.ret["maxBTag25" + self.label] and jet.pt > 25: self.ret["maxBTag25" + self.label] = getattr(jet, self.branchbtag)
            if getattr(jet, self.branchbtag) > self.ret["maxBTag30" + self.label] and jet.pt > 30: self.ret["maxBTag30" + self.label] = getattr(jet, self.branchbtag)
            if getattr(jet, self.branchbtag) > self.ret["maxBTag40" + self.label] and jet.pt > 40: self.ret["maxBTag40" + self.label] = getattr(jet, self.branchbtag)

            istag = getattr(jet, self.branchbtag) > self.cutVal and abs(jet.eta) < 2.5 and jet.pt > 20
            if istag and jet.pt > 25: self.ret["nBJet25" +self.label]              += 1
            if istag and jet.pt > 30: self.ret["nBJet30" +self.label]              += 1
            if istag and jet.pt > 40: self.ret["nBJet40" +self.label]              += 1
            if (eff == 0): eff = 1e-5 #Regularize
            if(istag):
                 mcTag   *= eff
                 dataTag *= eff*SF[0]
                 if flavor in [4, 5]:
                     sysHFup += (SF[1] - SF[0])/SF[0]
                     sysHFdn += (SF[0] - SF[2])/SF[0]
                 else:
                     sysLFup += (SF[1] - SF[0])/SF[0]
                     sysLFdn += (SF[0] - SF[2])/SF[0]
            else: 
                 mcNoTag   *= (1 - eff      )
                 dataNoTag *= (1 - eff*SF[0])
                 if flavor in [4, 5]:
                     sysHFup += -eff*(SF[1] - SF[0])/(1 - SF[0])
                     sysHFdn += -eff*(SF[0] - SF[2])/(1 - SF[0])
                 else: 
                     sysLFup += -eff*(SF[1] - SF[0])/(1 - SF[0])
                     sysLFdn += -eff*(SF[0] - SF[2])/(1 - SF[0])
        central = (dataNoTag * dataTag ) / ( mcNoTag * mcTag )

        self.ret["bTagWeight"+self.label         ] = central
        self.ret["bTagWeight"+self.label+"_HF_Up"] = central * ( 1 - sysHFup )
        self.ret["bTagWeight"+self.label+"_HF_Dn"] = central * ( 1 + sysHFdn )
        self.ret["bTagWeight"+self.label+"_LF_Up"] = central * ( 1 - sysLFup )
        self.ret["bTagWeight"+self.label+"_LF_Dn"] = central * ( 1 + sysLFdn )


    ## getCutVal
    ## _______________________________________________________________
    def getCutVal(self):
        if self.algo in ["CSVv2", "CSV", "csvv2", "csv"]:
            return [0.5803, 0.8838, 0.9693][self.wp]
        if self.algo in ["DeepCSV"]  and self.year == 2016:
            return [0.2217, 0.6321, 0.8953][self.wp]
        if self.algo in ["DeepCSV"]  and self.year == 2017:
            return [0.1522, 0.4941, 0.8001][self.wp]
        if self.algo in ["DeepFlavour"] and self.year == 2017:
            return [0.0521, 0.3033, 0.7489][self.wp]
        if self.algo in ["DeepCSV"]  and self.year == 2018:
            return [0.1241, 0.4184, 0.7527][self.wp]
        if self.algo in ["DeepFlavour"] and self.year == 2018:
            return [0.0494, 0.2770, 0.7264][self.wp]

        return [-0.5884, 0.4432, 0.9432][self.wp]


    ## getEff
    ## _______________________________________________________________
    def getEff(self, pt, eta, mcFlavor):
    
       flavor   = self.pogFlavor(mcFlavor) 
       theHisto = [self.h_eff_b, self.h_eff_c, self.h_eff_l][flavor]
       return theHisto.GetEfficiency(theHisto.FindFixBin(min(2.49, abs(eta)),max(20. , min(999., pt))))

    ## getSF
    ## _______________________________________________________________
    def getSF(self, pt, eta, mcFlavor):
        	
       flavor     = self.pogFlavor(mcFlavor) 
       pt_cutoff  = max(20. , min(999., pt))
       eta_cutoff = min(2.39, abs(eta))

       theReader   = [self.reader_b, self.reader_c, self.reader_l][flavor]
    
       SF     = theReader.eval_auto_bounds("central", flavor, eta_cutoff, pt_cutoff)  
       SFup   = theReader.eval_auto_bounds("up"  , flavor, eta_cutoff, pt_cutoff)  
       SFdn   = theReader.eval_auto_bounds("down", flavor, eta_cutoff, pt_cutoff)         
       return [SF, SFup, SFdn]


    ## listBranches
    ## _______________________________________________________________
    def listBranches(self):

        biglist = [
            ("bTagWeight"+self.label          , "F"),
            ("bTagWeight"+self.label+"_HF_Up" , "F"),
            ("bTagWeight"+self.label+"_HF_Dn" , "F"),
            ("bTagWeight"+self.label+"_LF_Up" , "F"),
            ("bTagWeight"+self.label+"_LF_Dn" , "F"),
            ("nBJet25" +self.label, "I"),
            ("nBJet30" +self.label, "I"),
            ("nBJet40" +self.label, "I"),
            ("maxBTag" + self.label, "F"),
            ("maxBTag25" + self.label, "F"),
            ("maxBTag30" + self.label, "F"),
            ("maxBTag40" + self.label, "F")]
        return biglist


    ## pogFlavor
    ## _______________________________________________________________
    def pogFlavor(self, hadronFlavor):
        match = {5:0, 4:1, 0:2}
        if hadronFlavor in match.keys(): return match[hadronFlavor]
        return 2


	## resetMemory
    ## _______________________________________________________________
    def resetMemory(self):
        self.ret = {}
        self.ret["bTagWeight"+self.label         ] = 0.
        self.ret["bTagWeight"+self.label+"_HF_Up"] = 0.
        self.ret["bTagWeight"+self.label+"_HF_Dn"] = 0.
        self.ret["bTagWeight"+self.label+"_LF_Up"] = 0.
        self.ret["bTagWeight"+self.label+"_LF_Dn"] = 0.
        self.ret["nBJet25" +self.label]            = 0
        self.ret["nBJet30" +self.label]            = 0
        self.ret["nBJet40" +self.label]            = 0
        self.ret["maxBTag" + self.label] = -1
        self.ret["maxBTag25" + self.label] = -1
        self.ret["maxBTag30" + self.label] = -1
        self.ret["maxBTag40" + self.label] = -1

if __name__ == '__main__':
    from sys import argv
    file = ROOT.TFile(argv[1])
    tree = file.Get("tree")
    tree.vectorTree = True
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf1 = bTagWeightAnalyzer("/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/DeepCSV_94XSF_V3_B_F.csv","/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/btagEffCSV.root", algo='DeepCSV', branchbtag='btagDeepCSV', branchflavor='hadronFlavour', label='eventBTagSFCSVL', recllabel='Recl', wp=0)
            self.sf2 = bTagWeightAnalyzer("/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/DeepCSV_94XSF_V3_B_F.csv","/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/btagEffCSV.root", algo='DeepCSV', branchbtag='btagDeepCSV', branchflavor='hadronFlavour', label='eventBTagSFCSVM', recllabel='Recl', wp=1)
            self.sf3 = bTagWeightAnalyzer("/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/DeepCSV_94XSF_V3_B_F.csv","/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/btagEffCSV.root", algo='DeepCSV', branchbtag='btagDeepCSV', branchflavor='hadronFlavour', label='eventBTagSFCSVT', recllabel='Recl', wp=2)

            self.sf4 = bTagWeightAnalyzer("/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/DeepFlavour_94XSF_V1_B_F.csv","/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/btagEffCSV.root", algo='DeepFlavour', branchbtag='bTagDeepFlavorB', branchflavor='hadronFlavour', label='eventBTagSFFlavL', recllabel='Recl', wp=0)
            self.sf5 = bTagWeightAnalyzer("/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/DeepFlavour_94XSF_V1_B_F.csv","/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/btagEffCSV.root", algo='DeepFlavour', branchbtag='bTagDeepFlavorB', branchflavor='hadronFlavour', label='eventBTagSFFlavM', recllabel='Recl', wp=1)
            self.sf6 = bTagWeightAnalyzer("/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/DeepFlavour_94XSF_V1_B_F.csv","/nfs/fanae/user/carlosec/EWKino/CMSSW_9_4_4/src/CMGTools/TTHAnalysis/data/btag/btagEffCSV.root", algo='DeepFlavour', branchbtag='bTagDeepFlavorB', branchflavor='hadronFlavour', label='eventBTagSFFlavT', recllabel='Recl', wp=2)

        def analyze(self,ev):
            print "\nrun %6d lumi %4d event %d: leps %d" % (ev.run, ev.lumi, ev.evt, ev.nLepGood)
            print "==================NEW EVENT==================="
            print "==================NEW EVENT==================="
            print "==================NEW EVENT==================="
            print self.sf1(ev)
            print self.sf2(ev)
            print self.sf3(ev)
            print self.sf4(ev)
            print self.sf5(ev)
            print self.sf6(ev)
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 100000)


