from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection 

class Triggers( Module ):
    def __init__(self, label, filters):
        self.label = label 
        self.filters = filters
        self.triggers = {
            '2e' : {
                2016 : [
                    "HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_DoubleEle33_CaloIdL_GsfTrkIdVL",
                    "HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW"
                ],
                2017 : [
                    "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL",
                    "HLT_DoubleEle33_CaloIdL_MW",
                    "HLT_DoubleEle25_CaloIdL_MW",
                ],
                2018 : [
                    "HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL",
                    "HLT_DoubleEle25_CaloIdL_MW",
                ]
            },
            '2m': {
                2016 : [
                    "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL",
                    "HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL",
                    "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ",
                    "HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ",
                    "HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ",
                    "HLT_Mu27_TkMu8",
                    "HLT_Mu30_TkMu11"
                ],
                2017 : [
                    "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8", # from Run2017C
                    "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", # only Run2017B
                    "HLT_Mu37_TkMu27"
                ],
                2018 : [
                    "HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8",
                    "HLT_Mu37_TkMu27",
                ]

            },
            'em' : {
                2016 : [
                    "HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL",
                    "HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL",
                    "HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL",
                    "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL",
                    "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL",
                    "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL",
                    "HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_Mu30_Ele30_CaloIdL_GsfTrkIdVL",
                    "HLT_Mu33_Ele33_CaloIdL_GsfTrkIdVL"
                ],
                2017 : [
                    "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL",
                    "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_Mu27_Ele37_CaloIdL_MW",
                    "HLT_Mu37_Ele27_CaloIdL_MW"
                ],
                2018 : [
                    "HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ",
                    "HLT_Mu27_Ele37_CaloIdL_MW",
                    "HLT_Mu37_Ele27_CaloIdL_MW",
                ]
            },
            'ht' : {
                2016 : [
                    "HLT_PFHT125",
                    "HLT_PFHT200",
                    "HLT_PFHT250",
                    "HLT_PFHT300",
                    "HLT_PFHT350",
                    "HLT_PFHT400",
                    "HLT_PFHT475",
                    "HLT_PFHT600",
                    "HLT_PFHT650",
                    "HLT_PFHT800",
                    "HLT_PFHT900",
                ],
                2017 : [
                    "HLT_PFHT180",
                    "HLT_PFHT250",
                    "HLT_PFHT370",
                    "HLT_PFHT430",
                    "HLT_PFHT510",
                    "HLT_PFHT590",
                    "HLT_PFHT680",
                    "HLT_PFHT780",
                    "HLT_PFHT890",
                    "HLT_PFHT1050"
                ],
                2018 : [
                    "HLT_PFHT180",
                    "HLT_PFHT250",
                    "HLT_PFHT370",
                    "HLT_PFHT430",
                    "HLT_PFHT510",
                    "HLT_PFHT590",
                    "HLT_PFHT680",
                    "HLT_PFHT780",
                    "HLT_PFHT890",
                    "HLT_PFHT1050"
                ]
            },
            'met' : {
                2016 : [
                    "HLT_PFMET120_PFMHT90_IDTight",
                    "HLT_PFMET120_PFMHT100_IDTight",
                    "HLT_PFMET120_PFMHT110_IDTight",
                    "HLT_PFMET120_PFMHT120_IDTight",
                ],
                2017 : [
                    "HLT_PFMET120_PFMHT120_IDTight",
                    "HLT_PFMET120_PFMHT120_IDTight_PFHT60",
                ],
                2018 : [
                    "HLT_PFMET120_PFMHT120_IDTight",
                    "HLT_PFMET120_PFMHT120_IDTight_PFHT60",
                ]
            }
        }

    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree
        for k in self.triggers: 
            self.out.branch('%s_'%self.label + k,'I')

    def analyze(self, event):
        ret = {} 
        for chan in self.triggers:
            fires = False
            for path in self.triggers[chan][event.year]:
                if hasattr(event, path) and getattr(event,path): 
                    fires = True
                    break
            self.out.fillBranch( '%s_%s'%(self.label, chan), fires )
        return True
        
