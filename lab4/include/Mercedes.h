#pragma once
#include "Car.h"

class Mercedes final: public Car {
public:
    Mercedes() : Car("Mercedes A", default_color, "ON", 1598, 65) {}
};
