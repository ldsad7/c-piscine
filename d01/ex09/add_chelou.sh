#!/bin/sh
echo "\'\n\\\\\\\\\\\\\\\\\n\\\"\n\?\n\!" > fileA1 
echo 'm\nr\nd\no\nc' > fileA2
echo '0\n1\n2\n3\n4' > fileB1
echo '0\n1\n2\n3\n4\n5\n6\n7\n8\n9\nA\nB\nC' > fileA3
echo 'g\nt\na\ni\no\n\ \nl\nu\nS\nn\ne\nm\nf' > fileB2
echo "$FT_NBR1" > file1
echo "$FT_NBR2" > file2
paste fileA1 fileB1 | while read n k; do sed -i.bu "s/$n/$k/g" file1; done
paste fileA2 fileB1 | while read n k; do sed -i.bu "s/$n/$k/g" file2; done
x=$(< file1)
y=$(< file2)
echo "obase=13;ibase=5;$x+$y" | bc > result
paste fileA3 fileB2 | while read n k; do sed -i.bu "s/$n/$k/g" result; done
echo $(< result)
rm result* file*
