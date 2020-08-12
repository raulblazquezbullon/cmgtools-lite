#!/bin/bash

filesPath="$1"
theoreticalCommand="sh chunkDealer.sh ~/Workspace/WZ_LowPu/FriendTrees/13TeV_Aug6/1_recleaning/ merge"

cd ${filesPath}
files=$(ls | grep ".*chunk1.root")

for f in $files
do
    var=$(echo ${f}|awk -F'.chunk' '{print $1}')
    echo $var
done

#var=$(echo ${f}|sed "s|$filesPath||g"|sed "s/$chunkStuff//g")

cd -
