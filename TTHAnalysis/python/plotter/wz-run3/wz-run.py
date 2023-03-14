'''
Main script to run WZ-Run3 analysis
'''
# -- Import libraries -- #
from optparse import OptionParser
import sys

# -- Import producers -- #
from utils.producer import producer
from utils.postprocessor_producer import postprocessor_producer
from utils.ftree_producer import ftree_producer
from utils.plot_producer import plot_producer
from utils.card_producer import card_producer


# -- Dictionary with instances to each producer -- #
producers = {
 "postproc" : postprocessor_producer,
 "friend"   : ftree_producer,
 "plot"     : plot_producer,
 "card"     : card_producer,
}

# -- Define functions -- #
def add_parsing_opts():
  ''' Function with base parsing arguments used by any script '''
  parser = OptionParser(usage = "python wz-run.py [options]", 
                                 description = "Main options for running WZ analysis") 

  # -- Input and outputs
  parser.add_option("--datapath", dest = "datapath", default = "/beegfs/data/nanoAODv10/wz/data",
              help = "Input (folder) name with data files")
  parser.add_option("--mcpath", dest = "mcpath", default = "/beegfs/data/nanoAODv10/wz/mc",
              help = "Input (folder) name with mc files")    
  parser.add_option("--outname", dest = "outname", type="string", default = "./foolder",
              help = "Output (folder) name")
  parser.add_option("--unc", dest = "uncfile", type="string", default = "wz-run3/common/systs_wz.txt",
              help = "File with systematic variations")
  # -- Version control
  parser.add_option("--prodname", dest = "prodname", type="string", default = "jan2023", 
              help = "Name of the last folder in which the output will be saved")
  parser.add_option("--tier", dest = "tier", type=str, default = "nanoAODv10", 
              help = "Production tier used in output path formats")
  # -- Batch control
  parser.add_option("--do-submit", dest = "doSubmit", default = False, action = "store_true",
              help = "Execute commands instead of just prompting them. BE CAREFUL")
  parser.add_option("--isData", dest = "isData", action = "store_true", default = False, 
              help = "Important for postprocessing and friend trees, where MC and data differences matter.")
  parser.add_option("--run-local",  dest = "run_local",  action = "store_true", default=False, 
              help = "Add cluster configuration")
  parser.add_option("--ncores", dest = "ncores", default = 8, 
              help = ''' Number of cores to be used ''')
  parser.add_option("--queue", dest = "queue", default = "batch", 
              help = ''' Queue for job submission ''')
  # -- Other stuff
  parser.add_option("--year", dest = "year", type=int, default = 2022, 
              help = "Production year")
  parser.add_option("--extra", dest = "extra", type="string", default = "", 
              help = "Any extra command one wants to parse to the main CMGTools scripts")
  return parser


# -- Start here -- #
if __name__ == "__main__":
  mode = sys.argv[1]

  parser = add_parsing_opts()
  
  ### Validity input checks
  available_modes = list(producers.keys())
   
  producer_instance = producers[mode]

  producer = producer_instance(parser)
  producer.run()
  producer.build_command() 
  producer.submit_command()
  
