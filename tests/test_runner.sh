#!/bin/bash

tests = `ls *.in`
echo $tests

for test in $tests; do
	echo $test
done