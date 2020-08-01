#!/usr/bin/env python
import sys
import re
import os
from optparse import OptionParser

parser = OptionParser(usage = "%prog [options]")

# Options
parser.add_option("-P", "--path", dest = "paths", type = "string", default = ".", help = "Specify the path in where to read the samples")
parser.add_option("-F", "--friendPath", dest = "friendpaths", type = "string", default = ".", help = "Specify the paths where friends are stored")
parser.add_option("-d", "--doWhat", dest = "doWhat", type = "string", default = "plot", help = "Specify what to do")
parser.add_option("-l", "--lumi", dest = "lumi", type = float, default = 0.22, help = "Specify the luminosity in fb^-1")
parser.add_option("-j", "--nCores", dest = "cores", type = int, default = 4, help = "Specify the number of cores")
parser.add_option("-S", "--Selection", dest = "Selection", type = "string", help = "Specify selection")

parser.add_option("-f", "--functions", dest = "Functions", type = "string", default = "5TeV_LowPu/functions5TeV_lowPu.cc", help = "File with cut functions defined")

(options, args) = parser.parse_args()

if __name__ == '__main__':
    
    TREES = options.paths
    FRIENDTREES = options.friendpaths
    
    CORETEXT = ' '.join([FRIENDTREES, TREES]) # Add paths to trees
    CORETEXT+= '-f -j {cores} -l {lumi}'.format(cores = options.cores, lumi = options.lumi) #Add lumi and cores
    CORETEXT+= '-L {functions}'.format(functions = options.Functions)
    RATIO = " --maxRatioRange 0.6 1.99 --ratioYNDiv 505"
    RATIO2 = " --showRatio --attachRatioPanel --fixRatioRange "
    LEGEND = " --legendColumns 3 --legendFontSoze 0.042"
    SPAM = " --noCms --topSpamSize 1.1 --lspam '#scale[1.1]{#bf{CMS}} #scale[0.9]{#it{Preliminary}}' -- rspam '%(options.lumi)(13 TeV)"
    if options.dowhat == "plots": CORE += RATIO+RATIO2+LEGEND+LEGEND2+SPAM+" --showMCError --rebin4"
