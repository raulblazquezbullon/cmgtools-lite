################################
#  use mcEfficiencies.py to make plots of the fake rate
################################

ANALYSIS=$1; if [[ "$1" == "" ]]; then exit 1; fi; shift;
case $ANALYSIS in
wz_5TeV)
    L=0.304
    T=/eos/cms/store/group/phys_muon/folguera/5TeV_Apr30_FR/
    PBASE=$1; shift  ## outputfolder
    TREE="NanoAOD";;
susy) 
    echo "NOT UP TO DATE"; exit 1; 
    ;;
*)
    echo "Unknown analysis '$ANALYSIS'";
    exit 1;
esac;


BCORE=" --s2v --tree ${TREE} 5TeV/lepton-fr/mca-lepfr-mc.txt 5TeV/lepton-fr/fr_cuts.txt"
BCORE="${BCORE} -L 5TeV/functions5TeV.cc "
BASE="python mcEfficiencies.py $BCORE --ytitle 'Fake rate'   "
PLOTTER="python mcPlots.py $BCORE   "


BG=" -j 8 "; if [[ "$1" == "-b" ]]; then BG=" -j 4 & "; shift; fi
HAS_CUSTOM_RECOIL=false
if [[ "$2" == "--recoil" ]]; then
    HAS_CUSTOM_RECOIL=true
    RECOIL_NAME="$3"
    RECOIL_VALUE="$4"
fi;

MuIdDen=0; EleRecoPt=7; MuRecoPt=5; AwayJetPt=30; EleTC=0; IDEMu=1
SIP8="LepGood_sip3d < 8"; SIP4="LepGood_sip3d < 4"
DXY="abs(LepGood_dxy)<0.05 && abs(LepGood_dz)<0.1"
VDCSVL="LepGood_jetBTagDeepCSV < 0.1522"
SelDen="-A pt20 den '$SIP8'"; Num="mvaPt_$WP" ; XVar="mvaPt${WP}"
Num="wz_tight"
XVar="pt"
	
B0="$BASE -P $T 5TeV/lepton-fr/make_fake_rates_sels.txt 5TeV/lepton-fr/make_fake_rates_xvars.txt --groupBy cut --split-factor=-1 --sP ${Num} " 
B0="$B0 --legend=TR --showRatio --ratioRange 0.50 2.5   --yrange 0 0.45 " 
B1="${PLOTTER} -P $T 5TeV/lepton-fr/make_fake_rates_plots.txt"
B1="$B1 --showRatio --maxRatioRange 0 2 --plotmode=norm -f "
MuDen="${CommonDen} -E ^mu "
ElDen="${CommonDen} -E ^el "
Me="recJet30"
       
MuFakeVsPt="$MuDen --sP '${XVar}_fine' --sp TT_redNC --xcut 8 999 --xline 15 " 
ElFakeVsPt="$ElDen --sP '${XVar}_fine' --sp TT_redNC --xcut 8 999 --xline 15 " 
echo "( $B0 $MuFakeVsPt -p TT_red,TT_redNC,TT_ljetsNC -o $PBASE/$what/mu_lbin_${Me}_eta_00_12.root    -A pt8 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_red,TT_redNC,TT_ljetsNC -o $PBASE/$what/mu_lbin_${Me}_eta_12_24.root    -A pt8 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_red,TT_redNC,TT_ljetsNC -o $PBASE/$what/el_lbin_${Me}_eta_00_15.root    -A pt8 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_red,TT_redNC,TT_ljetsNC -o $PBASE/$what/el_lbin_${Me}_eta_15_25.root    -A pt8 eta 'abs(LepGood_eta)>1.479' ${BG} )"


exit;

