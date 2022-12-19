from producer import producer
from utils.ftree_producer import ftree_producer
from cfgs.lumi import lumis

class card_producer(producer):
  name = "card_producer"
  basecommand = "python makeShapeCards_wzRun3.py"
  functions = ["wz-run3/functionsWZ.cc",
               "wz-run3/functionsSF.cc"]
  weights = ["muonSF*electronSF"]
  jobname = "CMGCard"

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
    parser.add_option("--var", 
                  dest = "var", 
                  type="string", 
                  default = "\'4*(LepW_pdgId < 0) + (abs(LepZ1_pdgId)+abs(LepZ2_pdgId)+abs(LepW_pdgId)-33)/2\'", 
                  help = '''Variable to make card''')
    parser.add_option("--binning", 
                  dest = "binning", 
                  type="string", 
                  default = "\'8,-0.5,7.5\'", 
                  help = '''Binning for variable''')
    parser.add_option("--outfolder", 
                  dest = "outfolder", 
                  type="string", 
                  default = "default_folder", 
                  help = '''Output folder (will be add to the default output plot folder)''')
    parser.add_option("--treename", 
                      dest = "treename",
                      default = "NanoAOD", 
                      help = ''' Name of the tree file ''')
    # --- More options for customization --- #
    parser.add_option("--region",
                      dest = "region",
                      default = "srwz",
                      help = ''' Region for cut application.''')
 
    return

  def override_paths(self):
    #inpath   = "/".join([self.inpath, self.tier, self.prodname])
    inpath = "/".join([self.inpath])
    outname  = inpath.replace("phedex", "phedexrw").replace("trees", "plots")
    outname = outname.replace("%s/"%self.tier,"").replace("%s"%self.prodname, self.outfolder)
    self.inpath  = inpath
    self.outname = outname
    ## Use the parent class override_paths method
    ## to prioritize I/O paths given by the user. 
    super(type(self), self).override_paths()
    return


  def run(self):
    # Yearly stuff 
    year     = self.year
    inpath   = self.inpath
    outname  = self.outname
    extra    = self.extra
    mincuts  = self.get_cut(self.region)
    lumi     = lumis[year]

    # Other plotting stuff 
    plottingStuff =  "--obj Events "
    
    
    # List with all the options given to CMGTools
    self.commandConfs = ["%s"%self.mca, 
                   "%s"%self.cutfile,
                   "%s"%self.var,
                   "%s"%self.binning,
                   "--tree %s "%self.treename,
                   "-P {path}/mc/ -P {path}/data/".format(path = inpath),
                   self.add_friends(),
                   "-L " + " -L ".join(self.functions),
                   "-W '%s'"%("*".join(self.weights)),
                   "-j %s"%(self.ncores),
                   "-l %s"%lumi,
                   "%s"%mincuts,
                   " --od %s"%outname,
                   " -o card",
                   " --ms --neg --noNegVar --hardZero",
                   "%s"%extra]
    return


