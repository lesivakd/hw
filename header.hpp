//
// Created by Лебедева Екатерина
//
#include <fstream>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <map>
#ifndef TESTFORHW_HEADER_HPP
#define TESTFORHW_HEADER_HPP
struct Input {
    std::string lw;
    std::map<int, std::vector<std::string>> w;
};
struct Re {
    std::string lw;
    std::vector<std::string> w;
};
std::vector<std::string> split(const std::string& str);
std::vector<std::string> uniqueWords(const std::string& fn);
std::vector <Input> sor(std::string &text1);
std::string loadFromFile();
void save(std::vector<Input> &test);
std::vector<Re> FromFile();
#endif //TESTFORHW_HEADER_HPP
