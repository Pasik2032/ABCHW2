//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#include "container.h"
#include "tree.h"
#include "bush.h"
#include "flowers.h"

// Инициализация контейнера
container::container() {
    cont = new plants *[10001];
    len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
container::~container() {
    delete[] cont;
    len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void container::In(ifstream &ifst) {
    while (!ifst.eof()) {
        int k;
        ifst >> k;
        plants *plant;
        switch (k) {
            case 1:
                plant = new tree;
                break;
            case 2:
                plant = new bush;
                break;
            case 3:
                plant = new flowers;
                break;
            default:
                continue;
        }
        plant->In(ifst);
        cont[len] = plant;
        len++;
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void container::InRnd(int size) {
    while (len < size) {
        plants *plant;
        int k = rand() % 3 + 1;
        switch (k) {
            case 1:
                plant = new tree;
                break;
            case 2:
                plant = new bush;
                break;
            case 3:
                plant = new flowers;
                break;
        }
        plant->InRnd();
        cont[len] = plant;
        len++;
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void container::Out(ofstream &ofst) {
    ofst << "Container contains " << len << " elements." << endl;
    for (int i = 0; i < len; i++) {
        ofst << i << ": ";
        cont[i]->Out(ofst);
    }
}

//------------------------------------------------------------------------------
// Вычисление суммы разности всех имен в контейнере
void container::QuotientSort() {
    int control = len - 1;
    int left = 0;
    int right = len - 1;
    do {
        for (int i = left; i < right; i++) {
            if (cont[i]->Quotient() > cont[i + 1]->Quotient()) {
                std::swap(cont[i], cont[i + 1]);
                control = i;
            }
        }
        right = control;
        for (int i = right; i > left; i--) {
            if (cont[i]->Quotient() < cont[i - 1]->Quotient()) {
                std::swap(cont[i], cont[i - 1]);
                control = i;
            }
        }
        left = control;
    } while (left < right);

}
