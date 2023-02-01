# Short recipe for CMGTools 
*Important note*: For Run2 UL and Run3, everything must be written to be compliant with python3 syntax.
#### Set up CMSSW and the base git

```
cmsrel CMSSW_12_4_12
cd CMSSW_12_4_12/src
cmsenv
git cms-init
```

#### Now get the CMGTools subsystem from the cmgtools-lite repository
```
git clone -o cmg-central git@github.com:uniovi-hepex/cmgtools-lite.git -b 124X_dev_nano CMGTools
cd CMGTools
```

#### Add your fork, and push the 80X branch to it
```
git remote add origin  git@github.com:YOUR_GITHUB_REPOSITORY/cmgtools-lite.git
git push -u origin 124X_dev_nano 
```

#### Get the central nanoAOD tools for Friend Tree processing
git clone -o nano-central git@github.com:uniovi-hepex/nanoAOD-tools.git  -b postproc_py3 PhysicsTools/NanoAODTools  

#### Compile
```
cd $CMSSW_BASE/src
scram b -j 8
```
