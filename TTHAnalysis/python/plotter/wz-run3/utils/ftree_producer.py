from .producer import producer
import os
from cfgs.samplepaths import samplepaths as paths

class ftree_producer(producer):
  name = "ftree_producer"
  basecommand = "python3 prepareEventVariablesFriendTree.py"
  wz_modules = "CMGTools.TTHAnalysis.tools.nanoAOD.wzsm_modules"

  jobname = "happyTreeFriend"
  
  def add_more_options(self, parser):
    self.parser = parser
    parser.add_option("--step", dest = "step", type = int, default = 1, 
                      help = '''Which friend-tree to run.''')
    parser.add_option("--outname", dest = "outname", type="string", default = paths["processed"],
                      help = "Output (folder) name")
    parser.add_option("--treename", dest = "treename", default = "NanoAOD", 
                      help = ''' Name of the tree file ''')
    parser.add_option("--chunksize", dest = "chunksize", default = 100000, 
                      help = ''' Number of chunks to split jobs''')
    return

  def submit_InCluster(self):
    queue  = self.queue
    logpath = self.outname
    newcommand = self.command + " --env oviedo -q %s --log-dir %s"%(queue, logpath)
    return newcommand
  
  def add_friends(self, maxstep = -1):
      """ Method to add friends to command """
      friends = []
      # Iterate over modules available in this year
      for step, module in self.modules[self.year].items():
          # Only add friends to a certain point if step is given
          if maxstep != -1 and step >= maxstep:
              continue
          modulename = module["outname"]
          addmethod = module["addmethod"]
          if not self.isData: 
              friends.append( " --FMC Friends %s/%s/{cname}_Friend.root "%(self.inpath, modulename))
          else: 
              friends.append( " -F Friends %s/%s/{cname}_Friend.root "%(self.inpath, modulename))
          
      
      return " ".join(friends)
  
  def run(self):
    self.inpath  = os.path.join(self.inpath, self.doData, self.year)
    module_name = self.modules[self.year][self.step][self.doData]
    outfriend_folder = self.modules[self.year][self.step]["outname"]
    self.outname = os.path.join(self.outname, self.doData.lower(), self.year, outfriend_folder)
    self.commandConfs = ["%s"%self.inpath,
        "%s"%self.outname,
        "--name %s"%self.jobname,
        "-t %s"%self.treename,
        "-n -I %s %s"%(self.wz_modules, module_name),
        " -N %s"%self.chunksize,
        "%s"%self.extra,
        self.add_friends(self.step)]
    
    return
