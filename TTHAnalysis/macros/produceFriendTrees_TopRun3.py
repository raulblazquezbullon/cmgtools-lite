# -*- coding: UTF-8 -*-.
#!/usr/bin/env python
import os, sys, enum, argparse
from multiprocessing import Pool
import warnings as wr
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)

#### Settings
prodname = "2023-04-10"

datasamples  = ["SingleMuon", "SingleElec", "DoubleMuon", "DoubleEG", "MuonEG", "LowEGJet", "HighEGJet", "EGamma","Muon"]


mcpath       = "/beegfs/data/nanoAODv11/tw-run3/productions/" + prodname
friendspath  = "/beegfs/data/nanoAODv11/tw-run3/productions/"

###### Path to create MiniTrees for MVA training
#prodname     = "2022-10-25"
#mcpath       = "/beegfs/data/nanoAODv10/twrun3/productions/" + prodname
#friendspath  = "/beegfs/data/nanoAODv10/twrun3/productions/"

mcpathdiv    = mcpath
datapath     = mcpath


logpath      = friendspath + "/" + prodname + "/{y}/{step_prefix}/logs"
commandscaff = "python3 prepareEventVariablesFriendTree.py -t NanoAOD {inpath} {outpath} -I CMGTools.TTHAnalysis.tools.nanoAOD.TopRun3_modules {module} {friends} {dataset} -N {chunksize} {cluster} {ex}"
clusterscaff = "--log {logdir} --name {jobname} -q {queue} --env oviedo"
slurmscaff   = 'sbatch -c 1 -p {queue} -J mergeChunks -e {logdir}/logMerge.%j.%x.err -o {logdir}/logMerge.%j.%x.out --wrap "{command}"' # Scaff to merge chunks

friendfolders = {0 : "0_jecs",
                 1 : "1_lepsuncsAndParticle",
                 2 : "2_cleaning",
                 3 : "3_varstrigger",
                 4 : "4_scalefactors_test",
                 5 : "5_mvas",
                 6 : "6_mvas_new_multiClass_withSameFlav",
                 "btageffvars" : "x_btageff_pasf",
                 "mvatrain" : "x_mvatrain",
}

chunksizes    = {0 : 200000, 
                 1 : 200000,
                 2 : 200000,
                 3 : 200000,
                 4 : 200000,
                 5 : 250000,
                 6 : 250000,
                 "btageffvars" : 500000,
                 "mvatrain" : 500000,
}
minchunkbytes = 1000

class errs(enum.IntEnum):
    NoErr   = 0
    exist   = 1
    size    = 2
    entries = 3
    corrupt = 4


minitnamedict = {
    "ttbar"         : ["TTTo2L2Nu"],
    "ttbarsemilep"  : ["TTToSemiLeptonic"],
    "tw"            : ["tW"],
    "tbarw"         : ["tbarW"],
    "dy_10to50"     : ["DYJetsToLL_M_10to50_NLO"],
    "dy_50"         : ["DYJetsToLL_M_50_NLO"],
}


sampledict  = {}
sampledict["2022"] = {}; sampledict["2022PostEE"] = {}

