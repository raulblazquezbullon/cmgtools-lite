### Script to replicate folders in /pool/phedex in 
### the web.

plotspath="/pool/phedex/userstorage/cvico/ttw-diff/plots/"
infolder=$plotspath$1
addlogsummary=$2

if [[ ! -d $infolder ]]; then 
  echo "Directory $infolder does not exist!!"
  echo "Please provide an input directory starting from $plotspath" && exit 0
fi
outfolder="$HOME/www/private/ttw-diff/$1"

if [[ ! -d $outfolder ]]; then echo "$outfolder does not exist. Creating a new one" && `mkdir -p $outfolder`; fi

### Now copy from the input path

logfilename="log.txt"
echo "Executed on: " `date` >> $logfilename
echo "Copying all PDF, PNG and txt" >> $logfilename
echo " >> from: $infolder" >> $logfilename
echo " >> to:   $outfolder" >> $logfilename

filespdf=$(ls $infolder/*pdf)
filestxt=$(ls $infolder/*txt)
filespng=$(ls $infolder/*png)

cp index.php $outfolder"/"
cp $filespdf $outfolder"/"
cp $filespng $outfolder"/"
cp $filestxt $outfolder"/"

if [[ ! -z $addlogsummary ]]; then 
  if [[ $addlogsummary != "verbose" ]]; then 
    echo "$unknown option $addlogsummary"
    exit 1
  else
    logslurm=$(ls $infolder/logs/*err)
    echo "Adding report from slurm log files in $infolder/logs." >> $logfilename 
    for fil in $logslurm; do
      echo "log-error file $fil:" >> $logfilename
      cat $fil >> $logfilename  
      echo "----" >> $logfilename
    done
  fi
fi

mv $logfilename $outfolder"/"


