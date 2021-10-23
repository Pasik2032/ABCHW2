//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#ifndef UNTITLED7_PLANTS_H
#define UNTITLED7_PLANTS_H


#include "string.h"
#include <fstream>

using namespace std;

//Структура обобщения
class plants {
public:
    string name;

    virtual ~plants() = default;;

// Ввод параметров из файла
    virtual void In(ifstream &ifst) = 0;

// Случайный ввод параметров
    virtual void InRnd() = 0;

// Вывод параметров в форматируемый поток
    virtual void Out(ofstream &ofst) = 0;

// Вычисление частного от деления числа гласных букв в названии на общую длину названия (действительное число)
    double Quotient();

};

#endif  //UNTITLED7_PLANTS_H
