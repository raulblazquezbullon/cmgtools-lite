#!/bin/bash

FILESPATH="$1"

cd ${FILESPATH}
# There's always a chunk0 file for each sample, so we get a list of those
FILES=$(ls | grep ".*chunk0.root")
cd -

for f in $FILES
do
    # Use the chunk keyword as a delimitr and get the fileName
    FILENAME=$(echo ${f}|awk -F'Friend.chunk' '{print $1}')
    echo "I'm currently reading this sample: ${FILENAME}"
    CMD="$CMMSW_BASE/src/susyMaintenanceScripts/chunkDealer.sh ${FILESPATH} merge ${FILENAME} "
    sh ${CMD}
done
exit 0
