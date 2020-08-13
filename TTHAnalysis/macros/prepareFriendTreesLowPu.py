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

FriendsPath = "/pool/phedexrw/userstorage/cvico/WZ_LowPu/13TeV_Aug13"
prodName = "2020_" # Falta comprobar este nombre
dataSamples = [ "SingleMuon", "DoubleMuon", "HighEGJet", "LowEGJet" ]
logsPath = FriendsPath + "/" + prodname + "/{y}/{step_prefix}/logs"
utilsPath = "/nfs/fanae/user/cvico/Workspace/WZ_LowPu/CMSSW" # FALTA TERMINAR DE MIRAR ESTA DIRECCIÓN
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
