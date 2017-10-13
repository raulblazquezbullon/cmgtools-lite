tf = open("TChiWZ.txt")
xf = open("../xsec/xsec_ChiNeu.txt")

masses = []
xsecs = []

for line in xf.readlines():
  words = line.split(":")
  masses.append(int(words[0]))
  xsecs.append(float(words[1]))


def getXSec(mass):
  for i in range(len(masses)):
    if mass == masses[i]:
      return xsecs[i]
  return -12345  

base = "_[MASS1]_[MASS2]+ : [NAME] : [XSEC]*0.10099/1000 ; Label=\"LL ([MASS1]/[MASS2]) TE\",FakeRate=\"susy-ewkino/3lfor2017Tests/fakerate_standard_central.txt\,susy-ewkino/3lfor2017Tests/fakerate_load_isprompt.txt\""

for line in tf.readlines():
  words = line.split(":")
  xsec = getXSec(int(words[0][:-1]))
  tbase = base.replace("[MASS1]",words[0][:-1]).replace("[MASS2]",words[1][1:-1]).replace("[XSEC]",str(xsec)).replace("[NAME]",words[2][:-1])
  print tbase


