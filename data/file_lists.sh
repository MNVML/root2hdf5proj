#!/bin/bash
FILES=`ls -1 nukecc*.txt`

for file in $FILES
do
    echo $file
    wc -l $file
    echo " "
done
