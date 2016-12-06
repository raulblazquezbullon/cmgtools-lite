#INPUTDIR="/pool/ciencias/HeppyTrees/RA7/estructura/trees_8011_July5_allscans/"
INPUTDIR="/pool/ciencias/HeppyTrees/RA7/estructura/prueba/"
INPUTDIR="/pool/ciencias/HeppyTrees/RA7/estructura/TREES_80X_011216_Spring16MVA/"

OUTPUTDIR="/pool/ciencias/HeppyTrees/RA7/estructura/testbtag/"
OUTPUTDIR="/pool/ciencias/HeppyTrees/RA7/estructura/tempTrees_011216/"

WEBDIR="/nfs/fanae/user/vischia/www/taus/"

if [ "$1" == "ft" ]; then
    MODULE=""    
    PRETEND=" -q local --direct --pretend"
    PRETEND=" -q batch --direct "
    #PRETEND=" -q batch --direct --pretend"
    ONLY=" --accept WZZ "
    ONLY=" --accept WJetsToLNu " 
    ONLY=" "
    ONLY=" --accept DoubleEG_Run2016B_23Sep2016_v3_runs_273150_275376_part1 "
    if [ "$2" == "btag" ]; then
        MODULE="eventBTagWeight"
        #python susy-interface/friendmaker.py 3l 3lA ${INPUTDIR} ${INPUTDIR} --modules eventBTagWeight -q batch 
        # python susy-interface/friendmaker.py 3l 3lA ${INPUTDIR} ${OUTPUTDIR} --modules eventBTagWeight --accept WZZ -q batch --direct
        python susy-interface/friendmaker.py 3l 3lA ${INPUTDIR} ${OUTPUTDIR} --modules ${MODULE} ${ONLY} ${PRETEND}
    else
        if [ "$2" == "tauclean" ]; then
            MODULE="leptonJetReCleanerNoCleanTausSusyEWK3L"
        elif [ "$2" == "tauMini" ]; then
            MODULE="tauFakesBuilderEWKMini"
        elif [ "$2" == "tauRecl" ]; then
            MODULE="tauFakesBuilderEWKRecl"
        elif [ "$2" == "stdReCleaner2L" ]; then
            MODULE="leptonJetReCleanerSusyEWK2L"
        elif [ "$2" == "stdReCleaner3L" ]; then
            MODULE="leptonJetReCleanerSusyEWK3L"
        elif [ "$2" == "leptonBuilder" ]; then
            MODULE="leptonBuilderEWK"
        fi
        if [ "$MODULE" == "" ]; then
            print "No module specified"
            exit -1
        fi
        #3lA
        for EXCL in `ls ${INPUTDIR}`;
        do
            ONLY=" --accept ${EXCL} "
            python susy-interface/friendmaker.py taustudies CRTAUH ${INPUTDIR} ${OUTPUTDIR} --modules ${MODULE} ${ONLY} ${PRETEND}
        done
    fi
elif [ "$1" == "plot" ]; then
    
    ACTION=""
    SUBACTION=""
    # ACTION can be generalplots or tauopt or crtau
    
    if [ "$2" == "" ]; then
        echo "ACTION is empty. It can be generalplots or tauopt or crtau or crconv"
    fi
    if [ "$2" != "" ]; then
        ACTION=" -a ${2}"
        if [ "$3" != "" ]; then
            SUBACTION=" -s ${3} "
        fi
    fi

    if [ "$ACTION" == "crconv" ]; then
        WEBDIR="/nfs/fanae/user/vischia/www/conversions/"
    fi
    PRETEND=" --pretend  "
    PRETEND=""
    python susy-interface/cmds/tau-ewkino/plot.py -i ${INPUTDIR} -o ${WEBDIR} ${ACTION} ${SUBACTION} ${PRETEND}

fi

exit 0

