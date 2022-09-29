from producer import producer
from utils.ftree_producer import ftree_producer
import cfgs.ftrees as ftrees
from lumi import lumis

class plot_producer(producer):
  name = "plot_producer"
  basecommand = "python mcPlots.py"
  functions = ["wz-run3/functionsWZ.cc"]
  jobname = "CMGPlot"

  def add_more_options(self, parser):
    self.parser = parser
    # -- mca includes to consider -- #
    parser.add_option("--mca", 
                  dest = "mca", 
                  type="string", 
                  default = "wz-run3/2022/mca_wz_3l.txt", 
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
    parser.add_option("--outfolder", 
                  dest = "outfolder", 
                  type="string", 
                  default = "default_folder", 
                  help = '''Output folder (will be add to the default output plot folder)''')
    parser.add_option("--treename", 
                      dest = "treename",
                      default = "NanoAOD", 
                      help = ''' Name of the tree file ''')
 
    return

  def override_paths(self):
    inpath   = "/".join([self.inpath, self.tier, self.prodname])
    outname  = inpath.replace("phedex", "phedexrw").replace("trees", "plots")
    outname = outname.replace("%s/"%self.tier,"").replace("%s"%self.prodname, self.outfolder)
    self.inpath  = inpath
    self.outname = outname
    ## Use the parent class override_paths method
    ## to prioritize I/O paths given by the user. 
    super(plot_producer, self).override_paths()
    return

  def add_friends(self):
    friendtxt = ""
    modulekeys = ftrees.modules.keys()
    for key in modulekeys:
      modulename = ftrees.modules[key][0]
      moduletype = ftrees.modules[key][1]
      addmethod = "--Fs"
      if moduletype == "onlyMC":
        addmethod = "--FMCs"
      elif moduletype == "onlyData":
        addmethod = "--FDs"
      friendtxt += "%s {P}/%s "%(addmethod, modulename)
    return friendtxt



  def run(self):
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
                   "-P {path}/mc/ -P {path}/data/".format(path = inpath),
                   self.add_friends(),
                   "-L " + " -L ".join(self.functions),
                   #"--mcc %s"%self.mcc,
                   #"- W '%s'"%("*".join(weights)),
                   "%s"%plottingStuff,
                   "-j %s"%(self.ncores),
                   "%s"%extra]
    return