echo "( $B0 $MuFakeVsPtLongBin -p TT_SS_red -o $PBASE/$what/mu_etabins_${Me}_eta_00_08.root    -R pt20 eta 'abs(LepGood_eta)<0.8'   ${BG} )"
echo "( $B0 $MuFakeVsPtLongBin -p TT_SS_red -o $PBASE/$what/mu_etabins_${Me}_eta_08_12.root    -R pt20 eta '0.8<abs(LepGood_eta)&&abs(LepGood_eta)<1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPtLongBin -p TT_SS_red -o $PBASE/$what/mu_etabins_${Me}_eta_12_15.root    -R pt20 eta '1.2<abs(LepGood_eta)&&abs(LepGood_eta)<1.5'   ${BG} )"
echo "( $B0 $MuFakeVsPtLongBin -p TT_SS_red -o $PBASE/$what/mu_etabins_${Me}_eta_15_21.root    -R pt20 eta '1.5<abs(LepGood_eta)&&abs(LepGood_eta)<2.1'   ${BG} )"
echo "( $B0 $MuFakeVsPtLongBin -p TT_SS_red -o $PBASE/$what/mu_etabins_${Me}_eta_21_24.root    -R pt20 eta 'abs(LepGood_eta)>2.1'   ${BG} )"

#ElFakeVsPtZBin="$ElDen ${BDen} --sP '${XVar}_zcoarse2' --sp TT_red " 
#echo "( $B0 $ElFakeVsPtZBin -p TT_red,QCDEl_red     -o $PBASE/$what/el_zc2bin_${Me}_eta_00_15.root    -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
#echo "( $B0 $ElFakeVsPtZBin -p TT_red,QCDEl_red     -o $PBASE/$what/el_zc2bin_${Me}_eta_15_25.root    -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"

#echo "( $B0 $MuFakeVsPt -p TT_redNCNC -o $PBASE/$what/mu_nc_${Me}_eta_00_12.root -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
#echo "( $B0 $MuFakeVsPt -p TT_redNCNC -o $PBASE/$what/mu_nc_${Me}_eta_12_24.root -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
#echo "( $B0 $ElFakeVsPt -p TT_redNC,QCDEl_redNC -o $PBASE/$what/el_nc_${Me}_eta_00_15.root -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
#echo "( $B0 $ElFakeVsPt -p TT_redNC,QCDEl_redNC -o $PBASE/$what/el_nc_${Me}_eta_15_25.root -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_bjets -o $PBASE/$what/mu_b_${Me}_eta_00_12.root  -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_bjets -o $PBASE/$what/mu_b_${Me}_eta_12_24.root  -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_bjets -o $PBASE/$what/el_b_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_bjets -o $PBASE/$what/el_b_${Me}_eta_15_25.root  -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"
#MuFakeVsPtL="$MuDen ${BDen} --sP '${XVar}_flow' --sp TT_red " 
#echo "( $B0 $MuFakeVsPtL -p TT_red     -o $PBASE/$what/mu_flow_${Me}_eta_00_12.root    -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
#echo "( $B0 $MuFakeVsPtL -p TT_red     -o $PBASE/$what/mu_flow_${Me}_eta_12_24.root    -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
#MuFakeVsPtL="$MuDen ${BDen} --sP '${XVar}_low' --sp TT_red " 
#echo "( $B0 $MuFakeVsPtL -p TT_red     -o $PBASE/$what/mu_low_${Me}_eta_00_12.root    -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
#echo "( $B0 $MuFakeVsPtL -p TT_red     -o $PBASE/$what/mu_low_${Me}_eta_12_24.root    -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"

#echo "( $B0 $MuFakeVsPt -p TT_red,TT_bjets,QCDMu_bjets,QCDMu_ljets,QCDMu_cjets -o $PBASE/$what/mu_blc_${Me}_eta_00_12.root  -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
#echo "( $B0 $MuFakeVsPt -p TT_red,TT_bjets,QCDMu_bjets,QCDMu_ljets,QCDMu_cjets -o $PBASE/$what/mu_blc_${Me}_eta_12_24.root  -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
#echo "( $B0 $ElFakeVsPt -p TT_red,TT_bjets,QCDEl_red,QCDEl_bjets,QCDEl_ljets,QCDEl_cjets -o $PBASE/$what/el_blc_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
#echo "( $B0 $ElFakeVsPt -p TT_red,TT_bjets,QCDEl_red,QCDEl_bjets,QCDEl_ljets,QCDEl_cjets -o $PBASE/$what/el_blc_${Me}_eta_15_25.root  -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"

