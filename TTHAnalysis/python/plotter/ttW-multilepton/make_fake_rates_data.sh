################################
#  use mcEfficiencies.py to make plots of the fake rate
################################
T_SUSY="/data1/peruzzi/TREES_80X_011216_Spring16MVA_1lepFR --FDs /data1/peruzzi/frQCDVars_skimdata"

ANALYSIS=$1; if [[ "$1" == "" ]]; then exit 1; fi; shift;
case $ANALYSIS in
ttH)
    YEAR=$1; shift; 
    case $YEAR in 2016) L=35.9;; 2017) L=41.5;; 2018) L=59.7;; esac
    T="/eos/cms/store/cmst3/group/tthlep/gpetrucc/TREES_ttH_FR_nano_v5/${YEAR}"; T0=$T 
    # add local caches if available
    test -d /tmp/$USER/TREES_ttH_FR_nano_v5/$YEAR && T="/tmp/$USER/TREES_ttH_FR_nano_v5/$YEAR" ;
    test -d /data/$USER/TREES_ttH_FR_nano_v5/$YEAR && T="/data/$USER/TREES_ttH_FR_nano_v5/$YEAR" ;
    # use skim if available
    test -d $T/skim_z3 && T=$T/skim_z3
    echo "echo 'Will read trees from $T'"
    # keep EOS as backup in case local cache is not complete
    echo $T | grep -q /eos || T="$T -P $T0"
    CUTFILE="ttW-multilepton/lepton-fr/qcd1l.txt"; ;;
susy*) echo "NOT UP TO DATE"; exit 1;;
*) echo "You did not specify the analysis"; exit 1;;
esac;
BCORE=" --s2v --tree NanoAOD ttW-multilepton/lepton-fr/mca-qcd1l-${YEAR}.txt ${CUTFILE} -P $T -l $L --AP "
BCORE="${BCORE} -L ttW-multilepton/functionsTTH.cc   "; 
BCORE="${BCORE} --Fs {P}/1_frFriends_v1"
BCORE="${BCORE} --mcc ttW-multilepton/mcc-eleIdEmu2.txt  "; 
if [[ "$YEAR" == "2017" ]]; then
    BCORE="${BCORE} --mcc ttW-multilepton/mcc-METFixEE2017.txt "; 
fi;



BG=" -j 8 "; if [[ "$1" == "-b" ]]; then BG=" & "; shift; fi

lepton=$1; if [[ "$1" == "" ]]; then exit 1; fi
lepdir=${lepton};
case $lepton in
mu) BCORE="${BCORE} -E ^${lepton} --xf 'SingleEl.*,DoubleEG.*,EGamma.*'  "; MVAWP=85; NUM="mvaPt_0${MVAWP}i"; QCD=QCDMu; 
    conept="LepGood_pt*if3(LepGood_mvaTTH>0.${MVAWP}&&LepGood_mediumId>0, 1.0, 0.9*(1+LepGood_jetRelIso))"; ;;
el) BCORE="${BCORE} -E ^${lepton} --xf 'DoubleMu.*,SingleMu.*' "; MVAWP=80; NUM="mvaPt_0${MVAWP}i"; QCD=QCDEl; 
    conept="LepGood_pt*if3(LepGood_mvaTTH>0.${MVAWP}, 1.0, 0.9*(1+LepGood_jetRelIso))"; ;;
esac;

trigger=$2; if [[ "$2" == "" ]]; then exit 1; fi
case $trigger in
Mu3_PFJet40)
    BCORE="${BCORE} -A 'entry point' trigger 'HLT_${trigger}' -A 'entry point' recoptfortrigger 'LepGood_pt>4.0 && LepGood_awayJet_pt>45'  "; 
    if [[ "$YEAR" == "2017" ]]; then BCORE="${BCORE} --xf '(Single|Double)Muon_Run2017B.*' "; fi # trigger was missing in that run period
    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puw${trigger}_${YEAR}(PV_npvsGood)' "
    ;;
