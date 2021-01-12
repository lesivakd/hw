//
// Created by Аня Лесива on 09/01/2021.
//
#include "header.hpp"
std::vector<std::string> uniqueWords(const std::string& fn) {
    size_t flag = 0;
    std::vector<std::string> test = split(fn);
    std::vector<std::string> ans;
    if (!test.empty()) {
        ans = {test[0]};
        for (auto k = test.begin() + 1; k != test.end(); ++k) {
            for (auto it = ans.begin(); it != ans.end(); it++) {
                if (*k == *it) {
                    ++flag;
                }
            }
            if (flag == 0) {
                ans.push_back(*k);
            }
            flag = 0;
        }
    }
    return ans;
}
