#!/usr/bin/env python
import os, sys, enum, argparse
from multiprocessing import Pool
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

#### Settings
friendspath = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"
prodname    = "2020-06-01"


datasamples  = ["SingleMuon", "SingleElec", "DoubleMuon", "DoubleEG", "MuonEG", "LowEGJet", "HighEGJet"]
mcpath       = "/pool/ciencias/nanoAODv6/29jan2020_MC"
datapath     = "/pool/ciencias/nanoAODv6/13jan2020"
logpath      = friendspath + "/" + prodname + "/{step_prefix}/logs"
logpath      = "./temp/logs/"
utilspath    = "/nfs/fanae/user/vrbouza/Proyectos/tw_run2/desarrollo/susyMaintenanceScripts/friendsWithBenefits"
commandscaff = "python prepareEventVariablesFriendTree.py -t NanoAOD {inpath} {outpath} -I CMGTools.TTHAnalysis.tools.nanoAOD.TopRun2_modules {module} {friends} {dataset} --log {logdir} -N {chunksize} --name {jobname} -q {queue} --env oviedo {ex}"
friendfolders = ["0_yeartag", "1_lepmerge_roch", "2_cleaning", "3_varstrigger", "4_scalefactors"]
chunksizes    = [5000000, 100000, 500000]
#chunksizes    = [5000000, 500000, 500000]
minchunkbytes = 1000

class errs(enum.IntEnum):
    NoErr   = 0
    exist   = 1
    size    = 2
    entries = 3
    corrupt = 4



