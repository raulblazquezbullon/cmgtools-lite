from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module


class datasetNamer( Module ):
    def __init__(self):
        pass
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        self.wrappedOutputTree.branch('nDatasetName','i')
        self.wrappedOutputTree.branch('DatasetName_name','b', lenVar='nDatasetName')

    def analyze(self, event):
        self.wrappedOutputTree.fillBranch('nDatasetName', self._nDatasetName)
        self.wrappedOutputTree.fillBranch('DatasetName_name', self._DatasetName_name)
        return True
    
    def initComponent(self, component):
        self._DatasetName_name=[ord(x) for x in component.dataset]
        self._nDatasetName=len(self._DatasetName_name)


datasetName = lambda : datasetNamer()



