# COMPONENT CREATOR
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

# ----------------------------- 2017 pp run  ----------------------------------------

json = '/nfs/fanae/user/folgueras/utils/Cert_306546-306826_5TeV_EOY2017ReReco_Collisions17_JSON.txt'

# ----------------------------- Run2017F 14Dec2018 ----------------------------------------
SingleMuon_Run2017H_17Nov2017 = kreator.makePrivateDataComponent("SingleMuon_Run2017H_17Nov2017", "/pool/ciencias/nanoAODv4/5TeV/nanoAODnoSkim//Run2017F-Nano14Dec2018-v1/NANOAOD", "CMS", ".*root", json)
DoubleMuon_Run2017H_17Nov2017 = kreator.makePrivateDataComponent("DoubleMuon_Run2017H_17Nov2017", "/pool/ciencias/nanoAODv4/5TeV/nanoAODnoSkim//Run2017F-Nano14Dec2018-v1/NANOAOD", "CMS", ".*root", json)
HighEGJet_Run2017H_17Nov2017 = kreator.makePrivateDataComponent("HighEGJet_Run2017H_17Nov2017", "/pool/ciencias/nanoAODv4/5TeV/nanoAODnoSkim//Run2017F-Nano14Dec2018-v1/NANOAOD", "CMS", ".*root", json)

dataSamples_Run2017H_17Nov2017 = [SingleMuon_Run2017H_17Nov2017, DoubleMuon_Run2017H_17Nov2017, HighEGJet_Run2017H_17Nov2017]


# ---------------------------------------------------------------------

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
