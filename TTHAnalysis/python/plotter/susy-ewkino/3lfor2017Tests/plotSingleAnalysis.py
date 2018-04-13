import os, sys
from optparse import OptionParser
import ROOT, array
import numpy as np
import CMS_lumi


""" Example: WZ corridor comparison
python plotSingleAnalysis.py /pool/ciencias/userstorage/carlosec/cardsEWK2017_SOSComp/_Triggermmm12105/inFile12_10_5 --name1 ''  --mRange 90,410,-5,300 --pdir ./test  --fom 1_2 --mass1 'm_{#tilde{#chi}_{1}^{#pm}} = m_{#tilde{#chi}_{2}^{0}} [GeV]' --mass2 'm_{#tilde{#chi}_{1}^{0}} [GeV]' --ReBinFactor 5,5 --fillIt 1 --pdir /nfs/fanae/user/carlosec/www/ewkPlots2017/scans/_Triggermmm12105flav_mmm_m60 --log 1 """

#Parser input
pr = OptionParser(usage="%prog summary1 [options]")

#Model type, experimental labels
pr.add_option("-m"  , "--model"         , dest="modelName"       , type="string"      , default="TChiWZ" , help="Name of the physical model to compare")
pr.add_option( "--name1", dest = "Arg1" , type = "string", default = "SUS-16-034", help = "Identifier of first summary")
pr.add_option("--mass1"         , dest="mass1"       , type="string"      , default="m_{#tilde{#chi}_{1}^{#pm}} = m_{#tilde{#chi}_{2}^{0}} [GeV]" , help="First particle with mass relevant to the model (X-label of the graph)")
pr.add_option("--mass2"         , dest="mass2"       , type="string"      , default="m_{#tilde{#chi}_{1}^{0}} [GeV]" , help="First particle with mass relevant to the model (X-label of the graph)")
pr.add_option("-l", "--luminosity"         , dest="theLumi"       , type="float"      , default="35.9" , help="Luminosity in inverse fb")
pr.add_option("-E", "--energy"         , dest="theEnergy"       , type="float"      , default="13" , help="Center of mass energy in TeV")

#Additional process text
pr.add_option("--Process", dest = "ProcessText", type="string", default = "pp #rightarrow #tilde{#chi}_{1}^{#pm}#tilde{#chi}_{2}^{0} #rightarrow WZ#tilde{#chi}^{0}_{1}#tilde{#chi}^{0}_{1}", help = "Process text to be printed over histogram")
pr.add_option("--ProcessSize", dest = "ProcessSize", type="float", default = 1., help = "Process text size to be printed over histogram")
pr.add_option( "--extraText", dest = "extraText", type = "string", default = "Preliminary", help = "Extra test to write, i.e., Preliminary")


pr.add_option( "--ext", dest = "exts", type = "string", default = ".pdf,.png,.eps", help = "Output formats of the plot")

#Rebinning input and plot range
pr.add_option( "-r", "--doReBin", dest = "doRebinning" , default = True, help = "Rebin Final histogram")
pr.add_option( "-b", "--ReBinFactor", dest = "Rebinning", type = "string", default = "25.,25.", help = "New width of the bins")
pr.add_option( "--mRange", dest = "massRange", type = "string", default = "87.5,712.5,-12.5,312.5", help = "Mass range for the plot, minX, maxX, minY, maxY")
pr.add_option( "--fillIt", dest = "fillIt", type = "int", default = 0, help = "Fill the gaps")

#Figure of merit
pr.add_option( "-f", "--fom", dest = "limitToCompare", type = "string", default = "Obs", help = "Figure of merit to compare between analysis: Obs, Exp")

#Output dir (needs to be created!!!)
pr.add_option( "-p","--pdir", dest = "outPath", type = "string", default = "./compare", help = "Path for the output plots")

#Do logarithmic plot
pr.add_option( "--log", dest = "log", type = int, default = 0, help = "Set z logarithmic scale")

#Verbosity level
pr.add_option( "-v","--verbose", dest = "verbose", type = int, default = 2, help = "Verbosity output")
(options, args) = pr.parse_args()

