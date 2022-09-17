''' Main class for producing CMGtools commands '''
# -- Import libraries -- #
import argparse
import os
import cfgs.defaults as defaults 

class producer(object):
  name = "producer"

  cluster_comm = "sbatch -c {nc} -J {jn} -p {q} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{comm}' "
  jobname = "CMGjob"
  
  def __init__(self, parser):
    self.add_more_options(parser)
    self.unpack_opts()
    self.override_paths()
    return

  def add_more_options(self, parser):
    parser.add_option('--prueba', dest = 'prueba')
    self.parser = parser 
    return

  def override_paths(self):
    ''' This method is used to check if default I/O paths have to 
        be overriden by the user parsed ones '''
    opts = vars(self.opts)
    if opts["inpath"] != None: 
      self.inpath = opts["inpath"]
    if opts["outname"] != None:
      self.outname = "./%s"%opts["outname"]
    return 

  def summarize(self):
    ''' Method to show a summary of the given options '''
    print(" >> %s will run with the following options"%self.name) 
    opts = vars(self.opts)
    
    for opt in opts:
      print("  * %s : %s"%(opt, getattr(self, opt)))
    print(" >> Command below:")
    return
 
  def submit_InCluster(self):
    nc = self.ncores
    jn = self.jobname
    q  = self.queue
    logpath = self.outname
    newcommand = self.cluster_comm.format(nc = nc, jn = jn, q = q, logpath = logpath, comm = self.command)
    return newcommand

  def build_command(self):
    self.summarize()
    confs = self.commandConfs 
    command = "%s %s"%(self.basecommand," ".join(confs))
    self.command = command
    return

  def submit_command(self):
    comm = self.command
    if not self.run_local: 
      comm = self.submit_InCluster()
    print(comm)
    return
     
  def unpack_opts(self):
    ''' Method to unpack the given options into a dictionary '''
    self.opts, self.args = self.parser.parse_args()
    for opt in vars(self.opts):
      if opt in ["inpath", "outname"] and vars(self.opts)[opt] == None:
        ### Use default values for paths
        setattr(self, opt, defaults.defaults[self.name][opt])
      else:
        setattr(self, opt, vars(self.opts)[opt])
    return

  def run(self):
    ''' To be implemented in different classes ''' 
    pass

  def raiseError(self, msg):
    logmsg = "[%s::ERROR]: %s"%(self.name, msg)
    raise RuntimeError(logmsg)
    return

  def raiseWarning(self, msg):
    logmsg = "[%s::WARNING]: %s"%(self.name, msg)
    raise RuntimeWarning(logmsg)
    return
