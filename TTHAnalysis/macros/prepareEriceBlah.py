# -*- coding: UTF-8 -*-.
#!/usr/bin/env python
import os, sys, enum, argparse
from multiprocessing import Pool
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

#### Settings
friendspath = "/pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions"
prodname    = "2020-06-01"


datasamples  = ["SingleMuon", "SingleElec", "DoubleMuon", "DoubleEG", "MuonEG", "LowEGJet", "HighEGJet", "EGamma"]
mcpath       = "/pool/ciencias/nanoAODv6/29jan2020_MC"
datapath     = "/pool/ciencias/nanoAODv6/13jan2020"
logpath      = friendspath + "/" + prodname + "/{y}/{step_prefix}/logs"
utilspath    = "/nfs/fanae/user/vrbouza/Proyectos/tw_run2/desarrollo/susyMaintenanceScripts/friendsWithBenefits"
commandscaff = "python prepareEventVariablesFriendTree.py -t NanoAOD {inpath} {outpath} -I CMGTools.TTHAnalysis.tools.nanoAOD.TopRun2_modules {module} {friends} {dataset} --log {logdir} -N {chunksize} --name {jobname} -q {queue} --env oviedo {ex}"
friendfolders = ["0_yeartag", "1_lepmerge_roch", "2_cleaning", "3_varstrigger", "4_scalefactors"]
#chunksizes    = [5000000, 100000, 500000, 100000, 250000] # veyos
chunksizes    = [5000000, 250000, 500000, 250000, 250000] # novos
#chunksizes    = [5000000, 250000, 250000, 250000, 250000] # mais novos inda
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
    #### Nominales
    # ttbar
    "TTTo2L2Nu"        : "Tree_TTTo2L2Nu_TuneCP5_PSweights",
    "TTToSemiLeptonic" : "Tree_TTToSemiLeptonic_TuneCP5_PSweights",
    "TT_CUETP8M2T4"    : ["TT_TuneCUETP8M2T4_nobackup_*", "TT_TuneCUETP8M2T4_PSweights*", "TT_TuneCUETP8M2T4_0", "TT_TuneCUETP8M2T4_1", "TT_TuneCUETP8M2T4_2", "TT_TuneCUETP8M2T4_3"],

    # tW
    "tW_noFullHad"    : "Tree_tW_5f_noFullHad_",
    "tbarW_noFullHad" : "Tree_tbarW_5f_noFullHad_",

    # WJets
    "WJetsToLNu_MLM": "Tree_WJetsToLNu_TuneCUETP8M1_MLM",

    # DY
    "DYJetsToLL_M_10to50" : "Tree_DYJetsToLL_M_10to50_TuneCUETP8M1_amcatnloFXFX",
    "DYJetsToLL_M_50"     : "Tree_DYJetsToLL_M_50_TuneCUETP8M1_amcatnloFXFX",

    # WW
    "WWTo2L2Nu" : "Tree_WWTo2L2Nu",
    "WWToLNuQQ" : "Tree_WWToLNuQQ",

    ### WZ
    "WZTo2L2Q"    : "Tree_WZTo2L2Q_amcatnloFXFX_madspin",
    "WZTo3LNu"    : "Tree_WZTo3LNu_TuneCUETP8M1",
    "WZTo1L1Nu2Q" : "Tree_WZTo1L1Nu2Q_amcatnloFXFX_madspin",  ### WARNING: duda hay amcatnlo y powheg

    ### ZZ
    "ZZTo2L2Nu" : "Tree_ZZTo2L2Nu",
    #"ZZTo2L2Q"  : "ZZTo2L2Q_amcatnloFXFX_madspin",  ### WARNING: duda aqui con zz, hay amcatnlo y powheg
    "ZZTo2L2Q"  : "Tree_ZZTo2L2Q_0",
    "ZZTo4L"    : "Tree_ZZTo4L",

    ### ttW
    "TTWJetsToLNu" : "Tree_TTWJetsToLNu_TuneCUETP8M1_amcatnloFXFX_madspin",
    "TTWJetsToQQ"  : "Tree_TTWJetsToQQ_TuneCUETP8M1_amcatnloFXFX_madspin",

    ### ttZ
    "TTZToLL_M_1to10_MLM" : "Tree_TTZToLL_M_1to10_TuneCUETP8M1_MLM",
    "TTZToLLNuNu_M_10"    : "Tree_TTZToLLNuNu_M_10_TuneCUETP8M1_amcatnlo",
    "TTZToQQ"             : "Tree_TTZToQQ_TuneCUETP8M1_amcatnlo",

    #### Incertidumbres
    # tW
    #"tW_noFullHad_DS"     : "tW_5f_DS_noFullHad_TuneCUETP8M",
    #"tbarW_noFullHad_DS"  : "tbarW_5f_DS_noFullHad",

    # tt syst: TODO
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


    #### Datos
    "SingleMuon"     : "Tree_SingleMuon_Run2016",
    "SingleElectron" : "Tree_SingleElectron_Run2016",
    "DoubleMuon"     : "Tree_DoubleMuon_Run2016",
    "DoubleEG"       : "Tree_DoubleEG_Run2016",
    "MuonEG"         : "Tree_MuonEG_Run2016",
}



