# macro to train models
# v1--> first version
# v2--> 
#      * fix the electron veto to EE region (one branch nos being read correctly)
#      * After results from v1, increased the number of trees for performance of BDTG2
#                               also changed number of cuts.
# --- Muon and electrons with ttH preselection
sbatch -J mu_tth_mva --wrap './train_model.sh mu_tth_v2_nanovars mu_tth 2022EE'
sbatch -J el_tth_mva --wrap './train_model.sh el_tth_v2_nanovars el_tth 2022EE'

# --- Muon and electrons with ttW preselection
sbatch -J mu_ttw_mva --wrap './train_model.sh mu_ttw_v2_nanovars mu_ttw 2022EE'
sbatch -J el_ttw_mva --wrap './train_model.sh el_ttw_v2_nanovars el_ttw 2022EE'

# --- Muon and electrons with ttW preselection
sbatch -J mu_wz_mva --wrap './train_model.sh mu_wz_v2_nanovars mu_wz 2022EE'
sbatch -J el_wz_mva --wrap './train_model.sh el_wz_v2_nanovars el_wz 2022EE'
