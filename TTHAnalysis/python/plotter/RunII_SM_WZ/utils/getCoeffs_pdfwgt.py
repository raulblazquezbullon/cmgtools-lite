#Minimodule to get polarization coefficients for W and Z from fTrees
import ROOT
from coeffsHelper import*

#Config options, likely not worth to add a proper parser

fileName = ["/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2017_unSkimmed_estructure/bosonPolarizationGEN/evVarFriend_WZTo3LNu_pow.root","/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_unSkimmed_estructure/bosonPolarizationGEN/evVarFriend_WZTo3LNu_pow_part0.root", "/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_unSkimmed_estructure/bosonPolarizationGEN/evVarFriend_WZTo3LNu_pow_part1.root"]
friendName = ["/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2017_unSkimmed//WZTo3LNu_pow.root","/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_unSkimmed//WZTo3LNu_pow_part0.root","/pool/ciencias/HeppyTrees/RA7/nanoAODv5_2018_unSkimmed//WZTo3LNu_pow_part1.root"]


varTags   = ["Pol_[PDFID]_W_RunII_nondressed", "Pol_[PDFID]_Z_RunII_nondressed" , "Pol_[PDFID]_WP_RunII_nondressed", "Pol_[PDFID]_WM_RunII_nondressed" , "Pol_[PDFID]_ZP_RunII_nondressed", "Pol_[PDFID]_ZM_RunII_nondressed"]
lumi = "137.2 fb^{-1}"

treeName = "sf/t"
treeVars  = ["cos_genThetaWDn_HE","cos_genThetaZDn_HE","cos_genThetaWDn_HE","cos_genThetaWDn_HE","cos_genThetaZDn_HE","cos_genThetaZDn_HE"] #["genThetaZ_CS","charge*genThetaW_CS", "genThetaZ_CS","genThetaZ_CS","charge*genThetaW_CS", "charge*genThetaW_CS"]#,"charge*cos(genThetaWDn_HE_CM)","cos(genThetaZDn_HE_CM)","cos(genThetaZDn_HE_CM)"]
#treeVars  = ["cos_genThetaWDn_CS", "cos_genThetaZDn_CS","cos_genThetaWDn_CS","cos_genThetaWDn_CS","cos_genThetaZDn_CS","cos_genThetaZDn_CS"]
baseCut   = "status == -1 && mll_3l_gen >= 60 &&  mll_3l_gen <= 120 && LHEPdfWeight[0] >= 0.1"
fiducialCut = "status == -1 && mll_3l_gen >= 75 &&  mll_3l_gen <= 105 && genLepZ1_eta <= 2.4  && genLepZ2_eta <= 2.4 && genLepW_eta <= 2.4 && genLepZ2_pt >= 10 && genLepZ1_pt >= 25 && genLepW_pt >= 25" 
extracuts = ["", ""," && charge==1", " && charge==-1", " && charge==1", " && charge==-1"]
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
for pdfid in range(0,31):
  for i in range(len(treeVars)):
    print treeVars[i], varTags[i].replace("PDFID", str(pdfid))
    theTree.Draw("%s >> %s(20,-1.,1.)"%(treeVars[i],varTags[i].replace("PDFID", str(pdfid))), "("+baseCut + extracuts[i]+")*LHEPdfWeight[PDFID]/LHEPdfWeight[0]".replace("PDFID", str(pdfid)))
    theTree.Draw("%s*%s >> %s_2(20,0.,1.)"%(treeVars[i],treeVars[i],varTags[i].replace("PDFID", str(pdfid))), "("+baseCut + extracuts[i]+")*LHEPdfWeight[PDFID]/LHEPdfWeight[0]".replace("PDFID", str(pdfid)))
    theTree.Draw("%s >> %s_fidu(20,-1.,1.)"%(treeVars[i],varTags[i].replace("PDFID", str(pdfid))), "("+fiducialCut + extracuts[i]+")*LHEPdfWeight[PDFID]/LHEPdfWeight[0]".replace("PDFID", str(pdfid)))

    theObjs.append(coeffs(ROOT.gDirectory.Get(varTags[i].replace("PDFID", str(pdfid))), ROOT.gDirectory.Get(varTags[i].replace("PDFID", str(pdfid)) + "_2"), ROOT.gDirectory.Get(varTags[i].replace("PDFID", str(pdfid)) + "_fidu"), "Z" in varTags[i], varTags[i].replace("[PDFID]", str(pdfid)), lumi))

#Fitting plus rebasing
for o in theObjs:
    o.load()

coeffs = []
for o in theObjs:
    if drawControlPlots: o.doControl()
    if doReport: o.doReport()
    coeffs.append(o.self.coefFit)

fOv = [i[0] for i in coeffs]
fLv = [i[1] for i in coeffs]
fRv = [i[2] for i in coeffs]
fLRv= [i[1] - i[2] for i in coeffs]

print fOv, fLv, fRv, fLRv

print "fO in %1.3f %1.3f"%(sorted(fOv)[4], sorted(fOv)[-5])
print "fL in %1.3f %1.3f"%(sorted(fLv)[4], sorted(fLv)[-5])
print "fR in %1.3f %1.3f"%(sorted(fRv)[4], sorted(fRv)[-5])
print "fLR in %1.3f %1.3f"%(sorted(fLRv)[4], sorted(fLRv)[-5])

