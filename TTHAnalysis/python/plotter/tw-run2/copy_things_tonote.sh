# #### Mat. de respuesta y purezas y estabilidades

plotter="/nfs/fanae/user/vrbouza/Proyectos/tw_run2/desarrollo/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter"
slash="/"

#tmpfolder="temp_2021_11_05_cosasnivelpartviejasconcardsnuevas"
#tmpfolder="temp_2021_07_29_cardspapreapp"
#tmpfolder="temp_2022_01_24_actualizacionnotadif"
tmpfolder="temp_2022_02_13_actualizacionnotaARC1"
prefix=$plotter/$tmpfolder/

outfolder="/nfs/fanae/user/vrbouza/Proyectos/tw_run2/documentacion/AN-20-118"

#vars=("Lep1_Pt Jet1_Pt Lep1Lep2_DPhi Lep1Lep2Jet1MET_Pz Lep1Lep2Jet1_M Lep1Lep2Jet1MET_Mt")
vars=("Jet1_Pt Lep1Lep2_DPhi Lep1Lep2Jet1MET_Pz Lep1Lep2Jet1_M Lep1Lep2Jet1MET_Mt")
# threeyears="2016 2017 2018"
years="2016 2017 2018 run2"
regs="1j1t 2j1t 2j2t"

sfplots="btaggingEff_B_ btaggingEff_C_ btaggingEff_L_ leptonSF_e_idtight_ leptonSF_e_recotight_ leptonSF_m_idtight_ leptonSF_m_iso_ triggerSF_ElMu_"
sfplots2016="btaggingEff_B_2016 btaggingEff_C_2016 btaggingEff_L_2016 leptonSF_e_idtight_2016 leptonSF_e_recotight_2016 leptonSF_m_idtight_BCDEF_2016 leptonSF_m_idtight_GH_2016 leptonSF_m_iso_BCDEF_2016 leptonSF_m_iso_GH_2016 triggerSF_ElMu_2016"

# for p in $sfplots2016; do
#     cp $prefix/SFhistos/2016/$p.pdf $outfolder/figures/mccorrections/
# done;
#
# for p in $sfplots; do
#     for y in 2017 2018; do
#         cp $prefix/SFhistos/$y/$p$y.pdf $outfolder/figures/mccorrections/
#     done;
# done;

for v in $vars; do
     for y in $years; do
#         cp $prefix/differential/$y/$v/responseplots/PurStab_$v.pdf $outfolder/figures/unfolding/$y/
         cp $prefix/differential/$y/$v/responseplots/R_$v\_.pdf $outfolder/figures/unfolding/$y/
     done;
#    cp $prefix/differential/run2/particleplots/$v\_regcomp.pdf $outfolder/figures/unfolding/run2/
#    cp $prefix/differential/run2/particleplots/$v\_areacomp.pdf $outfolder/figures/unfolding/run2/
#    cp $prefix/differential/run2/particleplots/$v\_LCurve.pdf $outfolder/figures/unfolding/run2/

#    cp $prefix/differential/run2/detectorplots/$v\_detector.pdf $outfolder/figures/diffresults/run2/
#    cp $prefix/differential/run2/detectorplots/$v\uncs_detector.pdf $outfolder/figures/diffresults/run2/

    cp $prefix/differential/run2/particleplots/$v.pdf $outfolder/figures/diffresults/run2/
    cp $prefix/differential/run2/particleplots/$v\uncs.pdf $outfolder/figures/diffresults/run2/
#
      cp $prefix/differential/run2/particlefidbinplots/$v\_particlefidbin.pdf $outfolder/figures/diffresults/run2/
      cp $prefix/differential/run2/particlefidbinplots/$v\uncs_particlefidbin.pdf $outfolder/figures/diffresults/run2/
#
     #cp $prefix/differential/run2/$v/CovMatplots/Cov_$v\_detector.pdf $outfolder/figures/diffresults/run2/
     #cp $prefix/differential/run2/$v/CovMatplots/Cov_$v\_particle.pdf $outfolder/figures/diffresults/run2/
      cp $prefix/differential/run2/$v/CovMatplots/Cov_$v\_particlefidbin.pdf $outfolder/figures/diffresults/run2/

     cp $prefix/differential/run2/$v/sigextr_fit_combine/Impacts/impacts_run2_$v.pdf $outfolder/figures/diffresults/impacts/
     cp $prefix/differential/run2/$v/sigextr_fit_combine/ObsImpacts/impacts_run2_$v.pdf $outfolder/figures/diffresults/obsimpacts/
done;
#
#for y in $years; do
#    mkdir -p $outfolder/figures/unfolding/$y
#    cp $prefix/differential/$y/tables/condnum.tex $outfolder/figures/unfolding/$y/
#done;
#capitaldiffvars=("Lep1_Pt Jet1_Pt Lep1Lep2_DPhi Lep1Lep2Jet1MET_Pz Lep1Lep2Jet1_M Lep1Lep2Jet1MET_Mt")
capitaldiffvars=("Jet1_Pt Lep1Lep2_DPhi Lep1Lep2Jet1MET_Pz Lep1Lep2Jet1_M Lep1Lep2Jet1MET_Mt")
for v in $capitaldiffvars; do
    cp $prefix/differential/run2/tables/$v\_particle.tex $outfolder/figures/unfolding/run2/
    cp $prefix/differential/run2/tables/$v\_particlefidbin.tex $outfolder/figures/unfolding/run2/
