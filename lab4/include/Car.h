
#ifndef MOBILE3_CAR_H
#define MOBILE3_CAR_H

#include <string>
#include <iostream>
#include "WheelWrapper.h"
#include <vector>

static std::string default_color = "Red";

class Car {
public:
    Car(const std::string &_type, const std::string &_color, const std::string &_fuel, int _capacity, int _power);

    ~Car();

    static Car *Create(std::string type);

    static void DefaultColor(const std::string &color);

    friend std::ostream& operator<<(std::ostream &, const Car&);

    WheelWrapper * Wheels();

    const std::vector<Wheel *> & WheelsVector() {
        return wheelWrapper->get_kola();
    }
private:
    std::string _type;
    std::string _color;
    std::string _fuel;
    int _capacity;
    int _power;
    WheelWrapper * wheelWrapper;
};

inline std::ostream &operator<<(std::ostream &out, const Car& c) {
    return out << "[INFO] Car:: Type " << c._type << std::endl
    << "[INFO] Car:: Color " << c._color << std::endl
    << "[INFO] Engine:: Fuel " << c._fuel << std::endl
    << "[INFO] Engine:: Capacity " << c._capacity << " [cm^3]"<<std::endl
    << "[INFO] Engine:: Power " << c._power << " [kW]"<< std::endl;
}


#endif //MOBILE3_CAR_H