#Retrocompatibility
exts = options.exts.split(",")
Rebinning = [float(a) for a in options.Rebinning.split(",")]
massRange = [float(a) for a in options.massRange.split(",")]
modelName = options.modelName
mass1 = options.mass1
mass2 = options.mass2
theLumi = options.theLumi
theEnergy = options.theEnergy
ProcessText = options.ProcessText
ProcessSize = options.ProcessSize
Arg1 = options.Arg1
doRebinning = options.doRebinning
outPath = options.outPath
extraText = options.extraText
nBinsX = int((massRange[1]-massRange[0])/Rebinning[0]+1)
nBinsY = int((massRange[3]-massRange[2])/Rebinning[1]+1)
limitToCompare = options.limitToCompare
verbosity = options.verbose

class summaryReader():
  def __init__(self, path, name, mode = "Build", rebin = False, rebinFactor = 1, outpath = "./testhisto.root", doWhat = "Plot"):
    self.name   = name
    self.massPoints = []
    self.outpath = outpath
    if mode == "Build":
      self.inFileName = path
      self.getTextLines()
      self.buildMassPoints()
      if rebin == True:
        self.rebintoWidth(rebinFactor[0],rebinFactor[1])
      self.hCompare = ROOT.TH2F("hCompare", modelName, nBinsX, massRange[0]-Rebinning[0]/2., massRange[1]+Rebinning[0]/2., nBinsY, massRange[2]-Rebinning[1]/2., massRange[3]+Rebinning[1]/2.)
      self.hCompare.SetXTitle(mass1)    
      self.hCompare.SetYTitle(mass2)
      for point in self.massPoints:
        self.hCompare.Fill(point.mass1,point.mass2, point.val)
      if doWhat == "Plot":
        self.plotComparison()

  def addMassPoint(self, massPoint):
    self.massPoints.append(massPoint)

  def getMassPoint(self, masses):
    pointNumber = 0
    for point in self.massPoints:
      if point.mass1 == masses[0] and point.mass2 == masses[1]:
        retPoint = point
        pointNumber += 1
    if pointNumber == 0:
      if verbosity > 0: print "WARNING: NO POINT OF MASSES %s"%masses + " IN SUMMARY %s"%self.name
      return massPoint(self,masses+[9999,9999,9999,9999,9999],self.massPoints[0].mode)

    if pointNumber == 1:
      return retPoint
    if pointNumber > 1:
      if verbosity > 0: print "WARNING: MORE THAN ONE POINT OF MASSES %s %s"%masses + " IN SUMMARY %s"%self.name
      return massPoint(self,masses+[9999,9999,9999,9999,9999],self.massPoints[0].mode) 

  #BUILD ONLY#
  def getTextLines(self):
    """ Get Mass + Limits values from summary """
    self.inFile = open(self.inFileName, "r")
    self.lines  = self.inFile.readlines()
  def buildMassPoints(self):
    for line in self.lines:
      if line[0] == "#": continue
      properValues = [a.replace(" ", "") for a in line.split(":")]
      if properValues[0] == str(-1000): properValues[:2] = [str(125),str(200)]
      self.addMassPoint(massPoint(self, properValues, limitToCompare))
  
  #REBINNING
  def rebintoWidth(self, newbinwidthX, newbinwidthY):
    minXmass = min([x.mass1 for x in self.massPoints])
    maxXmass = max([x.mass1 for x in self.massPoints])
    minYmass = min([x.mass2 for x in self.massPoints])
    maxYmass = max([x.mass2 for x in self.massPoints])
    xmassVals = np.arange(minXmass-newbinwidthX/2.,maxXmass+newbinwidthX, newbinwidthX)
    ymassVals = np.arange(minYmass-newbinwidthY/2.,maxYmass+newbinwidthY, newbinwidthY)
    newPoints = []
    for i in range(len(xmassVals)-1):
      if verbosity > 1: print "Getting first histogram..." + str(i*1./len(xmassVals)*95.) + " \%"
      for j in range(len(ymassVals)-1):
        listPoints = []
        for point in self.massPoints:
          if point.mass1 > xmassVals[i] and point.mass1 < xmassVals[i+1] and point.mass2 > ymassVals[j] and point.mass2 < ymassVals[j+1]: 
            listPoints.append(point)
        if len(listPoints) > 0:
          newVal = sum([p.val for p in listPoints])/(1.*len(listPoints))
          if newVal > 1: newKey = "g."
          elif newVal < 1: newKey = "r."
          elif newVal == 1: newKey = "y."
          newPoints.append(massPoint(self,[xmassVals[i] + newbinwidthX/2., ymassVals[j] + newbinwidthY/2.], "Compare", [newVal, newKey]))
    self.massPoints = newPoints

  def getClosestValues(self, i , j , thedistance):
    distance = thedistance
    listD = [999]
    listVal = []
    isSignalPoint = False
    isBackPoint = False
    if (Rebinning[1]*j-Rebinning[0]*i) < 75:
      isSignalPoint = True
      mLen = 2
    elif (((125-massRange[0])/(1.*Rebinning[0])-i)**2 + ((200-massRange[2])/(1.*Rebinning[1])-j)**2) < 3**2:
      isBackPoint = True
      mLen = 1

    if not(isSignalPoint or isBackPoint): return -1
    if not(self.hCompare.GetBinContent(i+1,j+1) == 0): return -1
    for k in range(nBinsX):
      for l in range(nBinsY):
        if (Rebinning[0]*(k-i))**2 + (Rebinning[1]*(j-l))**2 < (distance*Rebinning[0])**2:
            if self.hCompare.GetBinContent(k+1,l+1) == 0: continue
            listD.append( ((k-i)**2 + (j-l)**2)**0.5)
            listVal.append(self.hCompare.GetBinContent(k+1,l+1))
    listD = np.array(listD)
    listVal = np.array(listVal)
    if len(listD) > mLen or min(listD) == 0 : 
      listD = listD[1:]
      if len(listD) == 1: return listVal[0]
      else: return np.exp(sum(np.log(listVal)/(2**listD)/sum(1/(2**listD))))
    else : return self.getClosestValues(i,j,distance+1)

  def fillTheGaps(self):
    xValues = np.linspace(massRange[0],  massRange[1], nBinsX+1)
    yValues = np.linspace(massRange[2],  massRange[3], nBinsY+1)
    self.tempHisto = self.hCompare
    self.prettyDraw = self.hCompare.Clone("pretty")
    for i in range(nBinsX):
      if verbosity > 1: print "Filling gaps..." + str(i*1./nBinsX*100.) + " \%"
      for j in range(nBinsY):        
        newVal = self.getClosestValues(i,j,2)
        if not(newVal == -1): self.prettyDraw.SetBinContent(i+1,j+1,newVal)



  #PLOTTING
  def plotComparison(self):   
    ROOT.gROOT.SetBatch(True)
    canvas = ROOT.TCanvas("c", "c", 800, 600)
    canvas.cd()    
    if options.log:
      pad = canvas.SetLogz(1)
    ROOT.gStyle.SetOptStat(0);
    ROOT.gStyle.SetPaintTextFormat("4.2f")
    ROOT.gStyle.SetOptTitle(0)
    ROOT.gPad.Update()
    canvas.SetTickx(1)
    canvas.SetTicky(1)
    canvas.SetRightMargin (0.19)
    canvas.SetTopMargin   (0.08)
    canvas.SetLeftMargin  (0.14)
    canvas.SetBottomMargin(0.14)



    self.hCompare.GetXaxis().SetTitle(mass1)
    self.hCompare.GetYaxis().SetTitle(mass2)
    self.hCompare.GetZaxis().SetTitle("Events")
    
    self.hCompare.GetXaxis().SetNdivisions(205)
    self.hCompare.GetXaxis().SetLabelFont(42)
    self.hCompare.GetXaxis().SetLabelSize(0.035)  
    self.hCompare.GetXaxis().SetTitleFont(42)
    self.hCompare.GetXaxis().SetTitleSize(0.05)
    self.hCompare.GetXaxis().SetTitleOffset(1.2)

    self.hCompare.GetYaxis().SetNdivisions(205)
    self.hCompare.GetYaxis().SetLabelFont(42)
    self.hCompare.GetYaxis().SetLabelSize(0.035)
    self.hCompare.GetYaxis().SetTitleFont(42)
    self.hCompare.GetYaxis().SetTitleSize(0.05)
    self.hCompare.GetYaxis().SetTitleOffset(1.10)


    self.hCompare.GetZaxis().SetLabelFont(42)
    self.hCompare.GetZaxis().SetTitleFont(42)
    self.hCompare.GetZaxis().SetLabelSize(0.03)
    self.hCompare.GetZaxis().SetTitleSize(0.03)
    self.hCompare.GetZaxis().SetTitleOffset(1.7)
    self.hCompare.SetMinimum(0.1)
#    self.hCompare.SetMaximum(hCompare.)
    #4 Color Palette
    NRGBs = 5
    NCont = 255
    stops = array.array("d",[0.00, 0.34, 0.61, 0.84, 1.00])
    red   = array.array("d",[0.50, 0.50, 1.00, 1.00, 1.00])
    green = array.array("d",[0.70, 1.00, 1.00, 0.40, 0.00])
    blue  = array.array("d",[1.00, 0.60, 0.20, 0.40, 0.00])
    ROOT.TColor.CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont)
    ROOT.gStyle.SetNumberContours(NCont)
    canvas.cd()
    if options.fillIt:
      self.fillTheGaps()
      self.prettyDraw.Draw("colz")
    self.hCompare.Draw("samecolz")
    text = ROOT.TLatex(100, 270, ProcessText)#Properly do this one to resize with plot
    text.SetTextSize(0.050)
    text.Draw()

    textB = ROOT.TLatex(105, 215, "Background")#Properly do this one to resize with plot
    textB.SetTextSize(0.02)
    textB.Draw()

    ROOT.gPad.Update()
    palette = self.hCompare.GetListOfFunctions().FindObject("palette")
    palette.SetX1NDC(1.-0.18)
    palette.SetY1NDC(0.14)
    palette.SetX2NDC(1.-0.13)
    palette.SetY2NDC(1.-0.06)
    palette.SetLabelFont(42)
    palette.SetLabelSize(0.035)
    ROOT.gStyle.SetPaintTextFormat("4.1f")
    self.hCompare.Draw("SAMETEXT")
    CMS_lumi.writeExtraText = not(extraText == "")
    CMS_lumi.lumi_13TeV = "%.1f fb^{-1}" % theLumi
    CMS_lumi.extraText  = extraText
    CMS_lumi.lumi_sqrtS = theEnergy
    CMS_lumi.CMS_lumi(canvas, 4, 0, 0.05)
    for ext in exts:
      canvas.SaveAs(self.outpath + ext)

