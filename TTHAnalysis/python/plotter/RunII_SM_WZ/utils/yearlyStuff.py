lumi = {
    2016: 35.9,
    2017: 41.5,
    2018: 59.8,
    "runII": 137.1,
}
prefiringTrees = {
    2016    : '--FMCs {P}/trigger_prefiring/',
    2017    : '--FMCs {P}/trigger_prefiring/',
    2018    : '--FMCs {P}/trigger_prefiring/',
    "runII" : '--FMCs {P}/trigger_prefiring/',
}
prefiringWeights = {
    2016    : '*weight_PrefiringJets*weight_PrefiringPhotons',
    2017    : '*weight_PrefiringJets*weight_PrefiringPhotons',
    2018    : '*weight_PrefiringJets*weight_PrefiringPhotons',
    "runII" : '*weight_PrefiringJets*weight_PrefiringPhotons',
}
pileupTrees = {
    2016    : '',
    2017    : '',
    2018    : '',
    "runII" : '',
#    2016: '--FMCs {P}/pileUpWeight/',
#    2017: '--FMCs {P}/pileUpWeight/',
#    2018: '--FMCs {P}/pileUpWeight/',
}
pileupWeights = {
    2016    : 'puWeight',
    2017    : 'puWeight',
    2018    : 'puWeight',
    "runII" : 'puWeight',
}
triggerTrees = {
    2016    : '--Fs {P}/trigger_2016/',
    2017    : '--Fs {P}/trigger_2017/',
    2018    : '--Fs {P}/trigger_2018/',
    "runII" : '--Fs {P}/trigger/',
}

