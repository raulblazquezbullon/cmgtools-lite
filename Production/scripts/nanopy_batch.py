#!/usr/bin/env python3
import sys
from importlib.machinery import SourceFileLoader
import json
import os
import shutil
import pickle
from PhysicsTools.HeppyCore.utils.batchmanager import BatchManager
from PhysicsTools.HeppyCore.framework.heppy_loop import split

def batchScriptCERN( runningMode, jobDir, remoteDir=''):
   if runningMode == "LXPLUS-CONDOR-TRANSFER": 
       raise RuntimeError("running mode not supported")
   elif runningMode == 'IFCA':
       init = """
pushd $CMSSW_BASE/src
echo '==== copying job dir to worker ===='
eval $(scram runtime -sh)
popd
echo
mkdir cache
export TMPDIR=$PWD/cache
mkdir job
cd job
echo '==== copying job dir to worker ===='
cp ../* . 
"""
       dirCopy = """
mv Loop/* .
if [ $? -ne 0 ]; then
   echo 'ERROR: problem copying job directory back'
else
   echo 'job directory copy succeeded'
fi"""

   elif runningMode == 'OVD':
       init = """
pushd $CMSSW_BASE/src
echo '==== copying job dir to worker ===='
eval $(scram runtime -sh)
popd
echo
mkdir cache
export TMPDIR=/tmp/$USER/`shuf -zer -n20  {A..Z} {a..z} {0..9}`/
mkdir -p $TMPDIR
mkdir job
cd job
echo '==== copying job dir to worker ===='
cp ../* . 
"""
       dirCopy = """
mv Loop/* ../.
# cleanup
rm -r $TMPDIR
"""
      
   else: # shared filesystem
       init = """
pushd $CMSSW_BASE/src
eval $(scram runtime -sh)
popd
echo
mkdir cache
export TMPDIR=$PWD/cache
mkdir job
cd job
echo '==== copying job dir to worker ===='
echo
cp -rvf $LS_SUBCWD/* .
"""
       dirCopy = """
cp -rv Loop/* $LS_SUBCWD
if [ $? -ne 0 ]; then
   echo 'ERROR: problem copying job directory back'
else
   echo 'job directory copy succeeded'
fi"""

   if remoteDir=='':
      cpCmd=dirCopy
   elif  remoteDir.startswith("root://eoscms.cern.ch//eos/cms/store/") or remoteDir.startswith("root://eosuser.cern.ch//eos/user/"):
       cpCmd="""echo '==== sending root files to remote dir ===='
echo
export LD_LIBRARY_PATH=/usr/lib64:$LD_LIBRARY_PATH # 
for f in Loop/*.root
do
   ff=`echo $f | cut -d/ -f2`
   ff="${{ff}}_`basename $f | cut -d . -f 1`"
   echo $f
   echo $ff
   export VO_CMS_SW_DIR=/cvmfs/cms.cern.ch
   source $VO_CMS_SW_DIR/cmsset_default.sh
   {eosenv}
   for try in `seq 1 3`; do
      echo "Stageout try $try"
      echo "eos mkdir {srm}"
      eos mkdir {srm}
      echo "eos cp `pwd`/$f {srm}/${{ff}}_{idx}.root"
      eos cp `pwd`/$f {srm}/${{ff}}_{idx}.root
      if [ $? -ne 0 ]; then
         echo "ERROR: remote copy failed for file $ff"
         continue
      fi
      echo "remote copy succeeded"
      remsize=$(eos find --size {srm}/${{ff}}_{idx}.root | cut -d= -f3) 
      locsize=$(cat `pwd`/$f | wc -c)
      ok=$(($remsize==$locsize))
      if [ $ok -ne 1 ]; then
         echo "Problem with copy (file sizes don't match), will retry in 30s"
         sleep 30
         continue
      fi
      echo "everything ok"
      rm $f
      echo {addr}/{srm}/${{ff}}_{idx}.root > $f.url
      break
   done
done
echo
echo '==== sending local files back ===='
echo
{dirCopy}
""".format(
          idx = jobDir[jobDir.find("_Chunk")+6:].strip("/") if '_Chunk' in jobDir else 'all',
          srm = (""+remoteDir+jobDir[ jobDir.rfind("/") : (jobDir.find("_Chunk") if '_Chunk' in jobDir else len(jobDir)) ]).replace("root://eoscms.cern.ch/","").replace("root://eosuser.cern.ch/",""),
          dirCopy = dirCopy,
          addr="root://eoscms.cern.ch" if remoteDir.startswith("root://eoscms.cern.ch") else "root://eosuser.cern.ch",
          eosenv = "export EOS_MGM_URL=root://eosuser.cern.ch" if not remoteDir.startswith('root://eoscms.cern.ch/') else ''
          )
   else:
       print("chosen location not supported yet: "+ remoteDir)
       print('path must start with /store/')
       sys.exit(1)

   script = """#!/bin/bash
echo '==== environment (before) ===='
echo
env | sort
echo
{init}
echo '==== environment (after) ===='
echo
env | sort
echo
echo '==== running ===='
mkdir Loop
nanopy.py --single Loop pycfg.py config.pck --options=options.json
echo
echo '==== sending the files back ===='
echo
rm Loop/cmsswPreProcessing.root 2> /dev/null
{copy}
""".format(copy=cpCmd, init=init)
   return script.encode()



