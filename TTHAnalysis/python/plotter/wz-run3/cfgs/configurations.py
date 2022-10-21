''' This file contains some lists and dictionaries used by different scripts'''

# -- Import producers -- #
from utils.producer import producer
from utils.postprocessor_producer import postprocessor_producer
from utils.ftree_producer import ftree_producer
from utils.plot_producer import plot_producer

# -- Lumi dictionary 
lumis = {2022 : 7.5}

# -- Dictionary with instances to each producer -- #
producers = {
 "postproc" : postprocessor_producer,
 "friend"   : ftree_producer,
 "plot"     : plot_producer,
}

# -- Some default configurations for an easy use of the producers -- # 
defaults = {
 "postprocesor_producer" : {
    "inpath"  :  "", # Specified in the configuration files 
    "outname" :  "/pool/phedexrw/userstorage/cvico/wz-run3/trees" 
 },
 "ftree_producer" : {
    "inpath"  : "/pool/phedex/userstorage/cvico/wz-run3/trees",
    "outname" : "" # Automatically set by the producer
 }, 
 "plot_producer" : { 
    "inpath"    : "/pool/phedex/userstorage/cvico/wz-run3/trees",
    "outname"   : "/pool/phedexrw/userstorage/cvico/wz-run3/plots"
  } 
}

# -- Friend tree modules 
ftree_modules = { 
  1 : ["leptonJetRecleaning", "simple"],
  2 : ["leptonBuilder"      , "simple"],
  3 : ["triggerSequence"    , "simple"]
}