sampledict[2017] = {
    #### Nominales
    # ttbar
    "TTTo2L2Nu"        : ["Tree_TTTo2L2Nu_TuneCP5_PSweights_*", "Tree_TTTo2L2Nu_TuneCP5_*"],
    "TTToSemiLeptonic" : "Tree_TTToSemiLeptonic_TuneCP5_",

    # tW
    "tbarW_noFullHad" : "Tree_tbarW_5f_noFullHad_TuneCP5",
    "tW_noFullHad"    : "Tree_tW_5f_noFullHad_TuneCP5",

    # W Jets
    "WJetsToLNu_MLM" : "Tree_WJetsToLNu_TuneCP5_MLM",

    # DY
    "DYJetsToLL_M_10to50_MLM" : "Tree_DYJetsToLL_M_10to50_TuneCP5_MLM",
    "DYJetsToLL_M_50"         : "Tree_DYJetsToLL_M_50_TuneCP5_amcatnloFXFX",

    # WW
    "WWTo2L2Nu" : "Tree_WWTo2L2Nu_NNPDF31_TuneCP5",

    # WZ
    "WZTo2L2Q" : "Tree_WZTo2L2Q_amcatnloFXFX_madspin",
    "WZTo3LNu" : "Tree_WZTo3LNu_0", ### WARNING: aquí se están mezclando/duplicando muestras nel stop
    #"WZTo3LNu_aMCatNLO" : "Tree_WZTo3LNu_TuneCP5_amcatnloFXFX",

    # ZZ
    "ZZTo2L2Nu" : "Tree_ZZTo2L2Nu",
    "ZZTo2L2Q"  : "Tree_ZZTo2L2Q_amcatnloFXFX_madspin",
    "ZZTo4L"    : "Tree_ZZTo4L",

    # ttW
    "TTWJetsToLNu" : "Tree_TTWJetsToLNu_TuneCP5_",
    "TTWJetsToQQ"  : "Tree_TTWJetsToQQ_TuneCP5_amcatnloFXFX_madspin",

    # ttZ
    "TTZToLL_M_1to10"  : "Tree_TTZToLL_M_1to10_TuneCP5_amcatnlo",
    "TTZToLLNuNu_M_10" : "Tree_TTZToLLNuNu_M_10_TuneCP5_amcatnlo",
    "TTZToQQ"          : "Tree_TTZToQQ_TuneCP5_amcatnlo",


    #### Incertidumbres
    # ttbar
    #TTTo2L2Nu_hdampDown   : TTTo2L2Nu_hdampDOWN_TuneCP5_PSweights
    #TTTo2L2Nu_hdampUp     : TTTo2L2Nu_hdampUP_TuneCP5_PSweights
    #TTTo2L2Nu_TuneCP5Down : TTTo2L2Nu_TuneCP5down_PSweights
    #TTTo2L2Nu_TuneCP5Up   : TTTo2L2Nu_TuneCP5up_PSweights
    #TTTo2L2Nu_mtop166p5   : TTTo2L2Nu_mtop166p5_TuneCP5, TTTo2L2Nu_mtop166p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop175p5   : TTTo2L2Nu_mtop175p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop178p5   : TTTo2L2Nu_mtop178p5_TuneCP5, TTTo2L2Nu_mtop178p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop169p5   : TTTo2L2Nu_mtop169p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop171p5   : TTTo2L2Nu_mtop171p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop173p5   : TTTo2L2Nu_mtop173p5_TuneCP5_PSweights

    # tW
    # WARNING: faltan DS, UE

    #### Datos
    "SingleMuon"     : "Tree_SingleMuon_Run2017",
    "SingleElectron" : "Tree_SingleElectron_Run2017",
    "DoubleMuon"     : "Tree_DoubleMuon_Run2017",
    "DoubleEG"       : "Tree_DoubleEG_Run2017",
    "MuonEG"         : "Tree_MuonEG_Run2017",
}



