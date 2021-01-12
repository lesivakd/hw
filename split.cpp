//
// Created by Аня Лесива on 09/01/2021.
//
#include "header.hpp"
std::vector<std::string> split(const std::string& str) {
    char sep = ' ';
    char se = ',';
    char s = '.';
    std::vector<std::string> ans;
    std::string help;
    if ((str.empty()) || (str[0] == sep) || (str[0] == se) || (str[0] == s)) {
        return ans;
    }
    for (size_t i = 0; i < str.size(); i++) {
        if ((str[i] != s) && (str[i] != se) && (str[i] != sep)) {
            help += (str[i]);
        } else {
            if (!help.empty()) {
                ans.push_back(help);
                help.clear();
            }
        }
    }
    if ((str[str.size() - 1] != s) && (str[str.size() - 1] != se) &&
        (str[str.size() - 1] != sep)) {
        ans.push_back(help);
    }
    return ans;
}
