//
// Created by Аня Лесива on 09/01/2021.
//
#include "header.hpp"
std::string loadFromFile() {
    std::string data;
    std::string ans;
    std::ifstream inf("../file.txt");
    while(getline(inf, data)) {
        ans.append(data);
    }
    inf.close();
    return ans;
}