done;
#
# return

#cp $prefix/cards/run2/impacts_1j1t,2j1t,2j2t/impactsrun2_1j1t2j1t2j2t.pdf $outfolder/figures/inclsignalextr/Fit-figures/impactst1.pdf
#cp $prefix/varplots/run2/1j1t/MVAtrain/tmvaBDT_1j1b_20bins.pdf $outfolder/figures/inclsignalextr/Fit-figures/
#cp $prefix/varplots/run2/2j1t/MVAtrain/tmvaBDT_2j1b_12bins.pdf $outfolder/figures/inclsignalextr/Fit-figures/
#cp $prefix/varplots/run2/2j2t/jet2_pt_rebin.pdf $outfolder/figures/inclsignalextr/Fit-figures/


train1j1tvars=("nloosejets jet1_pt loosejet1_pt lep1lep2jet1met_m lep1lep2jet1_c lep1lep2jet1_pt")
#for v in $train1j1tvars; do
#     cp $prefix/varplots/run2/1j1t/MVAtrain/$v.pdf $outfolder/figures/inclsignalextr/BDT-figures/1j1t/
#done;

train2j1tvars=("jet2_pt lep1jet1_dr lep12jet12_dr")
#for v in $train2j1tvars; do
#     cp $prefix/varplots/run2/2j1t/MVAtrain/$v.pdf $outfolder/figures/inclsignalextr/BDT-figures/2j1t/
#done;


diffvars=("lep1_pt jet1_pt lep1lep2_dphi lep1lep2jet1met_pz lep1lep2jet1_m lep1lep2jet1met_mt")
for v in $diffvars; do
#     mkdir -p $outfolder/figures/eventselection/run2/1j1t/differential/
     cp $prefix/varplots/run2/1j1t/differential/$v.pdf $outfolder/figures/eventselection/run2/1j1t/differential/
     cp $prefix/varplots/run2/1j1t/$v.pdf $outfolder/figures/eventselection/run2/1j1t/
done;


varsforplots=("lep1_pt jet1_pt lep1lep2_pt lep1lep2_ptsum lep1lep2_dphi lep1lep2_m")
for v in $varsforplots; do
    for r in $regs; do
#         mkdir -p $outfolder/figures/eventselection/run2/$r
        cp $prefix/varplots/run2/$r/$v.pdf $outfolder/figures/eventselection/run2/$r/
    done;
done;

#cp $prefix/varplots/run2/1j1t/nloosejets.pdf $outfolder/figures/eventselection/run2/1j1t/
# # mkdir -p $outfolder/figures/eventselection/run2/nojets/
#cp $prefix/varplots/run2/nojets/nJetnBJet.pdf $outfolder/figures/eventselection/run2/nojets/


#### SF BTAGGING
btagsffolder="temp_2022_01_26_effs"
subyears="2016 2017 2018"
mkdir -p $outfolder/figures/unfolding/ratios/
for y in $subyears; do
    cp $btagsffolder/effs/$y/btaggingSF_deepjet_$y.pdf $outfolder/figures/mccorrections/
done;


#### Response matrices ratios
mkdir -p $outfolder/figures/unfolding/ratios/
for v in $capitaldiffvars; do
    cp $tmpfolder/differential/run2/responseratios/Ratio_$v\_h1617.pdf $outfolder/figures/unfolding/ratios/
    cp $tmpfolder/differential/run2/responseratios/Ratio_$v\_h1618.pdf $outfolder/figures/unfolding/ratios/
    cp $tmpfolder/differential/run2/responseratios/Ratio_$v\_h1718.pdf $outfolder/figures/unfolding/ratios/
done;


#### Unfolding closure tests
mkdir -p $outfolder/figures/unfolding/closuretest/
for v in $capitaldiffvars; do
    cp $tmpfolder/differential/run2/$v/sigextr_fit_combine/closuretests/plots/$v\_closuretest.pdf $outfolder/figures/unfolding/closuretest/
done;


