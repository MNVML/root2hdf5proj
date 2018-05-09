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
if [[ $DATA == "mc" ]]; then
    FILEBASENAME="wholevtimgs"
else 
    FILEBASENAME="mnvimgs"
fi

SAMPLE="me1A${DATA}"

PROCESSING="201805"   # NX whole evt id
BASEDIR="/minerva/data/users/perdue/mlmpr/hdf5_direct/${PROCESSING}/${SAMPLE}"
INPFILELIST="/minerva/app/users/perdue/root2hdf5proj/data/evtid_${PROCESSING}_minerva_${SAMPLE}.txt"

WCUTSTRING="-l -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_lowW_cut1000MeV

WCUTSTRING="-h -w 1000.0"
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}_highW_cut1000MeV

WCUTSTRING=""
FILEPATH=$BASEDIR/${FILEBASENAME}_127x94_${SAMPLE}


FILEPATH=${FILEPATH}"_tiny" 
MAXEVENTS=""
MAXEVENTS="-m 1000"

ARGS="$WCUTSTRING -f $FILEPATH -z 100000000.0 $DATAFLAG -n $INPFILELIST $MAXEVENTS"

# gdb -tui --args ./skimmer_root2hdf5_nueccqe \
cat << EOF
time nice ./skimmer_root2hdf5_nueccqe $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt
EOF
mkdir -p $BASEDIR
# gdb -tui --args ./skimmer_root2hdf5_nueccqe \
time nice ./skimmer_root2hdf5_nueccqe $ARGS 2>&1 | tee ${STARTTIME}_out_log.txt
