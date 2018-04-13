import ROOT
from optparse import OptionParser


pr = OptionParser(usage="%prog input [options]")

#Plot directory. It has to exist previously!!!!
pr.add_option( "--pdir", dest = "outPath", type = "string", default = "./", help = "Path for the output text")
pr.add_option( "--ptcuts", dest = "ptcuts", action = "append", default = [], help = "Pt cuts list")


(options, args) = pr.parse_args()
print options.ptcuts

outPath = options.outPath

massPointList = []
class massPoint(object):
  def __init__(self, name, mass1, mass2, dtype = False):
    self.name = name
    if not(mass1 == ""):
      self.m1 = mass1
    if not(mass2 == ""):
      self.m2 = mass2
    self.values = []
    self.histos = []
    self.ptcuts = []
    self.histosCum = []
    self.ptcutsCum = []
    self.type = dtype
    massPointList.append(self)

  def getHistoValue(self,h,pt):
    pt1 = pt[0]
    pt2 = pt[1]
    return h.GetBinContent(h.FindBin(pt1,pt2))

  def getCumulativeHisto(self,histo):
    tempHisto = histo.Clone()
    for i in range(histo.GetNbinsX()+1):
      for j in range(histo.GetNbinsY()+1):
        if i<j:
          tempHisto.SetBinContent(i,j,0)
        else:
          tmpValue = 0
          for k in range(histo.GetNbinsX()+1):
            for l in range(histo.GetNbinsY()+1):
              if (k>= i) and (l>= j):
                tmpValue += histo.GetBinContent(k,l)
        tempHisto.SetBinContent(i,j,tmpValue)
    return tempHisto

  def updateValues(self):
    for h in self.histos:
      cutindex = h.GetName().split("_")[1:3]
      cutindex = [int(c)-1 for c in cutindex]
      hCum = self.getCumulativeHisto(h)
      for pt in self.ptcuts:
        self.values.append(self.getHistoValue(hCum, [eval(pt)[cutindex[0]], eval(pt)[cutindex[1]]]))
        self.histosCum.append(hCum)
        self.ptcutsCum.append(pt)


rootfile = ROOT.TFile.Open(args[0], "read")
listOfHists = list(rootfile.GetListOfKeys())
listOfHists = [key.GetName() for key in listOfHists]

#Fill mass points with list of histogram keys
print "___________Creating Mass Points Objects_________________"
for key in listOfHists:
  tempwords = key.split("_")
  words = []
  for word in tempwords:
     if len(word) > 0: words.append(word)
  if words[0] == "cut" or "lep" in words[0]: continue
  try: #First try with mass points
    m1, m2 = int(words[3]), int(words[4])
    found = False
    for point in massPointList:
      if point.m1 == m1 and point.m2 == m2:
        found = True
        point.histos.append(rootfile.Get(key))
    if not(found):
      tP = massPoint("%i_%i"%(m1,m2), m1,m2, "Signal")
      tP.histos.append(rootfile.Get(key))

  except ValueError: #Not signals
    newName = "_".join(words[3:])
    for point in massPointList:
      if point.name == newName:
        found = True
        point.histos.append(rootfile.Get(key))
    if not(found):
      if words[3] == "data": tP = massPoint(newName, -999,-999, "data")
      elif words[3] == "background": tP = massPoint(newName, -1000,-1000, "background")
      else: continue
      tP.histos.append(rootfile.Get(key))

print "These are the processes: ", [mP.name for mP in massPointList]
print "___________Getting histo Values______________"
i = 0
for mP in massPointList:
  mP.ptcuts= options.ptcuts
  if mP.name == "stack": continue
  #if i==10: continue
  mP.updateValues()
  if ( (i%(len(massPointList)/100)) == 0): print "Mass Point %i of %i"%(i,len(massPointList))
  i += 1
  
newFile = open(outPath, "w")
newFile.write("#" + ";".join([",".join(k) for k in options.ptcuts])+ "\n")
for mP in massPointList:
  newFile.write(":".join([str(mP.m1), str(mP.m2)] + [str(kap) for kap in mP.values]).replace(":", " : ") + "\n")

newFile.close()
