#pragma once

#include "Car.h"

class Ford final: public Car {
public:
    //konstruktor klasy Ford wykorzystujacy liste inicjalizacujna oraz konstruktor klasy Car
    Ford() : Car("Ford Fiesta", "Red", "Pb98", 1398, 45) {
        _gps.set_company_name("Google");
        _gps.set_gps_number("No.000.000");
    }

    //metoda GpsInfo override'owana XD (przeslonieta?) klasy Car 
    std::string GpsInfo() override {
        return "M/" +_gps.get_company_name() + "/" + _gps.get_gps_number();
    }
};