sampledict[2018] = {
    #### Nominales
    # ttbar
    "TTTo2L2Nu"        : "Tree_TTTo2L2Nu_TuneCP5_",
    "TTToSemiLeptonic" : "Tree_TTToSemiLeptonic_TuneCP5_",

    # tW
    "tW_noFullHad"    : "Tree_tW_5f_noFullHad_TuneCP5",
    "tbarW_noFullHad" : "Tree_tbarW_5f_noFullHad_TuneCP5",

    # WWbb
    "WWbb" : "Tree_b_bbar_4l_TuneCP5_ext1",

    # W Jets
    "WJetsToLNu_MLM" : "Tree_WJetsToLNu_TuneCP5_MLM",

    # DY
    "DYJetsToLL_M_10to50_MLM" : "Tree_DYJetsToLL_M_10to50_TuneCP5_MLM",
    "DYJetsToLL_M_50"         : "Tree_DYJetsToLL_M_50_TuneCP5_amcatnloFXFX",

    # WW
    "WWTo2L2Nu"            : "Tree_WWTo2L2Nu_NNPDF31_TuneCP5",
    #"WWTo1L1Nu2Q_aMCatNLO" : "Tree_WWTo1L1Nu2Q_amcatnloFXFX_madspin",
    "WWTo1L1Nu2Q"          : "Tree_WWToLNuQQ_NNPDF31_TuneCP5",
    "WWTo4Q"               : "Tree_WWTo4Q_NNPDF31_TuneCP5",

    # WZ
    "WZTo1L3Nu"         : "Tree_WZTo1L3Nu_amcatnloFXFX_madspin",
    "WZTo2L2Q"          : "Tree_WZTo2L2Q_amcatnloFXFX_madspin",
    "WZTo3LNu"          : "Tree_WZTo3LNu_TuneCP5_ext1_0",
    #"WZTo3LNu_aMCatNLO" : "Tree_WZTo3LNu_TuneCP5_amcatnloFXFX",

    # ZZ
    "ZZTo2L2Nu"      : "Tree_ZZTo2L2Nu_TuneCP5",
    "ZZTo2L2Q"       : "Tree_ZZTo2L2Q_amcatnloFXFX_madspin",
    "ZZTo2Q2Nu"      : "Tree_ZZTo2Q2Nu_TuneCP5_amcatnloFXFX_madspin",
    "ZZTo4L"         : "Tree_ZZTo4L",
    #"ZZGJetsTo4L2Nu" : "Tree_ZZGJetsTo4L2Nu_4f_TuneCP5_amcatnloFXFX",

    # WWW
    "WWW_dilepton"   : "Tree_WWW_4F_DiLeptonFilter_TuneCP5_amcatnlo",

    # WWZ
    "WWZ"            : "Tree_WWZ_TuneCP5_amcatnlo",
    #"WWZJetsTo4L2Nu" : "Tree_WWZJetsTo4L2Nu_4f_TuneCP5_amcatnloFXFX",

    # WZZ
    "WZZ"            : "Tree_WZZ_TuneCP5_amcatnlo",
    #"WZZJetsTo4L2Nu" : "Tree_WZZJetsTo4L2Nu_4f_TuneCP5_amcatnloFXFX",

    # ZZZ
    #"ZZZJetsTo4L2Nu" : "Tree_ZZZJetsTo4L2Nu_4f_TuneCP5_amcatnloFXFX",

    # ttW
    "TTWJetsToLNu" : "Tree_TTWJetsToLNu_TuneCP5_amcatnloFXFX_madspin",
    "TTWJetsToQQ"  : "Tree_TTWJetsToQQ_TuneCP5_amcatnloFXFX_madspin",

    # ttZ
    "TTZToLL_M_1to10"  : "Tree_TTZToLL_M_1to10_TuneCP5_amcatnlo",
    "TTZToLLNuNu_M_10" : "Tree_TTZToLLNuNu_M_10_TuneCP5_amcatnlo",
    "TTZToQQ"          : "Tree_TTZToQQ_TuneCP5_amcatnlo",


    #### Incertidumbres
    # ttbar
    #TTTo2L2Nu_hdampDown   : TTTo2L2Nu_hdampDOWN_TuneCP5_PSweights
    #TTTo2L2Nu_hdampUp     : TTTo2L2Nu_hdampUP_TuneCP5_PSweights
    #TTTo2L2Nu_TuneCP5Down : TTTo2L2Nu_TuneCP5down_PSweights
    #TTTo2L2Nu_TuneCP5Up   : TTTo2L2Nu_TuneCP5up_PSweights
    #TTTo2L2Nu_mtop166p5   : TTTo2L2Nu_mtop166p5_TuneCP5, TTTo2L2Nu_mtop166p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop175p5   : TTTo2L2Nu_mtop175p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop178p5   : TTTo2L2Nu_mtop178p5_TuneCP5, TTTo2L2Nu_mtop178p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop169p5   : TTTo2L2Nu_mtop169p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop171p5   : TTTo2L2Nu_mtop171p5_TuneCP5_PSweights
    #TTTo2L2Nu_mtop173p5   : TTTo2L2Nu_mtop173p5_TuneCP5_PSweights

    # tW
    # WARNING: faltan DS, UE


    #### Datos
    "SingleMuon" : "Tree_SingleMuon_Run2018",
    "EGamma"     : "Tree_EGamma_Run2018",
    "DoubleMuon" : "Tree_DoubleMuon_Run2018",
    "MuonEG"     : "Tree_MuonEG_Run2018",
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



def getFriendsFolder(dataset, basepath, step_friends):
    doihavefibrefriends = False
    rwfolder = basepath + "/" + friendfolders[step_friends]
    rofolder = basepath.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias") + "/" + friendfolders[step_friends]
    if os.path.isdir(rofolder):
        myfibrefriends = [f for f in os.listdir(rofolder) if (".root" in f and dataset in f and "chunk" not in f and "Friend" in f)]
        if len(myfibrefriends) > 0: doihavefibrefriends = True

    #if doihavefibrefriends:
        #wr.warn("====== WARNING! Friends detected in RO folder for this production. Using them for dataset {d} and step (of the friends) {s}".format(d = dataset, s = step_friends))
        #return rofolder
    #else:
        #return rwfolder
    return rwfolder


def SendDatasetJobs(task):
    dataset, year, step, inputpath_, isData, queue, extra, regexp = task
    outpath_ = friendspath + "/" + prodname + "/" + str(year) + "/" + friendfolders[step]
    dataset_ = ("--dm " if regexp else "-d ") + dataset
    jobname_ = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step)
    logdir_  = logpath.format(step_prefix = friendfolders[step], y = year)

    friendsbasepath = friendspath + "/" + prodname + "/" + str(year) + "/"
    friendpref = "-F Friends "
    friendsuff = "/{cname}_Friend.root"

    comm = ""; module_ = ""; friends_ = ""

    if   step == 0:
        module_ = "addYearTag_{y}_{ty}".format(y = year,
                                                    ty = ("mc" if not isData else
                                                          "singlemuon"
                                                          if "singlemuon" in dataset.lower() else
                                                          "singleelec"
                                                          if "singleelec" in dataset.lower() or "egamma" in dataset.lower() else
                                                          "doublemuon"
                                                          if "doublemuon" in dataset.lower() else
                                                          "doubleeg"
                                                          if "doubleeg"   in dataset.lower() else
                                                          "muoneg")
                                                    )
        friends_ = ""

    elif step == 1:
        module_  = "lepMerge_roch"
        friends_ += friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff

    elif step == 2:
        module_  = "cleaning_{ty}_{y}".format(y = year, ty = "data" if isData else "mc")
        friends_ += friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff

    elif step == 3:
        module_  = "varstrigger"
        friends_ += friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 2) + friendsuff

    elif step == 4 and not isData:
        module_  = "sfSeq_{y}".format(y = year)
        friends_ += friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 2) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 3) + friendsuff


    if module_ != "":
        comm = commandscaff.format(inpath  = inputpath_,
                                   outpath = outpath_,
                                   module  = module_,
                                   friends = friends_,
                                   dataset = dataset_,
                                   jobname = jobname_,
                                   logdir  = logdir_,
                                   chunksize = chunksizes[step],
                                   queue   = queue,
                                   ex      = extra
        )
        print "Command: ", comm
        os.system(comm)

    return