sampledict  = {}
sampledict[2016] = {}; sampledict[2017] = {}; sampledict[2018] = {}
sampledict[2016] = {
    # Nominales
    ### tt
    "TTTo2L2Nu"        : "Tree_TTTo2L2Nu_TuneCP5_PSweights",
    "TTToSemiLeptonic" : "Tree_TTToSemiLeptonic_TuneCP5_PSweights",
    "TT_old"           : "TT_TuneCUETP8M2T4_nobackup, TT_TuneCUETP8M2T4_PSweights, TT_TuneCUETP8M2T4",

    ### tW
    #"tW_noFullHad"    : "tW_5f_noFullHad_TuneCUETP8M1, tW_5f_noFullHad_TuneCUETP8M1_ext1",
    "tW_noFullHad"    : "Tree_tW_5f_noFullHad_TuneCUETP8M1",
    #"tbarW_noFullHad" : "tbarW_5f_noFullHad_TuneCUETP8M1, tbarW_5f_noFullHad_TuneCUETP8M1_ext1, tbarW_5f_noFullHad_PSweights",
    "tbarW_noFullHad" : "Tree_tbarW_5f_noFullHad_TuneCUETP8M1",

    ### WJets
    #"WJetsToLNu": "WJetsToLNu_TuneCUETP8M1_amcatnloFXFX", "WJetsToLNu_TuneCUETP8M1_amcatnloFXFX_ext2",
    #"WJetsToLNu": "Tree_WJetsToLNu_TuneCUETP8M1_amcatnloFXFX",
    #"WJetsToLNu_MLM": "WJetsToLNu_TuneCUETP8M1_MLM, WJetsToLNu_TuneCUETP8M1_MLM_ext2",
    "WJetsToLNu_MLM": "Tree_WJetsToLNu_TuneCUETP8M1_MLM",

    ### DY
    #"DYJetsToLL_M_10to50" : "DYJetsToLL_M_10to50_TuneCUETP8M1_amcatnloFXFX, DYJetsToLL_M_10to50_TuneCUETP8M1_amcatnloFXFX_ext1",
    "DYJetsToLL_M_10to50" : "Tree_DYJetsToLL_M_10to50_TuneCUETP8M1_amcatnloFXFX",
    #"DYJetsToLL_M_50"     : "DYJetsToLL_M_50_TuneCUETP8M1_amcatnloFXFX_ext2",
    "DYJetsToLL_M_50"     : "Tree_DYJetsToLL_M_50_TuneCUETP8M1_amcatnloFXFX",
    #"DYJetsToLL_M_50_MLM": "DYJetsToLL_M_50_TuneCUETP8M1_MLM_ext1", "DYJetsToLL_M_50_TuneCUETP8M1_MLM_ext2",
    #"DYJetsToLL_M_50_MLM": "DYJetsToLL_M_50_TuneCUETP8M1_MLM",

    ### WW
    "WWTo2L2Nu" : "Tree_WWTo2L2Nu",
    "WWToLNuQQ" : "Tree_WWToLNuQQ",

    ### WZ
    "WZTo2L2Q"    : "Tree_WZTo2L2Q_amcatnloFXFX_madspin",
    #"WZTo3LNu"    : "WZTo3LNu_TuneCUETP8M1, WZTo3LNu_TuneCUETP8M1_ext1",
    "WZTo3LNu"    : "Tree_WZTo3LNu_TuneCUETP8M1",
    "WZTo1L1Nu2Q" : "Tree_WZTo1L1Nu2Q_amcatnloFXFX_madspin",

    ### ZZ
    #"ZZTo2L2Nu" : "ZZTo2L2Nu, ZZTo2L2Nu_ext1",
    "ZZTo2L2Nu" : "Tree_ZZTo2L2Nu",
    #"ZZTo2L2Q"  : "ZZTo2L2Q_amcatnloFXFX_madspin",  ### WARNING: duda aqui con zz, hay amcatnlo y powheg
    "ZZTo2L2Q"  : "Tree_ZZTo2L2Q",
    #"ZZTo4L"    : "ZZTo4L, ZZTo4L_ext1",
    "ZZTo4L"    : "Tree_ZZTo4L",

    ### ttW
    #"TTWJetsToLNu" : "TTWJetsToLNu_TuneCUETP8M1_amcatnloFXFX_madspin_ext1, TTWJetsToLNu_TuneCUETP8M1_amcatnloFXFX_madspin_ext2",
    "TTWJetsToLNu" : "Tree_TTWJetsToLNu_TuneCUETP8M1_amcatnloFXFX_madspin",
    "TTWJetsToQQ"  : "Tree_TTWJetsToQQ_TuneCUETP8M1_amcatnloFXFX_madspin",

    ### ttZ
    "TTZToLL_M_1to10_MLM" : "Tree_TTZToLL_M_1to10_TuneCUETP8M1_MLM",
    #"TTZToLLNuNu_M_10"    : "TTZToLLNuNu_M_10_TuneCUETP8M1_amcatnlo_ext1, TTZToLLNuNu_M_10_TuneCUETP8M1_amcatnlo_ext2, TTZToLLNuNu_M_10_TuneCUETP8M1_amcatnlo_ext3",
    "TTZToLLNuNu_M_10"    : "Tree_TTZToLLNuNu_M_10_TuneCUETP8M1_amcatnlo",
    "TTZToQQ"             : "Tree_TTZToQQ_TuneCUETP8M1_amcatnlo",

    # Incertidumbres
    #"tW_noFullHad_DS"     : "tW_5f_DS_noFullHad_TuneCUETP8M",
    #"tbarW_noFullHad_DS"  : "tbarW_5f_DS_noFullHad",

    ### tt syst: TODO
    #TT_hdampDown   : TT_hdampDOWN_TuneCUETP8M2T4, TT_hdampDOWN_TuneCUETP8M2T4_ext1
    #TT_hdampUp     : TT_hdampUP_TuneCUETP8M2T4_ext1, TT_hdampUP_TuneCUETP8M2T4
    #TT_colourFlip  : TT_TuneCUETP8M2T4_colourFlip
    #TT_TuneCUETP8M2T4down : TT_TuneCUETP8M2T4down, TT_TuneCUETP8M2T4down_ext1
    #TT_TuneCUETP8M2T4up : TT_TuneCUETP8M2T4up, TT_TuneCUETP8M2T4up_ext1
    #TT_erdON: TT_TuneCUETP8M2T4_erdON, TT_TuneCUETP8M2T4_erdON_ext1
    #TT_fsrUp  : TT_TuneCUETP8M2T4_fsrup, TT_TuneCUETP8M2T4_fsrup_ext1
    #TT_fsrDown: TT_TuneCUETP8M2T4_fsrdown, TT_TuneCUETP8M2T4_fsrdown_ext1
    #TT_isrUp  : TT_TuneCUETP8M2T4_isrup_ext1
    #TT_isrDown: TT_TuneCUETP8M2T4_isrdown, TT_TuneCUETP8M2T4_isrdown_ext1
    #TT_mtop1665:  TT_TuneCUETP8M2T4_mtop1665
    #TT_mtop1695: TT_TuneCUETP8M2T4_mtop1695, TT_TuneCUETP8M2T4_mtop1695_ext1, TT_TuneCUETP8M2T4_mtop1695_ext2
    #TT_mtop1735: TT_TuneCUETP8M2T4_mtop1735
    #TT_mtop1715: TT_TuneCUETP8M2T4_mtop1715
    #TT_mtop1755 : TT_TuneCUETP8M2T4_mtop1755, TT_TuneCUETP8M2T4_mtop1755_ext1, TT_TuneCUETP8M2T4_mtop1755_ext2
    #TT_mtop1785 : TT_TuneCUETP8M2T4_mtop1785
    #TT_QCDbasedCRTune_erdON : TT_TuneCUETP8M2T4_QCDbasedCRTune_erdON
    #TT_GluonMoveCRTune : TT_TuneCUETP8M2T4_GluonMoveCRTune_ext1
    #TT_TuneEE5C_herwigpp: TT_TuneEE5C_herwigpp_ext3


    # Datos: /pool/ciencias/nanoAODv6/13jan2020/2016/
    #"SingleMuon"     : "SingleMuon_Run2016B_ver2_Nano25Oct2019_ver2_v1, SingleMuon_Run2016C_Nano25Oct2019_v1, SingleMuon_Run2016D_Nano25Oct2019_v1, SingleMuon_Run2016E_Nano25Oct2019_v1, SingleMuon_Run2016F_Nano25Oct2019_v1, SingleMuon_Run2016G_Nano25Oct2019_v1, SingleMuon_Run2016H_Nano25Oct2019_v1"
    "SingleMuon"     : "Tree_SingleMuon_Run2016",

    #"SingleElectron" : "SingleElectron_Run2016B_ver2_Nano25Oct2019_ver2_v1, SingleElectron_Run2016C_Nano25Oct2019_v1, SingleElectron_Run2016D_Nano25Oct2019_v1, SingleElectron_Run2016E_Nano25Oct2019_v1, SingleElectron_Run2016F_Nano25Oct2019_v1, SingleElectron_Run2016G_Nano25Oct2019_v1, SingleElectron_Run2016H_Nano25Oct2019_v1",
    "SingleElectron" : "Tree_SingleElectron_Run2016",

    #"DoubleMuon"     : "DoubleMuon_Run2016B_ver2_Nano25Oct2019_ver2_v1, DoubleMuon_Run2016C_Nano25Oct2019_v1, DoubleMuon_Run2016D_Nano25Oct2019_v1, DoubleMuon_Run2016E_Nano25Oct2019_v1, DoubleMuon_Run2016F_Nano25Oct2019_v1,DoubleMuon_Run2016G_Nano25Oct2019_v1, DoubleMuon_Run2016H_Nano25Oct2019_v1",
    "DoubleMuon"     : "Tree_DoubleMuon_Run2016",

    #"DoubleEG"       : "DoubleEG_Run2016B_ver2_Nano25Oct2019_ver2_v1, DoubleEG_Run2016C_Nano25Oct2019_v1, DoubleEG_Run2016D_Nano25Oct2019_v1, DoubleEG_Run2016E_Nano25Oct2019_v1, DoubleEG_Run2016F_Nano25Oct2019_v1, DoubleEG_Run2016G_Nano25Oct2019_v1, DoubleEG_Run2016H_Nano25Oct2019_v1",
    "DoubleEG"       : "Tree_DoubleEG_Run2016",

    #"MuonEG"         : "MuonEG_Run2016B_ver2_Nano25Oct2019_ver2_v1, MuonEG_Run2016C_Nano25Oct2019_v1, MuonEG_Run2016D_Nano25Oct2019_v1, MuonEG_Run2016E_Nano25Oct2019_v1, MuonEG_Run2016F_Nano25Oct2019_v1, MuonEG_Run2016G_Nano25Oct2019_v1, MuonEG_Run2016H_Nano25Oct2019_v1",
    "MuonEG"         : "Tree_MuonEG_Run2016",
}





