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
parser.add_option("-l", "--lumi", dest = "lumi", type = int, default = 0.22, help = "Specify the luminosity in fb^-1")
parser.add_option("-S", "--Selection", dest = "Selection", type = "string", help = "Specify selection")
(options, args) = parser.parse_args()
