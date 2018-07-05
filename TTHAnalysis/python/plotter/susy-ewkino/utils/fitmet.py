import ROOT

xmin = 50
xmax = 350
dx = 5
x = ROOT.RooRealVar("x","x",xmin, xmax)
frame = x.frame() 
dataArgSet = ROOT.RooArgList(x)


lamb1 = ROOT.RooRealVar("lamb1", "lamb1", -0.500, -1., 1.)
muo = ROOT.RooRealVar("muo", "muo", -50, -200., 200.)
sigmao = ROOT.RooRealVar("sigmao", "sigmao", 40, 0.00001, 80.)
wo = ROOT.RooRealVar("wo", "wo", 40, 0.1, 80.)

n1 = ROOT.RooRealVar("n1", "n1", 50, 0., 3000.)
n2 = ROOT.RooRealVar("n2", "n2", 10, 0., 3000.)
expo1 = ROOT.RooExponential("expo1", "exponential PDF 1", x, lamb1);
gauss1 = ROOT.RooVoigtian("gauss2", "gaussian PDF 2", x, muo,sigmao,wo);
fitFunc = ROOT.RooAddPdf("sum", "expo1 + gauss1", ROOT.RooArgList(expo1,gauss1), ROOT.RooArgList(n1,n2))

ndof = (xmax-xmin)/dx - 6

xList = ROOT.RooArgList(x)
yList = ROOT.RooArgList(lamb1,muo,sigmao,wo,n1,n2)