def GeneralSubmitter(task):
    dataset, year, step, queue, extra = task
    isData     = any(ext in dataset for ext in datasamples)
    inputpath_ = (datapath if isData else mcpath) + "/" + str(year) + "/"
    if not os.path.isdir(logpath.format(step_prefix = friendfolders[step], y = year)):
        os.system("mkdir -p " + logpath.format(step_prefix = friendfolders[step], y = year))

    if isinstance(sampledict[year][dataset], list):
        #### 1) There are multiple elements in the sample dict, that may or not have regular expressions.
        #    We will have to check each element to find whether it has or not an asterisk at the end (this
        #    is the only allowed regular expression). If it has not an asterisk, we will assume that it
        #    should not have a regular expression.
        for el in sampledict[year][dataset]:
            SendDatasetJobs( (el, year, step, inputpath_, isData, queue, extra, (el[-1] == "*") ) )

    else:
        #### 2) There is only one element in the sample dict.. We assume it to have a regular expression.
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

    inputpath_ = (datapath if isData else mcpath) + "/" + str(year) + "/"
    basefolder = friendspath + "/" + prodname + "/" + str(year) + "/" + friendfolders[step]


    if isinstance(sampledict[year][dataset], list):
        filelist = [f for f in os.listdir(inputpath_) if any(ext.replace("*", "") in f for ext in sampledict[year][dataset])]
    else:
        filelist = [f for f in os.listdir(inputpath_) if (sampledict[year][dataset] in f)]


    pendingdict = {}

    for dat in filelist:
        pendingdict[dat] = {}
        nchks = 0; totEnt = 0
        try:
            nchks, totEnt = getNchunks(dat, year, step)
        except:
            raise RuntimeError("FATAL: could not access {d} to obtain the number of chunks.".format(d = dat))
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
                    pendingdict[dat][ch] = errs.corrupt
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


