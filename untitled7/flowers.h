//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#ifndef UNTITLED7_FLOWERS_H
#define UNTITLED7_FLOWERS_H

#include "rnd.h"
#include "plants.h"
#include <fstream>

using namespace std;

class flowers : public plants {
public:
    enum Type {
        homemade, garden, wild
    };
private:
    Type type;

// Ввод параметров цветка из файла
    void In(ifstream &ifst) override;

// Случайный ввод параметров цветка
    void InRnd() override;

// Вывод параметров цветка в форматируемый поток
    void Out(ofstream &ofst) override;
};

#endif //UNTITLED7_FLOWERS_H
