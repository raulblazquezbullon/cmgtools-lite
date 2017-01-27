#!/bin/bash

T="/mnt/t3nfs01/data01/shome/cheidegg/o/2017-01-24_signalMerger/"
O="/mnt/t3nfs01/data01/shome/cheidegg/o/2017-01-24_signalSplitter"
QUEUE=""


## Winos
#python susy-interface/splitmaker.py 3l 3lA $T $O $QUEUE --gen --minmass 120 --maxmass  700 --step 25 --accept TChiWH
#python susy-interface/splitmaker.py 3l 3lA $T $O $QUEUE --gen --minmass 100 --maxmass  700 --step 25 --accept TChiWZ
#python susy-interface/splitmaker.py 3l 3lA $T $O $QUEUE --gen --minmass 100 --maxmass 1200 --step 50 --accept TChiSlepSnux0p --exclude ext
#python susy-interface/splitmaker.py 3l 3lA $T $O $QUEUE --gen --minmass 100 --maxmass 1200 --step 50 --accept TChiSlepSnuTEx0p
#python susy-interface/splitmaker.py 3l 3lA $T $O $QUEUE --gen --minmass 100 --maxmass  700 --step 25 --accept TChiStauStaux0p5

## Higgsinos
python susy-interface/splitmaker.py 3l 3lA $T $O $QUEUE --gen --minmass 100 --maxmass 1000 --step 25 --accept TChiZZ
#python susy-interface/splitmaker.py 3l 3lA $T $O $QUEUE --gen --minmass 125 --maxmass 1000 --step 25 --accept TChiH

## Strong Signals

