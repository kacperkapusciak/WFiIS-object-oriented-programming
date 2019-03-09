//
// Created by kiper on 09.03.19.
//

#ifndef MOBILE_SAMOCHOD_H
#define MOBILE_SAMOCHOD_H

#include "Pojazd.h"
#include "Silnik.h"
using std::move;

class Samochod: public Pojazd{
public:
    Samochod() : Pojazd(4, 0, "czarny metalic") {}
    Samochod(Silnik typ, string kolor, double przebieg = 0) :
            Pojazd(4, przebieg, move(kolor)), _typ(move(typ))  {}

protected:
    Silnik _typ;
};


#endif //MOBILE_SAMOCHOD_H
