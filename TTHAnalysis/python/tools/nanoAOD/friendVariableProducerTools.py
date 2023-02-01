def declareOutput(module, wrappedOutputTree, branchList):
    '''
     * wrappedOutputTree is an "OutputTree" object defined in: 
       $CMSSW_BASE/src/PhysicsTools/NanoAODTools/python/postprocessing/framework/output.py
     * The "branch" method works as follows:
       branch(self, name, rootBranchType, n=1, lenVar=None, title=None,limitedPrecision=False)
    '''
    for b in branchList:
        if not isinstance(b,tuple):
            wrappedOutputTree.branch(b, "F")
        elif len(b) == 2:
            wrappedOutputTree.branch(b[0], b[1])
        elif len(b) == 4:
            wrappedOutputTree.branch(b[0], b[1], lenVar=b[3])
        else: 
            raise RuntimeError("Can't branch %r" % b)
    module.wrappedOutputTree = wrappedOutputTree

def writeOutput(module, outputs):
    wrappedOutputTree = module.wrappedOutputTree
    for k,v in outputs.items():
        wrappedOutputTree.fillBranch(k, v) 
    
