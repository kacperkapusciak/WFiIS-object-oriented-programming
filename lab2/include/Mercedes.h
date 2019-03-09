//
// Created by kiper on 09.03.19.
//

#ifndef MOBILE_MERCEDES_H
#define MOBILE_MERCEDES_H

#include "Samochod.h"

class Mercedes final : public Samochod {
public:
    Mercedes() = default;
    Mercedes(Silnik silnik, double przebieg) :
            Samochod(move(silnik), "czarny metalic", przebieg) {}
    void Przebieg(double przebieg) { setPrzebieg(przebieg); };
};


#endif //MOBILE_MERCEDES_H
