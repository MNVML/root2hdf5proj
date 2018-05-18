#!/bin/bash

BASE="/pnfs/minerva/persistent/users/perdue"

SAMPLE="me1Amc"
OUTNAME="evtid_201805_minerva_${SAMPLE}.txt"
MBASE="${BASE}/mnv--mc20180510/grid/central_value/minerva/ana/v21r1p1/"
tree -fi $MBASE | grep ".root" > $OUTNAME

# me1A nukecc data w/ 127x94 lattice and time lattice
# DATE="29April2017"
# RUNRANGE="minervame1Adata"
# OUTNAME="nukecc_${DATE}_${RUNRANGE}.txt"
# MBASE="/pnfs/minerva/persistent/users/wospakrk/data_minervame1A_29April2017/grid/minerva/ana/numibeam/"
# tree -fi $MBASE/v10r8p9/ | grep ".root" > $OUTNAME
# python randomize_rest_of_file.py $OUTNAME
