import ROOT
import sys

fil = ROOT.TFile(sys.argv[1],"READ")
asimov  = sys.argv[2]
folders = sys.argv[3:]


pOrdered = ["Non prompt","\\ZZ","\\Xg","\\ttX","\\VVV", "\\VH","\\tZq","\\WZ VBS","hline","Background", "hline", "\\WZ", "hline", "Data"]
if asimov: pOrdered[-1] = "Expected data"
backgrounds = {"Non prompt": ["data_fakes"], "\\Xg":["convs"], "\\ttX":["prompt_TTX"], "\\tZq":["prompt_TZQ"], "\\VH":["prompt_VH"], "\\VVV":["prompt_VVV"], "\\WZ VBS": ["prompt_WZ_EWK"], "\\ZZ":["prompt_ZZ", "prompt_ggZZ","prompt_hZZ"], "Background":["total_background"]}
signals = {"\\WZ":["prompt_WZ"]}
data = {"Data":["data"]} if not (asimov) else {"Expected data":["data"]}

# Totals: total, total_signal, total_background
print "\\begin{tabular}{|c|c|c|c|c|c|}"
print "\\hline"
print "Process        & \eee       & \eem      & \mme     & \mmm       & Inclusive \\\\ \\hline"

baseline = "Process     & $y1 \\pm sigma1$  & $y2 \\pm sigma2$  & $y3 \\pm sigma3$ & $y4 \\pm sigma4$   & $ycomb \\pm sigmacomb$\\\\ "

for p in pOrdered:
  yields = [[0.,0.,0.,0.,0.],[0.,0.,0.,0.,0.],[0.,0.,0.,0.,0.]]
  sigmas = [[0.,0.,0.,0.,0.],[0.,0.,0.,0.,0.],[0.,0.,0.,0.,0.]]
  if p in backgrounds:
   for f, folder in enumerate(folders):
    for pp in backgrounds[p]:
      #print folder + "/" + pp
      theH = fil.Get(folder + "/" + pp)
      for i in range(1,5):
        yields[f][i-1]+= theH.GetBinContent(i)
        yields[f][-1] += theH.GetBinContent(i)

        sigmas[f][i-1]= (sigmas[f][i-1]**2 + theH.GetBinError(i)**2)**0.5
        sigmas[f][-1] = (sigmas[f][-1]**2 + theH.GetBinError(i)**2)**0.5
   yields = [yields[0][i] + yields[1][i] + yields[2][i] for i in range(5)]
   sigmas = [(sigmas[0][i]**2 + sigmas[1][i]**2 + sigmas[2][i]**2 + 0.6*(sigmas[0][i]*sigmas[1][i] + sigmas[0][i]*sigmas[2][i] + sigmas[1][i]*sigmas[2][i]))**0.5 for i in range(5)]

  elif p in signals:
   for f, folder in enumerate(folders):
    for pp in signals[p]:
      theH = fil.Get(folder + "/" + pp)
      for i in range(1,5):
        yields[f][i-1] += theH.GetBinContent(i)
        yields[f][-1] += theH.GetBinContent(i)

        sigmas[f][i-1]= (sigmas[f][i-1]**2 + theH.GetBinError(i)**2)**0.5
        sigmas[f][-1] = (sigmas[f][-1]**2 + theH.GetBinError(i)**2)**0.5
   yields = [yields[0][i] + yields[1][i] + yields[2][i] for i in range(5)]
   sigmas = [(sigmas[0][i]**2 + sigmas[1][i]**2 + sigmas[2][i]**2 + 0.6*(sigmas[0][i]*sigmas[1][i] + sigmas[0][i]*sigmas[2][i] + sigmas[1][i]*sigmas[2][i]))**0.5 for i in range(5)]


  elif p in data:
   for f, folder in enumerate(folders):
    for pp in data[p]:
      theH = fil.Get(folder + "/" + pp)
      for i in range(1,5):
        yields[f][i-1] += theH.Eval(i-0.5)
        yields[f][-1] += theH.Eval(i-0.5)

        sigmas[f][i-1]= (sigmas[f][i-1]**2 + theH.Eval(i-0.5))**0.5
        sigmas[f][-1] = (sigmas[f][-1]**2 + theH.Eval(i-0.5))**0.5
   yields = [yields[0][i] + yields[1][i] + yields[2][i] for i in range(5)]
   sigmas = [(sigmas[0][i]**2 + sigmas[1][i]**2 + sigmas[2][i]**2)**0.5 for i in range(5)]


  if (p == "hline"):
      print "\\hline"
      continue
  formats = []
  for s in sigmas:
    if s >= 2: formats.append("%5.0f")
    elif s >= 0.2 : formats.append("%5.1f")
    elif s >= 0.02 : formats.append("%5.2f")
    else: formats.append("%5.3f")
  
  yields = [y[1]%((y[0])) for y in zip(yields, formats)]
  sigmas = [y[1]%((y[0])) for y in zip(sigmas,formats)]

  print baseline.replace("Process", "%10s"%p).replace("y1",yields[0]).replace("y2",yields[1]).replace("y3", yields[2]).replace("y4", yields[3]).replace("ycomb", yields[4]).replace("sigma1",sigmas[0]).replace("sigma2",sigmas[1]).replace("sigma3", sigmas[2]).replace("sigma4", sigmas[3]).replace("sigmacomb", sigmas[4])

print "\\end{tabular}"