Mu8)
    BCORE="${BCORE} -A 'entry point' trigger 'HLT_${trigger}' -A 'entry point' recoptfortrigger 'LepGood_pt>8 && $conept > 13'  "; 
    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puw${trigger}_${YEAR}(PV_npvsGood)' "
    ;;
Mu17)
    BCORE="${BCORE} -A 'entry point' trigger 'HLT_${trigger}' -A 'entry point' recoptfortrigger 'LepGood_pt>17 && $conept > 25' "; 
    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puw${trigger}_${YEAR}(PV_npvsGood)' "
    ;;
Mu20)
    BCORE="${BCORE} -A 'entry point' trigger 'HLT_${trigger}' -A 'entry point' recoptfortrigger 'LepGood_pt>20 && $conept > 30' "; 
    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puw${trigger}_${YEAR}(PV_npvsGood)' "
    ;;
Mu27)
    BCORE="${BCORE} -A 'entry point' trigger 'HLT_${trigger}' -A 'entry point' recoptfortrigger 'LepGood_pt>27 && $conept > 40' "; 
    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puw${trigger}_${YEAR}(PV_npvsGood)' "
    ;;
#Mu50)
#    BCORE="${BCORE} -A 'entry point' trigger 'HLT_${trigger}' -A 'entry point' recoptfortrigger 'LepGood_pt>50 && $conept > 75' "; 
#    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puw${trigger}_${YEAR}(PV_npvsGood)' "
#    ;;
MuX_OR)
    if [[ "$YEAR" == "2016" ]] ; then
        BCORE="${BCORE} -E ^2016_trigMu  -A 'entry point' conept '10 < $conept && $conept < 100' "; 
    else
        BCORE="${BCORE} -E ^trigMu  -A 'entry point' conept '10 < $conept && $conept < 100' "; 
    fi;
    CONEPTVAR="ptJI90_mvaPt0${MVAWP}_coarsecomb"
    PUW="-L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'coneptw${trigger}_${YEAR}($conept,PV_npvsGood)' "
    ;;
Ele8|Ele8_CaloIdM_TrackIdM_PFJet30)
    BCORE="${BCORE} -A 'entry point' trigger 'HLT_Ele8_CaloIdM_TrackIdM_PFJet30' -A 'entry point' recoptfortrigger 'LepGood_pt>8 && $conept > 13'  "; 
    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puwEle8_${YEAR}(PV_npvsGood)' "
    ;;
Ele17|Ele17_CaloIdM_TrackIdM_PFJet30)
    BCORE="${BCORE} -A 'entry point' trigger 'HLT_Ele17_CaloIdM_TrackIdM_PFJet30' -A 'entry point' recoptfortrigger 'LepGood_pt>17 && $conept > 25'  "; 
    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puwEle17_${YEAR}(PV_npvsGood)' "
    ;;
Ele23|Ele23_CaloIdM_TrackIdM_PFJet30)
    BCORE="${BCORE} -A 'entry point' trigger 'HLT_Ele23_CaloIdM_TrackIdM_PFJet30' -A 'entry point' recoptfortrigger 'LepGood_pt>23 && $conept > 32'  "; 
    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puwEle23_${YEAR}(PV_npvsGood)' "
    ;;
EleX_OR)
    BCORE="${BCORE} -E ^trigEl -A 'entry point' conept '15 < $conept && $conept < 100'  "; 
    CONEPTVAR="ptJI90_mvaPt0${MVAWP}_coarseelcomb"
    PUW="-L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'coneptw${trigger}_${YEAR}($conept,PV_npvsGood)' "
    ;;
*)
    BCORE="${BCORE} -A 'entry point' trigger 'HLT_${trigger}'  "; 
    PUW=" -L ttW-multilepton/lepton-fr/frPuReweight.cc -W 'puw${trigger}_${YEAR}(PV_npvsGood)' "
    ;;
esac;


what=$3;
more=$4
PBASE="plots/104X/${ANALYSIS}/lepMVA/v1.1/fr-meas/qcd1l/$lepdir/$YEAR/HLT_$trigger/$what/$more"