def CheckMergedDataset(task):
    dataset, year, step = task
    isData     = any(ext in dataset for ext in datasamples)

    inputpath_ = (datapath if isData else mcpath) + "/" + str(year) + "/"
    basefolder = friendspath + "/" + prodname + "/" + str(year) + "/" + friendfolders[step]


    if isinstance(sampledict[year][dataset], list):
        filelist = [f for f in os.listdir(inputpath_) if any(ext.replace("*", "") in f for ext in sampledict[year][dataset])]
    else:
        filelist = [f for f in os.listdir(inputpath_) if (sampledict[year][dataset] in f)]


    pendingdict = {}

    for dat in filelist:
        pendingdict[dat] = errs.NoErr
        nchks = 0; totEnt = 0
        try:
            nchks, totEnt = getNchunks(dat, year, step)
        except:
            raise RuntimeError("FATAL: could not access {d} to obtain the number of entries.".format(d = dat))
        print "    - Checking dataset", dat, "(expected entries: {ent})".format(ent = totEnt)

        friendname = dat.replace(".root", "") + "_Friend.root"
        filepath   = basefolder + "/" + friendname
        #print "opening", filepath

        if not os.path.isfile(filepath):                  #### 1st: existance
            print "# Merged friendtree {chk} has not been found.".format(chk = friendname)
            pendingdict[dat] = errs.exist
        elif os.path.getsize(filepath) <= minchunkbytes:  #### 2nd: size
            print "# Merged friendtree {chk} has less size than the minimum.".format(chk = friendname)
            pendingdict[dat] = errs.size
        else:
            fch = r.TFile.Open(filepath, "READ")
            if not fch:                                   #### 3rd: ROOT access (corruption)
                print "# Merged friendtree {chk} cannot be accessed: it is corrupted.".format(chk = friendname)
                pendingdict[dat] = errs.corrupt
            else:
                tmpentries = fch.Get("Friends").GetEntries()
                #print tmpentries
                fch.Close()
                if int(tmpentries) != int(totEnt):        #### 4th: number of entries
                    print "# Merged friendtree {chk} does not have the expected entries ({ent}), it has {realent}.".format(chk = friendname, ent = totEnt, realent = tmpentries)
                    pendingdict[dat] = errs.entries

            del fch

    return pendingdict, dataset


