import ROOT

x = ROOT.RooRealVar("x","x",30, 330)
frame = x.frame() 
dataArgSet = ROOT.RooArgList(x)
x.setBins(32)

lamb1 = ROOT.RooRealVar("lamb1", "lamb1", -0.500, -1., 1.)
muo = ROOT.RooRealVar("muo", "muo", 38, 30., 60.)
sigmao = ROOT.RooRealVar("sigmao", "sigmao", 2.5, 0.1, 10.)

n1 = ROOT.RooRealVar("n1", "n1", 20, 0., 3000.)
n2 = ROOT.RooRealVar("n2", "n2", 10, 0., 3000.)
expo1 = ROOT.RooExponential("expo1", "exponential PDF 1", x, lamb1);
gauss1 = ROOT.RooLandau("gauss2", "gaussian PDF 2", x, muo,sigmao);
fitFunc = ROOT.RooAddPdf("sum", "expo1 + gauss1", ROOT.RooArgList(expo1,gauss1), ROOT.RooArgList(n1,n2))
