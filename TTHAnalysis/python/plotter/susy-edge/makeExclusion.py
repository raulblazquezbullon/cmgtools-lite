import ROOT as r
import os, re
import copy

#r.gROOT.SetBatch(True)
r.gStyle.SetPaintTextFormat('4.1f')

class binning:
    def __init__(self, mi, ma, w):
        self._min = mi
        self._max = ma
        self.w  = w
        self.n  = abs(ma-mi)/w


class Scan:
    def __init__(self,name):
        if name == 'slepton':
            self.xbins = binning(100,2100,1)
            self.ybins = binning(0,2100,1)
        else: raise RuntimeError('wrong scan name')

cardRegex = "slepton_.*_m1_(?P<m1>.*)_m2_(?P<m2>.*).card.txt"
scanName  = "slepton"
cardDirectory="jan06"
outputDirectory="scan_slepton_jan06"

pattern = "higgsCombine%s_(?P<m1>.*)_(?P<m2>.*).AsymptoticLimits.mH120.root"%scanName
pattern = re.compile( pattern )

limits = {} 

scan = Scan(scanName) 
ex_obs = r.TH2F('ex_obs', '',
                scan.xbins.n+1, scan.xbins._min-scan.xbins.w/2.,
                scan.xbins._max+scan.xbins.w/2., scan.ybins.n+1,
                scan.ybins._min-scan.ybins.w/2.,
                scan.ybins._max+scan.ybins.w/2.)
for point in os.listdir(outputDirectory):
    match = pattern.search( point ) 
    if not match: continue
    m1,m2 = (match.group('m1'), match.group('m2'))
    fil = r.TFile.Open( outputDirectory + '/' + point ) 
    lim = fil.Get('limit')
    if not lim: 
        print 'Warning, no limit object, fit has crashed for point %s %s!'%(m1, m2)
        continue
    for ev in lim:
        if 0.49 < ev.quantileExpected < 0.51:
            binx, biny = ex_obs.GetXaxis().FindBin( float(m1)), ex_obs.GetYaxis().FindBin( float(m2))
            thebin = ex_obs.GetBin(binx, biny)
            print "Bin is", binx, biny, thebin
            if ex_obs.GetBinContent( thebin ):
                raise RuntimeError("Filling bin (%s,%s) twice. Change scan binning"%(m1,m2))
            print "Filling", m1,m2
            ex_obs    .Fill(float(m1), float(m2), ev.limit)
            
ex_obs.GetZaxis().SetRangeUser(0,10)
gr2d = r.TGraph2D(ex_obs)
xbinsize = 12.5; ybinsize = 12.5
gr2d.SetNpx( int((gr2d.GetXmax() - gr2d.GetXmin())/xbinsize) )
gr2d.SetNpy( int((gr2d.GetYmax() - gr2d.GetYmin())/ybinsize) )
tmp_2d_histo = gr2d.GetHistogram()
tmp_graph_list = gr2d.GetContourList(1.0)
tmp_graph = tmp_graph_list[max( (i.GetN(),j) for j,i in enumerate( tmp_graph_list )  )[1]]
h_smoothed = tmp_2d_histo.Clone('smoothedGraph')
smoothedbins = []
for i in range(h_smoothed.GetNbinsX()+1):
    for j in range(h_smoothed.GetNbinsY()+1):
        if j > 0 and not h_smoothed.GetBinContent(i,j):
            h_smoothed.SetBinContent(i,j,h_smoothed.GetBinContent(i-1,j))
            smoothedbins.append((i,j))
            break
h_smoothed.Smooth(1, 'k3a')
for i,j in smoothedbins:
    h_smoothed.SetBinContent(i,j,0.)


smcopy = copy.deepcopy(h_smoothed)
smoothed_2dg = r.TGraph2D(smcopy)
xbinsize = 5.; ybinsize = 5.
smoothed_2dg.SetNpx( int((smoothed_2dg.GetXmax() - smoothed_2dg.GetXmin())/xbinsize) )
smoothed_2dg.SetNpy( int((smoothed_2dg.GetYmax() - smoothed_2dg.GetYmin())/ybinsize) )
brunosucksballs = smoothed_2dg.GetHistogram() ## have to call this, otherwise root will freak out                                
c = smoothed_2dg.GetContourList(1.0)
smoothed_g   = c[max( (i.GetN(),j) for j,i in enumerate( c )  )[1]]
smoothed_2dg.GetZaxis().SetRangeUser(0,10)
c = r.TCanvas()
outfile = r.TFile.Open('%s.root'%scanName,'recreate')
smoothed_g.SetName("expected_nom")
smoothed_g.Write()
ex_obs.SetName("xsec")
ex_obs.Write()
outfile.Close()
smoothed_2dg.Draw('colz')
raw_input('')



    

