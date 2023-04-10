from .producer import producer

class postprocessor_producer(producer):
  name = "postprocesor_producer"
  basecommand = "nanopy_batch.py"
  wz_cfg = "run_WZpostproc_fromNanoAOD_cfg.py"
  module = "wz_seq1" 


  def submit_InCluster(self):
    return self.command 

  def run(self):
    self.doData = "DATA" if self.isData else "MC"
    outname   = "/".join([self.outname])
    
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
  
