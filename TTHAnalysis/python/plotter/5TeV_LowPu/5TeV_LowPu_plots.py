#!/usr/bin/env python
import sys
import re
import os
from optparse import OptionParser

lumi = 0.30432

submit = '{command}'

nCores = 4
P0 = "/nfs/fanae/user/cvico/Workspace/WZ_lowPU/FriendTrees/5TeV_Jul27"

TREESALL = " --F {P}/lepGood_fTrees --FMCs {P}/1_recleaning_v1 --Fs {P}/1_recleaning_v1_data --FMCs {P}/2_eventVars_mc --Fs {P}/2_eventVars_data"
TREESONLYSKIM = "-P "+P0


