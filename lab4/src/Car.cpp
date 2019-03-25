#include "Car.h"
#include "Mercedes.h"
#include "Ford.h"


Car::Car(const std::string &_type, const std::string &_color, const std::string &_fuel, int _capacity, int _power)
        : _type(_type), _color(_color), _fuel(_fuel), _capacity(_capacity), _power(_power) {
    wheelWrapper = new WheelWrapper(4);
}
Car::~Car() {
    delete wheelWrapper;
}
Car *Car::Create(std::string type) {
    if (type == "Mercedes")
        return new Mercedes();
    else
        return new Ford();
}

void Car::DefaultColor(const std::string &color) {
    default_color = color;
}

WheelWrapper *Car::Wheels() {
    return wheelWrapper;
}