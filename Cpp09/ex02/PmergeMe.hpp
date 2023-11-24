#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <list>
#include <cstdlib>
#include <ctime>

bool isNumber(const char* str);
std::vector<int> parseInput(int argc, char **argv);
std::vector<int> pmergeVector(std::vector<int> input);


std::list<int> parseInputForList(int argc, char **argv);
std::list<int> mergeList(std::list<int> left, std::list<int> right);
std::list<int> pmergeList(std::list<int> input);


#endif