sampledict["2022"] = {
    ###### Nominales
    ##### ttbar
    # Powheg+Pythia8
    "TTTo2L2Nu"        : "TTTo2L2Nu_CP5_13p6TeV_powheg_pythia8",
    "TTToSemiLeptonic" : "TTTo2J1L1Nu_CP5_13p6TeV_powheg_pythia8",

    # Powheg+Herwig7


    # aMC@NLO+Pythia8


    ##### WWbb



    ###### tW
    ### Inclusive


    ### No fully hadronic
    "tW"       : "TWminus_DR_AtLeastOneLepton_CP5_13p6TeV_powheg_pythia8",
    "tbarW"    : "TbarWplus_DR_AtLeastOneLepton_CP5_13p6TeV_powheg_pythia8",

    ## No fully hadronic DS


    ### No fully hadronic Powheg+Herwig7


    ### Dilep aMC@NLO+Pythia8


    ###### WJets
    ### LO
    "WJetsToLNu_LO" : "WJetsToLNu_TuneCP5_13p6TeV_madgraphMLM_pythia8",

    ### NLO


    ###### DY
    ### LO
    "DYJetsToLL_M_10to50_LO" : "DYJetsToLL_M_10to50_TuneCP5_13p6TeV_madgraphMLM_pythia8",
    "DYJetsToLL_M_50_LO"     : "DYJetsToLL_M_50_TuneCP5_13p6TeV_madgraphMLM_pythia8ext", 

    ### NLO


    ###### WW
    ## LO
    "WW_LO" : "WW_TuneCP5_13p6TeV_pythia8",

    ## NLO


    ###### WZ
    ## LO
    "WZ_LO" : "WZ_TuneCP5_13p6TeV_pythia8",

    ## NLO


    ###### ZZ
    ## LO
    "ZZ_LO" : "ZZ_TuneCP5_13p6TeV_pythia8",

    ## NLO


    ##### ttW


    ##### ttZ


    ###### ttGamma


    ###### VVV


    ######## Incertidumbres
    ####### tW
    ### hdamp


    ### mtop


    ### CR


    ### UE


    ### PDF


    ###### ttbar
    ### hdamp


    ### mtop


    ### CR


    ### UE



    ##### Datos
    "SingleMuon"     : "SingleMuon_Run2022",
    #"SingleElectron" : "SingleElectron_Run2016",
    "DoubleMuon"     : "DoubleMuon_Run2022",
    #"DoubleEG"       : "DoubleEG_Run2016",
    "MuonEG"         : "MuonEG_Run2022",
    "EGamma"         : "EGamma_Run2022",
    "Muon"           : "Muon_Run2022",

}

sampledict["2022PostEE"] = {
    ###### Nominales
    ##### ttbar
    # Powheg+Pythia8
    "TTTo2L2Nu"        : "TTto2L2Nu_TuneCP5_13p6TeV_powheg_pythia8",
    "TTToSemiLeptonic" : "TTTo2J1L1Nu_CP5_13p6TeV_powheg_pythia8",

    # Powheg+Herwig7


    # aMC@NLO+Pythia8


    ##### WWbb



    ###### tW
    ### Inclusive


    ### No fully hadronic
    "tW"       : "TWminus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg_pythia8",
    "tbarW"    : "TbarWplus_DR_AtLeastOneLepton_TuneCP5_13p6TeV_powheg_pythia8",

    ## No fully hadronic DS


    ### No fully hadronic Powheg+Herwig7


    ### Dilep aMC@NLO+Pythia8


    ###### WJets
    ### LO
    "WJetsToLNu_LO" : "WJetsToLNu_TuneCP5_13p6TeV_madgraphMLM_pythia8",

    ### NLO


    ###### DY
    ### LO


    ### NLO
    "DYJetsToLL_M_10to50_NLO" : "DYto2L_2Jets_MLL_10to50_TuneCP5_13p6TeV_amcatnloFXFX_pythia8",
    "DYJetsToLL_M_50_NLO"     : "DYto2L_2Jets_MLL_50_TuneCP5_13p6TeV_amcatnloFXFX_pythia8", 

    ###### WW
    ## LO
    "WW_LO" : "WW_TuneCP5_13p6TeV_pythia8",

    ## NLO


    ###### WZ
    ## LO
    "WZ_LO" : "WZ_TuneCP5_13p6TeV_pythia8",

    ## NLO


    ###### ZZ
    ## LO
    "ZZ_LO" : "ZZ_TuneCP5_13p6TeV_pythia8",

    ## NLO


    ##### ttW


    ##### ttZ


    ###### ttGamma


    ###### VVV


    ######## Incertidumbres
    ####### tW
    ### hdamp


    ### mtop


    ### CR


    ### UE


    ### PDF


    ###### ttbar
    ### hdamp


    ### mtop


    ### CR


    ### UE



    ##### Datos
    "MuonEG"         : "MuonEG_Run2022",
    "EGamma"         : "EGamma_Run2022",
    "Muon"           : "Muon_Run2022",

}



trainsampledict = {}; trainsampledict["2022"] = {}; trainsampledict["2022PostEE"] = {}
trainsampledict["2022"] = {
    ### ttbar
    "TTTo2L2Nu" : sampledict["2022"]["TTTo2L2Nu"],
    "TTToSemiLeptonic" : sampledict["2022"]["TTToSemiLeptonic"],

    ### tW
    "tW"     : sampledict["2022"]["tW"],
    "tbarW"  : sampledict["2022"]["tbarW"],
    
    "DYJetsToLL_M_10to50_LO" : sampledict["2022"]["DYJetsToLL_M_10to50_LO"],
    "DYJetsToLL_M_50_LO"     : sampledict["2022"]["DYJetsToLL_M_50_LO"],
#    "DYJetsToLL_M_50"         : sampledict[2017]["DYJetsToLL_M_50"],
    #"DYJetsToLL_M_50_MLM"     : sampledict[2017]["DYJetsToLL_M_50_MLM"],
#    "DYJetsToLLdiv2_M_10to50_MLM" : sampledict[2017]["DYJetsToLLdiv2_M_10to50_MLM"],
#    "DYJetsToLLdiv2_M_50"         : sampledict[2017]["DYJetsToLLdiv2_M_50"],
}


