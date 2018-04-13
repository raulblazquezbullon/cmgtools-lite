f = open("mca_3l_Test2017.txt","r")

samples = []
for line in f.readlines():
  words = line.split(":")
  if len(words) > 1:
    if "TChiWZ" in words[1]:
      samples.append("\"" + words[1][2:-1] + "\" ,")

print "[" + " ".join(samples) + "]"
