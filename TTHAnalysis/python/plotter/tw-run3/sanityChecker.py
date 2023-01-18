'''
The idea of this code is to do some basic tests of the sanity of the analysis.
'''
import os, sys
import ROOT

class SanityChecker:
    def __init__(self, mca):
        self.mca = mca
    
    def lookForDataDoubleCounting(self):
        '''
        This function will run all the data samples and look for double counting.
        '''
        return True
    
    def tripleTest(self):
        '''
        This function will perform the so called triple test:
            1) Perform as done in TOP-21-010.
            2) Cut and count in the 1j1b region.
            3) Cut and count in the 1j1b region with a cut on the MVA score.
        '''
        return True
    
    def checkDataCards(self):
        '''
        This function uses the ValidateDatacards.py from combine (https://cms-analysis.github.io/HiggsAnalysis-CombinedLimit/part3/validation/)
        to check the correctness of the datacards.
        '''
        return True
    
    def checkModelling(self):
        '''
        This function will check the modelling of the input variables of the DNN.
        '''
        return True

    def runSanityChecks(self, selectedSanityChecks):
        print("Running sanity checks")
        print("Selected sanity checks: %s" % selectedSanityChecks)
        for sanityCheck in selectedSanityChecks:
            if sanityCheck == "lookForDataDoubleCounting":
                self.lookForDataDoubleCounting()
            else:
                print("Sanity check %s not implemented" % sanityCheck)