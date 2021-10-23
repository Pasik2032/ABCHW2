//
// Created by Даниил Пасилецкий on 23.09.2021.
//

#include "tree.h"

void tree::In(ifstream &ifst) {
    ifst >> name >> age;
}

// Случайный ввод параметров дерева
void tree::InRnd() {
    age = Random(20);
    int length = Random(10);
    name = "";
    for (int i = 0; i < length; ++i) {
        char a = Random('z', 'a');
        name += a;
    }
}

void tree::Out(ofstream &ofst) {
    ofst << "It is tree: name = " << name << ", age = " << age << ". Quotient = " << Quotient() << "\n";
}

