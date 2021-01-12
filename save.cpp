//
// Created by Аня Лесива on 09/01/2021.
//
#include "header.hpp"
void save(std::vector<Input> &test) {
    int count = 0;
    std::ofstream file("../Test.txt");
    if (file.tellp() == 0) {
        if (file.is_open()) {
            for (auto i = test.begin(); i < test.end(); i++) {
                file << i->lw << std::endl;
                auto f = --i->w.end();
                for (size_t k = i->w.size(); k != 0; --k) {
                    for (auto j = f->second.begin(); j != f->second.end(); ++j, count++) {
                        if (count > 9) { break; }
                        file << *j << std::endl;
                    }
                    if(f != i->w.begin()){
                        f--;
                    }
                    else{
                        break;
                    }
                }
                count = 0;
                file <<"," << std::endl;
            }
        }
    }
    file.close();

}
