import os, sys

towrite = """weight : Alt$(LHEPdfWeight[{i}],1)
alt-norm : Alt$(LHEPdfSumw_[{i}]/LHEScaleSumw_[4],1)"""

nweights  = 103
outfolder = "./frs-pdfs"

if not os.path.isdir(outfolder):
    os.system("mkdir -p " + outfolder)

for iW in range(nweights):
    with open(outfolder + "/fr-pdf_{i}.txt".format(i = iW), "w") as outF:
        outF.write(towrite.format(i = iW))
