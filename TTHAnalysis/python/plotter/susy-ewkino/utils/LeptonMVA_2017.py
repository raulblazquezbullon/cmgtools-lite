#!/usr/bin/env python
from CMGTools.TTHAnalysis.treeReAnalyzer import *
from array import array
from glob import glob
import os.path

import ROOT

class MVAVar:
    def __init__(self,name,func,corrfunc=None):
        self.name = name
        self.var  = array('f',[0.])
        self.func = func
        self.corrfunc = corrfunc
    def set(self,lep,ncorr): ## apply correction ncorr times
        self.var[0] = self.func(lep)
        if self.corrfunc:
            for i in range(ncorr):
                self.var[0] = self.corrfunc(self.var[0], lep.pdgId,lep.pt,lep.eta,lep.mcMatchId,lep.mcMatchAny)

from CMGTools.TTHAnalysis.leptonMVA import MVATool, CategorizedMVA

_CommonSpect = {
    'elTTH_Feb2018': [],
    'muTTH_Feb2018': [],
    'elTTZ_Feb2018': [],
    'muTTZ_Feb2018': [],
    'elTZQ_Feb2018': [],
    'muTZQ_Feb2018': [],
    'elTTH_Dec2018': [],
    'muTTH_Dec2018': [],
}


_CommonVars = {
    'elTTH_Feb2018': [],
    'muTTH_Feb2018': [],
    'elTTZ_Feb2018': [],
    'muTTZ_Feb2018': [],
    'elTZQ_Feb2018': [],
    'muTZQ_Feb2018': [],
    'elTTH_Dec2018': [],
    'muTTH_Dec2018': [],
}

