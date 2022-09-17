
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
import os
kreator = ComponentCreator()
#json = os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/cfg/Cert_Collisions2022_355100_357550_Golden.json" 
json = os.environ["CMSSW_BASE"]+"/src/CMGTools/TTHAnalysis/cfg/Cert_Collisions2022_356309_356615_Golden.json"


MuonEG_Run2022_BCD = kreator.makeDataComponentFromLocal('MuonEG', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/MuonEG/', '', '.*root', 2022, [], json=json) 

MuonEG = [MuonEG_Run2022_BCD]

EGamma_Run2022_BCD = kreator.makeDataComponentFromLocal('EGamma', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/EGamma/', '', '.*root', 2022, [], json=json) 

EGamma = [EGamma_Run2022_BCD]

SingleMuon_Run2022_BCD = kreator.makeDataComponentFromLocal('SingleMuon', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/SingleMuon/', '', '.*root', 2022, [], json=json) 

SingleMuon = [SingleMuon_Run2022_BCD]

DoubleMuon_Run2022_BCD = kreator.makeDataComponentFromLocal('DoubleMuon', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/DoubleMuon/', '', '.*root', 2022, [], json=json) 

DoubleMuon = [DoubleMuon_Run2022_BCD]

Muon_Run2022_BCD = kreator.makeDataComponentFromLocal('Muon', '', '/pool/phedex/nanoAODv10/prev10/ttbar13p6/Muon/', '', '.*root', 2022, [], json=json)

Muon = [Muon_Run2022_BCD]

dataSamples_Runs = DoubleMuon + SingleMuon + EGamma + MuonEG + Muon
#dataSamples_Runs = SingleMuon
dataSamples = dataSamples_Runs 

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
