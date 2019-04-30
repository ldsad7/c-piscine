#!/bin/sh
ldapsearch -Q | grep '^sn:.*bon.*' | wc -l | sed 's/ //g'
