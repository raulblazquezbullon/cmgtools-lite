# WZ Run3 analysis folder

## Logistics
### Important paths
 * nanoAODv10 of Run3 MC and data is stored in: `/pool/phedex/nanoAODv10/27sep2022/`
    * Postprocess trees are stored in `/beegfs/data/nanoAODv10/wz/trees/`
 * nanoAODv11 of Run3 MC and data is stored in: `/beegfs/data/nanoAODv11/30march2023/`
   * Postprocess trees are stored in `/beegfs/data/nanoAODv11/wz/trees/`

## Generate config files to run postprocessing over MC or data
For that you can write a CFG file and store it under the `cfgs` folder. Then you can use the `create_sample_cfg.py` script to automatically write the CFG as follows:
```
# For nanoAODv11
# MC 2022
python3 create_sample_cfg.py 

# MC 2022EE
python3 create_sample_cfg.py --year 2022EE 

# Data 2022
python3 create_sample_cfg.py --isData 

# Data 2022EE
python3 create_sample_cfg.py --isData --year 2022EE 
```

## How to run the postprocessing 
This step basically runs over raw nanoAOD and performs:
 1. An skimming that keeps only 2 same-sign lepton events.
 2. When running over data, it removes trigger overlap between datasets.
 3. Adds a few branches for dataset metadata (cross sections, a tag that identifies data or mc, etc...)

**For MC**
```
cd $CMSSW_BASE/src/CMGTools/cfg
python3 ../python/plotter/wz-run3/wz-run.py postproc
```

**For Data**
```
cd $CMSSW_BASE/src/CMGTools/cfg
python3 ../python/plotter/wz-run3/wz-run.py postproc --isData
```

## Friend trees
**In general**:
```
cd $CMSSW_BASE/src/CMGTools/macros
python3 ../python/plotter/wz-run3/wz-run.py friend --step $STEP
```

Now just change step for:

  * **1**: for JME corrections.
  * **2**: for lepton-jet recleaning.
  * **3**: for lepton variable builder.
  * **4**: for definition of the trigger strategy.
  * **5**: for scalefactors

By default this will run for MC, in order to run over data just add `--isData` to the command above.

