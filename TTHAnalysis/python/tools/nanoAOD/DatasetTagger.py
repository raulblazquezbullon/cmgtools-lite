from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

class datasetTagger( Module ):
    def __init__(self):
        self._tag  = 0 
        self._xsec = None
        
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        # Always tag the dataset
        self.wrappedOutputTree = wrappedOutputTree
        self.wrappedOutputTree.branch('datatag','I')
        self.wrappedOutputTree.branch('nDatasetName','i')
        self.wrappedOutputTree.branch('DatasetName_name','b', lenVar = 'nDatasetName')
        # This branch only makes sense for MC
        if self._xsec:
            self.wrappedOutputTree = wrappedOutputTree
            self.wrappedOutputTree.branch('xsec','F')

    def analyze(self, event):
        self.wrappedOutputTree.fillBranch('datatag', self._tag)
        self.wrappedOutputTree.fillBranch('DatasetName_name', self._datasetname)
        if self._xsec:
          self.wrappedOutputTree.fillBranch('xsec', self._xsec)
        return True

    def initComponent(self, component):
        ''' This method is called before analyze '''
        self._tag = 0 # For MC
        
        compname = getattr(component, 'name', None)
        self.lendat = len(compname)
        self._datasetname = [ord(x) for x in compname]

        # Messy but still works
        if "Muon"       in compname: self._tag = 1
        if "DoubleMuon" in compname: self._tag = 2
        if "SingleMuon" in compname: self._tag = 3
        if "EGamma"     in compname: self._tag = 4
        if "MuonEG"     in compname: self._tag = 5
        if ("MET" in compname or "Jet" in compname) and "Run" in compname: self._tag = 6


        if self._tag == 0:
          self._xsec = getattr(component, 'xSection', None)
        
        return True

datasetTag = lambda : datasetTagger()
