#!/bin/sh
cat $1 | grep -i "^Nicolas\tBauer" | grep -oE "[0-9]*-[0-9]*-[0-9]*|[()0-9]*[0-9]*-[0-9]*"
