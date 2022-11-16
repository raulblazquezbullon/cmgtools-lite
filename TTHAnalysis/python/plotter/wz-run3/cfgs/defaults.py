# -- Some default configurations for an easy use of the producers -- # 
defaults = {
 "postprocesor_producer" : {
    "inpath"  :  "", # Specified in the configuration files 
    #"outname" :  "/pool/phedexrw/userstorage/cvico/wz-run3/trees" 
    "outname" : "/beegfs/data/nanoAODv9/temp_wz/",
 },
 "ftree_producer" : {
    "inpath" : "/beegfs/data/nanoAODv9/temp_wz/",
    #"inpath"  : "/pool/phedex/userstorage/cvico/wz-run3/trees",
    "outname" : "" # Automatically set by the producer
 }, 
 "plot_producer" : { 
    "inpath" : "/beegfs/data/nanoAODv9/temp_wz/",
    #"inpath"    : "/pool/phedex/userstorage/cvico/wz-run3/trees",
    "outname"   : "/pool/phedexrw/userstorage/cvico/wz-run3/plots"
  } 
}


