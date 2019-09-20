# Restructure everything in a single streering script
# Code by pietro.vischia@cern.ch

# First restructure the unfoldInput script 
python wzsm/doUnfoldInput.py | sh

# Then restructure the variedResponses script
python wzsm/doVariedResponses.py | sh


# Then the call to runUnfold and unfold.py 
python wzsm/runUnfold.py -n 1
