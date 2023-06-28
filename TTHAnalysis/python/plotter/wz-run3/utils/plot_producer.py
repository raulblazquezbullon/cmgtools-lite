from .producer import producer
from utils.ftree_producer import ftree_producer
from cfgs.lumi import lumis
import os

class plot_producer(producer):
  name = "plot_producer"
  basecommand = "python3 mcPlots.py"
  jobname = "CMGPlot"

  def add_more_options(self, parser):
    self.parser = parser
    # -- mca includes to consider -- #
    parser.add_option("--mca", dest = "mca", type="string", default = "wz-run3/mca/mca_wz_3l.txt", 
                  help = '''Input mcafile''')
    # -- CMGTools configuration files -- #
    parser.add_option("--cutfile", dest = "cutfile", type="string", default = "wz-run3/common/cuts_wzsm.txt", 
                  help = '''Event selection requirements file''')
    parser.add_option("--mcc", dest = "mcc", type="string", default = "wz-run3/common/mcc_triggerdefs.txt", 
                  help = '''Event selection requirements file''')
    parser.add_option("--plotfile", dest = "plotfile", type="string", default = "wz-run3/common/plots_wz.txt", 
                  help = '''File with plots''')
    parser.add_option("--treename", dest = "treename", default = "NanoAOD", 
                  help = ''' Name of the tree file ''')
    
    # --- More options for customization --- #
    parser.add_option("--blind", dest = "blind", default = False, action = "store_true",
                  help = ''' Blind data flag.''')
    parser.add_option("--region", dest = "region", default = "srwz",
                  help = ''' Region for cut application.''')
    
    # --- Override main producer option for output path
    parser.add_option("--outname", dest = "outname", type="string", default = "/beegfs/data/nanoAODv11/wz-run3/plots/",
          help = "Output (folder) name")
    return

  def add_friends(self, maxstep = -1):
      """ Method to add friends to command """
      friends = []
      # Iterate over modules available in this year
      for step, module in self.modules[self.year].items():
          # Only add friends to a certain point if step is given
          if maxstep != -1 and step >= maxstep:
              continue
          modulename = module["outname"]
          addmethod = module["addmethod"]
          if addmethod == "mc": 
              friends.append( " --FMCs {P}/%s "%(modulename))
          if addmethod == "mc": 
              friends.append( " --FDs {P}/%s "%(modulename))
          if addmethod == "simple": 
              friends.append( " --Fs {P}/%s "%(modulename))
      
      return " ".join(friends)
 
  def run(self):
    # Yearly stuff 
    year     = self.year
    outname  = self.outname
    extra    = self.extra
    blind    = self.blind if self.region == "srwz" else False # Only blind SR
    mincuts  = self.get_cut(self.region)
    uncfile  = self.uncfile
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
    plottingStuff += "--TotalUncRatioColor 922 922 "
    plottingStuff += "--TotalUncRatioStyle 3444 0 "

    

    self.mcpath = os.path.join(self.inpath, "mc", self.year)
    self.datapath = os.path.join(self.inpath, "data", self.year)
    # List with all the options given to CMGTools
    self.commandConfs = ["%s"%self.mca, 
                   "%s"%self.cutfile,
                   "%s"%self.plotfile,
                   "-l %s"%lumi,
                   "-f --pdir %s"%self.outname,
                   "--tree %s "%self.treename,
                   "-P {mcpath} -P {datapath}".format(mcpath = self.mcpath, datapath = self.datapath),
                   self.add_friends(),
                   "-L " + " -L ".join(self.functions),
                   "-W '%s'"%("*".join(self.weights)) if len(self.weights) else "",
                   "%s"%plottingStuff,
                   "-j %s"%(self.ncores),
                   "%s"%mincuts,
                   "--unc %s"%uncfile,
                   "--xp data" if blind else "",
                   "%s"%extra]
    return


