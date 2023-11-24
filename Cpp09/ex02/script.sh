#!/bin/bash

numbers=$(awk 'BEGIN {srand(); for (i=1; i<=100; i++) print int(10000 * rand()) + 1}')

 ./PmergeMe $numbers