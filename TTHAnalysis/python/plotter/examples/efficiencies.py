import ROOT
from optparse import OptionParser
parser = OptionParser(usage="%prog [options] nTotDat nPassDat nTotMC nPassMC")
parser.add_option("-c", "--cl", dest="cl",  type="float", default=0.68,  help="Confidence level of the interval");
parser.add_option("-s", "--systematics", dest="systematics", default=False, action="store_true", help="Compute SF + systematics in the SF")
(options, args) = parser.parse_args()


theEffCalculator = ROOT.TEfficiency()
nTotDat, nPassDat, nTotMC, nPassMC = float(args[0]), float(args[1]), float(args[2]), float(args[3])

dataEff    = nPassDat/nTotDat
dataEffLow = theEffCalculator.ClopperPearson(nTotDat,nPassDat, options.cl, False)
dataEffUp  = theEffCalculator.ClopperPearson(nTotDat,nPassDat, options.cl, True)

MCEff    = nPassMC/nTotMC
MCEffLow = theEffCalculator.ClopperPearson(nTotMC,nPassMC, options.cl, False)
MCEffUp  = theEffCalculator.ClopperPearson(nTotMC,nPassMC, options.cl, True)

print "MC efficiency: %1.3f (+ %1.3f - %1.3f)"%(MCEff, MCEffUp-MCEff, MCEff-MCEffLow)
print "Data efficiency: %1.3f (+ %1.3f - %1.3f) (stat.) +/- %1.3f (MC)"%(dataEff, dataEffUp-dataEff, dataEff-dataEffLow, abs(dataEff-MCEff))


if options.systematics:
  SF = dataEff/MCEff
  SFMCUp = dataEff/MCEffLow
  SFMCLow = dataEff/MCEffUp
  SFDataUp = dataEffUp/MCEff
  SFDataLow = dataEffLow/MCEff
  print "Data/MC SF: %1.3f (+ %1.3f - %1.3f) (stat. data) (+%1.3f -%1.3f) (stat. MC)"%(SF, SFDataUp-SF, SF - SFDataLow, SFMCUp - SF,  SF - SFMCLow)

#If we don't do this the garbage collector of python goes crazy
theEffCalculator = 0
