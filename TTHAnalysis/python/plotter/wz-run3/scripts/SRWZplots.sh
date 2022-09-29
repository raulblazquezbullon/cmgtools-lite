### Execute the required scripts to reproduce results from SMP-20-014 in Run3 analysis

outfolder=$1

if [[ -z $outfolder ]]; then echo "Please provide an output directory" && exit 0; fi
python ./wz-run3/wz-run.py plot --do-submit --outfolder $1 --ncores 64 --extra '-E ^SRWZ --sP  charge.*,flavor.*,m3lmet_Meas.*,mll3l.*,nJet30.*,jet1.*,lep.*'
