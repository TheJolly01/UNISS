#!/bin/bash
FILES=TMP1/*.txt
for f in $FILES
do
	echo "PROCESSING $f FILE..."
	#count number of lines and output that for file $f
	echo -n "count of lines "
	wc -l $f
done
