# tW Run3

Last updated: **31 Jan 2023**

(Documentation work in progress)

List of important files:

 * plotterHelper.py
 * cardsHelper.py

Commands:
 
 * To produce plots:
    python tw-run3/plotterHelper.py -P 2023-04-10 -y 2022 -o ./temp_Run3_plots/2022_11_22 -r nojets -u -q batch -j 64
 * To produce cards:
    python tw-run3/cardsHelper.py -P 2023-04-10 -y 2022PostEE -o ./temp_Run3_cards/2023-04-16_MultiClass -r all -v all -a -q batch -j 64 
 * To make the fit:
    python tw-run3/fitsHelper.py -y 2022 -i temp_Run3_cards/2022_11_22/ -r 1j1t,2j1t,2j2t
 * To make impacts:
    python tw-run3/getInclusiveImpacts.py -y 2022 -i temp_Run3_cards/2022_11_22/ -r 1j1t,2j1t,2j2t -j 12

 * To compute btag eff:
    python mcEfficiencies.py --tree NanoAOD  -P /beegfs/data/nanoAODv9/temp/postprocv10Run3/tw_run3/productions/2022-10-25/2022/ --split-factor=-1 --year 2022 --FMCs {P}/x_btageff_pasf  tw-run3/mca-tw.txt tw-run3/cuts-tw-btageff.txt  tw-run3/plots-tw/plots-tw-nojets_btageffsels.txt tw-run3/plots-tw/plots-tw-nojets_btageffvars.txt  -o temp_Run3_plots/2022_11_22_addedLeptonSFs_correctedJson_addedUnc/2022/eff/output.root -j 12

 * To produce 2D SFs plots:
    python tw-run3/plotSFhistograms.py ./temp_Run3_plots/2023_01_21_Plots_de_SFs_ttbarRun3
 * To produce uncertainty variations plots:
    python tw-run3/plotUncsVariations.py temp_Run3_cards/2023_01_21_AllEras_ChangedOverlapRemoval_JesAndSFsFromttbarRun3/2022/2j2t/ -j 8

There is a subfolder under tw-run3 called utils. It contains several scripts useful for different tasks, they are:
 * copyTo_www.py: copy a folder to your website and adds .php files for visualisation in the browser.
 * replacepdftext.sh: it takes a plot in pdf style and substitutes one string by another. Useful for removing preliminary from plots.

 # Train MVA

The script to train is under `MVA-training` folder. To use your model in the analysis, you need to do the following:
 * Train and save the model with the training script. The model should be saved in joblib format.
 * Convert the joblib model to ONNX (there is a dedicated script to do this). It is located in `MVA-training/onnxConverter/`. Follow instructions the readme instructions in that folder.
 * Use the ONNX model to create the friend trees.


 # Samples tW
 [link](https://docs.google.com/spreadsheets/d/1ajj4HEToMIxzCNrgyGBdPO0e-UniPjZSXWibZdBAO00/edit#gid=0)