#echo "( $B0 $MuFakeVsPt -p TT_red,Wjets_red,Wjets_ljets -o $PBASE/$what/mu_withW_${Me}_eta_00_12.root  -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
#echo "( $B0 $MuFakeVsPt -p TT_red,Wjets_red,Wjets_ljets -o $PBASE/$what/mu_withW_${Me}_eta_12_24.root  -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
#echo "( $B0 $ElFakeVsPt -p TT_red,QCDEl_red,Wjets_red,Wjets_ljets -o $PBASE/$what/el_withW_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
#echo "( $B0 $ElFakeVsPt -p TT_red,QCDEl_red,Wjets_red,Wjets_ljets -o $PBASE/$what/el_withW_${Me}_eta_15_25.root  -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"
#echo "( $B0 $MuFakeVsPt -p TT_red,DY_red,DY_ljets -o $PBASE/$what/mu_withDY_${Me}_eta_00_12.root  -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
#echo "( $B0 $MuFakeVsPt -p TT_red,DY_red,DY_ljets -o $PBASE/$what/mu_withDY_${Me}_eta_12_24.root  -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
#echo "( $B0 $ElFakeVsPt -p TT_red,QCDEl_red,DY_red,DY_ljets -o $PBASE/$what/el_withDY_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
#echo "( $B0 $ElFakeVsPt -p TT_red,QCDEl_red,DY_red,DY_ljets -o $PBASE/$what/el_withDY_${Me}_eta_15_25.root  -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"

echo "( $B0 $MuFakeVsPt -p TT_red,TT_bjets,TT_SS.*_red,TT_redCharmless -o $PBASE/$what/mu_ttbnb_${Me}_eta_00_12.root  -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_red,TT_bjets,TT_SS.*_red,TT_redCharmless -o $PBASE/$what/mu_ttbnb_${Me}_eta_12_24.root  -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_SS_red,TT_bjets  -o $PBASE/$what/mu_bnb_${Me}_eta_00_12.root  -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_SS_red,TT_bjets  -o $PBASE/$what/mu_bnb_${Me}_eta_12_24.root  -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_SS_red,TT_SS.*_red,TT_bjets  -o $PBASE/$what/mu_sum_${Me}_eta_00_12.root  -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_SS_red,TT_SS.*_red,TT_bjets  -o $PBASE/$what/mu_sum_${Me}_eta_12_24.root  -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_SS_red,TT_bjets -o $PBASE/$what/el_bnb_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_SS_red,TT_bjets -o $PBASE/$what/el_bnb_${Me}_eta_15_25.root  -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_SS_redNC,TT_bjets -o $PBASE/$what/el_bnbNC_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_SS_redNC,TT_bjets -o $PBASE/$what/el_bnbNC_${Me}_eta_15_25.root  -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_SS_redNC,TT_bjets -o $PBASE/$what/el_bnbe_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_SS_redNC,TT_bjets  -o $PBASE/$what/el_bnbe_${Me}_eta_15_25.root  -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_SS_redNC,TT_bjets  -o $PBASE/$what/el_bnbe_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"

