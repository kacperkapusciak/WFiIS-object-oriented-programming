//
// Created by kiper on 09.03.19.
//

#include "Pojazd.h"

Pojazd& Pojazd::operator=(const Pojazd & p) {
    _kola = p._kola;
    _przebieg = 0;
    _kolor = p._kolor;
    return *this;
}