_ElectronVars = {
 'elTTH_Feb2018':[
    MVAVar("LepGood_pt",lambda x: x.pt),
    MVAVar("LepGood_eta",lambda x: x.eta),
    MVAVar("LepGood_jetNDauChargedMVASel",lambda x: x.jetNDauChargedMVASel),
    MVAVar("LepGood_miniRelIsoCharged",lambda x: x.miniRelIsoCharged),
    MVAVar("LepGood_miniRelIsoNeutral",lambda x: x.miniRelIsoNeutral),
    MVAVar("LepGood_jetPtRelv2",lambda x: x.jetPtRelv2),
    MVAVar("LepGood_jetBTagCSV := max(LepGood_jetBTagCSV,0)", lambda x : max(x.jetBTagCSV,0.)),
    MVAVar("LepGood_jetPtRatiov2 := (LepGood_jetBTagCSV>-5)*min(LepGood_jetPtRatiov2,1.5)+(LepGood_jetBTagCSV<-5)/(1+LepGood_relIso04)", lambda x : min(x.jetPtRatiov2,1.5) if (x.jetBTagCSV>-5) else (1./(1.+x.relIso04))),
    MVAVar("LepGood_sip3d",lambda x: x.sip3d),
    MVAVar("LepGood_dxy := log(abs(LepGood_dxy))",lambda x: log(abs(x.dxy))),
    MVAVar("LepGood_dz  := log(abs(LepGood_dz))", lambda x: log(abs(x.dz))),
    MVAVar("LepGood_mvaIdFall17noIso", lambda x: x.mvaIdFall17noIso),
 ],
 'muTTH_Feb2018': [],
 'elTTZ_Feb2018':[
    MVAVar("LepGood_pt",lambda x: x.pt),
    MVAVar("LepGood_eta",lambda x: x.eta),
    MVAVar("LepGood_jetNDauChargedMVASel",lambda x: x.jetNDauChargedMVASel),
    MVAVar("LepGood_miniRelIsoCharged",lambda x: x.miniRelIsoCharged),
    MVAVar("LepGood_miniRelIsoNeutral",lambda x: x.miniRelIsoNeutral),
    MVAVar("LepGood_jetPtRelv2",lambda x: x.jetPtRelv2),
    MVAVar("LepGood_jetBTagCSV := max(LepGood_jetBTagCSV,0)", lambda x : max(x.jetBTagCSV,0.)),
    MVAVar("LepGood_jetPtRatiov2 := (LepGood_jetBTagCSV>-5)*min(LepGood_jetPtRatiov2,1.5)+(LepGood_jetBTagCSV<-5)/(1+LepGood_relIso04)", lambda x : min(x.jetPtRatiov2,1.5) if (x.jetBTagCSV>-5) else (1./(1.+x.relIso04))),
    MVAVar("LepGood_sip3d",lambda x: x.sip3d),
    MVAVar("LepGood_dxy := log(abs(LepGood_dxy))",lambda x: log(abs(x.dxy))),
    MVAVar("LepGood_dz  := log(abs(LepGood_dz))", lambda x: log(abs(x.dz))),
    MVAVar("LepGood_mvaIdFall17noIso", lambda x: x.mvaIdFall17noIso),
 ],
 'muTTZ_Feb2018': [
 ],
 'elTZQ_Feb2018': [
    MVAVar("pt",lambda x: x.pt),
    MVAVar("eta",lambda x: abs(x.eta)),
    MVAVar("trackMultClosestJet",lambda x: x.jetNDauChargedMVASel),
    MVAVar("miniIsoCharged",lambda x: x.miniRelIsoCharged),
    MVAVar("miniIsoNeutral",lambda x: x.miniRelIsoNeutral),
    MVAVar("pTRel",lambda x: x.jetPtRelv2),
    MVAVar("ptRatio", lambda x : min(x.jetPtRatiov2,1.5)),
    MVAVar("relIso", lambda x : x.LepGood_relIso03),
    MVAVar("deepCsvClosestJet", lambda x : x.jetBTagDeepCSV if not(x.jetBTagDeepCSV == -2) else 0),
    MVAVar("sip3d",lambda x: x.sip3d),
    MVAVar("dxy",lambda x: log(abs(x.dxy))),
    MVAVar("dz", lambda x: log(abs(x.dz))),
    MVAVar("electronMvaFall17NoIso", lambda x: x.mvaIdFall17noIso),
 ],
 'muTZQ_Feb2018': [],
 'elTTH_Dec2018': [    
    MVAVar("LepGood_pt",lambda x: x.pt),
    MVAVar("LepGood_eta",lambda x: x.eta),
    MVAVar("LepGood_jetNDauChargedMVASel",lambda x: x.jetNDauChargedMVASel),
    MVAVar("LepGood_miniRelIsoCharged",lambda x: x.miniRelIsoCharged),
    MVAVar("LepGood_miniRelIsoNeutral",lambda x: x.miniRelIsoNeutral),
    MVAVar("LepGood_jetPtRelv2",lambda x: x.jetPtRelv2),
    MVAVar("LepGood_jetDeepFlav := max(0,LepGood_jetBTagDeepFlavorbb+LepGood_jetBTagDeepFlavorB)", lambda x : max(0,x.jetBTagDeepFlavorbb+x.jetBTagDeepFlavorB)),
    MVAVar("LepGood_jetBTagDeepFlavorlepb", lambda x : x.jetBTagDeepFlavorlepb),
    MVAVar("LepGood_jetPtRatiov3 := (LepGood_jetBTagCSV>-5)*min(LepGood_jetPtRatiov2,1.5)+(LepGood_jetBTagCSV<-5)/(1+LepGood_relIso04)", lambda x : min(x.jetPtRatiov2,1.5) if (x.jetBTagCSV>-5) else (1./(1.+x.relIso04))),
    MVAVar("LepGood_dxy := log(abs(LepGood_dxy))",lambda x: log(abs(x.dxy))),
    MVAVar("LepGood_sip3d",lambda x: x.sip3d),
    MVAVar("LepGood_dz  := log(abs(LepGood_dz))", lambda x: log(abs(x.dz))),
    MVAVar("LepGood_mvaIdFall17noIso", lambda x: x.mvaIdFall17noIso),
 ],
 'muTTH_Dec2018': [],
}