#### xsecs (del stop): TEMPORAL
#DYJetsToLL_M_10to50_aMCatNLO : 22635.09
#DYJetsToLL_M_50_a       : 6025.2

#tbarW_noFullHad         : 19.4674104


#TTTo2L2Nu               : 88.28769753
#TTToSemiLeptonic        : 365.3994209
#TT                      : 831.76

#b_bbar_4l               : 8.402

#TTGJets                 : 3.697

#TTWJetsToLNu            : 0.2043
#TTWJetsToQQ             : 0.4062

#TTZToLL_M_1to10         : 0.0493
#TTZToLLNuNu_M_10_a      : 0.2529
#TTZToQQ                 : 0.5297

#WJetsToLNu_MLM          : 61526.7

#WW                      : 115
#WWTo2L2Nu               : 12.178

#WZ                      : 47.13
#WZTo2L2Q                : 5.595
#WZTo3LNu                : 4.42965

#ZZ                      : 16.523
#ZZTo2L2Nu               : 0.564
#ZZTo2L2Q                : 3.28
#ZZTo2Q2Nu               : 4.04
#ZZTo4L                  : 1.256

#WWW                     : 0.2086
#WWZ                     : 0.1651
#WWG                     : 0.2147
#WZZ                     : 0.05565
#WZG                     : 0.0412
#ZZZ                     : 0.01398


