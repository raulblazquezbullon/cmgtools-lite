from producer import producer

class postprocessor_producer(producer):
  name = "postprocesor_producer"
  basecommand = "nanopy_batch.py"
  wz_cfg = "run_WZpostproc_fromNanoAOD_cfg.py"
  module = "wz_seq1" 

  def submit_InCluster(self):
    # Batch is controlled by the submitter
    return self.command 
  
  def override_paths(self):
    self.doData = "DATA" if self.isData else "MC"
    self.outname   = "/".join([self.outname, self.tier, self.prodname, self.doData.lower()])
    ## Use the parent class override_paths method
    ## to prioritize I/O paths given by the user. 
    super(postprocessor_producer, self).override_paths()
    return

  def run(self):
    outname  = self.outname
    year     = self.year
    extra    = self.extra
    doData   = self.doData
 
    self.commandConfs = ["%s"%self.wz_cfg,
                    "-b 'sbatch batchScript.sh'",
                    "--option year='%d'"%year,
                    "--option selectComponents='%s'"%doData,
                    "--output-dir %s"%(outname),
                    "%s"%extra]
    return
  