trainsampledict["2022PostEE"] = {
    ### ttbar
    "TTTo2L2Nu" : sampledict["2022PostEE"]["TTTo2L2Nu"],
    "TTToSemiLeptonic" : sampledict["2022PostEE"]["TTToSemiLeptonic"],

    ### tW
    "tW"     : sampledict["2022PostEE"]["tW"],
    "tbarW"  : sampledict["2022PostEE"]["tbarW"],
    
    "DYJetsToLL_M_10to50_NLO" : sampledict["2022PostEE"]["DYJetsToLL_M_10to50_NLO"],
    "DYJetsToLL_M_50_NLO"     : sampledict["2022PostEE"]["DYJetsToLL_M_50_NLO"],
#    "DYJetsToLL_M_50"         : sampledict[2017]["DYJetsToLL_M_50"],
    #"DYJetsToLL_M_50_MLM"     : sampledict[2017]["DYJetsToLL_M_50_MLM"],
#    "DYJetsToLLdiv2_M_10to50_MLM" : sampledict[2017]["DYJetsToLLdiv2_M_10to50_MLM"],
#    "DYJetsToLLdiv2_M_50"         : sampledict[2017]["DYJetsToLLdiv2_M_50"],
}


def getFriendsFolder(dataset, basepath, step_friends):
    doihavefibrefriends = False
    rwfolder = basepath + "/" + friendfolders[step_friends]
    rofolder = basepath.replace("phedexrw", "phedex").replace("cienciasrw", "ciencias") + "/" + friendfolders[step_friends]
    if os.path.isdir(rofolder):
        myfibrefriends = [f for f in os.listdir(rofolder) if (".root" in f and dataset in f and "chunk" not in f and "Friend" in f)]
        if len(myfibrefriends) > 0: doihavefibrefriends = True
    #print rofolder,myfibrefriends
    if doihavefibrefriends:
        wr.warn("\n====== WARNING! Friends detected in RO folder for this production. Using them for dataset {d} and step (of the friends) {s}".format(d = dataset, s = step_friends))
        return rofolder
    else:
        return rwfolder
#        return rofolder
    return rwfolder


def SendDatasetJobs(task):
    dataset, year, step, inputpath_, isData, queue, extra, regexp, pretend, nthreads = task
    outpath_ = friendspath + "/" + prodname + "/" + str(year) + "/" + friendfolders[step]
    #outpath_ = "/beegfs/data/nanoAODv9/temp/pruebinajetpuid/" + str(year) + "/" + friendfolders[step]
    dataset_ = ("--dm " if regexp else "-d ") + dataset
    jobname_ = "happyTF_{y}_{d}_{s}".format(y = year, d = dataset, s = step)
    logdir_  = logpath.format(step_prefix = friendfolders[step], y = year)

    friendsbasepath = friendspath + "/" + prodname + "/" + str(year) + "/"
    friendpref = "-F Friends "
    friendsuff = "/{cname}_Friend.root"

    comm = ""; module_ = ""; friends_ = ""

    if   step == 0:
        module_ = "jecs_{ty}_{y}".format(ty = "data" if isData else "mc", y  = year)

    elif step == 1:
        module_  = "lepsuncsAndParticle_" + ("mc" if not isData else "data")

    elif step == 2:
        module_  = "cleaning_{ty}_{y}".format(ty = "data" if isData else "mc", y  = year)
        #if not isData:
        friends_ +=       friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff

    elif step == 3:
        module_  = "varstrigger_" + (("mc_" + year) if not isData else "data")
        #if not isData:
        friends_ +=       friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 2) + friendsuff

    elif step == 4 and not isData:
        module_  = "sfSeq_{y}".format(y = year)
        #if not isData:
        friends_ +=       friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 2) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 3) + friendsuff
    
    elif step == 5:
        #module_  = "mvas_" + ("mc" if not isData else "data")
        module_  = "mvas_" + ("mc" if not isData else "data")
        #if not isData:
        friends_ +=       friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 2) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 3) + friendsuff

    elif step == 6:
        #module_  = "mvas_" + ("mc" if not isData else "data")
        module_  = "mvaNew_" + ("mc" if not isData else "data")
        #if not isData:
        friends_ +=       friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 2) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 3) + friendsuff

    elif step == "btageffvars":
        module_ = "btagEffFtree_{y}".format(y  = year)
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff
    
    elif step == "mvatrain":
        module_  = "createMVAMiniTree"
        friends_ +=       friendpref + getFriendsFolder(dataset, friendsbasepath, 0) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 1) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 2) + friendsuff
        friends_ += " " + friendpref + getFriendsFolder(dataset, friendsbasepath, 3) + friendsuff
    
    if module_ != "":
        comm = commandscaff.format(inpath  = inputpath_,
                                   outpath = outpath_,
                                   module  = module_,
                                   friends = friends_,
                                   dataset = dataset_,
                                   chunksize = chunksizes[step],
                                   cluster = (clusterscaff.format(jobname = jobname_, logdir = logdir_, queue = queue) 
                                              if (queue != "") else
                                              #("--split-factor=-1 -j " + str(nthreads))
                                              ("-j " + str(nthreads))
                                              if nthreads != 1 else
                                              ""),
                                   ex      = extra
        )

        print("\nCommand: ", comm)
        if not pretend: os.system(comm)

    return