def SendDatasetJobs(task):
    dataset, year, step, inputpath_, isData, queue, extra, regexp = task
    if   step == 0:
        chosenmodule = "addYearTag_{y}_{ty}".format(y = year, ty = ("mc"         if not isData else
                                                                    "singlemuon" if "singlemuon" in dataset.lower() else
                                                                    "singleelec" if "singleelec" in dataset.lower() else
                                                                    "doublemuon" if "doublemuon" in dataset.lower() else
                                                                    "doubleeg"   if "doubleeg"   in dataset.lower() else
                                                                    "muoneg") )
        print "Command: ", commandscaff.format(inpath  = inputpath_,
                                               outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                               module  = chosenmodule,
                                               friends = "",
                                               dataset = ("--dm " if regexp else "-d ") + dataset,
                                               jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                               logdir  = logpath.format(step_prefix = friendfolders[step]),
                                               chunksize = chunksizes[step],
                                               queue   = queue,
                                               ex      = extra
            )
        os.system(commandscaff.format(inpath  = inputpath_,
                                      outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                      module  = chosenmodule,
                                      friends = "",
                                      dataset = ("--dm " if regexp else "-d ") + dataset,
                                      jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                      logdir  = logpath.format(step_prefix = friendfolders[step]),
                                      chunksize = chunksizes[step],
                                      queue   = queue,
                                      ex      = extra
                                     ))
    elif step == 1:
        chosenmodule = "lepMerge_roch"

        print "Command: ", commandscaff.format(inpath  = inputpath_,
                                               outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                               module  = chosenmodule,
                                               friends = "-F Friends {friendszero}/{cname}_Friend.root".format(friendszero = friendspath + "/" + prodname + "/" + friendfolders[0], cname = "{cname}"),
                                               dataset = ("--dm " if regexp else "-d ") + dataset,
                                               jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                               logdir  = logpath.format(step_prefix = friendfolders[step]),
                                               chunksize = chunksizes[step],
                                               queue   = queue,
                                               ex      = extra
            )
        os.system(commandscaff.format(inpath  = inputpath_,
                                      outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                      module  = chosenmodule,
                                      friends = "-F Friends {friendszero}/{cname}_Friend.root".format(friendszero = friendspath + "/" + prodname + "/" + friendfolders[0], cname = "{cname}"),
                                      dataset = ("--dm " if regexp else "-d ") + dataset,
                                      jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                      logdir  = logpath.format(step_prefix = friendfolders[step]),
                                      chunksize = chunksizes[step],
                                      queue   = queue,
                                      ex      = extra
                                     ))

    elif step == 2:
        chosenmodule = "cleaning_{ty}_{y}".format(y = year, ty = "data" if isData else "mc")

        print "Command: ", commandscaff.format(inpath  = inputpath_,
                                               outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                               module  = chosenmodule,
                                               friends = "-F Friends {friendszero}/{cname}_Friend.root -F Friends {friendsone}/{cname}_Friend.root".format(friendszero = friendspath + "/" + prodname + "/" + friendfolders[0], friendsone = friendspath + "/" + prodname + "/" + friendfolders[1], cname = "{cname}"),
                                               dataset = ("--dm " if regexp else "-d ") + dataset,
                                               jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                               logdir  = logpath.format(step_prefix = friendfolders[step]),
                                               chunksize = chunksizes[step],
                                               queue   = queue,
                                               ex      = extra
            )
        os.system(commandscaff.format(inpath  = inputpath_,
                                      outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                      module  = chosenmodule,
                                      friends = "-F Friends {friendszero}/{cname}_Friend.root -F Friends {friendsone}/{cname}_Friend.root".format(friendszero = friendspath + "/" + prodname + "/" + friendfolders[0], friendsone = friendspath + "/" + prodname + "/" + friendfolders[1], cname = "{cname}"),
                                      dataset = ("--dm " if regexp else "-d ") + dataset,
                                      jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                      logdir  = logpath.format(step_prefix = friendfolders[step]),
                                      chunksize = chunksizes[step],
                                      queue   = queue,
                                      ex      = extra
                                     ))

    elif step == 3:
        chosenmodule = "varstrigger"

        print "Command: ", commandscaff.format(inpath  = inputpath_,
                                               outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                               module  = chosenmodule,
                                               friends = "-F Friends {friendszero}/{cname}_Friend.root -F Friends {friendsone}/{cname}_Friend.root -F Friends {friendstwo}/{cname}_Friend.root".format(friendszero = friendspath + "/" + prodname + "/" + friendfolders[0], friendsone = friendspath + "/" + prodname + "/" + friendfolders[1], friendstwo = friendspath + "/" + prodname + "/" + friendfolders[2], cname = "{cname}"),
                                               dataset = ("--dm " if regexp else "-d ") + dataset,
                                               jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                               logdir  = logpath.format(step_prefix = friendfolders[step]),
                                               chunksize = chunksizes[step],
                                               queue   = queue,
                                               ex      = extra
            )
        os.system(commandscaff.format(inpath  = inputpath_,
                                      outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                      module  = chosenmodule,
                                      friends = "-F Friends {friendszero}/{cname}_Friend.root -F Friends {friendsone}/{cname}_Friend.root -F Friends {friendstwo}/{cname}_Friend.root".format(friendszero = friendspath + "/" + prodname + "/" + friendfolders[0], friendsone = friendspath + "/" + prodname + "/" + friendfolders[1], friendstwo = friendspath + "/" + prodname + "/" + friendfolders[2], cname = "{cname}"),
                                      dataset = ("--dm " if regexp else "-d ") + dataset,
                                      jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                      logdir  = logpath.format(step_prefix = friendfolders[step]),
                                      chunksize = chunksizes[step],
                                      queue   = queue,
                                      ex      = extra
                                     ))
    elif step == 4 and not isData:
        chosenmodule = "sfSeq_{y}".format(y = year)

        print "Command: ", commandscaff.format(inpath  = inputpath_,
                                               outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                               module  = chosenmodule,
                                               friends = "-F Friends {friendszero}/{cname}_Friend.root -F Friends {friendsone}/{cname}_Friend.root -F Friends {friendstwo}/{cname}_Friend.root -F Friends {friendsthree}/{cname}_Friend.root".format(friendszero = friendspath + "/" + prodname + "/" + friendfolders[0], friendsone = friendspath + "/" + prodname + "/" + friendfolders[1], friendstwo = friendspath + "/" + prodname + "/" + friendfolders[2], friendsthree = friendspath + "/" + prodname + "/" + friendfolders[3], cname = "{cname}"),
                                               dataset = ("--dm " if regexp else "-d ") + dataset,
                                               jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                               logdir  = logpath.format(step_prefix = friendfolders[step]),
                                               chunksize = chunksizes[step],
                                               queue   = queue,
                                               ex      = extra
            )
        os.system(commandscaff.format(inpath  = inputpath_,
                                      outpath = friendspath + "/" + prodname + "/" + friendfolders[step],
                                      module  = chosenmodule,
                                      friends = "-F Friends {friendszero}/{cname}_Friend.root -F Friends {friendsone}/{cname}_Friend.root -F Friends {friendstwo}/{cname}_Friend.root -F Friends {friendsthree}/{cname}_Friend.root".format(friendszero = friendspath + "/" + prodname + "/" + friendfolders[0], friendsone = friendspath + "/" + prodname + "/" + friendfolders[1], friendstwo = friendspath + "/" + prodname + "/" + friendfolders[2], friendsthree = friendspath + "/" + prodname + "/" + friendfolders[3], cname = "{cname}"),
                                      dataset = ("--dm " if regexp else "-d ") + dataset,
                                      jobname = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step),
                                      logdir  = logpath.format(step_prefix = friendfolders[step]),
                                      chunksize = chunksizes[step],
                                      queue   = queue,
                                      ex      = extra
                                     ))


    return


