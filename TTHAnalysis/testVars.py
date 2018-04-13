import os
from multiprocessing import Pool

base = "grep -r [VARNAME] >> [OUTFILE].txt"
inFile = open("/pool/ciencias/userstorage/carlosec/ECO2017MC/varBranches.txt","read")

commands = []
commands2 = []

for line in inFile.readlines():
    words = line.split(' ')
    if not words[0] == "*Br": continue
    words = [w for w in words if not (w=='')]
    var = words[2][1:]
    print var
    commands.append(base.replace("[VARNAME]",var).replace("[OUTFILE]",var))
    if "_" in var:
      oldvar = var
      var =  var.split("_")[-1]
      if len(var) > 3:
        commands2.append(base.replace("[VARNAME]",var).replace("[OUTFILE]",oldvar))              
      

print commands

def execute(com):
  print "Executing... " + com.split(" ")[-1]
  os.system(com)

pool = Pool(64)
retlist1 = pool.map(execute, commands)
pool.close()
pool.join()