def GeneralSubmitter(task):
    dataset, year, step, queue, extra, pretend, nthreads = task
    for dataset_ in dataset.split(","):
        isData     = any(ext in dataset_ for ext in datasamples)
        #isDivision = ("division" in dataset_)
        isDivision = False
        inputpath_ = ((datapath if isData else mcpath) + "/" + str(year) + "/") if not isDivision else (mcpathdiv + "/" + ("ttbar" if "TTTo2L2Nu" in dataset_ else "tw_incl") + "/" + str(year) + "/")

        if not os.path.isdir(logpath.format(step_prefix = friendfolders[step], y = year)):
            os.system("mkdir -p " + logpath.format(step_prefix = friendfolders[step], y = year))

        if isinstance(sampledict[year][dataset_], list):
            #### 1) There are multiple elements in the sample dict, that may or not have regular expressions.
            #    We will have to check each element to find whether it has or not an asterisk at the end (this
            #    is the only allowed regular expression). If it has not an asterisk, we will assume that it
            #    should not have a regular expression.
            for el in sampledict[year][dataset_]:
                SendDatasetJobs( (el, year, step, inputpath_, isData, queue, extra, (el[-1] == "*"), pretend, nthreads ) )

        else:
            #### 2) There is only one element in the sample dict.. We assume it to have a regular expression.
            SendDatasetJobs( (sampledict[year][dataset_], year, step, inputpath_, isData, queue, extra, True, pretend, nthreads) )
    return


def getActualDatasets(listoffiles):
    listofdatasets = []
    for el in listoffiles:
        tmpstr = "_".join(el.split("_")[:-1])
        if tmpstr not in listofdatasets: listofdatasets.append( tmpstr )

    return listofdatasets