def GeneralSubmitter(task):
    dataset, year, step, queue, extra = task
    isData     = any(ext in dataset for ext in datasamples)
    inputpath_ = (datapath if isData else mcpath) + "/" + str(year) + "/"
    if not os.path.isdir(logpath.format(step_prefix = friendfolders[step])):
        os.system("mkdir -p " + logpath.format(step_prefix = friendfolders[step]))

    SendDatasetJobs( (sampledict[year][dataset], year, step, inputpath_, isData, queue, extra, True) )
    return


def getActualDatasets(listoffiles):
    listofdatasets = []
    for el in listoffiles:
        tmpstr = "_".join(el.split("_")[:-1])
        if tmpstr not in listofdatasets: listofdatasets.append( tmpstr )

    return listofdatasets


def getNchunks(fileparts, year, step):
    isData = any(ext in (fileparts[0] if isinstance(fileparts, list) else fileparts) for ext in datasamples)
    folder = (datapath if isData else mcpath) + "/" + str(year) + "/"

    totalEntries = 0
    if isinstance(fileparts, list):
        for f in fileparts:
            tmpf = r.TFile(folder + f, "READ")
            totalEntries += tmpf.Get("Events").GetEntries()
            tmpf.Close()
    else:
        tmpf = r.TFile(folder + fileparts, "READ")
        totalEntries += tmpf.Get("Events").GetEntries()
        tmpf.Close()

    nch = float(totalEntries)/chunksizes[step]
    nch = int(nch) + 1 * (nch != 0)
    return nch, totalEntries


