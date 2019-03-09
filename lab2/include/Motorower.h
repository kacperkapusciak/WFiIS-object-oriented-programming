//
// Created by kiper on 09.03.19.
//

#ifndef MOBILE_MOTOROWER_H
#define MOBILE_MOTOROWER_H
#include "Pojazd.h"
#include "Silnik.h"

class Motorower: public Pojazd {
public:
    Motorower() : Pojazd(2, 0, "czerwony metalic") {}
    Motorower(Silnik typ, string kolor, double przebieg = 0) :
            Pojazd(2, przebieg, move(kolor)), _typ(move(typ)) {}
protected:
    Silnik _typ;
};


#endif //MOBILE_MOTOROWER_H
