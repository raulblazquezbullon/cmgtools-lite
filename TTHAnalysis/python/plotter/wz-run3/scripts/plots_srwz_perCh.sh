## Plots show for inclusive measurement in the WZSR phase space
outfolder=$1

if [[ -z $outfolder ]]; then echo "Please provide an output directory" && exit 0; fi

for ch in eee eem mme mmm; do
  python ./wz-run3/wz-run.py plot --outname $1/$ch  --ncores 16  --extra "-E ^SRWZ -E flav_${ch} -W 'muonSF*electronSF*bTagWeight' --sP charge.*,flavor.*,m3l, m3lmet_Meas,mll3l.*,nJet30.*,jet1.*,lep.*" --do-submit

done