def CheckChunksByDataset(task):
    dataset, year, step = task
    isData     = any(ext in dataset for ext in datasamples)
    #print isData
    inputpath_ = (datapath if isData else mcpath) + "/" + str(year) + "/"
    basefolder = friendspath + "/" + prodname + "/" + friendfolders[step]

    #chunklist  = [f for f in os.listdir(basefolder) if (".root" in f and "chunk" in f and dataset in f)]
    filelist   = [f for f in os.listdir(inputpath_) if (sampledict[year][dataset] in f)]

    #actualdatasets = getActualDatasets(filelist)

    #print filelist
    #print "> Checking the following datasets:", actualdatasets
    pendingdict = {}

    for dat in filelist:
        pendingdict[dat] = {}
        nchks, totEnt = getNchunks(dat, year, step)
        print "    - Checking dataset", dat, "(expected chunks: {nch})".format(nch = nchks)

        for ch in range(nchks):
            chkpath = basefolder + "/" + dat.replace(".root", "") + ("_Friend.chunk{chk}.root".format(chk = ch)
                                                                     if nchks > 1 else
                                                                     "_Friend.root")
            #print "opening", chkpath

            if not os.path.isfile(chkpath):                                 #### 1st: existance
                print "# Chunk {chk} has not been found.".format(chk = ch)
                pendingdict[dat][ch] = errs.exist
            elif os.path.getsize(chkpath) <= minchunkbytes:                 #### 2nd: size
                print "# Chunk {chk} has less size than the minimum.".format(chk = ch)
                pendingdict[dat][ch] = errs.size
            else:
                fch = r.TFile.Open(chkpath, "READ")
                if not fch:                                                 #### 3rd: ROOT access (corruption)
                    print "# Chunk {chk} cannot be accessed: it is corrupted.".format(chk = ch)
                    pendingdict[dat][ch] = errs.corrupted
                else:
                    tmpentries = fch.Get("Friends").GetEntries()
                    #print tmpentries
                    fch.Close()
                    if ch == (nchks - 1):                                   #### 4th: number of entries
                        expEnt = totEnt - chunksizes[step] * (nchks - 1)
                        if int(tmpentries) != int(expEnt):
                            print "# Chunk {chk} does not have the expected entries ({ent}), it has {realent}.".format(chk = ch, ent = expEnt, realent = tmpentries)
                            pendingdict[dat][ch] = errs.entries
                    elif tmpentries != chunksizes[step]:
                        print "# Chunk {chk} does not have the expected entries ({ent}), it has {realent}.".format(chk = ch, ent = chunksizes[step], realent = tmpentries)
                        pendingdict[dat][ch] = errs.entries

                del fch

    return pendingdict, dataset