EWKONE="-p ${QCD}_red,EWK,data"
EWKSPLIT="-p ${QCD}_red,WJets,DYJets,Top,data"
QCDEWKSPLIT="-p ${QCD}_[bclg]jets,WJets,DYJets,Top,data"
FITEWK=" $EWKSPLIT --flp WJets,DYJets,Top,${QCD}_red --peg-process DYJets WJets --peg-process Top WJets "
QCDNORM=" $QCDEWKSPLIT --sp WJets,DYJets,Top,${QCD}_.jets --scaleSigToData  "
QCDFITEWK=" $QCDEWKSPLIT --flp WJets,DYJets,${QCD}_.jets --peg-process DYJets WJets --peg-process ${QCD}_[clg]jets ${QCD}_bjets "
QCDFITQCD=" $QCDEWKSPLIT --flp WJets,DYJets,${QCD}_.jets --peg-process DYJets WJets --peg-process ${QCD}_[gl]jets WJets --peg-process ${QCD}_cjets ${QCD}_bjets "
QCDFITALL=" $QCDEWKSPLIT --flp WJets,DYJets,${QCD}_.jets --peg-process DYJets WJets --peg-process ${QCD}_gjets WJets --peg-process ${QCD}_cjets ${QCD}_bjets "

case $lepton in
    el) BARREL="00_15"; ENDCAP="15_25"; ETA="1.479";;
    mu) BARREL="00_12"; ENDCAP="12_24"; ETA="1.2";;
esac;

if [[ "$more" != "" ]]; then
    shift 4; BCORE="$BCORE $*";
    echo "Adding the following options for $more: $*" 1>&2 
fi;

PLOTOPTS="--showRatio --maxRatioRange 0.0 1.99 --fixRatioRange  --legendColumns 2 --legendWidth 0.5"

