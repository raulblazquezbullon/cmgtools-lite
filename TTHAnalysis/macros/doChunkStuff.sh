#!/bin/bash

filesPath="$1"
theoreticalCommand="sh chunkDealer.sh ~/Workspace/WZ_LowPu/FriendTrees/13TeV_Aug6/1_recleaning/ merge"

cd ${filesPath}
# There's always a chunk0 file for each sample, so we get a list of those
files=$(ls | grep ".*chunk1.root")

for f in $files
do
    # Use the chunk keyword as a delimitr and get the fileName
    var=$(echo ${f}|awk -F'.chunk' '{print $1}')
    echo $var
done

cd -