def MergeThoseChunks(year, step, queue, extra):
    basefolder = friendspath + "/" + prodname + "/" + friendfolders[step]
    chunklist  = [f for f in os.listdir(basefolder) if (".root" in f and "chunk" in f)]
    if len(chunklist) == 0:
        print "> No chunks found in the search folder! ({f})".format(f = basefolder)
    else:
        wpath = os.getcwd()
        os.system("cd " + utilspath)
        os.system("bash chunkDealer.sh " + basefolder + " merge 'Tree'")
        os.system("cd " + wpath)
    return


def CheckLotsOfChunks(dataset, year, step, queue, extra, ncores):
    fullpendingdict = {}
    totalcount = 0
    if dataset.lower() != "all":
        tmpdict = CheckChunksByDataset( (dataset, year, step) )
        tmpcount = sum([len(list(tmpdict[td].keys())) for td in tmpdict])
        totalcount += tmpcount
        if tmpcount != 0: fullpendingdict[dataset] = tmpdict
    else:
        tasks = []
        for dat in sampledict[year]: tasks.append( (dat, year, step) )
        if ncores > 1:
            pool = Pool(ncores)
            listofdicts = pool.map(CheckChunksByDataset, tasks)
            pool.close()
            pool.join()
            del pool
            for tmptupl in listofdicts:
                tmpcount = sum([len(list(tmptupl[0][td].keys())) for td in tmptupl[0]])
                totalcount += tmpcount
                if tmpcount != 0: fullpendingdict[tmptupl[1]] = tmptupl[0]
        else:
            for task in tasks:
                tmpdict, dat = CheckChunksByDataset(task)
                tmpcount = sum([len(list(tmpdict[td].keys())) for td in tmpdict])
                totalcount += tmpcount
                if tmpcount != 0: fullpendingdict[dat] = tmpdict

    #print fullpendingdict
    print "\n> Finished checks."
    if len(list(fullpendingdict.keys())) != 0:
        print "    - {nch} chunks should be reprocessed. These are:".format(nch = totalcount)
        for d in fullpendingdict:
            for part in fullpendingdict[d]:
                for ch in fullpendingdict[d][part]:
                    print "# Dataset: {dat} - chunk: {c}".format(dat = part, c = ch)

        if confirm("> Do you want to send these jobs?"):
            if not os.path.isdir(logpath.format(step_prefix = friendfolders[step])):
                os.system("mkdir -p " + logpath.format(step_prefix = friendfolders[step]))

            tasks = []
            for d in fullpendingdict:
                for part in fullpendingdict[d]:
                    for ch in fullpendingdict[d][part]:
                        isData     = any(ext in part for ext in datasamples)
                        inputpath_ = (datapath if isData else mcpath) + "/" + str(year) + "/"
                        tasks.append( (part.replace(".root", ""), year, step, inputpath_, isData, queue, "-c {chk} ".format(chk = ch) + extra, False) )
                        #sys.exit()

            if ncores > 1:
                pool = Pool(ncores)
                pool.map(SendDatasetJobs, tasks)
                pool.close()
                pool.join()
                del pool
            else:
                for task in tasks:
                    SendDatasetJobs(task)
            return
        else:
            return


