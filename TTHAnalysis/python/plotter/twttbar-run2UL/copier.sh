# This script makes a copy of the full content of ../../PROCESS_temp into ~/Storage/PROCESS/MiniTrees/YYYY_MM_DD
#
#

lowerbar="_"
slash="/"

indstr="index.php"
indexpath="/nfs/fanae/user/vrbouza/www/public/index.php"

savepath=""
storagepath="/pool/phedexrw/userstorage/vrbouza/proyectos/twttbar_run2/results"
webpath="/nfs/fanae/user/vrbouza/www/public/Proyectos/twttbar_run2/results/"


if [ "$1" == "w" ] || [ "$1" == "web" ]; then
  echo "===> Copying results to the web!"
  echo " "

  if [ "$2" != "" ]; then
    savefolder=$2
  else
    echo "FATAL: no provided savefolder"
    return
  fi

  savepath=$webpath$slash
  echo "Results will be copied into..."
  echo $savepath

  echo " "
  echo "Creating folder (if it does not exist)..."
  mkdir -p $savepath


  echo " "
  echo "Copying results..."
  rsync -arvzP "./temp/"$savefolder $savepath
  echo "Copying index.php to all subfolders..."
  find $savepath -type d -exec cp $indexpath {} \;
  echo " "
  echo "Done!"
  return
# elif [ "$1" == "r" ] || [ "$1" == "results" ]; then
#   echo "===> Copying results to the userstorage!"
#   echo " "
#
#   if [ "$2" != "" ]; then
#     savefolder=$2
#   else
#     d=$(date +%d)
#     m=$(date +%m)
#     y=$(date +%Y)
#     savefolder=$y$lowerbar$m$lowerbar$d
#   fi
#
#   savepath=$storagepath$slash$savefolder
#   echo "Results will be copied into..."
#   echo $savepath
#
#   echo " "
#   echo "Creating folder (if it does not exist)..."
#   mkdir -p $savepath
#
#   echo " "
#   echo "Copying results..."
#   savepath=$savepath$slash
#   rsync -arvzP $sourcepath $savepath
#
#   echo " "
#   echo "Done!"
#   return
fi