#### NOTE: for completeness, here lies the old MergeThoseChunks function.
#def MergeThoseChunks(year, step, queue, extra):
    #basefolder = friendspath + "/" + prodname + "/" + str(year) + "/" + friendfolders[step]
    #chunklist  = [f for f in os.listdir(basefolder) if (".root" in f and "chunk" in f)]
    #if len(chunklist) == 0:
        #print "> No chunks found in the search folder! ({f})".format(f = basefolder)
    #else:
        #wpath = os.getcwd()
        #os.chdir(utilspath)
        #os.system("bash chunkDealer.sh " + basefolder + " merge")
        #os.chdir(wpath)
    #return



def MergeThoseChunks(year, step, queue, extra, noconf = False):
    basefolder = friendspath + "/" + prodname + "/" + str(year) + "/" + friendfolders[step]
    chunklist  = [f for f in os.listdir(basefolder) if (".root" in f and "chunk" in f)]
    if len(chunklist) == 0:
        print "> No chunks found in the search folder! ({f})".format(f = basefolder)
    else:
        allRfileslist  = [f for f in os.listdir(basefolder) if (".root" in f)]
        print "> Chunks found in {b}. Please, take into account that no check upon the chunks will be done here.".format(b = basefolder)
        dictofmerges = {}
        for chk in allRfileslist:
            tmplex = chk.split("Friend")[0]
            tmpsuf = chk.split("Friend")[1]
            if tmplex in dictofmerges:
                dictofmerges[tmplex].append(tmpsuf)
            else:
                dictofmerges[tmplex] = [tmpsuf]

        nsuscept = len(list(dictofmerges.keys()))
        nmerged  = len( [f for f in list(dictofmerges.keys()) if ".root" in dictofmerges[f]] )

        print "\n> {n1} datasets found susceptible to be merged, of which {n2} have already merged files and will be ignored.".format(n1 = nsuscept, n2 = nmerged )


        if nsuscept != nmerged:
            print "    - The ones without merged files are the following."
            for dat in dictofmerges:
                if ".root" not in dictofmerges[dat]:
                    print "# Dataset: {d}".format(d = dat)

            cont = False
            if noconf:
                cont = True
            elif confirm("\n> Do you want to merge the chunks of those datasets?"):
                cont = True

            if cont:
                print "\n> Beginning merge."
                for dat in dictofmerges:
                    if ".root" not in dictofmerges[dat]:
                        print "\n    - Merging the {nch} chunks of dataset {d}.".format(nch = len(dictofmerges[dat]), d = dat)
                        comm = "hadd -f3 " + basefolder + "/" + dat + "Friend.root "
                        for chk in dictofmerges[dat]: comm += " " + basefolder + "/" + dat + "Friend" + chk
                        print "Command: " + comm
                        #sys.exit()
                        os.system(comm)
    return


def CheckLotsOfMergedDatasets(dataset, year, step, queue, extra, ncores):
    fullpendingdict = {}
    totalcount = 0
    if dataset.lower() != "all":
        tmpdict, dat = CheckMergedDataset( (dataset, year, step) )
        tmpcount = sum([1 for td in tmpdict if tmpdict[td] != 0])
        totalcount += tmpcount
        if tmpcount != 0: fullpendingdict[dat] = tmpdict
    else:
        tasks = []
        for dat in sampledict[year]:
            isData = any(ext in dat for ext in datasamples)
            if not isData or (isData and step < 4):
                tasks.append( (dat, year, step) )
        if ncores > 1:
            pool = Pool(ncores)
            listofdicts = pool.map(CheckMergedDataset, tasks)
            pool.close()
            pool.join()
            del pool
            for tmptupl in listofdicts:
                tmpcount = sum([1 for td in tmptupl[0] if tmptupl[0][td] != 0])
                totalcount += tmpcount
                if tmpcount != 0: fullpendingdict[tmptupl[1]] = tmptupl[0]
        else:
            for task in tasks:
                tmpdict, dat = CheckChunksByDataset(task)
                tmpcount = sum([1 for td in tmpdict if tmpdict[td] != 0])
                totalcount += tmpcount
                if tmpcount != 0: fullpendingdict[dat] = tmpdict


    #print fullpendingdict
    print "\n> Finished checks."
    if len(list(fullpendingdict.keys())) != 0:
        print "    - {nch} merged datasets should be remerged. These are:".format(nch = totalcount)
        for d in fullpendingdict:
            for part in fullpendingdict[d]:
                print "# Dataset: {dat}".format(dat = part)

        if confirm("> Do you want to remerge these datasets? The current merged files will be deleted and afterwards, they will be reproduced (please note that all non-merged chunks in the folder will be merged!)"):
            for d in fullpendingdict:
                for part in fullpendingdict[d]:
                    print "   - Erasing file {f}"
                    #os.system("rm " + friendspath + "/" + prodname + "/" + str(year) + "/" + friendfolders[step] + "/" + part.replace(".root", "") + "_Friend.root")
            MergeThoseChunks(year, step, queue, extra, noconf = True)
        else:
            return


