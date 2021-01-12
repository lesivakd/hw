//
// Created by Аня Лесива on 09/01/2021.
//
#include "header.hpp"
std::vector<Input> sor(std::string &text1) {
    std::vector<std::string> text2 = split(text1); //текст разбитый на сортировку
    std::vector<std::string> text = uniqueWords(text1); // уникальные слова
    std::vector<Input> Dictionary;// хранилище уникальных слов и идущих за ними
    std::map<std::string, int> helper; // cортировка
    std::map<int, std::vector<std::string>> test;//проверяем использовалось ли это слово до этого
    auto a = text.begin();
// а слово котрое мы смотрим
//к слово которое идет за ним (к-1) тогда проверка на равенство с а
    for (size_t help = 0; help != text.size(); help++) {
        Dictionary.resize(Dictionary.size() + 1);
        Dictionary[help].lw = *a;
        for (auto k = text2.begin() + 1; k != text2.end(); ++k) {
            if (*(k - 1) == *a) {
                helper[*k]++;
            }
        }
        for (auto f = helper.begin(); f != helper.end(); f++) {
            test[f->second].push_back(f->first);
        }
        Dictionary[help].w = test;
        test.clear();
        helper.clear();
        ++a;
    }
    return Dictionary;
}
