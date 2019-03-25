#pragma once
#include "Gps.h"
#include <string>
#include <iostream>
#include <vector>


class Car {
public:
    //konstruktor 
    Car(const std::string &_type, const std::string &_color, const std::string &_fuel, int _capacity, int _power);

    //wirtualny destruktor
    virtual ~Car() = default;

    //statyczna metoda tworzaca w zaleznosci od argumentu obiekt Mercedes lub Ford
    static Car *Create(std::string type);

    //przeladowanie operatora strumienia
    friend std::ostream& operator<<(std::ostream &, const Car&);

    //czysto wirtualna metoda GpsInfo
    virtual std::string GpsInfo() = 0;

protected: 
    Gps _gps;

private:
    std::string _type;
    std::string _color;
    std::string _fuel;
    int _capacity;
    int _power;
};

inline std::ostream &operator<<(std::ostream &out, const Car& c) {
    return out << std::endl <<"[INFO] Car:: Type " << c._type << std::endl
    << "[INFO] Car:: Color " << c._color << std::endl
    << "[INFO] Engine:: Fuel " << c._fuel << std::endl
    << "[INFO] Engine:: Capacity " << c._capacity << " [cm^3]"<<std::endl
    << "[INFO] Engine:: Power " << c._power << " [kW]";
}

