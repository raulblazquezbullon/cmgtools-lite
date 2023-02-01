''' 
This script iterates over txt files in a datapath 
and combines them into a single datacard that can be
fed to combine.
'''

import re,sys,os
import argparse

def add_parsing_options():
  parser = argparse.ArgumentParser()
  parser.add_argument('--inpath', '-i', dest = "inpath", default = ".",
                       help = "Input path where the cards are stored.")
  parser.add_argument('--outpath', '-o', dest = "outpath", default = "fits",
                       help = "Folder where to store the combined card")
  parser.add_argument('--match', dest = "match", default = "(.*)", 
                       help = "Combine cards matching by regexps.")
  parser.add_argument('--pretend', dest = "pretend", action="store_true", default = False, 
                       help = "Submit commands rather than just printing them.")
  return parser.parse_args()

if __name__ == "__main__":
  # Unpack main options
  options  = add_parsing_options()
  path     = options.inpath
  outpath  = options.outpath
  match    = options.match
  pretend  = options.pretend # To be changed 
  main_cmd = "cd %s; combineCards.py "%outpath
  if pretend: print(" >> Running on pretend --> no card will be written")
  print(" >> Merging cards from %s"%path) 
  if match != "(.*)": print(" >> Matching to regexp: %s "%match)
  cards = [txt for txt in os.listdir(path) if "txt" in txt]
  for card in cards:
    try: 
      keyname = re.match(match ,card.replace(".txt", "")).groups()[0]
    except AttributeError:
      continue
    print("   - Adding card %s/%s"%(path, card))
    print("      - New name %s"%(keyname))
    main_cmd += " %s=%s/%s "%(keyname, path, card)
  main_cmd += " > combinedCard.dat; cd -"
  print(main_cmd) if pretend else os.system(main_cmd)
  if pretend: print(" >> File written in %s/combinedCard.dat"%(outpath))
	