def getNchunks(fileparts, year, step, folder):
    isData = any(ext in (fileparts[0] if isinstance(fileparts, list) else fileparts) for ext in datasamples)
    #folder = (datapath if isData else mcpath) + "/" + str(year) + "/"

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
    #isDivision = ("division" in dataset)
    isDivision = False
    inputpath_ = ((datapath if isData else mcpath) + "/" + str(year) + "/") if not isDivision else (mcpathdiv + "/" + ("ttbar" if "TTTo2L2Nu" in dataset else "tw_incl") + "/" + str(year) + "/")
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
            nchks, totEnt = getNchunks(dat, year, step, inputpath_)
        except:
            raise RuntimeError("FATAL: could not access {d} to obtain the number of chunks from dataset group {dg}.".format(d = dat, dg = dataset))
        print("    - Checking dataset", dat, "(expected chunks: {nch})".format(nch = nchks))

        for ch in range(nchks):
            chkpath = basefolder + "/" + dat.replace(".root", "") + ("_Friend.chunk{chk}.root".format(chk = ch)
                                                                     if nchks > 1 else
                                                                     "_Friend.root")
            #print "opening", chkpath

            if not os.path.isfile(chkpath):                                 #### 1st: existance
                print("# Chunk {chk} has not been found.".format(chk = ch))
                pendingdict[dat][ch] = errs.exist
            elif os.path.getsize(chkpath) <= minchunkbytes:                 #### 2nd: size
                print("# Chunk {chk} has less size than the minimum.".format(chk = ch))
                pendingdict[dat][ch] = errs.size
            else:
                fch = r.TFile.Open(chkpath, "READ")
                if not fch:                                                 #### 3rd: ROOT access (corruption)
                    print("# Chunk {chk} cannot be accessed: it is corrupted.".format(chk = ch))
                    pendingdict[dat][ch] = errs.corrupt
                else:
                    tmpentries = 0
                    try:
                        tmpentries = fch.Get("Friends").GetEntries()
                    except:
                        print("# Chunk {chk} can be opened, but the TTree cannot be accessed: it is corrupted.".format(chk = ch))
                        pendingdict[dat][ch] = errs.corrupt
                    else:
                        #print tmpentries
                        fch.Close()
                        if ch == (nchks - 1):                                   #### 4th: number of entries
                            expEnt = totEnt - chunksizes[step] * (nchks - 1)
                            if int(tmpentries) != int(expEnt):
                                print("# Chunk {chk} does not have the expected entries ({ent}), it has {realent}.".format(chk = ch, ent = expEnt, realent = tmpentries))
                                pendingdict[dat][ch] = errs.entries
                        elif tmpentries != chunksizes[step]:
                            print("# Chunk {chk} does not have the expected entries ({ent}), it has {realent}.".format(chk = ch, ent = chunksizes[step], realent = tmpentries))
                            pendingdict[dat][ch] = errs.entries

                del fch

    return pendingdict, dataset


def CheckMergedDataset(task):
    dataset, year, step = task
    isData     = any(ext in dataset for ext in datasamples)

    #isDivision = ("division" in dataset)
    isDivision = False
    inputpath_ = ((datapath if isData else mcpath) + "/" + str(year) + "/") if not isDivision else (mcpathdiv + "/" + ("ttbar" if "TTTo2L2Nu" in dataset else "tw_incl") + "/" + str(year) + "/")
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
            nchks, totEnt = getNchunks(dat, year, step, inputpath_)
        except:
            raise RuntimeError("FATAL: could not access {d} to obtain the number of entries.".format(d = dat))
        print("    - Checking dataset", dat, "(expected entries: {ent})".format(ent = totEnt))

        friendname = dat.replace(".root", "") + "_Friend.root"
        filepath   = basefolder + "/" + friendname
        # print "opening", filepath
        
        if not os.path.isfile(filepath):                  #### 1st: existance
            print("# Merged friendtree {chk} has not been found.".format(chk = friendname))
            pendingdict[dat] = errs.exist
        elif os.path.getsize(filepath) <= minchunkbytes:  #### 2nd: size
            print("# Merged friendtree {chk} has less size than the minimum.".format(chk = friendname))
            pendingdict[dat] = errs.size
        else:
            fch = r.TFile.Open(filepath, "READ")
            if not fch:                                   #### 3rd: ROOT access (corruption)
                print("# Merged friendtree {chk} cannot be accessed: it is corrupted.".format(chk = friendname))
                pendingdict[dat] = errs.corrupt
            else:
                tmpentries = fch.Get("Friends").GetEntries()
                #print tmpentries
                fch.Close()
                if int(tmpentries) != int(totEnt):        #### 4th: number of entries
                    print("# Merged friendtree {chk} does not have the expected entries ({ent}), it has {realent}.".format(chk = friendname, ent = totEnt, realent = tmpentries))
                    pendingdict[dat] = errs.entries

            del fch

    return pendingdict, dataset



