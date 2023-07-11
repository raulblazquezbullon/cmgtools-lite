#!/bin/sh
ulimit -s unlimited
set -e
cd /mnt_pool/c3_users/user/rblazquez/TFG/wz_run3/CMSSW_12_4_12/src
export SCRAM_ARCH=slc7_amd64_gcc10
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval `scramv1 runtime -sh`
cd /nfs/fanae/user/rblazquez/TFG/wz_run3/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/plotter/check_discriminant_vars/cards_cut/rebin9/m3lmet_Meas/flav_mmm/cards/combined_cards
if [ ${SLURM_ARRAY_TASK_ID} -eq 1 ]; then
  combine -M MultiDimFit -n _paramFit_Test_FSR --algo impact --redefineSignalPOIs r_prompt_WZ -P FSR --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 2 ]; then
  combine -M MultiDimFit -n _paramFit_Test_ISR --algo impact --redefineSignalPOIs r_prompt_WZ -P ISR --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 3 ]; then
  combine -M MultiDimFit -n _paramFit_Test_elecidsf --algo impact --redefineSignalPOIs r_prompt_WZ -P elecidsf --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 4 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesAbsolute --algo impact --redefineSignalPOIs r_prompt_WZ -P jesAbsolute --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 5 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesAbsolute_year --algo impact --redefineSignalPOIs r_prompt_WZ -P jesAbsolute_year --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 6 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesBBEC1 --algo impact --redefineSignalPOIs r_prompt_WZ -P jesBBEC1 --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 7 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesBBEC1_year --algo impact --redefineSignalPOIs r_prompt_WZ -P jesBBEC1_year --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 8 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesEC2 --algo impact --redefineSignalPOIs r_prompt_WZ -P jesEC2 --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 9 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesEC2_year --algo impact --redefineSignalPOIs r_prompt_WZ -P jesEC2_year --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 10 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesFlavorQCD --algo impact --redefineSignalPOIs r_prompt_WZ -P jesFlavorQCD --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 11 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesHF --algo impact --redefineSignalPOIs r_prompt_WZ -P jesHF --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 12 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesHF_year --algo impact --redefineSignalPOIs r_prompt_WZ -P jesHF_year --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 13 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesRelativeBal --algo impact --redefineSignalPOIs r_prompt_WZ -P jesRelativeBal --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 14 ]; then
  combine -M MultiDimFit -n _paramFit_Test_jesRelativeSample_year --algo impact --redefineSignalPOIs r_prompt_WZ -P jesRelativeSample_year --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 15 ]; then
  combine -M MultiDimFit -n _paramFit_Test_lumi_2022_early --algo impact --redefineSignalPOIs r_prompt_WZ -P lumi_2022_early --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 16 ]; then
  combine -M MultiDimFit -n _paramFit_Test_muonidsf --algo impact --redefineSignalPOIs r_prompt_WZ -P muonidsf --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 17 ]; then
  combine -M MultiDimFit -n _paramFit_Test_normZZ --algo impact --redefineSignalPOIs r_prompt_WZ -P normZZ --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 18 ]; then
  combine -M MultiDimFit -n _paramFit_Test_normfakes --algo impact --redefineSignalPOIs r_prompt_WZ -P normfakes --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 19 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin0_fakes_DY --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin0_fakes_DY --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 20 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin0_fakes_TT --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin0_fakes_TT --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 21 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin0_prompt_WZ --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin0_prompt_WZ --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 22 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin0_prompt_ZZ --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin0_prompt_ZZ --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 23 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin1_fakes_DY --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin1_fakes_DY --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 24 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin1_fakes_TT --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin1_fakes_TT --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 25 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin1_prompt_WZ --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin1_prompt_WZ --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 26 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin1_prompt_ZZ --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin1_prompt_ZZ --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 27 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin2 --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin2 --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 28 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin3_fakes_DY --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin3_fakes_DY --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 29 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin3_fakes_TT --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin3_fakes_TT --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 30 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin3_prompt_WZ --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin3_prompt_WZ --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 31 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin3_prompt_ZZ --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin3_prompt_ZZ --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 32 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin4 --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin4 --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 33 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin5 --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin5 --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 34 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin6 --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin6 --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 35 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin7 --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin7 --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 36 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binwz-card_bin8 --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binwz-card_bin8 --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 37 ]; then
  combine -M MultiDimFit -n _paramFit_Test_prop_binzz-card_bin3 --algo impact --redefineSignalPOIs r_prompt_WZ -P prop_binzz-card_bin3 --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi
if [ ${SLURM_ARRAY_TASK_ID} -eq 38 ]; then
  combine -M MultiDimFit -n _paramFit_Test_r_prompt_ZZ --algo impact --redefineSignalPOIs r_prompt_WZ -P r_prompt_ZZ --floatOtherPOIs 1 --saveInactivePOI 1 --X-rtd MINIMIZER_MaxCalls=99999999999 --maxFailedSteps 500 --X-rtd MINIMIZER_analytic --setRobustFitTolerance 0.05 --cminPreScan --cminDefaultMinimizerStrategy 0 -m 125 -d wz-ws.root
fi


