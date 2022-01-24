#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
YELlOW='\033[0;33m'
NC='\033[0m'

test_case=(
	"1"
	"1 2"
	"1 -2"
	"1 2 3"
	"2 1 3"
	"3 2 1"
	"3 1 2"
	"1 3 2"
	"2 3 1"
	"2 1 4 3 5"
	"5 4 3 2 1"
	"2 1 3 6 5 8"
)

printf "${YELlOW}Result\tTest Input\n${NC}"
for ARG in "${test_case[@]}"
do
	result=$(./push_swap $ARG | ./tester/checker_Mac $ARG)
	if [ "$result" = "OK" ]; then
		printf "${GREEN}OK${NC}"
	else
		printf "${RED}KO${NC}"
	fi
	printf "\t${ARG}\n"
done
