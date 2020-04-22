from math import sqrt, cos
from copy import deepcopy
import struct as st

from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection as NanoAODCollection 
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaR,deltaPhi

from PhysicsTools.Heppy.physicsobjects.Jet import _btagWPs

from CMGTools.TTHAnalysis.treeReAnalyzer import Collection as CMGCollection
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput, writeOutput
from CMGTools.TTHAnalysis.tools.nanoAOD.TopRun2_modules import ch


class EventVars_tWRun2(Module):
    def __init__(self, label = "", recllabel = 'Recl', doSystJEC = True, variations = []):
        self.jecbranches = []

        self.otherbranches = [("isSS", "I"),
                              #("isSS", "O"),
                              #("channel", "B"),
                              ("channel", "I"),
                              "Lep1Lep2_Pt",
                              "Lep1Lep2_DPhi",
                              "Mll"]

        self.label    = "" if (label in ["", None]) else ("_" + label)

        self.systsJEC = {0: ""}
        if   len(variations):
            for i, var in enumerate(variations):
                self.systsJEC[i+1]    = "_%sUp"%var
                self.systsJEC[-(i+1)] = "_%sDown"%var
        elif doSystJEC:
            self.systsJEC = {0: "",
                             1: "_jesTotalUp", -1: "_jesTotalDown",
                             2: "_jerUp",      -2: "_jerDown",
                            }

        self.inputlabel = '_' + recllabel
        self.branches   = []

        for var in self.systsJEC: self.branches.extend([br + self.label + self.systsJEC[var] for br in self.jecbranches])
        self.branches.extend(self.otherbranches)
        return


    # Old interface (CMG)
    def listBranches(self):
        return self.branches[:]


    def __call__(self, event):
        return self.run(event, CMGCollection, "met")


    # New interface (nanoAOD-tools)
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        declareOutput(self, wrappedOutputTree, self.branches)


    def analyze(self, event):
        writeOutput(self, self.run(event, NanoAODCollection))
        return True


    # Common processing
    def run(self, event, Collection):
        allret = {}

        # ============================ Variables not susceptible to JEC
        leps = [l for l in Collection(event, "LepGood")]

        if event.nLepGood >= 2:
            #allret["isSS"] = st.pack("_Bool", leps[0].charge * leps[1].charge)
            allret["isSS"] = leps[0].charge * leps[1].charge
            if   ((abs(leps[0].pdgId) == 13 and abs(leps[1].pdgId) == 11) or
                 (abs(leps[0].pdgId) == 11 and abs(leps[1].pdgId) == 13)):
                #allret["channel"] = st.pack("b", ch.ElMu)
                allret["channel"] = ch.ElMu
            elif (abs(leps[0].pdgId) == 13 and abs(leps[1].pdgId) == 13):
                #allret["channel"] = st.pack("b", ch.Muon)
                allret["channel"] = ch.Muon
            elif (abs(leps[0].pdgId) == 11 and abs(leps[1].pdgId) == 11):
                #allret["channel"] = st.pack("b", ch.Elec)
                allret["channel"] = ch.Elec
            else:
                #allret["channel"] = st.pack("b", ch.NoChan)
                allret["channel"] = ch.NoChan

            allret["Lep1Lep2_Pt"]   = (leps[0].p4() + leps[1].p4()).Pt()
            allret["Lep1Lep2_DPhi"] = deltaPhi(leps[0], leps[1])
            allret["Mll"]           = (leps[0].p4() + leps[1].p4()).M()

        else:
            #allret["isSS"]          = st.pack("_Bool", 0)
            allret["isSS"]          = 0
            allret["Lep1Lep2_Pt"]   = 0
            allret["Lep1Lep2_DPhi"] = 0
            allret["Mll"]           = 0
            #allret["channel"]       = st.pack("b", ch.NoChan)
            allret["channel"]       = ch.NoChan


        # ============================ Variables susceptible to JEC
        #for var in self.systsJEC:
            ## prepare output
            #ret = dict([(name,0.0) for name in self.jecbranches])
            #_var = var

            #if not hasattr(event,"nJet25"+self.systsJEC[var]+self.inputlabel):
                #_var = 0

            #metName = 'MET'
            #if not _var and not hasattr(event, '%s_pt_nom' %metName):
                #met = getattr(event,metName+"_pt")
                #metphi = getattr(event,metName+"_phi")
            #elif not _var and  hasattr(event, '%s_pt_nom' %metName):
                #met = getattr(event,metName+"_pt_nom")
                #metphi = getattr(event,metName+"_phi_nom")
            #else :
                #met = getattr(event,metName+"_pt"+self.systsJEC[_var])
                #metphi = getattr(event,metName+"_phi"+self.systsJEC[_var])

            #nlep = len(leps)
            #if nlep > 0:
                #ret["MT_met_lep1"] = sqrt( 2*leps[0].conePt*met*(1-cos(leps[0].phi-metphi)) )
            #if nlep > 1:
                #ret["MT_met_lep2"] = sqrt( 2*leps[1].conePt*met*(1-cos(leps[1].phi-metphi)) )
                #ret["MTmin"]       = min(ret["MT_met_lep1"],ret["MT_met_lep2"])
            #if nlep > 2:
                #ret["MT_met_lep3"] = sqrt( 2*leps[2].conePt*met*(1-cos(leps[2].phi-metphi)) )
                #ret["MTlW"]        = sqrt( 2*leps[idxlW].conePt*met*(1-cos(leps[idxlW].phi-metphi)) )

            #if not _var and hasattr(event, '%s_pt_unclustEnUp'%metName):
                #met_up = getattr(event,metName+"_pt_unclustEnUp")
                #metphi_up = getattr(event,metName+"_phi_unclustEnUp")
                #met_down = getattr(event,metName+"_pt_unclustEnDown")
                #metphi_down = getattr(event,metName+"_phi_unclustEnDown")
                #if nlep > 0:
                    #allret["MT_met_lep1" + self.label + '_unclustEnUp'] = sqrt( 2*leps[0].conePt*met_up*(1-cos(leps[0].phi-metphi_up)) )
                    #allret["MT_met_lep1" + self.label + '_unclustEnDown'] = sqrt( 2*leps[0].conePt*met_down*(1-cos(leps[0].phi-metphi_down)) )
                #if nlep > 1:
                    #allret["MT_met_lep2" + self.label + '_unclustEnUp'] = sqrt( 2*leps[1].conePt*met_up*(1-cos(leps[1].phi-metphi_up)) )
                    #allret["MT_met_lep2" + self.label + '_unclustEnDown'] = sqrt( 2*leps[1].conePt*met_down*(1-cos(leps[1].phi-metphi_down)) )
                    #allret["MTmin"+self.label+"_unclustEnUp"] = min(allret["MT_met_lep1" + self.label + '_unclustEnUp'],allret["MT_met_lep2" + self.label + '_unclustEnUp'])
                    #allret["MTmin"+self.label+"_unclustEnDown"] = min(allret["MT_met_lep1"+self.label+'_unclustEnDown'],allret["MT_met_lep2" + self.label+'_unclustEnDown'])
                #if nlep > 2:
                    #allret["MT_met_lep3" + self.label + '_unclustEnUp'] = sqrt( 2*leps[2].conePt*met_up*(1-cos(leps[2].phi-metphi_up)) )
                    #allret["MT_met_lep3" + self.label + '_unclustEnDown'] = sqrt( 2*leps[2].conePt*met_down*(1-cos(leps[2].phi-metphi_down)) )
                    #allret["MTlW" + self.label + '_unclustEnUp'] = sqrt( 2*leps[idxlW].conePt*met_up*(1-cos(leps[idxlW].phi-metphi_up)) )
                    #allret["MTlW" + self.label + '_unclustEnDown'] = sqrt( 2*leps[idxlW].conePt*met_down*(1-cos(leps[idxlW].phi-metphi_down)) )


            #for br in self.jecbranches:
                #allret[br+self.label+self.systsJEC[_var]] = ret[br]

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
