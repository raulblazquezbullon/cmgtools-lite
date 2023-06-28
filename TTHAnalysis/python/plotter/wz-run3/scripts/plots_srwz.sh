## Plots show for inclusive measurement in the WZSR phase space
outfolder=$1

if [[ -z $outfolder ]]; then echo "Please provide an output directory" && exit 0; fi

python ./wz-run3/wz-run.py plot --outname $1  --ncores 64  --extra '-E ^SRWZ --sP  charge.*,flavor.*,m3l,m3lmet_Meas,mll3l.*,nJet30.* '