def MergeThoseChunks(year, step, queue, extra, noconf = False):
    basefolder = friendspath + "/" + prodname + "/" + str(year) + "/" + friendfolders[step]
    chunklist  = [f for f in os.listdir(basefolder) if (".root" in f and "chunk" in f)]
    if len(chunklist) == 0:
        print("> No chunks found in the search folder! ({f})".format(f = basefolder))
    else:
        allRfileslist  = [f for f in os.listdir(basefolder) if (".root" in f and f not in [el + ".root" for el in minitnamedict.keys()])]
        print("> Chunks found in {b}. Please, take into account that no check upon the chunks will be done here.".format(b = basefolder))
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

        print("\n> {n1} datasets found susceptible to be merged, of which {n2} have already merged files and will be ignored.".format(n1 = nsuscept, n2 = nmerged ))


        if nsuscept != nmerged:
            print("    - The ones without merged files are the following.")
            for dat in dictofmerges:
                if ".root" not in dictofmerges[dat]:
                    print("# Dataset: {d}".format(d = dat))

            cont = False
            if noconf:
                cont = True
            elif confirm("\n> Do you want to merge the chunks of those datasets?"):
                cont = True

            if cont:
                print("\n> Beginning merge.")
                for dat in dictofmerges:
                    if ".root" not in dictofmerges[dat]:
                        print("\n    - Merging the {nch} chunks of dataset {d}.".format(nch = len(dictofmerges[dat]), d = dat))
                        comm = "hadd -f3 " + basefolder + "/" + dat + "Friend.root "


                        #### NOTE: this step of ordering is EXTREMELY IMPORTANT. PLEASE DO NOT MERGE FTREES W/O FIRST ORDERING THE CHUNKS!!!! In addition, please note THAT HERE NO ATTENTION IS PAYED TO WHETHER ALL THE INTERMEDIATE CHUNKS EXIST OR IF SOME EXTRA CHUNK SHOULD BE INCLUDED. You should CHECK the chunks BEFORE merging.

                        tmpnchks = 1 + max( [ int(el.replace(".chunk", "").replace(".root", "")) for el in dictofmerges[dat] ] )

                        for ichk in range(tmpnchks): comm += " " + basefolder + "/" + dat + "Friend.chunk{i}.root".format(i = ichk)
                        
                        #sys.exit()
                        if queue == "batch":
                            comm = slurmscaff.format(queue = queue, logdir = logpath.format(step_prefix = friendfolders[step], y = year), command = comm)
                            print(comm)
                            os.system(comm)             
                        else:
                            print("Command: " + comm)
                            os.system(comm)

    ### EXTRA MERGE FOR MVA TRAINING MINITREES
    if step == "mvatrain":
        if confirm("\n> Do you want to merge the minitrees for MVA trainings?"):
            print("\n> Final merge for training purposes.")
            for finalfile in minitnamedict:
                listofsamplegs = []
                for dat in trainsampledict[year]:
                    if dat in minitnamedict[finalfile]: listofsamplegs.append(dat)

                listoffiles = []
                mergedlist  = [f for f in os.listdir(basefolder) if ("Friend.root" in f and "chunk" not in f)]
                for el in listofsamplegs:
                    if isinstance(trainsampledict[year][el], list):
                        for cand in trainsampledict[year][el]:
                            if cand[-1] == "*": listoffiles.extend( [f for f in mergedlist if cand.replace("*", "") in f] )
                            else:               listoffiles.append( cand + "_Friend.root")
                    else:
                        listoffiles.extend( [f for f in mergedlist if (trainsampledict[year][el] in f)] )


                print("    - Merging into " + basefolder + "/" + finalfile + ".root these files:")
                for el in listoffiles: print("# " + el)

                
                if len(listoffiles) < 100:
                    print("\n")
                    comm = "hadd -f3 " + basefolder + "/" + finalfile + ".root"

                    for ifile in listoffiles: comm += " " + basefolder + "/" + ifile
                    print("Command: " + comm)
                    #sys.exit()
                    os.system(comm)
                # If there are more than 100 files, we will merge them in groups of 100 and produce a final merged file
                else:
                    print("\n")
                    print("    - There are more than 100 files to merge, so we will merge them in groups of 100 and produce a final merged file.")
                    ngroups = int(len(listoffiles)/100)
                    if len(listoffiles) % 100 != 0: ngroups += 1

                    for igroup in range(ngroups):
                        comm = "hadd -f3 " + basefolder + "/" + finalfile + ".chunk{c}.root".format(c = igroup)
                        for ifile in listoffiles[igroup*100:(igroup+1)*100]: comm += " " + basefolder + "/" + ifile
                        print("Command: " + comm)
                        os.system(comm)

                    print("\n")
                    print("    - Now merging the final merged file.")
                    comm = "hadd -f3 " + basefolder + "/" + finalfile + ".root"
                    for igroup in range(ngroups): comm += " " + basefolder + "/" + finalfile + ".chunk{c}.root".format(c = igroup)
                    print("Command: " + comm)
                    os.system(comm)

                    print("\n")
                    print("    - Cleaning up the intermediate merged files.")
                    for igroup in range(ngroups): os.system("rm " + basefolder + "/" + finalfile + ".chunk{c}.root".format(c = igroup))
    return


