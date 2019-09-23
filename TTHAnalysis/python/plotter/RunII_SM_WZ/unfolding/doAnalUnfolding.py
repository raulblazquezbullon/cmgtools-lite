# Do Analysis of Unfolding
# Restructured everything in a single steering script
# Code by pietro.vischia@cern.ch

# First restructure the doUnfoldInput.py script 

# Created by pietro.vischia@cern.ch
# Build inputs to the unfolding procedure (together with systematics)


# yearlyStuff.py is a symlink to ../utils/yearlyStuff.py
from yearlyStuff import *

class Steer:

    def __init__(self, years, outputDir):
        self.outputDir=self.outputDir+string(self.year)
        self.year=year
        self.channels=['incl', 'eee', 'eem', 'mme', 'mmm']
        self.mca='./mca_unfoldingInputs.txt' # File to be updated
        
        
        os.mkdir(self.outputDir)

        for ch in channels:
            os.mkdir('%s_%s'.format(self.outputDir,ch))
            
        print('Folders with base %s have been created'.format(outputDir))

        
        self.inputPairs={
            'sump4(0, LepZ1_pt,LepZ1_eta,LepZ1_phi,LepZ1_mass,LepZ2_pt,LepZ2_eta,LepZ2_phi,LepZ2_mass)' : ['[0,5,10,15,20,25,30,40,50,60,70,80,90,100,110,120,130,140,160,180,200,250,300]','Reco p\_\{T\}(Z) [GeV]','Zpt'],
            'LeadJet_pt' : ['[25,30,35,40,50,60,70,80,90,100,110,120,130,140,160,180,200,250,300]','Reco p\_\{T\}(leading jet) [GeV]','LeadJetPt'],
            'm3Lmet' :  ['[100,140,160,180,200,250,300,400,600,1000,3000]','Reco M\_\{WZ\} [GeV]','MWZ'],
            'LepW_pt' : ['[25,30,35,40,50,60,70,80,90,100,110,120,130,140,160,180,200,250,300]','Reco p\_\{T\}(W) [GeV]','Wpt'],
            'Njets'   : ['[0,1,2,3,4,5]', 'Reco N\_\{jets\}', 'Njets'], # This won't work yet---must check name of Njets variables in tree
        }
        self.responsePairs={
            'sump4(0, genLepZ1_pt,genLepZ1_eta,genLepZ1_phi,genLepZ1_mass,genLepZ2_pt,genLepZ2_eta,genLepZ2_phi,genLepZ2_mass):sump4(0,LepZ1_pt,LepZ1_eta,LepZ1_phi,LepZ1_mass,LepZ2_pt,LepZ2_eta,LepZ2_phi,LepZ2_mass)' : ['[0,5,10,15,20,25,30,40,50,60,70,80,90,100,110,120,130,140,160,180,200,250,300]*[0,10,20,30,50,70,90,110,130,160,200,300]','Reco p\_\{T\}(Z) [GeV]','Gen p\_\{T\}(Z) [GeV]','Zpt'],
            'LeadJet_mcPt:LeadJet_pt' : ['[25,30,35,40,50,60,70,80,90,100,110,120,130,140,160,180,200,250,300]*[25,35,50,70,90,110,130,160,200,300]','Reco p\_\{T\}(leading jet) [GeV]','Gen p\_\{T\}(leading jet) [GeV]','LeadJetPt'],
            'm3Lmet_gen:m3Lmet' : ['[100,140,160,180,200,250,300,400,600,1000,3000]*[100,160,200,300,600,3000]','Reco M\_\{WZ\} [GeV]','Gen M\_\{WZ\} [GeV]','MWZ'],
            'genLepW_pt:LepW_pt' : ['[25,30,35,40,50,60,70,80,90,100,110,120,130,140,160,180,200,250,300]*[25,35,50,70,90,110,130,160,200,300]','Reco p\_\{T\}(W) [GeV]','Gen p\_\{T\}(W) [GeV]','Wpt'],
            'genNjets:Njets'   : ['[0,1,2,3,4,5]*[0,1,2,3,4,5]', 'Reco N\_\{jets\}', 'Gen N\_\{jets\}', 'Njets'], # This won't work yet---must check name of Njets variables in tree
        }


    def prepareInputs(self):
        
        for ch in channels:
            os.mkdir('%s_%s/inputs'.format(self.outputDir,ch))
            
        
        inputdir = "/pool/ciencias/HeppyTrees/RA7/nanoAODv4_%s_estructure/"%(str(self.year))

        # Preliminary cleanup
        for ch in channels:
            print('rm -r %s_$s/inputs/*'.format(self.outputDir, ch))
            
        doSignSplit=True

        if not doSignSplit: 
            for iShape, iPack in self.inputPairs.items():
                iRange=iPack[0]
                iXTitle=iPack[1]
                iOut=iPack[2]
                iYTitle='Events'
                
                #here pick stuff from the yearly command line I am preparing for doAnal (it's done for plotting, but here I need it for cards)

                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/incl_fitWZonly/ --bin incl -o WZSR -E SR  --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, iXTitle=iXTitle, iYTitle=iYTitle) )

                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eee_fitWZonly/ --bin eee -o WZSR -E SR -E eee --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, iXTitle=iXTitle, iYTitle=iYTitle) )

                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eem_fitWZonly/ --bin eem -o WZSR -E SR -E eem --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, iXTitle=iXTitle, iYTitle=iYTitle) )

                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mme_fitWZonly/ --bin mme -o WZSR -E SR -E mme --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, iXTitle=iXTitle, iYTitle=iYTitle) )

                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mmm_fitWZonly/ --bin mmm -o WZSR -E SR -E mmm --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, iXTitle=iXTitle, iYTitle=iYTitle) )

                print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/incl_fitWZonly_%s/' % iOut)
                print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/incl_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/incl_fitWZonly_%s/' % iOut)
    
                print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eee_fitWZonly_%s/' % iOut)
                print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eee_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eee_fitWZonly_%s/' % iOut)

                print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eem_fitWZonly_%s/' % iOut)
                print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eem_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eem_fitWZonly_%s/' % iOut)

                print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mme_fitWZonly_%s/' % iOut)
                print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mme_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mme_fitWZonly_%s/' % iOut)

                print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mmm_fitWZonly_%s/' % iOut)
                print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mmm_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mmm_fitWZonly_%s/' % iOut)

            else:

                enabler={
                    'plus' : ' -E pmp ',
                    'minus' : ' -E pmm',
                }

                for iWhat, iCut in enabler.items():
        
                    # Preliminary cleanup
                    print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/incl_fitWZonly/')
                    print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eee_fitWZonly/ ')
                    print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eem_fitWZonly/ ')
                    print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mme_fitWZonly/ ')
                    print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mmm_fitWZonly/ ')
                    
                    # WZ exclusive
                    for iShape, iPack in self.inputPairs.items():
                        iRange=iPack[0]
                        iXTitle=iPack[1]
                        iOut=iPack[2]
                        iYTitle='Events'
                        
                        print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/incl_fitWZonly/ --bin incl -o WZSR -E SR {chargecut}   --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, chargecut=iCut, iXTitle=iXTitle, iYTitle=iYTitle) )
            
                        print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eee_fitWZonly/ --bin eee -o WZSR -E SR {chargecut}  -E eee --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, chargecut=iCut, iXTitle=iXTitle, iYTitle=iYTitle) )

                        print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eem_fitWZonly/ --bin eem -o WZSR -E SR {chargecut}  -E eem --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, chargecut=iCut, iXTitle=iXTitle, iYTitle=iYTitle) )

                        print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mme_fitWZonly/ --bin mme -o WZSR -E SR {chargecut}  -E mme --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, chargecut=iCut, iXTitle=iXTitle, iYTitle=iYTitle) )

                        print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir} --Fs {{P}}/leptonJetReCleanerWZSM --Fs {{P}}/leptonBuilderWZSM --FMCs {{P}}/bTagEventWeightFullSimWZ30 -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' -p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub  --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mmm_fitWZonly/ --bin mmm -o WZSR -E SR {chargecut}  -E mmm --neglist promptsub --autoMCStats --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca, iShape=iShape, iRange=iRange, inputdir=inputdir, chargecut=iCut, iXTitle=iXTitle, iYTitle=iYTitle) )

                        print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/incl_fitWZonly_%s_%s/' % (iOut, iWhat))
                        print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/incl_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/incl_fitWZonly_%s_%s/' % (iOut, iWhat))
    
                        print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eee_fitWZonly_%s_%s/' % (iOut, iWhat))
                        print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eee_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eee_fitWZonly_%s_%s/' % (iOut, iWhat))
    
                        print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eem_fitWZonly_%s_%s/' % (iOut, iWhat))
                        print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eem_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/eem_fitWZonly_%s_%s/' % (iOut, iWhat))

                        print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mme_fitWZonly_%s_%s/' % (iOut, iWhat))
                        print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mme_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mme_fitWZonly_%s_%s/' % (iOut, iWhat))
    
                        print('rm -r /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mmm_fitWZonly_%s_%s/' % (iOut, iWhat))
                        print('mv /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mmm_fitWZonly/ /nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/mmm_fitWZonly_%s_%s/' % (iOut, iWhat))

                        print('echo Done inputs preparation!')

    # End of prepareInputs()


    def prepareResponses(self):

        print('Blah')

        # Then restructure the doVariedResponses.py script


        mca='./wzsm/mca_unfolding.txt'
        #inputdir='/pool/ciencias/HeppyTrees/RA7/estructura/wzSkimmed/'
        inputdir='/pool/ciencias/HeppyTrees/RA7/wz/wzUnskimmed/'
        baseoutputdir='/nfs/fanae/user/vischia/workarea/cmssw/combine/CMSSW_8_1_0/src/wz_unfolding/responses/'
        #baseoutputdir="tempo/"
        fts='--Fs {P}/lepgenVarsWZSM --Fs {P}/leptonJetReCleanerWZSM --Fs {P}/leptonBuilderWZSM --FMCs {P}/bTagEventWeightFullSimWZ30 '
        #processes="-p data -p prompt_.* -p convs.* -p rares.* -p fakes_appldata.* --plotgroup fakes_appldata+=promptsub "
        processes=' -p prompt_altWZ.* '
        
        # Preliminary cleanup
        #echo "rm -r ${baseoutputdir}incl_fitWZonly/"
        #echo "rm -r ${baseoutputdir}eee_fitWZonly/ "
        #echo "rm -r ${baseoutputdir}eem_fitWZonly/ "
        #echo "rm -r ${baseoutputdir}mme_fitWZonly/ "
        #echo "rm -r ${baseoutputdir}mmm_fitWZonly/ "
        
        doSignSplit=True

        if not doSignSplit:
            for iShape, iPack in self.responsePairs.items():
                iRange=iPack[0]
                iXTitle=iPack[1]
                iYTitle=iPack[2]
                iOut=iPack[3]
                print('echo \"{iShape}, range {iRange}\"'.format(iShape=iShape,iRange=iRange))
                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}incl_fitWZonly/ --bin incl -o WZSR -E SR  --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))
        
                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}eee_fitWZonly/ --bin eee -o WZSR -E SR -E eee --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))
        
                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}eem_fitWZonly/ --bin eem -o WZSR -E SR -E eem --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))

                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}mme_fitWZonly/ --bin mme -o WZSR -E SR -E mme --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))

                print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}mmm_fitWZonly/ --bin mmm -o WZSR -E SR -E mmm --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))

                print('rm -r {baseoutputdir}incl_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))
                print('mv {baseoutputdir}incl_fitWZonly/ {baseoutputdir}incl_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))
        
                print('rm -r {baseoutputdir}eee_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))
                print('mv {baseoutputdir}eee_fitWZonly/ {baseoutputdir}eee_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))
        
                print('rm -r {baseoutputdir}eem_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))
                print('mv {baseoutputdir}eem_fitWZonly/ {baseoutputdir}eem_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))
        
                print('rm -r {baseoutputdir}mme_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))
                print('mv {baseoutputdir}mme_fitWZonly/ {baseoutputdir}mme_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))
        
                print('rm -r {baseoutputdir}mmm_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))
                print('mv {baseoutputdir}mmm_fitWZonly/ {baseoutputdir}mmm_fitWZonly_{iout}/'.format(baseoutputdir=baseoutputdir,iout=iOut))

        else:         

            enabler={
                'plus' : ' -E pmp ',
                'minus' : ' -E pmm',
            }

            for iWhat, iCut in enabler.items():

                for iShape, iPack in self.responsePairs.items():
                    iRange=iPack[0]
                    iXTitle=iPack[1]
                    iYTitle=iPack[2]
                    iOut=iPack[3]
                    print('echo \"{iShape}, range {iRange}\"'.format(iShape=iShape,iRange=iRange))
                    print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}incl_fitWZonly/ --bin incl -o WZSR -E SR {chargecut}   --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,chargecut=iCut,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))
            
                    print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}eee_fitWZonly/ --bin eee -o WZSR -E SR {chargecut}  -E eee --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,chargecut=iCut,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))

                    print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}eem_fitWZonly/ --bin eem -o WZSR -E SR {chargecut}  -E eem --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,chargecut=iCut,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))
            
                    print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}mme_fitWZonly/ --bin mme -o WZSR -E SR {chargecut}  -E mme --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,chargecut=iCut,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))

                    print('python makeShapeCardsSusy.py {mca} ./wzsm/cuts_wzsm.txt \'{iShape}\' \'{iRange}\' ./wzsm/systs_wz.txt -P {inputdir}  {fts}  -j 64 -l 35.9 --s2v --s2v --tree treeProducerSusyMultilepton --mcc wzsm/mcc_varsub_wzsm.txt --mcc wzsm/mcc_triggerdefs.txt -f -W \' puw_nInt_Moriond(nTrueInt)*getLepSF(LepSel1_pt,LepSel1_eta,LepSel1_pdgId,1,1)*getLepSF(LepSel2_pt,LepSel2_eta,LepSel2_pdgId,1,1)*getLepSF(LepSel3_pt,LepSel3_eta,LepSel3_pdgId,1,1)*bTagWeight \' {processes} --load-macro wzsm/functionsPUW.cc --load-macro wzsm/functionsSF.cc  --load-macro wzsm/functionsWZ.cc --od {baseoutputdir}mmm_fitWZonly/ --bin mmm -o WZSR -E SR {chargecut}  -E mmm --neglist promptsub --autoMCStats --asimov --XTitle "{iXTitle}" --YTitle "{iYTitle}"'.format(mca=self.mca,iShape=iShape,iRange=iRange,inputdir=inputdir,chargecut=iCut,fts=fts,processes=processes,baseoutputdir=baseoutputdir,iXTitle=iXTitle,iYTitle=iYTitle))

                    print('rm -r {baseoutputdir}incl_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))
                    print('mv {baseoutputdir}incl_fitWZonly/ {baseoutputdir}incl_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))
            
                    print('rm -r {baseoutputdir}eee_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))
                    print('mv {baseoutputdir}eee_fitWZonly/ {baseoutputdir}eee_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))
                    
                    print('rm -r {baseoutputdir}eem_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))
                    print('mv {baseoutputdir}eem_fitWZonly/ {baseoutputdir}eem_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))
                    
                    print('rm -r {baseoutputdir}mme_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))
                    print('mv {baseoutputdir}mme_fitWZonly/ {baseoutputdir}mme_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))
    
                    print('rm -r {baseoutputdir}mmm_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))
                    print('mv {baseoutputdir}mmm_fitWZonly/ {baseoutputdir}mmm_fitWZonly_{iout}_{chargeinfo}/'.format(baseoutputdir=baseoutputdir,iout=iOut,chargeinfo=iWhat))


    print('echo Done!')

def doTheUnfolding(self):
    # Finally call runUnfold and unfold.py 
    echo "python runUnfold.py -n 1"


def bad(what):
    ret=True
    if 'all' in what:
        ret=False
    if 'inputs' in what:
        ret=False
    if 'responses' in what:
        ret=False
    if 'unfolding' in what:
        ret=False
    return ret

def main(args):

    if bad(args.what):
        print("I don't recognize this action. Why don't you do it yourself with pen and paper?")
        return 1
        
    anal=Steer(args.year, args.outputDir) # Perhaps (depending on combination strategy) I will put the scan on the year inside the unfolding script

    if 'all' in args.what:
        args.what='inputs responses unfolding'
        
    if 'inputs' in args.what:
        anal.prepareInputs()
    if 'responses' in args.what:
        anal.prepareResponses()
    if 'unfolding' in args.what:
        anal.doTheUnfolding()


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('-w', '--what',           help='Action to be taken [inputs, responses, unfolding, all]' default='all')
    parser.add_argument('-o', '--outputDir',      help='Output directory', default='./temp')
    parser.add_argument('-y', '--year',           help='Year', default=2016)
    args = parser.parse_args()
    # execute only if run as a script
    ROOT.gROOT.SetBatch()
    main(args)