PlotX="${B1/--plotmode=norm/}"; 
PlotX="${PlotX/make_fake_rates_plots.txt/make_fake_rates_xvars.txt}"
MuNormPlot="$PlotX $MuDen ${BDen} --sP '${XVar}_coarsecomb'" 
ElNormPlot="$PlotX $ElDen ${BDen} --sP '${XVar}_coarseelcomb'" 
echo "( $MuNormPlot -p TT_SS_red --pdir $PBASE/$what   -o {O}/mu_ttnorm_${Me}_eta_00_12.root  -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
echo "( $MuNormPlot -p TT_SS_red --pdir $PBASE/$what   -o {O}/mu_ttnorm_${Me}_eta_12_24.root  -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
echo "( $ElNormPlot -p TT_SS_redNC_pink --pdir $PBASE/$what -o {O}/el_ttnorm_${Me}_eta_00_15.root   -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $ElNormPlot -p TT_SS_redNC_pink --pdir $PBASE/$what -o {O}/el_ttnorm_${Me}_eta_15_25.root   -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"

CElFakeVsPt="$ElDen ${BDen} --sP '${XVar}_coarse' --sp TT_conv --xcut 10 999"; BC="${B0/--yrange 0 0.??/--yrange 0 1.0}"
echo "( $BC $CElFakeVsPt -p TT_conv,QCDEl_conv_El12 -o $PBASE/$what/el_conv_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $BC $CElFakeVsPt -p TT_conv,QCDEl_conv_El12 -o $PBASE/$what/el_conv_${Me}_eta_15_25.root  -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"
CElConvVsPt="$ElDen ${BDen} --sP '${XVar}_coarse' --sp QCDEl_red_El12 --xcut 20 999 "; BC="${B0/--sP ${Num}/--sP isConv}"
echo "( $BC $CElConvVsPt -p TT_red,QCDEl_red_El12 -o $PBASE/$what/el_isconv_${Me}_eta_00_15.root  -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $BC $CElConvVsPt -p TT_red,QCDEl_red_El12 -o $PBASE/$what/el_isconv_${Me}_eta_15_25.root  -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"

for C in 15_17.5 17.5_22.5 20_30 45_60 45_999; do
    conePtCut="-A pt20 conePt '${C%_*} < LepGood_pt && LepGood_pt < ${C#*_}' ";
    echo "( $B1 $MuDen ${BDen} ${conePtCut} --ratioDen TT_SS_red --ratioNums ".*" -p TT_SS_red,TT_bjets,QCDMu_bjets,QCDMu_ljets --pdir $PBASE/$what/mu_bnb_${Me}_eta_00_12_ptC_${C}/ -R pt20 eta 'abs(LepGood_eta)<1.2'   --sP 'lep_.*' ${BG} )"
    echo "( $B1 $MuDen ${BDen} ${conePtCut} --ratioDen TT_SS_red --ratioNums ".*" -p TT_SS_red,TT_bjets,QCDMu_bjets,QCDMu_ljets --pdir $PBASE/$what/mu_bnb_${Me}_eta_12_24_ptC_${C}/ -R pt20 eta 'abs(LepGood_eta)>1.2'   --sP 'lep_.*' ${BG} )"
    echo "( $B1 $ElDen ${BDen} ${conePtCut} --ratioDen TT_SS_red --ratioNums ".*" -p TT_SS_red,TT_bjets,QCDEl_red,QCDEl_bjets,QCDEl_ljets --pdir $PBASE/$what/el_bnb_${Me}_eta_00_15_ptC_${C}/ -R pt20 eta 'abs(LepGood_eta)<1.479' --sP 'lep_.*' ${BG} )"
    echo "( $B1 $ElDen ${BDen} ${conePtCut} --ratioDen TT_SS_red --ratioNums ".*" -p TT_SS_red,TT_bjets,QCDEl_red,QCDEl_bjets,QCDEl_ljets --pdir $PBASE/$what/el_bnb_${Me}_eta_15_25_ptC_${C}/ -R pt20 eta 'abs(LepGood_eta)>1.479' --sP 'lep_.*' ${BG} )"
    echo "( $B1 $ElDen ${BDen} ${conePtCut} --ratioDen TT_SS_redNC_pink --ratioNums ".*" -p TT_SS_red_viol,TT_SS_redNC_pink,TT_SSb._redNC,QCDEl_red_El17,QCDEl_redNC_El17 --pdir $PBASE/$what/el_sum_${Me}_eta_00_15_ptC_${C}/ -R pt20 eta 'abs(LepGood_eta)<1.479' --sP 'lep_.*' ${BG} )"
    echo "( $B1 $ElDen ${BDen} ${conePtCut} --ratioDen TT_SS_redNC_pink --ratioNums ".*" -p TT_SS_red_viol,TT_SS_redNC_pink,TT_SSb._redNC,QCDEl_red_El17,QCDEl_redNC_El17 --pdir $PBASE/$what/el_sum_${Me}_eta_15_25_ptC_${C}/ -R pt20 eta 'abs(LepGood_eta)>1.479' --sP 'lep_.*' ${BG} )"
    echo "( $B1 $ElDen ${BDen} ${conePtCut} --ratioDen TT_SS_redNC_pink --ratioNums ".*" -p TT_SS_red_viol,TT_SS_redNC_pink,QCDEl_red_El17,QCDEl_redNC_El17 --pdir $PBASE/$what/el_sumold_${Me}_eta_00_15_ptC_${C}/ -R pt20 eta 'abs(LepGood_eta)<1.479' --sP 'lep_.*' ${BG} )"
    echo "( $B1 $ElDen ${BDen} ${conePtCut} --ratioDen TT_SS_redNC_pink --ratioNums ".*" -p TT_SS_red_viol,TT_SS_redNC_pink,QCDEl_red_El17,QCDEl_redNC_El17 --pdir $PBASE/$what/el_sumold_${Me}_eta_15_25_ptC_${C}/ -R pt20 eta 'abs(LepGood_eta)>1.479' --sP 'lep_.*' ${BG} )"
    echo "( $B1 $MuDen ${BDen} ${conePtCut} --ratioDen TT_SS_redB --ratioNums ".*" -p TT_SS_red[BE][BE],QCDMu_bjets[BE] --pdir $PBASE/$what/mu_BE_${Me}_ptC_${C}/ -X pt20  --sP 'lep_.*' ${BG} )"
