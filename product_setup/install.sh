#!/bin/bash

DBGPROF="prof"
DBGPROF="debug"

products='
build_base-v6_3_0
hep_hpc_toolkit-v00_05_00
'

for prod in $products
do
    bash pullProducts `pwd` slf6 $prod e14 prof
done

packages='
root-v6_10_04d
xrootd-v4_5_0c
tbb-v2017_7
'

for pack in $packages
do
    bash pullPackage `pwd` slf6 $pack e14 $DBGPROF
done

packages='
fftw-v3_3_6_pl2
libxml2-v2_9_4b
'

for pack in $packages
do
    bash pullPackage `pwd` slf6 $pack $DBGPROF
done

bash pullPackage `pwd` slf6 protobuf-v3_3_1 e14
bash pullPackage `pwd` slf6 tensorflow-v1_3_0a e14-p2713d prof
