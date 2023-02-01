''' 
This script creates the combine workspace 
'''
import os, re
import argparse

# This Workspace script only works for producing workspaces with the multiSignalModel!!!!
def add_parsing_options():
  parser = argparse.ArgumentParser()
  parser.add_argument('--outpath', dest = "outpath")
  parser.add_argument('--cardname', dest = "card")
  parser.add_argument('--workspace', dest = "ws")
  parser.add_argument('--rmin', dest = "rmin")
  parser.add_argument('--rmax', dest = "rmax")
  parser.add_argument('--processes', action = "append",dest = "processes") 
  parser.add_argument('--pretend', dest = "pretend", action="store_true", default = False, 
                       help = "Submit commands rather than just printing them.")
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
  outpath = options.outpath 
  cardname = options.card
  workspace = options.ws
  processes = options.processes
  rmin = float(options.rmin)
  rmax = float(options.rmax)
  pretend = options.pretend
  maps = get_maps(processes, rmin, rmax)
  print(" >> Writing workspace in: %s"%outpath)
  cmd = "cd %s; text2workspace.py %s -o %s -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO %s; cd -"%(outpath, cardname, workspace, "--PO".join(maps))
  print(cmd) if pretend else os.system(cmd)
  if not pretend: print(" >> Workspace written")
	

