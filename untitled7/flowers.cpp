//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#include "flowers.h"

void flowers::In(ifstream &ifst) {
    int types;
    ifst >> name >> types;
    type = static_cast<flowers::Type>(types);
}

void flowers::InRnd() {
    type = static_cast<flowers::Type>(Random(2, 0));
    int length = Random(10);
    name = "";
    for (int i = 0; i < length; ++i) {
        char a = Random('z', 'a');
        name += a;
    }
}

string printColor(flowers::Type type) {
    if (type == flowers::homemade)
        return "homemade";
    else if (type == flowers::garden)
        return "garden";
    else if (type == flowers::wild)
        return "wild";
    else
        return "EROR";
}

void flowers::Out(ofstream &ofst) {
    ofst << "It is flowers: name = " << name << ", type of = " << printColor(type) << ". Quotient = " << Quotient()
         << "\n";
}
