import os
from optparse import OptionParser

pr = OptionParser(usage="%prog doWhat [options]")

#Model options
pr.add_option("--2016", dest = "use2016", action="store_true", default = False, help = "Use 2016 MC/Data")
pr.add_option("--pdir", dest = "outname", type="string", default = "~/www/EWKino/", help = "Output name")
#Output formats
(options, args) = pr.parse_args()

doWhat = args[0]

if not(os.path.isdir(options.outname)):
    os.mkdir(options.outname)
    os.system("cp ~/www/index.php %s"%options.outname)
if doWhat == "Fits":
    if options.use2016:
        print "# HT FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo htJet30j_prompt_WZ --lX \'H_{T}(jet, p_{T} > 30 GeV) [GeV]\' --lY 'Events' --fit ht --pdir %s/ht_fit"%options.outname
        print "# MET FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo met_prompt_WZ --lX \'p_{T}^{miss} [GeV]\' --lY 'Events' --fit met --pdir %s/met_fit"%options.outname
        print "# MLL FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo mll3l_prompt_WZ --lX \'M_{ll} [GeV]\' --lY 'Events' --fit mll --pdir %s/mll_fit"%options.outname
        print "# MTW FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo mtW3l_prompt_WZ --lX \'M_{T}^{W} [GeV]\' --lY 'Events' --fit mtW --pdir %s/mtw_fit"%options.outname

    else:
        print "# HT FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo htJet30j_prompt_WZ --lX \'H_{T}(jet, p_{T} > 30 GeV) [GeV]\' --lY 'Events' --fit ht --pdir %s/ht_fit"%options.outname
        print "# MET FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo met_prompt_WZ --lX \'p_{T}^{miss} [GeV]\' --lY 'Events' --fit met --pdir %s/met_fit"%options.outname
        print "# MLL FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo mll3l_prompt_WZ --lX \'M_{ll} [GeV]\' --lY 'Events' --fit mll --pdir %s/mll_fit"%options.outname
        print "# MTW FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo mtW3l_prompt_WZ --lX \'M_{T}^{W} [GeV]\' --lY 'Events' --fit mtW --pdir %s/mtw_fit"%options.outname

if doWhat == "FitComparison":
    if options.use2016:
        print "# HT FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo htJet30j_prompt_WZ --lX \'H_{T}(jet, p_{T} > 30 GeV) [GeV]\' --lY 'Events' --fit ht --pdir %s/ht_fit"%options.outname
        print "# MET FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo met_prompt_WZ --lX \'p_{T}^{miss} [GeV]\' --lY 'Events' --fit met --pdir %s/met_fit"%options.outname
        print "# MLL FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo mll3l_prompt_WZ --lX \'M_{ll} [GeV]\' --lY 'Events' --fit mll --pdir %s/mll_fit"%options.outname
        print "# MTW FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood.root --histo mtW3l_prompt_WZ --lX \'M_{T}^{W} [GeV]\' --lY 'Events' --fit mtW --pdir %s/mtw_fit"%options.outname

    else:
        print "# HT FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo htJet30j_prompt_WZ --lX \'H_{T}(jet, p_{T} > 30 GeV) [GeV]\' --lY 'Events' --fit ht --pdir %s/ht_fit"%options.outname
        print "# MET FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo met_prompt_WZ --lX \'p_{T}^{miss} [GeV]\' --lY 'Events' --fit met --pdir %s/met_fit"%options.outname
        print "# MLL FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo mll3l_prompt_WZ --lX \'M_{ll} [GeV]\' --lY 'Events' --fit mll --pdir %s/mll_fit"%options.outname
        print "# MTW FIT #"
        print " python fitVar.py --file ../../../../data/WZ_MC/likelihood_2017.root --histo mtW3l_prompt_WZ --lX \'M_{T}^{W} [GeV]\' --lY 'Events' --fit mtW --pdir %s/mtw_fit"%options.outname