class MyBatchManager( BatchManager ):
    def PrepareJobUser(self, jobDir, value ):
       '''Prepare one job. This function is called by the base class.'''
       print(value)
       print(components[value])
       #prepare the batch script
       scriptFileName = jobDir+'/batchScript.sh'
       scriptFile = open(scriptFileName,'wb')
       storeDir = self.remoteOutputDir_.replace('/castor/cern.ch/cms','')
       self.mode = self.RunningMode(options.batch)
       if self.mode in ('LXPLUS-LSF', 'LXPLUS-CONDOR-SIMPLE', 'LXPLUS-CONDOR-TRANSFER','IFCA','OVD'):
           scriptFile.write( batchScriptCERN( self.mode, jobDir, storeDir ) )
       else: raise RuntimeError("Unsupported mode %s" % self.mode)
       scriptFile.close()
       os.system('chmod +x %s' % scriptFileName)
       shutil.copyfile(cfgFileName, jobDir+'/pycfg.py')
       cfgFile = open(jobDir+'/config.pck','wb')
       pickle.dump( components[value] , cfgFile )
       from PhysicsTools.HeppyCore.framework.heppy_loop import _heppyGlobalOptions
       optjsonfile = open(jobDir+'/options.json','wb')
       optjsonfile.write(json.dumps(_heppyGlobalOptions).encode())
       optjsonfile.close()


if __name__ == '__main__':
    batchManager = MyBatchManager()
    batchManager.parser_.usage="""
    %prog [options] <cfgFile>

    Run nanopy analysis system on the batch.
    Job splitting is determined by your configuration file.
    """

    options, args = batchManager.ParseOptions()

    from PhysicsTools.HeppyCore.framework.heppy_loop import _heppyGlobalOptions
    for opt in options.extraOptions:
        if "=" in opt:
            (key,val) = opt.split("=",1)
            _heppyGlobalOptions[key] = val
        else:
            _heppyGlobalOptions[opt] = True

    cfgFileName = args[0]
    cfo = SourceFileLoader("pycfg", cfgFileName).load_module()
#    cfo = imp.load_source("pycfg", cfgFileName, open(cfgFileName, 'r'))

    components = split( [comp for comp in cfo.selectedComponents if len(comp.files)>0] )
    listOfValues = list(range(0, len(components)))
    listOfNames = [comp.name for comp in components]

    batchManager.PrepareJobs( listOfValues, listOfNames )
    waitingTime = 0.1
    batchManager.SubmitJobs( waitingTime )
