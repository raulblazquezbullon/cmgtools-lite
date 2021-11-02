import ROOT as r
from copy import deepcopy

#### Numerator

signal = r.TFile.Open("cuts-wwbb-signal-all-noasimov-2j2t.root","READ")

print ''
print '>>> Inicial:'
data = deepcopy(signal.Get("x_data_obs").Clone('data'))
print 'Data     = ' , data.GetEntries()
wwbb = signal.Get("x_wwbb")
print 'WWbb     = ' , wwbb.GetEntries()
#,max(0., min("x_wwbb", 99.))
dy = signal.Get("x_dy")
print 'DY       = ' , dy.GetEntries()
nonworz = signal.Get("x_nonworz")
print 'nonworz  = ' , nonworz.GetEntries()
vvttv = signal.Get("x_vvttv")
print 'vvttv    = ' , vvttv.GetEntries()
print ''

#print data.GetEntries() - wwbb.GetEntries() - dy.GetEntries() - nonworz.GetEntries() - vvttv.GetEntries()

#data.Add(wwbb   , -1 )
data.Add(dy   , -1 )
data.Add(nonworz   , -1 )
data.Add(vvttv   , -1 )

print '>>> Tras haber restado histogramas:'
print 'Data             = ' , data.GetEntries()
bincontent = data.GetBinContent(1)
bincontentwwbb = wwbb.GetBinContent(1)
print 'Data bin content = ' ,bincontent
print 'WWbb bin content = ' ,bincontentwwbb
#print(data.GetEntries())
num_unc = data.GetBinError(1)
print 'Num. uncert.     = ', num_unc

print ''
print '------------------'
print ''


#### Efficiency

# Signal + fiducial

sigfid = r.TFile.Open("cuts-wwbb-sigfid-2j2t.root","READ")

datasigfid = deepcopy(sigfid.Get("x_data_obs").Clone('datasigfid'))
print 'Data (sig. + fid.)             = ' , datasigfid.GetEntries()
wwbbsigfid = deepcopy(sigfid.Get("x_wwbb").Clone('wwbbsigfid'))
print 'WWbb (sig. + fid.)             = ' , wwbbsigfid.GetEntries()

bincontentsigfid = datasigfid.GetBinContent(1)
print 'Data bin content (sig. + fid.) = ' ,bincontentsigfid
bincontentsigfidwwbb = wwbbsigfid.GetBinContent(1)
print 'WWbb bin content (sig. + fid.) = ' ,bincontentsigfidwwbb
sigfid_unc = datasigfid.GetBinError(1)
print 'Sigfid. uncert.                = ', sigfid_unc

print ''
print '------------------'
print ''

# Fiducial

fiducial = r.TFile.Open("cuts-wwbb-particle-fiducial-2j2t.root","READ")

datafid = deepcopy(fiducial.Get("x_data_obs").Clone('datafid'))
print 'Data (fiducial)             = ' , datafid.GetEntries()

bincontentfid = datafid.GetBinContent(1)
print 'Data bin content (fiducial) = ' ,bincontentfid
fiducial_unc = datafid.GetBinError(1)
print 'Fiducial uncert.            = ', fiducial_unc

print ''
print '------------------'
print ''


#### Sample backgrounds

# Signal + no fiducial

signofiducial = r.TFile.Open("cuts-wwbb-detector-nofiducial-2j2t.root","READ")

wwbb_signofiduc = deepcopy(signofiducial.Get("x_wwbb").Clone('wwbb_signofiduc'))
print 'WWbb (signal + no fiducial)             = ' , wwbb_signofiduc.GetEntries()

bincontentsignofid = wwbb_signofiduc.GetBinContent(1)
print 'WWbb bin content (signal + no fiducial) = ' ,bincontentsignofid
signofiducial_unc = wwbb_signofiduc.GetBinError(1)
print 'Signal + no iducial uncert.            = ', signofiducial_unc

print ''
print '------------------'
print ''


#### Xsec calculations

