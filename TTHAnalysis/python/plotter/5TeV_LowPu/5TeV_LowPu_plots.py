#!/usr/bin/env python
import sys
import re
import os
from optparse import OptionParser

parser = OptionParser(usage = "%prog [options]")

# Options
parser.add_option("-P", "--path", dest = "paths", type = "string", default = ".", help = "Specify the path in where to read the samples")
(options, args) = parser.parse_args()

print (options.paths)
