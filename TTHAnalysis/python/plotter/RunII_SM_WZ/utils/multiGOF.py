import os
import sys


card   = sys.argv[1]
points = int(sys.argv[3])
jobs   = int(sys.argv[2])

pointsperjob = points/jobs

commands = ["combine -M GoodnessOfFit --algo saturated %s -t %i -s %i -m %i"%(card, pointsperjob, i, i) for i in range(jobs)]

def execute(command):
  os.system(command)

from multiprocessing import Pool
from contextlib import closing
import time


with closing(Pool(jobs)) as p:
        print "Now running " + str(len(commands)) + " commands using: " + str(jobs) + " processes. Please wait"
        retlist1 = p.map_async(execute, commands, 1)
        while not retlist1.ready():
                print("Runs left: {}".format(retlist1._number_left ))
                time.sleep(1)
        retlist1 = retlist1.get()
        p.close()
        p.join()
        p.terminate()
