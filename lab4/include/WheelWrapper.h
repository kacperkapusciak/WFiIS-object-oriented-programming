#pragma once

#include <iostream>
#include <vector>

struct Wheel {
    double _pressure;

    explicit Wheel(double _pressure) : _pressure(_pressure) {}

    double Pressure() {
        return _pressure;
    }
};

class WheelWrapper {
public:
    WheelWrapper() = delete;

    explicit WheelWrapper(int how_many_wheels) {
        for (int i = 0; i < how_many_wheels; i++)
            _kola.emplace_back(new Wheel(2.2));
    }

    ~WheelWrapper();

    void PressureInfo();

    const std::vector<Wheel *> &get_kola() const;

private:
    std::vector<Wheel *> _kola;
};

