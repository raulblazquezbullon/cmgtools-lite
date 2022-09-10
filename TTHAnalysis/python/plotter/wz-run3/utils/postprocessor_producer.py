from producer import producer
# Example:
# nanopy_batch.py run_WZpostproc_fromNanoAOD_cfg.py -b 'sbatch batchScript.sh' --option year="2022" --option selectComponents="MC" --output-dir /pool/phedexrw/userstorage/cvico/wz-run3/nanoAODprev10_postProc/01-09-2022/mc/ 

class postprocessor_producer(producer):
  name = "postprocesor_producer"
  basecommand = "nanopy_batch.py"
  wz_cfg = "run_WZpostproc_fromNanoAOD_cfg.py"
  module = "wz_seq1" 

  def add_more_options(self, parser):
    self.parser = parser
    parser.add_option("--datatype", "-d",
                      dest = "datatype",
                      type = "string", 
                      default = "MC", 
                      help = '''Whether to run data or MC''')
    return
  
  def build_command(self):
    confs = self.commandConfs 
    command = "%s %s"%(self.basecommand," ".join(confs))
    print(command)
    return

  def run(self):
    ''' Unpack the options ''' 
    self.unpack_opts()
 
    outname  = self.outname
    datatype = self.datatype
   
    if datatype not in ["MC", "DATA"]: self.raiseError("Wrong input datatype: %s -- Valid options are: MC or DATA (case sensitive)")
    year     = self.year
    extra    = self.extra

    self.commandConfs = ["%s"%self.wz_cfg,
                    "-b 'sbatch batchScript.sh'",
                    "--option year='%d'"%year,
                    "--option selectComponents='%s'"%datatype,
                    "--output-dir %s"%(outname),
                    "%s"%extra]
    self.build_command() 
    return
  
