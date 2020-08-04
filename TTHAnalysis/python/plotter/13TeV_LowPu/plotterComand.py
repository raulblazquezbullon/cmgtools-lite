#!/usr/bin/env python
import sys
import re
import os 
import warnings
from optparse import OptionParser


# This is a macro made for getting the command used to do
# the plotting


p0 = "/pool/ciencias/nanoAODv6/lowPu2017/2020_07_21_postProc"

parser = OptionParser(usage = "%prog [options]")

parser.add_option("-P", "--path", dest = "path", type = "string", default = P0, help = "Path where the postproc is storaged")
parser.add_option("--fTree", dest = "fTree", type = "string", default = P0, help = "Path where the friend-trees are storaged" )



(options, args) = parser.parse_args()