done


# TTbar by composition
echo "( $B0 $MuFakeVsPt -p TT_red,TT_SS.*_red -o $PBASE/$what/mu_ttvars_${Me}_eta_00_12.root -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_red,TT_SS.*_red -o $PBASE/$what/mu_ttvars_${Me}_eta_12_24.root -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_red,TT_SS.*_red -o $PBASE/$what/el_ttvars_${Me}_eta_00_15.root -R pt20 eta 'abs(LepGood_eta)<1.479'   ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_red,TT_SS.*_red -o $PBASE/$what/el_ttvars_${Me}_eta_15_25.root -R pt20 eta 'abs(LepGood_eta)>1.479'   ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_red,TT_redNC,TT_SS.*_redNC -o $PBASE/$what/el_ttvarsNC_${Me}_eta_00_15.root -R pt20 eta 'abs(LepGood_eta)<1.479'   ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_red,TT_redNC,TT_SS.*_redNC -o $PBASE/$what/el_ttvarsNC_${Me}_eta_15_25.root -R pt20 eta 'abs(LepGood_eta)>1.479'   ${BG} )"
# TT by flavour
echo "( $B0 $MuFakeVsPt -p TT_red,TT_bjets,TT_ljets -o $PBASE/$what/mu_ftt_${Me}_eta_00_12.root -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
echo "( $B0 $MuFakeVsPt -p TT_red,TT_bjets,TT_ljets -o $PBASE/$what/mu_ftt_${Me}_eta_12_24.root -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_red,TT_bjets,TT_ljets,TT_ljetsNC -o $PBASE/$what/el_ftt_${Me}_eta_00_15.root -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_red,TT_bjets,TT_ljets,TT_ljetsNC -o $PBASE/$what/el_ftt_${Me}_eta_15_25.root -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_SS_redNC,TT_bjets,TT_cjets,TT_ljetsNC -o $PBASE/$what/el_fttNC_${Me}_eta_00_15.root -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
echo "( $B0 $ElFakeVsPt -p TT_SS_redNC,TT_bjets,TT_cjets,TT_ljetsNC -o $PBASE/$what/el_fttNC_${Me}_eta_15_25.root -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"

