from .producer import producer
from utils.ftree_producer import ftree_producer
from cfgs.lumi import lumis
import os

class card_producer(producer):
  name = "card_producer"
  basecommand = "python3 makeShapeCards_wzRun3.py"
  jobname = "CMGCard"

  def add_more_options(self, parser):
    self.parser = parser
    # -- CMGTools configuration files -- #
    parser.add_option("--mca", 
                  dest = "mca", 
                  type="string", 
                  default = "wz-run3/2022/mca_wz_3l.txt", 
                  help = '''Input mcafile''')
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
                  default = "(abs(LepZ1_pdgId)+abs(LepZ2_pdgId)+abs(LepW_pdgId)-33)/2", 
                  help = '''Variable to make card''')
    parser.add_option("--binning", 
                  dest = "binning", 
                  type="string", 
                  default = "4,-0.5,3.5", 
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
    parser.add_option("--binname",
                      dest = "binname",
                      default = "wz-card",
                      help = ''' Region for cut application.''')
 
    return
    '''
    def add_friends(self, maxstep = -1):
        friends = []
        
        # Iterate over modules available in this year
        for step, module in self.modules[self.year].items():
            # Only add friends to a certain point if step is given
            if step != -1 and step >= maxstep:
                continue
            modulename = module[self.doData]
            addmethod = module["addmethod"]
            if addmethod == "mc": 
                friends.append( " --FMCs {P}/%s "%(modulename))
            if addmethod == "mc": 
                friends.append( " --FDs {P}/%s "%(modulename))
            if addmethod == "simple": 
                friends.append( " --Fs {P}/%s "%(modulename))
        
        return " ".join(friends)
    '''
  def run(self):
    # Yearly stuff 
    year     = self.year
    binname  = self.binname
    outname  = self.outname
    extra    = self.extra
    mincuts  = self.get_cut(self.region)
    uncfile  = self.uncfile
    lumi     = lumis[year]
    
    self.mcpath = os.path.join(self.inpath, "mc")
    self.datapath = os.path.join(self.inpath, "data")

    # Other plotting stuff 
    plottingStuff =  "--obj Events "
    
    # List with all the options given to CMGTools
    self.commandConfs = ["%s"%self.mca, 
                   "%s"%self.cutfile,
                   '"%s"'%self.var,
                   '"%s"'%self.binning,
                   "--binname %s"%binname,
                   "--tree %s "%self.treename,
                   "-P {mcpath} -P {datapath}".format(mcpath = self.mcpath, datapath = self.datapath),
                   self.add_friends(),
                   "-L " + " -L ".join(self.functions),
                   "-W '%s'"%("*".join(self.weights)),
                   "-j %s"%(self.ncores),
                   "-l %s"%lumi,
                   "%s"%mincuts,
				   "--xp data --asimov signal",
                   "--unc %s"%uncfile,
                   "--od %s/"%outname,
                   "--autoMCStats",
                   "%s"%extra]
    return


