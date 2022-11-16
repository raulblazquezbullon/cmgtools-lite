### Execute the required scripts to reproduce results from SMP-20-014 in Run3 analysis

outfolder=$1

if [[ -z $outfolder ]]; then echo "Please provide an output directory" && exit 0; fi
#python ./wz-run3/wz-run.py plot --outname /pool/phedexrw/userstorage/cvico/wz-run3/plots/$1 --run-local --ncores 12  --extra '-E ^SRWZ --sP  charge.*,flavor.*,m3l, m3lmet_Meas,mll3l.*,nJet30.*,jet1.*,lep.* -W "MuonIDSF*MuonISOSF*ElecIDSF*ElecRECOSF"'
python ./wz-run3/wz-run.py plot --outname /pool/phedexrw/userstorage/cvico/wz-run3/plots/$1 --run-local --ncores 12  --extra '-E ^SRWZ --sP  charge.*,flavor.*,m3l, m3lmet_Meas,mll3l.*,nJet30.*,jet1.*,lep.* -W "getLeptonSF(0,0,2022,LepSel_pt[0],LepSel_eta[0],LepSel_pdgId[0])*getLeptonSF(0,0,2022,LepSel_pt[1],LepSel_eta[1],LepSel_pdgId[1])*getLeptonSF(0,0,2022,LepSel_pt[2],LepSel_eta[2],LepSel_pdgId[2])"'
