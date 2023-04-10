import os, re
import argparse

# This Workspace script only works for producing workspaces with the multiSignalModel!!!!
def add_parsing_options():
    parser = argparse.ArgumentParser()
    parser.add_argument('--cardname', dest = "card")
    parser.add_argument('--workspace', dest = "WS")
    parser.add_argument('--rmin', dest = "rmin")
    parser.add_argument('--rmax', dest = "rmax")
    parser.add_argument('--processes', action = "append",dest = "processes") 

    return parser.parse_args()

def get_maps(processes, rmin, rmax):
	maps = []
	main_text = " 'map=.*/%s.*:%s[1,%d,%d]' "  
	for p in processes:
		r_name = re.sub(r'[^WZH]', lambda matchobj: matchobj.group(0).lower(), p)
		maps.append(main_text%(p, "r_%s"%r_name, rmin, rmax))
	return maps

if __name__ == "__main__":
	options = add_parsing_options()
	cardname = options.card
	workspace = options.WS
	processes = options.processes
	rmin = float(options.rmin)
	rmax = float(options.rmax)
	maps = get_maps(processes, rmin, rmax)
	cmd = "text2workspace.py %s -o %s -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO %s"%(cardname, workspace, "--PO".join(maps))
	print(cmd)
	

