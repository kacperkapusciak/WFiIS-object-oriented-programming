#pragma once

#include "Car.h"

class Ford final: public Car {
public:
    Ford() : Car("Ford Fiesta", default_color, "Pb98", 1398, 45) {}
};

