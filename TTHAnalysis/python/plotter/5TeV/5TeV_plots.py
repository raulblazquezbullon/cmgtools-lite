#!/usr/bin/env python
import sys
import re
import os

ODIR=sys.argv[1]
dowhat=sys.argv[2]

lumi = 0.296

submit = '{command}' 
#dowhat = "plots" 
#dowhat = "dumps" 
#dowhat = "yields" 
#dowhat = "ntuple" # syntax: python ttH-multilepton/ttH_plots.py no 2lss_SR_extr outfile_{cname}.root --sP var1,var2,...

P0="/eos/cms/store/group/phys_muon/folguera/5TeV_Mar23/"
nCores = 12

TREESALL      = " --FMCs {P}/0_jmeUnc_v1 --FMCs {P}/0_weights_v1 --Fs {P}/1_recleaner_v1 --Fs {P}/2_eventVars_v2 "
TREESONLYSKIM = "-P "+P0

def base(selection):
    THETREES = TREESALL

    CORE=' '.join([THETREES,TREESONLYSKIM])
    CORE+=" -f -j %d -l %s -L 5TeV/functions5TeV.cc --tree NanoAOD --mcc 5TeV/lepchoice-FO.txt  --split-factor=-1 "%(nCores, lumi)
    RATIO= " --maxRatioRange 0.6  1.99 --ratioYNDiv 505 "
    RATIO2=" --showRatio --attachRatioPanel --fixRatioRange "
    LEGEND=" --legendColumns 3 --legendWidth 0.35 "
    LEGEND2=" --legendFontSize 0.042 "
    SPAM=" --noCms --topSpamSize 1.1 --lspam '#scale[1.1]{#bf{CMS}} #scale[0.9]{#it{Preliminary}}' --rspam '%(lumi) (5.02 TeV)' "
    if dowhat == "plots": CORE+=RATIO+RATIO2+LEGEND+LEGEND2+SPAM+"  --showMCError --rebin 4 "

    if selection=='wz3l':
        GO="%s 5TeV/mca-wz-3l-mc.txt 5TeV/wz_3l.txt "%CORE
        GO="%s -W '(PrefireWeight*puWeight)'"%GO
        if dowhat in ["plots","ntuple"]: GO+=" 5TeV/wz_2lss_3l_plots.txt --xP '^2l_.*' "
        if dowhat == "plots": GO=GO.replace(LEGEND, " --legendColumns 3 --legendWidth 0.42 ")
        GO += " --binname 3l "
    elif selection=='wz2lss':
        GO="%s 5TeV/mca-wz-2lss-mc.txt 5TeV/wz_2lss.txt "%CORE
        GO="%s -W 'PrefireWeight*puWeight'"%GO
        if dowhat in ["plots","ntuple"]: GO+=" 5TeV/wz_2lss_3l_plots.txt --xP '^lep(3|W|Z1|Z2)_.*' --xP '^3l_.*' " 
        if dowhat == "plots": GO=GO.replace(LEGEND, " --legendColumns 3 --legendWidth 0.42 ")
        GO += " --binname 2lss "
    elif selection=='ww':
        GO="%s 5TeV/mca-ww-mc.txt 5TeV/ww_dilepton.txt "%CORE
        GO="%s -W 'PrefireWeight*puWeight'"%GO
        if dowhat in ["plots","ntuple"]: GO+=" 5TeV/ww_plots.txt  " 
        if dowhat == "plots": GO=GO.replace(LEGEND, " --legendColumns 3 --legendWidth 0.42 ")
        GO += " --binname ww "
    elif selection=='ttbar':
        GO="%s 5TeV/mca-ttbar-mc.txt 5TeV/ttbar_dilepton.txt "%CORE
        GO="%s -W 'PrefireWeight*puWeight'"%GO
        if dowhat in ["plots","ntuple"]: GO+=" 5TeV/ttbar_plots.txt  " 
        if dowhat == "plots": GO=GO.replace(LEGEND, " --legendColumns 3 --legendWidth 0.42 ")
        GO=GO.replace("--Fs {P}/2_eventVars_v2"," ")
        GO += " --binname ttbar "        
    else:
        raise RuntimeError, 'Unknown selection'

    return GO

def promptsub(x):
    procs = [ '' ]
    if dowhat == "cards": procs += ['_FRe_norm_Up','_FRe_norm_Dn','_FRe_pt_Up','_FRe_pt_Dn','_FRe_be_Up','_FRe_be_Dn','_FRm_norm_Up','_FRm_norm_Dn','_FRm_pt_Up','_FRm_pt_Dn','_FRm_be_Up','_FRm_be_Dn']
    return x + ' '.join(["--plotgroup data_fakes%s+='.*_promptsub%s'"%(x,x) for x in procs])+" --neglist '.*_promptsub.*' "
def procs(GO,mylist):
    return GO+' '+" ".join([ '-p %s'%l for l in mylist ])
def sigprocs(GO,mylist):
    return procs(GO,mylist)+' --showIndivSigs --noStackSig'
def runIt(GO,name,plots=[],noplots=[]):
    if dowhat == "plots":  
        if not ('forcePlotChoice' in sys.argv[4:]): print submit.format(command=' '.join(['python mcPlots.py',"--pdir %s/%s"%(ODIR,name),GO,' '.join(['--sP %r'%p for p in plots]),' '.join(['--xP %r'%p for p in noplots]),' '.join(sys.argv[4:])]))
        else: print 'python mcPlots.py',"--pdir %s/%s"%(ODIR,name),GO,' '.join([x for x in sys.argv[4:] if x!='forcePlotChoice'])
    elif dowhat == "yields": print 'echo %s; python mcAnalysis.py'%name,GO,' '.join(sys.argv[4:])
    elif dowhat == "dumps":  print 'echo %s; python mcDump.py'%name,GO,' '.join(sys.argv[4:])
    elif dowhat == "ntuple": print 'echo %s; python mcNtuple.py'%name,GO,' '.join(sys.argv[4:])


