#!/bin/bash

STARTTIME=`date +%s`

# i > 0 to impose "NukeCC DIS cuts"
# m -> max events considered
# z -> max reco z
# f -> filebasename
# e -> first event number (default is 0)
# d -> is data
# n -> ntuple file list name
# p -> print frequency

DATA="mc"
DATA="data"
DATAFLAG="--${DATA}"

SEGMENTBALANCE="--class_balance"
SEGMENTBALANCE=""

TARGETSBALANCE="--targets_balance"
TARGETSBALANCE=""

FILEBASENAME="mnv"
if [[ $DATA == "mc" ]]; then
    FILEBASENAME="hadmultkineimgs"
else 
    FILEBASENAME="mnvimgs"
fi

SAMPLE="me1E${DATA}_missingfiles"
SAMPLE="me1C${DATA}_targetonly"
SAMPLE="me6A${DATA}"

PROCESSING="201710"   # Erocia+
PROCESSING="201801"   # NX
PROCESSING="201804"   # NX w/ water-target encoded
PROCESSING="201805"   # NX w/ water-target encoded antinus
BASEDIR="/minerva/data/users/perdue/mlmpr/hdf5_direct/${PROCESSING}/${SAMPLE}"
INPFILELIST="/minerva/app/users/perdue/root2hdf5proj/data/nukecc_minerva_${SAMPLE}.txt"

WCUTSTRING="-l -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_lowW_cut1000MeV

WCUTSTRING="-h -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_highW_cut1000MeV

WCUTSTRING=""
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}

if [[ $SEGMENTBALANCE != "" ]]; then
   FILEPATH=${FILEPATH}"_segments_bal" 
fi

if [[ $TARGETSBALANCE != "" ]]; then
   FILEPATH=${FILEPATH}"_targets_bal" 
fi

# FILEPATH=${FILEPATH}"_tiny" 
MAXEVENTS="-m 1000"
MAXEVENTS=""

ARGS="$WCUTSTRING -f $FILEPATH -z 100000000.0 -i 0 $DATAFLAG $SEGMENTBALANCE $TARGETSBALANCE -n $INPFILELIST $MAXEVENTS"

# gdb -tui --args ./skimmer_root2hdf5 \
cat << EOF
time nice ./skimmer_root2hdf5 $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt
EOF
mkdir -p $BASEDIR
# gdb -tui --args ./skimmer_root2hdf5 \
time nice ./skimmer_root2hdf5 $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt

