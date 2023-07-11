# coding: utf-8

# Imports
import ROOT as r
import numpy as np
import argparse
import sys
import subprocess
import time

r.gROOT.SetBatch(1)

# Functions
functional_variables = {"m3l" : "m3L",
                        "met" : "MET_pt_central",
                        "m3lmet_Meas" : "m3Lmet"}
                        
def add_parsing_options():
    ''' Add some parsing options '''
    parser = argparse.ArgumentParser()
    parser.add_argument("--nquant",    dest = "nquant")
    parser.add_argument("--variables", dest = "variables", default = functional_variables.keys())
    parser.add_argument("--inpath",   dest = "inpath",default = "")
    parser.add_argument("--blind",    dest = "blind",action = "store_true")

    return parser.parse_args() 
    
# Main script
if __name__ == "__main__":
    opts = add_parsing_options()
    nquant = opts.nquant.split(",")
    variables = opts.variables.split(",")
    inpath = opts.inpath
    blind = opts.blind
    doBlind = "-t -1 --setParameters r_prompt_WZ=1,r_prompt_ZZ=1" if blind else ""
    
    seconds = 30
    check_d_vars = True
    
    if inpath != "":
        check_d_vars = False
    
    main_path = "/nfs/fanae/user/rblazquez/TFG/wz_run3/CMSSW_12_4_12/src/CMGTools/TTHAnalysis/python/plotter/"
    
    for var in variables:
        print(">>> Going to %s variable" %var)
        
        for nq in nquant:
            
            print(">>> Going to rebin%s" %nq)
            if check_d_vars == True:
                inpath = main_path + "./check_discriminant_vars/./rebin%s/%s/cards/" %(nq,var)
                
            print("Path is" + inpath)
            
            print("==== Initializing scan ====")
            print(">>> Combining cards")
            cmd1 = "cd %s; combineCards.py *.txt > combinedCard.dat; cd -" %inpath
            out1 = subprocess.check_output(cmd1,shell = True).decode("utf-8")
            print(out1)
            
            print(">>> Creating workspace")
            cmd2 = "cd %s; text2workspace.py combinedCard.dat -o workspace.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO  'map=.*/prompt_WZ.*:r_prompt_WZ[1,0,6]' --PO 'map=.*/prompt_ZZ.*:r_prompt_ZZ[1,0,6]'; cd -" %inpath
            out2 = subprocess.check_output(cmd2,shell = True).decode("utf-8")
            print(out2)
            
            print(">>> Performing scan")
            cmd3 = "cd %s; combineTool.py -M MultiDimFit --algo grid --points 200 --rMin 0 --rMax 6 -m 125 -d workspace.root %s --redefineSignalPOI r_prompt_WZ -n nominal --job-mode slurm --sub-opts='-p batch'; cd -" %(inpath,doBlind)
            print("Running the following command: " + cmd3)
            out3 = subprocess.check_output(cmd3,shell = True).decode("utf-8")
            print(out3)
            
            print("Sleeping for %i seconds" %seconds)
            time.sleep(seconds)
            
            print(">>> Saving snapshot")
            cmd4 = "cd %s; combineTool.py -M MultiDimFit --algo none --rMin 0 --rMax 6 -m 125 -d workspace.root %s --redefineSignalPOI r_prompt_WZ -n bestfit --saveWorkspace; cd -" %(inpath,doBlind)
            print("Running the following command: " + cmd4)
            out4 = subprocess.check_output(cmd4,shell = True).decode("utf-8")
            print(out4)
            
            print(">>> Finding statistic")
            cmd5 = "cd %s; combineTool.py -M MultiDimFit --algo grid --points 200 --rMin 0 --rMax 6 -m 125 higgsCombinebestfit.MultiDimFit.mH125.root %s --freezeParameters allConstrainedNuisances --redefineSignalPOI r_prompt_WZ -n _stat --job-mode slurm --sub-opts='-p batch'; cd -" %(inpath,doBlind)
            print("Running the following command: " + cmd5)
            out5 = subprocess.check_output(cmd5,shell = True).decode("utf-8")
            print(out5)
            
            print(">>> Sleeping for %i seconds\n" %seconds)
            time.sleep(seconds)
            
            print(">>> Plotting scan")
            cmd6 = "cd %s; plot1DScan.py higgsCombinenominal.MultiDimFit.mH125.root --POI r_prompt_WZ  --others 'higgsCombine_stat.MultiDimFit.mH125.root:FreezeAll:2'  --breakdown Syst,Stat --logo-sub Academic; cd -" %inpath
            out6 = subprocess.check_output(cmd6,shell = True).decode("utf-8")
            print(out6)
            
            print("==== Ending scan ====")
