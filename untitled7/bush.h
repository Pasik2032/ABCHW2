//
// Created by Даниил Пасилецкий on 23.09.2021.
//

#ifndef UNTITLED7_BUSH_H
#define UNTITLED7_BUSH_H

#include "plants.h"
# include "rnd.h"
#include <fstream>

using namespace std;

class bush : public plants {
public:
    enum Monthes {
        January, February, March, April, May, June, July, August, September, October, November, December
    };
private:
    Monthes month;

// Ввод параметров цветка из файла
    void In(ifstream &ifst) override;

// Случайный ввод параметров цветка
    void InRnd() override;

// Вывод параметров цветка в форматируемый поток
    void Out(ofstream &ofst) override;
};

#endif //UNTITLED7_BUSH_H
