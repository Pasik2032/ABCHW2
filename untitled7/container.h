//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#ifndef UNTITLED7_CONTAINER_H
#define UNTITLED7_CONTAINER_H

#include "plants.h"

const int max_len = 10001;  // максимальная длина
class container {
    int len; // текущая длина
    plants **cont;
public:
    // Инициализация контейнера
    container();

    // Очистка контейнера от элементов (освобождение памяти)
    ~container();

    // Ввод содержимого контейнера из указанного потока
    void In(ifstream &ifst);

    // Случайный ввод содержимого контейнера
    void InRnd(int size);

    // Вывод содержимого контейнера в указанный поток
    void Out(ofstream &ofst);

    //сортировка
    void QuotientSort();
};

#endif //UNTITLED7_CONTAINER_H
