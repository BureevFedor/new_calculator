#!/bin/bash

tests = "test_sum_1 test_sum_2"
echo $tests

for test in $tests; do
	echo $test
	./calc <tests/$test.in >$test.res
	cat $test.res
	diff tests/$test.out $test.res
done
