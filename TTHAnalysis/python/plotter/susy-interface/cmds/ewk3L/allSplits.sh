#!/bin/bash

T="/mnt/t3nfs01/data01/shome/cheidegg/o/2017-01-24_signalMerger/"
O="/mnt/t3nfs01/data01/shome/cheidegg/o/2017-01-24_signalSplitter"
QUEUE="-q all.q"


## Winos
python susy-interface/splitmaker.py 3l 3lA $T $O --gen --minmass 120 --maxmass  700 --step 25 --flags '--accept TChiWH'
python susy-interface/splitmaker.py 3l 3lA $T $O --gen --minmass 100 --maxmass  700 --step 25 --flags '--accept TChiWZ'
python susy-interface/splitmaker.py 3l 3lA $T $O --gen --minmass 100 --maxmass 1200 --step 50 --flags '--accept TChiSlepSnux0p --exclude ext'
python susy-interface/splitmaker.py 3l 3lA $T $O --gen --minmass 100 --maxmass 1200 --step 50 --flags '--accept TChiSlepSnuTEx0p'
python susy-interface/splitmaker.py 3l 3lA $T $O --gen --minmass 100 --maxmass  700 --step 25 --flags '--accept TChiStauStaux0p5'

## Higgsinos
python susy-interface/splitmaker.py 3l 3lA $T $O --gen --minmass 100 --maxmass 1000 --step 25 --flags '--accept TChiZZ'
python susy-interface/splitmaker.py 3l 3lA $T $O --gen --minmass 125 --maxmass 1000 --step 25 --flags '--accept TChiH'

## Strong Signals

