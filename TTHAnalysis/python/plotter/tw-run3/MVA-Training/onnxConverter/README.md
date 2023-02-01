There are problems loading onnx in cmssw. 
We can evaluate an onnx model in cmssw but not converting it. The script in this folder takes care of this.

Note: don't do cmsenv, we need plain python3 with packages installed with pip

Note: we need this enviroment `source /nfs/fanae/MadGraph.3.3.2/configure.sh` to load python3.9 that is neccesary for onnx 