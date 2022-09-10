from producer import producer

class ftree_producer(producer):
  name = "ftree_producer"
  basecommand = "prepareEventVariablesFriendTree.py"
  wz_modules = "CMGTools.TTHAnalysis.tools.nanoAOD.wzsm_modules"
  modules = { 1 : "leptonJetRecleaning",
              2 : "leptonBuilderWZSM"}
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
    nc = 1 
    jn = self.jobname
    queue  = self.queue
    logpath = self.outname+"/%s"%self.modules[self.step]
    
    newcommand = self.command + " --env oviedo -q %s --log-dir %s"%(queue, logpath)
    return newcommand


  def run(self):
    ''' Unpack the options ''' 
    self.unpack_opts()
 
    inpath   = self.inpath[0] # inpath is given as list -- for ftree just take the first one
    outname  = self.outname
    step     = self.step
    treename = self.treename
    extra    = self.extra

    self.commandConfs = ["%s"%inpath,
                    "%s/%s"%(outname, self.modules[step]),
                    "--name wzfriend",
                    "-t %s"%treename,
                    "-n -I %s %s"%(self.wz_modules, self.modules[step]),
                    " -N %d"%self.chunksize,
                    "%s"%extra]
    self.build_command() 
    self.submit_command()
    return
  
