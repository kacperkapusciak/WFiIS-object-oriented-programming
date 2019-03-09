//
// Created by kiper on 09.03.19.
//

#ifndef MOBILE_ROMET_H
#define MOBILE_ROMET_H

#include "Motorower.h"

class Romet final : public Motorower {
public:
    Romet() = default;
    Romet(Romet& r) : Motorower(r._typ, r._kolor, 0) {}
    Romet(Silnik silnik, double przebieg) :
            Motorower(move(silnik), "czerwony metalic", przebieg) {}
};


#endif //MOBILE_ROMET_H
