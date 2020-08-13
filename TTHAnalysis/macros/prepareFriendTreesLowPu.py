# -*- coding: UTF-8 -*-.
#!/usr/bin/env python


# ================ Imports
import os
import sys
import enum
import argparse
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)


# ================ Settings

FriendsPath = "/pool/phedexrw/userstorage/cmsstudents/cvico/WZ_LowPu/13TeV_Aug13"
prodName = "2020_07_21" # Falta comprobar este nombre
dataSamples = [ "SingleMuon", "DoubleMuon", "HighEGJet", "LowEGJet" ]
logsPath = FriendsPath + "/" + prodname + "/{y}/{step_prefix}/logs"
utilsPath = "/nfs/fanae/user/cvico/WorkSpace/WZ_LowPu/CMSSW_10_4_0/src/susyMaintenanceScripts/" 
friendFolders = {0 : "0_tags",
                 1 : "1_lepMerge",
                 2 : "2_recleaning",
                 3 : "3_triggers",
                 4 : "4_eventVars",
                # More steps yet to be implemented
                }
chunkSizes = {0 : 50000,
              1 : 100000,
              2 : 150000,
              3 : 200000
             }
minchunkbytes = 1000

class errs(enum.IntEnum):
    NoErr   = 0
    exist   = 1
    size    = 2
    entries = 3
    corrupt = 4


sampledict = {}

# Dictionary for samples
sampledict[2017] = {
    ### ttbar
    # Di-leptonic
    "TTTo2L2Nu"         :   ['Tree_TTTo2L2Nu_TuneCP5_ext1_0', 'Tree_TTTo2L2Nu_TuneCP5_ext1_1', 'Tree_TTTo2L2Nu_TuneCP5_ext1_2']
    # Semi-leptonic
    "TTToSemiLeptonic"  :   ['Tree_TTToSemiLeptonic_TuneCP5_ext1_0', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_1', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_2',
                             'Tree_TTToSemiLeptonic_TuneCP5_ext1_3', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_4', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_5',
                             'Tree_TTToSemiLeptonic_TuneCP5_ext1_6', 'Tree_TTToSemiLeptonic_TuneCP5_ext1_7']
    #Hadronic
    "TTToHadronic"      :   ['Tree_TTToHadronic_TuneCP5_ext1_0', 'Tree_TTToHadronic_TuneCP5_ext1_1', 'Tree_TTToHadronic_TuneCP5_ext1_2',
                             'Tree_TTToHadronic_TuneCP5_ext1_3']
    
    #Drell-Yan
    "DYJetsToLL"        :   ['Tree_DYJetsToLL_M_50_TuneCP5_amcatnloFXFX_ext1_0', 'Tree_DYJetsToLL_M_50_TuneCP5_amcatnloFXFX_ext1_1', 
                             'Tree_DYJetsToLL_M_50_TuneCP5_amcatnloFXFX_ext1_2']
    
    ### Dibosons
    # WZ
    "WZTo3LNu"          :   ['Tree_WZTo3LNu_TuneCP5_ext1_0']
    # WW
    "WWTo2L2Nu"         :   ['Tree_WWTo2L2Nu_TuneCP5_ext1_0']
    
    ### V+jets
    # WJets             
    "WJetsToLNu_0J"     :   ['Tree_WJetsToLNu_0J_TuneCP5_amcatnloFXFX_ext1_0']
    #
    "ZJToEEJ"           :   ['Tree_ZJToEEJ_M_50_0']
    
    ### Data
    #SingleMuon
    "SingleMuon"        :   ['Tree_SingleMuon_Run2017H_17Nov2017_v2_0','Tree_SingleMuon_Run2017H_17Nov2017_v2_1', 'Tree_SingleMuon_Run2017H_17Nov2017_v2_2']
    #DoubleMuon
    "DoubleMuon"        :   ['Tree_DoubleMuon_Run2017H_17Nov2017_v1_0']
    #HighEGJet
    "HighEGJet"         :   ['Tree_HighEGJet_Run2017H_17Nov2017_v1_0', 'Tree_HighEGJet_Run2017H_17Nov2017_v1_1', 'Tree_HighEGJet_Run2017H_17Nov2017_v1_2', 
                             'Tree_HighEGJet_Run2017H_17Nov2017_v1_3', 'Tree_HighEGJet_Run2017H_17Nov2017_v1_4']
    "HighEGJet"         :   ['Tree_LowEGJet_Run2017H_17Nov2017_v2_0', 'Tree_LowEGJet_Run2017H_17Nov2017_v2_1', 'Tree_LowEGJet_Run2017H_17Nov2017_v2_2']
    #LowEGJet
    
    
    }

