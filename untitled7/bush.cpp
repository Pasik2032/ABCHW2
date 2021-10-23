//
// Created by Даниил Пасилецкий on 23.09.2021.
//

#include "bush.h"

void bush::In(ifstream &ifst) {
    int months;
    ifst >> name >> months;
    month = static_cast<bush::Monthes>(months);
}

// Случайный ввод параметров кусторник
void bush::InRnd() {
    month = static_cast<bush::Monthes>(Random(12, 0));
    int length = Random(10);
    name = "";
    for (int i = 0; i < length; ++i) {
        char a = Random('z', 'a');
        name += a;
    }
}

void bush::Out(ofstream &ofst) {
    ofst << "It is bush: name = " << name << ", Number month of flowering = "
         << month << ". Quotient = " << Quotient() << "\n";
}

