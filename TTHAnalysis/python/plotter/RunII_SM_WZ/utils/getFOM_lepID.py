import ROOT
import sys

tf = ROOT.TFile(sys.argv[1],"READ")
hsig = tf.Get(sys.argv[2])
nBkg = 0.5
scale = 137.2/35.9
hbkg = [tf.Get(i) for i in sys.argv[4:]]
htot = tf.Get(sys.argv[3])

bins = ["eee-","eem-","mme-","mmm-","eee+","eem+","mme+","mmm+"]

tot = htot.Integral()*scale
totsig = hsig.Integral()*scale
totbkg = sum([h.Integral()*scale for h in hbkg])
totplus =htot.Integral(1,4)*scale
totminus=htot.Integral(5,8)*scale
print "Total signal: %1.2f, Total Background: %1.2f, Syst bkg: %1.3f, Stat: %1.3f, Asymm Stat: %1.3f, Quad: %1.3f"%(totsig, totbkg, 100*nBkg*totbkg/totsig, 100*(tot)**0.5/totsig, 100*(1/totplus + 1/totminus)**0.5,100*((nBkg*totbkg/totsig)**2+((tot)**0.5/totsig)**2)**0.5)

## eee Only
tot = (htot.Integral(1,1)+htot.Integral(5,5))*scale
totsig = (hsig.Integral(1,1)+hsig.Integral(5,5))*scale
totbkg = sum([(h.Integral(1,1)+h.Integral(5,5))*scale for h in hbkg])
totplus =htot.Integral(1,1)*scale
totminus=htot.Integral(5,5)*scale
print "eee signal: %1.2f, eee Background: %1.2f, Syst bkg: %1.3f, Stat: %1.3f, Asymm Stat: %1.3f, Quad: %1.3f"%(totsig, totbkg, 100*nBkg*totbkg/totsig, 100*(tot)**0.5/totsig, 100*(1/totplus + 1/totminus)**0.5,100*((nBkg*totbkg/totsig)**2+((tot)**0.5/totsig)**2)**0.5)

## eee Only
tot = (htot.Integral(2,2)+htot.Integral(6,6))*scale
totsig = (hsig.Integral(2,2)+hsig.Integral(6,6))*scale
totbkg = sum([(h.Integral(2,2)+h.Integral(6,6))*scale for h in hbkg])
totplus =htot.Integral(2,2)*scale
totminus=htot.Integral(6,6)*scale
print "eem signal: %1.2f, eem Background: %1.2f, Syst bkg: %1.3f, Stat: %1.3f, Asymm Stat: %1.3f, Quad: %1.3f"%(totsig, totbkg, 100*nBkg*totbkg/totsig, 100*(tot)**0.5/totsig, 100*(1/totplus + 1/totminus)**0.5,100*((nBkg*totbkg/totsig)**2+((tot)**0.5/totsig)**2)**0.5)

## mme Only
tot = (htot.Integral(3,3)+htot.Integral(7,7))*scale
totsig = (hsig.Integral(3,3)+hsig.Integral(7,7))*scale
totbkg = sum([(h.Integral(3,3)+h.Integral(7,7))*scale for h in hbkg])
totplus =htot.Integral(3,3)*scale
totminus=htot.Integral(7,7)*scale
print "mme signal: %1.2f, mme Background: %1.2f, Syst bkg: %1.3f, Stat: %1.3f, Asymm Stat: %1.3f, Quad: %1.3f"%(totsig, totbkg, 100*nBkg*totbkg/totsig, 100*(tot)**0.5/totsig, 100*(1/totplus + 1/totminus)**0.5,100*((nBkg*totbkg/totsig)**2+((tot)**0.5/totsig)**2)**0.5)


## mme Only
tot = (htot.Integral(4,4)+htot.Integral(8,8))*scale
totsig = (hsig.Integral(4,4)+hsig.Integral(8,8))*scale
totbkg = sum([(h.Integral(4,4)+h.Integral(8,8))*scale for h in hbkg])
totplus =htot.Integral(4,4)*scale
totminus=htot.Integral(8,8)*scale
print "mmm signal: %1.2f, mmm Background: %1.2f, Syst bkg: %1.3f, Stat: %1.3f, Asymm Stat: %1.3f, Quad: %1.3f"%(totsig, totbkg, 100*nBkg*totbkg/totsig, 100*(tot)**0.5/totsig, 100*(1/totplus + 1/totminus)**0.5,100*((nBkg*totbkg/totsig)**2+((tot)**0.5/totsig)**2)**0.5)


