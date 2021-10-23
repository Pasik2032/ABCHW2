//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#include "plants.h"

double plants::Quotient() {
    int count = 0;
    for (char i: name) {
        if (i != 'e' && i != 'y' && i != 'u'
            && i != 'i' && i != 'o' && i != 'a') {
            count += 1;
        }
    }
    return (double) count / (double) name.length();
}

