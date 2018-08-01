import ROOT

bTree = ROOT.TFile("/pool/ciencias/HeppyTrees/RA7/estructura/wzSkimmed/WZTo3LNu/treeProducerSusyMultilepton/tree.root", "READ")
fTree = ROOT.TFile("/pool/ciencias/HeppyTrees/RA7/estructura/wzSkimmed/leptonBuilderWZSM/evVarFriend_WZTo3LNu.root", "READ")

bT = bTree.Get("tree")
fT = fTree.Get("sf/t")

bT.AddFriend(fT)

def retProb(mll, mtW):
    return abs(1/(mll**2 - 91.16**2 + 2.49*91.16j))**2 + abs(1/(mtW**2 - 80.38**2 + 2.09*80.38j))**2

total = 0
allGood = 0
hasFake = 0
mismatchZ1 = 0
mismatchZ2 = 0

ientry = 0
for ev in bT:
    ientry +=1
    print ientry, bT.GetEntries()
    if ev.nOSSF_3l == 0 or not(ev.nLepSel == 3) : continue 
    total +=1
    if abs(ev.nOSSF_3l < 2): #No mismatching available
        allGood +=1
        continue
    elif abs(ev.LepZ1_mcMatchId) ==0 or abs(ev.LepZ2_mcMatchId)==0 and abs(ev.LepW_mcMatchId)==0:
        hasFake +=1
        continue
    which = 1 if (ev.LepW_pdgId == - ev.LepZ1_pdgId) else 2
    metVec = ROOT.TLorentzVector()
    l1Vec = ROOT.TLorentzVector()
    l2Vec = ROOT.TLorentzVector()
    l3Vec = ROOT.TLorentzVector()
    metVec.SetPtEtaPhiM(ev.met_pt, 0,ev.met_phi,0)
    l1Vec.SetPtEtaPhiM(ev.LepZ1_pt, ev.LepZ1_eta,ev.LepZ1_phi,0)
    l2Vec.SetPtEtaPhiM(ev.LepZ2_pt, ev.LepZ2_eta,ev.LepZ2_phi,0)
    l3Vec.SetPtEtaPhiM(ev.LepW_pt, ev.LepW_eta,ev.LepW_phi,0)
    if which == 1:
        Zmasses = [ (l1Vec+l2Vec).M(), (l1Vec+l3Vec).M()]
        Wmasses = [ (l3Vec+metVec).M(), (l2Vec + metVec).M()]
        p1 = retProb(Zmasses[0], Wmasses[0])
        p2 = retProb(Zmasses[1], Wmasses[1])
        if p2 >= p1:
            l1tag = 23
            l2tag = 24
            l3tag = 23
        else:
            l1tag = 23
            l2tag = 23
            l3tag = 24
    if which == 2:
        Zmasses = [ (l1Vec+l2Vec).M(), (l2Vec+l3Vec).M()]
        Wmasses = [ (l3Vec+metVec).M(), (l1Vec + metVec).M()]
        p1 = retProb(Zmasses[0], Wmasses[0])
        p2 = retProb(Zmasses[1], Wmasses[1])
        if p2 >= p1:
            l1tag = 24
            l2tag = 23
            l3tag = 23
        else:
            l1tag = 23
            l2tag = 23
            l3tag = 24
        print Zmasses, Wmasses
    #Now deal with the counting
    if abs(ev.LepZ1_mcMatchId) ==l1tag and abs(ev.LepZ2_mcMatchId)==l2tag and abs(ev.LepW_mcMatchId)==l3tag:
        allGood += 1
    elif abs(ev.LepZ1_mcMatchId) !=l1tag:
        mismatchZ1 += 1
    elif abs(ev.LepZ2_mcMatchId) !=l2tag:
        mismatchZ2 += 1

print total, allGood, hasFake, mismatchZ1, mismatchZ2

