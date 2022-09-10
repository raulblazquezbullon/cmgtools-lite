''' Main class for producing CMGtools commands '''
# -- Import libraries -- #
import argparse
import os

class producer(object):
  name = "producer"

  cluster_comm = "sbatch -c {nc} -J {jn} -p {q} -e {logpath}/log.%j.%x.err -o {logpath}/log.%j.%x.out --wrap '{comm}' "
  jobname = "CMGjob"
  
  def __init__(self, parser):
    self.add_more_options(parser)
    return

  def add_more_options(self, parser):
    parser.add_option('--prueba', dest = 'prueba')
    self.parser = parser 
    return

  def summarize(self):
    ''' Method to show a summary of the given options '''
    print(" >> %s will run with the following options"%self.name) 
    opts = vars(self.opts)
    
    for opt in opts:
      # -- Deal with input paths -- # 
      print("  * %s : %s"%(opt, opts[opt]))
      setattr(self, opt, opts[opt])
    return
 
  def submit_InCluster(self):
    nc = self.ncores
    jn = self.jobname
    q  = self.queue
    logpath = self.outname
    newcommand = self.cluster_comm.format(nc = nc, jn = jn, q = q, logpath = logpath, comm = self.command)
    return newcommand

  def build_command(self):
    confs = self.commandConfs 
    command = "python %s %s"%(self.basecommand," ".join(confs))
    self.command = command
    return

  def submit_command(self):
    comm = self.command
    if self.run_cluster: 
      comm = self.submit_InCluster()
    print(comm)
    return
     
  def unpack_opts(self):
    ''' Method to unpack the given options into a dictionary '''
    self.opts, self.args = self.parser.parse_args()
    self.summarize()
    return

  def run(self):
    ''' To be implemented in different classes '''
    self.unpack_opts()
    pass

  def raiseError(self, msg):
    logmsg = "[%s::ERROR]: %s"%(self.name, msg)
    raise RuntimeError(logmsg)
    return
