
def declareOutput(module, wrappedOutputTree, branchList):
    '''
     * wrappedOutputTree is an "OutputTree" object defined in: 
       $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/framework/output.py
     * The "branch" method works as follows:
       branch(self, name, rootBranchType, n=1, lenVar=None, title=None,limitedPrecision=False)
    '''
    for b in branchList:
        if not isinstance(b,tuple):
            wrappedOutputTree.branch(name = b, rootBranchType = "F")
        elif len(b) == 2:
            wrappedOutputTree.branch(name = b[0],rootBranchType = b[1])
        elif len(b) == 3:
            wrappedOutputTree.branch(name = b[0], rootBranchType = b[1], n = b[2])
        elif len(b) == 4:
            wrappedOutputTree.branch(name = b[0], rootBranchType = b[1], n = b[2], lenVar= b[3])
        else: 
            raise RuntimeError("Can't branch %r" % b)
    module.wrappedOutputTree = wrappedOutputTree

def writeOutput(module, outputs):
    wrappedOutputTree = module.wrappedOutputTree
    for k,v in outputs.iteritems():
        wrappedOutputTree.fillBranch(k, v) 
    
