# COMPONENT CREATOR
from CMGTools.RootTools.samples.ComponentCreator import ComponentCreator
kreator = ComponentCreator()

# ----------------------------- 2017 pp run  ----------------------------------------

json = '/nfs/fanae/user/folgueras/utils/Cert_306546-306826_5TeV_EOY2017ReReco_Collisions17_JSON.txt'

# ----------------------------- Run2017F 14Dec2018 ----------------------------------------
SingleMuon_Run2017H_17Nov2017 = kreator.makeDataComponentFromLocal("SingleMuon_Run2017H","/SingleMuon/jrgonzal-data5TeV_22nov2019_SingleMuon_Run2017G-17Nov2017-v1-e6071589c1d4feaedf45b2e5392eb06a/USER/", "/pool/ciencias/nanoAODv4/5TeV/nanoAODnoSkim/SingleMuon_Run2017G-17Nov2017-v1/", ".*root", json)
DoubleMuon_Run2017H_17Nov2017 = kreator.makeDataComponentFromLocal("DoubleMuon_Run2017H","/DoubleMuon/jrgonzal-data5TeV_22nov2019_DoubleMuon_Run2017G-17Nov2017-v1-e6071589c1d4feaedf45b2e5392eb06a/USER", "/pool/ciencias/nanoAODv4/5TeV/nanoAODnoSkim/DoubleMuon_Run2017G-17Nov2017-v1/", ".*root", json)
HighEGJet_Run2017H_17Nov2017 = kreator.makeDataComponentFromLocal("HighEGJet_Run2017H","/HighEGJet/jrgonzal-data5TeV_22nov2019_HighEGJet_Run2017G-17Nov2017-v2-e6071589c1d4feaedf45b2e5392eb06a/USER", "/pool/ciencias/nanoAODv4/5TeV/nanoAODnoSkim/HighEGJet_Run2017G-17Nov2017-v2/", ".*root", json)

dataSamples_Run2017H_17Nov2017 = [SingleMuon_Run2017H_17Nov2017, DoubleMuon_Run2017H_17Nov2017, HighEGJet_Run2017H_17Nov2017]


# ---------------------------------------------------------------------

if __name__ == "__main__":
    from CMGTools.RootTools.samples.tools import runMain
    runMain(samples, localobjs=locals())
