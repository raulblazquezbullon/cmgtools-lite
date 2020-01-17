from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
import ROOT as r 
from math import sqrt, cos

class Edge_massVariables( Module ):
    def __init__(self):
        pass
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree
        self.out.branch('bestMT', 'F')
        self.out.branch('m3l_WZ', 'F')
        self.out.branch('mZ1_tight_3l', 'F')
        self.out.branch('mZ1_tight_4l', 'F')
        self.out.branch('mZ2_tight_4l', 'F')
        self.out.branch('ptZ1_tight_4l', 'F')
        self.out.branch('ptZ2_tight_4l', 'F')
        self.out.branch('Lep3_pt_Edge', 'F')
        self.out.branch('Lep3_eta_Edge', 'F')
        self.out.branch('Lep3_phi_Edge', 'F')
        self.out.branch('Lep3_pdgId_Edge', 'F')
        self.out.branch('Lep4_pt_Edge', 'F')
        self.out.branch('Lep4_eta_Edge', 'F')
        self.out.branch('Lep4_phi_Edge', 'F')
        self.out.branch('Lep4_pdgId_Edge', 'F')
        
    def analyze(self, event):
        leps = Collection( event, "LepSelLoose","nLepSelLoose_Edge")
        tightleps = [ x for x in leps if x.isTight_Edge ] 
        met = event.MET_pt_Edge; met_phi = event.MET_phi_Edge

        m3l_WZ       = -1
        bestMT       = -1
        mZ1_tight_3l = -1 
        mZ1_tight_4l = -1
        mZ2_tight_4l = -1
        ptZ1_tight_4l = -1
        ptZ2_tight_4l = -1
        
        Lep3_pt_Edge=0
        Lep3_eta_Edge=0
        Lep3_phi_Edge=0
        Lep3_pdgId_Edge=0

        Lep4_pt_Edge=0
        Lep4_eta_Edge=0
        Lep4_phi_Edge=0
        Lep4_pdgId_Edge=0
                        
        if len(tightleps) > 2: 
            l1 = r.TLorentzVector(); l2 = r.TLorentzVector(); l3 = r.TLorentzVector()
            l1.SetPtEtaPhiM( tightleps[0].pt_Edge, tightleps[0].eta_Edge, tightleps[0].phi_Edge, 0)
            l2.SetPtEtaPhiM( tightleps[1].pt_Edge, tightleps[1].eta_Edge, tightleps[1].phi_Edge, 0)
            l3.SetPtEtaPhiM( tightleps[2].pt_Edge, tightleps[2].eta_Edge, tightleps[2].phi_Edge, 0)

            Lep3_pt_Edge=tightleps[2].pt_Edge
            Lep3_eta_Edge=tightleps[2].eta_Edge
            Lep3_phi_Edge=tightleps[2].phi_Edge
            Lep3_pdgId_Edge=tightleps[2].pdgId_Edge



            m3l_WZ = (l1+l2+l3).M()
            threeleps = [l1,l2,l3]
            for i1, lep1 in enumerate( threeleps):
                for i2, lep2 in enumerate( threeleps):
                    if i1 <= i2: continue
                    pdgId1 = tightleps[i1].pdgId_Edge
                    pdgId2 = tightleps[i2].pdgId_Edge
                    if abs(pdgId1) != abs(pdgId2): continue
                    if pdgId1*pdgId2>0: continue

                    mass = (lep1+lep2).M()
                    if abs(mZ1_tight_3l-91.2) > abs( mass-91.2): 
                        mZ1_tight_3l = mass
                        thirdLep = threeleps[3-i1-i2]
                        bestMT   = sqrt( 2*thirdLep.Pt()*met*(1-cos(met_phi-thirdLep.Phi())) )

        if len(tightleps) > 3: 

            Lep4_pt_Edge=tightleps[3].pt_Edge
            Lep4_eta_Edge=tightleps[3].eta_Edge
            Lep4_phi_Edge=tightleps[3].phi_Edge
            Lep4_pdgId_Edge=tightleps[3].pdgId_Edge

            l1 = r.TLorentzVector(); l2 = r.TLorentzVector(); 
            fourleps = tightleps[:4]
            bestPair = [-1,-1]
            
            for i1, lep1 in enumerate( fourleps ):
                for i2, lep2 in enumerate( fourleps):
                    if i1 <= i2: continue
                    if abs(lep1.pdgId_Edge) != abs(lep2.pdgId_Edge): continue
                    if lep1.pdgId_Edge*lep2.pdgId_Edge > 0: continue
                    l1.SetPtEtaPhiM( lep1.pt_Edge, lep1.eta_Edge, lep1.phi_Edge, 0)
                    l2.SetPtEtaPhiM( lep2.pt_Edge, lep2.eta_Edge, lep2.phi_Edge, 0)
                    mass = (l1+l2).M()
                    if abs( mass - 91.2 ) < abs( mZ1_tight_4l - 91.2):
                        mZ1_tight_4l = mass
                        ptZ1_tight_4l = (l1+l2).Pt()
                        bestPair = [i1,i2]

            for i1, lep1 in enumerate( fourleps ):
                for i2, lep2 in enumerate( fourleps):
                    if i1 <= i2: continue
                    if abs(lep1.pdgId_Edge) != abs(lep2.pdgId_Edge): continue
                    if lep1.pdgId_Edge*lep2.pdgId_Edge > 0: continue
                    if i1 in bestPair: continue
                    if i2 in bestPair: continue
                    l1.SetPtEtaPhiM( lep1.pt_Edge, lep1.eta_Edge, lep1.phi_Edge, 0)
                    l2.SetPtEtaPhiM( lep2.pt_Edge, lep2.eta_Edge, lep2.phi_Edge, 0)
                    mass = (l1+l2).M()
                    if abs( mass - 91.2 ) < abs( mZ2_tight_4l - 91.2):
                        mZ2_tight_4l = mass
                        ptZ2_tight_4l = (l1+l2).Pt()

        self.out.fillBranch('m3l_WZ'      , m3l_WZ      )
        self.out.fillBranch('bestMT'      , bestMT      )
        self.out.fillBranch('mZ1_tight_3l', mZ1_tight_3l)
        self.out.fillBranch('mZ1_tight_4l', mZ1_tight_4l)
        self.out.fillBranch('mZ2_tight_4l', mZ2_tight_4l)
        self.out.fillBranch('ptZ1_tight_4l', ptZ1_tight_4l)
        self.out.fillBranch('ptZ2_tight_4l', ptZ2_tight_4l)
        self.out.fillBranch('Lep3_pt_Edge' ,Lep3_pt_Edge )
        self.out.fillBranch('Lep3_eta_Edge',Lep3_eta_Edge)
        self.out.fillBranch('Lep3_phi_Edge',Lep3_phi_Edge)
        self.out.fillBranch('Lep3_pdgId_Edge',Lep3_pdgId_Edge)
        self.out.fillBranch('Lep4_pt_Edge' ,Lep4_pt_Edge )
        self.out.fillBranch('Lep4_eta_Edge',Lep4_eta_Edge)
        self.out.fillBranch('Lep4_phi_Edge',Lep4_phi_Edge)
        self.out.fillBranch('Lep4_pdgId_Edge',Lep4_pdgId_Edge)




        return True 
massVariables = lambda : Edge_massVariables()
