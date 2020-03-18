# COMPONENT CREATOR
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

# ----------------------------- 2017 pp run  ----------------------------------------

json = '/afs/cern.ch/cms/CAF/CMSCOMM/COMM_DQM/certification/Collisions17/5TeV/ReReco/Cert_306546-306826_5TeV_EOY2017ReReco_Collisions17_JSON.txt'

# ----------------------------- Run2017F 14Dec2018 ----------------------------------------
SingleMuon_Run2017G_17Nov2017 = kreator.makeMyPrivateDataComponent("SingleMuon_Run2017G","/SingleMuon/jrgonzal-data5TeV_22nov2019_SingleMuon_Run2017G-17Nov2017-v1-e6071589c1d4feaedf45b2e5392eb06a/USER", "PRIVATE", ".*root", "phys03", json, None, [], [],True)
DoubleMuon_Run2017G_17Nov2017 = kreator.makeMyPrivateDataComponent("DoubleMuon_Run2017G","/DoubleMuon/jrgonzal-data5TeV_22nov2019_DoubleMuon_Run2017G-17Nov2017-v1-e6071589c1d4feaedf45b2e5392eb06a/USER", "PRIVATE", ".*root", "phys03", json, None, [], [],True)
HighEGJet_Run2017G_17Nov2017 = kreator.makeMyPrivateDataComponent("HighEGJet_Run2017G","/HighEGJet/jrgonzal-data5TeV_22nov2019_HighEGJet_Run2017G-17Nov2017-v2-e6071589c1d4feaedf45b2e5392eb06a/USER", "PRIVATE", ".*root", "phys03", json, None, [], [],True)

dataSamples_Run2017G = [SingleMuon_Run2017G_17Nov2017, DoubleMuon_Run2017G_17Nov2017, HighEGJet_Run2017G_17Nov2017]


# ---------------------------------------------------------------------

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
