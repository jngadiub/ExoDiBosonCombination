#!/bin/bash
RARRAYPOS=`expr $1 - 1`
MASSPOINT=2100
ASYMPTOTICVALUE=81.7777
CARDNAME=binaryDatacard.root
CHANNEL=FULL

echo Argument 1 is ${RARRAYPOS} # CRAB jobs start from 1, python arrays start from 0
echo Argument 2 is ${MASSPOINT}
python run_fullCLs_TF.py ${RARRAYPOS} ${MASSPOINT} ${ASYMPTOTICVALUE} ${CARDNAME} ${CHANNEL}
echo; echo '----';
ls -lh;
echo '----';
source ./*src