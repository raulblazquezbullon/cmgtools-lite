# Train lepton MVA for Run3
## How to postprocess miniAOD to produce samples used for training
To be included. 

## 2022 post EE training
 * **Dataset metadata** 
    * Name: `/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8/Run3Summer22EEMiniAODv3-124X_mcRun3_2022_realistic_postEE_v1-v2/MINIAODSIM`
    * Postprocessed from MiniAOD to NanoAOD so we can use the variables need to retrain the MVA.
    * We use different generation matching criteria to define signal and background using the same sample. Detailed in the code.
 * **Command to train**
    * `./train_models.sh` this will train several at once
 * **Command to get MVA performance plots**
     * `./plot_models.sh`
 * **Command to get ROC Curves, fake rates and significance plots**
     * `root -l -b -q 'my_tmva_reader.cxx("muon", "2022EE",  "true")'` --> run this first to produce ntuples
     * `root -l -b -q 'my_tmva_reader.cxx("muon", "2022EE")'` --> this will produce plots
     * `root -l -b -q 'my_tmva_reader.cxx("electron", "2022EE",  "true")'` --> run this first to produce ntuples
     * `root -l -b -q 'my_tmva_reader.cxx("electron", "2022EE")'` --> this will produce plots

## Visualize results
```
root -l -e 'TMVA::TMVAGui("training_test_muons/Run3_mu.root")' # For muons
root -l -e 'TMVA::TMVAGui("training_test_electrons/Run3_el.root")' # For muons
```

## Training description
The model is trained with TMVA. There's an specific training for electrons and another one for muons. The variables used can be found in CMSSW [here](https://github.com/Cvico/cmssw/commit/c6ec0da8c64b03a042f539391873a9eebbc03649).

 * **Muons**
   
   * **Muon_LepGood_pt**: transverse momentum.
   * **Muon_LepGood_eta**: pseudorapidity.
   * **Muon_LepGood_miniRelIsoCharged**: PF relative isolation (charged component)/pt.
   * **Muon_LepGood_miniRelIsoNeutral**: PF relative isolation (all - charged)/pt.
   * **Muon_LepGood_jetNDauChargedMVASel**: number of charged daughters of the closest jet.
   * **Muon_LepGood_jetPtRelv2**: relative momentum of the lepton with respect to the closest jet after subtracting the lepton
   * **Muon_LepGood_jetDF**: This is the btagging DeepFlavor score of the associated jet.
   * **Muon_LepGood_jetPtRatio**: ratio between the lepton and the closest jet pTs (1+(PFIsoAll04/pt) if no matching jet).
   * **Muon_LepGood_dxy**: transverse impact parameter wrt PV.
   * **Muon_LepGood_sip3d**: 3D impact parameter significance wrt first PV.
   * **Muon_LepGood_dz**: longitudinal impact parameter wrt PV.
   * **Muon_LepGood_segmentComp**: segment compatibility.

* **Electrons**
   
   * **Electron_LepGood_pt**: transverse momentum.
   * **Electron_LepGood_eta**: pseudorapidity.
   * **Electron_LepGood_miniRelIsoCharged**: PF relative isolation (charged component)/pt.
   * **Electron_LepGood_miniRelIsoNeutral**: PF relative isolation (all - charged)/pt.
   * **Electron_LepGood_jetNDauChargedMVASel**: number of charged daughters of the closest jet.
   * **Electron_LepGood_jetPtRelv2**: relative momentum of the lepton with respect to the closest jet after subtracting the lepton
   * **Electron_LepGood_jetDF**: This is the btagging DeepFlavor score of the associated jet.
   * **Electron_LepGood_jetPtRatio**: ratio between the lepton and the closest jet pTs (1+(PFIsoAll04/pt) if no matching jet).
   * **Electron_LepGood_dxy**: transverse impact parameter wrt PV.
   * **Electron_LepGood_sip3d**: 3D impact parameter significance wrt first PV.
   * **Electron_LepGood_dz**: longitudinal impact parameter wrt PV.
   * **Electron_LepGood_mvaFall17V2noIso**: electron MVA ID value.