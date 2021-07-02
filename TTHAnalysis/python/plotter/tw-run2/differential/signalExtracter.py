import ROOT as r
import warnings as wr
import sys, os, math, argparse
from copy import deepcopy
from multiprocessing import Pool

sys.path.append('{cmsswpath}/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/differential/'.format(cmsswpath = os.environ['CMSSW_BASE']))
import errorPropagator as ep
import beautifulUnfoldingPlots as bp
import varList as vl
import getLaTeXtable as tex

r.gROOT.SetBatch(True)

#===================================
def getXsecForSys(syst, thedict):
    data = deepcopy(thedict["data_obs"][""].Clone('data_%s'%syst))
    
    ttbar     = thedict['ttbar'  ][""]
    dy        = thedict['dy'     ][""]
    nonworz   = thedict['nonworz'][""]
    vvttbarv  = thedict['vvttv'  ][""]
    
    if syst in thedict['ttbar']:
        ttbar    = thedict['ttbar'][syst]

    if syst in thedict['dy']:
        dy       = thedict['dy'][syst]

    if syst in thedict['nonworz']:
        nonworz  = thedict['nonworz'][syst]

    if syst in thedict['vvttv']:
        vvttbarv = thedict['vvttv'][syst]

    data.Add(ttbar   , -1 )
    data.Add(dy      , -1 )
    data.Add(nonworz , -1 )
    data.Add(vvttbarv, -1 )
    
    return data

print(getXsecForSys(syst,thedict))
