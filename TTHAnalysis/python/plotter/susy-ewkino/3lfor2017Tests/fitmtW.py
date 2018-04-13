import ROOT

xmin = 14
xmax = 176
dx = 2
x = ROOT.RooRealVar("x","x",xmin, xmax)
frame = x.frame() 
dataArgSet = ROOT.RooArgList(x)

"""
muo = ROOT.RooRealVar("muo", "muo", 90.86, 60., 120.)
sigmao = ROOT.RooRealVar("sigmao", "sigmao", 2, 1, 3.)

n1 = ROOT.RooRealVar("n1", "n1", 50, 0., 30000.)
voigt1 = ROOT.RooVoigtian("voigt1", "Voigtian PDF 1", x, muo,sigmao,wo)
"""

mu1 = ROOT.RooRealVar("mu1", "mu1", 90.86, 60., 120.)
sigma1 = ROOT.RooRealVar("sigma1", "sigma1", 4, 1, 10.)
wo = ROOT.RooRealVar("wo", "wo", 2.5, 0.1, 80.)
n2 = ROOT.RooRealVar("n2", "n2", 50, 0., 30000.)
voigt2 = ROOT.RooVoigtian("voigt2", "Voigtian PDF 2", x, mu1,sigma1,wo)

muo = ROOT.RooRealVar("muo", "muo", 90.86, 60., 120.)
sigmao = ROOT.RooRealVar("sigmao", "sigmao", 2, 1, 20.)
alphao = ROOT.RooRealVar("alphao", "alphao", 1., 0., 80.)
no = ROOT.RooRealVar("no", "no", 1., 0., 80.)
n1 = ROOT.RooRealVar("n1", "n1", 50, 0., 30000.)
voigt1 = ROOT.RooCBShape("cb1", "CB PDF 1", x, muo,sigmao,alphao,no)



lamb1 = ROOT.RooRealVar("lamb1", "lamb1", -0.500, -1., 1.)
n3 = ROOT.RooRealVar("n3", "n3", 50, 0., 30000.)
expo1 = ROOT.RooExponential("expo1", "exponential PDF 1", x, lamb1);

fitFunc = ROOT.RooAddPdf("sum", "Double Voigt plus Exp", ROOT.RooArgList(voigt1,voigt2, expo1), ROOT.RooArgList(n1,n2,n3))

ndof = (xmax-xmin)/dx - 12
