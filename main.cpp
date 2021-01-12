#include "header.hpp"

int main() {
    std::string qe;// cлово к которому надо подобрать следющее
    std::string text1 = loadFromFile();//загружаем текст из которого осставим статистику
    std::vector<Input> test = sor(text1);// составление статистики
    save(test); // статистика сохраняется в файл
    std::vector<Re> re = FromFile(); // создание структуры откда выгружаем словечки
    std::cin >> qe;
    while(qe != "stop") {
        for (auto i = re.begin(); i != re.end(); i++) {
            if (qe == i->lw) {
                for (auto f = i->w.begin(); f != i->w.end(); f++) {
                    std::cout << *f << ' ';
                }
                break;
            }
        }
        std::cout << std::endl;
        std::cin >> qe;
    }
    return 0;
}
