#Bunch of basis change functions
import ROOT
import CMS_lumi

"""sin2theff = 0.23152
cv = -0.5
ca = -0.5 + 2*sin2theff"""
alpha = 0.213

class coeffs(object):

    def __init__(self, histoc,histoc2,histofid, isZ, tag, lumi):
        self.histoc = histoc
        self.histoc2 = histoc2
        self.histofid = histofid
        self.isZ = isZ
        self.tag = tag
        self.lumi = lumi
        self.quadF = ROOT.TF2("quad" + tag, "[0]*(1+x)*(1+x)*(1+2*0.213*y+y*y) + [1]*(1+x)*(1+x)*(1-2*0.213*y+y*y)  + 2*[2]*(1+x)*(1+x)*(1-y*y) + [3]*(1-x)*(1-x)*(1+2*0.213*y+y*y)  + [4]*(1-x)*(1-x)*(1-2*0.213*y+y*y)  + 2*[5]*(1-x)*(1-x)*(1-y*y)+ 2*[6]*(1-x*x)*(1+2*0.213*y+y*y) + 2*[7]*(1-x*x)*(1-2*0.213*y+y*y)  + 4*[8]*(1-x*x)*(1-y*y)", -1.0,1.0,-1.0,1.0)
        self.quadF.SetParameters(100,100,100,100,100,100,100,100,100)
    def load(self):
        """self.ic = self.histoc.GetMean()
        self.icErr = self.histoc.GetMeanError()
        self.ic2 = self.histoc2.GetMean()     
        self.ic2Err = self.histoc2.GetMeanError()"""           
        self.histoc.Fit(self.quadF)
        self.ndof = self.quadF.GetNDF()
        self.chi2 = self.quadF.GetChisquare()    
        self.prob = self.quadF.GetProb()
        print "NDOF, chi2, prob", self.ndof, self.chi2, self.prob
        fLL,fLR,fLO,fRL,fRR,fRO,fOL,fOR,fOO = self.histoc.GetFunction("quad" + self.tag).GetParameter(0),self.histoc.GetFunction("quad" + self.tag).GetParameter(1),self.histoc.GetFunction("quad" + self.tag).GetParameter(2),self.histoc.GetFunction("quad" + self.tag).GetParameter(3),self.histoc.GetFunction("quad" + self.tag).GetParameter(4),self.histoc.GetFunction("quad" + self.tag).GetParameter(5),self.histoc.GetFunction("quad" + self.tag).GetParameter(6),self.histoc.GetFunction("quad" + self.tag).GetParameter(7),self.histoc.GetFunction("quad" + self.tag).GetParameter(8)
        print self.histoc.GetFunction("quad" + self.tag).GetParameter(0),self.histoc.GetFunction("quad" + self.tag).GetParameter(1),self.histoc.GetFunction("quad" + self.tag).GetParameter(2),self.histoc.GetFunction("quad" + self.tag).GetParameter(3),self.histoc.GetFunction("quad" + self.tag).GetParameter(4),self.histoc.GetFunction("quad" + self.tag).GetParameter(5),self.histoc.GetFunction("quad" + self.tag).GetParameter(6),self.histoc.GetFunction("quad" + self.tag).GetParameter(7),self.histoc.GetFunction("quad" + self.tag).GetParameter(8)
        fWL = fLL + fLR + fLO
        fWR = fRL + fRR + fRO
        fWO = fOL + fOR + fOO
        fZL = fLL + fRL + fOL
        fZR = fLR + fRR + fOR
        fZO = fLO + fRO + fOO
        print "W pol: %1.3f, %1.3f, %1.3f"%(fWL/(fWL+fWR+fWO), fWR/(fWL+fWR+fWO),fWO/(fWL+fWR+fWO))
        print "Z pol: %1.3f, %1.3f, %1.3f"%(fZL/(fZL+fZR+fZO), fZR/(fZL+fZR+fZO),fZO/(fZL+fZR+fZO))
        print "fOO: %1.3f"%(fOO/(fLL+fLR+fLO+fRL+fRR+fRO+fOL+fOR+fOO))
        print "fOT: %1.3f"%((fOL+fOR)/(fLL+fLR+fLO+fRL+fRR+fRO+fOL+fOR+fOO))
        print "fTO: %1.3f"%((fLO+fRO)/(fLL+fLR+fLO+fRL+fRR+fRO+fOL+fOR+fOO))
        print "fTT: %1.3f"%((fLL+fLR+fRL+fRR)/(fLL+fLR+fLO+fRL+fRR+fRO+fOL+fOR+fOO))