_MuonVars = {
 'muTTH_Feb2018':[
    MVAVar("LepGood_pt",lambda x: x.pt),
    MVAVar("LepGood_eta",lambda x: x.eta),
    MVAVar("LepGood_jetNDauChargedMVASel",lambda x: x.jetNDauChargedMVASel),
    MVAVar("LepGood_miniRelIsoCharged",lambda x: x.miniRelIsoCharged),
    MVAVar("LepGood_miniRelIsoNeutral",lambda x: x.miniRelIsoNeutral),
    MVAVar("LepGood_jetPtRelv2",lambda x: x.jetPtRelv2),
    MVAVar("LepGood_jetBTagCSV := max(LepGood_jetBTagCSV,0)", lambda x : max(x.jetBTagCSV,0.)),
    MVAVar("LepGood_jetPtRatiov2 := (LepGood_jetBTagCSV>-5)*min(LepGood_jetPtRatiov2,1.5)+(LepGood_jetBTagCSV<-5)/(1+LepGood_relIso04)", lambda x : min(x.jetPtRatiov2,1.5) if (x.jetBTagCSV>-5) else (1./(1.+x.relIso04))),
    MVAVar("LepGood_sip3d",lambda x: x.sip3d),
    MVAVar("LepGood_dxy := log(abs(LepGood_dxy))",lambda x: log(abs(x.dxy))),
    MVAVar("LepGood_dz  := log(abs(LepGood_dz))", lambda x: log(abs(x.dz))),
    MVAVar("LepGood_segmentCompatibility", lambda x: x.segmentCompatibility),
 ],
 'elTTH_Feb2018': [],
 'muTTZ_Feb2018':[
    MVAVar("LepGood_pt",lambda x: x.pt),
    MVAVar("LepGood_eta",lambda x: x.eta),
    MVAVar("LepGood_jetNDauChargedMVASel",lambda x: x.jetNDauChargedMVASel),
    MVAVar("LepGood_miniRelIsoCharged",lambda x: x.miniRelIsoCharged),
    MVAVar("LepGood_miniRelIsoNeutral",lambda x: x.miniRelIsoNeutral),
    MVAVar("LepGood_jetPtRelv2",lambda x: x.jetPtRelv2),
    MVAVar("LepGood_jetBTagCSV := max(LepGood_jetBTagCSV,0)", lambda x : max(x.jetBTagCSV,0.)),
    MVAVar("LepGood_jetPtRatiov2 := (LepGood_jetBTagCSV>-5)*min(LepGood_jetPtRatiov2,1.5)+(LepGood_jetBTagCSV<-5)/(1+LepGood_relIso04)", lambda x : min(x.jetPtRatiov2,1.5) if (x.jetBTagCSV>-5) else (1./(1.+x.relIso04))),
    MVAVar("LepGood_sip3d",lambda x: x.sip3d),
    MVAVar("LepGood_dxy := log(abs(LepGood_dxy))",lambda x: log(abs(x.dxy))),
    MVAVar("LepGood_dz  := log(abs(LepGood_dz))", lambda x: log(abs(x.dz))),
    MVAVar("LepGood_segmentCompatibility", lambda x: x.segmentCompatibility),
 ],
 'elTTZ_Feb2018': [
 ],
 'muTZQ_Feb2018': [
    MVAVar("pt",lambda x: x.pt),
    MVAVar("eta",lambda x: abs(x.eta)),
    MVAVar("trackMultClosestJet",lambda x: x.jetNDauChargedMVASel),
    MVAVar("miniIsoCharged",lambda x: x.miniRelIsoCharged),
    MVAVar("miniIsoNeutral",lambda x: x.miniRelIsoNeutral),
    MVAVar("pTRel",lambda x: x.jetPtRelv2),
    MVAVar("ptRatio", lambda x : min(x.jetPtRatiov2,1.5)),
    MVAVar("relIso", lambda x : x.LepGood_relIso03),
    MVAVar("deepCsvClosestJet", lambda x : x.jetBTagDeepCSV if not(x.jetBTagDeepCSV == -2) else 0),
    MVAVar("sip3d",lambda x: x.sip3d),
    MVAVar("dxy",lambda x: log(abs(x.dxy))),
    MVAVar("dz", lambda x: log(abs(x.dz))),
    MVAVar("segmentCompatibility", lambda x: x.segmentCompatibility),
 ],
 'elTZQ_Feb2018': [],
 'muTTH_Dec2018': [    
    MVAVar("LepGood_pt",lambda x: x.pt),
    MVAVar("LepGood_eta",lambda x: x.eta),
    MVAVar("LepGood_jetNDauChargedMVASel",lambda x: x.jetNDauChargedMVASel),
    MVAVar("LepGood_miniRelIsoCharged",lambda x: x.miniRelIsoCharged),
    MVAVar("LepGood_miniRelIsoNeutral",lambda x: x.miniRelIsoNeutral),
    MVAVar("LepGood_jetPtRelv2",lambda x: x.jetPtRelv2),
    MVAVar("LepGood_jetDeepFlav := max(0,LepGood_jetBTagDeepFlavorbb+LepGood_jetBTagDeepFlavorB)", lambda x : max(0,x.jetBTagDeepFlavorbb+x.jetBTagDeepFlavorB)),
    MVAVar("LepGood_jetBTagDeepFlavorlepb", lambda x : x.jetBTagDeepFlavorlepb),
    MVAVar("LepGood_jetPtRatiov3 := (LepGood_jetBTagCSV>-5)*min(LepGood_jetPtRatiov2,1.5)+(LepGood_jetBTagCSV<-5)/(1+LepGood_relIso04)", lambda x : min(x.jetPtRatiov2,1.5) if (x.jetBTagCSV>-5) else (1./(1.+x.relIso04))),
    MVAVar("LepGood_dxy := log(abs(LepGood_dxy))",lambda x: log(abs(x.dxy))),
    MVAVar("LepGood_sip3d",lambda x: x.sip3d),
    MVAVar("LepGood_dz  := log(abs(LepGood_dz))", lambda x: log(abs(x.dz))),
    MVAVar("LepGood_segmentCompatibility", lambda x: x.segmentCompatibility),
 ],
 'elTTH_Dec2018': [],
}


