//
// Created by Даниил Пасилецкий on 23.09.2021.
//

#ifndef UNTITLED7_TREE_H
#define UNTITLED7_TREE_H

#include <fstream>
#include "plants.h"
# include "rnd.h"

using namespace std;

class tree : public plants {
private:
    long int age;

// Ввод параметров цветка из файла
    void In(ifstream &ifst) override;

// Случайный ввод параметров цветка
    void InRnd() override;

// Вывод параметров цветка в форматируемый поток
    void Out(ofstream &ofst) override;
};

#endif //UNTITLED7_TREE_H
