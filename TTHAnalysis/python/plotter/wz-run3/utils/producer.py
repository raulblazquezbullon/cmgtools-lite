''' Main class for producing CMGtools commands '''
# -- Import libraries -- #
import argparse
import os,sys
from cfgs.samplepaths import samplepaths as paths

class producer(object):
    # -- Friend tree modules 
    modules = { 
        "2022": {
            1 : {"data" : "jmeCorrections_data", 
                 "mc"   : "jmeCorrections_mc", 
                 "addmethod" : "simple", 
                 "outname" : "jmeCorrections"},
            2 : {"data" : "temp_lepmva_ee_data",
                 "mc"   : "temp_lepmva_ee",
                 "addmethod" : "simple",
                 "outname" : "lepmva" },
            3 : {"data" : "leptonJetRecleaning",
                 "mc"   : "leptonJetRecleaning",
                 "addmethod" : "simple",
                 "outname" : "leptonJetRecleaning" },
            4 : {"data" : "leptonBuilder",
                 "mc"   : "leptonBuilder",
                 "addmethod" : "simple",
                 "outname" : "leptonBuilder"},

            5 : {"data" : "triggerSequence",
                 "mc"   : "triggerSequence",
                 "addmethod" : "simple",
                 "outname" : "triggerSequence"},
           # 5 : {"data" : None,
           #      "mc"   : "scalefactors",
           #      "addmethod" : "simple",
           #      "outname" : "scalefactors"}
            
        },
        "2022EE": {
            1 : {"data" : "jmeCorrections_data_EE", 
                 "mc"   : "jmeCorrections_mc_EE", 
                 "addmethod" : "simple", 
                 "outname" : "jmeCorrections"},
            2 : {"data" : "temp_lepmva_ee_data",
                 "mc"   : "temp_lepmva_ee",
                 "addmethod" : "simple",
                 "outname" : "lepmva" },
            3 : {"data" : "leptonJetRecleaning",
                 "mc"   : "leptonJetRecleaning",
                 "addmethod" : "simple",
                 "outname" : "leptonJetRecleaning" },
            4 : {"data" : "leptonBuilder",
                 "mc"   : "leptonBuilder",
                 "addmethod" : "simple",
                 "outname" : "leptonBuilder"},
            5 : {"data" : "triggerSequence",
                 "mc"   : "triggerSequence",
                 "addmethod" : "simple",
                 "outname" : "triggerSequence"},
            
          #  6 : {"data" : None,
          #       "mc"   : "scalefactors",
          #       "addmethod" : "mc",
          #       "outname" : "scalefactors"}
          #  
        }
    }

    weights = []#["muonSF*electronSF"]
    functions = ["wz-run3/functionsWZ.cc"]

    name = "producer"
    cluster_comm = "sbatch -c {nc} -J {jn} -p {q} -e {logpath}/logs/log.%j.%x.err -o {logpath}/logs/log.%j.%x.out --wrap '{comm}' "
    jobname = "CMGjob"
    
    def __init__(self, parser):
        self.add_more_options(parser)
        self.unpack_opts()
        self.doData = "data" if self.isData else "mc"

        return

    def add_more_options(self, parser):
        self.parser = parser 
        return

    def summarize(self):
        ''' Method to show a summary of the given options '''
        print((" >> %s will run with the following options"%self.name)) 
        opts = vars(self.opts)
        
        for opt in opts:
            if opt == "extra" : continue # Plot this at the end 
            print(("    * %s : %s"%(opt, getattr(self, opt))))
        print("    * extra : %s"%(getattr(self, "extra")))
        print(" >> Command below:")
        return
 
    def submit_InCluster(self):
        nc = self.ncores
        jn = self.jobname
        q    = self.queue
        logpath = self.outname
        ### Make sure log folder exists
        if not os.path.exists("%s/logs"%logpath):
            os.system("mkdir -p %s/logs"%logpath)
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
        if self.doSubmit:
            os.system(comm)
        return
         
    def unpack_opts(self):
        ''' Method to unpack the given options into a dictionary '''
        self.opts, self.args = self.parser.parse_args()
        for opt in vars(self.opts):
            setattr(self, opt, vars(self.opts)[opt])
        return

    def run(self):
        ''' To be implemented in different classes ''' 
        pass

    def get_cut(self, region):
        ''' Minimal cuts to define different regions of the analysis '''
        cuts = {
            "srwz" : "-E ^SRWZ",
            "crzz" : "-E ^CRZZnomet -X ^AllTight -E ^ZZTight"
        }
        return cuts[region]
    

    def raiseError(self, msg):
        logmsg = "[%s::ERROR]: %s"%(self.name, msg)
        raise RuntimeError(logmsg)
        return

    def raiseWarning(self, msg):
        logmsg = "[%s::WARNING]: %s"%(self.name, msg)
        raise RuntimeWarning(logmsg)
        return

