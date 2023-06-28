# Folder for separate studies in WZ analysis

## How to create a luminosity table
You need to specify the json to be used in the `create_lumijsons.sh` script beforehand.
Then execute:
  * `./create_lumijsons.sh` (This will call buildJSONFromNano and create the jsonfiles)
  * `./compute_lumi.sh jsonfiles` (Need to have brilcalc available on the system.)
  * `python make_table_lumi.py jsonfiles` (This will create the table with a simple format).

## How to plot variation templates from a card
You need to execute:
  * `python plot_variations.py`

This should work without any problem with default options. If you want to change anything,
then execute `python plot_variations.py --help`.

## How to rebin any variable from the analysis 
The variable needs to be defined in the `plots_wz.txt` (or any plot file) that is used
by mcPlots.py. 

**Instructions need to be completed. Now I'm adding more features to this**

