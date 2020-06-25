import ROOT as r
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
from CMGTools.TTHAnalysis.tools.collectionSkimmer import CollectionSkimmer
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput
from PhysicsTools.Heppy.physicsobjects.Jet import _btagWPs
import warnings as wr
import os, sys

class cleaningTopRun2(Module):
    def __init__(self, label, jetPts, jetPtNoisyFwd, jetCollection = 'Jet',
                 jetBTag = 'btagDeepFlavB', btagWP_ = "M", isMC = None,
                 variations = ["jesTotalCorr", "jesTotalUnCorr", "jer"],
                 year_ = None, debug = False):

        self.label = "" if (label in ["", None]) else ("_" + label)

        #### NOTE: here the tight selections for jet (excluding eta and pt requirements) are hardcoded per year
        self.selecsdict = {}
        self.selecsdict[2016] = lambda jet: jet.jetId > 0
        self.selecsdict[2017] = lambda jet: jet.jetId > 1
        self.selecsdict[2018] = lambda jet: jet.jetId > 1

        self.jc     = jetCollection

        self.jetPts = jetPts
        self.jetPtNoisyFwd = jetPtNoisyFwd
        self.jetBTag   = jetBTag
        if isMC is not None:
            self.isMC = isMC
        self.variations = variations
        self.year       = year_

        #### NOTE: the b-tagging algorithm is hardcoded to be deep flavour, although this can be relatively
        # easyly modified to support other algorithms.
        self.algoscaff = "DeepFlav_{y}_{wp}"
        self.btagWP    = btagWP_
        self.debug     = debug
        return


    #### Running methods
    # New code
    def beginJob(self, histFile = None, histDirName = None):
        self.vars = ["eta", "phi", "mass"]
        self.vars_leptons = ["pdgId", 'jetIdx', 'pt', "mass"]

        self.systsJEC = {0 : ""}
        if self.isMC:
            for sys in range(len(self.variations)):
                self.systsJEC[sys+1]    = '_' + self.variations[sys] + 'Up'
                self.systsJEC[-(sys+1)] = '_' + self.variations[sys] + 'Down'

        self.outmasses   = ['minMllAFAS']

        self._outjetvars    = [x%self.jc for x in ['nB%sSelMedium%%d','n%sSel%%d']]
        self._outfwdjetvars = [x%self.jc for x in ['nFwd%sSel%%d']]
        self.outjetvars  = []
        for jetPt in self.jetPts:
            self.outjetvars.extend([(x%jetPt+y, 'I' if ('nB%s'%self.jc in x or 'n%s'%self.jc in x) else 'F') for x in self._outjetvars    for y in self.systsJEC.values() if y != "" or "nB" in x])
            self.outjetvars.extend([(x%jetPt+y, 'I' if ('nB%s'%self.jc in x or 'n%s'%self.jc in x) else 'F') for x in self._outfwdjetvars for y in self.systsJEC.values() if y != "" or "nB" in x])

        self.branches = [var + self.label for var in self.outmasses]
        self.branches.extend([(var + self.label, _type) for var,_type in self.outjetvars])


        #### Configuring C++ helpers
        self.vars_jets = [("pt", "pt_nom") if self.isMC else 'pt', 'btagDeepFlavB'] + [ 'pt_%s%s'%(x,y) for x in self.variations for y in ["Up", "Down"]]
        self.vars_fwdjets = [("pt", "pt_nom") if self.isMC else 'pt'] + [ 'pt_%s%s'%(x,y) for x in self.variations for y in ["Up", "Down"]]
        self.vars_jets_int = (["hadronFlavour"] if self.isMC else [])
        self.vars_jets_nooutput = []

        self._helper_jetsSup    = CollectionSkimmer("{col}Sel{pt}".format(   col = self.jc, pt = self.jetPts[0]) + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5)
        self._helper_jetsInf    = CollectionSkimmer("{col}Sel{pt}".format(   col = self.jc, pt = self.jetPts[1]) + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5)

        self._helper_fwdjetsSup = CollectionSkimmer("Fwd{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[0]) + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5)
        self._helper_fwdjetsInf = CollectionSkimmer("Fwd{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[1]) + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5)


        self._helpers = [self._helper_jetsSup, self._helper_jetsInf, self._helper_fwdjetsSup, self._helper_fwdjetsInf]
        if "/fullCleanerTop.so" not in r.gSystem.GetLibraries():
            print "\n> C++ library not loaded. Compiling..."
            r.gROOT.ProcessLine(".L {base}/src/CMGTools/TTHAnalysis/python/tools/fullCleanerTop.cxx+O".format(base = os.environ['CMSSW_BASE']))
            print "> Library compiled!"

        self._worker = r.fullCleanerTop(self._helper_jetsSup.cppImpl(), self._helper_jetsInf.cppImpl(), self._helper_fwdjetsSup.cppImpl(), self._helper_fwdjetsInf.cppImpl(), -99)

        self._worker.setJetPts(self.jetPts[0], self.jetPts[1])
        self._worker.setFwdNoisyPt(self.jetPtNoisyFwd)
        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        for x in self._helpers:
            x.initInputTree(inputTree)
        self.initReaders(inputTree)
        self.initWorkers()
        declareOutput(self, wrappedOutputTree, self.branches)
        for x in self._helpers:
            x.initOutputTree(wrappedOutputTree.tree(), True);
        return


    def analyze(self, event):
        from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
        jets = [j for j in Collection(event, "Jet")]
        selection = lambda j : True

        if   hasattr(event, "year"):
            selection = self.selecsdict[event.year]
            wpM = _btagWPs[self.algoscaff.format(y = event.year, wp = self.btagWP)][1]
        elif self.year != None:
            selection = self.selecsdict[self.year]
            wpM = _btagWPs[self.algoscaff.format(y = self.year, wp = self.btagWP)][1]
        else:
            wr.warn("WARNING: as you did not choose year, we will use deepcsv as algotihm with random values for the working points.")
            wpM = _btagWPs["DeepCSVM"][1]

        tags = r.CombinedObjectTagsTopRun2(len(jets))

        for i,jet in enumerate(jets):
            if selection(jet): tags.setJetFlags(i, True)

        if self._ttreereaderversion != event._tree._ttreereaderversion:
            for x in self._helpers: x.initInputTree(event._tree)
            self.initReaders(event._tree)
            self.initWorkers()

        for x in self._helpers: x.clear()

        self._worker.clear()
        self._worker.loadTags(tags, wpM)
        self._worker.run()

        for delta,varname in self.systsJEC.iteritems():
            for x in self._worker.GetJetSums(delta):
                for var in self._outjetvars:
                    if varname != "" or "nB" in var: self.wrappedOutputTree.fillBranch(var%x.thr + varname + self.label, getattr(x, var.replace('%d', '').replace(self.jc, 'Jet')))
                for var in self._outfwdjetvars:
                    if varname != "" or "nB" in var: self.wrappedOutputTree.fillBranch(var%x.thr + varname + self.label, getattr(x, var.replace('%d', '').replace(self.jc, 'Jet')))

        minMllAFAS = self._worker.GetPairMasses()
        for var in self.outmasses:
            self.wrappedOutputTree.fillBranch(var + self.label, minMllAFAS)

        return True


    # General methods
    def initReaders(self,tree):
        self._ttreereaderversion = tree._ttreereaderversion
        for coll in ["LepGood", self.jc]:
            setattr(self, 'n' + coll, tree.valueReader('n' + coll))
            _vars = self.vars[:]
            if coll == 'LepGood': _vars.extend(self.vars_leptons)
            if coll == self.jc:   _vars.extend(self.vars_jets + self.vars_jets_int + self.vars_jets_nooutput)

            for B in _vars:
                if type(B) == tuple:
                    setattr(self,"%s_%s"%(coll, B[0]), tree.arrayReader("%s_%s"%(coll, B[1])))
                else:
                    setattr(self,"%s_%s"%(coll, B), tree.arrayReader("%s_%s"%(coll, B)))
        return True


    def initComponent(self, component):
        self.isMC = component.isMC
        return


    def initWorkers(self):
        self._worker.setLeptons(self.nLepGood, self.LepGood_pt, self.LepGood_eta, self.LepGood_phi, self.LepGood_mass, self.LepGood_jetIdx)
        jecs = r.vector("TTreeReaderArray<float>*")()

        if self.isMC:
            for var in self.variations:
                jecs.push_back( getattr(self, '%s_pt_%sUp'%(self.jc,   var)))
                jecs.push_back( getattr(self, '%s_pt_%sDown'%(self.jc, var)))

        self._worker.setJets(getattr(self,'n%s'%self.jc),getattr(self,'%s_pt'%self.jc),getattr(self,'%s_eta'%self.jc),getattr(self,'%s_phi'%self.jc),
                             getattr(self,'%s_%s'%(self.jc,self.jetBTag)),
                             jecs
                            )
        return