def confirm(message = "Do you wish to continue?"):
    """
    Ask user to enter y(es) or n(o) (case-insensitive).
    :return: True if the answer is Y.
    :rtype: bool
    """
    answer = ""
    while answer not in ["y", "n", "yes", "no"]:
        answer = raw_input(message + " [Y/N]\n").lower()
    return answer[0] == "y"



if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--year',    '-y', metavar = 'year',    dest = "year",    required = False, default = "2016")
    parser.add_argument('--dataset', '-d', metavar = 'dataset', dest = "dataset", required = False, default = "TTTo2L2Nu")
    parser.add_argument('--step',    '-s', metavar = 'step',    dest = "step",    required = False, default = 0)
    parser.add_argument('--check',   '-c', action = "store_true", dest = "check", required = False, default = False)
    parser.add_argument('--queue',   '-q', metavar = 'queue',   dest = "queue",   required = False, default = "batch")
    parser.add_argument('--extraArgs','-e', metavar = 'extra',  dest = "extra",   required = False, default = "")
    parser.add_argument('--ncores',  '-n', metavar = 'ncores',  dest = "ncores",  required = False, default = 1)
    parser.add_argument('--merge',  '-m', action = "store_true", dest = "merge",  required = False, default = False)
    #parser.add_argument('--pretend',  '-p', metavar = 'extra',  dest = "extra",   required = False, default = "")

    args    = parser.parse_args()
    year    = int(args.year)
    dataset = args.dataset
    check   = args.check
    step    = int(args.step)
    queue   = args.queue
    extra   = args.extra
    ncores  = int(args.ncores)
    merge   = args.merge


    if check:
        print "\n> Beginning checks of all chunks for the production of year {y}, of the friend trees of step {s} for {d} dataset(s).".format(y = year, s = step, d = dataset)
        CheckLotsOfChunks(dataset, year, step, queue, extra, ncores)
    elif merge:
        MergeThoseChunks(year, step, queue, extra)
    else:
        if dataset.lower() != "all":
            GeneralSubmitter(dataset, year, step, queue, extra)
        else:
            tasks = []
            for dat in sampledict[year]: tasks.append( (dat, year, step, queue, extra) )

            if ncores > 1:
                pool = Pool(ncores)
                pool.map(GeneralSubmitter, tasks)
                pool.close()
                pool.join()
                del pool
            else:
                for tsk in tasks: GeneralSubmitter(tsk)
