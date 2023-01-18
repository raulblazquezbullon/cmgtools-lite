# Create cards for inclusive analysis 
python wz-run3/wz-run.py card --outname cards/srwz/third_version/ --ncores 32 --do-submit

for ch in eee mme eem mmm; do
  python wz-run3/wz-run.py card --outname cards/srwz/third_version/$ch --ncores 32  --extra "-E $ch" --binname "wzcard_${ch}" --do-submit
done

sbatch -c 32 -J CMGCard -p batch -e cards/crzz/third_version//logs/log.%j.%x.err -o cards/crzz/first_version//logs/log.%j.%x.out --wrap 'python makeShapeCards_wzRun3.py wz-run3/2022/mca_wz_3l.txt wz-run3/common/cuts_wzsm.txt "(abs(LepZ1_pdgId)+abs(LepZ2_pdgId)+abs(LepW_pdgId)-33)/2" "4,-0.5,3.5" --binname zzcard --tree NanoAOD  -P /beegfs/data/nanoAODv9/temp_wz/mc -P /beegfs/data/nanoAODv9/temp_wz/data --FMCs {P}/jmeUncertainties --Fs {P}/leptonJetRecleaning --Fs {P}/leptonBuilder --Fs {P}/triggerSequence --FMCs {P}/scalefactors  -L wz-run3/functionsWZ.cc -W 'muonSF*electronSF*bTagWeight' -j 32 -l 29.62 -E ^CRZZnomet -X ^AllTight -E ^ZZTight --unc wz-run3/common/systs_wz.txt --od cards/crzz/first_version// --autoMCStats '