def CheckLotsOfChunks(dataset, year, step, queue, extra, ncores):
    fullpendingdict = {}
    totalcount = 0
    if dataset.lower() != "all":
        tmpdict, dat = CheckChunksByDataset( (dataset, year, step) )
        tmpcount = sum([len(list(tmpdict[td].keys())) for td in tmpdict])
        totalcount += tmpcount
        if tmpcount != 0: fullpendingdict[dat] = tmpdict
    else:
        tasks = []
        for dat in sampledict[year]:
            isData = any(ext in dat for ext in datasamples)
            if not isData or (isData and step < 4):
                tasks.append( (dat, year, step) )
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

        if confirm("\n> Do you want to send these jobs?"):
            if not os.path.isdir(logpath.format(step_prefix = friendfolders[step], y = year)):
                os.system("mkdir -p " + logpath.format(step_prefix = friendfolders[step], y = year))

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
    parser.add_argument('--year',    '-y', metavar = 'year',    dest = "year",    required = False, default = 2016, type = int)
    parser.add_argument('--dataset', '-d', metavar = 'dataset', dest = "dataset", required = False, default = "TTTo2L2Nu")
    parser.add_argument('--step',    '-s', metavar = 'step',    dest = "step",    required = False, default = 0, type = int)
    parser.add_argument('--check',   '-c', action = "store_true", dest = "check", required = False, default = False)
    parser.add_argument('--queue',   '-q', metavar = 'queue',   dest = "queue",   required = False, default = "batch")
    parser.add_argument('--extraArgs','-e', metavar = 'extra',  dest = "extra",   required = False, default = "")
    parser.add_argument('--ncores',  '-n', metavar = 'ncores',  dest = "ncores",  required = False, default = 1, type = int)
    parser.add_argument('--merge',  '-m', action = "store_true", dest = "merge",  required = False, default = False)
    #parser.add_argument('--pretend',  '-p', metavar = 'extra',  dest = "extra",   required = False, default = "")

    args    = parser.parse_args()
    year    = args.year
    dataset = args.dataset
    check   = args.check
    step    = args.step
    queue   = args.queue
    extra   = args.extra
    ncores  = args.ncores
    merge   = args.merge


    if check and not merge:
        print "\n> Beginning checks of all chunks for the production of year {y}, of the friend trees of step {s} for {d} dataset(s).".format(y = year, s = step, d = dataset)
        CheckLotsOfChunks(dataset, year, step, queue, extra, ncores)
    elif merge and not check:
        MergeThoseChunks(year, step, queue, extra)
    elif merge and check:
        CheckLotsOfMergedDatasets(dataset, year, step, queue, extra, ncores)
    else:
        if dataset.lower() != "all":
            GeneralSubmitter( (dataset, year, step, queue, extra) )
        else:
            tasks = []
            for dat in sampledict[year]: tasks.append( (dat, year, step, queue, extra) )
            print "> A total of {n} commands (that might send one, or more jobs) are going to be executed for year {y}, step {s} in the queue {q} and parallelised with {j} cores.".format(n = len(tasks), y = year, s = step, q = queue, j = ncores)

            if confirm("\n> Do you want to send these jobs?"):
                print "> Beginning submission."
                if ncores > 1:
                    pool = Pool(ncores)
                    pool.map(GeneralSubmitter, tasks)
                    pool.close()
                    pool.join()
                    del pool
                else:
                    for tsk in tasks: GeneralSubmitter(tsk)
