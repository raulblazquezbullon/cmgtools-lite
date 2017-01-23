#!/bin/bash

T="/mnt/t3nfs01/data01/shome/cheidegg/o/skimsForETauCR/"
O="/afs/cern.ch/user/c/cheidegg/www/heppy/2016-12-07_ewk80X_eAndTau"
PLOTS="all"
QUEUE="" #"-q all.q"

python susy-interface/plotmaker.py cretau cretau $T $O -l 36.5 --make data --plots $PLOTS -o SR --flags '-X blinding--perBin' $QUEUE