class LeptonMVA:
    def __init__(self,basepath,training="forMoriond_eleGP"):
        global _CommonVars, _CommonSpect, _ElectronVars, _MuonVars, _SVVars
        if type(basepath) == tuple: basepathmu, basepathel  = basepath
        else:                       basepathmu, basepathel  = basepath, basepath
        print "Booking %s %s" % (training, basepath)
        muVars = _CommonVars[training][:] + _MuonVars[training][:]
        elVars = _CommonVars[training][:] + _ElectronVars[training][:]
        if not muVars:
            self.mu = lambda mu, ncorr : -37.0;
        else:
            self.mu = CategorizedMVA([
                ( lambda x: True , MVATool("BDTG",basepathmu%"mu",_CommonSpect[training],muVars) ),
            ])
        if not elVars:
            self.el = lambda el, ncorr : -37.0;
        else:
            self.el = CategorizedMVA([
                ( lambda x: True, MVATool("BDTG",basepathel%"el",_CommonSpect[training],elVars) ),
            ])
    def __call__(self,lep,ncorr=0):
        if   abs(lep.pdgId) == 11: return self.el(lep,ncorr)
        elif abs(lep.pdgId) == 13: return self.mu(lep,ncorr)
        else: return -99

class LepMVAFriend:
    def __init__(self,path,training="forMoriond_eleGP",label="",fast=True):
        self.mva = LeptonMVA(path+"/%s_BDTG.weights.xml" if type(path) == str else path, training=training)
        self.fast = fast
        self.label = label
        print 'done init',training
    def listBranches(self):
        return [ ("nLepGood","I"), ("LepGood_mva"+self.label,"F",8,"nLepGood") ]
    def __call__(self,event):
        lep = Collection(event,"LepGood","nLepGood",8)
        ret = { 'nLepGood' : event.nLepGood }
        ret['LepGood_mva'+self.label] = [ self.mva(l, ncorr=0) for l in lep ]
        return ret

MODULES=[]


if __name__ == '__main__':
    from sys import argv
    file = ROOT.TFile(argv[1])
    tree = file.Get("tree")
    if len(argv) > 2: tree.AddFriend("sf/t",argv[2])
    tree.vectorTree = True
    class Tester(Module):
        def __init__(self, name, trees="new"):
            Module.__init__(self,name,None)
            self.mvas = {
                'LepMVAFriendTTH' : LepMVAFriend((os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/data/leptonMVA/tth/%s_BDTG.weights.xml",
                                                  os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/data/leptonMVA/tth/%s_BDTG.weights.xml"),
                                                 training="forMoriond_eleHZZ", label="FriendTTH"),
                'LepMVAFriendSUSY' : LepMVAFriend((os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/data/leptonMVA/susy/%s_BDTG.weights.xml",
                                                   os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/data/leptonMVA/susy/%s_BDTG.weights.xml"),
                                                  training="forMoriond_eleGP", label="FriendSUSY"),
            }
        def analyze(self,ev):
            print "\nrun %6d lumi %4d event %d: leps %d" % (ev.run, ev.lumi, ev.evt, ev.nLepGood)
            lep = Collection(ev,"LepGood","nLepGood",8)
            for l,m in self.mvas.iteritems():
                print "%-10s: %s %s %s" % (l, m(ev), [ x.mvaTTH for x in lep ], [ x.mvaSUSY for x in lep ] )
    el = EventLoop([ Tester("tester", "new") ])
    el.loop([tree], maxEvents = 50)

        
