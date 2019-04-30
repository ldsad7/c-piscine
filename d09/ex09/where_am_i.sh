#!/bin/sh
LINES=$(ifconfig | grep -cs "inet ")

if [[ $LINES > 0 ]]
then
	ifconfig | grep "inet " | grep -v "127.0.0.1" | cut -d\  -f2
else
	echo "I am lost!"
fi
