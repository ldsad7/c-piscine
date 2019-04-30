#!/bin/sh
cat /etc/passwd | grep '^[^#]' | awk 'NR % 2 == 1' | sed 's/:.*//' | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | sed -e :a -e '$!N; s/\n/, /; ta' | sed 's/$/./'
