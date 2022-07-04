#Minimodule to get polarization coefficients for W and Z from fTrees
import ROOT
from coeffsHelper import*

#Config options, likely not worth to add a proper parser

fileName = ["/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2017_unSkimmed_estructure/bosonPolarizationGEN/evVarFriend_WZTo3LNu_pow.root","/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_unSkimmed_estructure/bosonPolarizationGEN/evVarFriend_WZTo3LNu_pow_part0.root", "/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_unSkimmed_estructure/bosonPolarizationGEN/evVarFriend_WZTo3LNu_pow_part1.root"]
friendName = ["/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2017_unSkimmed//WZTo3LNu_pow.root","/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_unSkimmed//WZTo3LNu_pow_part0.root","/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_unSkimmed//WZTo3LNu_pow_part1.root"]


varTags   = [  "Pol_[PDFID]_ZM_RunII_nondressed"]
lumi = "137.2 fb^{-1}"

treeName = "sf/t"
treeVars  = ["cos_genThetaZDn_HE"]

 #["genThetaZ_CS","charge*genThetaW_CS", "genThetaZ_CS","genThetaZ_CS","charge*genThetaW_CS", "charge*genThetaW_CS"]#,"charge*cos(genThetaWDn_HE_CM)","cos(genThetaZDn_HE_CM)","cos(genThetaZDn_HE_CM)"]#treeVars  = ["cos_genThetaWDn_CS", "cos_genThetaZDn_CS","cos_genThetaWDn_CS","cos_genThetaWDn_CS","cos_genThetaZDn_CS","cos_genThetaZDn_CS"]
baseCut   = "status == -1 && mll_3l_gen >= 60 &&  mll_3l_gen <= 120 && LHEPdfWeight[0] >= 0.1"
fiducialCut = "status == -1 && mll_3l_gen >= 75 &&  mll_3l_gen <= 105 && genLepZ1_eta <= 2.4  && genLepZ2_eta <= 2.4 && genLepW_eta <= 2.4 && genLepZ2_pt >= 10 && genLepZ1_pt >= 25 && genLepW_pt >= 25" 
extracuts = [ " && charge==1", " && charge==-1"]
mode     = "quad"
drawControlPlots = True
doReport = True

#Let's run

theFiles = []
theTrees = []
theTree = ROOT.TChain(treeName)
theFTree= ROOT.TChain("Events")
for i,f in enumerate(fileName):
  #theFiles.append(ROOT.TFile(f, "READ"))
  #theTrees.append(theFiles[-1].Get(treeName))
  theTree.Add(f)
  theFTree.Add(friendName[i])

theTree.AddFriend(theFTree)
#Now create the histograms


theObjs = []


def doPlots(pdfid): #for pdfid in range(0,31):
  for i in range(len(treeVars)):
    print treeVars[i], varTags[i].replace("PDFID", str(pdfid))
    theTree.Draw("%s >> %s(20,-1.,1.)"%(treeVars[i],varTags[i].replace("PDFID", str(pdfid))), "("+baseCut + extracuts[i]+")*LHEPdfWeight[PDFID]/LHEPdfWeight[0]".replace("PDFID", str(pdfid)))
    theTree.Draw("%s*%s >> %s_2(20,0.,1.)"%(treeVars[i],treeVars[i],varTags[i].replace("PDFID", str(pdfid))), "("+baseCut + extracuts[i]+")*LHEPdfWeight[PDFID]/LHEPdfWeight[0]".replace("PDFID", str(pdfid)))
    theTree.Draw("%s >> %s_fidu(20,-1.,1.)"%(treeVars[i],varTags[i].replace("PDFID", str(pdfid))), "("+fiducialCut + extracuts[i]+")*LHEPdfWeight[PDFID]/LHEPdfWeight[0]".replace("PDFID", str(pdfid)))

    return coeffs(ROOT.gDirectory.Get(varTags[i].replace("PDFID", str(pdfid))), ROOT.gDirectory.Get(varTags[i].replace("PDFID", str(pdfid)) + "_2"), ROOT.gDirectory.Get(varTags[i].replace("PDFID", str(pdfid)) + "_fidu"), "Z" in varTags[i], varTags[i].replace("[PDFID]", str(pdfid)), lumi)

import os
from multiprocessing import Pool
from contextlib import closing
import time

with closing(Pool(32)) as p:
        print "Now running " + str(len(range(0,31))) + " commands using: " + str(32) + " processes. Please wait"
        retlist1 = p.map_async(doPlots, range(0,31), 1)
        while not retlist1.ready():
                print("Combine runs left: {}".format(retlist1._number_left ))
                time.sleep(1)
        retlist1 = retlist1.get()
        p.close()
        p.join()
        p.terminate()

theObjs = retlist1 
#Fitting plus rebasing
for o in theObjs:
    o.load()

coeffs = []
for o in theObjs:
    if drawControlPlots: o.doControl()
    if doReport: o.doReport()
    coeffs.append(o.coefFit)

fOv = [i[0] for i in coeffs]
fLv = [i[1] for i in coeffs]
fRv = [i[2] for i in coeffs]
fLRv= [i[1] - i[2] for i in coeffs]
fOO =sum(fOv)/len(fOv)
fLO =sum(fLv)/len(fOv)
fRO =sum(fRv)/len(fOv)
fLRO =sum(fLRv)/len(fOv)
fOp, fOm, fLp, fLm, fRp, fRm, fLRp, fLRm = 0,0,0,0,0,0,0,0

for i in range(len(fOv)):
  if fOv[i] >= fOO: fOp = (fOp**2 + (fOv[i]-fOO)**2)**0.5
  else: fOm = (fOm**2 + (-fOv[i]+fOO)**2)**0.5
  if fLv[i] >= fLO: fLp = (fLp**2 + (fLv[i]-fLO)**2)**0.5
  else: fLm = (fLm**2 + (-fLv[i]+fLO)**2)**0.5
  if fRv[i] >= fRO: fRp = (fRp**2 + (fRv[i]-fRO)**2)**0.5
  else: fOm = (fRm**2 + (-fRv[i]+fRO)**2)**0.5
  if fLRv[i] >= fLRO: fLRp = (fLRp**2 + (fLRv[i]-fLRO)**2)**0.5
  else: fLRm = (fLRm**2 + (-fLRv[i]+fLRO)**2)**0.5



print "fO in %1.5f %1.5f"%(fOm, fOp)
print "fL in %1.5f %1.5f"%(fLm, fLp)
print "fR in %1.5f %1.5f"%(fRm, fRp)
print "fLR in %1.5f %1.5f"%(fLRm, fLRp)