class massPoint():
  def __init__(self,summary, values, mode, comps =  False):
    """ Get different variables for each of the mass points"""
    self.summary      = summary
    self.dictVars     = {"Mass1": 0, "Mass2": 1, "pt12":2, "pt13":3, "pt23":4}    
    self.mass1        = float(values[self.dictVars["Mass1"]])
    self.mass2        = float(values[self.dictVars["Mass2"]])
    self.mode = mode

    if mode == "1_2":
      self.val     = float(values[self.dictVars["pt12"]])
    elif mode == "1_3":  
      self.val     = float(values[self.dictVars["pt13"]])
    elif mode == "2_3":
      self.val     = float(values[self.dictVars["pt23"]])
    elif mode == "Compare":
      self.val = comps[0]
      self.key = comps[1]



#Run the whole comparison
summary1 = summaryReader(args[0],Arg1,"Build", doRebinning, Rebinning, outPath, "Plot")

#summary2 = summaryReader(args[1],Arg2)
#summaryComp = summaryReader([summary1,summary2],Arg1+"_"+Arg2, "Compare", doRebinning, Rebinning, outPath)



#Pythonesque Extra plotting, for quick comparisons
#import matplotlib.pyplot as plt
#for x in summaryComp.massPoints:
#  plt.plot(x.mass1 , x.mass2, x.key )
#plt.savefig("034_IsZero.pdf")
#plt.show()