case $what in
    nvtx)
        echo "python mcPlots.py -f -j 6 $BCORE ttW-multilepton/lepton-fr/qcd1l_plots.txt --pdir $PBASE --sP nvtx $EWKONE " 
        echo "echo; echo; ";
        echo "python ../tools/vertexWeightFriend.py _puw${trigger}_${YEAR} $PBASE/qcd1l_plots.root ";
        echo "echo; echo ' ---- Now you should put the normalization and weight into frPuReweight.cc defining a puw${trigger}_${YEAR} ----- ' ";
        ;;
    nvtx-closure)
        echo "python mcPlots.py -f -j 6 $BCORE $PUW ttW-multilepton/lepton-fr/qcd1l_plots.txt --pdir $PBASE --sP nvtx $EWKONE  --showRatio --maxRatioRange 0.9 1.1 " 
        ;;
    coneptw)
        echo "python mcPlots.py -f -j 6 $BCORE ttW-multilepton/lepton-fr/make_fake_rates_xvars.txt --pdir $PBASE --sP ${CONEPTVAR}_nvtx $EWKONE " 
        echo "echo; echo; ";
        echo "python ttW-multilepton/lepton-fr/frConePtWeights.py coneptw${trigger}_${YEAR} $PBASE/make_fake_rates_xvars.root ${CONEPTVAR}_nvtx  ";
        echo "echo; echo ' ---- Now you should put the normalization and weight into frPuReweight.cc defining a coneptw${trigger}_${YEAR} ----- ' ";
        ;;
    coneptw-closure)
        echo "python mcPlots.py -f -j 6 $BCORE $PUW ttW-multilepton/lepton-fr/make_fake_rates_xvars.txt --pdir $PBASE --sP ${CONEPTVAR}_nvtx,$CONEPTVAR,nvtx $EWKONE " 
        ;;
    mc-yields)
        echo "python mcAnalysis.py -f -j 6 $BCORE $PUW ${EWKSPLIT} --sp 'QCD.*' --fom S/B --fom S/errSB -G " 
        ;;
    fit-*)
        echo "python mcPlots.py -f -j 6 $BCORE $PUW ttW-multilepton/lepton-fr/qcd1l_plots.txt --pdir $PBASE -E $what $FITEWK --preFitData ${what/fit-/}  $PLOTOPTS " 
        ;;
    num-fit-*)
        echo "python mcPlots.py -f -j 6 $BCORE $PUW ttW-multilepton/lepton-fr/qcd1l_plots.txt --pdir $PBASE -E $what $FITEWK --preFitData ${what/num-fit-/}  $PLOTOPTS -E num" 
        ;;
    num-mcshapes)
        echo "python mcPlots.py -f -j 6 $BCORE $PUW ttW-multilepton/lepton-fr/qcd1l_plots.txt --pdir $PBASE -E $what ${EWKSPLIT/,data/} -E num --plotmode=nostack" 
        ;;
    qcdflav-norm)
        echo "python mcPlots.py -f -j 6 $BCORE $PUW ttW-multilepton/lepton-fr/qcd1l_plots.txt --pdir $PBASE -E $what $QCDNORM --showRatio $PLOTOPTS" 
        ;;
    qcdflav-fit)
        echo "python mcPlots.py -f -j 6 $BCORE $PUW ttW-multilepton/lepton-fr/qcd1l_plots.txt --pdir $PBASE -E $what $QCDFITEWK --preFitData ${what/flav-fit/}  $PLOTOPTS " 
        ;;
    flav-fit*)
        echo "python mcPlots.py -f -j 6 $BCORE $PUW ttW-multilepton/lepton-fr/qcd1l_plots.txt --pdir $PBASE -E $what $QCDFITQCD --preFitData ${what/flav-fit/}  $PLOTOPTS " 
        ;;
    flav3-fit*)
        echo "python mcPlots.py -f -j 6 $BCORE $PUW ttW-multilepton/lepton-fr/qcd1l_plots.txt --pdir $PBASE -E $what $QCDFITALL --preFitData ${what/flav3-fit/}  $PLOTOPTS " 
        ;;
    fakerates-*)
        fitVar=${what/fakerates-/}
        XVAR="ptJI90_mvaPt0${MVAWP}_coarselongbin"
        LEGEND=" --legend=TL --fontsize 0.05 --legendWidth 0.4"
        RANGES=" --showRatio  --ratioRange 0.00 2.99 "
        STACK="python ttW-multilepton/lepton-fr/stack_fake_rates_data.py "
        ISCOMB=false
        ISWIDE=false
        case $lepton in  
           el) 
               RANGES="$RANGES  --yrange 0 0.45 " ;
               case $trigger in
                   Ele8)
                       XVAR="${XVAR/_coarselongbin/_coarseel8bin}"
                       RANGES="$RANGES --xcut 13 45 --xline 15 --xline 25 " ;;
                   Ele17)
                       XVAR="${XVAR/_coarselongbin/_coarseel17bin}"
                       RANGES="$RANGES --xcut 25 100 --xline 25 --xline 35 " ;;
                   Ele23)
                       XVAR="${XVAR/_coarselongbin/_coarseel23bin}"
                       RANGES="$RANGES --xcut 35 100  " ;;
                   EleX_Combined)
                       ISCOMB=true
                       ISWIDE=true
                       XVAR="${XVAR/_coarselongbin/_coarseelcomb}"
                       RANGES="${RANGES} --xcut 15 100  --xline 25 --xline 35 "; 
                       for E in ${BARREL} ${ENDCAP}; do
                           STACK=""
                           STACK="${STACK}  ${PBASE/EleX_Combined/Ele8}/fr_sub_eta_${E}.root:15-45"
                           STACK="${STACK}  ${PBASE/EleX_Combined/Ele17}/fr_sub_eta_${E}.root:25-100"
                           STACK="${STACK}  ${PBASE/EleX_Combined/Ele23}/fr_sub_eta_${E}.root:32-100"
                           echo "python ttW-multilepton/lepton-fr/combine-fr-bins-prefit.py ${STACK} $PBASE/fr_sub_eta_${E}.root --oprefix ${NUM}_vs_${fitVar}_${XVAR}";
                       done;;
                   EleX_OR)
                       ISWIDE=true
                       XVAR="${CONEPTVAR}"
                       RANGES="${RANGES} --xcut 15 100  --xline 25 --xline 32 "; 
                 esac;; # ele trigger
           mu)
               RANGES="$RANGES  --yrange 0 0.45 " ;
               case $trigger in
                   Mu3_PFJet40)
                       RANGES="${RANGES} --xcut 10 30 --xline 10 --xline 15";;
                   Mu8)
                       XVAR="${XVAR/_coarselongbin/_coarsemu8bin}"
                       RANGES="${RANGES} --xcut 13 45 --xline 15 --xline 32";;
                   Mu17)
                       XVAR="${XVAR/_coarselongbin/_coarsemu17bin}"
                       RANGES="${RANGES} --xcut 25 100 --xline 32 ";;
                   Mu20)
                       XVAR="${XVAR/_coarselongbin/_coarsemu20bin}"
                       RANGES="${RANGES} --xcut 30 100 --xline 32 ";;
                   Mu27)
                       XVAR="${XVAR/_coarselongbin/_coarsemu27bin}"
                       RANGES="${RANGES} --xcut 40 100 --xline 45 ";;
                   #Mu50)
                   #    XVAR="${XVAR/_coarselongbin/_coarsemu50bin}"
                   #    RANGES="${RANGES} --xcut 81 100 ";;
                   MuX_Combined)
                       ISCOMB=true
                       ISWIDE=true
                       XVAR="${XVAR/_coarselongbin/_coarsecomb}"
                       RANGES="${RANGES} --xcut 10 100 --xline 10 --xline 15 --xline 32 --xline 45 "; 
                       for E in ${BARREL} ${ENDCAP}; do
                           STACK=""
                           STACK="${STACK}  ${PBASE/MuX_Combined/Mu3_PFJet40}/fr_sub_eta_${E}.root:10-32"
                           STACK="${STACK}  ${PBASE/MuX_Combined/Mu8}/fr_sub_eta_${E}.root:15-45"
                           STACK="${STACK}  ${PBASE/MuX_Combined/Mu17}/fr_sub_eta_${E}.root:32-100"
                           STACK="${STACK}  ${PBASE/MuX_Combined/Mu20}/fr_sub_eta_${E}.root:32-100"
                           STACK="${STACK}  ${PBASE/MuX_Combined/Mu27}/fr_sub_eta_${E}.root:45-100"
                           echo "python ttW-multilepton/lepton-fr/combine-fr-bins-prefit.py ${STACK} $PBASE/fr_sub_eta_${E}.root --oprefix ${NUM}_vs_${fitVar}_${XVAR}";
                       done;;
                   MuX_OR)
                       ISWIDE=true
                       XVAR="${CONEPTVAR}"
                       RANGES="${RANGES} --xcut 10 100 --xline 15 --xline 32 --xline 45 ";; 
                 esac;; # mu trigger
        esac; ## electron or muon
        MCEFF="python ttW-multilepton/dataFakeRate.py -f  $BCORE $PUW $EWKONE  --groupBy cut ttW-multilepton/lepton-fr/make_fake_rates_sels.txt ttW-multilepton/lepton-fr/make_fake_rates_xvars.txt  "
        MCEFF="$MCEFF --sp ${QCD}_red  "
        MCEFF="$MCEFF --sP ${NUM} --sP ${XVAR}  --sP $fitVar $fitVar  --ytitle 'Fake rate' "
        MCEFF="$MCEFF  " # ratio for fake rates
        MCEFF="$MCEFF --fixRatioRange --maxRatioRange 0.7 1.29 " # ratio for other plots

        MCEFF="$MCEFF $LEGEND $RANGES"
        if ! $ISCOMB; then
        echo " ( $MCEFF -o $PBASE/fr_sub_eta_${BARREL}.root --bare -A 'entry point' eta 'abs(LepGood_eta)<$ETA' $BG )"
        echo " ( $MCEFF -o $PBASE/fr_sub_eta_${ENDCAP}.root --bare -A 'entry point' eta 'abs(LepGood_eta)>$ETA' $BG )"
        fi;
        MCGO="$MCEFF --compare ${QCD}_red_prefit,data_sub_syst_prefit,data_sub_prefit --algo=globalFit "
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${BARREL}.root -o $PBASE/fr_sub_eta_${BARREL}_globalFit.root --algo=globalFit --fcut 0 20 --subSyst 0.05 $BG )"
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${ENDCAP}.root -o $PBASE/fr_sub_eta_${ENDCAP}_globalFit.root --algo=globalFit --fcut 0 20 --subSyst 0.05 $BG )"
        MCGO="$MCEFF --compare ${QCD}_red_prefit,data_prefit,total_prefit,data_sub_syst_prefit,data_sub_prefit --algo=globalFit "
        MCGO="${MCGO/--yrange 0 0.??/--yrange 0 0.5}"
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${BARREL}.root -o $PBASE/fr_sub_eta_${BARREL}_globalFit_full.root --algo=globalFit --fcut 0 20 --subSyst 0.05 $BG )"
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${ENDCAP}.root -o $PBASE/fr_sub_eta_${ENDCAP}_globalFit_full.root --algo=globalFit --fcut 0 20 --subSyst 0.05 $BG )"
        #MCGO="$MCEFF --compare ${QCD}_red_prefit,${QCD}_red --algo=fitND "
        #echo " ( $MCGO -i $PBASE/fr_sub_eta_${BARREL}.root -o $PBASE/fr_sub_eta_${BARREL}_full.root   $BG )"
        #echo " ( $MCGO -i $PBASE/fr_sub_eta_${ENDCAP}.root -o $PBASE/fr_sub_eta_${ENDCAP}_full.root   $BG )"
        case $lepton in el) CONSTRFSIG=0.05; CONSTRFBKG=0.10;; mu) CONSTRFSIG=0.075; CONSTRFBKG=0.03;; esac
        MCGO="$MCEFF --compare ${QCD}_red_prefit,data_fit --algo=fitSimND --shapeSystSignal=l:0.15,s:0.05,b:0.02 --shapeSystBackground=l:0.07,s:0.02,b:0.02 --kappaBkg 1.1 --constrain theta_bkg --sigmaFBkg $CONSTRFBKG --constrain fbkg "
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${BARREL}.root -o $PBASE/fr_sub_eta_${BARREL}_fitSimND.root  $BG )"
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${ENDCAP}.root -o $PBASE/fr_sub_eta_${ENDCAP}_fitSimND.root  $BG )"
        MCGO="$MCEFF --compare ${QCD}_red_prefit,data_fit --algo=fitSemiParND --shapeSystBackground=l:0.07,s:0.02,b:0.02 --kappaBkg 1.1 --constrain theta_bkg --sigmaFBkg $CONSTRFBKG --constrain fbkg "
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${BARREL}.root -o $PBASE/fr_sub_eta_${BARREL}_fitSemiParND.root  $BG )"
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${ENDCAP}.root -o $PBASE/fr_sub_eta_${ENDCAP}_fitSemiParND.root  $BG )"
        if $ISWIDE; then
            MCGO="$MCEFF --compare ${QCD}_red_prefit,data_fit --algo=fitGlobalSimND --shapeSystSignal=l:0.15,s:0.05,b:0.02 --shapeSystBackground=l:0.07,s:0.02,b:0.02 --regularize sf_sig 0.2 --regularize sf_bkg 0.1 --regularize fbkg $CONSTRFBKG  --regularize fsig $CONSTRFSIG"
            echo " ( $MCGO -i $PBASE/fr_sub_eta_${BARREL}.root -o $PBASE/fr_sub_eta_${BARREL}_fitGlobalSimND.root  $BG )"
            echo " ( $MCGO -i $PBASE/fr_sub_eta_${ENDCAP}.root -o $PBASE/fr_sub_eta_${ENDCAP}_fitGlobalSimND.root  $BG )"
            MCGO="$MCEFF --compare ${QCD}_red_prefit,data_fit --algo=fitGlobalSemiParND  --shapeSystBackground=l:0.07,s:0.02,b:0.02 --regularize sf_sig 0.2 --regularize sf_bkg 0.1  --regularize fsig $CONSTRFSIG --constrain fbkg --sigmaFBkg $CONSTRFBKG"
            echo " ( $MCGO -i $PBASE/fr_sub_eta_${BARREL}.root -o $PBASE/fr_sub_eta_${BARREL}_fitGlobalSemiParND.root  $BG )"
            echo " ( $MCGO -i $PBASE/fr_sub_eta_${ENDCAP}.root -o $PBASE/fr_sub_eta_${ENDCAP}_fitGlobalSemiParND.root  $BG )"
        fi;
        #if ! $ISCOMB; then
        MCGO="$MCEFF --compare ${QCD}_red_prefit,data_fqcd --algo=fQCD "
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${BARREL}.root -o $PBASE/fr_sub_eta_${BARREL}_fQCD.root  $BG )"
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${ENDCAP}.root -o $PBASE/fr_sub_eta_${ENDCAP}_fQCD.root  $BG )"
        MCGO="$MCEFF --compare ${QCD}_red_prefit,data_fqcd --algo=ifQCD "
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${BARREL}.root -o $PBASE/fr_sub_eta_${BARREL}_ifQCD.root --subSyst 1.0 $BG )"
        echo " ( $MCGO -i $PBASE/fr_sub_eta_${ENDCAP}.root -o $PBASE/fr_sub_eta_${ENDCAP}_ifQCD.root --subSyst 1.0 $BG )"
        STACK="python ttW-multilepton/lepton-fr/stack_fake_rates_data.py $RANGES $LEGEND --comb-mode=midpoint" # :_fit
        PATT="${NUM}_vs_${XVAR}_${fitVar}_%s"
        for E in ${BARREL} ${ENDCAP}; do
            echo "( $STACK -o $PBASE/fr_sub_eta_${E}_comp.root    $PBASE/fr_sub_eta_${E}_globalFit.root:$PATT:${QCD}_red_prefit,data_sub_syst_prefit  $PBASE/fr_sub_eta_${E}_ifQCD.root:$PATT:${QCD}_red_prefit,data_fqcd   $PBASE/fr_sub_eta_${E}_fitSimND.root:$PATT:data_fit   )";
            echo "( $STACK -o $PBASE/fr_sub_eta_${E}_comp1.root    $PBASE/fr_sub_eta_${E}_globalFit.root:$PATT:${QCD}_red_prefit,data_sub_syst_prefit  $PBASE/fr_sub_eta_${E}_ifQCD.root:$PATT:${QCD}_red_prefit,data_fqcd   $PBASE/fr_sub_eta_${E}_fitSemiParND.root:$PATT:data_fit   )";
            echo "( $STACK -o $PBASE/fr_sub_eta_${E}_compF.root    $PBASE/fr_sub_eta_${E}_globalFit.root:$PATT:data_sub_syst_prefit $PBASE/fr_sub_eta_${E}_fitSimND.root:$PATT:${QCD}_red_prefit,data_fit     $PBASE/fr_sub_eta_${E}_fitSemiParND.root:$PATT:data_fit --comp-style fitcomp  )";
            if $ISWIDE; then
                echo "( $STACK -o $PBASE/fr_sub_eta_${E}_compG.root    $PBASE/fr_sub_eta_${E}_globalFit.root:$PATT:data_sub_syst_prefit $PBASE/fr_sub_eta_${E}_fitGlobalSimND.root:$PATT:${QCD}_red_prefit,data_fit     $PBASE/fr_sub_eta_${E}_fitGlobalSemiParND.root:$PATT:data_fit --comp-style fitcomp  )";
            fi;
        done
        #fi
       ;;

esac;
