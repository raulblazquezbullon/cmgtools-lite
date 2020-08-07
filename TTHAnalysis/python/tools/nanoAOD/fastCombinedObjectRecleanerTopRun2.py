from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from CMGTools.TTHAnalysis.tools.collectionSkimmer import CollectionSkimmer
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput
from PhysicsTools.Heppy.physicsobjects.Jet import _btagWPs
import os
import ROOT as r
import warnings as wr


class fastCombinedObjectRecleanerTopRun2(Module):
    def __init__(self, label, inlabel, jetPts, jetPtNoisyFwd, jetCollection = 'Jet',
                 jetBTag = 'btagDeepFlavB', btagWP_ = "M", isMC = None,
                 variations = ["jesTotalCorr", "jesTotalUnCorr", "jer"], year_ = None):

        self.label   = "" if (label in ["", None]) else ("_" + label)
        self.inlabel = inlabel
        self.jc      = jetCollection

        self.jetPts    = jetPts
        self.jetPtNoisyFwd = jetPtNoisyFwd
        self.jetBTag   = jetBTag
        if isMC is not None:
            self.isMC = isMC
        self.variations = variations
        self.year = year_

        #### NOTE: the b-tagging algorithm is hardcoded to be deep flavour, although this can be relatively
        # easyly modified to support other algorithms.
        self.algoscaff = "DeepFlav_{y}_{wp}"
        self.btagWP    = btagWP_

        return


    def initComponent(self, component):
        self.isMC = component.isMC
        return


    def beginJob(self, histFile = None, histDirName = None):
        self.vars = ["eta", "phi", "mass"]
        self.vars_leptons = ["pdgId",'jetIdx','pt']

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
            self.outjetvars.extend([(x%jetPt+y, 'I' if ('nB%s'%self.jc in x or 'n%s'%self.jc in x) else 'F') for x in self._outjetvars for y in self.systsJEC.values() if y != "" or "nB" in x])
            self.outjetvars.extend([(x%jetPt+y, 'I' if ('nB%s'%self.jc in x or 'n%s'%self.jc in x) else 'F') for x in self._outfwdjetvars for y in self.systsJEC.values() if y != "" or "nB" in x])

        self.branches = [var + self.label for var in self.outmasses]
        self.branches.extend([(var + self.label, _type) for var,_type in self.outjetvars])


        #### Configuring C++ helpers
        self.vars_jets = [("pt", "pt_nom") if self.isMC else 'pt', 'btagDeepFlavB'] + [ 'pt_%s%s'%(x,y) for x in self.variations for y in ["Up", "Down"]]
        self.vars_fwdjets = [("pt", "pt_nom") if self.isMC else 'pt'] + [ 'pt_%s%s'%(x,y) for x in self.variations for y in ["Up", "Down"]]
        self.vars_jets_int = (["hadronFlavour"] if self.isMC else [])
        self.vars_jets_nooutput = []

        self._helper_jetsSup = CollectionSkimmer("{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[0]) + self.label, self.jc, floats = self.vars + self.vars_jets, ints = self.vars_jets_int, maxSize = 20)
        self._helper_jetsInf = CollectionSkimmer("{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[1]) + self.label, self.jc, floats = self.vars + self.vars_jets, ints = self.vars_jets_int, maxSize = 20)

        self._helper_fwdjetsSup = CollectionSkimmer("Fwd{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[0]) + self.label, self.jc, floats = self.vars + self.vars_fwdjets, ints = self.vars_jets_int, maxSize = 20)
        self._helper_fwdjetsInf = CollectionSkimmer("Fwd{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[1]) + self.label, self.jc, floats = self.vars + self.vars_fwdjets, ints = self.vars_jets_int, maxSize = 20)


        self._helpers = [self._helper_jetsSup, self._helper_jetsInf, self._helper_fwdjetsSup, self._helper_fwdjetsInf]
        if "/fastCombinedObjectRecleanerHelperTop_cxx.so" not in r.gSystem.GetLibraries():
          print "Load C++ recleaner worker module"
          r.gROOT.ProcessLine(".L {base}/src/CMGTools/TTHAnalysis/python/tools/fastCombinedObjectRecleanerHelperTop.cxx+O".format(base = os.environ['CMSSW_BASE']))

        self._worker = r.fastCombinedObjectRecleanerHelperTop(self._helper_jetsSup.cppImpl(), self._helper_jetsInf.cppImpl(), self._helper_fwdjetsSup.cppImpl(), self._helper_fwdjetsInf.cppImpl(), -99)

        self._worker.setJetPts(self.jetPts[0], self.jetPts[1])
        self._worker.setFwdNoisyPt(self.jetPtNoisyFwd)

        if "/fastCombinedObjectRecleanerMassVetoCalculatorTop_cxx.so" not in r.gSystem.GetLibraries():
          print "Load C++ recleaner mass and veto calculator module"
          r.gROOT.ProcessLine(".L {base}/src/CMGTools/TTHAnalysis/python/tools/fastCombinedObjectRecleanerMassVetoCalculatorTop.cxx+O".format(base = os.environ['CMSSW_BASE']))
        self._workerMV = r.fastCombinedObjectRecleanerMassVetoCalculatorTop()
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


    def initReaders(self,tree):
        self._ttreereaderversion = tree._ttreereaderversion
        for coll in ["LepGood", self.jc]:
            setattr(self, 'n' + coll, tree.valueReader('n' + coll))
            _vars = self.vars[:]
            if coll == 'LepGood': _vars.extend(self.vars_leptons)
            if coll == self.jc:   _vars.extend(self.vars_jets + self.vars_jets_int + self.vars_jets_nooutput)

            for B in _vars:
                if type(B) == tuple:
                    setattr(self,"%s_%s"%(coll,B[0]), tree.arrayReader("%s_%s"%(coll,B[1])))
                else:
                    setattr(self,"%s_%s"%(coll,B), tree.arrayReader("%s_%s"%(coll,B)))
        return True


    def initWorkers(self):
        self._worker.setLeptons(self.nLepGood, self.LepGood_pt, self.LepGood_eta, self.LepGood_phi, self.LepGood_jetIdx)
        jecs = r.vector("TTreeReaderArray<float>*")()
        if self.isMC:
            for var in self.variations:
                jecs.push_back( getattr(self, '%s_pt_%sUp'%(self.jc, var)))
                jecs.push_back( getattr(self, '%s_pt_%sDown'%(self.jc, var)))

        self._worker.setJets(getattr(self,'n%s'%self.jc),getattr(self,'%s_pt'%self.jc),getattr(self,'%s_eta'%self.jc),getattr(self,'%s_phi'%self.jc),
                             getattr(self,'%s_%s'%(self.jc,self.jetBTag)),
                             jecs
                        )

        self._workerMV.setLeptons(self.nLepGood, self.LepGood_pt, self.LepGood_eta, self.LepGood_phi, self.LepGood_mass, self.LepGood_pdgId)
        return


    def analyze(self, event):
        # Init
        if   hasattr(event, "year"):
            wpM = _btagWPs[self.algoscaff.format(y = event.year, wp = self.btagWP)][1]
        elif self.year != None:
            wpM = _btagWPs[self.algoscaff.format(y = self.year, wp = self.btagWP)][1]
        else:
            wr.warn("WARNING: as you did not choose year, we will use deepcsv as algotihm with random values for the working points.")
            wpM = _btagWPs["DeepCSVM"][1]

        if self._ttreereaderversion != event._tree._ttreereaderversion:
            for x in self._helpers: x.initInputTree(event._tree)
            self.initReaders(event._tree)
            self.initWorkers()

        for x in self._helpers: x.clear()

        tags = getattr(event, '_CombinedTagsForCleaning{lab}'.format(lab = self.inlabel))

        self._worker.clear()
        self._worker.loadTags(tags, wpM)
        self._worker.run()

        for delta,varname in self.systsJEC.iteritems():
            for x in self._worker.GetJetSums(delta):
                for var in self._outjetvars:
                    if varname != "" or "nB" in var: self.wrappedOutputTree.fillBranch(var%x.thr + varname + self.label, getattr(x, var.replace('%d', '').replace(self.jc, 'Jet')))
                for var in self._outfwdjetvars:
                    if varname != "" or "nB" in var: self.wrappedOutputTree.fillBranch(var%x.thr + varname + self.label, getattr(x, var.replace('%d', '').replace(self.jc, 'Jet')))

        self._workerMV.clear()
        self._workerMV.run()

        masses = self._workerMV.GetPairMasses()
        for var in self.outmasses:
            self.wrappedOutputTree.fillBranch(var + self.label, getattr(masses, var))

        return True
