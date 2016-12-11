#!/bin/bash

MODULE="leptonJetReCleanerSusyEWK2L"
BASEPATH="/nfs/fanae/user/vischia/TREES_80X_011216_Spring16MVA_skim_2lep_OR_1lep_2tau/"
TREEPATH=${BASEPATH}

if [ "$1" == "help" ]; then
    echo "Run me as:"
    echo "\t ${0} FriendTreeName TreesPath [FriendTreesPath]"
    echo "FriendTreesPath is optional and should not contain the friend tree name. If left empty, it is set to TreesPath."
fi


if [ "$1" == "" ]; then
    echo "Missing Friend Tree name. Using default."
else 
    MODULE=${1}
fi

if [ "$2" == "" ]; then
    echo "Missing Trees folder name. Using default."
else
    BASEPATH=${2}
fi

if [ "$3" == "" ]; then
    TREEPATH=${BASEPATH}
else
    TREEPATH=${3}
fi


for SAMPLE in `ls ${BASEPATH}`; do
    python verifyFTree.py ${BASEPATH} ${TREEPATH}/${MODULE} ${SAMPLE}

done

exit 0