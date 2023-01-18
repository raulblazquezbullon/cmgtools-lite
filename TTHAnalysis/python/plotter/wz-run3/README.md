# WZ Run3 analysis folder
A bunch of scripts used to produce WZ results. Available producers are:
 * **postprocesor_producer**: to postprocess nanoAOD events following the configurations provided in [here](https://github.com/Cvico/cmgtools-lite/blob/104X_dev_nano_WZ/TTHAnalysis/cfg/run_WZpostproc_fromNanoAOD_cfg.py).
 * **ftree_producer**: to process friend trees. Modules are defined [here](https://github.com/Cvico/cmgtools-lite/blob/104X_dev_nano_WZ/TTHAnalysis/python/tools/nanoAOD/wzsm_modules.py).
 * **plot_producer**: general mcPlots.py executioner.

Each of these producers inherit from the main `producer` class, which is implemented under `utils/producer.py`.  
## Usage
The ```wz_run.py``` script controls calls to the different producers. It's syntax is:
 ```python
 python wz_run.py [mode] [opts]
 ```
 Where ```mode``` can be:
  * **postproc** 
  * **friend**
  * **plot**

And ```opts``` can vary depending on the producer. Options are detailed inside each producer, and it can also be checked out by simply executing:
 ```python
 python wz_run.py [mode] --help
 ```
 Mostly everything is handled by the `producer` class. Producers will always prioritize I/O paths given via the `--inpath` and `--outname` options, and if these are not given, it will take default values defined in the `defaults` dictionary that can be found in `cfgs/defaults.py`.
