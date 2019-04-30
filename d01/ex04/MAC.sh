#!/bin/sh
ifconfig -a link | grep ether | tr -d '\t' | tr -d ' ' | cut -c6-
