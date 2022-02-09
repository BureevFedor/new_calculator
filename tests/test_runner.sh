#!/bin/bash

tests_names="test_sum_1"
echo $tests_names

for test in $tests_names; do
	echo $test
	./calc <tests/$test.in >$test.res
	cat $test.res
	diff tests/$test.out $test.res
done