# #### PREVIA
# tmpfolder="temp_2021_02_03_plotstotal"
# prefix=$plotter/$tmpfolder/
# mkdir -p $outfolder/figures/previous/run2/
# for v in $capitaldiffvars; do
#     cp $prefix/differential/run2/particlefidbinplots/$v\_particlefidbin.pdf $outfolder/figures/previous/run2/
#     cp $prefix/differential/run2/particlefidbinplots/$v\uncs_particlefidbin.pdf $outfolder/figures/previous/run2/
# done;
#
# return
# #### ALTERNATIVA
# tmpfolder="temp_2021_02_23_fitultrasolido_nocontrol_norm"
# prefix=$plotter/$tmpfolder/
# mkdir -p $outfolder/figures/alternative/run2/
# for v in $capitaldiffvars; do
#     cp $prefix/differential/run2/particlefidbinplots/$v\_particlefidbin.pdf $outfolder/figures/alternative/run2/
#     cp $prefix/differential/run2/particlefidbinplots/$v\uncs_particlefidbin.pdf $outfolder/figures/alternative/run2/
# done;
# mkdir -p $outfolder/figures/alternative/run2/3j2t/
#
# tmpfolder="temp_2021_02_10_pruebasdifrun2"
# prefix=$plotter/$tmpfolder/
# cp $prefix/varplots/run2/3j2t/lep1lep2jet1_m.pdf $outfolder/figures/alternative/run2/3j2t/
# return

# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/LeadingLepPt/R_TLeadingLepPt.pdf $outfolder/figures/resultados/
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/LeadingLepPt/PurStab_LeadingLepPt.pdf $outfolder/figures/resultados/
#
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/LeadingJetPt/R_TLeadingJetPt.pdf $outfolder/figures/resultados/
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/LeadingJetPt/PurStab_LeadingJetPt.pdf $outfolder/figures/resultados/
#
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/DPhiLL/R_TDPhiLL.pdf $outfolder/figures/resultados/
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/DPhiLL/PurStab_DPhiLL.pdf $outfolder/figures/resultados/
#
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/DilepMETJet1Pz/R_TDilepMETJet1Pz.pdf $outfolder/figures/resultados/
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/DilepMETJet1Pz/PurStab_DilepMETJet1Pz.pdf $outfolder/figures/resultados/
#
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/M_LLB/R_TMLLB.pdf $outfolder/figures/resultados/
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/M_LLB/PurStab_MLLB.pdf $outfolder/figures/resultados/
#
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/MT_LLMETB/R_TMTLLMETB.pdf $outfolder/figures/resultados/
# cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/MT_LLMETB/PurStab_MTLLMETB.pdf $outfolder/figures/resultados/

# # #### Otros
# cp $prefixCustom_TnLooseCentral-1.pdf $outfolder/figures/
#
# vars=("LeadingJetPt" "LeadingLepPt" "DPhiLL" "DilepMETJet1Pz" "MTLLMETB" "MLLB")
# uplimit=$((${#vars[@]}-1))
#
# # # Figs. 7 y 8
# for ((i=0; i<=$uplimit; i++)); do
#     cp $prefix${vars[i]}.pdf $outfolder/figures/SignalRegion/
#     cp $prefixCustom_${vars[i]}.pdf $outfolder/figures/SignalRegion/
#     cp $prefixcontrol/${vars[i]}.pdf $outfolder/figures/ControlRegion/
#     cp $prefixcontrol/Custom_${vars[i]}.pdf $outfolder/figures/ControlRegion/
# done
#
#
# vars=("LeadingJetPt" "LeadingLepPt" "DPhiLL" "DilepMETJet1Pz" "MT_LLMETB" "M_LLB")
# uplimit=$((${#vars[@]}-1))
#
# for ((i=0; i<=$uplimit; i++)); do
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}_asimov_LCurve.pdf $outfolder/figures/resultados/
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}_asimov_regcomp.pdf $outfolder/figures/resultados/
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}_asimov_areacomp.pdf $outfolder/figures/resultados/
#
#     # Fig. 16
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}_asimov.pdf $outfolder/figures/resultados/
#
#     # Fig. 17-19 (plots folded)
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}_folded.pdf $outfolder/figures/resultados/
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}uncertainties_folded.pdf $outfolder/figures/resultados/
#
#     # Fig. 21-23 (plots unfolded)
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}.pdf $outfolder/figures/resultados/
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}uncertainties.pdf $outfolder/figures/resultados/
#
#     # Fig. 24-25 (covariancias)
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/CovMat/Cov_${vars[i]}_folded.pdf $outfolder/figures/resultados/CovMat/
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/CovMat/Cov_${vars[i]}_unfolded.pdf $outfolder/figures/resultados/CovMat/
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/CovMat/Cov_${vars[i]}_unfolded_fiducialnorm.pdf $outfolder/figures/resultados/CovMat/
#
#     # Fig. 26-28 (norm. al ancho del bin)
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}_norm.pdf $outfolder/figures/resultados/
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}uncertainties_norm.pdf $outfolder/figures/resultados/
#
#     # Fig. 29-31 (norm. a la sección eficaz fiducial)
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}_fiducial.pdf $outfolder/figures/resultados/
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}uncertainties_fiducial.pdf $outfolder/figures/resultados/
#
#     # Fig. 32-34 (norm. a la sección eficaz fiducial y al ancho del bin)
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}_fiducialnorm.pdf $outfolder/figures/resultados/
#     cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/${vars[i]}uncertainties_fiducialnorm.pdf $outfolder/figures/resultados/
# done
#
# #tables
# # cp /nfs/fanae/user/vrbouza/www/TFM/Unfolding/Results/tables/* $outfolder/tables/
