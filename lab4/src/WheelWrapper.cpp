#include "WheelWrapper.h"

void WheelWrapper::PressureInfo() {
    for (int i = 0; i < (int)_kola.size(); i++) {
        std::cout << "[INFO] :: Wheel ["<< i <<"] :: Pressure "<< _kola[i]->_pressure <<" [bar]" << std::endl;
    }
}

const std::vector<Wheel *> &WheelWrapper::get_kola() const {
    return _kola;
}

WheelWrapper::~WheelWrapper() {
    for (auto kolo: _kola)
        delete kolo;
}
