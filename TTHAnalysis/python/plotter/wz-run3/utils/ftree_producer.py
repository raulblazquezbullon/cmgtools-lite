from producer import producer
import os

class ftree_producer(producer):
  name = "ftree_producer"
  basecommand = "python prepareEventVariablesFriendTree.py"
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
    nc = 1 
    jn = self.jobname
    queue  = self.queue
    logpath = self.outname
    newcommand = self.command + " --env oviedo -q %s --log-dir %s"%(queue, logpath)
    return newcommand

  def override_paths(self):
#    inpath   = "/".join([self.inpath, self.tier, self.prodname, doData])
    inpath   = "/".join([self.inpath, doData])
    outname  = "%s/%s"%(inpath.replace("phedex","phedexrw"), self.modules[self.step][0])
    self.inpath = inpath
    self.outname = outname
    ## Use the parent class override_paths method
    ## to prioritize I/O paths given by the user. 
    super(ftree_producer, self).override_paths()
    return
  
  def add_friends(self):
	step = self.step
	friendtxt = ""
	modulekeys = self.modules.keys()
	for key in modulekeys[:step-1]:
	  modulename = self.modules[key][0]
	  moduletype = self.modules[key][1]
	  addmethod = "-F"
	  if moduletype == "mc":
		if self.isData: continue
		addmethod = "--FMC"
	  elif moduletype == "data":
		addmethod = "--FD"
	  friendtxt += "%s Friends %s/%s/{cname}_Friend.root "%(addmethod, self.inpath, modulename)
	return friendtxt

  def run(self):
	doData = "data" if self.isData else "mc"
	self.inpath  = self.datapath if self.isData else self.mcpath
        if self.outname == "./foolder":
	  self.outname = os.path.join(self.inpath.replace("phedex","phedexrw"), self.modules[self.step][0])

        # For some friend trees there are multiple options
        # but we want to save them with the same folder name
        # deal with that here.
        try:
          mod_opts = self.modules[self.step][2]
          module_name = mod_opts["data"] if self.isData else mod_opts["mc"]
        except:
          module_name = self.modules[self.step][0]

	self.commandConfs = ["%s"%self.inpath,
		"%s"%self.outname,
		"--name %s"%self.jobname,
		"-t %s"%self.treename,
		"-n -I %s %s"%(self.wz_modules, module_name),
		" -N %s"%self.chunksize,
		"%s"%self.extra,
		self.add_friends()]
    
	return
