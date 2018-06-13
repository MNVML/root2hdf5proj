#!/bin/bash

STARTTIME=`date +%s`

# m -> max events considered
# z -> max reco z
# f -> filebasename
# e -> first event number (default is 0)
# d -> is data
# n -> ntuple file list name
# p -> print frequency

DATA="data"
DATA="mc"
DATAFLAG="--${DATA}"

FILEBASENAME="mnv"
THRESHOLDS=""
if [[ $DATA == "mc" ]]; then
    FILEBASENAME="wholevtimgs"
    THRESHOLDS="--train-threshold 0.88 --valid-test-threshold 0.94"
else 
    FILEBASENAME="mnvimgs"
    THRESHOLDS="--train-threshold 0.0 --valid-test-threshold 0.0"
fi

SAMPLE="me1A${DATA}"

PROCESSING="201806"   # NX whole evt id
KEY="1613670"  # crashes
KEY="1613671"
KEY="0000001"
BASEDIR="/minerva/data/users/perdue/mlmpr/hdf5_direct/${PROCESSING}/${SAMPLE}"
INPFILELIST="/minerva/app/users/perdue/root2hdf5proj/data/evtid_${PROCESSING}_minerva_${SAMPLE}${KEY}.txt"

WCUTSTRING="-l -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_lowW_cut1000MeV

WCUTSTRING="-h -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_highW_cut1000MeV

WCUTSTRING=""
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}${KEY}


# FILEPATH=${FILEPATH}"_tiny" 
MAXEVENTS="-m 1000"
MAXEVENTS=""

PRINTFREQ=""
PRINTFREQ="-p 1"

ARGS="$WCUTSTRING -f $FILEPATH -z 100000000.0 $DATAFLAG -n $INPFILELIST $MAXEVENTS $PRINTFREQ $THRESHOLDS"

EXE="./skimsplit_root2hdf5_wholevt"

cat << EOF
time nice $EXE $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt
EOF
mkdir -p $BASEDIR

# gdb -tui --args $EXE $ARGS
time nice $EXE $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt
# valgrind --suppressions=$ROOTSYS/etc/valgrind-root.supp $EXE $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt
