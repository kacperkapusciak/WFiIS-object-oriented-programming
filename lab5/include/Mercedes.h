#pragma once
#include "Car.h"

class Mercedes final: public Car {
public:
    //konstruktor klasy Mercedes wykorzystujacy liste inicjalizacujna oraz konstruktor klasy Car
    Mercedes() : Car("Mercedes A", "Red", "ON", 1598, 65) {
         _gps.set_company_name("Garmin");
         _gps.set_gps_number("No.000.000");
    }

    //metoda GpsInfo override'owana XD (przeslonieta?) klasy Car 
    std::string GpsInfo() override {
        return "M/" +_gps.get_company_name() + "/" + _gps.get_gps_number();
    }
};
