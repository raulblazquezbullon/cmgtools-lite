import ROOT as r
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection
from CMGTools.TTHAnalysis.tools.collectionSkimmer import CollectionSkimmer
from CMGTools.TTHAnalysis.tools.nanoAOD.friendVariableProducerTools import declareOutput
from PhysicsTools.Heppy.physicsobjects.Jet import _btagWPs
import warnings as wr
import os, sys

class cleaningTopRun2(Module):
    def __init__(self, label, jetPts, jetPtNoisyFwd, jetCollection = 'Jet', lepCollection = "LepGood",
                 jetBTag = 'btagDeepFlavB', btagWP_ = "M", isMC = None,
                 jecvars = ["jesTotalCorr", "jesTotalUnCorr", "jer"],
                 lepenvars = ["mu"],
                 year_ = None, debug = False):

        self.label = "" if (label in ["", None]) else ("_" + label)

        #### NOTE: here the tight selections for jet (excluding eta and pt requirements) are hardcoded per year
        self.selecsdict = {}
        self.selecsdict[2016] = lambda jet: jet.jetId > 0
        self.selecsdict[2017] = lambda jet: jet.jetId > 1
        self.selecsdict[2018] = lambda jet: jet.jetId > 1

        self.jc     = jetCollection
        self.lc     = lepCollection

        self.jetPts = jetPts
        self.jetPtNoisyFwd = jetPtNoisyFwd
        self.jetBTag   = jetBTag
        if isMC is not None:
            self.isMC = isMC
        self.jecvars   = jecvars
        self.lepenvars = lepenvars
        self.year      = year_

        #### NOTE: the b-tagging algorithm is hardcoded to be deep flavour, although this can be relatively
        # easyly modified to support other algorithms.
        self.algoscaff = "DeepFlav_{y}_{wp}"
        self.btagWP    = btagWP_
        self.debug     = debug
        return


    #### Running methods
    # New code
    def beginJob(self, histFile = None, histDirName = None):
        #### Configuring variations (lepton energy corrs. and JEC).
        self.systsLepEn = {}
        self.systsJEC   = {0 : ""}
        if self.isMC:
            for sys in range(len(self.jecvars)):
                self.systsJEC[sys+1]    = '_' + self.jecvars[sys] + 'Up'
                self.systsJEC[-(sys+1)] = '_' + self.jecvars[sys] + 'Down'
            for sys in range(len(self.lepenvars)):
                self.systsLepEn[sys+1]    = '_' + self.lepenvars[sys] + 'Up'
                self.systsLepEn[-(sys+1)] = '_' + self.lepenvars[sys] + 'Down'



        #### Configuring output branches
        self.outmasses   = ['minMllAFAS']

        self._outjetvars    = [x%self.jc for x in ['nB%sSelMedium%%d','n%sSel%%d']]
        self._outfwdjetvars = [x%self.jc for x in ['nFwd%sSel%%d']]
        self.outjetvars  = []
        for jetPt in self.jetPts:
            self.outjetvars.extend([(x%jetPt+y, 'I') for x in self._outjetvars    for y in self.systsJEC.values()   if "nB" in x])
            self.outjetvars.extend([(x%jetPt+y, 'I') for x in self._outfwdjetvars for y in self.systsJEC.values()   if "nB" in x])

            self.outjetvars.extend([(x%jetPt+y, 'I') for x in self._outjetvars    for y in self.systsLepEn.values() if "nB" in x])
            self.outjetvars.extend([(x%jetPt+y, 'I') for x in self._outfwdjetvars for y in self.systsLepEn.values() if "nB" in x])

            #self.outjetvars.extend([(x%jetPt+y, 'I' if ('nB%s'%self.jc in x or 'n%s'%self.jc in x) else 'F') for x in self._outjetvars    for y in self.systsJEC.values() if y != "" or "nB" in x])
            #self.outjetvars.extend([(x%jetPt+y, 'I' if ('nB%s'%self.jc in x or 'n%s'%self.jc in x) else 'F') for x in self._outfwdjetvars for y in self.systsJEC.values() if y != "" or "nB" in x])

            #self.outjetvars.extend([(x%jetPt+y, 'I' if ('nB%s'%self.jc in x or 'n%s'%self.jc in x) else 'F') for x in self._outjetvars    for y in self.systsLepEn.values() if y != "" or "nB" in x])
            #self.outjetvars.extend([(x%jetPt+y, 'I' if ('nB%s'%self.jc in x or 'n%s'%self.jc in x) else 'F') for x in self._outfwdjetvars for y in self.systsLepEn.values() if y != "" or "nB" in x])
        self.branches = [var + self.label for var in self.outmasses]
        self.branches.extend([var + realvar + self.label for var in self.outmasses for delta,realvar in self.systsLepEn.iteritems()])
        self.branches.extend([(var + self.label, _type) for var,_type in self.outjetvars])


        #### Configuring input branches
        self.vars = ["eta", "phi"]
        self.vars_leptons = ["pdgId", 'jetIdx', "mass"]
        self.vars_jets = ([("pt", "pt_nom") if self.isMC else 'pt', ("mass", "mass_nom") if self.isMC else "mass", 'btagDeepFlavB'] +
                          ['pt_%s%s'%(x,y) for x in self.jecvars for y in ["Up", "Down"] ] + ['mass_%s%s'%(x,y) for x in self.jecvars for y in ["Up", "Down"]])
        self.vars_fwdjets = ([("pt", "pt_nom") if self.isMC else 'pt'] +
                             [ 'pt_%s%s'%(x,y) for x in self.jecvars for y in ["Up", "Down"]] + ['mass_%s%s'%(x,y) for x in self.jecvars for y in ["Up", "Down"]])
        self.vars_jets_int = (["hadronFlavour"] if self.isMC else [])
        self.vars_jets_nooutput = []


        #### Configuring C++ helpers for JEC variations as well as nominal results
        self._helpers      = []
        self._helpers_jecs = []
        for delta,sys in self.systsJEC.iteritems():
            setattr(self, "_helper_jetsSup" + sys,
                    CollectionSkimmer("{col}Sel{pt}".format(   col = self.jc, pt = self.jetPts[0]) + sys + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5))
            setattr(self, "_helper_jetsInf" + sys,
                    CollectionSkimmer("{col}Sel{pt}".format(   col = self.jc, pt = self.jetPts[1]) + sys + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5))

            setattr(self, "_helper_fwdjetsSup" + sys,
                    CollectionSkimmer("Fwd{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[0]) + sys + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5))
            setattr(self, "_helper_fwdjetsInf" + sys,
                    CollectionSkimmer("Fwd{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[1]) + sys + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5))

            if sys == "":
                self._helpers.append(getattr(self, "_helper_jetsSup"    + sys))
                self._helpers.append(getattr(self, "_helper_jetsInf"    + sys))
                self._helpers.append(getattr(self, "_helper_fwdjetsSup" + sys))
                self._helpers.append(getattr(self, "_helper_fwdjetsInf" + sys))
            else:
                self._helpers_jecs.append(getattr(self, "_helper_jetsSup"    + sys))
                self._helpers_jecs.append(getattr(self, "_helper_jetsInf"    + sys))
                self._helpers_jecs.append(getattr(self, "_helper_fwdjetsSup" + sys))
                self._helpers_jecs.append(getattr(self, "_helper_fwdjetsInf" + sys))

        #### Compiling C++ library in case it hasn't been done yet
        if "/fullCleanerTop.so" not in r.gSystem.GetLibraries():
            print "\n> C++ library not loaded. Compiling..."
            r.gROOT.ProcessLine(".L {base}/src/CMGTools/TTHAnalysis/python/tools/fullCleanerTop.cxx+O".format(base = os.environ['CMSSW_BASE']))
            print "> Library compiled!"

        # Create main object and set its properties
        self._worker = r.fullCleanerTop(self._helper_jetsSup.cppImpl(), self._helper_jetsInf.cppImpl(), self._helper_fwdjetsSup.cppImpl(), self._helper_fwdjetsInf.cppImpl(), -99)
        self._worker.setJetPts(self.jetPts[0], self.jetPts[1])
        self._worker.setFwdNoisyPt(self.jetPtNoisyFwd)

        # Create main object and set its properties
        for delta,sys in self.systsJEC.iteritems():
            if sys == "": continue
            print delta, sys
            self._worker.setJECVariation(delta,
                                         getattr(self, "_helper_jetsSup"    + sys).cppImpl(),
                                         getattr(self, "_helper_jetsInf"    + sys).cppImpl(),
                                         getattr(self, "_helper_fwdjetsSup" + sys).cppImpl(),
                                         getattr(self, "_helper_fwdjetsInf" + sys).cppImpl())

        # Configuring C++ helpers for lepton energy variations
        self._helpers_lepen = []
        for delta,sys in self.systsLepEn.iteritems():
            setattr(self, "_helper_jetsSup" + sys,
                    CollectionSkimmer("{col}Sel{pt}".format(   col = self.jc, pt = self.jetPts[0]) + sys + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5))
            setattr(self, "_helper_jetsInf" + sys,
                    CollectionSkimmer("{col}Sel{pt}".format(   col = self.jc, pt = self.jetPts[1]) + sys + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5))

            setattr(self, "_helper_fwdjetsSup" + sys,
                    CollectionSkimmer("Fwd{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[0]) + sys + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5))
            setattr(self, "_helper_fwdjetsInf" + sys,
                    CollectionSkimmer("Fwd{col}Sel{pt}".format(col = self.jc, pt = self.jetPts[1]) + sys + self.label, self.jc, floats = [], saveSelectedIndices = True, maxSize = 5))

            self._helpers_lepen.append(getattr(self, "_helper_jetsSup"    + sys))
            self._helpers_lepen.append(getattr(self, "_helper_jetsInf"    + sys))
            self._helpers_lepen.append(getattr(self, "_helper_fwdjetsSup" + sys))
            self._helpers_lepen.append(getattr(self, "_helper_fwdjetsInf" + sys))

            print getattr(self, "_helper_jetsSup"    + sys).cppImpl(), getattr(self, "_helper_jetsInf"    + sys).cppImpl(), getattr(self, "_helper_fwdjetsSup" + sys).cppImpl(), getattr(self, "_helper_fwdjetsInf" + sys).cppImpl(),

            setattr(self, "_worker" + sys, r.fullCleanerTop(getattr(self, "_helper_jetsSup"    + sys).cppImpl(),
                                                            getattr(self, "_helper_jetsInf"    + sys).cppImpl(),
                                                            getattr(self, "_helper_fwdjetsSup" + sys).cppImpl(),
                                                            getattr(self, "_helper_fwdjetsInf" + sys).cppImpl(),
                                                            -99))
            getattr(self, "_worker" + sys).setJetPts(self.jetPts[0], self.jetPts[1])
            getattr(self, "_worker" + sys).setFwdNoisyPt(self.jetPtNoisyFwd)
        print dir(self)
        return


    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        for x in (self._helpers + self._helpers_lepen + self._helpers_jecs):
            x.initInputTree(inputTree)

        self.initReaders(inputTree)
        self.initWorkers()

        declareOutput(self, wrappedOutputTree, self.branches)
        for x in (self._helpers + self._helpers_lepen + self._helpers_jecs):
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
            for x in (self._helpers + self._helpers_lepen): x.initInputTree(event._tree)
            self.initReaders(event._tree)
            self.initWorkers()

        for x in (self._helpers + self._helpers_lepen): x.clear()

        self._worker.clear()
        self._worker.loadTags(tags, wpM)
        self._worker.run()

        for delta,varname in self.systsJEC.iteritems():
            thefunction = "GetNominalJetSums"
            if delta != 0: thefunction = "GetJetSums"
            for x in getattr(self._worker, thefunction)(delta):
                for var in self._outjetvars:
                    if "nB" in var: self.wrappedOutputTree.fillBranch(var%x.thr + varname + self.label, getattr(x, var.replace('%d', '').replace(self.jc, 'Jet')))
                for var in self._outfwdjetvars:
                    if "nB" in var: self.wrappedOutputTree.fillBranch(var%x.thr + varname + self.label, getattr(x, var.replace('%d', '').replace(self.jc, 'Jet')))
                #for var in self._outjetvars:
                    #if varname != "" or "nB" in var: self.wrappedOutputTree.fillBranch(var%x.thr + varname + self.label, getattr(x, var.replace('%d', '').replace(self.jc, 'Jet')))
                #for var in self._outfwdjetvars:
                    #if varname != "" or "nB" in var: self.wrappedOutputTree.fillBranch(var%x.thr + varname + self.label, getattr(x, var.replace('%d', '').replace(self.jc, 'Jet')))

        minMllAFAS = self._worker.GetPairMasses()
        for m in self.outmasses:
            self.wrappedOutputTree.fillBranch(m + self.label, minMllAFAS)

        for delta,var in self.systsLepEn.iteritems():
            getattr(self, "_worker" + var).clear()
            getattr(self, "_worker" + var).loadTags(tags, wpM)
            getattr(self, "_worker" + var).run()

            for x in self._worker.GetJetSums(0):
                for jetvar in self._outjetvars:
                    if "nB" in var: self.wrappedOutputTree.fillBranch(jetvar%x.thr + var + self.label, getattr(x, jetvar.replace('%d', '').replace(self.jc, 'Jet')))
                for jetvar in self._outfwdjetvars:
                    if "nB" in var: self.wrappedOutputTree.fillBranch(jetvar%x.thr + var + self.label, getattr(x, jetvar.replace('%d', '').replace(self.jc, 'Jet')))

            tmpmass = getattr(self, "_worker" + var).GetPairMasses()
            for m in self.outmasses:
                self.wrappedOutputTree.fillBranch(m + var + self.label, tmpmass)

        return True


    # General methods
    def initReaders(self, tree):
        self._ttreereaderversion = tree._ttreereaderversion
        for coll in [self.lc, self.jc] + [self.lc + var[1:] for delta,var in self.systsLepEn.iteritems()]:
            setattr(self, 'n' + coll, tree.valueReader('n' + coll))
            _vars = self.vars[:]
            if   coll == self.lc:
                _vars.extend(self.vars_leptons)
                _vars.append(("pt", 'pt_corrAll'))
            elif self.lc in coll: ### lepton energy variated collections
                _vars.extend(self.vars_leptons)
                _vars.append(("pt", 'pt_' + coll.replace(self.lc, "")))
            elif coll == self.jc:
                _vars.extend(self.vars_jets + self.vars_jets_int + self.vars_jets_nooutput)

            for B in _vars:
                if type(B) == tuple:
                    setattr(self, "%s_%s"%(coll, B[0]), tree.arrayReader("%s_%s"%(coll, B[1])))
                else:
                    setattr(self, "%s_%s"%(coll, B), tree.arrayReader("%s_%s"%(coll, B)))
        return True


    def initComponent(self, component):
        self.isMC = component.isMC
        return


    def initWorkers(self):
        self._worker.setLeptons(self.nLepGood, self.LepGood_pt, self.LepGood_eta, self.LepGood_phi, self.LepGood_mass, self.LepGood_jetIdx)
        jecs = r.vector("TTreeReaderArray<float>*")()

        if self.isMC:
            for var in self.jecvars:
                jecs.push_back( getattr(self, '%s_pt_%sUp'%(self.jc,     var)))
                jecs.push_back( getattr(self, '%s_pt_%sDown'%(self.jc,   var)))

        self._worker.setJets(getattr(self,'n%s'%self.jc), getattr(self,'%s_pt'%self.jc), getattr(self,'%s_eta'%self.jc), getattr(self,'%s_phi'%self.jc),
                             getattr(self,'%s_%s'%(self.jc,self.jetBTag)),
                             jecs
                            )

        for delta,var in self.systsLepEn.iteritems():
            collName = self.lc + var[1:]
            getattr(self, "_worker" + var).setLeptons(getattr(self, "n" + collName),
                                                      getattr(self, collName + "_pt"),
                                                      getattr(self, collName + "_eta"),
                                                      getattr(self, collName + "_phi"),
                                                      getattr(self, collName + "_mass"),
                                                      getattr(self, collName + "_jetIdx"))
            getattr(self, "_worker" + var).setJets(getattr(self,'n%s'%self.jc),
                                                   getattr(self,'%s_pt'%self.jc),
                                                   getattr(self,'%s_eta'%self.jc),
                                                   getattr(self,'%s_phi'%self.jc),
                                                   getattr(self,'%s_%s'%(self.jc, self.jetBTag)),
                                                   r.vector("TTreeReaderArray<float>*")()
                                                  )

        return
