''' This file contains some lists and dictionaries used by different scripts'''

# -- Import producers -- #
from utils.producer import producer
from utils.postprocessor_producer import postprocessor_producer
from utils.ftree_producer import ftree_producer
from utils.plot_producer import plot_producer

# -- Save them in a dictionary -- #
producers = {
 "postproc" : postprocessor_producer,
 "friend"   : ftree_producer,
 "plot"     : plot_producer
}
