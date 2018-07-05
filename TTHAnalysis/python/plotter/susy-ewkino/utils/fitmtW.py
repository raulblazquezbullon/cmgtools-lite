import ROOT

xmin = 14 #Those are for fitting
xmax = 176 #Those are for fitting
dx = 2
x = ROOT.RooRealVar("x","x",xmin, xmax) #This one has bigger limits so the function can be evaluated outside
frame = x.frame() 
dataArgSet = ROOT.RooArgList(x)

"""
muo = ROOT.RooRealVar("muo", "muo", 90.86, 60., 120.)
sigmao = ROOT.RooRealVar("sigmao", "sigmao", 2, 1, 3.)

n1 = ROOT.RooRealVar("n1", "n1", 50, 0., 30000.)
voigt1 = ROOT.RooVoigtian("voigt1", "Voigtian PDF 1", x, muo,sigmao,wo)
"""

mu1 = ROOT.RooRealVar("mu1", "mu1", 83.67, 60., 120.)
sigma1 = ROOT.RooRealVar("sigma1", "sigma1", 7.45, 1, 10.)
wo = ROOT.RooRealVar("wo", "wo", 23.8, 0.1, 80.)
n2 = ROOT.RooRealVar("n2", "n2", 1149, 0., 30000.)
voigt2 = ROOT.RooVoigtian("voigt2", "Voigtian PDF 2", x, mu1,sigma1,wo)

muo = ROOT.RooRealVar("muo", "muo", 76.92, 60., 120.)
sigmao = ROOT.RooRealVar("sigmao", "sigmao", 14.49, 1, 20.)
alphao = ROOT.RooRealVar("alphao", "alphao", 0.94, 0., 80.)
no = ROOT.RooRealVar("no", "no", 1.13, 0., 80.)
n1 = ROOT.RooRealVar("n1", "n1", 1325, 0., 30000.)
voigt1 = ROOT.RooCBShape("cb1", "CB PDF 1", x, muo,sigmao,alphao,no)



lamb1 = ROOT.RooRealVar("lamb1", "lamb1", -0.016, -1., 1.)
n3 = ROOT.RooRealVar("n3", "n3", 553, 0., 30000.)
expo1 = ROOT.RooExponential("expo1", "exponential PDF 1", x, lamb1);

fitFunc = ROOT.RooAddPdf("sum", "Double Voigt plus Exp", ROOT.RooArgList(voigt1,voigt2, expo1), ROOT.RooArgList(n1,n2,n3))

ndof = (xmax-xmin)/dx - 12 #Always rest for the ndofs

xList = ROOT.RooArgList(x)
yList = ROOT.RooArgList(mu1,sigma1,wo,n2,muo,sigmao,alphao,no,n1)
yList.add(ROOT.RooArgList(lamb1,n3))
