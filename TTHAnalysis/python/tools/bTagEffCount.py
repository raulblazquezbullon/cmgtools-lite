from CMGTools.TTHAnalysis.treeReAnalyzer import *

class bTagEffCount:
    def __init__(self, label = "btagDeepB" , WPs={'L': 0.2217, 'M': 0.6321, 'T': 0.8953}): #Default is DeepCSV for 2016
        self.label = label
        self.WPs   = WPs
        self.flavors = {0:'L', 1:'C', 2:'B'} #light, c, b according to bTag POG 
    def listBranches(self):
        biglist = []
        #Now create a passing and failing collection for each wp and flavor
        for wp in self.WPs:
            for fl in self.flavors:
                 biglist.append(("nJetPassWP%sFL%s"%(wp,self.flavors[fl]),"I"))
                 biglist.append(("nJetFailWP%sFL%s"%(wp,self.flavors[fl]),"I"))
                 for var in ["pt","eta"]:
                     biglist.append(("JetFailWP%sFL%s_%s"%(wp,self.flavors[fl], var) ,"F",20,"nJetFailWP%sFL%s"%(wp,self.flavors[fl])))
                     biglist.append(("JetPassWP%sFL%s_%s"%(wp,self.flavors[fl], var) ,"F",20,"nJetPassWP%sFL%s"%(wp,self.flavors[fl])))
        return biglist

    def __call__(self,event):
        ret = self.reset()
        # Dirty jets
        jets       = [j for j in Collection(event,"Jet","nJet")]
        cleanindex = getattr(event, "iJSel_Mini")
        cleanindex = filter(lambda x: x <= len(jets), cleanindex)
        # Clean jets
        jets = [jets[i] for i in cleanindex]
        for j in jets:
             flav = getattr(j, "hadronFlavour")
             btag = getattr(j, self.label)
             # Classify jet at gen level
             if flav == 5  : fl = 2
             elif flav == 4: fl = 1
             else          : fl = 0

             for wp in self.WPs:
                 passes = "Pass" if btag >= self.WPs[wp] else "Fail"
                 ret["nJet%sWP%sFL%s"%(passes,wp,self.flavors[fl])] += 1
                 for var in ["pt","eta"]:
                     ret["Jet%sWP%sFL%s_%s"%(passes,wp,self.flavors[fl],var)].append(getattr(j, var))
        return ret

    def reset(self):
        ret = {}
        for l in self.listBranches():
            if len(l) <= 2: ret[l[0]] = 0
            else: ret[l[0]] = []
        return ret
