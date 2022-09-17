from producer import producer
from utils.ftree_producer import ftree_producer
from lumi import lumis

class plot_producer(producer):
  name = "plot_producer"
  basecommand = "python mcPlots.py"
  friends = [" --Fs leptonJetRecleaning",
             " --Fs leptonBuilder"] 
  functions = ["wz-run3/functionsWZ.cc"]

  def add_more_options(self, parser):
    self.parser = parser
    # -- mca includes to consider -- #
    parser.add_option("--mca", 
                  dest = "mca", 
                  type="string", 
                  default = "wz-run3/2022/mca_wz.txt", 
                  help = '''Input mcafile''')
    # -- CMGTools configuration files -- #
    parser.add_option("--cutfile", 
                  dest = "cutfile", 
                  type="string", 
                  default = "wz-run3/common/cuts_wzsm.txt", 
                  help = '''Event selection requirements file''')
    parser.add_option("--mcc", 
                  dest = "mcc", 
                  type="string", 
                  default = "wz-run3/common/mcc_triggerdefs.txt", 
                  help = '''Event selection requirements file''')
    parser.add_option("--plotfile", 
                  dest = "plotfile", 
                  type="string", 
                  default = "wz-run3/common/plots_wz.txt", 
                  help = '''File with plots''')
    parser.add_option("--treename", 
                      dest = "treename",
                      default = "NanoAOD", 
                      help = ''' Name of the tree file ''')
 
    return

  def run(self):
    # -- First step is to unpack all the information -- #
    self.unpack_opts()
    # Yearly stuff 
    year     = self.year
    inpath   = self.inpath
    outname  = self.outname
    extra    = self.extra
    lumi     = lumis[year]

    # Other plotting stuff 
    plottingStuff =  "--obj Events "
    plottingStuff += "--maxRatioRange 0.5 2.0 "
    plottingStuff += "--fixRatioRange "
    plottingStuff += "--print C,pdf,png,txt "
    plottingStuff += "--legendWidth 0.23 "
    plottingStuff += "--legendFontSize 0.036 "
    plottingStuff += "--showMCError "
    plottingStuff += "--showRatio "
    plottingStuff += "--perBin "
    plottingStuff += "--showRatio "
    plottingStuff += "--neg "
   
    
    # List with all the options given to CMGTools
    self.commandConfs = ["%s"%self.mca, 
                   "%s"%self.cutfile,
                   "%s"%self.plotfile,
                   "-l %s"%lumi,
                   "-f --pdir %s"%outname,
                   "--tree %s "%self.treename,
                   "-P " + " -P ".join(inpath),
                   " ".join(self.friends),
                   "-L " + " -L ".join(self.functions),
                   #"--mcc %s"%self.mcc,
                   #"- W '%s'"%("*".join(weights)),
                   "%s"%plottingStuff,
                   "-j %s"%(self.ncores),
                   "%s"%extra]
    
    self.build_command()
    self.submit_command()
    return


