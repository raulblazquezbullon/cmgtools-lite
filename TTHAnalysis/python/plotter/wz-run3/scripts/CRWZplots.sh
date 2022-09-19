### Execute the required scripts to reproduce results from SMP-20-014 in Run3 analysis

outfolder=$1

if [[ -z $outfolder ]]; then echo "Please provide an output directory" && exit 0; fi
python ../wz-run.py plot --do-submit --outfolder $1 --ncores 64 --extra '-E ^CRWZ --sP  charge.*,flavor.*,m3lmet_Meas.*,mll3l.*,nJet30.* '
