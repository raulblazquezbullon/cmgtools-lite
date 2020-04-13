from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module 
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection 

from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput

from math import sqrt, cos
from copy import deepcopy

from PhysicsTools.NanoAODTools.postprocessing.tools import deltaR,deltaPhi
from PhysicsTools.Heppy.physicsobjects.Jet import _btagWPs

class EventVars_5TeV(Module):
    def __init__(self, label="", recllabel='Recl', doSystJEC=True, variations=[]):
        self.namebranches = [ "MT_met_lep1",
                              "MT_met_lep2",
                              "MT_met_lep3",
                              "MTmin",
                              "MTlW",
                              ]
        self.label = "" if (label in ["",None]) else ("_"+label)
        self.systsJEC = {0:"",\
                         1:"_jesTotalUp"  , -1:"_jesTotalDown",\
                         2:"_jerUp", -2: "_jerDown",\
                     } if doSystJEC else {0:""}
        if len(variations): 
            self.systsJEC = {0:""}
            for i,var in enumerate(variations):
                self.systsJEC[i+1]   ="_%sUp"%var
                self.systsJEC[-(i+1)]="_%sDown"%var


        self.inputlabel = '_'+recllabel
        self.branches = []
        for var in self.systsJEC: self.branches.extend([br+self.label+self.systsJEC[var] for br in self.namebranches])
        if len(self.systsJEC) > 1: 
            self.branches.extend([br+self.label+'_unclustEnUp' for br in self.namebranches if 'MT' in br])
            self.branches.extend([br+self.label+'_unclustEnDown' for br in self.namebranches if 'MT' in br])
            
        self.branches.extend(['drlep12','drlep13','drlep23','dphilep12','dphilep13','dphilep23','ptlep12'])
        self.branches.extend(["hasOSSF4l","hasOSSF3l","m3l","m4l","mZ_3l"])
        self.branches.extend(["lZ1pt", "lZ2pt", "lWpt","idx_lZ1", "idx_lZ2", "idx_lW"])

    # old interface (CMG)
    def listBranches(self):
        return self.branches[:]
    def __call__(self,event):
        return self.run(event, CMGCollection, "met")

    # new interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        declareOutput(self, wrappedOutputTree, self.branches)
    def analyze(self, event):
        writeOutput(self, self.run(event, NanoAODCollection))
        return True   
    
    # logic of the algorithm
    def run(self,event,Collection):
        allret = {}

        all_leps = [l for l in Collection(event,"LepGood")]
        nFO = getattr(event,"nLepFO"+self.inputlabel)
        chosen = getattr(event,"iLepFO"+self.inputlabel)
        leps = [all_leps[chosen[i]] for i in xrange(nFO)]

        if nFO >= 2: 
            allret['drlep12'] = deltaR(leps[0],leps[1])
            allret['dphilep12'] = deltaPhi(leps[0],leps[1])
            allret['ptlep12'] = (leps[0].p4()+leps[1].p4()).Pt()
        else: 
            allret['drlep12'] = 0 
            allret['dphilep12'] = 0
            allret['ptlep12'] = 0

        if nFO >= 3: 
            allret['drlep13'] = deltaR(leps[0],leps[2])
            allret['drlep23'] = deltaR(leps[1],leps[2])
            allret['dphilep13'] = deltaPhi(leps[0],leps[2])
            allret['dphilep23'] = deltaPhi(leps[1],leps[2])
        else:
            allret['drlep13'] = 0 
            allret['drlep23'] = 0 
            allret['dphilep13'] = 0
            allret['dphilep23'] = 0


        allret['hasOSSF3l'] = False
        allret['hasOSSF4l'] = False
        allret['m4l']       = -99
        allret['m3l']       = -99
        allret['mZ_3l' ]    = -99
        allret['lZ1pt']     = -99
        allret['lZ2pt']     = -99
        allret['lWpt']      = -99
        allret['idx_lZ1']   = -1
        allret['idx_lZ2']   = -1
        allret['idx_lW']    = -1


        idxlW  = -1 
        idxlZ1 = -1
        idxlZ2 = -1        
        if nFO >= 3:
            allret['m3l'] = (leps[0].p4()+leps[1].p4()+leps[2].p4()).M()
            
            bestmZ = 9999.
            leps3 = [leps[0], leps[1], leps[2]]
            for l1 in leps3:
                for l2 in leps3: 
                    if l1 == l2: continue
                    if l1.pdgId * l2.pdgId > 0: continue
                    if abs(l1.pdgId) != abs(l2.pdgId): continue
                    allret['hasOSSF3l'] = True
                    
                    mll = (l1.p4()+l2.p4()).M()
                    if (abs(bestmZ-91.1876) > abs(mll-91.1876)): 
                        bestmZ = mll
                        idxlZ1 = leps.index(l1)
                        idxlZ2 = leps.index(l2) 
                        
            
            for l3 in leps3: 
                if (l3==leps3[idxlZ1]): continue
                if (l3==leps3[idxlZ2]): continue
                idxlW = leps.index(l3)
            
            # ensure that the lW and lZ1 has same-sign: 
            if leps[idxlW].pdgId * leps[idxlZ2].pdgId > 0: 
                tmpidx = idxlZ1
                idxlZ1 = idxlZ2
                idxlZ2 = tmpidx
                
            allret['mZ_3l' ]    = (leps[idxlZ1].p4()+leps[idxlZ2].p4()).M()
            allret['lZ1pt']     = leps[idxlZ1].pt
            allret['lZ2pt']     = leps[idxlZ2].pt
            allret['lWpt']      = leps[idxlW].pt
            allret['idx_lZ1']   = idxlZ1
            allret['idx_lZ2']   = idxlZ2
            allret['idx_lW']    = idxlW
            
        if nFO >= 4:
            allret['m4l'] = (leps[0].p4()+leps[1].p4()+leps[2].p4()+leps[3].p4()).M()
            leps4 = [leps[0], leps[1], leps[2], leps[3]]
            for l1 in leps4:
                for l2 in leps4: 
                    if l1 == l2: continue
                    if l1.pdgId * l2.pdgId > 0: continue
                    if abs(l1.pdgId) != abs(l2.pdgId): continue
                    allret['hasOSSF4l'] = True
            
        for var in self.systsJEC:
            # prepare output
            ret = dict([(name,0.0) for name in self.namebranches])
            _var = var

            if not hasattr(event,"nJet25"+self.systsJEC[var]+self.inputlabel): 
                _var = 0

            metName = 'MET' 
            if not _var and not hasattr(event, '%s_pt_nom' %metName):
                met = getattr(event,metName+"_pt")
                metphi = getattr(event,metName+"_phi")
            elif not _var and  hasattr(event, '%s_pt_nom' %metName):
                met = getattr(event,metName+"_pt_nom")
                metphi = getattr(event,metName+"_phi_nom")
            else :
                met = getattr(event,metName+"_pt"+self.systsJEC[_var])
                metphi = getattr(event,metName+"_phi"+self.systsJEC[_var])

            nlep = len(leps)
            if nlep > 0:
                ret["MT_met_lep1"] = sqrt( 2*leps[0].conePt*met*(1-cos(leps[0].phi-metphi)) )
            if nlep > 1:
                ret["MT_met_lep2"] = sqrt( 2*leps[1].conePt*met*(1-cos(leps[1].phi-metphi)) )
                ret["MTmin"]       = min(ret["MT_met_lep1"],ret["MT_met_lep2"])
            if nlep > 2:
                ret["MT_met_lep3"] = sqrt( 2*leps[2].conePt*met*(1-cos(leps[2].phi-metphi)) )
                ret["MTlW"]        = sqrt( 2*leps[idxlW].conePt*met*(1-cos(leps[idxlW].phi-metphi)) )

            if not _var and hasattr(event, '%s_pt_unclustEnUp'%metName):
                met_up = getattr(event,metName+"_pt_unclustEnUp")
                metphi_up = getattr(event,metName+"_phi_unclustEnUp")
                met_down = getattr(event,metName+"_pt_unclustEnDown")
                metphi_down = getattr(event,metName+"_phi_unclustEnDown")
                if nlep > 0:
                    allret["MT_met_lep1" + self.label + '_unclustEnUp'] = sqrt( 2*leps[0].conePt*met_up*(1-cos(leps[0].phi-metphi_up)) )
                    allret["MT_met_lep1" + self.label + '_unclustEnDown'] = sqrt( 2*leps[0].conePt*met_down*(1-cos(leps[0].phi-metphi_down)) )
                if nlep > 1:
                    allret["MT_met_lep2" + self.label + '_unclustEnUp'] = sqrt( 2*leps[1].conePt*met_up*(1-cos(leps[1].phi-metphi_up)) )
                    allret["MT_met_lep2" + self.label + '_unclustEnDown'] = sqrt( 2*leps[1].conePt*met_down*(1-cos(leps[1].phi-metphi_down)) )
                    allret["MTmin"+self.label+"_unclustEnUp"] = min(allret["MT_met_lep1" + self.label + '_unclustEnUp'],allret["MT_met_lep2" + self.label + '_unclustEnUp'])
                    allret["MTmin"+self.label+"_unclustEnDown"] = min(allret["MT_met_lep1"+self.label+'_unclustEnDown'],allret["MT_met_lep2" + self.label+'_unclustEnDown'])
                if nlep > 2:
                    allret["MT_met_lep3" + self.label + '_unclustEnUp'] = sqrt( 2*leps[2].conePt*met_up*(1-cos(leps[2].phi-metphi_up)) )
                    allret["MT_met_lep3" + self.label + '_unclustEnDown'] = sqrt( 2*leps[2].conePt*met_down*(1-cos(leps[2].phi-metphi_down)) )
                    allret["MTlW" + self.label + '_unclustEnUp'] = sqrt( 2*leps[idxlW].conePt*met_up*(1-cos(leps[idxlW].phi-metphi_up)) )
                    allret["MTlW" + self.label + '_unclustEnDown'] = sqrt( 2*leps[idxlW].conePt*met_down*(1-cos(leps[idxlW].phi-metphi_down)) )


            for br in self.namebranches:
                allret[br+self.label+self.systsJEC[_var]] = ret[br]
	 	
	return allret


if __name__ == '__main__':
    from sys import argv
    file = ROOT.TFile(argv[1])
    tree = file.Get("tree")
    tree.vectorTree = True
    tree.AddFriend("sf/t",argv[2])
    class Tester(Module):
        def __init__(self, name):
            Module.__init__(self,name,None)
            self.sf = EventVarsWZ('','Recl')
        def analyze(self,ev):
            print "\nrun %6d lumi %4d event %d: leps %d" % (ev.run, ev.lumi, ev.evt, ev.nLepGood)
            print self.sf(ev)
    el = EventLoop([ Tester("tester") ])
    el.loop([tree], maxEvents = 50)

        
