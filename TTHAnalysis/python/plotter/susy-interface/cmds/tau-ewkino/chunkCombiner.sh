#!/bin/bash

INPUT="$1"
PREFIX="$2"

if [ "${INPUT}" == "help"]; then
    echo "USAGE: ${0} chunksFolder prefix"
    echo "Default prefix: evVarFriend"
    exit 0
fi

if [ "${PREFIX}" == "" ]; then
    PREFIX="evVarFriend"
fi



cd ${INPUT}

sh $CMSSW_BASE/src/CMGTools/TTHAnalysis/macros/leptons/friendChunkAdd.sh ${PREFIX}

mkdir chunks
mv *.chunk*root chunks/

cd -
                           
