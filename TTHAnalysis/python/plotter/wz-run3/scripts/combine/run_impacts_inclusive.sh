# Scripts to run impacts in the wz analysis
inpath=$1
outpath=$2

wsname=wz-ws
echo ===================
echo Combining cards 
echo ===================
if [[ ! -d $outpath ]]; then mkdir $outpath; fi
# Get the script to combine the cards
python fancyCombineCards.py --inpath $inpath --outpath $outpath --pretend 


echo ===================
echo Creating workspace
echo ===================
# Now generate the workspace
python createWorkspace.py --pretend --cardname combinedCard --workspace $wsname --rmin 0 --rmax 6 --processes prompt_WZ --processes prompt_ZZ --outpath $outpath


echo ===================
echo Running impacts 
echo ===================
python runImpacts.py --workspace $wsname --POIs r_prompt_WZ --POIs r_prompt_ZZ --signalPOI r_prompt_WZ --ncores 12 --outpath $outpath
