# coding: utf-8

# Imports
import numpy as np
import matplotlib.pyplot as plt

# Load text file
filename = "output_fits.txt"
data = np.loadtxt(filename,dtype = str)

# Redefining types and deleting duplicates
binning = np.sort(np.float32(np.unique(data[:,0])))
variables = np.unique(data[:,1])
variables_tex = [r"$m_{3\ell}$",r"$p_{\rm T}^{\rm miss}$",r"$m_{\rm WZ}$"]

uncmin = np.float32(data[:,4])
uncpos = np.float32(data[:,5])

# Colors and markers
col = ["#0000FF","#FF0000","#000000"]
mark = ["o","s"]

# First figure: negative uncertainty
fig1 = plt.figure()
for i in range(len(variables)):
	index = np.where(data[:,1] == variables[i])
	plt.plot(binning,uncmin[index],color = col[i],marker = mark[0],linestyle = "--",label = "%s" %variables_tex[i])
	
plt.xlabel("Number of bins",fontsize = "x-large")
plt.ylabel("Uncertainties",fontsize = "x-large")

plt.legend()
fig1.tight_layout()
plt.savefig("unc_vs_binning_neg.pdf")

# Second figure: positive uncertainty
fig2 = plt.figure()
for i in range(len(variables)):
	index = np.where(data[:,1] == variables[i])
	plt.plot(binning,uncpos[index],color = col[i],marker = mark[1],linestyle = "-.",label = "%s" %variables_tex[i])
	
plt.xlabel("Number of bins",fontsize = "x-large")
plt.ylabel("Uncertainties",fontsize = "x-large")

plt.legend()
fig2.tight_layout()
plt.savefig("unc_vs_binning_pos.pdf")
