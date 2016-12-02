from tauUtils import command as command
from tauUtils import os
import string

"""
"""
        # Regions:
    # 
    # C:         3lC         SR-42            OSSF + 1tau
    # D:         3lD         SR-56            e mu tau
    # E:         3lE         SR-70            SS + 1 tau
    # F:         3lF         SR-80            A: OSSF, F: e/mu + 1tau
    # I:         3lI         SR-96            3l + 1tau

regions = {
    'C':      ['3lC', 'SR-42', 'OSSF + 1tau'              ], 
    'D':      ['3lD', 'SR-56', 'e mu tau'                 ],
    'E':      ['3lE', 'SR-70', 'SS + 1 tau'               ],
    'F':      ['3lF', 'SR-80', 'A: OSSF, F: e/mu + 1tau'  ],
    'I':      ['4lI', 'SR-96', '3l + 1tau'                ],
    'CRTAUH': ['CRTAUH', 'CRTAUH', 'Control regions tauh' ],
    }

"""
"""



import optparse
# Command line options
usage = 'usage: %prog [--newData]'
parser = optparse.OptionParser(usage)
parser.add_option('-i', '--input',          dest='inputDir',       help='input directory',        default='/pool/ciencias/HeppyTrees/RA7/estructura/trees_8011_July5_allscans/',           type='string')
parser.add_option('-o', '--output',         dest='outputDir',      help='output directory',       default='~/www/susyRA7/',           type='string')
parser.add_option('-a', '--action',         dest='action',         help='which action to perform', default='crtau', type='string')
parser.add_option('-s', '--subaction',      dest='subaction',      help='which subAction to perform', default='', type='string')
parser.add_option('-p', '--pretend',        dest='pretend',        help='only print commands out', action='store_true')

(opt, args) = parser.parse_args()

inputDir  = opt.inputDir
outputDir = opt.outputDir
action    = opt.action
subaction = opt.subaction
pretend   = opt.pretend
blind = '--flags "-X blinding"'

index="/nfs/fanae/user/vischia/www/index.php"

if(action=='generalplots'):
        cmd = 'print susy-interface/plotmaker.py 3l 3lA {inputDir} {outputDir} -l 12.9 --make data --plots br -o SR {blind} --pretend'.format(inputDir=inputDir,outputDir=outputDir,blind=blind)
        command(cmd, pretend)

elif(action=='tauopt'):
        
        mca='susy-ewkino/3l/taus/mca_taus.txt'
        
        for region in regions:
                if subaction and (region != subaction):
                        continue
                cmd = 'python susy-interface/plotmaker.py 3l {region} {inputDir} {outputDir} --mca {mca} -l 12.9 --make data --plots br -o {sr} {blind} -q batch '.format(region=regions[region][0],inputDir=inputDir,outputDir=outputDir,mca=mca,blind=blind,sr=regions[region][1])
                command(cmd,pretend)

elif(action=='crtauNotWorkingBecauseOfPeopleSBadCommitPolicies'):
        print 'Now plotting CRs for estimating tau fakes'
        mca='susy-ewkino/3l/taus/mca_taus.txt'
        #mca='susy-ewkino/3l/mca_ewkino.txt'
        cuts='susy-ewkino/3l/taus/cuts_qcd.txt'
        config='taustudies'
        config='taus'
        region='CRTAUH'
        batch=' -q batch '
        batch=''
        direct=' --pretend '
        direct=' '
        out=outputDir+'qcd/'
        cmd = 'python susy-interface/plotmaker.py {config} {region} {inputDir} {outputDir} --mca {mca} --cuts {cuts} -l 12.9 --make data -o {sr} {blind} {batch} {pretend}'.format(config=config,region=regions[region][0],inputDir=inputDir,outputDir=out,mca=mca,cuts=cuts,blind=blind,sr=regions[region][1],batch=batch,pretend=direct)
        print cmd
        command(cmd, pretend)
        
        cuts='susy-ewkino/3l/taus/cuts_ttbar.txt'
        out=outputDir+'ttbar/'
        cmd = 'python susy-interface/plotmaker.py {config} {region} {inputDir} {outputDir} --mca {mca} --cuts {cuts} -l 12.9 --make data  -o {sr} {blind} {batch} {pretend}'.format(config=config,region=regions[region][0],inputDir=inputDir,outputDir=out,mca=mca,cuts=cuts,blind=blind,sr=regions[region][1],batch=batch,pretend=direct)
        print cmd
        command(cmd, pretend)

        cuts='susy-ewkino/3l/taus/cuts_wjet.txt'
        out=outputDir+'wjet/'
        cmd = 'python susy-interface/plotmaker.py {config} {region} {inputDir} {outputDir} --mca {mca} --cuts {cuts} -l 12.9 --make data  -o {sr} {blind} {batch} {pretend}'.format(config=config,region=regions[region][0],inputDir=inputDir,outputDir=out,mca=mca,cuts=cuts,blind=blind,sr=regions[region][1],batch=batch,pretend=direct)
        print cmd
        command(cmd, pretend)




