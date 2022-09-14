from producer import producer

class ftree_producer(producer):
  name = "ftree_producer"
  basecommand = "prepareEventVariablesFriendTree.py"
  wz_modules = "CMGTools.TTHAnalysis.tools.nanoAOD.wzsm_modules"
  modules = { 1 : ["leptonJetRecleaning", "-F"],
              2 : ["leptonBuilder", "-F"],
              3 : ["triggerSequence", "-F"]}
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
    logpath = self.outname+"/%s"%self.modules[self.step][0]
    
    newcommand = self.command + " --env oviedo -q %s --log-dir %s"%(queue, logpath)
    return newcommand

  def add_friends(self, step):
    friendtxt = ""
    modulekeys = self.modules.keys()

    for key in modulekeys[:step-1]:
      modulename = self.modules[key][0]
      addmethod = self.modules[key][1]
      friendtxt += "%s Friends %s/%s/{cname}_Friend.root "%(addmethod, self.inpath, modulename)
    return friendtxt

  def run(self):
    inpath = self.inpath 
    outname  = self.outname 
    self.outname = outname
    step     = self.step
    treename = self.treename
    extra    = self.extra

    self.commandConfs = ["%s"%inpath,
                    "%s/%s"%(outname, self.modules[step][0]),
                    "--name %s"%self.jobname,
                    "-t %s"%treename,
                    "-n -I %s %s"%(self.wz_modules, self.modules[step][0]),
                    " -N %s"%self.chunksize,
                    "%s"%extra,
                    self.add_friends(step)]
    
    self.build_command() 
    self.submit_command()
    return
  
