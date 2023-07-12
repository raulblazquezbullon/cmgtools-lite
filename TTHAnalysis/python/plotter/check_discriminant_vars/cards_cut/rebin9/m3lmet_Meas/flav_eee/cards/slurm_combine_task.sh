#!/bin/sh
ulimit -s unlimited
set -e
cd /mnt_pool/c3_users/user/rblazquez/TFG/wz_run3/CMSSW_12_4_12/src
export SCRAM_ARCH=slc7_amd64_gcc10
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval `scramv1 runtime -sh`
cd /nfs/fanae/user/rblazquez/TFG/wz_run3/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/plotter/check_discriminant_vars/cards_cut/rebin9/m3lmet_Meas/flav_eee/cards
if [ ${SLURM_ARRAY_TASK_ID} -eq 1 ]; then
  combine --algo grid --rMin 0 --rMax 6 --redefineSignalPOI r_prompt_WZ -M MultiDimFit -m 125 -d workspace.root --points 200 -n nominal
fi


