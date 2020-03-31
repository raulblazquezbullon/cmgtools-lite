#!/bin/sh

OUTDIR=$1

###Running all WZ: 
for i in wz_3l_br_data wz_3l_sr_data wz_3l_appl_data wz_3l_zz_cr_data wz_3l_dy_cr_data wz_2lss_sr_data wz_2lss_appl_data
do
    python 5TeV/5TeV_plots.py $1 plots $i
    echo ''
done

echo ''
echo ''
echo ''
echo ''


##Running all ttbar:
for i in ttbar_data ttbar_data_ee ttbar_data_em ttbar_data_mm ttbar_data_ss ttbar_data_appl ttbar_data_tight  ttbar_data_tight_em  ttbar_data_tight_ee ttbar_data_tight_mm
do
    python 5TeV/5TeV_plots.py $1 plots $i
    echo ''
done

echo ''
echo ''
echo ''
echo ''



##Running all WW:
for i in ww_data ww_appl_data
do
    python 5TeV/5TeV_plots.py $1 plots $i
    echo ''
done