def CheckLotsOfMergedDatasets(dataset, year, step, queue, extra, ncores):
    fullpendingdict = {}
    totalcount = 0
    if dataset.lower() != "all":
        if "," in dataset:
            for sd in dataset.split(","):
                tmpdict, dat = CheckMergedDataset( (sd, year, step) )
                tmpcount = sum([1 for td in tmpdict if tmpdict[td] != 0])
                totalcount += tmpcount
                if tmpcount != 0: fullpendingdict[dat] = tmpdict
        else:
            tmpdict, dat = CheckMergedDataset( (dataset, year, step) )
            tmpcount = sum([1 for td in tmpdict if tmpdict[td] != 0])
            totalcount += tmpcount
            if tmpcount != 0: fullpendingdict[dat] = tmpdict
    else:
        tasks = []
        for dat in sampledict[year]:
            isData = any(ext in dat for ext in datasamples)
            if (isData and step != 0 and step != 4) or (not isData):
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
    print("\n> Finished checks.")
    if len(list(fullpendingdict.keys())) != 0:
        print("    - {nch} merged datasets should be remerged. These are:".format(nch = totalcount))
        for d in fullpendingdict:
            for part in fullpendingdict[d]:
                print("# Dataset: {dat}".format(dat = part))

        if confirm("> Do you want to remerge these datasets? The current merged files will be deleted and afterwards, they will be reproduced (please note that all non-merged chunks in the folder will be merged!)"):
            for d in fullpendingdict:
                for part in fullpendingdict[d]:
                    tmpfile = friendspath + "/" + prodname + "/" + str(year) + "/" + friendfolders[step] + "/" + part.replace(".root", "") + "_Friend.root"
                    print("   - Erasing file {f}".format(f = tmpfile))
                    os.system("rm " + tmpfile)
            MergeThoseChunks(year, step, queue, extra, noconf = True)
        else:
            return


def CheckLotsOfChunks(dataset, year, step, queue, extra, ncores, mva, nthreads):
    fullpendingdict = {}
    totalcount = 0
    if dataset.lower() != "all" and "," not in dataset:
        tmpdict, dat = CheckChunksByDataset( (dataset, year, step) )
        tmpcount = sum([len(list(tmpdict[td].keys())) for td in tmpdict])
        totalcount += tmpcount
        if tmpcount != 0: fullpendingdict[dat] = tmpdict
    else:
        tasks = []
        thedict = trainsampledict[year] if mva else sampledict[year]
        if dataset.lower() == "all":
            for dat in thedict:
                isData = any(ext in dat for ext in datasamples)
                if (isData and step != 0 and step != 4) or (not isData):
                    tasks.append( (dat, year, step) )
        else:
            for dat in dataset.split(","):
                isData = any(ext in dat for ext in datasamples)
                if (isData and step != 0 and step != 4) or (not isData):
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
    print("\n> Finished checks.")
    if len(list(fullpendingdict.keys())) != 0:
        print("    - {nch} chunks should be reprocessed. These are:".format(nch = totalcount))
        for d in fullpendingdict:
            for part in fullpendingdict[d]:
                for ch in fullpendingdict[d][part]:
                    print("# Dataset: {dat} - chunk: {c}".format(dat = part, c = ch))

        if confirm("\n> Do you want to send these jobs?"):
            if not os.path.isdir(logpath.format(step_prefix = friendfolders[step], y = year)):
                os.system("mkdir -p " + logpath.format(step_prefix = friendfolders[step], y = year))

            tasks = []
            for d in fullpendingdict:
                for part in fullpendingdict[d]:
                    for ch in fullpendingdict[d][part]:
                        isData     = any(ext in part for ext in datasamples)
                        #isDivision = ("division" in d)
                        isDivision = False
                        inputpath_ = ((datapath if isData else mcpath) + "/" + str(year) + "/") if not isDivision else (mcpathdiv + "/" + ("ttbar" if "TTTo2L2Nu" in d else "tw_incl") + "/" + str(year) + "/")
                        tasks.append( (part.replace(".root", ""), year, step, inputpath_, isData, queue, "-c {chk} ".format(chk = ch) + extra, False, False, nthreads) )
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
        answer = input(message + " [Y/N]\n").lower()
    return answer[0] == "y"



