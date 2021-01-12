//
// Created by Аня Лесива on 09/01/2021.
//
#include "header.hpp"
std::vector<Re> FromFile() {
    std::vector<Re> ans;
    std::vector<std::string> text;
    std::string data,helper;
    size_t help = 0;
    std::ifstream inf("../Test.txt");
    while(getline(inf, data)) {
        ans.resize(ans.size() + 1);
        ans[help].lw = data;
        getline(inf, data);
        while(data != ","){
            text.push_back(data);
            getline(inf, data);
        }
        ans[help].w = text;
        text.clear();
        help++;
    }
    inf.close();
    return ans;
}
