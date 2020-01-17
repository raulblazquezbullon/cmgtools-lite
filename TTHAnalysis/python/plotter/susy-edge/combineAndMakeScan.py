import os, re
cardRegex = "slepton.*_m1_(?P<m1>.*)_m2_(?P<m2>.*).card.txt"
scanName  = "slepton"
cardDirectory="jan11"
outputDirectory="scan_slepton_jan11"

os.system('mkdir -p ' + outputDirectory ) 
def runIt(command, debug=True, batch=True):
    if batch: 
        command = 'sbatch -p  batch --wrap "%s"'%command
    if debug: 
        print command
        return
    os.system(command)
        


cards = {}
pattern = re.compile( cardRegex ) 
for card in os.listdir(cardDirectory + '/'): 
    match = pattern.search( card )
    if not match: continue
    point = (match.group('m1'), match.group('m2'))
    if point in cards: 
        cards[point].append( cardDirectory + '/' + card ) 
    else: 
        cards[point] = [cardDirectory + '/' + card]
nsrs = -1
for point in cards: 
    m1 = point[0]
    m2 = point[1]
    if nsrs < 0: 
        nsrs = len(cards[point])
    if nsrs != len(cards[point]):
        raise RuntimeError("Number of cards for point (%s,%s) is different"%(point[0],point[1]))
    name = "%s_%s_%s"%(scanName, m1,m2)
    command = 'combineCards.py  ' + " ".join( cards[point] ) + ' > %s/%s.dat; '%(outputDirectory,name)
    command+= 'combine -M AsymptoticLimits --name {name} {dir}/{name}.dat;'.format(name=name, dir=outputDirectory)
    command+= 'mv higgsCombine{name}.AsymptoticLimits.mH120.root {dir}/'.format(name=name, dir=outputDirectory)
    runIt( command ) 
    

    
