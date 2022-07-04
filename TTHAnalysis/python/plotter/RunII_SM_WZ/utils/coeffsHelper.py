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
        self.quadF = ROOT.TF1("quad" + tag, "[0]+[1]*x+[2]*x*x", -1.0,1.0)
        if not(isZ):
            self.f0 = ROOT.TF1("f0" + tag, "2*(1-x*x)*[0]", -1.0,1.)
            self.fL = ROOT.TF1("fL" + tag, "(1-x)*(1-x)*[0]", -1.0,1.0)
            self.fR = ROOT.TF1("fR" + tag, "(1+x)*(1+x)*[0]", -1.0,1.0)
        if (isZ):
            self.f0 = ROOT.TF1("f0" + tag, "2*(1-x*x)*[0]", -1.0,1.)
            self.fL = ROOT.TF1("fL" + tag, "(1-2*0.213*x+x*x)*[0]", -1.0,1.0)
            self.fR = ROOT.TF1("fR" + tag, "(1+2*0.213*x+x*x)*[0]", -1.0,1.0)

    def load(self):
        self.ic = self.histoc.GetMean()
        self.icErr = self.histoc.GetMeanError()
        self.ic2 = self.histoc2.GetMean()     
        self.ic2Err = self.histoc2.GetMeanError()           
        self.histoc.Fit(self.quadF)
        self.ndof = self.quadF.GetNDF()
        self.chi2 = self.quadF.GetChisquare()    
        self.prob = self.quadF.GetProb()
        self.c = self.histoc.GetFunction("quad" + self.tag).GetParameter(0)
        self.cerr = self.histoc.GetFunction("quad" + self.tag).GetParError(0)
        self.b = self.histoc.GetFunction("quad" + self.tag).GetParameter(1)
        self.berr = self.histoc.GetFunction("quad" + self.tag).GetParError(1)
        self.a = self.histoc.GetFunction("quad" + self.tag).GetParameter(2)
        self.aerr = self.histoc.GetFunction("quad" + self.tag).GetParError(2)
        self.IntToPolW()
        self.IntToPolWErr()
        self.FitToPolW()
        self.FitToPolWErr()

    def IntToPolW(self): #Assumes that you already took into account the sign of the W boson in the cosinus definition
        if self.isZ: self.ic = self.ic/alpha
        f0 =   2 - 5*self.ic2
        fL =  -0.5 - self.ic + 2.5*self.ic2
        fR =  -0.5 + self.ic + 2.5*self.ic2
        fTot = f0 + fL + fR
        self.coefInt = [f0/fTot,fL/fTot,fR/fTot]


    def IntToPolWErr(self): #Assumes that you already took into account the sign of the W boson in the cosinus definition
        f0Err =   5*self.ic2Err
        fLErr =  (self.icErr**2 + 2.5*2.5*self.ic2Err**2)**0.5
        fRErr =  (self.icErr**2 + 2.5*2.5*self.ic2Err**2)**0.5
        self.coefIntErr = [f0Err,fLErr,fRErr]

    def FitToPolW(self): #Assumes that you already took into account the sign of the W boson in the cosinus definition
        if self.isZ: self.b = self.b/alpha #The formula is different for the Z boson due to the different couplings
        f0 =  (self.c-self.a)/4.
        fL =  (self.a+self.c-self.b)/4.
        fR =  (self.a+self.c+self.b)/4.
        self.fitTot = f0 + fL + fR
        self.coefFit = [f0/self.fitTot,fL/self.fitTot,fR/self.fitTot]

    def FitToPolWErr(self): #Assumes that you already took into account the sign of the W boson in the cosinus definition
        f0err =  ((self.cerr**2 + self.aerr**2))**0.5/4.
        fLerr =  ((self.cerr**2 + self.aerr**2 + self.berr**2))**0.5/4.
        fRerr =  ((self.cerr**2 + self.aerr**2 + self.berr**2))**0.5/4.
        f0 =  (self.c-self.a)/4.
        fL =  (self.a+self.c-self.b)/4.
        fR =  (self.a+self.c+self.b)/4.
        fTot = f0 + fL + fR
        self.coefFitErr = [f0err/fTot,fLerr/fTot,fRerr/fTot]

    def doControl(self):
        c = ROOT.TCanvas("c", "test", 800,610)
        #self.histoc.Draw()
        self.histoc.SetTitle("")
        ROOT.gStyle.SetOptStat(0);
        ROOT.gStyle.SetPaintTextFormat("4.2f")
        ROOT.gStyle.SetOptTitle(0)
        ROOT.gPad.Update()
        c.SetTickx(1)
        c.SetTicky(1)
        c.SetRightMargin (0.04)
        c.SetTopMargin   (0.0984)
        c.SetLeftMargin  (0.14)
        c.SetBottomMargin(0.15666)        
        ROOT.gROOT.SetBatch(True)

        self.histoc.GetXaxis().SetTitle("cos(#theta_{Z})" if self.isZ else "q_{W} cos(#theta_{W})")
        self.histoc.GetYaxis().SetTitle("Events (generated)")
        self.histoc.SetLineColor(ROOT.kAzure)      
        self.histoc.GetXaxis().SetNdivisions(205)
        self.histoc.GetXaxis().SetLabelFont(42)
        self.histoc.GetXaxis().SetLabelSize(0.060)  
        self.histoc.GetXaxis().SetTitleFont(42)
        self.histoc.GetXaxis().SetTitleSize(0.08)
        self.histoc.GetXaxis().SetTitleOffset(0.75)

        self.histoc.GetYaxis().SetNdivisions(205)
        self.histoc.GetYaxis().SetLabelFont(42)
        self.histoc.GetYaxis().SetLabelSize(0.035)
        self.histoc.GetYaxis().SetTitleFont(42)
        self.histoc.GetYaxis().SetTitleSize(0.07)
        self.histoc.GetYaxis().SetTitleOffset(0.88)
        self.histoc.GetXaxis().SetRangeUser(-1.0,1.0)
        self.histoc.SetMaximum(self.histoc.GetMaximum()*2)
        self.histoc.SetMinimum(0)
        self.histoc.SetLineWidth(3)
        self.histoc.SetMarkerStyle(8)
        self.histoc.SetMarkerColor(ROOT.kBlue)
        self.histoc.SetMarkerSize(1.5)

        self.histoc.Draw("pE0")
        self.quadF.Draw("same")
        self.histofid.SetLineColor(ROOT.kBlack)
        self.histofid.SetLineWidth(3)
        self.histofid.Draw("same")

        CMS_lumi.writeExtraText = True
        CMS_lumi.lumi_13TeV = self.lumi
        CMS_lumi.extraText  = "Simulation"
        CMS_lumi.lumi_sqrtS = 13
        CMS_lumi.CMS_lumi(c, 4, 0, 0.15)
        theL = ROOT.TLegend(0.5, 0.53, 0.95, 0.88)
        theL.SetBorderSize(0)
        theL.AddEntry(self.histoc, "Generated", "LEP")
        theL.AddEntry(self.quadF, "Fit, #it{p}-value = %1.4f"%(self.prob if self.prob >= 1e-4 else 10*self.prob), "L")
        theL.AddEntry(self.histofid, "Fiducial","L")
        self.f0.SetParameter(0,self.fitTot*self.coefFit[0])
        self.f0.SetLineStyle(4)
        self.f0.SetLineColor(ROOT.kBlue)
        self.f0.SetLineWidth(6)

        theL.AddEntry(self.f0, "f_{0} = %1.3f #pm %1.3f"%(self.coefFit[0],self.coefFitErr[0]), "L")
        self.f0.Draw("same")
        self.fL.SetParameter(0,self.fitTot*self.coefFit[1])
        self.fL.SetLineStyle(4)
        self.fL.SetLineColor(ROOT.kOrange+7)
        self.fL.SetLineWidth(6)

        theL.AddEntry(self.fL, "f_{L} = %1.3f #pm %1.3f"%(self.coefFit[1],self.coefFitErr[1]), "L")
        self.fL.Draw("same")
        self.fR.SetParameter(0,self.fitTot*self.coefFit[2])
        self.fR.SetLineStyle(4)
        self.fR.SetLineColor(ROOT.kBlack)
        self.fR.SetLineWidth(6)

        theL.AddEntry(self.fR, "f_{R} = %1.3f #pm %1.3f"%(self.coefFit[2],self.coefFitErr[2]), "L")
        self.fR.Draw("same")
        theL.Draw("same")
        theLState = ROOT.TLegend(0.15, 0.73, 0.495, 0.87)
        theLState.SetBorderSize(0)
        theLState.SetHeader("pp#rightarrowW^{#minus}Z" if (("WM" in self.tag) or ("ZM" in self.tag)) else "pp#rightarrowW^{+}Z" if (("WP" in self.tag) or ("ZP" in self.tag)) else "pp#rightarrowW^{#pm}Z","C")
        theLState.SetTextSize(0.090)
        theLState.Draw("same")
        c.SaveAs("/nfs/fanae/user/carlosec/www/public/wz/Legacy/polPlots/"+self.tag + ".pdf")
        c.SaveAs("/nfs/fanae/user/carlosec/www/public/wz/Legacy/polPlots/"+self.tag + ".png")
        c.SaveAs("/nfs/fanae/user/carlosec/www/public/wz/Legacy/polPlots/"+self.tag + ".root")
  
    def doReport(self):
        print "-------------------------------------------------------------------------------------------------------------------------"
        print "-------------------------------------------------------------------------------------------------------------------------"
        print "-------------------------------------------------------------------------------------------------------------------------"
        print "Reporting coefficients for process tagged as %s"%self.tag
        print "Integrals with the integration method: <cos(th)> = %1.5f ; <cos^2(th)> = %1.5f"%(self.ic*(1-0.79*self.isZ), self.ic2)
        print "Coefficiencts with the fit method: [0] = %1.5f +/- %1.5f ; [1] = %1.5f +/- %1.5f ; [2] = %1.5f +/- %1.5f "%(self.c, self.cerr, self.b*(1-0.79*self.isZ), self.berr*(1-0.79*self.isZ), self.a, self.aerr)
        print "Stats of the fit method: chi2 = %1.5f, ndof = %i, pvalue = %1.5f"%(self.chi2, self.ndof, self.prob)
        print "-------------------------------------------------------------------------------------------------------------------------"
        print "Polarization index, integral f0 = %1.5f +/- %1.5f ; fL = %1.5f +/- %1.5f ; fR = %1.5f +/- %1.5f"%(self.coefInt[0], self.coefIntErr[0], self.coefInt[1], self.coefIntErr[1], self.coefInt[2], self.coefIntErr[2])
        print "Polarization index, fit      f0 = %1.5f +/- %1.5f ; fL = %1.5f +/- %1.5f ; fR = %1.5f +/- %1.5f"%(self.coefFit[0], self.coefFitErr[0], self.coefFit[1], self.coefFitErr[1], self.coefFit[2], self.coefFitErr[2])
        print "-------------------------------------------------------------------------------------------------------------------------"
        print "-------------------------------------------------------------------------------------------------------------------------"
        print "-------------------------------------------------------------------------------------------------------------------------"
