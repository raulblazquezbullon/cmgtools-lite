from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

class dataTagger( Module ):
    def __init__(self):
        pass
    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.wrappedOutputTree = wrappedOutputTree
        self.wrappedOutputTree.branch('isData','i')
    def analyze(self, event):
        self.wrappedOutputTree.fillBranch('isData', self._isData)
        return True
    def initComponent(self, component):
        if component.dataset.split('/')[-1] == 'USER': 
            # we don't have a handle
            if component.dataset.split('/')[1] in ['DoubleMuon', 'MuonEG', 'SingleMuon', 'DoubleEG', 'EGamma', "SingleElectron"]:
                self._isData=True
            else:
                self._isData=False
        else: 
            if 'SIM' in component.dataset.split('/')[-1]:
                self._isData=False
            else:
                self._isData=True


dataTag = lambda : dataTagger()
