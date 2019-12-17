from CMGTools.TTHAnalysis.treeReAnalyzer import *
import ROOT 
from keras import models 
import copy

class MVAApplicationFromKeras: 
    def __init__(self, file_name, theVars, theOutput, dm = []):
	self.branches = []
	for d in dm:
        	self.branches.append(theOutput +"_" + str(dm))
	self.outputbranch = theOutput
        self.model    = models.load_model( file_name )
	self.vars     = theVars
	self.dm       = dm

    def listBranches(self):
        return self.branches[:]

    def __call__(self,event):
        self.allret = {}
	for k in self.branches:
        	self.allret[k] = -999
        self.doMVA(event)
        return self.allret
    
    def doMVA(self, event):
	#Can be automated but I lack a lot of the input
	x = []
	for v in self.vars:
		if not(hasattr(event, v)): print "WARNING: No variable %s in event!"%v
		x.append(getattr(event, v))
	for d in self.dm:
		y = copy.copy(x)
		y.append(d)
		y = np.asarray(y, dtype=float)
		y = y.reshape((1,len(y)))
		self.allret[theOutput +"_" + str(dm)]= float( self.model.predict(y) )
        return 1	
