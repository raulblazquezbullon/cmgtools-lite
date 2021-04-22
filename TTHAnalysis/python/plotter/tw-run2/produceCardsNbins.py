# -*- coding: UTF-8 -*-.
#!/usr/bin/env python
import os, sys, enum, argparse
from array import array
import ROOT as r
r.PyConfig.IgnoreCommandLineOptions = True
r.gROOT.SetBatch(True)
from datetime import datetime
import numpy as np





#### Settings
friendspath  = "/pool/phedex/userstorage/vrbouza/proyectos/tw_run2/productions/"
friendtrees = "--Fs {P}/0_yeartag --Fs {P}/1_lepmerge_roch --Fs {P}/2_cleaning --Fs {P}/3_varstrigger --FMCs {P}/4_scalefactors --Fs {P}/5_mvas"


BDT_1j1t_path = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp/2021-01-21_nuevoSmallBin/run2/1j1t/MVAtrain/plots-tw-1j1t_MVAtrain.root" 
smallb1j1t = "tmvaBDT_1j1b_smallb_ttbar"
BDT_2j1t_path = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp/2021-01-21_nuevoSmallBin/run2/2j1t/MVAtrain/plots-tw-2j1t_MVAtrain.root" 
smallb2j1t = "tmvaBDT_2j1b_smallb_ttbar"

#BDT_1j1t_path = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp/2020-11-27_oldBDT/smallbinning/run2/1j1t/MVAtrain/plots-tw-1j1t_MVAtrain.root" 
#smallb1j1t = "tmvaBDT_1j1b_smallb_ttbar"
#BDT_2j1t_path = "/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/temp/2020-11-27_oldBDT/smallbinning/run2/2j1t/MVAtrain/plots-tw-2j1t_MVAtrain.root" 
#smallb2j1t = "tmvaBDT_2j1b_smallb_ttbar"

# Card maker command
commandscaff =  "python makeShapeCardsNew.py --tree NanoAOD tw-run2/mca-tw.txt tw-run2/cuts-tw-{region}.txt '{BDTfunction}' '{Nbins}' -P {prodpath} {friendtrees} --od {directory} -l 35.92,41.53,59.74 -f -L tw-run2/functions_tw.cc --neg --threshold 0.01 -W 'MuonIDSF * MuonISOSF * ElecRECOSF * ElecIDSF * TrigSF * puWeight * bTagWeight * PrefireWeight' --year 2016,2017,2018 --unc tw-run2/uncs-tw.txt --amc --asimov s+b --split-factor=-1 -j 32 --AP --storeAll --notMinimumFill --notVarsChanges"

slurmscaff   = 'sbatch -c 32 -p batch -J Cards_{region} -e /pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions/2020-09-20/run2/logs/plots/log.%j.%x.err -o /pool/phedexrw/userstorage/vrbouza/proyectos/tw_run2/productions/2020-09-20/run2/logs/plots/log.%j.%x.out --wrap "{command}"'





def getBinningForThatVariable(fpath, histoname, nq, REGION):
    xq          = array('d', [0]*nq)
    yq          = array('d', [0]*nq)

    for i in range(0,nq):
        xq[i] = float(i+1)/nq

    count = 0
    thefile = r.TFile.Open(fpath, "READ")
    thehisto = thefile.Get(histoname)
    thehisto.GetQuantiles(nq, yq, xq)
    thefile.Close(); del thefile
    Base = '''
Float_t theBDT%sbins%s(Double_t BDT){
  if      (BDT < %f   ) return 1;
'''%(str(nq),REGION,yq[0])
    subBin = 2
    for i in range(1, nq - 1):
        Base = Base + '  else if (BDT < %f) return %d;\n'%(yq[i],subBin)
        subBin = subBin + 1

    Base = Base + '  else                       return %d;\n} \n'%subBin
    functionstw = open("/nfs/fanae/user/asoto/Proyectos/tW-Victor/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/tw-run2/functions_tw.cc","a")
    functionstw.write(Base)
    functionstw.close()
    return






if __name__=="__main__":
    parser = argparse.ArgumentParser(usage = "python plotterHelper.py [options]", description = "Helper for cards at Nbins.", formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument('--production','-P', metavar = "prod",      dest = "prod",    required = True)
    parser.add_argument('--region',      '-r', metavar = 'reg',      dest = "reg",    required = False, default = "1j1t")
    parser.add_argument('--nbins',      '-b', metavar = 'bins',      dest = "bins",    required = False, default = "10")
    parser.add_argument('--outpath',   '-o', metavar = 'outpath',   dest = "outpath", required = False, default = "./temp_cards/"+ datetime.today().strftime('%Y-%m-%d') +"/run2")



    args     = parser.parse_args()
    prod     = args.prod
    reg     = args.reg
    bins     = int(args.bins)
    outpath     = args.outpath


    listabins = []
    for i in range(0,bins+1):
        listabins.append(i+0.5) 
    
    if reg == "1j1t":
        BDTfunction = "theBDT%sbins%s(tmvaBDT_1j1b)"%(str(bins),reg) 
        getBinningForThatVariable(BDT_1j1t_path, smallb1j1t, bins, reg)
        outpath = outpath + "/1j1t%sbins"%(bins)
    if reg == "2j1t":
        BDTfunction = "theBDT%sbins%s(tmvaBDT_2j1b)"%(str(bins),reg) 
        getBinningForThatVariable(BDT_2j1t_path, smallb2j1t, bins, reg)
        outpath = outpath + "/2j1t%sbins"%(bins)
    if reg == "2j2t":
        listabins = []
        paso = (190-30)/bins
        for i in np.arange(30,191,paso):
            listabins.append(i) 
        BDTfunction = "Jet_pt_corr[iJetSel30_Recl[1]]"
        outpath = outpath + "/2j2t%sbins"%(bins)
    
    if not os.path.isdir(outpath):
        os.system("mkdir -p " + outpath)
 
    commandscaff = commandscaff.format(region = reg, BDTfunction = BDTfunction, Nbins = listabins, prodpath = friendspath+prod, friendtrees = friendtrees, directory = outpath)
    slurmscaff = slurmscaff.format(region = reg, command = commandscaff)
    print(slurmscaff)
    os.system(slurmscaff)
    print("")