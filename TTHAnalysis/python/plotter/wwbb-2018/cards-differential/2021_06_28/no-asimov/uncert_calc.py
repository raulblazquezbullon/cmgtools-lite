import ROOT as r
from copy import deepcopy

#### Numerator

signal = r.TFile.Open("cuts-wwbb-signal-all-noasimov-2j2t.root","READ")

print('')
print('>>> Inicial:')
data = deepcopy(signal.Get("x_data_obs").Clone('data'))
print('Data     = ' , data.GetEntries())
wwbb = signal.Get("x_wwbb")
print('WWbb     = ' , wwbb.GetEntries())
#,max(0., min("x_wwbb", 99.))
dy = signal.Get("x_dy")
print('DY       = ' , dy.GetEntries())
nonworz = signal.Get("x_nonworz")
print('nonworz  = ' , nonworz.GetEntries())
vvttv = signal.Get("x_vvttv")
print('vvttv    = ' , vvttv.GetEntries())
print('')

#print data.GetEntries() - wwbb.GetEntries() - dy.GetEntries() - nonworz.GetEntries() - vvttv.GetEntries()

#data.Add(wwbb   , -1 )
data.Add(dy   , -1 )
data.Add(nonworz   , -1 )
data.Add(vvttv   , -1 )

print('>>> Tras haber restado histogramas:')
print('Data             = ' , data.GetEntries())
bincontent = data.GetBinContent(1)
bincontentwwbb = wwbb.GetBinContent(1)
print('Data bin content = ' ,bincontent)
print('WWbb bin content = ' ,bincontentwwbb)
#print(data.GetEntries())
num_unc = data.GetBinError(1)
print('Num. uncert.     = ', num_unc)

print('')
print('------------------')
print('')


#### Efficiency

# Signal + fiducial

sigfid = r.TFile.Open("cuts-wwbb-sigfid-2j2t.root","READ")

datasigfid = deepcopy(sigfid.Get("x_data_obs").Clone('datasigfid'))
print('Data (sig. + fid.)             = ' , datasigfid.GetEntries())
wwbbsigfid = deepcopy(sigfid.Get("x_wwbb").Clone('wwbbsigfid'))
print('WWbb (sig. + fid.)             = ' , wwbbsigfid.GetEntries())

bincontentsigfid = datasigfid.GetBinContent(1)
print('Data bin content (sig. + fid.) = ' ,bincontentsigfid)
bincontentsigfidwwbb = wwbbsigfid.GetBinContent(1)
print('WWbb bin content (sig. + fid.) = ' ,bincontentsigfidwwbb)
sigfid_unc = datasigfid.GetBinError(1)
print('Sigfid. uncert.                = ', sigfid_unc)

print('')
print('------------------')
print('')

# Fiducial

fiducial = r.TFile.Open("cuts-wwbb-particle-fiducial-2j2t.root","READ")

datafid = deepcopy(fiducial.Get("x_data_obs").Clone('datafid'))
print('Data (fiducial)             = ' , datafid.GetEntries())

bincontentfid = datafid.GetBinContent(1)
print('Data bin content (fiducial) = ' ,bincontentfid)
fiducial_unc = datafid.GetBinError(1)
print('Fiducial uncert.            = ', fiducial_unc)

print('')
print('------------------')
print('')


#### Xsec calculations

L = 59740
K = 1.0695
BR = 2*(2*0.11**2 + 4*0.11*0.11*0.17)
sigmawwbb = 52.54160211872024
Nwwbb = sigmawwbb*L*K
xsec = bincontent/(L*bincontentsigfid/Nwwbb)
xsecBR = xsec/BR
xsec_asimov = (wwbb.GetBinContent(1))/(L*bincontentsigfid/Nwwbb)
xsecBR_asimov = xsec_asimov/BR

print('xsec                 = ', xsec)
print('xsec (BR)            = ', xsecBR)
print('')
print('xsec (asimov)        = ', xsec_asimov)
print('xsec (BR) (asimov)   = ', xsecBR_asimov)


out = r.TFile.Open("/nfs/fanae/user/sheylaag/TFG/desarrollo/cms/CMSSW_10_4_0/src/CMGTools/TTHAnalysis/python/plotter/wwbb-2018/cards-differential/2021_06_28" + "/calculations.root", "recreate")
new_data = deepcopy(data)
new_data.Write()
new_wwbb = deepcopy(wwbb)
new_wwbb.Write()
new_dy = deepcopy(dy)
new_dy.Write()
new_nonworz = deepcopy(nonworz)
new_nonworz.Write()
new_vvttv = deepcopy(vvttv)
new_vvttv.Write()
out.Close()

signal.Close()
