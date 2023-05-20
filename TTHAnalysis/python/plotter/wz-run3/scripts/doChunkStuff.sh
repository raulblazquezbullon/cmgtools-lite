#!/bin/bash

# Move to the input path
FILESPATH="$1"
MODE="$2"
what="*Friend"

function addFriend() {
    # Function to hadd friends
    sbatch -J wzchunk --wrap "hadd -ff $1 $2"
}

function mergePostproc() {
    # Merge chunks but divide samples so they are not larger than 15 Gb 
    # (important for processes like DY or TT)
    sbatch -J wzchunk --wrap "haddChunks -n -c --max-size 15 ." 
}

cd ${FILESPATH}
if [[ $MODE == "friend" ]]; then 
    for F in $(ls ${what}*.chunk*.root | sed 's/\.chunk[0-9]\+//' | sort | uniq); do
        if test -f $F; then 
            echo "Merged file $F already exists. skipping."; continue; 
        fi
        FILES=$(ls ${F/.root/.chunk*.root} | \
                perl -npe 's/\.chunk(\d+)\./sprintf(".%06d.",$1)/e' | \
                sort -n | \
                perl -npe 's/\.(\d+)\.root$/sprintf(".chunk%d.root",$1)/e' );
        echo -e "\nWill merge into $F:\n$FILES";
        addFriend "$F" "$FILES"
    done

elif [[ $MODE == "postproc" ]]; then 
    mergePostproc "$FILES"
fi


cd -
exit 0