L = 59740
K = 1.0695
BR = 2*(2*0.11**2 + 4*0.11*0.11*0.17)
sigmawwbb = 52.54160211872024
Nwwbb = sigmawwbb*L*K
xsec = (bincontent - (656+154+104+bincontentsignofid))/(L*bincontentsigfid/Nwwbb)
xsecBR = xsec/BR
xsec_asimov = (wwbb.GetBinContent(1) - bincontentsignofid)/(L*bincontentsigfid/Nwwbb)
xsecBR_asimov = xsec_asimov/BR

print 'xsec                 = ', xsec
print 'Nobs xsec                 = ', (bincontent - bincontentsignofid)
print 'xsec (BR)            = ', xsecBR
print 'BR           = ', BR
print 'efic           = ', bincontentsigfid/bincontentfid
print 'acep           = ', bincontentfid/Nwwbb
print 'Ndatos           = ', bincontent
print 'fondos muestra           = ', bincontentsignofid
print ''
print 'xsec (asimov)        = ', xsec_asimov
print 'Nobs xsec (asimov)        = ', (wwbb.GetBinContent(1) - bincontentsignofid)
print 'xsec (BR) (asimov)   = ', xsecBR_asimov
print ''
print '------------------'
print ''

# Xsec uncert 

xsec_uncert_nobs = ((bincontent + num_unc) - (bincontentsignofid))/(L*(bincontentsigfid)/Nwwbb)
xsec_uncert_bg   = ((bincontent) - (bincontentsignofid + signofiducial_unc))/(L*(bincontentsigfid)/Nwwbb)
xsec_uncert_eff  = ((bincontent) - (bincontentsignofid))/(L*(bincontentsigfid + sigfid_unc)/Nwwbb)

variat_xsec_nobs = abs(xsec_uncert_nobs - xsec)
variat_xsec_bg   = abs(xsec_uncert_bg - xsec)
variat_xsec_eff  = abs(xsec_uncert_eff - xsec)


# Xsec uncert BR

xsec_uncert_nobs_BR = ((bincontent + num_unc) - (bincontentsignofid))/(L*BR*(bincontentsigfid)/Nwwbb)
xsec_uncert_bg_BR   = ((bincontent) - (bincontentsignofid + signofiducial_unc))/(L*BR*(bincontentsigfid)/Nwwbb)
xsec_uncert_eff_BR  = ((bincontent) - (bincontentsignofid))/(L*BR*(bincontentsigfid + sigfid_unc)/Nwwbb)

variat_xsec_nobs_BR = abs(xsec_uncert_nobs_BR - xsecBR)
variat_xsec_bg_BR   = abs(xsec_uncert_bg_BR - xsecBR)
variat_xsec_eff_BR  = abs(xsec_uncert_eff_BR - xsecBR)


print 'variat_xsec_nobs                 = ', variat_xsec_nobs
print 'variat_xsec_bg                   = ', variat_xsec_bg
print 'variat_xsec_eff                  = ', variat_xsec_eff
print ''
print 'variat_xsec_nobs_BR              = ', variat_xsec_nobs_BR
print 'variat_xsec_bg_BR                = ', variat_xsec_bg_BR
print 'variat_xsec_eff_BR               = ', variat_xsec_eff_BR
print ''
print '------------------'
print ''

uncert    = (variat_xsec_nobs)**2 + (variat_xsec_bg)**2 + (variat_xsec_eff)**2
uncert_BR = (variat_xsec_nobs_BR)**2 + (variat_xsec_bg_BR)**2 + (variat_xsec_eff_BR)**2

print 'uncert                 = ', uncert
print 'uncert_BR              = ', uncert_BR



print ''
print '------------------'
print '------------------'
print ''

print 'xsec     = ', "{0:.2f}".format(xsec) , '+- 0.09 pb'
print 'xsec_BR  = ', "{0:.0f}".format(xsecBR) , '+- 23 pb'

print ''
print '------------------'
print '------------------'
print ''



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
