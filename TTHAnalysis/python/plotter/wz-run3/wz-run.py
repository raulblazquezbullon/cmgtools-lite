'''
Main script to run WZ-Run3 analysis
'''

# -- Import libraries -- #
from optparse import OptionParser
import sys
import cfgs.configurations as cfgs 
from utils import *

# -- Define functions -- #
def add_parsing_opts():
  ''' Function with base parsing arguments used by any script '''
  parser = OptionParser(usage = "python wz-run.py [options]", 
                                 description = "Main options for running WZ analysis") 

  parser.add_option("--inpath", dest = "inpath", action="append", 
                help = "Input (folder) name")
  parser.add_option("--outname", dest = "outname", type="string", default = "default_folder", 
                help = "Output (folder) name")
  parser.add_option("--year", dest = "year", type=int, default = 2022, 
                help = "Production year")
  parser.add_option("--extra", dest = "extra", type="string", default = "", 
                help = "Any extra command one wants to parse to the main CMGTools scripts")
  parser.add_option("--run-cluster",  dest = "run_cluster",  action = "store_true", default=True, 
                help = "Add cluster configuration")
  parser.add_option("--ncores", dest = "ncores", default = 8, 
                help = ''' Number of cores to be used ''')
  parser.add_option("--queue", dest = "queue", default = "batch", 
                help = ''' Queue for job submission ''')
  return parser


# -- Start here -- #
if __name__ == "__main__":
  mode = sys.argv[1]

  parser = add_parsing_opts()
  
  ### Validity input checks
  available_modes = cfgs.producers.keys()
   
  producer_instance = cfgs.producers[mode]

  producer = producer_instance(parser)
  producer.run()