##    if dowhat == "submit_plots":
##    subfile = open(options.subfile, "w")
##    logdir = (options.logdir if options.logdir else args[1]+"/logs").replace("{P}", args[0]).replace("{O}", args[1])
##    os.system("mkdir -p "+logdir)
##    chunk = "Step"
##    if options.checkchunks:
##        chunk = "Chunk"
##        if options.fineSplit:
##            chunk = "Chunk).$(Step"
##    subfile.write("""##### BEGIN condor submit file
##Executable = {runner}
##Universe   = vanilla
##Error      = {logdir}/err.$(cluster).$(Dataset).$({chunk})
##Output     = {logdir}/out.$(cluster).$(Dataset).$({chunk})
##Log        = {logdir}/log.$(cluster).$(Dataset).$({chunk})
##
##x509userproxy = $ENV(X509_USER_PROXY)
##use_x509userproxy = True
##getenv = True
##request_memory = 2000
##+MaxRuntime = {maxruntime}
##{accounting_group}
##""".format(runner = options.runner, logdir = logdir, maxruntime = options.maxruntime * 60, chunk = chunk,
##           accounting_group = '+AccountingGroup = "%s"'%options.accounting_group if options.accounting_group else ''))

def add(GO,opt):
    return '%s %s'%(GO,opt)
def setwide(x):
    x2 = add(x,'--wide')
    x2 = x2.replace('--legendWidth 0.35','--legendWidth 0.20')
    return x2

if __name__ == '__main__':

    torun = sys.argv[3]

    if 'wz_3l_' in torun and not('cr') in torun:
        x = base('wz3l')
        if '_norebin' in torun: x = x.replace('--rebin 4','')
        if '_appl' in torun: x = add(x,'-I ^TT ')
        if '_br' in torun: x = add(x,'-U ^Zmass ')
        if '_relax' in torun: x = add(x,'-X ^TT ')
        if '_data' in torun: x = x.replace('mca-wz-3l-mc.txt','mca-wz-3l-mcdata.txt')
        if '_unc' in torun: x = add(x, '--unc 5TeV/systs_wz_dummy.txt')
        runIt(x,'%s'%torun)
    elif 'wz_2lss' in torun and not('cr') in torun:
        x = base('wz2lss')
        if '_norebin' in torun: x = x.replace('--rebin 4','')
        if '_appl' in torun: x = add(x,'-I ^TT ')
        if '_relax' in torun: x = add(x,'-X ^TT ')
        if '_data' in torun: x = x.replace('mca-wz-2lss-mc.txt','mca-wz-2lss-mcdata.txt')
        if '_unc' in torun: x = add(x, '--unc 5TeV/systs_wz_dummy.txt')
        runIt(x,'%s'%torun)
    elif 'wz_zz_cr' in torun: 
        x = base('wz3l')
        x = add(x,'-X ^TT -X ^m3l -X ^lWpt20 -X ^OSSF3l -X ^trilep -E ^cr_4leps')
        if '_norebin' in torun: x = x.replace('--rebin 4','')        
        if '_data' in torun: x = x.replace('mca-wz-3l-mc.txt','mca-wz-3l-mcdata.txt')
        runIt(x,'%s'%torun)        
    elif 'wz_dy_cr' in torun: 
        x = base('wz3l')
        x = add(x,'-X ^TT -X ^m3l -X ^lWpt20  -E ^cr_mTlW30')
        if '_norebin' in torun: x = x.replace('--rebin 4','')        
        if '_data' in torun: x = x.replace('mca-wz-3l-mc.txt','mca-wz-3l-mcdata.txt')
        runIt(x,'%s'%torun)                
    elif 'ww' in torun and not('cr') in torun: 
        x = base('ww')
        if '_norebin' in torun: x = x.replace('--rebin 4','')
        if '_appl' in torun: x = add(x,'-I ^TT ')
        if '_relax' in torun: x = add(x,'-X ^TT ')
        if '_data' in torun: x = x.replace('mca-ww-mc.txt','mca-ww-mcdata.txt')
        runIt(x,'%s'%torun)
    elif 'ttbar' in torun:
        x = base('ttbar')
        if '_norebin' in torun: x = x.replace('--rebin 4','')
        if '_appl' in torun: x = add(x,'-I ^TT ')
        if '_relax' in torun: x = add(x,'-X ^TT ')
        if '_ss' in torun: x = add(x, '-I ^os')
        if '_dycr' in torun: 
            x=add(x, '-E ^sf -X ^ZVeto -E ^onZ') 
            if '_nojet' in torun: x=add(x, ' -X ^2jets') 
            if '_nomet' in torun: x=add(x, ' -X ^MET') 
        if '_tight' in torun: 
            x=x.replace('1_recleaner_v1','1_recleaner_vtight')
            x=x.replace('lepchoice-FO','lepchoice-tight-FO')
        if '_em' in torun: 
            x = add(x, '-E ^em')
            torun = torun.replace('_em','/em')
        if '_mm' in torun: 
            x = add(x, '-E ^mm')
            torun = torun.replace('_mm','/mm')            
        if '_ee' in torun: 
            x = add(x, '-E ^ee')
            torun = torun.replace('_ee','/ee')                    
        if '_data' in torun: x = x.replace('mca-ttbar-mc.txt','mca-ttbar-mcdata.txt')
        
        runIt(x,'%s'%torun)

        
        



       
        
