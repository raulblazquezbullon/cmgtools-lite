# -*- coding: UTF-8 -*-.
#!/usr/bin/env/python

import os
import sys
import enum
import argparse
import warnings as wr


path        = "/pool/ciencias/nanoAODv6/lowPU2017/2020_07_21_postProc"
friendspath = "/pool/phedexrw/userstorage/cmstudents/cvico/WZ_LowPu/13TeV_Aug13/2020_07_21/2017/"
ftrees      = ("--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "0_tags ") +
	           "--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "1_lepMerge ") +
               "--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "2_recleaning ") +
               "--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "3_triggers ") +
               "--Fs {ftreesPath}{Friend}".format(ftreesPath = ftreesPath, Friend = "4_eventVars ")
              )

lumi        = 0.23
nCores      = 4

command     = "python mcPlots.py"