elif(action=='crtau'):
        print 'Now plotting CRs for estimating tau fakes'
        mca='susy-ewkino/3l/taus/mca_taus.txt'
        #mca='susy-ewkino/3l/mca_ewkino.txt'
        plots='susy-ewkino/3l/taus/plots_taus.txt'
        mcc='susy-ewkino/3l/mcc_ewkino.txt'
        trigdef='susy-ewkino/mcc_triggerdefs.txt'
        functions='susy-ewkino/3l/functionsEWK.cc'
        toplot='mTW3l,met'
        config='taustudies'
        config='taus'
        region='CRTAUH'
        batch=' -q batch '
        batch=''
        direct=' --pretend '
        direct=' '

        cuts='susy-ewkino/3l/taus/cuts_qcd.txt'
        out=outputDir+'qcd/'
        # When I will plot signal region, reimplement the {blind} part
        cmd = "python mcPlots.py {mca} {cuts} {plots} -P {inputDir} --Fs {inputDir}/leptonJetReCleanerSusyEWK2L --Fs {inputDir}/leptonBuilderEWK --pdir {outputDir} -j 6 -l 12.9 --s2v --tree treeProducerSusyMultilepton --mcc {mcc} --mcc {trigdef} -f  --plotgroup fakes_appldata+=promptsub  --legendWidth 0.20 --legendFontSize 0.035 --showMCError -f --sP \'{toplot}\' --showRatio --perBin --legendHeader \'EWK #tau_{{h}} CR\' --maxRatioRange 0.5 1.5 --fixRatioRange --ratioOffset 0.03  --load-macro {functions}".format(mca=mca,cuts=cuts,plots=plots,inputDir=inputDir,outputDir=out,mcc=mcc,trigdef=trigdef,toplot=toplot,functions=functions)
        #print cmd
        command(cmd, pretend)
        os.system('cp {index} {outputDir}'.format(index=index,outputDir=out))

        cuts='susy-ewkino/3l/taus/cuts_ttbar.txt'
        out=outputDir+'ttbar/'
        # When I will plot signal region, reimplement the {blind} part
        cmd = "python mcPlots.py {mca} {cuts} {plots} -P {inputDir} --Fs {inputDir}/leptonJetReCleanerSusyEWK2L --Fs {inputDir}/leptonBuilderEWK --pdir {outputDir} -j 6 -l 12.9 --s2v --tree treeProducerSusyMultilepton --mcc {mcc} --mcc {trigdef} -f  --plotgroup fakes_appldata+=promptsub  --legendWidth 0.20 --legendFontSize 0.035 --showMCError -f --sP \'{toplot}\' --showRatio --perBin --legendHeader \'EWK #tau_{{h}} CR\' --maxRatioRange 0.5 1.5 --fixRatioRange --ratioOffset 0.03  --load-macro {functions}".format(mca=mca,cuts=cuts,plots=plots,inputDir=inputDir,outputDir=out,mcc=mcc,trigdef=trigdef,toplot=toplot,functions=functions)
        #print cmd
        command(cmd, pretend)
        os.system('cp {index} {outputDir}'.format(index=index,outputDir=out))

        cuts='susy-ewkino/3l/taus/cuts_wjet.txt'
        out=outputDir+'wjet/'
        # When I will plot signal region, reimplement the {blind} part
        cmd = "python mcPlots.py {mca} {cuts} {plots} -P {inputDir} --Fs {inputDir}/leptonJetReCleanerSusyEWK2L --Fs {inputDir}/leptonBuilderEWK --pdir {outputDir} -j 6 -l 12.9 --s2v --tree treeProducerSusyMultilepton --mcc {mcc} --mcc {trigdef} -f  --plotgroup fakes_appldata+=promptsub  --legendWidth 0.20 --legendFontSize 0.035 --showMCError -f --sP \'{toplot}\' --showRatio --perBin --legendHeader \'EWK #tau_{{h}} CR\' --maxRatioRange 0.5 1.5 --fixRatioRange --ratioOffset 0.03  --load-macro {functions}".format(mca=mca,cuts=cuts,plots=plots,inputDir=inputDir,outputDir=out,mcc=mcc,trigdef=trigdef,toplot=toplot,functions=functions)
        #print cmd
        command(cmd, pretend)
        os.system('cp {index} {outputDir}'.format(index=index,outputDir=out))
        
print 'Everything is done now'
