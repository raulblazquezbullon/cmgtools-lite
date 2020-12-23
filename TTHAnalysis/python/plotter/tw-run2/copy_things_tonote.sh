# #### Mat. de respuesta y purezas y estabilidades

plotter="/nfs/fanae/user/vrbouza/Proyectos/tw_run2/desarrollo/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter"
slash="/"
tmpfolder="temp_2020_12_17"
prefix=$plotter/$tmpfolder/

outfolder="/nfs/fanae/user/vrbouza/Proyectos/tw_run2/documentacion/AN-20-118"


vars=("Lep1_Pt Jet1_Pt Lep1Lep2_DPhi Lep1Lep2Jet1MET_Pz Lep1Lep2Jet1_M Lep1Lep2Jet1MET_Mt")
years="2016 2017 2018 run2"

for v in $vars; do
    for y in $years; do
        cp $prefix/differential/$y/$v/responseplots/PurStab_$v.pdf $outfolder/figures/8-Unfolding/$y/
        cp $prefix/differential/$y/$v/responseplots/R_$v\_.pdf $outfolder/figures/8-Unfolding/$y/
    done;
    cp $prefix/differential/run2/particleplots/$v\_regcomp.pdf $outfolder/figures/8-Unfolding/run2/
    cp $prefix/differential/run2/particleplots/$v\_areacomp.pdf $outfolder/figures/8-Unfolding/run2/
    cp $prefix/differential/run2/particleplots/$v\_LCurve.pdf $outfolder/figures/8-Unfolding/run2/

    cp $prefix/differential/run2/detectorplots/$v\_detector.pdf $outfolder/figures/9-DiffResults/run2/
    cp $prefix/differential/run2/detectorplots/$v\uncs_detector.pdf $outfolder/figures/9-DiffResults/run2/

    cp $prefix/differential/run2/particleplots/$v.pdf $outfolder/figures/9-DiffResults/run2/
    cp $prefix/differential/run2/particleplots/$v\uncs.pdf $outfolder/figures/9-DiffResults/run2/

    cp $prefix/differential/run2/particlefidbinplots/$v\_particlefidbin.pdf $outfolder/figures/9-DiffResults/run2/
    cp $prefix/differential/run2/particlefidbinplots/$v\uncs_particlefidbin.pdf $outfolder/figures/9-DiffResults/run2/

    cp $prefix/differential/run2/$v/CovMatplots/Cov_$v\_detector.pdf $outfolder/figures/9-DiffResults/run2/
    cp $prefix/differential/run2/$v/CovMatplots/Cov_$v\_particle.pdf $outfolder/figures/9-DiffResults/run2/
    cp $prefix/differential/run2/$v/CovMatplots/Cov_$v\_particlefidbin.pdf $outfolder/figures/9-DiffResults/run2/
done;

return

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
