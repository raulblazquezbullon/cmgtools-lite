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


#### Sample backgrounds

# Signal + no fiducial

signofiducial = r.TFile.Open("cuts-wwbb-detector-nofiducial-2j2t.root","READ")

wwbb_signofiduc = deepcopy(signofiducial.Get("x_wwbb").Clone('wwbb_signofiduc'))
print('WWbb (signal + no fiducial)             = ' , wwbb_signofiduc.GetEntries())

bincontentsignofid = wwbb_signofiduc.GetBinContent(1)
print('WWbb bin content (signal + no fiducial) = ' ,bincontentsignofid)
signofiducial_unc = wwbb_signofiduc.GetBinError(1)
print('Signal + no iducial uncert.            = ', signofiducial_unc)

print('')
print('------------------')
print('')


#### Xsec calculations

L = 59740
K = 1.0695
BR = 2*(2*0.11**2 + 4*0.11*0.11*0.17)
sigmawwbb = 52.54160211872024
Nwwbb = sigmawwbb*L*K
xsec = (bincontent - bincontentsignofid)/(L*bincontentsigfid/Nwwbb)
xsecBR = xsec/BR
xsec_asimov = (wwbb.GetBinContent(1) - bincontentsignofid)/(L*bincontentsigfid/Nwwbb)
xsecBR_asimov = xsec_asimov/BR

print('xsec                 = ', xsec)
print('xsec (BR)            = ', xsecBR)
print('')
print('xsec (asimov)        = ', xsec_asimov)
print('xsec (BR) (asimov)   = ', xsecBR_asimov)
print('')
print('------------------')
print('')

# Xsec uncert up

xsec_uncertup = ((bincontent + num_unc) - (bincontentsignofid + signofiducial_unc))/(L*(bincontentsigfid + sigfid_unc)/Nwwbb)
xsecBR_uncertup = xsec_uncertup/BR
xsec_asimov_uncertup = ((wwbb.GetBinContent(1) + wwbb.GetBinError(1)) - (bincontentsignofid + signofiducial_unc))/(L*(bincontentsigfid + sigfid_unc)/Nwwbb)
xsecBR_asimov_uncertup = xsec_asimov_uncertup/BR

print('xsec (uncert up)                 = ', xsec_uncertup)
print('xsec (BR) (uncert up)            = ', xsecBR_uncertup)
print('')
print('xsec (asimov) (uncert up)        = ', xsec_asimov_uncertup)
print('xsec (BR) (asimov) (uncert up)   = ', xsecBR_asimov_uncertup)
print('')
print('------------------')
print('')

print('uncert up = |xsec - xsec_uncert_up|                     = ', abs(xsec - xsec_uncertup))
print('uncert up (BR) = |xsec(BR) - xsec_uncert_up(BR)|        = ', abs(xsecBR - xsecBR_uncertup))

print('')
print('------------------')
print('')

# Xsec uncer down

xsec_uncertdown = ((bincontent - num_unc) - (bincontentsignofid - signofiducial_unc))/(L*(bincontentsigfid - sigfid_unc)/Nwwbb)
xsecBR_uncertdown = xsec_uncertdown/BR
xsec_asimov_uncertdown = ((wwbb.GetBinContent(1) - wwbb.GetBinError(1)) - (bincontentsignofid - signofiducial_unc))/(L*(bincontentsigfid - sigfid_unc)/Nwwbb)
xsecBR_asimov_uncertdown = xsec_asimov_uncertdown/BR

print('xsec (uncert down)                 = ', xsec_uncertdown)
print('xsec (BR) (uncert down)            = ', xsecBR_uncertdown)
print('')
print('xsec (asimov) (uncert down)        = ', xsec_asimov_uncertdown)
print('xsec (BR) (asimov) (uncert down)   = ', xsecBR_asimov_uncertdown)
print('')
print('------------------')
print('')

print('uncert down = |xsec - xsec_uncert_down|                     = ', abs(xsec - xsec_uncertdown))
print('uncert down (BR) = |xsec(BR) - xsec_uncert_down(BR)|        = ', abs(xsecBR - xsecBR_uncertdown))

print('')
print('------------------')
print('------------------')
print('')

final_unc = abs(xsec - xsec_uncertdown)

print('xsec     = ', "{0:.2f}".format(xsec) , '+-', "{0:.2f}".format(final_unc))

print('')
print('------------------')
print('------------------')
print('')



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
