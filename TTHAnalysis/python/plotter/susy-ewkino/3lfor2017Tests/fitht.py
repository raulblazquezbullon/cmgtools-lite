import ROOT

xmin = 30
xmax = 330
dx = 3
x = ROOT.RooRealVar("x","x",xmin, xmax)
frame = x.frame() 
dataArgSet = ROOT.RooArgList(x)


lamb1 = ROOT.RooRealVar("lamb1", "lamb1", -0.500, -1., 1.)
lamb2 = ROOT.RooRealVar("lamb2", "lamb2", -0.500, -1., 1.)

n1 = ROOT.RooRealVar("n1", "n1", 20, 0., 3000.)
n2 = ROOT.RooRealVar("n2", "n2", 10, 0., 3000.)
expo1 = ROOT.RooExponential("expo1", "exponential PDF 1", x, lamb1);
expo2 = ROOT.RooExponential("expo2", "exponential PDF 2", x, lamb2);

fitFunc = ROOT.RooAddPdf("sum", "expo1 + expo2", ROOT.RooArgList(expo1,expo2), ROOT.RooArgList(n1,n2))

ndof = (xmax-xmin)/dx  - 5
