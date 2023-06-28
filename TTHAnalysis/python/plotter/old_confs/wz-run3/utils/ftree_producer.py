from .producer import producer
import os

class ftree_producer(producer):
  name = "ftree_producer"
  basecommand = "python3 prepareEventVariablesFriendTree.py"
  wz_modules = "CMGTools.TTHAnalysis.tools.nanoAOD.wzsm_modules"

  jobname = "happyTreeFriend"
  
  def add_more_options(self, parser):
    self.parser = parser
    parser.add_option("--step", 
                      dest = "step",
                      type = int, 
                      default = 1, 
                      help = '''Which friend-tree to run.''')
    parser.add_option("--treename", 
                      dest = "treename",
                      default = "NanoAOD", 
                      help = ''' Name of the tree file ''')
    parser.add_option("--chunksize", 
                      dest = "chunksize",
                      default = 50000, 
                      help = ''' Number of chunks to split jobs''')
    return

  def submit_InCluster(self):
    queue  = self.queue
    logpath = self.outname
    newcommand = self.command + " --env oviedo -q %s --log-dir %s"%(queue, logpath)
    return newcommand
  
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