if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python nanoAOD_checker.py [options]", description = "Checker tool for the outputs of nanoAOD production (NOT postprocessing)", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--year',    '-y', metavar = 'year',     dest = "year",    required = False, default = "2016")
    parser.add_argument('--dataset', '-d', metavar = 'dataset',  dest = "dataset", required = False, default = "TTTo2L2Nu")
    parser.add_argument('--step',    '-s', metavar = 'step',     dest = "step",    required = False, default = "0")
    parser.add_argument('--extraArgs','-e', metavar = 'extra',   dest = "extra",   required = False, default = "")
    parser.add_argument('--queue',   '-q', metavar = 'queue',    dest = "queue",   required = False, default = "")
    parser.add_argument('--threads', '-j', metavar = 'nthreads', dest = "nthreads",required = False, default = 1, type = int)
    parser.add_argument('--ncores',  '-n', metavar = 'ncores',   dest = "ncores",  required = False, default = 1, type = int)
    parser.add_argument('--check',   '-c', action = "store_true",dest = "check",   required = False, default = False)
    parser.add_argument('--merge',   '-m', action = "store_true",dest = "merge",   required = False, default = False)
    parser.add_argument('--pretend', '-p', action = "store_true",dest = "pretend", required = False, default = False)
    parser.add_argument('--eraseChunks',   action = "store_true",dest = "eraseCh", required = False, default = False)


    args     = parser.parse_args()
    year     = args.year
    dataset  = args.dataset
    check    = args.check
    step     = args.step if not args.step.isdigit() else int(args.step)
    queue    = args.queue
    extra    = args.extra
    ncores   = args.ncores
    nthreads = args.nthreads
    merge    = args.merge
    pretend  = args.pretend
    mva      = (step == "mvatrain")
    erasech  = args.eraseCh

    #if step == 0:
        #raise RuntimeError("FATAL: step 0 is disabled. Begin with step 1.")

    if erasech:
        print("\n====== ATTENTION!!!!!! ======")
        print("This will erase ALL CHUNKS in production " + prodname + "'s folder for year " + str(year) + " that are present in these subfolders (if they exist):")
        erasecomm = "rm -f {path}"
        for step,name in friendfolders.iteritems():
            print("- " + name)
        if confirm("\n> Do you REALLY want to continue?"):
            basefolder = friendspath + "/" + prodname + "/" + str(year) + "/"
            for step,name in friendfolders.iteritems():
                if os.path.isdir(basefolder + name):
                    if any(["chunk" in el for el in os.listdir(basefolder + name)]):
                        print("# Erasing chunks in subfolder " + name + " of step " + str(step))
                        #print erasecomm.format(path = basefolder + name + "/*chunk*.root")
                        os.system(erasecomm.format(path = basefolder + name + "/*chunk*.root"))
                        #sys.exit()


    elif check and not merge:
        print("\n> Beginning checks of all chunks for the production of year {y}, of the friend trees of step {s} for {d} dataset(s).".format(y = year, s = step, d = dataset))
        CheckLotsOfChunks(dataset, year, step, queue, extra, ncores, mva, nthreads)
    elif merge and not check:
        MergeThoseChunks(year, step, queue, extra)
    elif merge and check:
        CheckLotsOfMergedDatasets(dataset, year, step, queue, extra, ncores)
    else:
        if dataset.lower() != "all":
            GeneralSubmitter( (dataset, year, step, queue, extra, pretend, nthreads) )
        else:
            tasks   = []
            thedict = trainsampledict[year] if mva else sampledict[year]
            for dat in thedict: tasks.append( (dat, year, step, queue, extra, pretend, nthreads) )
            print("> A total of {n} commands (that might send one, or more jobs) are going to be executed for year {y}, step {s} in the queue {q} and parallelised with {j} cores.".format(n = len(tasks), y = year, s = step, q = queue, j = ncores))

            if confirm("\n> Do you want to send these jobs?"):
                print("> Beginning submission.")
                if ncores > 1:
                    pool = Pool(ncores)
                    pool.map(GeneralSubmitter, tasks)
                    pool.close()
                    pool.join()
                    del pool
                else:
                    for tsk in tasks: GeneralSubmitter(tsk)
