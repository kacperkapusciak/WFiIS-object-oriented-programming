#include "Mercedes.h"


void Mercedes::WheelsPressureInfo() {
    for (int i = 0; i < (int)_kola.size(); i++) {
        cout << "[INFO] Mercedes A :: Wheel [" << i << "] :: Pressure " 
             << _kola[i]->_cisnienie << " [bar]" << endl;
    }
}