#QCD by flavour
MuFakeVsPtB="$MuDen --sP '${XVar}_fine' --sp QCDMu_red ${BDen} --xcut 10 999 --xline 15" 
ElFakeVsPtB="$ElDen --sP '${XVar}_fine' --sp QCDEl_redNC ${BDen} --xcut 10 999 --xline 15" 


#Z3l conversions
MuFakeVsPtZ="$MuDen ${BDen} --sP '${XVar}_zcoarse' --sp TT_red --xcut 10 45" 
ElFakeVsPtZ="$ElDen ${BDen} --sP '${XVar}_zcoarse' --sp TT_red --xcut 10 45" 
#echo "( $B0 $MuFakeVsPtZ -p Z3l_red.* -o $PBASE/$what/mu_z3lwcnc_${Me}_eta_00_12.root -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
#echo "( $B0 $MuFakeVsPtZ -p Z3l_red.* -o $PBASE/$what/mu_z3lwcnc_${Me}_eta_12_24.root -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
#echo "( $B0 $ElFakeVsPtZ -p Z3l_red.* -o $PBASE/$what/el_z3lwcnc_${Me}_eta_00_15.root -R pt20 eta 'abs(LepGood_eta)<1.479' ${BG} )"
#echo "( $B0 $ElFakeVsPtZ -p Z3l_red.* -o $PBASE/$what/el_z3lwcnc_${Me}_eta_15_25.root -R pt20 eta 'abs(LepGood_eta)>1.479' ${BG} )"

# TTbar vs Z3l closure 
MuFakeVsPtZ="$MuDen ${BDen} --sP '${XVar}_zcoarse2' --sp TT_red --xcut 10 30 " 
ElFakeVsPtZ="$ElDen ${BDen} --sP '${XVar}_zcoarse2' --sp TT_red --xcut 10 30 " 
#echo "( $B0 $MuFakeVsPtZ -p TT_red,Z3l_red,Z3l_red_80 -o $PBASE/$what/mu_ttz3l_${Me}_eta_00_12.root -R pt20 eta 'abs(LepGood_eta)<1.2'   ${BG} )"
#echo "( $B0 $MuFakeVsPtZ -p TT_red,Z3l_red,Z3l_red_80 -o $PBASE/$what/mu_ttz3l_${Me}_eta_12_24.root -R pt20 eta 'abs(LepGood_eta)>1.2'   ${BG} )"
echo "( $B0 $ElFakeVsPtZ -p TT_red,Z3l_red_70  -o $PBASE/$what/el_ttz3l_${Me}_eta_00_15.root -R pt20 eta 'abs(LepGood_eta)<1.479'   ${BG} )"
echo "( $B0 $ElFakeVsPtZ -p TT_red,Z3l_red_70  -o $PBASE/$what/el_ttz3l_${Me}_eta_15_25.root -R pt20 eta 'abs(LepGood_eta)>1.479'   ${BG} )"
echo "( $B0 $ElFakeVsPtZ -p TT_red,TT_redNC,Z3l_red,Z3l_red_80,Z3l_redNC,Z3l_red_m3l  -o $PBASE/$what/el_ttz3lplus_${Me}_eta_00_15.root -R pt20 eta 'abs(LepGood_eta)<1.479'   ${BG} )"
echo "( $B0 $ElFakeVsPtZ -p TT_red,TT_redNC,Z3l_red,Z3l_red_80,Z3l_redNC,Z3l_red_m3l  -o $PBASE/$what/el_ttz3lplus_${Me}_eta_15_25.root -R pt20 eta 'abs(LepGood_eta)>1.479'   ${BG} )"

